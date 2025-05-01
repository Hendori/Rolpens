
/* CollisionObject3D::get_collision_layer() const */

undefined4 __thiscall CollisionObject3D::get_collision_layer(CollisionObject3D *this)

{
  return *(undefined4 *)(this + 0x528);
}



/* CollisionObject3D::get_collision_mask() const */

undefined4 __thiscall CollisionObject3D::get_collision_mask(CollisionObject3D *this)

{
  return *(undefined4 *)(this + 0x52c);
}



/* CollisionObject3D::get_collision_priority() const */

undefined4 __thiscall CollisionObject3D::get_collision_priority(CollisionObject3D *this)

{
  return *(undefined4 *)(this + 0x530);
}



/* CollisionObject3D::get_disable_mode() const */

undefined4 __thiscall CollisionObject3D::get_disable_mode(CollisionObject3D *this)

{
  return *(undefined4 *)(this + 0x544);
}



/* CollisionObject3D::_space_changed(RID const&) */

void CollisionObject3D::_space_changed(RID *param_1)

{
  return;
}



/* CollisionObject3D::is_ray_pickable() const */

CollisionObject3D __thiscall CollisionObject3D::is_ray_pickable(CollisionObject3D *this)

{
  return this[0x56a];
}



/* CollisionObject3D::set_capture_input_on_drag(bool) */

void __thiscall CollisionObject3D::set_capture_input_on_drag(CollisionObject3D *this,bool param_1)

{
  this[0x569] = (CollisionObject3D)param_1;
  return;
}



/* CollisionObject3D::get_capture_input_on_drag() const */

CollisionObject3D __thiscall CollisionObject3D::get_capture_input_on_drag(CollisionObject3D *this)

{
  return this[0x569];
}



/* CollisionObject3D::get_collision_layer_value(int) const */

undefined4 __thiscall
CollisionObject3D::get_collision_layer_value(CollisionObject3D *this,int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  if (param_1 < 1) {
    _err_print_error("get_collision_layer_value","scene/3d/physics/collision_object_3d.cpp",0xb2,
                     "Condition \"p_layer_number < 1\" is true. Returning: false",
                     "Collision layer number must be between 1 and 32 inclusive.",0,0);
    uVar2 = 0;
  }
  else if (param_1 < 0x21) {
    uVar1 = 1 << ((char)param_1 - 1U & 0x1f) & *(uint *)(this + 0x528);
    uVar2 = CONCAT31((int3)(uVar1 >> 8),uVar1 != 0);
  }
  else {
    _err_print_error("get_collision_layer_value","scene/3d/physics/collision_object_3d.cpp",0xb3,
                     "Condition \"p_layer_number > 32\" is true. Returning: false",
                     "Collision layer number must be between 1 and 32 inclusive.",0,0);
    uVar2 = 0;
  }
  return uVar2;
}



/* CollisionObject3D::get_collision_mask_value(int) const */

undefined4 __thiscall
CollisionObject3D::get_collision_mask_value(CollisionObject3D *this,int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  if (param_1 < 1) {
    _err_print_error("get_collision_mask_value","scene/3d/physics/collision_object_3d.cpp",0xc4,
                     "Condition \"p_layer_number < 1\" is true. Returning: false",
                     "Collision layer number must be between 1 and 32 inclusive.",0,0);
    uVar2 = 0;
  }
  else if (param_1 < 0x21) {
    uVar1 = 1 << ((char)param_1 - 1U & 0x1f) & *(uint *)(this + 0x52c);
    uVar2 = CONCAT31((int3)(uVar1 >> 8),uVar1 != 0);
  }
  else {
    _err_print_error("get_collision_mask_value","scene/3d/physics/collision_object_3d.cpp",0xc5,
                     "Condition \"p_layer_number > 32\" is true. Returning: false",
                     "Collision layer number must be between 1 and 32 inclusive.",0,0);
    uVar2 = 0;
  }
  return uVar2;
}



/* CollisionObject3D::set_collision_layer(unsigned int) */

void __thiscall CollisionObject3D::set_collision_layer(CollisionObject3D *this,uint param_1)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  *(uint *)(this + 0x528) = param_1;
  if (this[0x534] == (CollisionObject3D)0x0) {
    plVar1 = (long *)PhysicsServer3D::get_singleton();
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + 0x388);
  }
  else {
    plVar1 = (long *)PhysicsServer3D::get_singleton();
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + 0x2b8);
  }
                    /* WARNING: Could not recover jumptable at 0x001001ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar1,*(undefined8 *)(this + 0x538),param_1);
  return;
}



/* CollisionObject3D::set_collision_layer_value(int, bool) */

undefined8 __thiscall
CollisionObject3D::set_collision_layer_value(CollisionObject3D *this,int param_1,bool param_2)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  
  if (param_1 < 1) {
    uVar2 = _err_print_error("set_collision_layer_value","scene/3d/physics/collision_object_3d.cpp",
                             0xa6,"Condition \"p_layer_number < 1\" is true.",
                             "Collision layer number must be between 1 and 32 inclusive.",0,0);
  }
  else {
    if (param_1 < 0x21) {
      uVar3 = 1 << ((char)param_1 - 1U & 0x1f);
      uVar1 = ~uVar3 & *(uint *)(this + 0x528);
      if (param_2) {
        uVar1 = uVar3 | *(uint *)(this + 0x528);
      }
      uVar2 = set_collision_layer(this,uVar1);
      return uVar2;
    }
    uVar2 = 0;
    _err_print_error("set_collision_layer_value","scene/3d/physics/collision_object_3d.cpp",0xa7,
                     "Condition \"p_layer_number > 32\" is true.",
                     "Collision layer number must be between 1 and 32 inclusive.",0);
  }
  return uVar2;
}



/* CollisionObject3D::set_collision_mask(unsigned int) */

void __thiscall CollisionObject3D::set_collision_mask(CollisionObject3D *this,uint param_1)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  *(uint *)(this + 0x52c) = param_1;
  if (this[0x534] == (CollisionObject3D)0x0) {
    plVar1 = (long *)PhysicsServer3D::get_singleton();
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + 0x398);
  }
  else {
    plVar1 = (long *)PhysicsServer3D::get_singleton();
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + 0x2c8);
  }
                    /* WARNING: Could not recover jumptable at 0x0010031f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar1,*(undefined8 *)(this + 0x538),param_1);
  return;
}



/* CollisionObject3D::set_collision_mask_value(int, bool) */

undefined8 __thiscall
CollisionObject3D::set_collision_mask_value(CollisionObject3D *this,int param_1,bool param_2)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  
  if (param_1 < 1) {
    uVar2 = _err_print_error("set_collision_mask_value","scene/3d/physics/collision_object_3d.cpp",
                             0xb8,"Condition \"p_layer_number < 1\" is true.",
                             "Collision layer number must be between 1 and 32 inclusive.",0,0);
  }
  else {
    if (param_1 < 0x21) {
      uVar3 = 1 << ((char)param_1 - 1U & 0x1f);
      uVar1 = ~uVar3 & *(uint *)(this + 0x52c);
      if (param_2) {
        uVar1 = uVar3 | *(uint *)(this + 0x52c);
      }
      uVar2 = set_collision_mask(this,uVar1);
      return uVar2;
    }
    uVar2 = 0;
    _err_print_error("set_collision_mask_value","scene/3d/physics/collision_object_3d.cpp",0xb9,
                     "Condition \"p_layer_number > 32\" is true.",
                     "Collision layer number must be between 1 and 32 inclusive.",0);
  }
  return uVar2;
}



/* CollisionObject3D::set_collision_priority(float) */

void __thiscall CollisionObject3D::set_collision_priority(CollisionObject3D *this,float param_1)

{
  long *plVar1;
  
  *(float *)(this + 0x530) = param_1;
  if (this[0x534] != (CollisionObject3D)0x0) {
    return;
  }
  plVar1 = (long *)PhysicsServer3D::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x00100452. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x3a8))(param_1,plVar1,*(undefined8 *)(this + 0x538));
  return;
}



/* CollisionObject3D::_update_pickable() [clone .part.0] */

void __thiscall CollisionObject3D::_update_pickable(CollisionObject3D *this)

{
  undefined1 uVar1;
  long *plVar2;
  
  uVar1 = 0;
  if (this[0x56a] != (CollisionObject3D)0x0) {
    uVar1 = Node3D::is_visible_in_tree();
  }
  if (this[0x534] != (CollisionObject3D)0x0) {
    plVar2 = (long *)PhysicsServer3D::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x0010049e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x2f0))(plVar2,*(undefined8 *)(this + 0x538),uVar1);
    return;
  }
  plVar2 = (long *)PhysicsServer3D::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x001004c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x4c8))(plVar2,*(undefined8 *)(this + 0x538),uVar1);
  return;
}



/* CollisionObject3D::set_ray_pickable(bool) */

void __thiscall CollisionObject3D::set_ray_pickable(CollisionObject3D *this,bool param_1)

{
  this[0x56a] = (CollisionObject3D)param_1;
  if (((byte)this[0x2fa] & 0x40) != 0) {
    _update_pickable(this);
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



/* CollisionObject3D::is_shape_owner_disabled(unsigned int) const */

undefined1 __thiscall
CollisionObject3D::is_shape_owner_disabled(CollisionObject3D *this,uint param_1)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = *(long *)(this + 0x558);
  if (*(long *)(this + 0x550) != 0) {
    lVar4 = *(long *)(*(long *)(this + 0x550) + 0x10);
    for (lVar3 = lVar4; lVar1 != lVar3; lVar3 = *(long *)(lVar3 + 0x10)) {
      while (*(uint *)(lVar3 + 0x30) <= param_1) {
        if (param_1 <= *(uint *)(lVar3 + 0x30)) {
          do {
            if (param_1 < *(uint *)(lVar4 + 0x30)) {
              lVar4 = *(long *)(lVar4 + 0x10);
            }
            else {
              if (param_1 <= *(uint *)(lVar4 + 0x30)) {
                return *(undefined1 *)(lVar4 + 0x80);
              }
              lVar4 = *(long *)(lVar4 + 8);
            }
          } while (lVar1 != lVar4);
          _err_print_error("operator[]","./core/templates/rb_map.h",0x2a8,
                           "FATAL: Condition \"!e\" is true.",0,0);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        lVar3 = *(long *)(lVar3 + 8);
        if (lVar1 == lVar3) goto LAB_0010067d;
      }
    }
  }
LAB_0010067d:
  _err_print_error("is_shape_owner_disabled","scene/3d/physics/collision_object_3d.cpp",0x233,
                   "Condition \"!shapes.has(p_owner)\" is true. Returning: false",0,0);
  return 0;
}



/* CollisionObject3D::shape_owner_get_shape_count(unsigned int) const */

undefined4 __thiscall
CollisionObject3D::shape_owner_get_shape_count(CollisionObject3D *this,uint param_1)

{
  long lVar1;
  code *pcVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = *(long *)(this + 0x558);
  if (*(long *)(this + 0x550) != 0) {
    lVar5 = *(long *)(*(long *)(this + 0x550) + 0x10);
    for (lVar4 = lVar5; lVar1 != lVar4; lVar4 = *(long *)(lVar4 + 0x10)) {
      while (*(uint *)(lVar4 + 0x30) <= param_1) {
        if (param_1 <= *(uint *)(lVar4 + 0x30)) {
          do {
            if (param_1 < *(uint *)(lVar5 + 0x30)) {
              lVar5 = *(long *)(lVar5 + 0x10);
            }
            else {
              if (param_1 <= *(uint *)(lVar5 + 0x30)) {
                if (*(long *)(lVar5 + 0x78) == 0) {
                  uVar3 = 0;
                }
                else {
                  uVar3 = *(undefined4 *)(*(long *)(lVar5 + 0x78) + -8);
                }
                return uVar3;
              }
              lVar5 = *(long *)(lVar5 + 8);
            }
          } while (lVar1 != lVar5);
          _err_print_error("operator[]","./core/templates/rb_map.h",0x2a8,
                           "FATAL: Condition \"!e\" is true.",0,0);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        lVar4 = *(long *)(lVar4 + 8);
        if (lVar1 == lVar4) goto LAB_0010075d;
      }
    }
  }
LAB_0010075d:
  _err_print_error("shape_owner_get_shape_count","scene/3d/physics/collision_object_3d.cpp",0x279,
                   "Condition \"!shapes.has(p_owner)\" is true. Returning: 0",0,0);
  return 0;
}



/* CowData<int>::_ref(CowData<int> const&) [clone .part.0] */

void __thiscall CowData<int>::_ref(CowData<int> *this,CowData *param_1)

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



/* CollisionObject3D::shape_owner_get_transform(unsigned int) const */

undefined1 (*) [16] CollisionObject3D::shape_owner_get_transform(uint param_1)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  uint in_EDX;
  long in_RSI;
  undefined4 in_register_0000003c;
  undefined1 (*pauVar11) [16];
  
  pauVar11 = (undefined1 (*) [16])CONCAT44(in_register_0000003c,param_1);
  lVar1 = *(long *)(in_RSI + 0x558);
  if (*(long *)(in_RSI + 0x550) != 0) {
    lVar10 = *(long *)(*(long *)(in_RSI + 0x550) + 0x10);
    for (lVar9 = lVar10; lVar1 != lVar9; lVar9 = *(long *)(lVar9 + 0x10)) {
      while (*(uint *)(lVar9 + 0x30) <= in_EDX) {
        if (in_EDX <= *(uint *)(lVar9 + 0x30)) {
          do {
            if (in_EDX < *(uint *)(lVar10 + 0x30)) {
              lVar10 = *(long *)(lVar10 + 0x10);
            }
            else {
              if (in_EDX <= *(uint *)(lVar10 + 0x30)) {
                uVar3 = *(undefined8 *)(lVar10 + 0x48);
                uVar4 = *(undefined8 *)(lVar10 + 0x50);
                uVar5 = *(undefined8 *)(lVar10 + 0x58);
                uVar6 = *(undefined8 *)(lVar10 + 0x60);
                uVar7 = *(undefined8 *)(lVar10 + 0x68);
                *(undefined8 *)*pauVar11 = *(undefined8 *)(lVar10 + 0x40);
                *(undefined8 *)(*pauVar11 + 8) = uVar3;
                *(undefined8 *)pauVar11[1] = uVar4;
                *(undefined8 *)(pauVar11[1] + 8) = uVar5;
                *(undefined8 *)pauVar11[2] = uVar6;
                *(undefined8 *)(pauVar11[2] + 8) = uVar7;
                return pauVar11;
              }
              lVar10 = *(long *)(lVar10 + 8);
            }
          } while (lVar1 != lVar10);
          _err_print_error("operator[]","./core/templates/rb_map.h",0x2a8,
                           "FATAL: Condition \"!e\" is true.",0,0);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        lVar9 = *(long *)(lVar9 + 8);
        if (lVar1 == lVar9) goto LAB_001008cd;
      }
    }
  }
LAB_001008cd:
  _err_print_error("shape_owner_get_transform","scene/3d/physics/collision_object_3d.cpp",599,
                   "Condition \"!shapes.has(p_owner)\" is true. Returning: Transform3D()",0,0);
  uVar8 = _LC27;
  *(undefined4 *)pauVar11[2] = 0x3f800000;
  *(undefined8 *)(pauVar11[2] + 4) = 0;
  *(undefined4 *)(pauVar11[2] + 0xc) = 0;
  *pauVar11 = ZEXT416(uVar8);
  pauVar11[1] = ZEXT416(uVar8);
  return pauVar11;
}



/* CollisionObject3D::shape_owner_get_owner(unsigned int) const */

ulong __thiscall CollisionObject3D::shape_owner_get_owner(CollisionObject3D *this,uint param_1)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  ulong *puVar7;
  long lVar8;
  long in_FS_OFFSET;
  bool bVar9;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = *(long *)(this + 0x558);
  if (*(long *)(this + 0x550) != 0) {
    lVar8 = *(long *)(*(long *)(this + 0x550) + 0x10);
    for (lVar4 = lVar8; lVar2 != lVar4; lVar4 = *(long *)(lVar4 + 0x10)) {
      while (*(uint *)(lVar4 + 0x30) <= param_1) {
        if (param_1 <= *(uint *)(lVar4 + 0x30)) goto LAB_00100a29;
        lVar4 = *(long *)(lVar4 + 8);
        if (lVar2 == lVar4) goto LAB_001009ed;
      }
    }
  }
LAB_001009ed:
  _err_print_error("shape_owner_get_owner","scene/3d/physics/collision_object_3d.cpp",0x25d,
                   "Condition \"!shapes.has(p_owner)\" is true. Returning: nullptr",0,0);
  uVar5 = 0;
LAB_00100ad0:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
LAB_00100a29:
  if (param_1 < *(uint *)(lVar8 + 0x30)) {
    lVar8 = *(long *)(lVar8 + 0x10);
  }
  else {
    if (param_1 <= *(uint *)(lVar8 + 0x30)) {
      uVar6 = (uint)*(ulong *)(lVar8 + 0x38) & 0xffffff;
      if (uVar6 < (uint)ObjectDB::slot_max) {
        while( true ) {
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
        puVar7 = (ulong *)((ulong)uVar6 * 0x10 + ObjectDB::object_slots);
        if ((*(ulong *)(lVar8 + 0x38) >> 0x18 & 0x7fffffffff) == (*puVar7 & 0x7fffffffff)) {
          uVar5 = puVar7[1];
          ObjectDB::spin_lock._0_1_ = '\0';
        }
        else {
          uVar5 = 0;
          ObjectDB::spin_lock._0_1_ = '\0';
        }
      }
      else {
        _err_print_error("get_instance","./core/object/object.h",0x418,
                         "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
        uVar5 = 0;
      }
      goto LAB_00100ad0;
    }
    lVar8 = *(long *)(lVar8 + 8);
  }
  if (lVar2 == lVar8) {
    _err_print_error("operator[]","./core/templates/rb_map.h",0x2a8,
                     "FATAL: Condition \"!e\" is true.",0,0);
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  goto LAB_00100a29;
}



/* CollisionObject3D::shape_owner_get_shape(unsigned int, int) const */

long * CollisionObject3D::shape_owner_get_shape(uint param_1,int param_2)

{
  code *pcVar1;
  char cVar2;
  int in_ECX;
  long lVar3;
  uint in_EDX;
  long lVar4;
  undefined4 in_register_00000034;
  undefined4 in_register_0000003c;
  long *plVar5;
  long lVar6;
  long lVar7;
  
  plVar5 = (long *)CONCAT44(in_register_0000003c,param_1);
  lVar3 = *(long *)(CONCAT44(in_register_00000034,param_2) + 0x550);
  lVar7 = *(long *)(CONCAT44(in_register_00000034,param_2) + 0x558);
  if (lVar3 != 0) {
    lVar3 = *(long *)(lVar3 + 0x10);
    for (lVar4 = lVar3; lVar7 != lVar4; lVar4 = *(long *)(lVar4 + 0x10)) {
      while (*(uint *)(lVar4 + 0x30) <= in_EDX) {
        if (in_EDX <= *(uint *)(lVar4 + 0x30)) {
          lVar4 = lVar3;
          if (-1 < in_ECX) goto LAB_00100bd9;
          goto LAB_00100c29;
        }
        lVar4 = *(long *)(lVar4 + 8);
        if (lVar7 == lVar4) goto LAB_00100b8d;
      }
    }
  }
LAB_00100b8d:
  _err_print_error("shape_owner_get_shape","scene/3d/physics/collision_object_3d.cpp",0x27f,
                   "Condition \"!shapes.has(p_owner)\" is true. Returning: Ref<Shape3D>()",0,0);
  *plVar5 = 0;
  return plVar5;
LAB_00100bd9:
  if (in_EDX < *(uint *)(lVar4 + 0x30)) {
    lVar4 = *(long *)(lVar4 + 0x10);
  }
  else {
    if (in_EDX <= *(uint *)(lVar4 + 0x30)) {
      if ((*(long *)(lVar4 + 0x78) == 0) ||
         (lVar6 = (long)in_ECX, *(long *)(*(long *)(lVar4 + 0x78) + -8) <= lVar6)) {
LAB_00100c29:
        do {
          if (in_EDX < *(uint *)(lVar3 + 0x30)) {
            lVar3 = *(long *)(lVar3 + 0x10);
          }
          else {
            if (in_EDX <= *(uint *)(lVar3 + 0x30)) {
              if (*(long *)(lVar3 + 0x78) == 0) {
                lVar3 = 0;
              }
              else {
                lVar3 = *(long *)(*(long *)(lVar3 + 0x78) + -8);
              }
              _err_print_index_error
                        ("shape_owner_get_shape","scene/3d/physics/collision_object_3d.cpp",0x280,
                         (long)in_ECX,lVar3,"p_shape","shapes[p_owner].shapes.size()","",false,false
                        );
              *plVar5 = 0;
              return plVar5;
            }
            lVar3 = *(long *)(lVar3 + 8);
          }
        } while (lVar7 != lVar3);
      }
      else {
        do {
          if (in_EDX < *(uint *)(lVar3 + 0x30)) {
            lVar3 = *(long *)(lVar3 + 0x10);
          }
          else {
            if (in_EDX <= *(uint *)(lVar3 + 0x30)) {
              lVar3 = *(long *)(lVar3 + 0x78);
              if (lVar3 == 0) {
                lVar7 = 0;
              }
              else {
                lVar7 = *(long *)(lVar3 + -8);
                if (lVar6 < lVar7) {
                  *plVar5 = 0;
                  lVar3 = *(long *)(lVar3 + 8 + lVar6 * 0x18);
                  if (lVar3 == 0) {
                    return plVar5;
                  }
                  *plVar5 = lVar3;
                  cVar2 = RefCounted::reference();
                  if (cVar2 != '\0') {
                    return plVar5;
                  }
                  *plVar5 = 0;
                  return plVar5;
                }
              }
              _err_print_index_error
                        ("get","./core/templates/cowdata.h",0xdb,lVar6,lVar7,"p_index","size()","",
                         false,true);
              _err_flush_stdout();
                    /* WARNING: Does not return */
              pcVar1 = (code *)invalidInstructionException();
              (*pcVar1)();
            }
            lVar3 = *(long *)(lVar3 + 8);
          }
        } while (lVar7 != lVar3);
      }
LAB_00100bed:
      _err_print_error("operator[]","./core/templates/rb_map.h",0x2a8,
                       "FATAL: Condition \"!e\" is true.",0,0);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    lVar4 = *(long *)(lVar4 + 8);
  }
  if (lVar7 == lVar4) goto LAB_00100bed;
  goto LAB_00100bd9;
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



/* CollisionObject3D::shape_owner_get_shape_index(unsigned int, int) const */

undefined4 __thiscall
CollisionObject3D::shape_owner_get_shape_index(CollisionObject3D *this,uint param_1,int param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = *(long *)(this + 0x558);
  if (*(long *)(this + 0x550) != 0) {
    lVar4 = *(long *)(*(long *)(this + 0x550) + 0x10);
    for (lVar2 = lVar4; lVar5 != lVar2; lVar2 = *(long *)(lVar2 + 0x10)) {
      while (*(uint *)(lVar2 + 0x30) <= param_1) {
        if (param_1 <= *(uint *)(lVar2 + 0x30)) {
          lVar2 = lVar4;
          if (param_2 < 0) goto LAB_00100fe9;
          goto LAB_00100f99;
        }
        lVar2 = *(long *)(lVar2 + 8);
        if (lVar5 == lVar2) goto LAB_00100f50;
      }
    }
  }
LAB_00100f50:
  _err_print_error("shape_owner_get_shape_index","scene/3d/physics/collision_object_3d.cpp",0x286,
                   "Condition \"!shapes.has(p_owner)\" is true. Returning: -1",0,0);
  return 0xffffffff;
LAB_00100f99:
  if (param_1 < *(uint *)(lVar2 + 0x30)) {
    lVar2 = *(long *)(lVar2 + 0x10);
  }
  else {
    if (param_1 <= *(uint *)(lVar2 + 0x30)) {
      if ((*(long *)(lVar2 + 0x78) == 0) ||
         (lVar3 = (long)param_2, *(long *)(*(long *)(lVar2 + 0x78) + -8) <= lVar3)) {
LAB_00100fe9:
        do {
          if (param_1 < *(uint *)(lVar4 + 0x30)) {
            lVar4 = *(long *)(lVar4 + 0x10);
          }
          else {
            if (param_1 <= *(uint *)(lVar4 + 0x30)) {
              if (*(long *)(lVar4 + 0x78) == 0) {
                lVar5 = 0;
              }
              else {
                lVar5 = *(long *)(*(long *)(lVar4 + 0x78) + -8);
              }
              _err_print_index_error
                        ("shape_owner_get_shape_index","scene/3d/physics/collision_object_3d.cpp",
                         0x287,(long)param_2,lVar5,"p_shape","shapes[p_owner].shapes.size()","",
                         false,false);
              return 0xffffffff;
            }
            lVar4 = *(long *)(lVar4 + 8);
          }
        } while (lVar5 != lVar4);
      }
      else {
        do {
          if (param_1 < *(uint *)(lVar4 + 0x30)) {
            lVar4 = *(long *)(lVar4 + 0x10);
          }
          else {
            if (param_1 <= *(uint *)(lVar4 + 0x30)) {
              lVar5 = *(long *)(lVar4 + 0x78);
              if (lVar5 == 0) {
                lVar4 = 0;
              }
              else {
                lVar4 = *(long *)(lVar5 + -8);
                if (lVar3 < lVar4) {
                  return *(undefined4 *)(lVar5 + 0x10 + lVar3 * 0x18);
                }
              }
              _err_print_index_error
                        ("get","./core/templates/cowdata.h",0xdb,lVar3,lVar4,"p_index","size()","",
                         false,true);
              _err_flush_stdout();
                    /* WARNING: Does not return */
              pcVar1 = (code *)invalidInstructionException();
              (*pcVar1)();
            }
            lVar4 = *(long *)(lVar4 + 8);
          }
        } while (lVar5 != lVar4);
      }
LAB_00100fb0:
      _err_print_error("operator[]","./core/templates/rb_map.h",0x2a8,
                       "FATAL: Condition \"!e\" is true.",0,0);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    lVar2 = *(long *)(lVar2 + 8);
  }
  if (lVar5 == lVar2) goto LAB_00100fb0;
  goto LAB_00100f99;
}



/* CollisionObject3D::_apply_disabled() */

void __thiscall CollisionObject3D::_apply_disabled(CollisionObject3D *this)

{
  long *plVar1;
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(this + 0x544) == 0) {
    if (((byte)this[0x2fa] & 0x40) != 0) {
      if (*(int *)(this + 0x540) != 0) {
        if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
          _err_print_error("_apply_disabled","scene/3d/physics/collision_object_3d.cpp",0xf1,
                           "Disabling a CollisionObject node during a physics callback is not allowed and will cause undesired behavior. Disable with call_deferred() instead."
                           ,0,0);
          return;
        }
        goto LAB_0010125a;
      }
      if (this[0x534] == (CollisionObject3D)0x0) {
        plVar1 = (long *)PhysicsServer3D::get_singleton();
        (**(code **)(*plVar1 + 0x300))(plVar1,*(undefined8 *)(this + 0x538),0);
      }
      else {
        plVar1 = (long *)PhysicsServer3D::get_singleton();
        (**(code **)(*plVar1 + 0x230))(plVar1,*(undefined8 *)(this + 0x538),0);
      }
      local_18 = 0;
      if (*(code **)(*(long *)this + 0x1f0) != _space_changed) {
        (**(code **)(*(long *)this + 0x1f0))(this,&local_18);
      }
    }
  }
  else if (((*(int *)(this + 0x544) == 1) && (this[0x534] == (CollisionObject3D)0x0)) &&
          (*(int *)(this + 0x548) != 0)) {
    plVar1 = (long *)PhysicsServer3D::get_singleton();
    if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010118f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x310))(plVar1,*(undefined8 *)(this + 0x538),0);
      return;
    }
    goto LAB_0010125a;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010125a:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CollisionObject3D::_apply_enabled() */

void __thiscall CollisionObject3D::_apply_enabled(CollisionObject3D *this)

{
  char cVar1;
  long *plVar2;
  long in_FS_OFFSET;
  undefined8 local_30;
  Object *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(this + 0x544) == 0) {
    if (((byte)this[0x2fa] & 0x40) != 0) {
      Node3D::get_world_3d();
      local_30 = World3D::get_space();
      if (local_28 != (Object *)0x0) {
        cVar1 = RefCounted::unreference();
        if (cVar1 != '\0') {
          cVar1 = predelete_handler(local_28);
          if (cVar1 != '\0') {
            (**(code **)(*(long *)local_28 + 0x140))(local_28);
            Memory::free_static(local_28,false);
          }
        }
      }
      if (this[0x534] == (CollisionObject3D)0x0) {
        plVar2 = (long *)PhysicsServer3D::get_singleton();
        (**(code **)(*plVar2 + 0x300))(plVar2,*(undefined8 *)(this + 0x538),local_30);
      }
      else {
        plVar2 = (long *)PhysicsServer3D::get_singleton();
        (**(code **)(*plVar2 + 0x230))(plVar2,*(undefined8 *)(this + 0x538),local_30);
      }
      if (*(code **)(*(long *)this + 0x1f0) != _space_changed) {
        (**(code **)(*(long *)this + 0x1f0))(this,&local_30);
      }
    }
  }
  else if (((*(int *)(this + 0x544) == 1) && (this[0x534] == (CollisionObject3D)0x0)) &&
          (*(int *)(this + 0x548) != 0)) {
    plVar2 = (long *)PhysicsServer3D::get_singleton();
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001012f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x310))
                (plVar2,*(undefined8 *)(this + 0x538),*(undefined4 *)(this + 0x548));
      return;
    }
    goto LAB_001013e1;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001013e1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CollisionObject3D::set_disable_mode(CollisionObject3D::DisableMode) */

void __thiscall CollisionObject3D::set_disable_mode(CollisionObject3D *this,int param_2)

{
  char cVar1;
  
  if (*(int *)(this + 0x544) == param_2) {
    return;
  }
  if (((byte)this[0x2fa] & 0x40) != 0) {
    cVar1 = Node::is_enabled();
    if (cVar1 == '\0') {
      _apply_enabled(this);
      *(int *)(this + 0x544) = param_2;
      _apply_disabled(this);
      return;
    }
  }
  *(int *)(this + 0x544) = param_2;
  return;
}



/* CollisionObject3D::set_body_mode(PhysicsServer3D::BodyMode) */

void __thiscall CollisionObject3D::set_body_mode(CollisionObject3D *this,int param_2)

{
  char cVar1;
  long *plVar2;
  
  if (this[0x534] != (CollisionObject3D)0x0) {
    _err_print_error("set_body_mode","scene/3d/physics/collision_object_3d.cpp",0x133,
                     "Condition \"area\" is true.",0,0);
    return;
  }
  if (*(int *)(this + 0x548) == param_2) {
    return;
  }
  *(int *)(this + 0x548) = param_2;
  if (((((byte)this[0x2fa] & 0x40) != 0) && (cVar1 = Node::is_enabled(), cVar1 == '\0')) &&
     (*(int *)(this + 0x544) == 1)) {
    return;
  }
  plVar2 = (long *)PhysicsServer3D::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x001014b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x310))(plVar2,*(undefined8 *)(this + 0x538),param_2);
  return;
}



/* CollisionObject3D::set_only_update_transform_changes(bool) */

void __thiscall
CollisionObject3D::set_only_update_transform_changes(CollisionObject3D *this,bool param_1)

{
  this[0x568] = (CollisionObject3D)param_1;
  return;
}



/* CollisionObject3D::is_only_update_transform_changes_enabled() const */

CollisionObject3D __thiscall
CollisionObject3D::is_only_update_transform_changes_enabled(CollisionObject3D *this)

{
  return this[0x568];
}



/* CollisionObject3D::_update_pickable() */

void __thiscall CollisionObject3D::_update_pickable(CollisionObject3D *this)

{
  if (((byte)this[0x2fa] & 0x40) != 0) {
    _update_pickable(this);
    return;
  }
  return;
}



/* CollisionObject3D::_are_collision_shapes_visible() */

byte __thiscall CollisionObject3D::_are_collision_shapes_visible(CollisionObject3D *this)

{
  char cVar1;
  long lVar2;
  
  if (((byte)this[0x2fa] & 0x40) == 0) {
    return 0;
  }
  if (*(long *)(this + 0x240) == 0) {
    _err_print_error("get_tree","./scene/main/node.h",0x1e5,"Parameter \"data.tree\" is null.",0,0);
  }
  cVar1 = SceneTree::is_debugging_collisions_hint();
  if (cVar1 == '\0') {
    return 0;
  }
  lVar2 = Engine::get_singleton();
  return *(byte *)(lVar2 + 0xc0) ^ 1;
}



/* CollisionObject3D::_on_transform_changed() */

void __thiscall CollisionObject3D::_on_transform_changed(CollisionObject3D *this)

{
  code *pcVar1;
  char cVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long in_FS_OFFSET;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  Transform3D local_78 [56];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (0 < *(int *)(this + 0x598)) {
    Node3D::get_global_transform();
    cVar2 = Transform3D::is_equal_approx((Transform3D *)(this + 0x59c));
    if (cVar2 == '\0') {
      Node3D::get_global_transform();
      *(undefined8 *)(this + 0x59c) = local_a8;
      *(undefined8 *)(this + 0x5a4) = uStack_a0;
      *(undefined8 *)(this + 0x5ac) = local_98;
      *(undefined8 *)(this + 0x5b4) = uStack_90;
      *(undefined8 *)(this + 0x5bc) = local_88;
      *(undefined8 *)(this + 0x5c4) = uStack_80;
      if (*(long *)(this + 0x550) != 0) {
        lVar6 = *(long *)(*(long *)(this + 0x550) + 0x10);
        if (lVar6 != *(long *)(this + 0x558)) {
          do {
            lVar3 = lVar6;
            lVar6 = *(long *)(lVar3 + 0x10);
          } while (*(long *)(this + 0x558) != *(long *)(lVar3 + 0x10));
          cVar2 = *(char *)(lVar3 + 0x80);
          do {
            if ((cVar2 == '\0') && (plVar4 = *(long **)(lVar3 + 0x78), plVar4 != (long *)0x0)) {
              lVar6 = 0;
              plVar5 = plVar4;
              do {
                if (plVar4[-1] <= lVar6) break;
                if (*plVar5 != 0) {
                  plVar4 = (long *)RenderingServer::get_singleton();
                  pcVar1 = *(code **)(*plVar4 + 0xd40);
                  Transform3D::operator*(local_78,(Transform3D *)(this + 0x59c));
                  (*pcVar1)(plVar4,*plVar5,local_78);
                  plVar4 = *(long **)(lVar3 + 0x78);
                }
                lVar6 = lVar6 + 1;
                plVar5 = plVar5 + 3;
              } while (plVar4 != (long *)0x0);
            }
            lVar3 = *(long *)(lVar3 + 0x20);
            if (lVar3 == 0) break;
            cVar2 = *(char *)(lVar3 + 0x80);
          } while( true );
        }
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CollisionObject3D::get_shape_owners(List<unsigned int, DefaultAllocator>*) */

void __thiscall CollisionObject3D::get_shape_owners(CollisionObject3D *this,List *param_1)

{
  undefined4 uVar1;
  long lVar2;
  long *plVar3;
  undefined1 (*pauVar4) [16];
  undefined4 *puVar5;
  long lVar6;
  
  if (*(long *)(this + 0x550) == 0) {
    return;
  }
  lVar2 = *(long *)(*(long *)(this + 0x550) + 0x10);
  if (lVar2 != *(long *)(this + 0x558)) {
    do {
      lVar6 = lVar2;
      lVar2 = *(long *)(lVar6 + 0x10);
    } while (*(long *)(this + 0x558) != *(long *)(lVar6 + 0x10));
    if (*(long *)param_1 == 0) {
      pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
      *(undefined1 (**) [16])param_1 = pauVar4;
      *(undefined4 *)pauVar4[1] = 0;
      *pauVar4 = (undefined1  [16])0x0;
    }
    do {
      while( true ) {
        puVar5 = (undefined4 *)operator_new(0x20,DefaultAllocator::alloc);
        uVar1 = *(undefined4 *)(lVar6 + 0x30);
        *(undefined8 *)(puVar5 + 2) = 0;
        *puVar5 = uVar1;
        plVar3 = *(long **)param_1;
        lVar2 = plVar3[1];
        *(long **)(puVar5 + 6) = plVar3;
        *(long *)(puVar5 + 4) = lVar2;
        if (lVar2 != 0) {
          *(undefined4 **)(lVar2 + 8) = puVar5;
        }
        plVar3[1] = (long)puVar5;
        if (*plVar3 == 0) break;
        lVar6 = *(long *)(lVar6 + 0x20);
        *(int *)(plVar3 + 2) = (int)plVar3[2] + 1;
        if (lVar6 == 0) {
          return;
        }
      }
      lVar6 = *(long *)(lVar6 + 0x20);
      *(int *)(plVar3 + 2) = (int)plVar3[2] + 1;
      *plVar3 = (long)puVar5;
    } while (lVar6 != 0);
  }
  return;
}



/* CollisionObject3D::CollisionObject3D(RID, bool) */

void __thiscall
CollisionObject3D::CollisionObject3D
          (CollisionObject3D *this,undefined8 param_2,CollisionObject3D param_3)

{
  uint uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined1 auVar4 [16];
  
  Node3D::Node3D((Node3D *)this);
  *(undefined ***)this = &PTR__initialize_classv_00122aa0;
  uVar2 = _LC49;
  uVar1 = _LC27;
  this[0x534] = (CollisionObject3D)0x0;
  *(undefined8 *)(this + 0x528) = uVar2;
  *(undefined8 **)(this + 0x558) = &_GlobalNilClass::_nil;
  *(undefined2 *)(this + 0x568) = 0;
  *(undefined8 *)(this + 0x538) = 0;
  *(undefined8 *)(this + 0x540) = 0;
  *(undefined8 *)(this + 0x548) = 0;
  *(undefined8 *)(this + 0x550) = 0;
  *(undefined4 *)(this + 0x560) = 0;
  this[0x56a] = (CollisionObject3D)0x1;
  *(undefined8 *)(this + 0x590) = 2;
  *(undefined4 *)(this + 0x598) = 0;
  *(undefined8 *)(this + 0x5c0) = 0;
  *(undefined4 *)(this + 0x5c8) = 0;
  *(undefined1 (*) [16])(this + 0x570) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x580) = (undefined1  [16])0x0;
  auVar4 = ZEXT416(_LC27);
  *(uint *)(this + 0x530) = uVar1;
  *(undefined1 (*) [16])(this + 0x59c) = auVar4;
  *(undefined1 (*) [16])(this + 0x5ac) = auVar4;
  *(uint *)(this + 0x5bc) = uVar1;
  StringName::StringName((StringName *)(this + 0x5d0),"_input_event",false);
  this[0x5d8] = (CollisionObject3D)0x0;
  *(undefined8 *)(this + 0x5e0) = 0;
  StringName::StringName((StringName *)(this + 0x5e8),"_mouse_enter",false);
  this[0x5f0] = (CollisionObject3D)0x0;
  *(undefined8 *)(this + 0x5f8) = 0;
  StringName::StringName((StringName *)(this + 0x600),"_mouse_exit",false);
  this[0x608] = (CollisionObject3D)0x0;
  *(undefined8 *)(this + 0x610) = 0;
  *(undefined8 *)(this + 0x538) = param_2;
  this[0x534] = param_3;
  Node3D::set_notify_transform(SUB81(this,0));
  if (param_3 != (CollisionObject3D)0x0) {
    plVar3 = (long *)PhysicsServer3D::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x001019a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x288))
              (plVar3,*(undefined8 *)(this + 0x538),*(undefined8 *)(this + 0x60));
    return;
  }
  plVar3 = (long *)PhysicsServer3D::get_singleton();
  (**(code **)(*plVar3 + 0x368))(plVar3,*(undefined8 *)(this + 0x538),*(undefined8 *)(this + 0x60));
  plVar3 = (long *)PhysicsServer3D::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x001019ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x310))(plVar3,*(undefined8 *)(this + 0x538),*(undefined4 *)(this + 0x548))
  ;
  return;
}



/* CollisionObject3D::CollisionObject3D() */

void __thiscall CollisionObject3D::CollisionObject3D(CollisionObject3D *this)

{
  uint uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  Node3D::Node3D((Node3D *)this);
  *(undefined ***)this = &PTR__initialize_classv_00122aa0;
  uVar2 = _LC49;
  uVar1 = _LC27;
  this[0x534] = (CollisionObject3D)0x0;
  *(undefined8 *)(this + 0x528) = uVar2;
  *(undefined8 **)(this + 0x558) = &_GlobalNilClass::_nil;
  *(undefined2 *)(this + 0x568) = 0;
  *(undefined8 *)(this + 0x538) = 0;
  *(undefined8 *)(this + 0x540) = 0;
  *(undefined8 *)(this + 0x548) = 0;
  *(undefined8 *)(this + 0x550) = 0;
  *(undefined4 *)(this + 0x560) = 0;
  this[0x56a] = (CollisionObject3D)0x1;
  *(undefined8 *)(this + 0x590) = 2;
  *(undefined4 *)(this + 0x598) = 0;
  *(undefined8 *)(this + 0x5c0) = 0;
  *(undefined4 *)(this + 0x5c8) = 0;
  *(undefined1 (*) [16])(this + 0x570) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x580) = (undefined1  [16])0x0;
  auVar3 = ZEXT416(_LC27);
  *(uint *)(this + 0x530) = uVar1;
  *(undefined1 (*) [16])(this + 0x59c) = auVar3;
  *(undefined1 (*) [16])(this + 0x5ac) = auVar3;
  *(uint *)(this + 0x5bc) = uVar1;
  StringName::StringName((StringName *)(this + 0x5d0),"_input_event",false);
  this[0x5d8] = (CollisionObject3D)0x0;
  *(undefined8 *)(this + 0x5e0) = 0;
  StringName::StringName((StringName *)(this + 0x5e8),"_mouse_enter",false);
  this[0x5f0] = (CollisionObject3D)0x0;
  *(undefined8 *)(this + 0x5f8) = 0;
  StringName::StringName((StringName *)(this + 0x600),"_mouse_exit",false);
  this[0x608] = (CollisionObject3D)0x0;
  *(undefined8 *)(this + 0x610) = 0;
  Node3D::set_notify_transform(SUB81(this,0));
  return;
}



/* CollisionObject3D::_update_shape_data(unsigned int) */

void CollisionObject3D::_update_shape_data(uint param_1)

{
  undefined8 uVar1;
  char cVar2;
  CallableCustom *this;
  undefined4 in_register_0000003c;
  CollisionObject3D *this_00;
  long in_FS_OFFSET;
  Callable local_58 [16];
  int local_48 [6];
  long local_30;
  
  this_00 = (CollisionObject3D *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  cVar2 = _are_collision_shapes_visible(this_00);
  if (cVar2 != '\0') {
    if (*(int *)(this_00 + 0x594) == 0) {
      this = (CallableCustom *)operator_new(0x48,"");
      CallableCustom::CallableCustom(this);
      *(undefined **)(this + 0x20) = &_LC34;
      *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
      *(undefined ***)this = &PTR_hash_00122ca8;
      *(undefined8 *)(this + 0x40) = 0;
      uVar1 = *(undefined8 *)(this_00 + 0x60);
      *(undefined8 *)(this + 0x10) = 0;
      *(undefined8 *)(this + 0x30) = uVar1;
      *(code **)(this + 0x38) = _update_debug_shapes;
      *(CollisionObject3D **)(this + 0x28) = this_00;
      CallableCustomMethodPointerBase::_setup((uint *)this,(int)this + 0x28);
      *(char **)(this + 0x20) = "CollisionObject3D::_update_debug_shapes";
      Callable::Callable(local_58,this);
      Variant::Variant((Variant *)local_48,0);
      Callable::call_deferredp((Variant **)local_58,0);
      if (Variant::needs_deinit[local_48[0]] != '\0') {
        Variant::_clear_internal();
      }
      Callable::~Callable(local_58);
    }
    HashSet<unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>>::insert
              ((uint *)local_58);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CollisionObject3D::shape_find_owner(int) const */

undefined4 __thiscall CollisionObject3D::shape_find_owner(CollisionObject3D *this,int param_1)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  int *piVar4;
  long lVar5;
  long lVar6;
  long in_FS_OFFSET;
  CowData<char32_t> local_60 [8];
  CowData<char32_t> local_58 [8];
  undefined8 local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 < 0) || (*(int *)(this + 0x54c) <= param_1)) {
    _err_print_index_error
              ("shape_find_owner","scene/3d/physics/collision_object_3d.cpp",0x2ba,(long)param_1,
               (long)*(int *)(this + 0x54c),"p_shape_index","total_subshapes","",false,false);
  }
  else {
    if (*(long *)(this + 0x550) != 0) {
      lVar2 = *(long *)(*(long *)(this + 0x550) + 0x10);
      if (lVar2 != *(long *)(this + 0x558)) {
        do {
          lVar6 = lVar2;
          lVar2 = *(long *)(lVar6 + 0x10);
        } while (*(long *)(this + 0x558) != *(long *)(lVar6 + 0x10));
        do {
          lVar2 = *(long *)(lVar6 + 0x78);
          if (lVar2 != 0) {
            lVar5 = 0;
            piVar4 = (int *)(lVar2 + 0x10);
            while (lVar5 < *(long *)(lVar2 + -8)) {
              iVar1 = *piVar4;
              lVar5 = lVar5 + 1;
              piVar4 = piVar4 + 6;
              if (iVar1 == param_1) {
                uVar3 = *(undefined4 *)(lVar6 + 0x30);
                goto LAB_00101d46;
              }
            }
          }
          lVar6 = *(long *)(lVar6 + 0x20);
        } while (lVar6 != 0);
      }
    }
    local_50 = 0;
    local_48 = &_LC70;
    local_40 = 1;
    String::parse_latin1((StrRange *)&local_50);
    itos((long)local_60);
    operator+((char *)local_58,(String *)"Can\'t find owner for shape index ");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error("shape_find_owner","scene/3d/physics/collision_object_3d.cpp",0x2c5,
                     "Method/function failed. Returning: (4294967295U)",(String *)&local_48,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    CowData<char32_t>::_unref(local_58);
    CowData<char32_t>::_unref(local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  }
  uVar3 = 0xffffffff;
LAB_00101d46:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
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



/* CollisionObject3D::_mouse_enter() */

void __thiscall CollisionObject3D::_mouse_enter(CollisionObject3D *this)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  code *pcVar5;
  long in_FS_OFFSET;
  undefined8 local_e8;
  long local_e0;
  char *local_d8;
  long local_d0;
  int local_c8 [4];
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40;
  
  plVar4 = *(long **)(this + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar4 != (long *)0x0) {
    local_c8[0] = 0;
    local_c8[1] = 0;
    local_c8[2] = 0;
    (**(code **)(*plVar4 + 0x60))(&local_58,plVar4,this + 0x5e8,0,0,local_c8);
    if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
    }
    if (local_c8[0] == 0) goto LAB_00102183;
  }
  if ((*(long *)(this + 8) != 0) && (this[0x5f0] == (CollisionObject3D)0x0)) {
    local_c8[0] = 0;
    local_c8[1] = 0;
    local_b8 = (undefined1  [16])0x0;
    local_d8 = "_mouse_enter";
    local_c8[2] = 0;
    local_c8[3] = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_98 = 6;
    local_90 = 1;
    local_88 = 0;
    local_78 = 0;
    local_70 = 0;
    local_60 = 0;
    local_d0 = 0xc;
    String::parse_latin1((StrRange *)local_c8);
    local_90 = CONCAT44(local_90._4_4_,8);
    uVar1 = MethodInfo::get_compatibility_hash();
    lVar3 = *(long *)(this + 8);
    *(undefined8 *)(this + 0x5f8) = 0;
    pcVar5 = *(code **)(lVar3 + 0xd8);
    if (((pcVar5 == (code *)0x0) || (*(long *)(lVar3 + 0xe0) == 0)) &&
       (pcVar5 = *(code **)(lVar3 + 0xd0), pcVar5 == (code *)0x0)) {
      local_e8 = 0;
      String::parse_latin1((String *)&local_e8,"CollisionObject3D");
      StringName::StringName((StringName *)&local_e0,(String *)&local_e8,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)&local_d8,(StringName *)&local_e0);
      if (local_d0 == 0) {
        lVar3 = 0;
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)&local_d0);
        if (StringName::configured != '\0') goto LAB_001023af;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
LAB_001023cc:
        lVar3 = *(long *)(this + 8);
        pcVar5 = *(code **)(lVar3 + 200);
        if (((pcVar5 == (code *)0x0) || (*(long *)(lVar3 + 0xe0) == 0)) &&
           (pcVar5 = *(code **)(lVar3 + 0xc0), pcVar5 == (code *)0x0)) goto LAB_00102306;
        uVar2 = (*pcVar5)(*(undefined8 *)(lVar3 + 0xa0),this + 0x5e8);
        *(undefined8 *)(this + 0x5f8) = uVar2;
      }
      else {
        lVar3 = *(long *)(local_d0 + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)&local_d0);
        if (StringName::configured != '\0') {
LAB_001023af:
          if (local_e0 != 0) {
            StringName::unref();
          }
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
        if (lVar3 == 0) goto LAB_001023cc;
      }
      lVar3 = *(long *)(this + 8);
    }
    else {
      uVar2 = (*pcVar5)(*(undefined8 *)(lVar3 + 0xa0),this + 0x5e8,uVar1);
      *(undefined8 *)(this + 0x5f8) = uVar2;
      lVar3 = *(long *)(this + 8);
    }
LAB_00102306:
    if (*(char *)(lVar3 + 0x29) != '\0') {
      plVar4 = (long *)operator_new(0x18,"");
      *plVar4 = (long)(this + 0x5f8);
      plVar4[1] = (long)(this + 0x5f0);
      plVar4[2] = *(long *)(this + 0x168);
      *(long **)(this + 0x168) = plVar4;
    }
    this[0x5f0] = (CollisionObject3D)0x1;
    MethodInfo::~MethodInfo((MethodInfo *)local_c8);
  }
  pcVar5 = *(code **)(this + 0x5f8);
  if (pcVar5 != (code *)0x0) {
    if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
      (*pcVar5)(*(undefined8 *)(this + 0x10),0,0);
    }
    else {
      (**(code **)(*(long *)(this + 8) + 0xe0))
                (*(undefined8 *)(this + 0x10),this + 0x5e8,pcVar5,0,0);
    }
  }
LAB_00102183:
  local_58 = 0;
  local_50 = (undefined1  [16])0x0;
  (**(code **)(*(long *)this + 0xd0))(this,SceneStringNames::singleton + 0xb8,0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CollisionObject3D::_mouse_exit() */

void __thiscall CollisionObject3D::_mouse_exit(CollisionObject3D *this)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  code *pcVar5;
  long in_FS_OFFSET;
  undefined8 local_e8;
  long local_e0;
  StringName local_d8 [8];
  long local_d0;
  int local_c8 [4];
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40;
  
  plVar4 = *(long **)(this + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar4 != (long *)0x0) {
    local_c8[0] = 0;
    local_c8[1] = 0;
    local_c8[2] = 0;
    (**(code **)(*plVar4 + 0x60))(&local_58,plVar4,this + 0x600,0,0,local_c8);
    if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
    }
    if (local_c8[0] == 0) goto LAB_00102553;
  }
  if ((*(long *)(this + 8) != 0) && (this[0x608] == (CollisionObject3D)0x0)) {
    local_c8[0] = 0;
    local_c8[1] = 0;
    local_b8 = (undefined1  [16])0x0;
    local_c8[2] = 0;
    local_c8[3] = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_98 = 6;
    local_90 = 1;
    local_88 = 0;
    local_78 = 0;
    local_70 = 0;
    local_60 = 0;
    String::parse_latin1((String *)local_c8,"_mouse_exit");
    local_90 = CONCAT44(local_90._4_4_,8);
    uVar1 = MethodInfo::get_compatibility_hash();
    lVar3 = *(long *)(this + 8);
    *(undefined8 *)(this + 0x610) = 0;
    pcVar5 = *(code **)(lVar3 + 0xd8);
    if (((pcVar5 == (code *)0x0) || (*(long *)(lVar3 + 0xe0) == 0)) &&
       (pcVar5 = *(code **)(lVar3 + 0xd0), pcVar5 == (code *)0x0)) {
      local_e8 = 0;
      String::parse_latin1((String *)&local_e8,"CollisionObject3D");
      StringName::StringName((StringName *)&local_e0,(String *)&local_e8,false);
      ClassDB::get_virtual_method_compatibility_hashes(local_d8,(StringName *)&local_e0);
      if (local_d0 == 0) {
        lVar3 = 0;
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)&local_d0);
        if (StringName::configured != '\0') goto LAB_00102767;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
LAB_00102784:
        lVar3 = *(long *)(this + 8);
        pcVar5 = *(code **)(lVar3 + 200);
        if (((pcVar5 == (code *)0x0) || (*(long *)(lVar3 + 0xe0) == 0)) &&
           (pcVar5 = *(code **)(lVar3 + 0xc0), pcVar5 == (code *)0x0)) goto LAB_001026c0;
        uVar2 = (*pcVar5)(*(undefined8 *)(lVar3 + 0xa0),this + 0x600);
        *(undefined8 *)(this + 0x610) = uVar2;
      }
      else {
        lVar3 = *(long *)(local_d0 + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)&local_d0);
        if (StringName::configured != '\0') {
LAB_00102767:
          if (local_e0 != 0) {
            StringName::unref();
          }
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
        if (lVar3 == 0) goto LAB_00102784;
      }
      lVar3 = *(long *)(this + 8);
    }
    else {
      uVar2 = (*pcVar5)(*(undefined8 *)(lVar3 + 0xa0),this + 0x600,uVar1);
      *(undefined8 *)(this + 0x610) = uVar2;
      lVar3 = *(long *)(this + 8);
    }
LAB_001026c0:
    if (*(char *)(lVar3 + 0x29) != '\0') {
      plVar4 = (long *)operator_new(0x18,"");
      *plVar4 = (long)(this + 0x610);
      plVar4[1] = (long)(this + 0x608);
      plVar4[2] = *(long *)(this + 0x168);
      *(long **)(this + 0x168) = plVar4;
    }
    this[0x608] = (CollisionObject3D)0x1;
    MethodInfo::~MethodInfo((MethodInfo *)local_c8);
  }
  pcVar5 = *(code **)(this + 0x610);
  if (pcVar5 != (code *)0x0) {
    if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
      (*pcVar5)(*(undefined8 *)(this + 0x10),0,0);
    }
    else {
      (**(code **)(*(long *)(this + 8) + 0xe0))
                (*(undefined8 *)(this + 0x10),this + 0x600,pcVar5,0,0);
    }
  }
LAB_00102553:
  local_58 = 0;
  local_50 = (undefined1  [16])0x0;
  (**(code **)(*(long *)this + 0xd0))(this,SceneStringNames::singleton + 0xc0,0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
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



/* CollisionObject3D::_bind_methods() */

void CollisionObject3D::_bind_methods(void)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  int *piVar7;
  MethodBind *pMVar8;
  uint uVar9;
  long lVar10;
  int *piVar11;
  long in_FS_OFFSET;
  undefined8 local_518;
  undefined8 local_510;
  long local_508;
  undefined8 local_500;
  undefined8 local_4f8;
  long local_4f0;
  undefined8 local_4e8;
  undefined8 local_4e0;
  long local_4d8;
  undefined8 local_4d0;
  undefined8 local_4c8;
  long local_4c0;
  undefined8 local_4b8;
  undefined8 local_4b0;
  long local_4a8;
  long local_4a0;
  PropertyInfo local_498 [48];
  undefined4 local_468 [2];
  long local_460;
  StringName local_458 [8];
  undefined4 local_450;
  long local_448;
  undefined4 local_440;
  undefined4 local_438 [2];
  long local_430;
  StringName local_428 [8];
  undefined4 local_420;
  long local_418;
  undefined4 local_410;
  undefined4 local_408 [2];
  long local_400;
  StringName local_3f8 [8];
  undefined4 local_3f0;
  long local_3e8;
  undefined4 local_3e0;
  undefined4 local_3d8 [2];
  long local_3d0;
  StringName local_3c8 [8];
  undefined4 local_3c0;
  long local_3b8;
  undefined4 local_3b0;
  undefined4 local_3a8 [2];
  undefined8 local_3a0;
  StringName local_398 [8];
  undefined4 local_390;
  undefined8 local_388;
  undefined4 local_380;
  undefined4 local_378 [2];
  long local_370;
  StringName local_368 [8];
  undefined4 local_360;
  long local_358;
  undefined4 local_350;
  undefined4 local_348 [2];
  long local_340;
  StringName local_338 [8];
  undefined4 local_330;
  long local_328;
  undefined4 local_320;
  undefined8 local_318;
  long local_310;
  StringName local_308 [8];
  undefined4 local_300;
  long local_2f8;
  undefined4 local_2f0;
  long local_2e8;
  undefined8 local_2e0;
  StringName local_2d8 [8];
  undefined4 local_2d0;
  undefined8 local_2c8;
  undefined4 local_2c0;
  long local_2b8;
  long local_2b0;
  StringName local_2a8 [8];
  undefined4 local_2a0;
  long local_298;
  undefined4 local_290;
  long local_288;
  long local_280;
  StringName local_278 [8];
  undefined4 local_270;
  long local_268;
  undefined4 local_260;
  long local_258;
  undefined8 local_250;
  StringName local_248 [8];
  undefined4 local_240;
  undefined8 local_238;
  undefined4 local_230;
  long local_228;
  long local_220;
  StringName local_218 [8];
  undefined4 local_210;
  long local_208;
  undefined4 local_200;
  char *local_1f8;
  undefined8 local_1f0;
  StringName local_1e8 [8];
  undefined4 local_1e0;
  undefined8 local_1d8;
  undefined4 local_1d0;
  char *local_1c8;
  undefined8 local_1c0;
  undefined1 local_1b8 [16];
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188 [2];
  int *local_178;
  undefined8 local_170;
  Vector<int> local_168 [8];
  long local_160;
  char *local_158;
  char *pcStack_150;
  undefined8 local_148;
  char *local_138;
  char *pcStack_130;
  undefined8 local_128;
  char *local_118;
  char *pcStack_110;
  undefined8 local_108;
  char *local_f8;
  char *pcStack_f0;
  undefined8 local_e8;
  char *local_d8;
  char *pcStack_d0;
  undefined8 local_c8;
  char *local_b8;
  char *pcStack_b0;
  undefined8 local_a8;
  char *local_98;
  char *pcStack_90;
  undefined8 local_88;
  char *local_78;
  char *pcStack_70;
  undefined8 local_68;
  char **local_58;
  undefined1 auStack_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  D_METHOD<char_const*>((char *)&local_1c8,"set_collision_layer");
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar8 = create_method_bind<CollisionObject3D,unsigned_int>(set_collision_layer);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)&local_1c8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1c8);
  D_METHODP((char *)&local_1c8,(char ***)"get_collision_layer",0);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar8 = create_method_bind<CollisionObject3D,unsigned_int>(get_collision_layer);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)&local_1c8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1c8);
  D_METHOD<char_const*>((char *)&local_1c8,"set_collision_mask");
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar8 = create_method_bind<CollisionObject3D,unsigned_int>(set_collision_mask);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)&local_1c8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1c8);
  D_METHODP((char *)&local_1c8,(char ***)"get_collision_mask",0);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar8 = create_method_bind<CollisionObject3D,unsigned_int>(get_collision_mask);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)&local_1c8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1c8);
  local_68 = 0;
  local_78 = "layer_number";
  pcStack_70 = "value";
  auStack_50._0_8_ = &pcStack_70;
  uVar9 = (uint)&local_58;
  local_58 = &local_78;
  D_METHODP((char *)&local_1c8,(char ***)"set_collision_layer_value",uVar9);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar8 = create_method_bind<CollisionObject3D,int,bool>(set_collision_layer_value);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)&local_1c8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1c8);
  D_METHOD<char_const*>((char *)&local_1c8,"get_collision_layer_value");
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar8 = create_method_bind<CollisionObject3D,bool,int>(get_collision_layer_value);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)&local_1c8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1c8);
  local_88 = 0;
  local_98 = "layer_number";
  pcStack_90 = "value";
  auStack_50._0_8_ = &pcStack_90;
  local_58 = &local_98;
  D_METHODP((char *)&local_1c8,(char ***)"set_collision_mask_value",uVar9);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar8 = create_method_bind<CollisionObject3D,int,bool>(set_collision_mask_value);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)&local_1c8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1c8);
  D_METHOD<char_const*>((char *)&local_1c8,"get_collision_mask_value");
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar8 = create_method_bind<CollisionObject3D,bool,int>(get_collision_mask_value);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)&local_1c8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1c8);
  D_METHOD<char_const*>((char *)&local_1c8,"set_collision_priority");
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar8 = create_method_bind<CollisionObject3D,float>(set_collision_priority);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)&local_1c8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1c8);
  D_METHODP((char *)&local_1c8,(char ***)"get_collision_priority",0);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar8 = create_method_bind<CollisionObject3D,float>(get_collision_priority);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)&local_1c8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1c8);
  D_METHOD<char_const*>((char *)&local_1c8,"set_disable_mode");
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar8 = create_method_bind<CollisionObject3D,CollisionObject3D::DisableMode>(set_disable_mode);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)&local_1c8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1c8);
  D_METHODP((char *)&local_1c8,(char ***)"get_disable_mode",0);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar8 = create_method_bind<CollisionObject3D,CollisionObject3D::DisableMode>(get_disable_mode);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)&local_1c8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1c8);
  D_METHOD<char_const*>((char *)&local_1c8,"set_ray_pickable");
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar8 = create_method_bind<CollisionObject3D,bool>(set_ray_pickable);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)&local_1c8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1c8);
  D_METHODP((char *)&local_1c8,(char ***)"is_ray_pickable",0);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar8 = create_method_bind<CollisionObject3D,bool>(is_ray_pickable);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)&local_1c8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1c8);
  D_METHOD<char_const*>((char *)&local_1c8,"set_capture_input_on_drag");
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar8 = create_method_bind<CollisionObject3D,bool>(set_capture_input_on_drag);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)&local_1c8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1c8);
  D_METHODP((char *)&local_1c8,(char ***)"get_capture_input_on_drag",0);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar8 = create_method_bind<CollisionObject3D,bool>(get_capture_input_on_drag);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)&local_1c8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1c8);
  D_METHODP((char *)&local_1c8,(char ***)"get_rid",0);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar8 = create_method_bind<CollisionObject3D,RID>(get_rid);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)&local_1c8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1c8);
  D_METHOD<char_const*>((char *)&local_1c8,"create_shape_owner");
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar8 = create_method_bind<CollisionObject3D,unsigned_int,Object*>(create_shape_owner);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)&local_1c8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1c8);
  D_METHOD<char_const*>((char *)&local_1c8,"remove_shape_owner");
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar8 = create_method_bind<CollisionObject3D,unsigned_int>(remove_shape_owner);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)&local_1c8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1c8);
  D_METHODP((char *)&local_1c8,(char ***)"get_shape_owners",0);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar8 = create_method_bind<CollisionObject3D,Vector<int>>(_get_shape_owners);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)&local_1c8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1c8);
  local_a8 = 0;
  local_b8 = "owner_id";
  pcStack_b0 = "transform";
  auStack_50._0_8_ = &pcStack_b0;
  local_58 = &local_b8;
  D_METHODP((char *)&local_1c8,(char ***)"shape_owner_set_transform",uVar9);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar8 = create_method_bind<CollisionObject3D,unsigned_int,Transform3D_const&>
                     (shape_owner_set_transform);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)&local_1c8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1c8);
  D_METHOD<char_const*>((char *)&local_1c8,"shape_owner_get_transform");
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar8 = create_method_bind<CollisionObject3D,Transform3D,unsigned_int>(shape_owner_get_transform)
  ;
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)&local_1c8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1c8);
  D_METHOD<char_const*>((char *)&local_1c8,"shape_owner_get_owner");
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar8 = create_method_bind<CollisionObject3D,Object*,unsigned_int>(shape_owner_get_owner);
  pMVar8[0x3b] = (MethodBind)0x1;
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)&local_1c8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1c8);
  local_c8 = 0;
  local_d8 = "owner_id";
  pcStack_d0 = "disabled";
  auStack_50._0_8_ = &pcStack_d0;
  local_58 = &local_d8;
  D_METHODP((char *)&local_1c8,(char ***)"shape_owner_set_disabled",uVar9);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar8 = create_method_bind<CollisionObject3D,unsigned_int,bool>(shape_owner_set_disabled);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)&local_1c8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1c8);
  D_METHOD<char_const*>((char *)&local_1c8,"is_shape_owner_disabled");
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar8 = create_method_bind<CollisionObject3D,bool,unsigned_int>(is_shape_owner_disabled);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)&local_1c8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1c8);
  local_e8 = 0;
  local_f8 = "owner_id";
  pcStack_f0 = "shape";
  auStack_50._0_8_ = &pcStack_f0;
  local_58 = &local_f8;
  D_METHODP((char *)&local_1c8,(char ***)"shape_owner_add_shape",uVar9);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar8 = create_method_bind<CollisionObject3D,unsigned_int,Ref<Shape3D>const&>
                     (shape_owner_add_shape);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)&local_1c8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1c8);
  D_METHOD<char_const*>((char *)&local_1c8,"shape_owner_get_shape_count");
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar8 = create_method_bind<CollisionObject3D,int,unsigned_int>(shape_owner_get_shape_count);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)&local_1c8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1c8);
  local_108 = 0;
  local_118 = "owner_id";
  pcStack_110 = "shape_id";
  auStack_50._0_8_ = &pcStack_110;
  local_58 = &local_118;
  D_METHODP((char *)&local_1c8,(char ***)"shape_owner_get_shape",uVar9);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar8 = create_method_bind<CollisionObject3D,Ref<Shape3D>,unsigned_int,int>
                     (shape_owner_get_shape);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)&local_1c8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1c8);
  local_128 = 0;
  local_138 = "owner_id";
  pcStack_130 = "shape_id";
  auStack_50._0_8_ = &pcStack_130;
  local_58 = &local_138;
  D_METHODP((char *)&local_1c8,(char ***)"shape_owner_get_shape_index",uVar9);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar8 = create_method_bind<CollisionObject3D,int,unsigned_int,int>(shape_owner_get_shape_index);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)&local_1c8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1c8);
  local_148 = 0;
  local_158 = "owner_id";
  pcStack_150 = "shape_id";
  auStack_50._0_8_ = &pcStack_150;
  local_58 = &local_158;
  D_METHODP((char *)&local_1c8,(char ***)"shape_owner_remove_shape",uVar9);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar8 = create_method_bind<CollisionObject3D,unsigned_int,int>(shape_owner_remove_shape);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)&local_1c8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1c8);
  D_METHOD<char_const*>((char *)&local_1c8,"shape_owner_clear_shapes");
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar8 = create_method_bind<CollisionObject3D,unsigned_int>(shape_owner_clear_shapes);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)&local_1c8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1c8);
  D_METHOD<char_const*>((char *)&local_1c8,"shape_find_owner");
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar8 = create_method_bind<CollisionObject3D,unsigned_int,int>(shape_find_owner);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)&local_1c8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1c8);
  local_220 = 0;
  local_1f8 = (char *)0x0;
  local_1c8 = "camera";
  local_1c0 = 6;
  String::parse_latin1((StrRange *)&local_1f8);
  local_1c8 = (char *)0x0;
  if (local_1f8 != (char *)0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_1c8,(CowData *)&local_1f8);
  }
  Vector<String>::push_back((Vector<String> *)&local_228,(MethodDefinition *)&local_1c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c8);
  local_2e8 = 0;
  local_1c8 = "event";
  local_1c0 = 5;
  String::parse_latin1((StrRange *)&local_2e8);
  local_1c8 = (char *)0x0;
  if (local_2e8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_1c8,(CowData *)&local_2e8);
  }
  Vector<String>::push_back((Vector<String> *)&local_228,(MethodDefinition *)&local_1c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c8);
  local_258 = 0;
  local_1c8 = "event_position";
  local_1c0 = 0xe;
  String::parse_latin1((StrRange *)&local_258);
  local_1c8 = (char *)0x0;
  if (local_258 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_1c8,(CowData *)&local_258);
  }
  Vector<String>::push_back((Vector<String> *)&local_228,(MethodDefinition *)&local_1c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c8);
  local_2b8 = 0;
  local_1c8 = "normal";
  local_1c0 = 6;
  String::parse_latin1((StrRange *)&local_2b8);
  local_1c8 = (char *)0x0;
  if (local_2b8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_1c8,(CowData *)&local_2b8);
  }
  Vector<String>::push_back((Vector<String> *)&local_228,(MethodDefinition *)&local_1c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c8);
  local_288 = 0;
  local_1c8 = "shape_idx";
  local_1c0 = 9;
  String::parse_latin1((StrRange *)&local_288);
  local_1c8 = (char *)0x0;
  if (local_288 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_1c8,(CowData *)&local_288);
  }
  Vector<String>::push_back((Vector<String> *)&local_228,(MethodDefinition *)&local_1c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_288);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_2b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_258);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_2e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1f8);
  local_1b8 = (undefined1  [16])0x0;
  local_1f8 = "_input_event";
  local_1c8 = (char *)0x0;
  local_1c0 = 0;
  local_1a8 = 0;
  local_1a0 = 0;
  local_198 = 6;
  local_190 = 1;
  local_188[0] = 0;
  local_178 = (int *)0x0;
  local_170 = 0;
  local_160 = 0;
  local_1f0 = 0xc;
  String::parse_latin1((StrRange *)&local_1c8);
  local_1f8 = "Camera3D";
  local_190 = CONCAT44(local_190._4_4_,8);
  local_288 = 0;
  local_1f0 = 8;
  String::parse_latin1((StrRange *)&local_288);
  StringName::StringName((StringName *)&local_258,(StrRange *)&local_288,false);
  local_1f8 = (char *)CONCAT44(local_1f8._4_4_,0x18);
  local_1f0 = 0;
  StringName::StringName(local_1e8,(StringName *)&local_258);
  local_1e0 = 0;
  local_1d8 = 0;
  local_1d0 = 6;
  if ((StringName::configured != '\0') && (local_258 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_288);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_188,(PropertyInfo *)&local_1f8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1f8);
  Vector<int>::push_back(local_168,0);
  local_2b8 = 0;
  local_288 = 0;
  local_1f8 = "InputEvent";
  local_1f0 = 10;
  String::parse_latin1((StrRange *)&local_288);
  local_258 = 0;
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_1f8,0x18,(StrRange *)&local_258,0x11,(StrRange *)&local_288,6,
             (StrRange *)&local_2b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_258);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_288);
  if ((StringName::configured != '\0') && (local_2b8 != 0)) {
    StringName::unref();
  }
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_188,(PropertyInfo *)&local_1f8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1f8);
  Vector<int>::push_back(local_168,0);
  GetTypeInfo<Vector3,void>::get_class_info((GetTypeInfo<Vector3,void> *)&local_1f8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_188,(PropertyInfo *)&local_1f8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1f8);
  Vector<int>::push_back(local_168,0);
  GetTypeInfo<Vector3,void>::get_class_info((GetTypeInfo<Vector3,void> *)&local_1f8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_188,(PropertyInfo *)&local_1f8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1f8);
  Vector<int>::push_back(local_168,0);
  GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void> *)&local_1f8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_188,(PropertyInfo *)&local_1f8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1f8);
  Vector<int>::push_back(local_168,3);
  local_1f8 = "CollisionObject3D";
  local_258 = 0;
  local_1f0 = 0x11;
  String::parse_latin1((StrRange *)&local_258);
  StringName::StringName((StringName *)&local_1f8,(StrRange *)&local_258,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_1f8,(MethodInfo *)&local_1c8,true,(Vector<String> *)&local_228,
             false);
  if ((StringName::configured != '\0') && (local_1f8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_258);
  lVar2 = local_160;
  if (local_160 != 0) {
    LOCK();
    plVar1 = (long *)(local_160 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_160 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  piVar7 = local_178;
  if (local_178 != (int *)0x0) {
    LOCK();
    plVar1 = (long *)(local_178 + -4);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      if (local_178 == (int *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = *(long *)(local_178 + -2);
      lVar10 = 0;
      local_178 = (int *)0x0;
      piVar11 = piVar7;
      if (lVar2 != 0) {
        do {
          if (Variant::needs_deinit[*piVar11] != '\0') {
            Variant::_clear_internal();
          }
          lVar10 = lVar10 + 1;
          piVar11 = piVar11 + 6;
        } while (lVar2 != lVar10);
      }
      Memory::free_static(piVar7 + -4,false);
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_188);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a0);
  if ((StringName::configured != '\0') && (local_1b8._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_1b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c8);
  CowData<String>::_unref((CowData<String> *)&local_220);
  local_1b8 = (undefined1  [16])0x0;
  local_220 = 0;
  local_1c8 = (char *)0x0;
  local_1c0 = 0;
  local_1a8 = 0;
  local_1a0 = 0;
  local_198 = 6;
  local_190 = 1;
  local_188[0] = 0;
  local_178 = (int *)0x0;
  local_170 = 0;
  local_160 = 0;
  String::parse_latin1((String *)&local_1c8,"_mouse_enter");
  local_1f8 = "CollisionObject3D";
  local_190 = CONCAT44(local_190._4_4_,8);
  local_258 = 0;
  local_1f0 = 0x11;
  String::parse_latin1((StrRange *)&local_258);
  StringName::StringName((StringName *)&local_1f8,(StrRange *)&local_258,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_1f8,(MethodInfo *)&local_1c8,true,(Vector<String> *)&local_228,
             false);
  if ((StringName::configured != '\0') && (local_1f8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_258);
  lVar2 = local_160;
  if (local_160 != 0) {
    LOCK();
    plVar1 = (long *)(local_160 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_160 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  piVar7 = local_178;
  if (local_178 != (int *)0x0) {
    LOCK();
    plVar1 = (long *)(local_178 + -4);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      if (local_178 == (int *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = *(long *)(local_178 + -2);
      lVar10 = 0;
      local_178 = (int *)0x0;
      piVar11 = piVar7;
      if (lVar2 != 0) {
        do {
          if (Variant::needs_deinit[*piVar11] != '\0') {
            Variant::_clear_internal();
          }
          lVar10 = lVar10 + 1;
          piVar11 = piVar11 + 6;
        } while (lVar2 != lVar10);
      }
      Memory::free_static(piVar7 + -4,false);
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_188);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a0);
  if ((StringName::configured != '\0') && (local_1b8._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_1b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c8);
  CowData<String>::_unref((CowData<String> *)&local_220);
  local_1b8 = (undefined1  [16])0x0;
  local_1f8 = "_mouse_exit";
  local_220 = 0;
  local_1c8 = (char *)0x0;
  local_1c0 = 0;
  local_1a8 = 0;
  local_1a0 = 0;
  local_198 = 6;
  local_190 = 1;
  local_188[0] = 0;
  local_178 = (int *)0x0;
  local_170 = 0;
  local_160 = 0;
  local_1f0 = 0xb;
  String::parse_latin1((StrRange *)&local_1c8);
  local_1f8 = "CollisionObject3D";
  local_190 = CONCAT44(local_190._4_4_,8);
  local_258 = 0;
  local_1f0 = 0x11;
  String::parse_latin1((StrRange *)&local_258);
  StringName::StringName((StringName *)&local_1f8,(StrRange *)&local_258,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_1f8,(MethodInfo *)&local_1c8,true,(Vector<String> *)&local_228,
             false);
  if ((StringName::configured != '\0') && (local_1f8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_258);
  lVar2 = local_160;
  if (local_160 != 0) {
    LOCK();
    plVar1 = (long *)(local_160 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_160 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  piVar7 = local_178;
  if (local_178 != (int *)0x0) {
    LOCK();
    plVar1 = (long *)(local_178 + -4);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      if (local_178 == (int *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = *(long *)(local_178 + -2);
      lVar10 = 0;
      local_178 = (int *)0x0;
      piVar11 = piVar7;
      if (lVar2 != 0) {
        do {
          if (Variant::needs_deinit[*piVar11] != '\0') {
            Variant::_clear_internal();
          }
          lVar10 = lVar10 + 1;
          piVar11 = piVar11 + 6;
        } while (lVar2 != lVar10);
      }
      Memory::free_static(piVar7 + -4,false);
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_188);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a0);
  if ((StringName::configured != '\0') && (local_1b8._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_1b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c8);
  CowData<String>::_unref((CowData<String> *)&local_220);
  local_4a8 = 0;
  local_4b0 = 0;
  local_1c8 = "";
  local_1c0 = 0;
  String::parse_latin1((StrRange *)&local_4b0);
  local_1c8 = "shape_idx";
  local_4b8 = 0;
  local_1c0 = 9;
  String::parse_latin1((StrRange *)&local_4b8);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_3d8,2,(StrRange *)&local_4b8,0,(StrRange *)&local_4b0,6,
             &local_4a8);
  local_1c8 = "";
  local_4c0 = 0;
  local_4c8 = 0;
  local_1c0 = 0;
  String::parse_latin1((StrRange *)&local_4c8);
  local_4d0 = 0;
  local_1c8 = "normal";
  local_1c0 = 6;
  String::parse_latin1((StrRange *)&local_4d0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_408,9,(StrRange *)&local_4d0,0,(StrRange *)&local_4c8,6,
             &local_4c0);
  local_1c8 = "";
  local_4d8 = 0;
  local_4e0 = 0;
  local_1c0 = 0;
  String::parse_latin1((StrRange *)&local_4e0);
  local_1c8 = "event_position";
  local_4e8 = 0;
  local_1c0 = 0xe;
  String::parse_latin1((StrRange *)&local_4e8);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_438,9,(StrRange *)&local_4e8,0,(StrRange *)&local_4e0,6,
             &local_4d8);
  local_1c8 = "InputEvent";
  local_4f0 = 0;
  local_4f8 = 0;
  local_1c0 = 10;
  String::parse_latin1((StrRange *)&local_4f8);
  local_1c8 = "event";
  local_500 = 0;
  local_1c0 = 5;
  String::parse_latin1((StrRange *)&local_500);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_468,0x18,(StrRange *)&local_500,0x11,(StrRange *)&local_4f8,6,
             &local_4f0);
  local_1c8 = "Node";
  local_508 = 0;
  local_510 = 0;
  local_1c0 = 4;
  String::parse_latin1((StrRange *)&local_510);
  local_1c8 = "camera";
  local_518 = 0;
  local_1c0 = 6;
  String::parse_latin1((StrRange *)&local_518);
  PropertyInfo::PropertyInfo
            (local_498,0x18,(StrRange *)&local_518,0x11,(StrRange *)&local_510,6,&local_508);
  local_4a0 = 0;
  local_1c8 = "input_event";
  local_1c0 = 0xb;
  String::parse_latin1((StrRange *)&local_4a0);
  local_1c8 = (char *)0x0;
  local_1c0 = 0;
  local_1a8 = 0;
  local_1a0 = 0;
  local_198 = 6;
  local_190 = 1;
  local_188[0] = 0;
  local_178 = (int *)0x0;
  local_170 = 0;
  local_160 = 0;
  local_1b8 = (undefined1  [16])0x0;
  if (local_4a0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_1c8,(CowData *)&local_4a0);
  }
  local_310 = 0;
  local_318 = CONCAT44(local_318._4_4_,local_3d8[0]);
  if (local_3d0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_310,(CowData *)&local_3d0);
  }
  StringName::StringName(local_308,local_3c8);
  local_2f8 = 0;
  local_300 = local_3c0;
  if (local_3b8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_2f8,(CowData *)&local_3b8);
  }
  local_340 = 0;
  local_2f0 = local_3b0;
  local_348[0] = local_408[0];
  if (local_400 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_340,(CowData *)&local_400);
  }
  StringName::StringName(local_338,local_3f8);
  local_328 = 0;
  local_330 = local_3f0;
  if (local_3e8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_328,(CowData *)&local_3e8);
  }
  local_370 = 0;
  local_320 = local_3e0;
  local_378[0] = local_438[0];
  if (local_430 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_370,(CowData *)&local_430);
  }
  StringName::StringName(local_368,local_428);
  local_358 = 0;
  local_360 = local_420;
  if (local_418 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_358,(CowData *)&local_418);
  }
  local_3a0 = 0;
  local_350 = local_410;
  local_3a8[0] = local_468[0];
  if (local_460 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_3a0,(CowData *)&local_460);
  }
  StringName::StringName(local_398,local_458);
  local_388 = 0;
  local_390 = local_450;
  if (local_448 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_388,(CowData *)&local_448);
  }
  local_380 = local_440;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_188,local_498);
  local_280 = 0;
  local_288 = CONCAT44(local_288._4_4_,(undefined4)local_318);
  if (local_310 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_280,(CowData *)&local_310);
  }
  StringName::StringName(local_278,local_308);
  local_268 = 0;
  local_270 = local_300;
  if (local_2f8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_268,(CowData *)&local_2f8);
  }
  local_2b0 = 0;
  local_260 = local_2f0;
  local_2b8 = CONCAT44(local_2b8._4_4_,local_348[0]);
  if (local_340 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_2b0,(CowData *)&local_340);
  }
  StringName::StringName(local_2a8,local_338);
  local_298 = 0;
  local_2a0 = local_330;
  if (local_328 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_298,(CowData *)&local_328);
  }
  local_2e0 = 0;
  local_290 = local_320;
  local_2e8 = CONCAT44(local_2e8._4_4_,local_378[0]);
  if (local_370 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_2e0,(CowData *)&local_370);
  }
  StringName::StringName(local_2d8,local_368);
  local_2c8 = 0;
  local_2d0 = local_360;
  if (local_358 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_2c8,(CowData *)&local_358);
  }
  local_2c0 = local_350;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_188,(PropertyInfo *)local_3a8);
  local_220 = 0;
  local_228 = CONCAT44(local_228._4_4_,(undefined4)local_288);
  if (local_280 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_220,(CowData *)&local_280);
  }
  StringName::StringName(local_218,local_278);
  local_208 = 0;
  local_210 = local_270;
  if (local_268 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_208,(CowData *)&local_268);
  }
  local_250 = 0;
  local_200 = local_260;
  local_258 = CONCAT44(local_258._4_4_,(undefined4)local_2b8);
  if (local_2b0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_250,(CowData *)&local_2b0);
  }
  StringName::StringName(local_248,local_2a8);
  local_238 = 0;
  local_240 = local_2a0;
  if (local_298 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_238,(CowData *)&local_298);
  }
  local_230 = local_290;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_188,(PropertyInfo *)&local_2e8);
  local_1f0 = 0;
  local_1f8 = (char *)CONCAT44(local_1f8._4_4_,(undefined4)local_228);
  if (local_220 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_1f0,(CowData *)&local_220);
  }
  StringName::StringName(local_1e8,local_218);
  local_1d8 = 0;
  local_1e0 = local_210;
  if (local_208 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_1d8,(CowData *)&local_208);
  }
  local_1d0 = local_200;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_188,(PropertyInfo *)&local_258);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_188,(PropertyInfo *)&local_1f8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1f8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_258);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_228);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_2e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_2b8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_288);
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_3a8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_378);
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_348);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_318);
  local_1f8 = "CollisionObject3D";
  local_228 = 0;
  local_1f0 = 0x11;
  String::parse_latin1((StrRange *)&local_228);
  StringName::StringName((StringName *)&local_1f8,(Vector<String> *)&local_228,false);
  ClassDB::add_signal((StringName *)&local_1f8,(MethodInfo *)&local_1c8);
  if ((StringName::configured != '\0') && (local_1f8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_228);
  lVar2 = local_160;
  if (local_160 != 0) {
    LOCK();
    plVar1 = (long *)(local_160 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_160 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  piVar7 = local_178;
  if (local_178 != (int *)0x0) {
    LOCK();
    plVar1 = (long *)(local_178 + -4);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      if (local_178 == (int *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = *(long *)(local_178 + -2);
      lVar10 = 0;
      local_178 = (int *)0x0;
      piVar11 = piVar7;
      if (lVar2 != 0) {
        do {
          if (Variant::needs_deinit[*piVar11] != '\0') {
            Variant::_clear_internal();
          }
          lVar10 = lVar10 + 1;
          piVar11 = piVar11 + 6;
        } while (lVar2 != lVar10);
      }
      Memory::free_static(piVar7 + -4,false);
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_188);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a0);
  if ((StringName::configured != '\0') && (local_1b8._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_1b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_4a0);
  PropertyInfo::~PropertyInfo(local_498);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_518);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_510);
  if ((StringName::configured != '\0') && (local_508 != 0)) {
    StringName::unref();
  }
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_468);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_500);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_4f8);
  if ((StringName::configured != '\0') && (local_4f0 != 0)) {
    StringName::unref();
  }
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_438);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_4e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_4e0);
  if ((StringName::configured != '\0') && (local_4d8 != 0)) {
    StringName::unref();
  }
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_408);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_4d0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_4c8);
  if ((StringName::configured != '\0') && (local_4c0 != 0)) {
    StringName::unref();
  }
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_3d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_4b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_4b0);
  if ((StringName::configured != '\0') && (local_4a8 != 0)) {
    StringName::unref();
  }
  local_228 = 0;
  local_1c8 = "mouse_entered";
  local_1c0 = 0xd;
  String::parse_latin1((StrRange *)&local_228);
  local_1b8 = (undefined1  [16])0x0;
  local_1c8 = (char *)0x0;
  local_1c0 = 0;
  local_1a8 = 0;
  local_1a0 = 0;
  local_198 = 6;
  local_190 = 1;
  local_188[0] = 0;
  local_178 = (int *)0x0;
  local_170 = 0;
  local_160 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_1c8,(CowData *)&local_228);
  local_1f8 = "CollisionObject3D";
  local_258 = 0;
  local_1f0 = 0x11;
  String::parse_latin1((StrRange *)&local_258);
  StringName::StringName((StringName *)&local_1f8,(StrRange *)&local_258,false);
  ClassDB::add_signal((StringName *)&local_1f8,(MethodInfo *)&local_1c8);
  if ((StringName::configured != '\0') && (local_1f8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_258);
  lVar2 = local_160;
  if (local_160 != 0) {
    LOCK();
    plVar1 = (long *)(local_160 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_160 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  piVar7 = local_178;
  if (local_178 != (int *)0x0) {
    LOCK();
    plVar1 = (long *)(local_178 + -4);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      if (local_178 == (int *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = *(long *)(local_178 + -2);
      lVar10 = 0;
      local_178 = (int *)0x0;
      piVar11 = piVar7;
      if (lVar2 != 0) {
        do {
          if (Variant::needs_deinit[*piVar11] != '\0') {
            Variant::_clear_internal();
          }
          lVar10 = lVar10 + 1;
          piVar11 = piVar11 + 6;
        } while (lVar2 != lVar10);
      }
      Memory::free_static(piVar7 + -4,false);
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_188);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a0);
  if ((StringName::configured != '\0') && (local_1b8._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_1b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_228);
  local_1c8 = "mouse_exited";
  local_228 = 0;
  local_1c0 = 0xc;
  String::parse_latin1((StrRange *)&local_228);
  local_1b8 = (undefined1  [16])0x0;
  local_1c8 = (char *)0x0;
  local_1c0 = 0;
  local_1a8 = 0;
  local_1a0 = 0;
  local_198 = 6;
  local_190 = 1;
  local_188[0] = 0;
  local_178 = (int *)0x0;
  local_170 = 0;
  local_160 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_1c8,(CowData *)&local_228);
  local_1f8 = "CollisionObject3D";
  local_258 = 0;
  local_1f0 = 0x11;
  String::parse_latin1((StrRange *)&local_258);
  StringName::StringName((StringName *)&local_1f8,(StrRange *)&local_258,false);
  ClassDB::add_signal((StringName *)&local_1f8,(MethodInfo *)&local_1c8);
  if ((StringName::configured != '\0') && (local_1f8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_258);
  lVar2 = local_160;
  if (local_160 != 0) {
    LOCK();
    plVar1 = (long *)(local_160 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_160 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  piVar7 = local_178;
  if (local_178 != (int *)0x0) {
    LOCK();
    plVar1 = (long *)(local_178 + -4);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      if (local_178 == (int *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = *(long *)(local_178 + -2);
      lVar10 = 0;
      local_178 = (int *)0x0;
      piVar11 = piVar7;
      if (lVar2 != 0) {
        do {
          if (Variant::needs_deinit[*piVar11] != '\0') {
            Variant::_clear_internal();
          }
          lVar10 = lVar10 + 1;
          piVar11 = piVar11 + 6;
        } while (lVar2 != lVar10);
      }
      Memory::free_static(piVar7 + -4,false);
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_188);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a0);
  if ((StringName::configured != '\0') && (local_1b8._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_1b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_228);
  _scs_create((char *)&local_228,true);
  _scs_create((char *)&local_258,true);
  local_1c8 = "Remove,Make Static,Keep Active";
  local_288 = 0;
  local_2b8 = 0;
  local_1c0 = 0x1e;
  String::parse_latin1((StrRange *)&local_2b8);
  local_2e8 = 0;
  String::parse_latin1((String *)&local_2e8,"disable_mode");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_1c8,2,(StrRange *)&local_2e8,2,(StrRange *)&local_2b8,6,
             (StrRange *)&local_288);
  local_1f8 = "CollisionObject3D";
  local_318 = 0;
  local_1f0 = 0x11;
  String::parse_latin1((StrRange *)&local_318);
  StringName::StringName((StringName *)&local_1f8,(PropertyInfo *)&local_318,false);
  ClassDB::add_property
            ((StringName *)&local_1f8,(PropertyInfo *)&local_1c8,(StringName *)&local_258,
             (StringName *)&local_228,-1);
  if ((StringName::configured != '\0') && (local_1f8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_318);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_2e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_2b8);
  if ((((StringName::configured != '\0') &&
       ((local_288 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_258 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_228 != 0)) {
    StringName::unref();
  }
  local_1f8 = (char *)0x0;
  local_1c8 = "collision_";
  local_1c0 = 10;
  String::parse_latin1((StrRange *)&local_1f8);
  local_1c8 = "Collision";
  local_228 = 0;
  local_1c0 = 9;
  String::parse_latin1((StrRange *)&local_228);
  local_1c8 = "CollisionObject3D";
  local_258 = 0;
  local_1c0 = 0x11;
  String::parse_latin1((StrRange *)&local_258);
  StringName::StringName((StringName *)&local_1c8,(StrRange *)&local_258,false);
  ClassDB::add_property_group((StringName *)&local_1c8,(String *)&local_228,(String *)&local_1f8,0);
  if ((StringName::configured != '\0') && (local_1c8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_258);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_228);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1f8);
  _scs_create((char *)&local_228,true);
  _scs_create((char *)&local_258,true);
  local_1c8 = "";
  local_288 = 0;
  local_2b8 = 0;
  local_1c0 = 0;
  String::parse_latin1((StrRange *)&local_2b8);
  local_1c8 = "collision_layer";
  local_2e8 = 0;
  local_1c0 = 0xf;
  String::parse_latin1((StrRange *)&local_2e8);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_1c8,2,(StrRange *)&local_2e8,0xb,(StrRange *)&local_2b8,6,
             (StrRange *)&local_288);
  local_1f8 = "CollisionObject3D";
  local_318 = 0;
  local_1f0 = 0x11;
  String::parse_latin1((StrRange *)&local_318);
  StringName::StringName((StringName *)&local_1f8,(PropertyInfo *)&local_318,false);
  ClassDB::add_property
            ((StringName *)&local_1f8,(PropertyInfo *)&local_1c8,(StringName *)&local_258,
             (StringName *)&local_228,-1);
  if ((StringName::configured != '\0') && (local_1f8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_318);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_2e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_2b8);
  if (((StringName::configured != '\0') &&
      ((local_288 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (((local_258 == 0 || (StringName::unref(), StringName::configured != '\0')) && (local_228 != 0)
      ))) {
    StringName::unref();
  }
  _scs_create((char *)&local_228,true);
  _scs_create((char *)&local_258,true);
  local_1c8 = "";
  local_288 = 0;
  local_2b8 = 0;
  local_1c0 = 0;
  String::parse_latin1((StrRange *)&local_2b8);
  local_1c8 = "collision_mask";
  local_2e8 = 0;
  local_1c0 = 0xe;
  String::parse_latin1((StrRange *)&local_2e8);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_1c8,2,(StrRange *)&local_2e8,0xb,(StrRange *)&local_2b8,6,
             (StrRange *)&local_288);
  local_1f8 = "CollisionObject3D";
  local_318 = 0;
  local_1f0 = 0x11;
  String::parse_latin1((StrRange *)&local_318);
  StringName::StringName((StringName *)&local_1f8,(PropertyInfo *)&local_318,false);
  ClassDB::add_property
            ((StringName *)&local_1f8,(PropertyInfo *)&local_1c8,(StringName *)&local_258,
             (StringName *)&local_228,-1);
  if ((StringName::configured != '\0') && (local_1f8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_318);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_2e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_2b8);
  if ((((StringName::configured != '\0') &&
       ((local_288 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_258 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_228 != 0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_228,true);
  _scs_create((char *)&local_258,true);
  local_1c8 = "";
  local_288 = 0;
  local_2b8 = 0;
  local_1c0 = 0;
  String::parse_latin1((StrRange *)&local_2b8);
  local_1c8 = "collision_priority";
  local_2e8 = 0;
  local_1c0 = 0x12;
  String::parse_latin1((StrRange *)&local_2e8);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_1c8,3,(StrRange *)&local_2e8,0,(StrRange *)&local_2b8,6,
             (StrRange *)&local_288);
  local_1f8 = "CollisionObject3D";
  local_318 = 0;
  local_1f0 = 0x11;
  String::parse_latin1((StrRange *)&local_318);
  StringName::StringName((StringName *)&local_1f8,(PropertyInfo *)&local_318,false);
  ClassDB::add_property
            ((StringName *)&local_1f8,(PropertyInfo *)&local_1c8,(StringName *)&local_258,
             (StringName *)&local_228,-1);
  if ((StringName::configured != '\0') && (local_1f8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_318);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_2e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_2b8);
  if ((((StringName::configured != '\0') &&
       ((local_288 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_258 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_228 != 0)) {
    StringName::unref();
  }
  local_1f8 = (char *)0x0;
  local_1c8 = "input_";
  local_1c0 = 6;
  String::parse_latin1((StrRange *)&local_1f8);
  local_1c8 = "Input";
  local_228 = 0;
  local_1c0 = 5;
  String::parse_latin1((StrRange *)&local_228);
  local_1c8 = "CollisionObject3D";
  local_258 = 0;
  local_1c0 = 0x11;
  String::parse_latin1((StrRange *)&local_258);
  StringName::StringName((StringName *)&local_1c8,(StrRange *)&local_258,false);
  ClassDB::add_property_group((StringName *)&local_1c8,(String *)&local_228,(String *)&local_1f8,0);
  if ((StringName::configured != '\0') && (local_1c8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_258);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_228);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1f8);
  _scs_create((char *)&local_228,true);
  _scs_create((char *)&local_258,true);
  local_1c8 = "";
  local_288 = 0;
  local_2b8 = 0;
  local_1c0 = 0;
  String::parse_latin1((StrRange *)&local_2b8);
  local_2e8 = 0;
  String::parse_latin1((String *)&local_2e8,"input_ray_pickable");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_1c8,1,(StrRange *)&local_2e8,0,(StrRange *)&local_2b8,6,
             (StrRange *)&local_288);
  local_1f8 = "CollisionObject3D";
  local_318 = 0;
  local_1f0 = 0x11;
  String::parse_latin1((StrRange *)&local_318);
  StringName::StringName((StringName *)&local_1f8,(PropertyInfo *)&local_318,false);
  ClassDB::add_property
            ((StringName *)&local_1f8,(PropertyInfo *)&local_1c8,(StringName *)&local_258,
             (StringName *)&local_228,-1);
  if ((StringName::configured != '\0') && (local_1f8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_318);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_2e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_2b8);
  if ((((StringName::configured != '\0') &&
       ((local_288 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_258 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_228 != 0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_228,true);
  _scs_create((char *)&local_258,true);
  local_1c8 = "";
  local_288 = 0;
  local_2b8 = 0;
  local_1c0 = 0;
  String::parse_latin1((StrRange *)&local_2b8);
  local_1c8 = "input_capture_on_drag";
  local_2e8 = 0;
  local_1c0 = 0x15;
  String::parse_latin1((StrRange *)&local_2e8);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_1c8,1,(StrRange *)&local_2e8,0,(StrRange *)&local_2b8,6,
             (StrRange *)&local_288);
  local_1f8 = "CollisionObject3D";
  local_318 = 0;
  local_1f0 = 0x11;
  String::parse_latin1((StrRange *)&local_318);
  StringName::StringName((StringName *)&local_1f8,(PropertyInfo *)&local_318,false);
  ClassDB::add_property
            ((StringName *)&local_1f8,(PropertyInfo *)&local_1c8,(StringName *)&local_258,
             (StringName *)&local_228,-1);
  if ((StringName::configured != '\0') && (local_1f8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_318);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_2e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_2b8);
  if ((((StringName::configured != '\0') &&
       ((local_288 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_258 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_228 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1f8,"DISABLE_MODE_REMOVE",false);
  local_258 = 0;
  local_1c8 = "DISABLE_MODE_REMOVE";
  local_1c0 = 0x13;
  String::parse_latin1((StrRange *)&local_258);
  GetTypeInfo<CollisionObject3D::DisableMode,void>::get_class_info
            ((GetTypeInfo<CollisionObject3D::DisableMode,void> *)&local_1c8);
  local_228 = local_1b8._0_8_;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = local_1b8._8_8_;
  local_1b8 = auVar4 << 0x40;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1c8);
  local_1c8 = "CollisionObject3D";
  local_288 = 0;
  local_1c0 = 0x11;
  String::parse_latin1((StrRange *)&local_288);
  StringName::StringName((StringName *)&local_1c8,(StrRange *)&local_288,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_1c8,(StringName *)&local_228,(StringName *)&local_1f8,0,false);
  if ((StringName::configured != '\0') && (local_1c8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_288);
  if ((StringName::configured != '\0') && (local_228 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_258);
  if ((StringName::configured != '\0') && (local_1f8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1f8,"DISABLE_MODE_MAKE_STATIC",false);
  local_258 = 0;
  local_1c8 = "DISABLE_MODE_MAKE_STATIC";
  local_1c0 = 0x18;
  String::parse_latin1((StrRange *)&local_258);
  GetTypeInfo<CollisionObject3D::DisableMode,void>::get_class_info
            ((GetTypeInfo<CollisionObject3D::DisableMode,void> *)&local_1c8);
  local_228 = local_1b8._0_8_;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = local_1b8._8_8_;
  local_1b8 = auVar5 << 0x40;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1c8);
  local_1c8 = "CollisionObject3D";
  local_288 = 0;
  local_1c0 = 0x11;
  String::parse_latin1((StrRange *)&local_288);
  StringName::StringName((StringName *)&local_1c8,(StrRange *)&local_288,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_1c8,(StringName *)&local_228,(StringName *)&local_1f8,1,false);
  if ((StringName::configured != '\0') && (local_1c8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_288);
  if ((StringName::configured != '\0') && (local_228 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_258);
  if ((StringName::configured != '\0') && (local_1f8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1f8,"DISABLE_MODE_KEEP_ACTIVE",false);
  local_258 = 0;
  local_1c8 = "DISABLE_MODE_KEEP_ACTIVE";
  local_1c0 = 0x18;
  String::parse_latin1((StrRange *)&local_258);
  GetTypeInfo<CollisionObject3D::DisableMode,void>::get_class_info
            ((GetTypeInfo<CollisionObject3D::DisableMode,void> *)&local_1c8);
  local_228 = local_1b8._0_8_;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = local_1b8._8_8_;
  local_1b8 = auVar6 << 0x40;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1c8);
  local_1c8 = "CollisionObject3D";
  local_288 = 0;
  local_1c0 = 0x11;
  String::parse_latin1((StrRange *)&local_288);
  StringName::StringName((StringName *)&local_1c8,(StrRange *)&local_288,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_1c8,(StringName *)&local_228,(StringName *)&local_1f8,2,false);
  if ((StringName::configured != '\0') && (local_1c8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_288);
  if ((StringName::configured != '\0') && (local_228 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_258);
  if ((StringName::configured != '\0') && (local_1f8 != (char *)0x0)) {
    StringName::unref();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CollisionObject3D::_input_event_call(Camera3D*, Ref<InputEvent> const&, Vector3 const&, Vector3
   const&, int) */

void __thiscall
CollisionObject3D::_input_event_call
          (CollisionObject3D *this,Camera3D *param_1,Ref *param_2,Vector3 *param_3,Vector3 *param_4,
          int param_5)

{
  Variant **ppVVar1;
  Variant *pVVar2;
  Object *pOVar3;
  char cVar4;
  undefined4 uVar5;
  code *pcVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  Variant *pVVar10;
  Object *pOVar11;
  Variant **ppVVar12;
  long in_FS_OFFSET;
  Variant **local_308;
  Vector3 *local_2e0;
  Vector3 *local_2b8;
  long local_278;
  Camera3D *local_270;
  Object *local_268;
  long local_260;
  StringName local_258 [8];
  undefined4 local_250;
  undefined8 local_248;
  undefined4 local_240;
  int local_238;
  int iStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined1 local_228 [16];
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8 [2];
  undefined8 local_1e8;
  undefined8 local_1e0;
  Vector<int> local_1d8 [8];
  undefined8 local_1d0;
  undefined8 local_1c0;
  undefined4 local_1b8;
  Variant *local_1b4;
  undefined4 local_1ac;
  undefined8 local_1a8;
  undefined4 local_1a0;
  Variant *local_188;
  Variant *pVStack_180;
  Variant *local_178;
  Variant *pVStack_170;
  Variant *local_168;
  Variant *local_158;
  Variant *pVStack_150;
  Variant *local_148;
  Variant *pVStack_140;
  Variant *local_138;
  Variant local_128 [24];
  Variant local_110 [24];
  Variant local_f8 [24];
  Variant *local_e0;
  Variant local_d8 [24];
  Variant local_c0 [24];
  Variant local_a8 [24];
  Variant local_90 [24];
  Variant local_78 [24];
  undefined8 local_60;
  undefined1 local_58 [16];
  Variant local_48 [8];
  long local_40;
  
  pOVar11 = *(Object **)param_2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((pOVar11 != (Object *)0x0) && (cVar4 = RefCounted::reference(), cVar4 == '\0')) {
    pOVar11 = (Object *)0x0;
  }
  local_1c0 = *(undefined8 *)param_3;
  local_1b8 = *(undefined4 *)(param_3 + 8);
  local_1b4 = *(Variant **)param_4;
  local_1ac = *(undefined4 *)(param_4 + 8);
  plVar9 = *(long **)(this + 0x98);
  if (plVar9 != (long *)0x0) {
    local_238 = 0;
    iStack_234 = 0;
    uStack_230 = 0;
    Variant::Variant((Variant *)&local_158,(Object *)param_1);
    Variant::Variant((Variant *)&pVStack_140,pOVar11);
    Variant::Variant(local_128,(Vector3 *)&local_1c0);
    Variant::Variant(local_110,(Vector3 *)&local_1b4);
    Variant::Variant(local_f8,param_5);
    local_188 = (Variant *)&local_158;
    pVStack_180 = (Variant *)&pVStack_140;
    local_178 = local_128;
    pVStack_170 = local_110;
    local_168 = local_f8;
    (**(code **)(*plVar9 + 0x60))(&local_1a8,plVar9,this + 0x5d0,&local_188,5,&local_238);
    if (Variant::needs_deinit[(int)local_1a8] != '\0') {
      Variant::_clear_internal();
    }
    local_308 = &local_158;
    ppVVar12 = &local_e0;
    if (local_238 == 0) {
      do {
        ppVVar1 = ppVVar12 + -3;
        ppVVar12 = ppVVar12 + -3;
        if (Variant::needs_deinit[*(int *)ppVVar1] != '\0') {
          Variant::_clear_internal();
        }
      } while (ppVVar12 != local_308);
      goto LAB_00106e73;
    }
    do {
      ppVVar1 = ppVVar12 + -3;
      ppVVar12 = ppVVar12 + -3;
      if (Variant::needs_deinit[*(int *)ppVVar1] != '\0') {
        Variant::_clear_internal();
      }
    } while (ppVVar12 != local_308);
  }
  local_2b8 = (Vector3 *)&local_188;
  local_2e0 = (Vector3 *)&local_1a8;
  local_308 = &local_158;
  if ((*(long *)(this + 8) != 0) && (this[0x5d8] == (CollisionObject3D)0x0)) {
    local_238 = 0;
    iStack_234 = 0;
    local_228 = (undefined1  [16])0x0;
    uStack_230 = 0;
    uStack_22c = 0;
    local_218 = 0;
    local_210 = 0;
    local_208 = 6;
    local_200 = 1;
    local_1f8[0] = 0;
    local_1e8 = 0;
    local_1e0 = 0;
    local_1d0 = 0;
    String::parse_latin1((String *)&local_238,"_input_event");
    local_200 = CONCAT44(local_200._4_4_,8);
    local_268 = (Object *)0x10b0f5;
    local_278 = 0;
    local_260 = 8;
    String::parse_latin1((StrRange *)&local_278);
    StringName::StringName((StringName *)&local_270,(StrRange *)&local_278,false);
    local_268 = (Object *)CONCAT44(local_268._4_4_,0x18);
    local_260 = 0;
    StringName::StringName(local_258,(StringName *)&local_270);
    local_250 = 0;
    local_248 = 0;
    local_240 = 6;
    if ((StringName::configured != '\0') && (local_270 != (Camera3D *)0x0)) {
      StringName::unref();
    }
    lVar8 = local_278;
    if (local_278 != 0) {
      LOCK();
      plVar9 = (long *)(local_278 + -0x10);
      *plVar9 = *plVar9 + -1;
      UNLOCK();
      if (*plVar9 == 0) {
        local_278 = 0;
        Memory::free_static((void *)(lVar8 + -0x10),false);
      }
    }
    List<PropertyInfo,DefaultAllocator>::push_back
              ((List<PropertyInfo,DefaultAllocator> *)local_1f8,(PropertyInfo *)&local_268);
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_268);
    Vector<int>::push_back(local_1d8,0);
    GetTypeInfo<Ref<InputEvent>,void>::get_class_info
              ((GetTypeInfo<Ref<InputEvent>,void> *)&local_268);
    List<PropertyInfo,DefaultAllocator>::push_back
              ((List<PropertyInfo,DefaultAllocator> *)local_1f8,(PropertyInfo *)&local_268);
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_268);
    Vector<int>::push_back(local_1d8,0);
    GetTypeInfo<Vector3,void>::get_class_info((GetTypeInfo<Vector3,void> *)&local_268);
    List<PropertyInfo,DefaultAllocator>::push_back
              ((List<PropertyInfo,DefaultAllocator> *)local_1f8,(PropertyInfo *)&local_268);
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_268);
    Vector<int>::push_back(local_1d8,0);
    GetTypeInfo<Vector3,void>::get_class_info((GetTypeInfo<Vector3,void> *)&local_268);
    List<PropertyInfo,DefaultAllocator>::push_back
              ((List<PropertyInfo,DefaultAllocator> *)local_1f8,(PropertyInfo *)&local_268);
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_268);
    Vector<int>::push_back(local_1d8,0);
    GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void> *)&local_268);
    List<PropertyInfo,DefaultAllocator>::push_back
              ((List<PropertyInfo,DefaultAllocator> *)local_1f8,(PropertyInfo *)&local_268);
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_268);
    Vector<int>::push_back(local_1d8,3);
    uVar5 = MethodInfo::get_compatibility_hash();
    *(undefined8 *)(this + 0x5e0) = 0;
    lVar8 = *(long *)(this + 8);
    pcVar6 = *(code **)(lVar8 + 0xd8);
    if (((pcVar6 == (code *)0x0) || (*(long *)(lVar8 + 0xe0) == 0)) &&
       (pcVar6 = *(code **)(lVar8 + 0xd0), pcVar6 == (code *)0x0)) {
      local_278 = 0;
      String::parse_latin1((String *)&local_278,"CollisionObject3D");
      StringName::StringName((StringName *)&local_270,(StrRange *)&local_278,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)&local_268,(StringName *)&local_270);
      if (local_260 == 0) {
        lVar8 = 0;
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)&local_260);
        if (StringName::configured != '\0') goto LAB_00107686;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_278);
      }
      else {
        lVar8 = *(long *)(local_260 + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)&local_260);
        if (StringName::configured != '\0') {
LAB_00107686:
          if (local_270 != (Camera3D *)0x0) {
            StringName::unref();
          }
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_278);
        if (lVar8 != 0) {
          lVar8 = *(long *)(this + 8);
          goto LAB_001075bc;
        }
      }
      lVar8 = *(long *)(this + 8);
      pcVar6 = *(code **)(lVar8 + 200);
      if (((pcVar6 != (code *)0x0) && (*(long *)(lVar8 + 0xe0) != 0)) ||
         (pcVar6 = *(code **)(lVar8 + 0xc0), pcVar6 != (code *)0x0)) {
        uVar7 = (*pcVar6)(*(undefined8 *)(lVar8 + 0xa0),this + 0x5d0);
        *(undefined8 *)(this + 0x5e0) = uVar7;
        lVar8 = *(long *)(this + 8);
      }
    }
    else {
      uVar7 = (*pcVar6)(*(undefined8 *)(lVar8 + 0xa0),this + 0x5d0,uVar5);
      *(undefined8 *)(this + 0x5e0) = uVar7;
      lVar8 = *(long *)(this + 8);
    }
LAB_001075bc:
    if (*(char *)(lVar8 + 0x29) != '\0') {
      plVar9 = (long *)operator_new(0x18,"");
      *plVar9 = (long)(this + 0x5e0);
      plVar9[1] = (long)(this + 0x5d8);
      plVar9[2] = *(long *)(this + 0x168);
      *(long **)(this + 0x168) = plVar9;
    }
    this[0x5d8] = (CollisionObject3D)0x1;
    MethodInfo::~MethodInfo((MethodInfo *)&local_238);
  }
  pcVar6 = *(code **)(this + 0x5e0);
  if (pcVar6 != (code *)0x0) {
    local_270 = param_1;
    if (pOVar11 == (Object *)0x0) {
      local_268 = (Object *)0x0;
    }
    else {
      local_268 = pOVar11;
      cVar4 = RefCounted::reference();
      if (cVar4 == '\0') {
        local_268 = (Object *)0x0;
      }
      pcVar6 = *(code **)(this + 0x5e0);
    }
    local_158 = (Variant *)&local_270;
    local_1a8 = local_1c0;
    local_1a0 = local_1b8;
    local_188 = local_1b4;
    pVStack_180 = (Variant *)CONCAT44(pVStack_180._4_4_,local_1ac);
    iStack_234 = param_5 >> 0x1f;
    pVStack_150 = (Variant *)&local_268;
    local_138 = (Variant *)&local_238;
    local_148 = (Variant *)local_2e0;
    pVStack_140 = (Variant *)local_2b8;
    local_238 = param_5;
    if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
      (*pcVar6)(*(undefined8 *)(this + 0x10),local_308,0);
    }
    else {
      (**(code **)(*(long *)(this + 8) + 0xe0))
                (*(undefined8 *)(this + 0x10),this + 0x5d0,pcVar6,local_308,0);
    }
    if (((local_268 != (Object *)0x0) &&
        (cVar4 = RefCounted::unreference(), pOVar3 = local_268, cVar4 != '\0')) &&
       (cVar4 = predelete_handler(local_268), cVar4 != '\0')) {
      (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
      Memory::free_static(pOVar3,false);
    }
  }
LAB_00106e73:
  local_2b8 = (Vector3 *)&local_188;
  local_2e0 = (Vector3 *)&local_1a8;
  local_308 = &local_158;
  if (((pOVar11 != (Object *)0x0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) &&
     (cVar4 = predelete_handler(pOVar11), cVar4 != '\0')) {
    (**(code **)(*(long *)pOVar11 + 0x140))(pOVar11);
    Memory::free_static(pOVar11,false);
  }
  pOVar11 = *(Object **)param_2;
  if ((pOVar11 != (Object *)0x0) && (cVar4 = RefCounted::reference(), cVar4 == '\0')) {
    pOVar11 = (Object *)0x0;
  }
  lVar8 = SceneStringNames::singleton + 0x20;
  local_1a8 = *(undefined8 *)param_3;
  local_1a0 = *(undefined4 *)(param_3 + 8);
  local_188 = *(Variant **)param_4;
  pVVar10 = local_48;
  pVStack_180 = (Variant *)CONCAT44(pVStack_180._4_4_,*(undefined4 *)(param_4 + 8));
  Variant::Variant(local_d8,(Object *)param_1);
  Variant::Variant(local_c0,pOVar11);
  Variant::Variant(local_a8,local_2e0);
  Variant::Variant(local_90,local_2b8);
  Variant::Variant(local_78,param_5);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  local_158 = local_d8;
  pVStack_150 = local_c0;
  local_148 = local_a8;
  pVStack_140 = local_90;
  local_138 = local_78;
  (**(code **)(*(long *)this + 0xd0))(this,lVar8,local_308,5);
  do {
    pVVar2 = pVVar10 + -0x18;
    pVVar10 = pVVar10 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar10 != local_d8);
  if (((pOVar11 == (Object *)0x0) || (cVar4 = RefCounted::unreference(), cVar4 == '\0')) ||
     (cVar4 = predelete_handler(pOVar11), cVar4 == '\0')) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    (**(code **)(*(long *)pOVar11 + 0x140))(pOVar11);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Memory::free_static(pOVar11,false);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CollisionObject3D::_get_shape_owners() */

void CollisionObject3D::_get_shape_owners(void)

{
  long lVar1;
  long lVar2;
  long in_RSI;
  Vector<int> *in_RDI;
  
  lVar1 = *(long *)(in_RSI + 0x550);
  *(undefined8 *)(in_RDI + 8) = 0;
  if (lVar1 != 0) {
    lVar1 = *(long *)(lVar1 + 0x10);
    if (lVar1 != *(long *)(in_RSI + 0x558)) {
      do {
        lVar2 = lVar1;
        lVar1 = *(long *)(lVar2 + 0x10);
      } while (*(long *)(in_RSI + 0x558) != *(long *)(lVar2 + 0x10));
      do {
        Vector<int>::push_back(in_RDI,*(int *)(lVar2 + 0x30));
        lVar2 = *(long *)(lVar2 + 0x20);
      } while (lVar2 != 0);
    }
  }
  return;
}



/* CowData<CollisionObject3D::ShapeData::ShapeBase>::_ref(CowData<CollisionObject3D::ShapeData::ShapeBase>
   const&) [clone .part.0] */

void __thiscall
CowData<CollisionObject3D::ShapeData::ShapeBase>::_ref
          (CowData<CollisionObject3D::ShapeData::ShapeBase> *this,CowData *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  
  _unref(this);
  if (*(long *)param_1 != 0) {
    plVar1 = (long *)(*(long *)param_1 + -0x10);
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



/* CowData<CollisionObject3D::ShapeData::ShapeBase>::_copy_on_write() [clone .isra.0] */

void __thiscall
CowData<CollisionObject3D::ShapeData::ShapeBase>::_copy_on_write
          (CowData<CollisionObject3D::ShapeData::ShapeBase> *this)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  lVar1 = *(long *)(*(long *)this + -8);
  uVar8 = 0x10;
  if (lVar1 * 0x18 != 0) {
    uVar8 = lVar1 * 0x18 - 1;
    uVar8 = uVar8 | uVar8 >> 1;
    uVar8 = uVar8 | uVar8 >> 2;
    uVar8 = uVar8 | uVar8 >> 4;
    uVar8 = uVar8 | uVar8 >> 8;
    uVar8 = uVar8 | uVar8 >> 0x10;
    uVar8 = (uVar8 | uVar8 >> 0x20) + 0x11;
  }
  puVar6 = (undefined8 *)Memory::alloc_static(uVar8,false);
  if (puVar6 != (undefined8 *)0x0) {
    lVar10 = 0;
    *puVar6 = 1;
    puVar6[1] = lVar1;
    puVar7 = puVar6 + 2;
    if (lVar1 != 0) {
      do {
        puVar9 = (undefined8 *)((long)puVar7 + *(long *)this + (-0x10 - (long)puVar6));
        uVar2 = *puVar9;
        puVar7[1] = 0;
        lVar3 = puVar9[1];
        *puVar7 = uVar2;
        if (lVar3 != 0) {
          puVar7[1] = lVar3;
          cVar5 = RefCounted::reference();
          if (cVar5 == '\0') {
            puVar7[1] = 0;
          }
        }
        lVar10 = lVar10 + 1;
        *(undefined4 *)(puVar7 + 2) = *(undefined4 *)(puVar9 + 2);
        puVar7 = puVar7 + 3;
      } while (lVar1 != lVar10);
    }
    _unref(this);
    *(undefined8 **)this = puVar6 + 2;
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* CollisionObject3D::_shape_changed(Ref<Shape3D> const&) */

void __thiscall CollisionObject3D::_shape_changed(CollisionObject3D *this,Ref *param_1)

{
  long lVar1;
  code *pcVar2;
  char cVar3;
  Object *pOVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long in_FS_OFFSET;
  Object *local_48;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0x550) != 0) {
    lVar8 = *(long *)(*(long *)(this + 0x550) + 0x10);
    if (lVar8 != *(long *)(this + 0x558)) {
      do {
        lVar7 = lVar8;
        lVar8 = *(long *)(lVar7 + 0x10);
      } while (*(long *)(this + 0x558) != *(long *)(lVar7 + 0x10));
      do {
        CowData<CollisionObject3D::ShapeData::ShapeBase>::_copy_on_write
                  ((CowData<CollisionObject3D::ShapeData::ShapeBase> *)(lVar7 + 0x78));
        plVar5 = *(long **)(lVar7 + 0x78);
        if (plVar5 != (long *)0x0) {
          lVar8 = 0;
          plVar9 = plVar5;
          do {
            while( true ) {
              if (plVar5[-1] <= lVar8) goto LAB_00107b28;
              if ((plVar9[1] != *(long *)param_1) || (*plVar9 == 0)) break;
              Shape3D::get_debug_mesh();
              if (local_48 == (Object *)0x0) {
                RenderingServer::get_singleton();
                    /* WARNING: Does not return */
                pcVar2 = (code *)invalidInstructionException();
                (*pcVar2)();
              }
              pOVar4 = (Object *)__dynamic_cast(local_48,&Object::typeinfo,&Mesh::typeinfo,0);
              if (pOVar4 == (Object *)0x0) {
LAB_00107abf:
                cVar3 = RefCounted::unreference();
                if ((cVar3 != '\0') && (cVar3 = predelete_handler(local_48), cVar3 != '\0')) {
                  (**(code **)(*(long *)local_48 + 0x140))(local_48);
                  Memory::free_static(local_48,false);
                }
              }
              else {
                cVar3 = RefCounted::reference();
                if (cVar3 == '\0') {
                  pOVar4 = (Object *)0x0;
                }
                if (local_48 != (Object *)0x0) goto LAB_00107abf;
              }
              plVar5 = (long *)RenderingServer::get_singleton();
              pcVar2 = *(code **)(*plVar5 + 0xd20);
              uVar6 = (**(code **)(*(long *)pOVar4 + 0x1c0))(pOVar4);
              (*pcVar2)(plVar5,*plVar9,uVar6);
              cVar3 = RefCounted::unreference();
              if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar4), cVar3 != '\0')) {
                (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
                Memory::free_static(pOVar4,false);
              }
              plVar5 = *(long **)(lVar7 + 0x78);
              lVar8 = lVar8 + 1;
              plVar9 = plVar9 + 3;
              if (plVar5 == (long *)0x0) goto LAB_00107b28;
            }
            lVar8 = lVar8 + 1;
            plVar9 = plVar9 + 3;
          } while (plVar5 != (long *)0x0);
        }
LAB_00107b28:
        lVar7 = *(long *)(lVar7 + 0x20);
      } while (lVar7 != 0);
    }
  }
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CollisionObject3D::_clear_debug_shapes() */

void __thiscall CollisionObject3D::_clear_debug_shapes(CollisionObject3D *this)

{
  Callable *pCVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  CallableCustom *this_00;
  long lVar5;
  long *plVar6;
  long in_FS_OFFSET;
  Callable aCStack_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar3 = RenderingServer::get_singleton();
  if (lVar3 == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("_clear_debug_shapes","scene/3d/physics/collision_object_3d.cpp",0x19d,
                       "Parameter \"RenderingServer::get_singleton()\" is null.",0,0);
      return;
    }
  }
  else {
    if (*(long *)(this + 0x550) != 0) {
      lVar3 = *(long *)(*(long *)(this + 0x550) + 0x10);
      if (lVar3 != *(long *)(this + 0x558)) {
        do {
          lVar5 = lVar3;
          lVar3 = *(long *)(lVar5 + 0x10);
        } while (*(long *)(this + 0x558) != *(long *)(lVar5 + 0x10));
        do {
          CowData<CollisionObject3D::ShapeData::ShapeBase>::_copy_on_write
                    ((CowData<CollisionObject3D::ShapeData::ShapeBase> *)(lVar5 + 0x78));
          plVar4 = *(long **)(lVar5 + 0x78);
          if (plVar4 != (long *)0x0) {
            lVar3 = 0;
            plVar6 = plVar4;
            do {
              while( true ) {
                if (plVar4[-1] <= lVar3) goto LAB_00107d50;
                if (*plVar6 == 0) break;
                plVar4 = (long *)RenderingServer::get_singleton();
                (**(code **)(*plVar4 + 0x11b0))(plVar4,*plVar6);
                pCVar1 = (Callable *)plVar6[1];
                *plVar6 = 0;
                if (pCVar1 != (Callable *)0x0) {
                  this_00 = (CallableCustom *)operator_new(0x48,"");
                  CallableCustom::CallableCustom(this_00);
                  *(CollisionObject3D **)(this_00 + 0x28) = this;
                  *(undefined1 (*) [16])(this_00 + 0x30) = (undefined1  [16])0x0;
                  *(undefined **)(this_00 + 0x20) = &_LC34;
                  *(undefined8 *)(this_00 + 0x40) = 0;
                  uVar2 = *(undefined8 *)(this + 0x60);
                  *(undefined ***)this_00 = &PTR_hash_00122dc8;
                  *(undefined8 *)(this_00 + 0x30) = uVar2;
                  *(code **)(this_00 + 0x38) = _update_shape_data;
                  *(undefined8 *)(this_00 + 0x10) = 0;
                  CallableCustomMethodPointerBase::_setup((uint *)this_00,(int)this_00 + 0x28);
                  *(char **)(this_00 + 0x20) = "CollisionObject3D::_update_shape_data";
                  Callable::Callable(aCStack_58,this_00);
                  Resource::disconnect_changed(pCVar1);
                  Callable::~Callable(aCStack_58);
                }
                plVar4 = *(long **)(lVar5 + 0x78);
                lVar3 = lVar3 + 1;
                plVar6 = plVar6 + 3;
                if (plVar4 == (long *)0x0) goto LAB_00107d50;
              }
              lVar3 = lVar3 + 1;
              plVar6 = plVar6 + 3;
            } while (plVar4 != (long *)0x0);
          }
LAB_00107d50:
          lVar5 = *(long *)(lVar5 + 0x20);
        } while (lVar5 != 0);
      }
    }
    *(undefined4 *)(this + 0x598) = 0;
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CollisionObject3D::~CollisionObject3D() */

void __thiscall CollisionObject3D::~CollisionObject3D(CollisionObject3D *this)

{
  long lVar1;
  long *plVar2;
  void *pvVar3;
  
  *(undefined ***)this = &PTR__initialize_classv_00122aa0;
  lVar1 = PhysicsServer3D::get_singleton();
  if (lVar1 == 0) {
    _err_print_error("~CollisionObject3D","scene/3d/physics/collision_object_3d.cpp",0x2f4,
                     "Parameter \"PhysicsServer3D::get_singleton()\" is null.",0,0);
    if (StringName::configured != '\0') {
      if (*(long *)(this + 0x600) != 0) {
        StringName::unref();
        if (StringName::configured == '\0') goto LAB_00107f82;
      }
      if (*(long *)(this + 0x5e8) != 0) {
        StringName::unref();
        if (StringName::configured == '\0') goto LAB_00107f82;
      }
      if (*(long *)(this + 0x5d0) != 0) {
        StringName::unref();
      }
    }
LAB_00107f82:
    pvVar3 = *(void **)(this + 0x570);
    if (pvVar3 == (void *)0x0) goto LAB_00107ee4;
    if (*(int *)(this + 0x594) != 0) {
      if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x590) * 4) != 0) {
        memset(*(void **)(this + 0x588),0,
               (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x590) * 4) * 4);
      }
      goto LAB_00107ea6;
    }
  }
  else {
    plVar2 = (long *)PhysicsServer3D::get_singleton();
    (**(code **)(*plVar2 + 0x6e8))(plVar2);
    if (StringName::configured != '\0') {
      if (*(long *)(this + 0x600) != 0) {
        StringName::unref();
        if (StringName::configured == '\0') goto LAB_00107e6a;
      }
      if (*(long *)(this + 0x5e8) != 0) {
        StringName::unref();
        if (StringName::configured == '\0') goto LAB_00107e6a;
      }
      if (*(long *)(this + 0x5d0) != 0) {
        StringName::unref();
      }
    }
LAB_00107e6a:
    pvVar3 = *(void **)(this + 0x570);
    if (pvVar3 == (void *)0x0) goto LAB_00107ee4;
    if (*(int *)(this + 0x594) != 0) {
      if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x590) * 4) != 0) {
        memset(*(void **)(this + 0x588),0,
               (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x590) * 4) << 2);
      }
LAB_00107ea6:
      *(undefined4 *)(this + 0x594) = 0;
    }
  }
  Memory::free_static(pvVar3,false);
  Memory::free_static(*(void **)(this + 0x580),false);
  Memory::free_static(*(void **)(this + 0x578),false);
  Memory::free_static(*(void **)(this + 0x588),false);
LAB_00107ee4:
  RBMap<unsigned_int,CollisionObject3D::ShapeData,Comparator<unsigned_int>,DefaultAllocator>::~RBMap
            ((RBMap<unsigned_int,CollisionObject3D::ShapeData,Comparator<unsigned_int>,DefaultAllocator>
              *)(this + 0x550));
  Node3D::~Node3D((Node3D *)this);
  return;
}



/* CollisionObject3D::~CollisionObject3D() */

void __thiscall CollisionObject3D::~CollisionObject3D(CollisionObject3D *this)

{
  ~CollisionObject3D(this);
  operator_delete(this,0x618);
  return;
}



/* CollisionObject3D::_update_debug_shapes() */

void __thiscall CollisionObject3D::_update_debug_shapes(CollisionObject3D *this)

{
  int iVar1;
  code *pcVar2;
  Callable *pCVar3;
  Object *pOVar4;
  char cVar5;
  long lVar6;
  Object *pOVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  int iVar12;
  uint *puVar13;
  long lVar14;
  long in_FS_OFFSET;
  CollisionObject3D local_c8 [16];
  Object *local_b8 [2];
  Variant *local_a8 [6];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar6 = RenderingServer::get_singleton();
  if (lVar6 == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("_update_debug_shapes","scene/3d/physics/collision_object_3d.cpp",0x176,
                       "Parameter \"RenderingServer::get_singleton()\" is null.",0,0);
      return;
    }
    goto LAB_00108611;
  }
  puVar13 = *(uint **)(this + 0x570);
  if (((byte)this[0x2fa] & 0x40) == 0) {
    if (puVar13 != (uint *)0x0) {
      iVar1 = *(int *)(this + 0x594);
      goto joined_r0x0010858c;
    }
  }
  else {
    iVar1 = *(int *)(this + 0x594);
    iVar12 = 1;
    if (iVar1 != 0) {
LAB_00108070:
      if (*(long *)(this + 0x550) != 0) {
        for (lVar6 = *(long *)(*(long *)(this + 0x550) + 0x10); *(long *)(this + 0x558) != lVar6;
            lVar6 = *(long *)(lVar6 + 0x10)) {
          while (*(uint *)(lVar6 + 0x30) <= *puVar13) {
            if (*puVar13 <= *(uint *)(lVar6 + 0x30)) {
              lVar6 = RBMap<unsigned_int,CollisionObject3D::ShapeData,Comparator<unsigned_int>,DefaultAllocator>
                      ::operator[]((RBMap<unsigned_int,CollisionObject3D::ShapeData,Comparator<unsigned_int>,DefaultAllocator>
                                    *)(this + 0x550),puVar13);
              CowData<CollisionObject3D::ShapeData::ShapeBase>::_copy_on_write
                        ((CowData<CollisionObject3D::ShapeData::ShapeBase> *)(lVar6 + 0x40));
              plVar9 = *(long **)(lVar6 + 0x40);
              if (plVar9 == (long *)0x0) goto LAB_001080b9;
              lVar14 = 0;
              plVar11 = plVar9;
              goto LAB_001082d7;
            }
            lVar6 = *(long *)(lVar6 + 8);
            if (lVar6 == *(long *)(this + 0x558)) goto LAB_001080b9;
          }
        }
      }
      goto LAB_001080b9;
    }
  }
  goto LAB_00108114;
LAB_001082d7:
  do {
    if (plVar9[-1] <= lVar14) break;
    if ((plVar11[1] == 0) || (*(char *)(lVar6 + 0x48) != '\0')) {
      if (*plVar11 != 0) {
        plVar9 = (long *)RenderingServer::get_singleton();
        (**(code **)(*plVar9 + 0x11b0))(plVar9);
        *plVar11 = 0;
        *(int *)(this + 0x598) = *(int *)(this + 0x598) + -1;
        goto LAB_001082c2;
      }
    }
    else {
      if (*plVar11 == 0) {
        plVar9 = (long *)RenderingServer::get_singleton();
        lVar10 = (**(code **)(*plVar9 + 0xd18))(plVar9);
        *plVar11 = lVar10;
        plVar9 = (long *)RenderingServer::get_singleton();
        pcVar2 = *(code **)(*plVar9 + 0xd28);
        Node3D::get_world_3d();
        uVar8 = World3D::get_scenario();
        (*pcVar2)(plVar9,*plVar11,uVar8);
        if (((local_b8[0] != (Object *)0x0) &&
            (cVar5 = RefCounted::unreference(), pOVar7 = local_b8[0], cVar5 != '\0')) &&
           (cVar5 = predelete_handler(local_b8[0]), cVar5 != '\0')) {
          (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
          Memory::free_static(pOVar7,false);
        }
        pCVar3 = (Callable *)plVar11[1];
        create_custom_callable_function_pointer<CollisionObject3D,Ref<Shape3D>const&>
                  (local_c8,(char *)this,(_func_void_Ref_ptr *)"&CollisionObject3D::_shape_changed")
        ;
        pOVar7 = (Object *)plVar11[1];
        if ((pOVar7 != (Object *)0x0) && (cVar5 = RefCounted::reference(), cVar5 == '\0')) {
          pOVar7 = (Object *)0x0;
        }
        Variant::Variant((Variant *)local_78,pOVar7);
        local_60 = 0;
        local_58 = (undefined1  [16])0x0;
        local_a8[0] = (Variant *)local_78;
        Callable::bindp((Variant **)local_b8,(int)local_c8);
        if (Variant::needs_deinit[(int)local_60] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        Resource::connect_changed(pCVar3,(uint)(Callable *)local_b8);
        Callable::~Callable((Callable *)local_b8);
        if (((pOVar7 != (Object *)0x0) && (cVar5 = RefCounted::unreference(), cVar5 != '\0')) &&
           (cVar5 = predelete_handler(pOVar7), cVar5 != '\0')) {
          (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
          Memory::free_static(pOVar7,false);
        }
        Callable::~Callable((Callable *)local_c8);
        *(int *)(this + 0x598) = *(int *)(this + 0x598) + 1;
      }
      Shape3D::get_debug_mesh();
      if (local_b8[0] == (Object *)0x0) {
        RenderingServer::get_singleton();
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      pOVar7 = (Object *)__dynamic_cast(local_b8[0],&Object::typeinfo,&Mesh::typeinfo,0);
      if (pOVar7 == (Object *)0x0) {
LAB_00108211:
        cVar5 = RefCounted::unreference();
        pOVar4 = local_b8[0];
        if ((cVar5 != '\0') && (cVar5 = predelete_handler(local_b8[0]), cVar5 != '\0')) {
          (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
          Memory::free_static(pOVar4,false);
        }
      }
      else {
        cVar5 = RefCounted::reference();
        if (cVar5 == '\0') {
          pOVar7 = (Object *)0x0;
        }
        if (local_b8[0] != (Object *)0x0) goto LAB_00108211;
      }
      plVar9 = (long *)RenderingServer::get_singleton();
      pcVar2 = *(code **)(*plVar9 + 0xd20);
      uVar8 = (**(code **)(*(long *)pOVar7 + 0x1c0))(pOVar7);
      (*pcVar2)(plVar9,*plVar11,uVar8);
      plVar9 = (long *)RenderingServer::get_singleton();
      pcVar2 = *(code **)(*plVar9 + 0xd40);
      Node3D::get_global_transform();
      Transform3D::operator*((Transform3D *)local_78,(Transform3D *)local_a8);
      (*pcVar2)(plVar9,*plVar11,(Transform3D *)local_78);
      cVar5 = RefCounted::unreference();
      if ((cVar5 == '\0') || (cVar5 = predelete_handler(pOVar7), cVar5 == '\0')) {
LAB_001082c2:
        plVar9 = *(long **)(lVar6 + 0x40);
      }
      else {
        (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
        Memory::free_static(pOVar7,false);
        plVar9 = *(long **)(lVar6 + 0x40);
      }
    }
    lVar14 = lVar14 + 1;
    plVar11 = plVar11 + 3;
  } while (plVar9 != (long *)0x0);
LAB_001080b9:
  if (iVar1 <= iVar12) goto code_r0x001080c2;
  iVar12 = iVar12 + 1;
  puVar13 = puVar13 + 1;
  goto LAB_00108070;
code_r0x001080c2:
  if (*(long *)(this + 0x570) != 0) {
    iVar1 = *(int *)(this + 0x594);
joined_r0x0010858c:
    if (iVar1 != 0) {
      if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x590) * 4) != 0) {
        memset(*(void **)(this + 0x588),0,
               (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x590) * 4) * 4);
      }
      *(undefined4 *)(this + 0x594) = 0;
    }
  }
LAB_00108114:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00108611:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x00108c92) */
/* WARNING: Removing unreachable block (ram,0x00108c9f) */
/* WARNING: Removing unreachable block (ram,0x00108cb4) */
/* CollisionObject3D::_notification(int) */

void __thiscall CollisionObject3D::_notification(CollisionObject3D *this,int param_1)

{
  code *pcVar1;
  char cVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long in_FS_OFFSET;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  Object *local_a0;
  undefined8 local_98 [2];
  int local_88 [8];
  Transform3D local_68 [56];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (0x2c < param_1) {
    if ((param_1 == 2000) && (this[0x568] == (CollisionObject3D)0x0)) {
      if (this[0x534] == (CollisionObject3D)0x0) {
        plVar4 = (long *)PhysicsServer3D::get_singleton();
        pcVar1 = *(code **)(*plVar4 + 0x3e0);
        Node3D::get_global_transform();
        Variant::Variant((Variant *)local_88,local_68);
        (*pcVar1)(plVar4,*(undefined8 *)(this + 0x538),0,(Variant *)local_88);
        if (Variant::needs_deinit[local_88[0]] != '\0') {
          Variant::_clear_internal();
        }
      }
      else {
        plVar4 = (long *)PhysicsServer3D::get_singleton();
        pcVar1 = *(code **)(*plVar4 + 0x2a0);
        Node3D::get_global_transform();
        (*pcVar1)(plVar4,*(undefined8 *)(this + 0x538),local_68);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        _on_transform_changed(this);
        return;
      }
      goto LAB_00108cdc;
    }
    goto switchD_0010866d_caseD_c;
  }
  if (param_1 < 10) goto switchD_0010866d_caseD_c;
  switch(param_1) {
  case 10:
    cVar2 = _are_collision_shapes_visible(this);
    if (cVar2 != '\0') {
      Node3D::get_global_transform();
      *(undefined8 *)(this + 0x59c) = local_d8;
      *(undefined8 *)(this + 0x5a4) = uStack_d0;
      *(undefined8 *)(this + 0x5ac) = local_c8;
      *(undefined8 *)(this + 0x5b4) = uStack_c0;
      *(undefined8 *)(this + 0x5bc) = local_b8;
      *(undefined8 *)(this + 0x5c4) = uStack_b0;
      if (*(long *)(this + 0x550) != 0) {
        lVar3 = *(long *)(*(long *)(this + 0x550) + 0x10);
        if (lVar3 != *(long *)(this + 0x558)) {
          do {
            lVar5 = lVar3;
            lVar3 = *(long *)(lVar5 + 0x10);
          } while (*(long *)(this + 0x558) != *(long *)(lVar5 + 0x10));
          do {
            HashSet<unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>>::
            insert((uint *)local_98);
            lVar5 = *(long *)(lVar5 + 0x20);
          } while (lVar5 != 0);
        }
      }
      _update_debug_shapes(this);
    }
    lVar3 = Engine::get_singleton();
    if (*(char *)(lVar3 + 0xc0) != '\0') {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        Node3D::set_notify_local_transform(SUB81(this,0));
        return;
      }
      goto LAB_00108cdc;
    }
    break;
  case 0xb:
    if (0 < *(int *)(this + 0x598)) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        _clear_debug_shapes(this);
        return;
      }
      goto LAB_00108cdc;
    }
    break;
  case 0x1c:
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      _apply_disabled(this);
      return;
    }
    goto LAB_00108cdc;
  case 0x1d:
switchD_0010866d_caseD_1d:
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      _apply_enabled(this);
      return;
    }
    goto LAB_00108cdc;
  case 0x29:
    if (this[0x534] == (CollisionObject3D)0x0) {
      plVar4 = (long *)PhysicsServer3D::get_singleton();
      pcVar1 = *(code **)(*plVar4 + 0x3e0);
      Node3D::get_global_transform();
      Variant::Variant((Variant *)local_88,local_68);
      (*pcVar1)(plVar4,*(undefined8 *)(this + 0x538),0,(Variant *)local_88);
      if (Variant::needs_deinit[local_88[0]] != '\0') {
        Variant::_clear_internal();
      }
    }
    else {
      plVar4 = (long *)PhysicsServer3D::get_singleton();
      pcVar1 = *(code **)(*plVar4 + 0x2a0);
      Node3D::get_global_transform();
      (*pcVar1)(plVar4,*(undefined8 *)(this + 0x538),local_68);
    }
    cVar2 = Node::is_enabled();
    if ((cVar2 != '\0') ||
       ((*(int *)(this + 0x544) != 0 && (_apply_disabled(this), *(int *)(this + 0x544) != 0)))) {
      Node3D::get_world_3d();
      if (local_a0 == (Object *)0x0) {
        _err_print_error("_notification","scene/3d/physics/collision_object_3d.cpp",0x49,
                         "Condition \"world_ref.is_null()\" is true.",0,0);
        break;
      }
      local_98[0] = World3D::get_space();
      if (this[0x534] == (CollisionObject3D)0x0) {
        plVar4 = (long *)PhysicsServer3D::get_singleton();
        (**(code **)(*plVar4 + 0x300))(plVar4,*(undefined8 *)(this + 0x538),local_98[0]);
      }
      else {
        plVar4 = (long *)PhysicsServer3D::get_singleton();
        (**(code **)(*plVar4 + 0x230))(plVar4,*(undefined8 *)(this + 0x538),local_98[0]);
      }
      if (*(code **)(*(long *)this + 0x1f0) != _space_changed) {
        (**(code **)(*(long *)this + 0x1f0))(this);
      }
      if (((local_a0 != (Object *)0x0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) &&
         (cVar2 = predelete_handler(local_a0), cVar2 != '\0')) {
        (**(code **)(*(long *)local_a0 + 0x140))(local_a0);
        Memory::free_static(local_a0,false);
      }
    }
  case 0x2b:
    if (((byte)this[0x2fa] & 0x40) != 0) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        _update_pickable(this);
        return;
      }
      goto LAB_00108cdc;
    }
    break;
  case 0x2a:
    cVar2 = Node::is_enabled();
    if ((cVar2 != '\0') || (*(int *)(this + 0x544) != 0)) {
      if (*(int *)(this + 0x540) == 0) {
        if (this[0x534] == (CollisionObject3D)0x0) {
          plVar4 = (long *)PhysicsServer3D::get_singleton();
          (**(code **)(*plVar4 + 0x300))(plVar4,*(undefined8 *)(this + 0x538),0);
        }
        else {
          plVar4 = (long *)PhysicsServer3D::get_singleton();
          (**(code **)(*plVar4 + 0x230))(plVar4,*(undefined8 *)(this + 0x538),0);
        }
        local_98[0] = 0;
        if (*(code **)(*(long *)this + 0x1f0) != _space_changed) {
          (**(code **)(*(long *)this + 0x1f0))(this,local_98);
        }
      }
      else {
        _err_print_error("_notification","scene/3d/physics/collision_object_3d.cpp",0x71,
                         "Removing a CollisionObject node during a physics callback is not allowed and will cause undesired behavior. Remove with call_deferred() instead."
                         ,0,0);
      }
      if ((cVar2 == '\0') && (*(int *)(this + 0x544) != 0)) goto switchD_0010866d_caseD_1d;
    }
    break;
  case 0x2c:
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      Node::update_configuration_warnings();
      return;
    }
    goto LAB_00108cdc;
  }
switchD_0010866d_caseD_c:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00108cdc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CollisionObject3D::create_shape_owner(Object*) */

uint __thiscall CollisionObject3D::create_shape_owner(CollisionObject3D *this,Object *param_1)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  undefined8 *puVar4;
  uint uVar5;
  long in_FS_OFFSET;
  uint local_7c;
  undefined8 local_78;
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_38;
  undefined1 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_30 = 0;
  local_50 = 0x3f800000;
  uStack_4c = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  local_38 = 0;
  local_70 = ZEXT416(_LC27);
  local_60 = ZEXT416(_LC27);
  if (*(int *)(this + 0x560) == 0) {
    uVar5 = 0;
LAB_00108d92:
    local_78 = 0;
    if (param_1 != (Object *)0x0) {
      local_78 = *(undefined8 *)(param_1 + 0x60);
    }
    local_7c = uVar5;
    puVar4 = (undefined8 *)
             RBMap<unsigned_int,CollisionObject3D::ShapeData,Comparator<unsigned_int>,DefaultAllocator>
             ::operator[]((RBMap<unsigned_int,CollisionObject3D::ShapeData,Comparator<unsigned_int>,DefaultAllocator>
                           *)(this + 0x550),&local_7c);
    puVar4[1] = local_70._0_8_;
    puVar4[2] = local_70._8_8_;
    *puVar4 = local_78;
    puVar4[3] = local_60._0_8_;
    puVar4[4] = local_60._8_8_;
    puVar4[5] = CONCAT44(uStack_4c,local_50);
    puVar4[6] = CONCAT44(uStack_44,uStack_48);
    if (puVar4[8] != 0) {
      CowData<CollisionObject3D::ShapeData::ShapeBase>::_ref
                ((CowData<CollisionObject3D::ShapeData::ShapeBase> *)(puVar4 + 8),
                 (CowData *)&local_38);
    }
    *(undefined1 *)(puVar4 + 9) = 0;
    CowData<CollisionObject3D::ShapeData::ShapeBase>::_unref
              ((CowData<CollisionObject3D::ShapeData::ShapeBase> *)&local_38);
    if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return uVar5;
  }
  if (*(long *)(this + 0x550) != 0) {
    lVar1 = *(long *)(*(long *)(this + 0x550) + 0x10);
    if (lVar1 != *(long *)(this + 0x558)) {
      do {
        lVar3 = lVar1;
        lVar1 = *(long *)(lVar3 + 8);
      } while (*(long *)(this + 0x558) != lVar1);
      uVar5 = *(int *)(lVar3 + 0x30) + 1;
      goto LAB_00108d92;
    }
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}



/* CollisionObject3D::shape_owner_set_disabled(unsigned int, bool) */

void __thiscall
CollisionObject3D::shape_owner_set_disabled(CollisionObject3D *this,uint param_1,bool param_2)

{
  undefined4 *puVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  uint local_3c [3];
  
  lVar4 = *(long *)(this + 0x550);
  local_3c[0] = param_1;
  if (lVar4 != 0) {
    while (lVar4 = *(long *)(lVar4 + 0x10), *(long *)(this + 0x558) != lVar4) {
      while (*(uint *)(lVar4 + 0x30) <= param_1) {
        if (param_1 <= *(uint *)(lVar4 + 0x30)) {
          lVar4 = RBMap<unsigned_int,CollisionObject3D::ShapeData,Comparator<unsigned_int>,DefaultAllocator>
                  ::operator[]((RBMap<unsigned_int,CollisionObject3D::ShapeData,Comparator<unsigned_int>,DefaultAllocator>
                                *)(this + 0x550),local_3c);
          if ((bool)*(char *)(lVar4 + 0x48) == param_2) {
            return;
          }
          *(bool *)(lVar4 + 0x48) = param_2;
          lVar2 = *(long *)(lVar4 + 0x40);
          lVar8 = 0;
          lVar6 = 0;
          goto joined_r0x00108eed;
        }
        lVar4 = *(long *)(lVar4 + 8);
        if (*(long *)(this + 0x558) == lVar4) goto LAB_00108e8d;
      }
    }
  }
LAB_00108e8d:
  _err_print_error("shape_owner_set_disabled","scene/3d/physics/collision_object_3d.cpp",0x220,
                   "Condition \"!shapes.has(p_owner)\" is true.",0,0);
  return;
joined_r0x00108eed:
  if ((lVar2 == 0) || (*(long *)(lVar2 + -8) <= lVar6)) {
    _update_shape_data((uint)this);
    return;
  }
  if (this[0x534] == (CollisionObject3D)0x0) {
    plVar5 = (long *)PhysicsServer3D::get_singleton();
    pcVar3 = *(code **)(*plVar5 + 0x360);
    lVar2 = *(long *)(lVar4 + 0x40);
  }
  else {
    plVar5 = (long *)PhysicsServer3D::get_singleton();
    pcVar3 = *(code **)(*plVar5 + 0x280);
    lVar2 = *(long *)(lVar4 + 0x40);
  }
  if (lVar2 == 0) {
    lVar7 = 0;
LAB_00108f6f:
    _err_print_index_error
              ("get","./core/templates/cowdata.h",0xdb,lVar6,lVar7,"p_index","size()","",false,true)
    ;
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  lVar7 = *(long *)(lVar2 + -8);
  if (lVar7 <= lVar6) goto LAB_00108f6f;
  puVar1 = (undefined4 *)(lVar2 + 0x10 + lVar8);
  lVar6 = lVar6 + 1;
  lVar8 = lVar8 + 0x18;
  (*pcVar3)(plVar5,*(undefined8 *)(this + 0x538),*puVar1,param_2);
  lVar2 = *(long *)(lVar4 + 0x40);
  goto joined_r0x00108eed;
}



/* CollisionObject3D::shape_owner_set_transform(unsigned int, Transform3D const&) */

void __thiscall
CollisionObject3D::shape_owner_set_transform
          (CollisionObject3D *this,uint param_1,Transform3D *param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  long lVar9;
  uint local_3c [3];
  
  lVar4 = *(long *)(this + 0x550);
  local_3c[0] = param_1;
  if (lVar4 != 0) {
    while (lVar4 = *(long *)(lVar4 + 0x10), *(long *)(this + 0x558) != lVar4) {
      while (*(uint *)(lVar4 + 0x30) <= param_1) {
        if (param_1 <= *(uint *)(lVar4 + 0x30)) {
          lVar3 = RBMap<unsigned_int,CollisionObject3D::ShapeData,Comparator<unsigned_int>,DefaultAllocator>
                  ::operator[]((RBMap<unsigned_int,CollisionObject3D::ShapeData,Comparator<unsigned_int>,DefaultAllocator>
                                *)(this + 0x550),local_3c);
          uVar2 = *(undefined8 *)(param_2 + 8);
          *(undefined8 *)(lVar3 + 8) = *(undefined8 *)param_2;
          *(undefined8 *)(lVar3 + 0x10) = uVar2;
          uVar2 = *(undefined8 *)(param_2 + 0x18);
          *(undefined8 *)(lVar3 + 0x18) = *(undefined8 *)(param_2 + 0x10);
          *(undefined8 *)(lVar3 + 0x20) = uVar2;
          uVar2 = *(undefined8 *)(param_2 + 0x28);
          *(undefined8 *)(lVar3 + 0x28) = *(undefined8 *)(param_2 + 0x20);
          *(undefined8 *)(lVar3 + 0x30) = uVar2;
          lVar4 = *(long *)(lVar3 + 0x40);
          if (lVar4 == 0) goto LAB_00109170;
          lVar9 = 0;
          lVar6 = 0;
          goto LAB_001090f8;
        }
        lVar4 = *(long *)(lVar4 + 8);
        if (*(long *)(this + 0x558) == lVar4) goto LAB_0010902d;
      }
    }
  }
LAB_0010902d:
  _err_print_error("shape_owner_set_transform","scene/3d/physics/collision_object_3d.cpp",0x248,
                   "Condition \"!shapes.has(p_owner)\" is true.",0,0);
  return;
LAB_001090f8:
  do {
    if (*(long *)(lVar4 + -8) <= lVar6) break;
    if (this[0x534] != (CollisionObject3D)0x0) {
      plVar5 = (long *)PhysicsServer3D::get_singleton();
      pcVar8 = *(code **)(*plVar5 + 0x250);
      lVar4 = *(long *)(lVar3 + 0x40);
      if (lVar4 != 0) goto LAB_001090cb;
LAB_00109124:
      lVar7 = 0;
LAB_00109127:
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,lVar6,lVar7,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar8 = (code *)invalidInstructionException();
      (*pcVar8)();
    }
    plVar5 = (long *)PhysicsServer3D::get_singleton();
    pcVar8 = *(code **)(*plVar5 + 0x330);
    lVar4 = *(long *)(lVar3 + 0x40);
    if (lVar4 == 0) goto LAB_00109124;
LAB_001090cb:
    lVar7 = *(long *)(lVar4 + -8);
    if (lVar7 <= lVar6) goto LAB_00109127;
    puVar1 = (undefined4 *)(lVar4 + 0x10 + lVar9);
    lVar6 = lVar6 + 1;
    lVar9 = lVar9 + 0x18;
    (*pcVar8)(plVar5,*(undefined8 *)(this + 0x538),*puVar1,param_2);
    lVar4 = *(long *)(lVar3 + 0x40);
  } while (lVar4 != 0);
LAB_00109170:
  _update_shape_data((uint)this);
  return;
}



/* CollisionObject3D::shape_owner_remove_shape(unsigned int, int) */

void __thiscall
CollisionObject3D::shape_owner_remove_shape(CollisionObject3D *this,uint param_1,int param_2)

{
  int *piVar1;
  RBMap<unsigned_int,CollisionObject3D::ShapeData,Comparator<unsigned_int>,DefaultAllocator>
  *this_00;
  int iVar2;
  Object *pOVar3;
  Object *pOVar4;
  Callable *pCVar5;
  code *pcVar6;
  char cVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  undefined8 *puVar14;
  long in_FS_OFFSET;
  uint local_5c;
  CollisionObject3D local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_5c = param_1;
  lVar8 = RenderingServer::get_singleton();
  if (lVar8 == 0) {
    _err_print_error("shape_owner_remove_shape","scene/3d/physics/collision_object_3d.cpp",0x28d,
                     "Parameter \"RenderingServer::get_singleton()\" is null.",0,0);
  }
  else {
    lVar8 = *(long *)(this + 0x550);
    this_00 = (RBMap<unsigned_int,CollisionObject3D::ShapeData,Comparator<unsigned_int>,DefaultAllocator>
               *)(this + 0x550);
    if (lVar8 != 0) {
LAB_001091f0:
      lVar8 = *(long *)(lVar8 + 0x10);
      if (*(long *)(this + 0x558) != lVar8) {
        while( true ) {
          if (local_5c < *(uint *)(lVar8 + 0x30)) goto LAB_001091f0;
          if (local_5c <= *(uint *)(lVar8 + 0x30)) break;
          lVar8 = *(long *)(lVar8 + 8);
          if (*(long *)(this + 0x558) == lVar8) goto LAB_0010920d;
        }
        lVar8 = (long)param_2;
        if (-1 < param_2) {
          lVar9 = RBMap<unsigned_int,CollisionObject3D::ShapeData,Comparator<unsigned_int>,DefaultAllocator>
                  ::operator[](this_00,&local_5c);
          if ((*(long *)(lVar9 + 0x40) != 0) && (lVar8 < *(long *)(*(long *)(lVar9 + 0x40) + -8))) {
            lVar9 = RBMap<unsigned_int,CollisionObject3D::ShapeData,Comparator<unsigned_int>,DefaultAllocator>
                    ::operator[](this_00,&local_5c);
            if (*(long *)(lVar9 + 0x40) == 0) {
              lVar11 = 0;
LAB_001095f1:
              _err_print_index_error
                        ("operator[]","./core/templates/vector.h",0x38,lVar8,lVar11,"p_index",
                         "((Vector<T> *)(this))->_cowdata.size()","",false,true);
              _err_flush_stdout();
                    /* WARNING: Does not return */
              pcVar6 = (code *)invalidInstructionException();
              (*pcVar6)();
            }
            lVar11 = *(long *)(*(long *)(lVar9 + 0x40) + -8);
            if (lVar11 <= lVar8) goto LAB_001095f1;
            CowData<CollisionObject3D::ShapeData::ShapeBase>::_copy_on_write
                      ((CowData<CollisionObject3D::ShapeData::ShapeBase> *)(lVar9 + 0x40));
            plVar13 = (long *)(*(long *)(lVar9 + 0x40) + lVar8 * 0x18);
            iVar2 = (int)plVar13[2];
            if (this[0x534] == (CollisionObject3D)0x0) {
              plVar10 = (long *)PhysicsServer3D::get_singleton();
              (**(code **)(*plVar10 + 0x350))(plVar10,*(undefined8 *)(this + 0x538),iVar2);
              lVar9 = *plVar13;
            }
            else {
              plVar10 = (long *)PhysicsServer3D::get_singleton();
              (**(code **)(*plVar10 + 0x270))(plVar10,*(undefined8 *)(this + 0x538),iVar2);
              lVar9 = *plVar13;
            }
            if (lVar9 != 0) {
              plVar10 = (long *)RenderingServer::get_singleton();
              (**(code **)(*plVar10 + 0x11b0))(plVar10,*plVar13);
              pCVar5 = (Callable *)plVar13[1];
              if (pCVar5 != (Callable *)0x0) {
                create_custom_callable_function_pointer<CollisionObject3D,Ref<Shape3D>const&>
                          (local_58,(char *)this,
                           (_func_void_Ref_ptr *)"&CollisionObject3D::_shape_changed");
                Resource::disconnect_changed(pCVar5);
                Callable::~Callable((Callable *)local_58);
              }
              *(int *)(this + 0x598) = *(int *)(this + 0x598) + -1;
            }
            lVar9 = RBMap<unsigned_int,CollisionObject3D::ShapeData,Comparator<unsigned_int>,DefaultAllocator>
                    ::operator[](this_00,&local_5c);
            if (*(long *)(lVar9 + 0x40) == 0) {
              lVar11 = 0;
            }
            else {
              lVar11 = *(long *)(*(long *)(lVar9 + 0x40) + -8);
              if (lVar8 < lVar11) {
                CowData<CollisionObject3D::ShapeData::ShapeBase>::_copy_on_write
                          ((CowData<CollisionObject3D::ShapeData::ShapeBase> *)(lVar9 + 0x40));
                lVar11 = *(long *)(lVar9 + 0x40);
                if (lVar11 == 0) {
                  lVar12 = -1;
                }
                else {
                  lVar12 = *(long *)(lVar11 + -8) + -1;
                  if (lVar8 < lVar12) {
                    puVar14 = (undefined8 *)(lVar8 * 0x18 + lVar11);
                    do {
                      pOVar3 = (Object *)puVar14[4];
                      pOVar4 = (Object *)puVar14[1];
                      *puVar14 = puVar14[3];
                      if (pOVar3 != pOVar4) {
                        puVar14[1] = pOVar3;
                        if ((pOVar3 != (Object *)0x0) &&
                           (cVar7 = RefCounted::reference(), cVar7 == '\0')) {
                          puVar14[1] = 0;
                        }
                        if (((pOVar4 != (Object *)0x0) &&
                            (cVar7 = RefCounted::unreference(), cVar7 != '\0')) &&
                           (cVar7 = predelete_handler(pOVar4), cVar7 != '\0')) {
                          (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
                          Memory::free_static(pOVar4,false);
                        }
                      }
                      lVar8 = lVar8 + 1;
                      *(undefined4 *)(puVar14 + 2) = *(undefined4 *)(puVar14 + 5);
                      puVar14 = puVar14 + 3;
                    } while (lVar12 != lVar8);
                  }
                }
                CowData<CollisionObject3D::ShapeData::ShapeBase>::resize<false>
                          ((CowData<CollisionObject3D::ShapeData::ShapeBase> *)(lVar9 + 0x40),lVar12
                          );
LAB_0010946d:
                if (*(long *)(this + 0x550) != 0) {
                  lVar8 = *(long *)(*(long *)(this + 0x550) + 0x10);
                  if (lVar8 != *(long *)(this + 0x558)) {
                    do {
                      lVar9 = lVar8;
                      lVar8 = *(long *)(lVar9 + 0x10);
                    } while (*(long *)(this + 0x558) != *(long *)(lVar9 + 0x10));
                    do {
                      lVar8 = *(long *)(lVar9 + 0x78);
                      if (lVar8 != 0) {
                        lVar11 = 0;
                        do {
                          while( true ) {
                            if (*(long *)(lVar8 + -8) <= lVar11) goto LAB_001094f5;
                            lVar12 = lVar11 * 0x18;
                            if (*(int *)(lVar8 + 0x10 + lVar11 * 0x18) <= iVar2) break;
                            lVar11 = lVar11 + 1;
                            CowData<CollisionObject3D::ShapeData::ShapeBase>::_copy_on_write
                                      ((CowData<CollisionObject3D::ShapeData::ShapeBase> *)
                                       (lVar9 + 0x78));
                            lVar8 = *(long *)(lVar9 + 0x78);
                            piVar1 = (int *)(lVar8 + 0x10 + lVar12);
                            *piVar1 = *piVar1 + -1;
                            if (lVar8 == 0) goto LAB_001094f5;
                          }
                          lVar11 = lVar11 + 1;
                        } while (lVar8 != 0);
                      }
LAB_001094f5:
                      lVar9 = *(long *)(lVar9 + 0x20);
                    } while (lVar9 != 0);
                  }
                }
                *(int *)(this + 0x54c) = *(int *)(this + 0x54c) + -1;
                goto LAB_00109507;
              }
            }
            _err_print_index_error
                      ("remove_at","./core/templates/cowdata.h",0xe4,lVar8,lVar11,"p_index","size()"
                       ,"",false,false);
            goto LAB_0010946d;
          }
        }
        lVar9 = RBMap<unsigned_int,CollisionObject3D::ShapeData,Comparator<unsigned_int>,DefaultAllocator>
                ::operator[](this_00,&local_5c);
        if (*(long *)(lVar9 + 0x40) == 0) {
          lVar9 = 0;
        }
        else {
          lVar9 = *(long *)(*(long *)(lVar9 + 0x40) + -8);
        }
        _err_print_index_error
                  ("shape_owner_remove_shape","scene/3d/physics/collision_object_3d.cpp",0x28f,lVar8
                   ,lVar9,"p_shape","shapes[p_owner].shapes.size()","",false,false);
        goto LAB_00109507;
      }
    }
LAB_0010920d:
    _err_print_error("shape_owner_remove_shape","scene/3d/physics/collision_object_3d.cpp",0x28e,
                     "Condition \"!shapes.has(p_owner)\" is true.",0,0);
  }
LAB_00109507:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CollisionObject3D::shape_owner_clear_shapes(unsigned int) */

void __thiscall CollisionObject3D::shape_owner_clear_shapes(CollisionObject3D *this,uint param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)(this + 0x550);
  if (lVar2 != 0) {
    while (lVar2 = *(long *)(lVar2 + 0x10), *(long *)(this + 0x558) != lVar2) {
      while (*(uint *)(lVar2 + 0x30) <= param_1) {
        if (param_1 <= *(uint *)(lVar2 + 0x30)) {
          while (iVar1 = shape_owner_get_shape_count(this,param_1), 0 < iVar1) {
            shape_owner_remove_shape(this,param_1,0);
          }
          Node3D::update_gizmos();
          return;
        }
        lVar2 = *(long *)(lVar2 + 8);
        if (*(long *)(this + 0x558) == lVar2) goto LAB_00109685;
      }
    }
  }
LAB_00109685:
  _err_print_error("shape_owner_clear_shapes","scene/3d/physics/collision_object_3d.cpp",0x2b0,
                   "Condition \"!shapes.has(p_owner)\" is true.",0,0);
  return;
}



/* CollisionObject3D::remove_shape_owner(unsigned int) */

void __thiscall CollisionObject3D::remove_shape_owner(CollisionObject3D *this,uint param_1)

{
  void *pvVar1;
  long lVar2;
  Element *pEVar3;
  
  lVar2 = *(long *)(this + 0x550);
  if (lVar2 != 0) {
    while (lVar2 = *(long *)(lVar2 + 0x10), *(long *)(this + 0x558) != lVar2) {
      while (*(uint *)(lVar2 + 0x30) <= param_1) {
        if (param_1 <= *(uint *)(lVar2 + 0x30)) {
          shape_owner_clear_shapes(this,param_1);
          if (*(long *)(this + 0x550) == 0) {
            return;
          }
          pEVar3 = *(Element **)(*(long *)(this + 0x550) + 0x10);
          if (*(Element **)(this + 0x558) == pEVar3) {
            return;
          }
          do {
            if (param_1 < *(uint *)(pEVar3 + 0x30)) {
              pEVar3 = *(Element **)(pEVar3 + 0x10);
            }
            else {
              if (param_1 <= *(uint *)(pEVar3 + 0x30)) {
                RBMap<unsigned_int,CollisionObject3D::ShapeData,Comparator<unsigned_int>,DefaultAllocator>
                ::_erase((RBMap<unsigned_int,CollisionObject3D::ShapeData,Comparator<unsigned_int>,DefaultAllocator>
                          *)(this + 0x550),pEVar3);
                if (*(int *)(this + 0x560) != 0) {
                  return;
                }
                pvVar1 = *(void **)(this + 0x550);
                if (pvVar1 == (void *)0x0) {
                  return;
                }
                CowData<CollisionObject3D::ShapeData::ShapeBase>::_unref
                          ((CowData<CollisionObject3D::ShapeData::ShapeBase> *)((long)pvVar1 + 0x78)
                          );
                Memory::free_static(pvVar1,false);
                *(undefined8 *)(this + 0x550) = 0;
                return;
              }
              pEVar3 = *(Element **)(pEVar3 + 8);
            }
            if (pEVar3 == *(Element **)(this + 0x558)) {
              return;
            }
          } while( true );
        }
        lVar2 = *(long *)(lVar2 + 8);
        if (*(long *)(this + 0x558) == lVar2) goto LAB_00109725;
      }
    }
  }
LAB_00109725:
  _err_print_error("remove_shape_owner","scene/3d/physics/collision_object_3d.cpp",0x218,
                   "Condition \"!shapes.has(owner)\" is true.",0,0);
  return;
}



/* CollisionObject3D::shape_owner_add_shape(unsigned int, Ref<Shape3D> const&) */

void __thiscall
CollisionObject3D::shape_owner_add_shape(CollisionObject3D *this,uint param_1,Ref *param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  code *pcVar3;
  Object *pOVar4;
  char cVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  Object *pOVar12;
  Object *pOVar13;
  uint local_3c [3];
  
  lVar7 = *(long *)(this + 0x550);
  local_3c[0] = param_1;
  if (lVar7 != 0) {
    while (lVar7 = *(long *)(lVar7 + 0x10), *(long *)(this + 0x558) != lVar7) {
      while (*(uint *)(lVar7 + 0x30) <= param_1) {
        if (param_1 <= *(uint *)(lVar7 + 0x30)) {
          if (*(long *)param_2 == 0) {
            _err_print_error("shape_owner_add_shape","scene/3d/physics/collision_object_3d.cpp",
                             0x264,"Condition \"p_shape.is_null()\" is true.",0,0);
            return;
          }
          lVar7 = RBMap<unsigned_int,CollisionObject3D::ShapeData,Comparator<unsigned_int>,DefaultAllocator>
                  ::operator[]((RBMap<unsigned_int,CollisionObject3D::ShapeData,Comparator<unsigned_int>,DefaultAllocator>
                                *)(this + 0x550),local_3c);
          pOVar13 = *(Object **)param_2;
          uVar2 = *(undefined4 *)(this + 0x54c);
          if ((pOVar13 != (Object *)0x0) && (cVar5 = RefCounted::reference(), cVar5 == '\0')) {
            pOVar13 = (Object *)0x0;
          }
          if (this[0x534] == (CollisionObject3D)0x0) {
            plVar8 = (long *)PhysicsServer3D::get_singleton();
            pcVar11 = *(code **)(*plVar8 + 800);
          }
          else {
            plVar8 = (long *)PhysicsServer3D::get_singleton();
            pcVar11 = *(code **)(*plVar8 + 0x240);
          }
          pcVar3 = *(code **)(**(long **)param_2 + 0x1c0);
          if (pcVar3 == Shape3D::get_rid) {
            lVar10 = (*(long **)param_2)[0x48];
          }
          else {
            lVar10 = (*pcVar3)();
          }
          (*pcVar11)(plVar8,*(undefined8 *)(this + 0x538),lVar10,lVar7 + 8);
          if (pOVar13 == (Object *)0x0) {
            pOVar12 = (Object *)0x0;
          }
          else {
            cVar5 = RefCounted::reference();
            pOVar12 = (Object *)0x0;
            if (cVar5 != '\0') {
              pOVar12 = pOVar13;
            }
          }
          if (*(long *)(lVar7 + 0x40) == 0) {
            lVar10 = 1;
          }
          else {
            lVar10 = *(long *)(*(long *)(lVar7 + 0x40) + -8) + 1;
          }
          iVar6 = CowData<CollisionObject3D::ShapeData::ShapeBase>::resize<false>
                            ((CowData<CollisionObject3D::ShapeData::ShapeBase> *)(lVar7 + 0x40),
                             lVar10);
          if (iVar6 == 0) {
            if (*(long *)(lVar7 + 0x40) == 0) {
              lVar9 = -1;
              lVar10 = 0;
LAB_00109bca:
              _err_print_index_error
                        ("set","./core/templates/cowdata.h",0xcf,lVar9,lVar10,"p_index","size()","",
                         false,false);
              goto LAB_00109a25;
            }
            lVar10 = *(long *)(*(long *)(lVar7 + 0x40) + -8);
            lVar9 = lVar10 + -1;
            if (lVar9 < 0) goto LAB_00109bca;
            CowData<CollisionObject3D::ShapeData::ShapeBase>::_copy_on_write
                      ((CowData<CollisionObject3D::ShapeData::ShapeBase> *)(lVar7 + 0x40));
            puVar1 = (undefined8 *)(*(long *)(lVar7 + 0x40) + lVar9 * 0x18);
            pOVar4 = (Object *)puVar1[1];
            *puVar1 = 0;
            if (pOVar4 == pOVar12) {
LAB_00109a21:
              *(undefined4 *)(puVar1 + 2) = uVar2;
              goto LAB_00109a25;
            }
            puVar1[1] = pOVar12;
            if (pOVar12 == (Object *)0x0) {
              if ((pOVar4 == (Object *)0x0) || (cVar5 = RefCounted::unreference(), cVar5 == '\0')) {
                *(undefined4 *)(puVar1 + 2) = uVar2;
                goto LAB_00109a90;
              }
LAB_001099f6:
              cVar5 = predelete_handler(pOVar4);
              if (cVar5 != '\0') {
                (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
                Memory::free_static(pOVar4,false);
              }
              goto LAB_00109a21;
            }
            cVar5 = RefCounted::reference();
            if (cVar5 == '\0') {
              puVar1[1] = 0;
            }
            if ((pOVar4 != (Object *)0x0) && (cVar5 = RefCounted::unreference(), cVar5 != '\0'))
            goto LAB_001099f6;
            *(undefined4 *)(puVar1 + 2) = uVar2;
            cVar5 = RefCounted::unreference();
          }
          else {
            _err_print_error("push_back","./core/templates/vector.h",0x142,
                             "Condition \"err\" is true. Returning: true",0,0);
LAB_00109a25:
            if (pOVar12 == (Object *)0x0) goto LAB_00109a90;
            cVar5 = RefCounted::unreference();
          }
          if ((cVar5 != '\0') && (cVar5 = predelete_handler(pOVar12), cVar5 != '\0')) {
            (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
            Memory::free_static(pOVar12,false);
          }
LAB_00109a90:
          *(int *)(this + 0x54c) = *(int *)(this + 0x54c) + 1;
          _update_shape_data((uint)this);
          Node3D::update_gizmos();
          if (((pOVar13 != (Object *)0x0) && (cVar5 = RefCounted::unreference(), cVar5 != '\0')) &&
             (cVar5 = predelete_handler(pOVar13), cVar5 != '\0')) {
            (**(code **)(*(long *)pOVar13 + 0x140))(pOVar13);
            Memory::free_static(pOVar13,false);
          }
          return;
        }
        lVar7 = *(long *)(lVar7 + 8);
        if (*(long *)(this + 0x558) == lVar7) goto LAB_0010984d;
      }
    }
  }
LAB_0010984d:
  _err_print_error("shape_owner_add_shape","scene/3d/physics/collision_object_3d.cpp",0x263,
                   "Condition \"!shapes.has(p_owner)\" is true.",0,0);
  return;
}



/* CollisionObject3D::get_configuration_warnings() const */

void CollisionObject3D::get_configuration_warnings(void)

{
  long *plVar1;
  long lVar2;
  long in_RSI;
  long in_FS_OFFSET;
  long local_98;
  long local_90;
  char *local_88;
  undefined8 local_80;
  undefined1 local_74 [68];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  Node::get_configuration_warnings();
  if (*(int *)(in_RSI + 0x560) == 0) {
    local_90 = 0;
    local_80 = 0;
    local_88 = "";
    String::parse_latin1((StrRange *)&local_90);
    local_88 = 
    "This node has no shape, so it can\'t collide or interact with other objects.\nConsider adding a CollisionShape3D or CollisionPolygon3D as a child to define its shape."
    ;
    local_98 = 0;
    local_80 = 0xa4;
    String::parse_latin1((StrRange *)&local_98);
    RTR((String *)&local_88,(String *)&local_98);
    Vector<String>::push_back();
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  }
  Node3D::get_transform();
  local_74._0_12_ = Basis::get_scale();
  if ((_LC200 <= ABS((float)local_74._0_4_ - (float)local_74._4_4_)) ||
     (_LC200 <= ABS((float)local_74._4_4_ - SUB124(local_74._0_12_,8)))) {
    local_90 = 0;
    local_80 = 0;
    local_88 = "";
    String::parse_latin1((StrRange *)&local_90);
    local_88 = 
    "With a non-uniform scale this node will probably not function as expected.\nPlease make its scale uniform (i.e. the same on all axes), and change the size in children collision shapes instead."
    ;
    local_98 = 0;
    local_80 = 0xbf;
    String::parse_latin1((StrRange *)&local_98);
    RTR((String *)&local_88,(String *)&local_98);
    Vector<String>::push_back();
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
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
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
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



/* Shape3D::get_rid() const */

undefined8 __thiscall Shape3D::get_rid(Shape3D *this)

{
  return *(undefined8 *)(this + 0x240);
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



/* CollisionObject3D::is_class_ptr(void*) const */

uint __thiscall CollisionObject3D::is_class_ptr(CollisionObject3D *this,void *param_1)

{
  return (uint)CONCAT71(0x1237,(undefined4 *)param_1 == &Node3D::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1237,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1237,(undefined4 *)param_1 == &Node::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1237,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* CollisionObject3D::_getv(StringName const&, Variant&) const */

undefined8 CollisionObject3D::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* CollisionObject3D::_setv(StringName const&, Variant const&) */

undefined8 CollisionObject3D::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* CollisionObject3D::get_rid() const */

undefined8 __thiscall CollisionObject3D::get_rid(CollisionObject3D *this)

{
  return *(undefined8 *)(this + 0x538);
}



/* CallableCustomMethodPointer<CollisionObject3D, void, unsigned
   int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<CollisionObject3D,void,unsigned_int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<CollisionObject3D,void,unsigned_int> *this)

{
  return;
}



/* CallableCustomMethodPointer<CollisionObject3D, void, Ref<Shape3D>
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<CollisionObject3D,void,Ref<Shape3D>const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<CollisionObject3D,void,Ref<Shape3D>const&> *this)

{
  return;
}



/* CallableCustomMethodPointer<CollisionObject3D, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<CollisionObject3D,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<CollisionObject3D,void> *this)

{
  return;
}



/* MethodBindTRC<unsigned int, int>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<unsigned_int,int>::_gen_argument_type(int param_1)

{
  return 2;
}



/* MethodBindTRC<unsigned int, int>::get_argument_meta(int) const */

byte __thiscall
MethodBindTRC<unsigned_int,int>::get_argument_meta
          (MethodBindTRC<unsigned_int,int> *this,int param_1)

{
  if (-1 < param_1) {
    return -(param_1 == 0) & 3;
  }
  return 7;
}



/* MethodBindT<unsigned int, int>::_gen_argument_type(int) const */

char __thiscall
MethodBindT<unsigned_int,int>::_gen_argument_type(MethodBindT<unsigned_int,int> *this,int param_1)

{
  return ((uint)param_1 < 2) * '\x02';
}



/* MethodBindT<unsigned int, int>::get_argument_meta(int) const */

char __thiscall
MethodBindT<unsigned_int,int>::get_argument_meta(MethodBindT<unsigned_int,int> *this,int param_1)

{
  char cVar1;
  
  cVar1 = '\a';
  if (param_1 != 0) {
    cVar1 = (param_1 == 1) * '\x03';
  }
  return cVar1;
}



/* MethodBindTRC<int, unsigned int, int>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<int,unsigned_int,int>::_gen_argument_type(int param_1)

{
  return 2;
}



/* MethodBindTRC<int, unsigned int, int>::get_argument_meta(int) const */

char __thiscall
MethodBindTRC<int,unsigned_int,int>::get_argument_meta
          (MethodBindTRC<int,unsigned_int,int> *this,int param_1)

{
  char cVar1;
  
  if (param_1 < 0) {
    cVar1 = '\x03';
  }
  else {
    cVar1 = '\a';
    if (param_1 != 0) {
      return (param_1 == 1) * '\x03';
    }
  }
  return cVar1;
}



/* MethodBindTRC<Ref<Shape3D>, unsigned int, int>::_gen_argument_type(int) const */

int __thiscall
MethodBindTRC<Ref<Shape3D>,unsigned_int,int>::_gen_argument_type
          (MethodBindTRC<Ref<Shape3D>,unsigned_int,int> *this,int param_1)

{
  return (-(uint)((uint)param_1 < 2) & 0xffffffea) + 0x18;
}



/* MethodBindTRC<Ref<Shape3D>, unsigned int, int>::get_argument_meta(int) const */

char __thiscall
MethodBindTRC<Ref<Shape3D>,unsigned_int,int>::get_argument_meta
          (MethodBindTRC<Ref<Shape3D>,unsigned_int,int> *this,int param_1)

{
  char cVar1;
  
  cVar1 = '\0';
  if ((-1 < param_1) && (cVar1 = '\a', param_1 != 0)) {
    cVar1 = (param_1 == 1) * '\x03';
  }
  return cVar1;
}



/* MethodBindTRC<int, unsigned int>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<int,unsigned_int>::_gen_argument_type(int param_1)

{
  return 2;
}



/* MethodBindTRC<int, unsigned int>::get_argument_meta(int) const */

byte __thiscall
MethodBindTRC<int,unsigned_int>::get_argument_meta
          (MethodBindTRC<int,unsigned_int> *this,int param_1)

{
  if (-1 < param_1) {
    return -(param_1 == 0) & 7;
  }
  return 3;
}



/* MethodBindT<unsigned int, Ref<Shape3D> const&>::_gen_argument_type(int) const */

int __thiscall
MethodBindT<unsigned_int,Ref<Shape3D>const&>::_gen_argument_type
          (MethodBindT<unsigned_int,Ref<Shape3D>const&> *this,int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if ((uint)param_1 < 2) {
    iVar1 = (-(uint)(param_1 == 0) & 0xffffffea) + 0x18;
  }
  return iVar1;
}



/* MethodBindT<unsigned int, Ref<Shape3D> const&>::get_argument_meta(int) const */

byte __thiscall
MethodBindT<unsigned_int,Ref<Shape3D>const&>::get_argument_meta
          (MethodBindT<unsigned_int,Ref<Shape3D>const&> *this,int param_1)

{
  return -(param_1 == 0) & 7;
}



/* MethodBindTRC<bool, unsigned int>::_gen_argument_type(int) const */

char __thiscall
MethodBindTRC<bool,unsigned_int>::_gen_argument_type
          (MethodBindTRC<bool,unsigned_int> *this,int param_1)

{
  return (param_1 == 0) + '\x01';
}



/* MethodBindTRC<bool, unsigned int>::get_argument_meta(int) const */

byte __thiscall
MethodBindTRC<bool,unsigned_int>::get_argument_meta
          (MethodBindTRC<bool,unsigned_int> *this,int param_1)

{
  return -(param_1 == 0) & 7;
}



/* MethodBindT<unsigned int, bool>::_gen_argument_type(int) const */

char __thiscall
MethodBindT<unsigned_int,bool>::_gen_argument_type(MethodBindT<unsigned_int,bool> *this,int param_1)

{
  char cVar1;
  
  cVar1 = (param_1 == 0) + '\x01';
  if (1 < (uint)param_1) {
    cVar1 = '\0';
  }
  return cVar1;
}



/* MethodBindT<unsigned int, bool>::get_argument_meta(int) const */

byte __thiscall
MethodBindT<unsigned_int,bool>::get_argument_meta(MethodBindT<unsigned_int,bool> *this,int param_1)

{
  return -(param_1 == 0) & 7;
}



/* MethodBindTRC<Object*, unsigned int>::_gen_argument_type(int) const */

int __thiscall
MethodBindTRC<Object*,unsigned_int>::_gen_argument_type
          (MethodBindTRC<Object*,unsigned_int> *this,int param_1)

{
  return (-(uint)(param_1 == 0) & 0xffffffea) + 0x18;
}



/* MethodBindTRC<Object*, unsigned int>::get_argument_meta(int) const */

byte __thiscall
MethodBindTRC<Object*,unsigned_int>::get_argument_meta
          (MethodBindTRC<Object*,unsigned_int> *this,int param_1)

{
  return -(param_1 == 0) & 7;
}



/* MethodBindTRC<Transform3D, unsigned int>::_gen_argument_type(int) const */

int __thiscall
MethodBindTRC<Transform3D,unsigned_int>::_gen_argument_type
          (MethodBindTRC<Transform3D,unsigned_int> *this,int param_1)

{
  return (-(uint)(param_1 == 0) & 0xfffffff0) + 0x12;
}



/* MethodBindTRC<Transform3D, unsigned int>::get_argument_meta(int) const */

byte __thiscall
MethodBindTRC<Transform3D,unsigned_int>::get_argument_meta
          (MethodBindTRC<Transform3D,unsigned_int> *this,int param_1)

{
  return -(param_1 == 0) & 7;
}



/* MethodBindT<unsigned int, Transform3D const&>::_gen_argument_type(int) const */

int __thiscall
MethodBindT<unsigned_int,Transform3D_const&>::_gen_argument_type
          (MethodBindT<unsigned_int,Transform3D_const&> *this,int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if ((uint)param_1 < 2) {
    iVar1 = (-(uint)(param_1 == 0) & 0xfffffff0) + 0x12;
  }
  return iVar1;
}



/* MethodBindT<unsigned int, Transform3D const&>::get_argument_meta(int) const */

byte __thiscall
MethodBindT<unsigned_int,Transform3D_const&>::get_argument_meta
          (MethodBindT<unsigned_int,Transform3D_const&> *this,int param_1)

{
  return -(param_1 == 0) & 7;
}



/* MethodBindTR<Vector<int>>::_gen_argument_type(int) const */

undefined8 MethodBindTR<Vector<int>>::_gen_argument_type(int param_1)

{
  return 0x1e;
}



/* MethodBindTR<Vector<int>>::get_argument_meta(int) const */

undefined8 MethodBindTR<Vector<int>>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTR<unsigned int, Object*>::_gen_argument_type(int) const */

char __thiscall
MethodBindTR<unsigned_int,Object*>::_gen_argument_type
          (MethodBindTR<unsigned_int,Object*> *this,int param_1)

{
  return (-(param_1 == 0) & 0x16U) + 2;
}



/* MethodBindTR<unsigned int, Object*>::get_argument_meta(int) const */

uint __thiscall
MethodBindTR<unsigned_int,Object*>::get_argument_meta
          (MethodBindTR<unsigned_int,Object*> *this,int param_1)

{
  return param_1 >> 0x1f & 7;
}



/* MethodBindTRC<RID>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<RID>::_gen_argument_type(int param_1)

{
  return 0x17;
}



/* MethodBindTRC<RID>::get_argument_meta(int) const */

undefined8 MethodBindTRC<RID>::get_argument_meta(int param_1)

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



/* MethodBindTRC<CollisionObject3D::DisableMode>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<CollisionObject3D::DisableMode>::_gen_argument_type(int param_1)

{
  return 2;
}



/* MethodBindTRC<CollisionObject3D::DisableMode>::get_argument_meta(int) const */

undefined8 MethodBindTRC<CollisionObject3D::DisableMode>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<CollisionObject3D::DisableMode>::_gen_argument_type(int) const */

char __thiscall
MethodBindT<CollisionObject3D::DisableMode>::_gen_argument_type
          (MethodBindT<CollisionObject3D::DisableMode> *this,int param_1)

{
  return (param_1 == 0) * '\x02';
}



/* MethodBindT<CollisionObject3D::DisableMode>::get_argument_meta(int) const */

undefined8 MethodBindT<CollisionObject3D::DisableMode>::get_argument_meta(int param_1)

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



/* MethodBindTRC<bool, int>::_gen_argument_type(int) const */

char __thiscall
MethodBindTRC<bool,int>::_gen_argument_type(MethodBindTRC<bool,int> *this,int param_1)

{
  return (param_1 == 0) + '\x01';
}



/* MethodBindTRC<bool, int>::get_argument_meta(int) const */

byte __thiscall
MethodBindTRC<bool,int>::get_argument_meta(MethodBindTRC<bool,int> *this,int param_1)

{
  return -(param_1 == 0) & 3;
}



/* MethodBindT<int, bool>::_gen_argument_type(int) const */

char __thiscall MethodBindT<int,bool>::_gen_argument_type(MethodBindT<int,bool> *this,int param_1)

{
  char cVar1;
  
  cVar1 = (param_1 == 0) + '\x01';
  if (1 < (uint)param_1) {
    cVar1 = '\0';
  }
  return cVar1;
}



/* MethodBindT<int, bool>::get_argument_meta(int) const */

byte __thiscall MethodBindT<int,bool>::get_argument_meta(MethodBindT<int,bool> *this,int param_1)

{
  return -(param_1 == 0) & 3;
}



/* MethodBindTRC<unsigned int>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<unsigned_int>::_gen_argument_type(int param_1)

{
  return 2;
}



/* MethodBindTRC<unsigned int>::get_argument_meta(int) const */

uint __thiscall
MethodBindTRC<unsigned_int>::get_argument_meta(MethodBindTRC<unsigned_int> *this,int param_1)

{
  return param_1 >> 0x1f & 7;
}



/* MethodBindT<unsigned int>::_gen_argument_type(int) const */

char __thiscall
MethodBindT<unsigned_int>::_gen_argument_type(MethodBindT<unsigned_int> *this,int param_1)

{
  return (param_1 == 0) * '\x02';
}



/* MethodBindT<unsigned int>::get_argument_meta(int) const */

byte __thiscall
MethodBindT<unsigned_int>::get_argument_meta(MethodBindT<unsigned_int> *this,int param_1)

{
  return -(param_1 == 0) & 7;
}



/* CallableCustomMethodPointer<CollisionObject3D, void, unsigned int>::get_argument_count(bool&)
   const */

undefined8 __thiscall
CallableCustomMethodPointer<CollisionObject3D,void,unsigned_int>::get_argument_count
          (CallableCustomMethodPointer<CollisionObject3D,void,unsigned_int> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<CollisionObject3D, void, Ref<Shape3D>
   const&>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<CollisionObject3D,void,Ref<Shape3D>const&>::get_argument_count
          (CallableCustomMethodPointer<CollisionObject3D,void,Ref<Shape3D>const&> *this,
          bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<CollisionObject3D, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<CollisionObject3D,void>::get_argument_count
          (CallableCustomMethodPointer<CollisionObject3D,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<CollisionObject3D, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<CollisionObject3D,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<CollisionObject3D,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<CollisionObject3D, void, Ref<Shape3D>
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<CollisionObject3D,void,Ref<Shape3D>const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<CollisionObject3D,void,Ref<Shape3D>const&> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<CollisionObject3D, void, unsigned
   int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<CollisionObject3D,void,unsigned_int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<CollisionObject3D,void,unsigned_int> *this)

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



/* MethodBindTRC<unsigned int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<unsigned_int>::~MethodBindTRC(MethodBindTRC<unsigned_int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00122eb8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<unsigned int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<unsigned_int>::~MethodBindTRC(MethodBindTRC<unsigned_int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00122eb8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<int, bool>::~MethodBindT() */

void __thiscall MethodBindT<int,bool>::~MethodBindT(MethodBindT<int,bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00122f18;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<int, bool>::~MethodBindT() */

void __thiscall MethodBindT<int,bool>::~MethodBindT(MethodBindT<int,bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00122f18;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<bool, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool,int>::~MethodBindTRC(MethodBindTRC<bool,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00122f78;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<bool, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool,int>::~MethodBindTRC(MethodBindTRC<bool,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00122f78;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<float>::~MethodBindT() */

void __thiscall MethodBindT<float>::~MethodBindT(MethodBindT<float> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00122fd8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<float>::~MethodBindT() */

void __thiscall MethodBindT<float>::~MethodBindT(MethodBindT<float> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00122fd8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<float>::~MethodBindTRC() */

void __thiscall MethodBindTRC<float>::~MethodBindTRC(MethodBindTRC<float> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00123038;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<float>::~MethodBindTRC() */

void __thiscall MethodBindTRC<float>::~MethodBindTRC(MethodBindTRC<float> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00123038;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<CollisionObject3D::DisableMode>::~MethodBindT() */

void __thiscall
MethodBindT<CollisionObject3D::DisableMode>::~MethodBindT
          (MethodBindT<CollisionObject3D::DisableMode> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00123098;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<CollisionObject3D::DisableMode>::~MethodBindT() */

void __thiscall
MethodBindT<CollisionObject3D::DisableMode>::~MethodBindT
          (MethodBindT<CollisionObject3D::DisableMode> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00123098;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<CollisionObject3D::DisableMode>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<CollisionObject3D::DisableMode>::~MethodBindTRC
          (MethodBindTRC<CollisionObject3D::DisableMode> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001230f8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<CollisionObject3D::DisableMode>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<CollisionObject3D::DisableMode>::~MethodBindTRC
          (MethodBindTRC<CollisionObject3D::DisableMode> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001230f8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<bool>::~MethodBindT() */

void __thiscall MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00123158;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<bool>::~MethodBindT() */

void __thiscall MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00123158;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<bool>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001231b8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<bool>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001231b8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<RID>::~MethodBindTRC() */

void __thiscall MethodBindTRC<RID>::~MethodBindTRC(MethodBindTRC<RID> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00123218;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<RID>::~MethodBindTRC() */

void __thiscall MethodBindTRC<RID>::~MethodBindTRC(MethodBindTRC<RID> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00123218;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<unsigned int, Object*>::~MethodBindTR() */

void __thiscall
MethodBindTR<unsigned_int,Object*>::~MethodBindTR(MethodBindTR<unsigned_int,Object*> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00123278;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<unsigned int, Object*>::~MethodBindTR() */

void __thiscall
MethodBindTR<unsigned_int,Object*>::~MethodBindTR(MethodBindTR<unsigned_int,Object*> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00123278;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<Vector<int>>::~MethodBindTR() */

void __thiscall MethodBindTR<Vector<int>>::~MethodBindTR(MethodBindTR<Vector<int>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001232d8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<Vector<int>>::~MethodBindTR() */

void __thiscall MethodBindTR<Vector<int>>::~MethodBindTR(MethodBindTR<Vector<int>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001232d8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<unsigned int, Transform3D const&>::~MethodBindT() */

void __thiscall
MethodBindT<unsigned_int,Transform3D_const&>::~MethodBindT
          (MethodBindT<unsigned_int,Transform3D_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00123338;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<unsigned int, Transform3D const&>::~MethodBindT() */

void __thiscall
MethodBindT<unsigned_int,Transform3D_const&>::~MethodBindT
          (MethodBindT<unsigned_int,Transform3D_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00123338;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Transform3D, unsigned int>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Transform3D,unsigned_int>::~MethodBindTRC
          (MethodBindTRC<Transform3D,unsigned_int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00123398;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Transform3D, unsigned int>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Transform3D,unsigned_int>::~MethodBindTRC
          (MethodBindTRC<Transform3D,unsigned_int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00123398;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Object*, unsigned int>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Object*,unsigned_int>::~MethodBindTRC(MethodBindTRC<Object*,unsigned_int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001233f8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Object*, unsigned int>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Object*,unsigned_int>::~MethodBindTRC(MethodBindTRC<Object*,unsigned_int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001233f8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<unsigned int, bool>::~MethodBindT() */

void __thiscall MethodBindT<unsigned_int,bool>::~MethodBindT(MethodBindT<unsigned_int,bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00123458;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<unsigned int, bool>::~MethodBindT() */

void __thiscall MethodBindT<unsigned_int,bool>::~MethodBindT(MethodBindT<unsigned_int,bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00123458;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<bool, unsigned int>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<bool,unsigned_int>::~MethodBindTRC(MethodBindTRC<bool,unsigned_int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001234b8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<bool, unsigned int>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<bool,unsigned_int>::~MethodBindTRC(MethodBindTRC<bool,unsigned_int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001234b8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<unsigned int, Ref<Shape3D> const&>::~MethodBindT() */

void __thiscall
MethodBindT<unsigned_int,Ref<Shape3D>const&>::~MethodBindT
          (MethodBindT<unsigned_int,Ref<Shape3D>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00123518;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<unsigned int, Ref<Shape3D> const&>::~MethodBindT() */

void __thiscall
MethodBindT<unsigned_int,Ref<Shape3D>const&>::~MethodBindT
          (MethodBindT<unsigned_int,Ref<Shape3D>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00123518;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<int, unsigned int>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<int,unsigned_int>::~MethodBindTRC(MethodBindTRC<int,unsigned_int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00123578;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<int, unsigned int>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<int,unsigned_int>::~MethodBindTRC(MethodBindTRC<int,unsigned_int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00123578;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Ref<Shape3D>, unsigned int, int>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Ref<Shape3D>,unsigned_int,int>::~MethodBindTRC
          (MethodBindTRC<Ref<Shape3D>,unsigned_int,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001235d8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Ref<Shape3D>, unsigned int, int>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Ref<Shape3D>,unsigned_int,int>::~MethodBindTRC
          (MethodBindTRC<Ref<Shape3D>,unsigned_int,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001235d8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<int, unsigned int, int>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<int,unsigned_int,int>::~MethodBindTRC(MethodBindTRC<int,unsigned_int,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00123638;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<int, unsigned int, int>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<int,unsigned_int,int>::~MethodBindTRC(MethodBindTRC<int,unsigned_int,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00123638;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<unsigned int, int>::~MethodBindT() */

void __thiscall MethodBindT<unsigned_int,int>::~MethodBindT(MethodBindT<unsigned_int,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00123698;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<unsigned int, int>::~MethodBindT() */

void __thiscall MethodBindT<unsigned_int,int>::~MethodBindT(MethodBindT<unsigned_int,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00123698;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<unsigned int>::~MethodBindT() */

void __thiscall MethodBindT<unsigned_int>::~MethodBindT(MethodBindT<unsigned_int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00122e58;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<unsigned int>::~MethodBindT() */

void __thiscall MethodBindT<unsigned_int>::~MethodBindT(MethodBindT<unsigned_int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00122e58;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<unsigned int, int>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<unsigned_int,int>::~MethodBindTRC(MethodBindTRC<unsigned_int,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001236f8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<unsigned int, int>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<unsigned_int,int>::~MethodBindTRC(MethodBindTRC<unsigned_int,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001236f8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* CollisionObject3D::_property_get_revertv(StringName const&, Variant&) const */

undefined8 CollisionObject3D::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_property_get_revert) {
    uVar1 = Node3D::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* CollisionObject3D::_property_can_revertv(StringName const&) const */

undefined8 CollisionObject3D::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_0012a008 != Object::_property_can_revert) {
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



/* CowData<String>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<String>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CollisionObject3D::_bind_methods() [clone .cold] */

void CollisionObject3D::_bind_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<CollisionObject3D::ShapeData::ShapeBase>::_copy_on_write() [clone .isra.0] [clone .cold]
    */

void CowData<CollisionObject3D::ShapeData::ShapeBase>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CollisionObject3D::_shape_changed(Ref<Shape3D> const&) [clone .cold] */

void CollisionObject3D::_shape_changed(Ref *param_1)

{
  code *pcVar1;
  
  RenderingServer::get_singleton();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CollisionObject3D::_update_debug_shapes() [clone .cold] */

void CollisionObject3D::_update_debug_shapes(void)

{
  code *pcVar1;
  
  RenderingServer::get_singleton();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CollisionObject3D::create_shape_owner(Object*) [clone .cold] */

void CollisionObject3D::create_shape_owner(Object *param_1)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CallableCustomMethodPointer<CollisionObject3D, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<CollisionObject3D,void>::get_object
          (CallableCustomMethodPointer<CollisionObject3D,void> *this)

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
      goto LAB_0010bbed;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010bbed;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010bbed:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<CollisionObject3D, void, unsigned int>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<CollisionObject3D,void,unsigned_int>::get_object
          (CallableCustomMethodPointer<CollisionObject3D,void,unsigned_int> *this)

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
      goto LAB_0010bced;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010bced;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010bced:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<CollisionObject3D, void, Ref<Shape3D> const&>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<CollisionObject3D,void,Ref<Shape3D>const&>::get_object
          (CallableCustomMethodPointer<CollisionObject3D,void,Ref<Shape3D>const&> *this)

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
      goto LAB_0010bded;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010bded;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010bded:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CollisionObject3D::_validate_propertyv(PropertyInfo&) const */

void CollisionObject3D::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  if ((code *)PTR__validate_property_0012a010 == Node::_validate_property) {
    return;
  }
  Node3D::_validate_property(param_1);
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



/* CollisionObject3D::_get_class_namev() const */

undefined8 * CollisionObject3D::_get_class_namev(void)

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
LAB_0010bf63:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010bf63;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"CollisionObject3D");
      goto LAB_0010bfce;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"CollisionObject3D");
LAB_0010bfce:
  return &_get_class_namev()::_class_name_static;
}



/* CollisionObject3D::get_class() const */

void CollisionObject3D::get_class(void)

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



/* MethodBindTR<Vector<int>>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTR<Vector<int>>::_gen_argument_type_info(int param_1)

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
  local_48 = &_LC34;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 0x1e;
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
      goto joined_r0x0010c21c;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010c21c:
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



/* MethodBindTRC<RID>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<RID>::_gen_argument_type_info(int param_1)

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
  local_48 = &_LC34;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 0x17;
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
      goto joined_r0x0010c39c;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010c39c:
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
  local_48 = &_LC34;
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
      goto joined_r0x0010c51c;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010c51c:
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
  local_48 = &_LC34;
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
      goto joined_r0x0010c69c;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010c69c:
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



/* MethodBindTRC<unsigned int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<unsigned_int>::_gen_argument_type_info(int param_1)

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
  local_48 = &_LC34;
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
      goto joined_r0x0010c81c;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010c81c:
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



/* Object::is_class(String const&) const */

ulong __thiscall Object::is_class(Object *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *__s;
  long lVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  long in_FS_OFFSET;
  bool bVar8;
  long local_50;
  char *local_48;
  size_t local_40;
  long local_30;
  
  lVar2 = *(long *)(this + 8);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  do {
    if (lVar2 == 0) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = String::operator==((String *)param_1,"Object");
        return uVar7;
      }
LAB_0010cbcf:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    lVar3 = *(long *)(lVar2 + 0x20);
    if (lVar3 == 0) {
      local_50 = 0;
    }
    else {
      __s = *(char **)(lVar3 + 8);
      local_50 = 0;
      if (__s == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar3 + 0x10) + -0x10);
        if (*(long *)(lVar3 + 0x10) != 0) {
          do {
            lVar4 = *plVar1;
            if (lVar4 == 0) goto LAB_0010cae3;
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
            local_50 = *(long *)(lVar3 + 0x10);
          }
        }
      }
      else {
        local_40 = strlen(__s);
        local_48 = __s;
        String::parse_latin1((StrRange *)&local_50);
      }
    }
LAB_0010cae3:
    uVar5 = String::operator==((String *)param_1,(StrRange *)&local_50);
    lVar3 = local_50;
    if (local_50 != 0) {
      LOCK();
      plVar1 = (long *)(local_50 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_50 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    if ((char)uVar5 != '\0') {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return (ulong)uVar5;
      }
      goto LAB_0010cbcf;
    }
    lVar2 = *(long *)(lVar2 + 8);
  } while( true );
}



/* GetTypeInfo<int, void>::get_class_info() */

GetTypeInfo<int,void> * __thiscall
GetTypeInfo<int,void>::get_class_info(GetTypeInfo<int,void> *this)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC34;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *(undefined4 *)this = 2;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    *(undefined4 *)(this + 0x28) = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x20),(CowData *)&local_58);
    *(undefined4 *)(this + 0x28) = 6;
    if (*(int *)(this + 0x18) == 0x11) {
      StringName::StringName((StringName *)&local_48,(CowData<char32_t> *)(this + 0x20),false);
      if (*(undefined **)(this + 0x10) == local_48) {
        lVar2 = local_58;
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
          lVar2 = local_58;
        }
      }
      else {
        StringName::unref();
        *(undefined **)(this + 0x10) = local_48;
        lVar2 = local_58;
      }
      goto joined_r0x0010cd1c;
    }
  }
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010cd1c:
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
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GetTypeInfo<Vector3, void>::get_class_info() */

GetTypeInfo<Vector3,void> * __thiscall
GetTypeInfo<Vector3,void>::get_class_info(GetTypeInfo<Vector3,void> *this)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC34;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *(undefined4 *)this = 9;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    *(undefined4 *)(this + 0x28) = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x20),(CowData *)&local_58);
    *(undefined4 *)(this + 0x28) = 6;
    if (*(int *)(this + 0x18) == 0x11) {
      StringName::StringName((StringName *)&local_48,(CowData<char32_t> *)(this + 0x20),false);
      if (*(undefined **)(this + 0x10) == local_48) {
        lVar2 = local_58;
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
          lVar2 = local_58;
        }
      }
      else {
        StringName::unref();
        *(undefined **)(this + 0x10) = local_48;
        lVar2 = local_58;
      }
      goto joined_r0x0010ce9c;
    }
  }
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010ce9c:
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
    return this;
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



/* GetTypeInfo<Ref<InputEvent>, void>::get_class_info() */

GetTypeInfo<Ref<InputEvent>,void> * __thiscall
GetTypeInfo<Ref<InputEvent>,void>::get_class_info(GetTypeInfo<Ref<InputEvent>,void> *this)

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
  local_50 = 0;
  local_58 = 0;
  local_48 = "InputEvent";
  local_40 = 10;
  String::parse_latin1((StrRange *)&local_58);
  *(undefined4 *)this = 0x18;
  *(undefined4 *)(this + 0x18) = 0x11;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    *(undefined4 *)(this + 0x28) = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x20),(CowData *)&local_58);
    *(undefined4 *)(this + 0x28) = 6;
    if (*(int *)(this + 0x18) != 0x11) {
      StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_50);
      goto LAB_0010d420;
    }
  }
  StringName::StringName((StringName *)&local_48,(CowData<char32_t> *)(this + 0x20),false);
  if (*(char **)(this + 0x10) == local_48) {
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  else {
    StringName::unref();
    *(char **)(this + 0x10) = local_48;
  }
LAB_0010d420:
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
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashSet<unsigned int, HashMapHasherDefault, HashMapComparatorDefault<unsigned int>
   >::insert(unsigned int const&) */

undefined1  [16]
HashSet<unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>>::insert
          (uint *param_1)

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
    if (lVar34 != 0) goto LAB_0010d5fa;
  }
  else {
    uVar31 = *in_RDX;
    uVar42 = *(uint *)((long)in_RSI + 0x24);
LAB_0010d5fa:
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
            if (*(uint *)(lVar34 + (long)plStack_98 * 4) == uVar31) goto LAB_0010d6ef;
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
  if ((float)uVar30 * __LC61 < (float)(uVar42 + 1)) {
    if ((int)in_RSI[4] == 0x1c) {
      plStack_98 = (long *)0x0;
      _err_print_error("_insert","./core/templates/hash_set.h",0xbf,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: -1"
                       ,"Hash table maximum capacity reached, aborting insertion.",0);
      uVar42 = *(uint *)((long)in_RSI + 0x24);
      lVar34 = *in_RSI;
      uVar32 = 0xffffffff;
      goto LAB_0010d6ef;
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
LAB_0010d6ef:
  param_1[3] = uVar32;
  *(long *)param_1 = lVar34;
  param_1[2] = uVar42;
  auVar48._8_8_ = plStack_98;
  auVar48._0_8_ = param_1;
  return auVar48;
}



/* Callable create_custom_callable_function_pointer<CollisionObject3D, Ref<Shape3D>
   const&>(CollisionObject3D*, char const*, void (CollisionObject3D::*)(Ref<Shape3D> const&)) */

CollisionObject3D *
create_custom_callable_function_pointer<CollisionObject3D,Ref<Shape3D>const&>
          (CollisionObject3D *param_1,char *param_2,_func_void_Ref_ptr *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC34;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_00122d38;
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(char **)(this + 0x28) = param_2;
  *(undefined8 *)(this + 0x30) = uVar1;
  *(undefined8 *)(this + 0x38) = in_RCX;
  *(undefined8 *)(this + 0x40) = in_R8;
  *(undefined8 *)(this + 0x10) = 0;
  CallableCustomMethodPointerBase::_setup((uint *)this,(int)this + 0x28);
  *(_func_void_Ref_ptr **)(this + 0x20) = param_3 + 1;
  Callable::Callable((Callable *)param_1,this);
  return param_1;
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



/* CallableCustomMethodPointer<CollisionObject3D, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<CollisionObject3D,void>::call
          (CallableCustomMethodPointer<CollisionObject3D,void> *this,Variant **param_1,int param_2,
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
      goto LAB_0010deff;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_0010deff;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010ded8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_0010dfc1;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0010deff:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC77,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0010dfc1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<CollisionObject3D, void, unsigned int>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<CollisionObject3D,void,unsigned_int>::call
          (CallableCustomMethodPointer<CollisionObject3D,void,unsigned_int> *this,Variant **param_1,
          int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  char cVar5;
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
      goto LAB_0010e188;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar7[1] == 0) goto LAB_0010e188;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if ((uint)param_2 < 2) {
      if (param_2 != 0) {
        *(undefined4 *)param_4 = 0;
        if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar5 = Variant::can_convert_strict(*(undefined4 *)*param_1,2);
        uVar4 = _LC78;
        if (cVar5 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        uVar6 = Variant::operator_cast_to_unsigned_int(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010e137. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar6);
          return;
        }
        goto LAB_0010e24a;
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
LAB_0010e188:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC77,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0010e24a:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<CollisionObject3D, void, Ref<Shape3D> const&>::call(Variant const**,
   int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<CollisionObject3D,void,Ref<Shape3D>const&>::call
          (CallableCustomMethodPointer<CollisionObject3D,void,Ref<Shape3D>const&> *this,
          Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  Object *pOVar5;
  char cVar6;
  Object *pOVar7;
  uint uVar8;
  ulong *puVar9;
  code *pcVar10;
  long in_FS_OFFSET;
  bool bVar11;
  CowData<char32_t> local_60 [8];
  CowData<char32_t> local_58 [8];
  undefined8 local_50;
  Object *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar8 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar8 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar3 = (ulong)local_48 >> 8;
      local_48 = (Object *)(uVar3 << 8);
      LOCK();
      bVar11 = (char)ObjectDB::spin_lock == '\0';
      if (bVar11) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar11) break;
      local_48 = (Object *)(uVar3 << 8);
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar9 = (ulong *)((ulong)uVar8 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) == (*puVar9 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar9[1] != 0) {
        lVar1 = *(long *)(this + 0x28);
        pcVar10 = *(code **)(this + 0x38);
        lVar2 = *(long *)(this + 0x40);
        if (1 < (uint)param_2) {
          *(undefined4 *)param_4 = 3;
          *(undefined4 *)(param_4 + 8) = 1;
          goto LAB_0010e31e;
        }
        if (param_2 == 0) {
          *(undefined4 *)param_4 = 4;
          *(undefined4 *)(param_4 + 8) = 1;
          goto LAB_0010e31e;
        }
        *(undefined4 *)param_4 = 0;
        if (((ulong)pcVar10 & 1) != 0) {
          pcVar10 = *(code **)(pcVar10 + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar6 = Variant::can_convert_strict(*(undefined4 *)*param_1);
        uVar4 = _LC79;
        if (cVar6 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        local_48 = (Object *)0x0;
        pOVar7 = (Object *)Variant::get_validated_object();
        pOVar5 = local_48;
        if (pOVar7 != local_48) {
          if (pOVar7 == (Object *)0x0) {
            if (local_48 != (Object *)0x0) {
              local_48 = (Object *)0x0;
LAB_0010e3ed:
              cVar6 = RefCounted::unreference();
              if ((cVar6 != '\0') && (cVar6 = predelete_handler(pOVar5), cVar6 != '\0')) {
                (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
                Memory::free_static(pOVar5,false);
              }
            }
          }
          else {
            pOVar7 = (Object *)__dynamic_cast(pOVar7,&Object::typeinfo,&Shape3D::typeinfo,0);
            if (pOVar5 != pOVar7) {
              local_48 = pOVar7;
              if ((pOVar7 != (Object *)0x0) && (cVar6 = RefCounted::reference(), cVar6 == '\0')) {
                local_48 = (Object *)0x0;
              }
              if (pOVar5 != (Object *)0x0) goto LAB_0010e3ed;
            }
          }
        }
        (*pcVar10)((long *)(lVar1 + lVar2));
        if (((local_48 != (Object *)0x0) &&
            (cVar6 = RefCounted::unreference(), pOVar5 = local_48, cVar6 != '\0')) &&
           (cVar6 = predelete_handler(local_48), cVar6 != '\0')) {
          (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
          Memory::free_static(pOVar5,false);
        }
        goto LAB_0010e31e;
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
  local_50 = 0;
  local_48 = (Object *)0x10dd0d;
  local_40 = 0x15;
  String::parse_latin1((StrRange *)&local_50);
  uitos((ulong)local_60);
  operator+((char *)local_58,(String *)"Invalid Object id \'");
  String::operator+((String *)&local_48,(String *)local_58);
  _err_print_error(&_LC77,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (String *)&local_48,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  CowData<char32_t>::_unref(local_58);
  CowData<char32_t>::_unref(local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
LAB_0010e31e:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CollisionObject3D::is_class(String const&) const */

undefined8 __thiscall CollisionObject3D::is_class(CollisionObject3D *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
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
    lVar5 = *(long *)(lVar2 + 0x20);
    if (lVar5 == 0) {
      local_60 = 0;
    }
    else {
      pcVar4 = *(char **)(lVar5 + 8);
      local_60 = 0;
      if (pcVar4 == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar5 + 0x10) + -0x10);
        if (*(long *)(lVar5 + 0x10) != 0) {
          do {
            lVar3 = *plVar1;
            if (lVar3 == 0) goto LAB_0010e63f;
            LOCK();
            lVar8 = *plVar1;
            bVar9 = lVar3 == lVar8;
            if (bVar9) {
              *plVar1 = lVar3 + 1;
              lVar8 = lVar3;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar8 != -1) {
            local_60 = *(long *)(lVar5 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(pcVar4);
        local_58 = pcVar4;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_0010e63f:
    cVar6 = String::operator==((String *)param_1,(StrRange *)&local_60);
    lVar5 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar5 + -0x10),false);
      }
    }
    if (cVar6 != '\0') goto LAB_0010e6f3;
  }
  cVar6 = String::operator==((String *)param_1,"CollisionObject3D");
  if (cVar6 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar5 = *(long *)(lVar2 + 0x20);
      if (lVar5 == 0) {
        local_60 = 0;
      }
      else {
        pcVar4 = *(char **)(lVar5 + 8);
        local_60 = 0;
        if (pcVar4 == (char *)0x0) {
          plVar1 = (long *)(*(long *)(lVar5 + 0x10) + -0x10);
          if (*(long *)(lVar5 + 0x10) != 0) {
            do {
              lVar3 = *plVar1;
              if (lVar3 == 0) goto LAB_0010e7db;
              LOCK();
              lVar8 = *plVar1;
              bVar9 = lVar3 == lVar8;
              if (bVar9) {
                *plVar1 = lVar3 + 1;
                lVar8 = lVar3;
              }
              UNLOCK();
            } while (!bVar9);
            if (lVar8 != -1) {
              local_60 = *(long *)(lVar5 + 0x10);
            }
          }
        }
        else {
          local_50 = strlen(pcVar4);
          local_58 = pcVar4;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
LAB_0010e7db:
      cVar6 = String::operator==((String *)param_1,(StrRange *)&local_60);
      lVar5 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar1 = (long *)(local_60 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar5 + -0x10),false);
        }
      }
      if (cVar6 != '\0') goto LAB_0010e6f3;
    }
    cVar6 = String::operator==((String *)param_1,"Node3D");
    if (cVar6 == '\0') {
      for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
        lVar5 = *(long *)(lVar2 + 0x20);
        if (lVar5 == 0) {
          local_60 = 0;
        }
        else {
          pcVar4 = *(char **)(lVar5 + 8);
          local_60 = 0;
          if (pcVar4 == (char *)0x0) {
            if (*(long *)(lVar5 + 0x10) != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar5 + 0x10));
            }
          }
          else {
            local_50 = strlen(pcVar4);
            local_58 = pcVar4;
            String::parse_latin1((StrRange *)&local_60);
          }
        }
        cVar6 = String::operator==((String *)param_1,(StrRange *)&local_60);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        if (cVar6 != '\0') goto LAB_0010e6f3;
      }
      cVar6 = String::operator==((String *)param_1,"Node");
      if (cVar6 == '\0') {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar7 = Object::is_class((Object *)this,param_1);
          return uVar7;
        }
        goto LAB_0010e915;
      }
    }
  }
LAB_0010e6f3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010e915:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
  if (in_EDX != 0) goto LAB_0010e96b;
  local_78 = 0;
  local_80 = 0;
  local_68 = &_LC34;
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
LAB_0010ea60:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_0010ea60;
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
LAB_0010e96b:
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
  if (in_EDX != 0) goto LAB_0010ebab;
  local_78 = 0;
  local_80 = 0;
  local_68 = &_LC34;
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
LAB_0010eca0:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_0010eca0;
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
LAB_0010ebab:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar5;
}



/* MethodBindT<unsigned int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<unsigned_int>::_gen_argument_type_info(int param_1)

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
  if (in_EDX != 0) goto LAB_0010edeb;
  local_78 = 0;
  local_80 = 0;
  local_68 = &_LC34;
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
LAB_0010eee0:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_0010eee0;
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
LAB_0010edeb:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar5;
}



/* MethodBindT<unsigned int, bool>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<unsigned_int,bool>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 uVar4;
  long lVar5;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar6;
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
  
  puVar6 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar6 = 0;
  puVar6[6] = 0;
  *(undefined8 *)(puVar6 + 8) = 0;
  puVar6[10] = 6;
  *(undefined1 (*) [16])(puVar6 + 2) = (undefined1  [16])0x0;
  if (in_EDX == 0) {
    local_88 = 0;
    local_90 = 0;
    local_78 = &_LC34;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_70._8_8_;
    local_70 = auVar1 << 0x40;
    String::parse_latin1((StrRange *)&local_90);
    local_98 = 0;
    local_78 = (undefined *)CONCAT44(local_78._4_4_,2);
    local_60 = 0;
    local_58 = 0;
    local_70 = (undefined1  [16])0x0;
    if (local_90 == 0) {
LAB_0010f268:
      local_50 = 6;
      StringName::operator=((StringName *)(local_70 + 8),(StringName *)&local_88);
    }
    else {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
      local_50 = 6;
      if (local_60 != 0x11) goto LAB_0010f268;
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
  }
  else {
    if (in_EDX != 1) goto LAB_0010f03a;
    local_80 = 0;
    local_88 = 0;
    local_78 = &_LC34;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_70._8_8_;
    local_70 = auVar2 << 0x40;
    String::parse_latin1((StrRange *)&local_88);
    local_90 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_78,1,(CowData<char32_t> *)&local_90,0,(StrRange *)&local_88,6,
               &local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  *puVar6 = local_78._0_4_;
  if (*(long *)(puVar6 + 2) != local_70._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar6 + 2));
    uVar4 = local_70._0_8_;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = local_70._8_8_;
    local_70 = auVar3 << 0x40;
    *(undefined8 *)(puVar6 + 2) = uVar4;
  }
  if (*(long *)(puVar6 + 4) != local_70._8_8_) {
    StringName::unref();
    uVar4 = local_70._8_8_;
    local_70._8_8_ = 0;
    *(undefined8 *)(puVar6 + 4) = uVar4;
  }
  puVar6[6] = local_60;
  if (*(long *)(puVar6 + 8) != local_58) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar6 + 8));
    lVar5 = local_58;
    local_58 = 0;
    *(long *)(puVar6 + 8) = lVar5;
  }
  puVar6[10] = local_50;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
LAB_0010f03a:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar6;
}



/* MethodBindT<unsigned int, Transform3D const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<unsigned_int,Transform3D_const&>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 uVar4;
  long lVar5;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar6;
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
  
  puVar6 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar6 = 0;
  puVar6[6] = 0;
  *(undefined8 *)(puVar6 + 8) = 0;
  puVar6[10] = 6;
  *(undefined1 (*) [16])(puVar6 + 2) = (undefined1  [16])0x0;
  if (in_EDX == 0) {
    local_88 = 0;
    local_90 = 0;
    local_78 = &_LC34;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_70._8_8_;
    local_70 = auVar1 << 0x40;
    String::parse_latin1((StrRange *)&local_90);
    local_98 = 0;
    local_78 = (undefined *)CONCAT44(local_78._4_4_,2);
    local_60 = 0;
    local_58 = 0;
    local_70 = (undefined1  [16])0x0;
    if (local_90 == 0) {
LAB_0010f558:
      local_50 = 6;
      StringName::operator=((StringName *)(local_70 + 8),(StringName *)&local_88);
    }
    else {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
      local_50 = 6;
      if (local_60 != 0x11) goto LAB_0010f558;
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
  }
  else {
    if (in_EDX != 1) goto LAB_0010f32a;
    local_80 = 0;
    local_88 = 0;
    local_78 = &_LC34;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_70._8_8_;
    local_70 = auVar2 << 0x40;
    String::parse_latin1((StrRange *)&local_88);
    local_90 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_78,0x12,(CowData<char32_t> *)&local_90,0,(StrRange *)&local_88
               ,6,&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  *puVar6 = local_78._0_4_;
  if (*(long *)(puVar6 + 2) != local_70._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar6 + 2));
    uVar4 = local_70._0_8_;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = local_70._8_8_;
    local_70 = auVar3 << 0x40;
    *(undefined8 *)(puVar6 + 2) = uVar4;
  }
  if (*(long *)(puVar6 + 4) != local_70._8_8_) {
    StringName::unref();
    uVar4 = local_70._8_8_;
    local_70._8_8_ = 0;
    *(undefined8 *)(puVar6 + 4) = uVar4;
  }
  puVar6[6] = local_60;
  if (*(long *)(puVar6 + 8) != local_58) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar6 + 8));
    lVar5 = local_58;
    local_58 = 0;
    *(long *)(puVar6 + 8) = lVar5;
  }
  puVar6[10] = local_50;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
LAB_0010f32a:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar6;
}



/* MethodBindT<unsigned int, Ref<Shape3D> const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<unsigned_int,Ref<Shape3D>const&>::_gen_argument_type_info(int param_1)

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
  char *local_78;
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
  if (in_EDX == 0) {
    local_80 = 0;
    local_88 = 0;
    local_78 = "";
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_70._8_8_;
    local_70 = auVar1 << 0x40;
    String::parse_latin1((StrRange *)&local_88);
    local_90 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_78,2,(CowData<char32_t> *)&local_90,0,(StrRange *)&local_88,6,
               &local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  else {
    if (in_EDX != 1) goto LAB_0010f62a;
    local_88 = 0;
    local_90 = 0;
    local_78 = "Shape3D";
    local_70._0_8_ = 7;
    String::parse_latin1((StrRange *)&local_90);
    local_98 = 0;
    local_78 = (char *)CONCAT44(local_78._4_4_,0x18);
    local_60 = 0x11;
    local_58 = 0;
    local_70 = (undefined1  [16])0x0;
    if (local_90 == 0) {
LAB_0010f865:
      local_50 = 6;
      StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
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
    else {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
      local_50 = 6;
      if (local_60 == 0x11) goto LAB_0010f865;
      StringName::operator=((StringName *)(local_70 + 8),(StringName *)&local_88);
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    if ((StringName::configured != '\0') && (local_88 != 0)) {
      StringName::unref();
    }
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
LAB_0010f62a:
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
LAB_0010fa68:
    local_50 = 0x80;
    StringName::operator=(local_b8,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0010fa68;
    StringName::StringName((StringName *)&local_80,(CowData<char32_t> *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0010fa83;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0010fa83:
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
  undefined1 (*pauVar3) [16];
  undefined4 *puVar4;
  long in_FS_OFFSET;
  StringName *local_a8;
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
LAB_0011006d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0011006d;
    StringName::StringName((StringName *)&local_80,(CowData<char32_t> *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0011008f;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0011008f:
  if (lVar2 == 0) {
    pauVar3 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar3;
    *(undefined4 *)pauVar3[1] = 0;
    *pauVar3 = (undefined1  [16])0x0;
  }
  local_a8 = (StringName *)&local_68;
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
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar4 + 4),local_a8);
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
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



/* MethodBindTRC<bool, int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<bool,int>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  undefined8 local_a8;
  long local_a0;
  long local_98;
  undefined1 local_90 [16];
  undefined8 local_80;
  long local_78;
  undefined4 local_70;
  undefined *local_68;
  long local_60;
  ulong local_58;
  undefined4 local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_98 = 0;
  if (in_EDX == 0) {
    local_80 = 0;
    local_70 = 6;
    local_78 = 0;
    local_90._0_8_ = 0;
    local_90._8_8_ = 0;
    GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void> *)&local_68);
    local_98 = CONCAT44(local_98._4_4_,local_68._0_4_);
    if (local_90._0_8_ != local_60) {
      CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
      local_90._0_8_ = local_60;
      local_60 = 0;
    }
    if (local_90._8_8_ != local_58) {
      StringName::unref();
      local_90._8_8_ = local_58;
      local_58 = 0;
    }
    local_80 = CONCAT44(local_80._4_4_,local_50);
    if (local_78 != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      local_78 = local_48;
      local_48 = 0;
    }
    local_70 = local_40;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
    uVar3 = local_90._8_8_;
    uVar2 = local_90._0_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_90._8_8_;
    local_90 = auVar1 << 0x40;
    *puVar4 = (undefined4)local_98;
    *(undefined8 *)(puVar4 + 2) = uVar2;
    *(undefined8 *)(puVar4 + 4) = uVar3;
    puVar4[6] = (undefined4)local_80;
    *(long *)(puVar4 + 8) = local_78;
    puVar4[10] = local_70;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
    goto LAB_001104e0;
  }
  local_a0 = 0;
  local_60 = 0;
  local_68 = &_LC34;
  String::parse_latin1((StrRange *)&local_a0);
  local_a8 = 0;
  *puVar4 = 1;
  puVar4[6] = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (local_a0 == 0) {
    puVar4[10] = 6;
LAB_001104a7:
    StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_98);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_a0);
    puVar4[10] = 6;
    if (puVar4[6] != 0x11) goto LAB_001104a7;
    StringName::StringName((StringName *)&local_68,(CowData<char32_t> *)(puVar4 + 8),false);
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  if ((StringName::configured != '\0') && (local_98 != 0)) {
    StringName::unref();
  }
LAB_001104e0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<unsigned int, int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<unsigned_int,int>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  undefined8 local_a8;
  long local_a0;
  long local_98;
  undefined1 local_90 [16];
  undefined8 local_80;
  long local_78;
  undefined4 local_70;
  undefined *local_68;
  long local_60;
  ulong local_58;
  undefined4 local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_98 = 0;
  if (in_EDX == 0) {
    local_80 = 0;
    local_70 = 6;
    local_78 = 0;
    local_90._0_8_ = 0;
    local_90._8_8_ = 0;
    GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void> *)&local_68);
    local_98 = CONCAT44(local_98._4_4_,local_68._0_4_);
    if (local_90._0_8_ != local_60) {
      CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
      local_90._0_8_ = local_60;
      local_60 = 0;
    }
    if (local_90._8_8_ != local_58) {
      StringName::unref();
      local_90._8_8_ = local_58;
      local_58 = 0;
    }
    local_80 = CONCAT44(local_80._4_4_,local_50);
    if (local_78 != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      local_78 = local_48;
      local_48 = 0;
    }
    local_70 = local_40;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
    uVar3 = local_90._8_8_;
    uVar2 = local_90._0_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_90._8_8_;
    local_90 = auVar1 << 0x40;
    *puVar4 = (undefined4)local_98;
    *(undefined8 *)(puVar4 + 2) = uVar2;
    *(undefined8 *)(puVar4 + 4) = uVar3;
    puVar4[6] = (undefined4)local_80;
    *(long *)(puVar4 + 8) = local_78;
    puVar4[10] = local_70;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
    goto LAB_00110760;
  }
  local_a0 = 0;
  local_60 = 0;
  local_68 = &_LC34;
  String::parse_latin1((StrRange *)&local_a0);
  local_a8 = 0;
  *puVar4 = 2;
  puVar4[6] = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (local_a0 == 0) {
    puVar4[10] = 6;
LAB_00110727:
    StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_98);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_a0);
    puVar4[10] = 6;
    if (puVar4[6] != 0x11) goto LAB_00110727;
    StringName::StringName((StringName *)&local_68,(CowData<char32_t> *)(puVar4 + 8),false);
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  if ((StringName::configured != '\0') && (local_98 != 0)) {
    StringName::unref();
  }
LAB_00110760:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool, unsigned int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<bool,unsigned_int>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uVar5;
  undefined8 uVar6;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar7;
  long in_FS_OFFSET;
  undefined8 local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  undefined1 local_90 [16];
  undefined8 local_80;
  long local_78;
  undefined4 local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  int local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar7 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_98 = 0;
  if (in_EDX != 0) {
    local_a0 = 0;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._0_8_;
    local_60 = auVar2 << 0x40;
    local_68 = &_LC34;
    String::parse_latin1((StrRange *)&local_a0);
    local_a8 = 0;
    *puVar7 = 1;
    puVar7[6] = 0;
    *(undefined8 *)(puVar7 + 8) = 0;
    *(undefined1 (*) [16])(puVar7 + 2) = (undefined1  [16])0x0;
    if (local_a0 == 0) {
      puVar7[10] = 6;
LAB_00110997:
      StringName::operator=((StringName *)(puVar7 + 4),(StringName *)&local_98);
    }
    else {
      CowData<char32_t>::_ref((CowData<char32_t> *)(puVar7 + 8),(CowData *)&local_a0);
      puVar7[10] = 6;
      if (puVar7[6] != 0x11) goto LAB_00110997;
      StringName::StringName((StringName *)&local_68,(CowData<char32_t> *)(puVar7 + 8),false);
      if (*(undefined **)(puVar7 + 4) == local_68) {
        if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        *(undefined **)(puVar7 + 4) = local_68;
      }
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
    if ((StringName::configured != '\0') && (local_98 != 0)) {
      StringName::unref();
    }
    goto LAB_001109d2;
  }
  local_80 = 0;
  local_90._0_8_ = 0;
  local_90._8_8_ = 0;
  local_78 = 0;
  local_70 = 6;
  local_a8 = 0;
  local_b0 = 0;
  local_68 = &_LC34;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_60._0_8_;
  local_60 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_b0);
  local_b8 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,2);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_b0 == 0) {
LAB_00110a08:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_a8);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_b0);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00110a08;
    StringName::StringName((StringName *)&local_a0,(CowData<char32_t> *)&local_48,false);
    if (local_60._8_8_ == local_a0) {
      if ((StringName::configured != '\0') && (local_a0 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_60._8_8_ = local_a0;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  if ((StringName::configured != '\0') && (local_a8 != 0)) {
    StringName::unref();
  }
  local_98 = CONCAT44(local_98._4_4_,local_68._0_4_);
  if (local_90._0_8_ != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
    local_90._0_8_ = local_60._0_8_;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = local_60._8_8_;
    local_60 = auVar3 << 0x40;
  }
  if (local_90._8_8_ != local_60._8_8_) {
    StringName::unref();
    local_90._8_8_ = local_60._8_8_;
    local_60._8_8_ = 0;
  }
  local_80 = CONCAT44(local_80._4_4_,local_50);
  if (local_78 != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    local_78 = local_48;
    local_48 = 0;
  }
  local_70 = local_40;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
  uVar6 = local_90._8_8_;
  uVar5 = local_90._0_8_;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = local_90._8_8_;
  local_90 = auVar4 << 0x40;
  *puVar7 = (undefined4)local_98;
  *(undefined8 *)(puVar7 + 2) = uVar5;
  *(undefined8 *)(puVar7 + 4) = uVar6;
  puVar7[6] = (undefined4)local_80;
  *(long *)(puVar7 + 8) = local_78;
  puVar7[10] = local_70;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
LAB_001109d2:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar7;
}



/* MethodBindTR<unsigned int, Object*>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTR<unsigned_int,Object*>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  undefined8 local_a8;
  long local_a0;
  long local_98;
  undefined1 local_90 [16];
  undefined8 local_80;
  long local_78;
  undefined4 local_70;
  char *local_68;
  long local_60;
  ulong local_58;
  undefined4 local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_98 = 0;
  if (in_EDX == 0) {
    local_80 = 0;
    local_90._0_8_ = 0;
    local_90._8_8_ = 0;
    local_70 = 6;
    local_68 = "Object";
    local_78 = 0;
    local_a8 = 0;
    local_60 = 6;
    String::parse_latin1((StrRange *)&local_a8);
    StringName::StringName((StringName *)&local_a0,(String *)&local_a8,false);
    local_68 = (char *)CONCAT44(local_68._4_4_,0x18);
    local_60 = 0;
    StringName::StringName((StringName *)&local_58,(StringName *)&local_a0);
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    if ((StringName::configured != '\0') && (local_a0 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    local_98 = CONCAT44(local_98._4_4_,local_68._0_4_);
    if (local_90._0_8_ != local_60) {
      CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
      local_90._0_8_ = local_60;
      local_60 = 0;
    }
    if (local_90._8_8_ != local_58) {
      StringName::unref();
      local_90._8_8_ = local_58;
      local_58 = 0;
    }
    local_80 = CONCAT44(local_80._4_4_,local_50);
    if (local_78 != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      local_78 = local_48;
      local_48 = 0;
    }
    local_70 = local_40;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
    uVar3 = local_90._8_8_;
    uVar2 = local_90._0_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_90._8_8_;
    local_90 = auVar1 << 0x40;
    *puVar4 = (undefined4)local_98;
    *(undefined8 *)(puVar4 + 2) = uVar2;
    *(undefined8 *)(puVar4 + 4) = uVar3;
    puVar4[6] = (undefined4)local_80;
    *(long *)(puVar4 + 8) = local_78;
    puVar4[10] = local_70;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
    goto LAB_00110e30;
  }
  local_a0 = 0;
  local_60 = 0;
  local_68 = "";
  String::parse_latin1((StrRange *)&local_a0);
  local_a8 = 0;
  *puVar4 = 2;
  puVar4[6] = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (local_a0 == 0) {
    puVar4[10] = 6;
LAB_00110df7:
    StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_98);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_a0);
    puVar4[10] = 6;
    if (puVar4[6] != 0x11) goto LAB_00110df7;
    StringName::StringName((StringName *)&local_68,(CowData<char32_t> *)(puVar4 + 8),false);
    if (*(undefined **)(puVar4 + 4) == local_68) {
      if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      *(char **)(puVar4 + 4) = local_68;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  if ((StringName::configured != '\0') && (local_98 != 0)) {
    StringName::unref();
  }
LAB_00110e30:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, bool>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<int,bool>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 uVar4;
  long lVar5;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar6;
  long in_FS_OFFSET;
  long local_98;
  long local_90;
  undefined8 local_88;
  long local_80;
  undefined *local_78;
  undefined1 local_70 [16];
  int local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  puVar6 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar6 = 0;
  puVar6[6] = 0;
  *(undefined8 *)(puVar6 + 8) = 0;
  puVar6[10] = 6;
  *(undefined1 (*) [16])(puVar6 + 2) = (undefined1  [16])0x0;
  if (in_EDX == 0) {
    local_98 = 0;
    local_90 = 0;
    local_78 = &_LC34;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_70._8_8_;
    local_70 = auVar1 << 0x40;
    String::parse_latin1((StrRange *)&local_90);
    local_88 = 0;
    local_78 = (undefined *)CONCAT44(local_78._4_4_,2);
    local_60 = 0;
    local_58 = 0;
    local_70 = (undefined1  [16])0x0;
    if (local_90 == 0) {
LAB_00111108:
      local_50 = 6;
      StringName::operator=((StringName *)(local_70 + 8),(StringName *)&local_98);
    }
    else {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
      local_50 = 6;
      if (local_60 != 0x11) goto LAB_00111108;
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
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    if ((StringName::configured != '\0') && (local_98 != 0)) {
      StringName::unref();
    }
  }
  else {
    if (in_EDX != 1) goto LAB_00110eda;
    local_80 = 0;
    local_88 = 0;
    local_78 = &_LC34;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_70._8_8_;
    local_70 = auVar2 << 0x40;
    String::parse_latin1((StrRange *)&local_88);
    local_90 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_78,1,(CowData<char32_t> *)&local_90,0,(StrRange *)&local_88,6,
               &local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  *puVar6 = local_78._0_4_;
  if (*(long *)(puVar6 + 2) != local_70._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar6 + 2));
    uVar4 = local_70._0_8_;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = local_70._8_8_;
    local_70 = auVar3 << 0x40;
    *(undefined8 *)(puVar6 + 2) = uVar4;
  }
  if (*(long *)(puVar6 + 4) != local_70._8_8_) {
    StringName::unref();
    uVar4 = local_70._8_8_;
    local_70._8_8_ = 0;
    *(undefined8 *)(puVar6 + 4) = uVar4;
  }
  puVar6[6] = local_60;
  if (*(long *)(puVar6 + 8) != local_58) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar6 + 8));
    lVar5 = local_58;
    local_58 = 0;
    *(long *)(puVar6 + 8) = lVar5;
  }
  puVar6[10] = local_50;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
LAB_00110eda:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar6;
}



/* MethodBindT<unsigned int, int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<unsigned_int,int>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 uVar4;
  long lVar5;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar6;
  long in_FS_OFFSET;
  long local_98;
  long local_90;
  undefined8 local_88;
  long local_80;
  undefined *local_78;
  undefined1 local_70 [16];
  int local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  puVar6 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar6 = 0;
  puVar6[6] = 0;
  *(undefined8 *)(puVar6 + 8) = 0;
  puVar6[10] = 6;
  *(undefined1 (*) [16])(puVar6 + 2) = (undefined1  [16])0x0;
  if (in_EDX == 0) {
    local_80 = 0;
    local_88 = 0;
    local_78 = &_LC34;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_70._8_8_;
    local_70 = auVar1 << 0x40;
    String::parse_latin1((StrRange *)&local_88);
    local_90 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_78,2,(CowData<char32_t> *)&local_90,0,(StrRange *)&local_88,6,
               &local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  else {
    if (in_EDX != 1) goto LAB_001111ca;
    local_98 = 0;
    local_90 = 0;
    local_78 = &_LC34;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = local_70._8_8_;
    local_70 = auVar3 << 0x40;
    String::parse_latin1((StrRange *)&local_90);
    local_88 = 0;
    local_78 = (undefined *)CONCAT44(local_78._4_4_,2);
    local_60 = 0;
    local_58 = 0;
    local_70 = (undefined1  [16])0x0;
    if (local_90 == 0) {
LAB_001113f0:
      local_50 = 6;
      StringName::operator=((StringName *)(local_70 + 8),(StringName *)&local_98);
    }
    else {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
      local_50 = 6;
      if (local_60 != 0x11) goto LAB_001113f0;
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
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    if ((StringName::configured != '\0') && (local_98 != 0)) {
      StringName::unref();
    }
  }
  *puVar6 = local_78._0_4_;
  if (*(long *)(puVar6 + 2) != local_70._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar6 + 2));
    uVar4 = local_70._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_70._8_8_;
    local_70 = auVar2 << 0x40;
    *(undefined8 *)(puVar6 + 2) = uVar4;
  }
  if (*(long *)(puVar6 + 4) != local_70._8_8_) {
    StringName::unref();
    uVar4 = local_70._8_8_;
    local_70._8_8_ = 0;
    *(undefined8 *)(puVar6 + 4) = uVar4;
  }
  puVar6[6] = local_60;
  if (*(long *)(puVar6 + 8) != local_58) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar6 + 8));
    lVar5 = local_58;
    local_58 = 0;
    *(long *)(puVar6 + 8) = lVar5;
  }
  puVar6[10] = local_50;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
LAB_001111ca:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar6;
}



/* MethodBindTRC<int, unsigned int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<int,unsigned_int>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uVar5;
  undefined8 uVar6;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar7;
  long in_FS_OFFSET;
  undefined8 local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  undefined8 local_98;
  undefined1 local_90 [16];
  undefined8 local_80;
  long local_78;
  undefined4 local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  int local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar7 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX != 0) {
    local_a8 = 0;
    local_a0 = 0;
    local_68 = &_LC34;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._0_8_;
    local_60 = auVar2 << 0x40;
    String::parse_latin1((StrRange *)&local_a0);
    local_98 = 0;
    *puVar7 = 2;
    puVar7[6] = 0;
    *(undefined8 *)(puVar7 + 8) = 0;
    *(undefined1 (*) [16])(puVar7 + 2) = (undefined1  [16])0x0;
    if (local_a0 == 0) {
      puVar7[10] = 6;
LAB_00111657:
      StringName::operator=((StringName *)(puVar7 + 4),(StringName *)&local_a8);
    }
    else {
      CowData<char32_t>::_ref((CowData<char32_t> *)(puVar7 + 8),(CowData *)&local_a0);
      puVar7[10] = 6;
      if (puVar7[6] != 0x11) goto LAB_00111657;
      StringName::StringName((StringName *)&local_68,(CowData<char32_t> *)(puVar7 + 8),false);
      if (*(undefined **)(puVar7 + 4) == local_68) {
        if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        *(undefined **)(puVar7 + 4) = local_68;
      }
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
    if ((StringName::configured != '\0') && (local_a8 != 0)) {
      StringName::unref();
    }
    goto LAB_00111692;
  }
  local_98 = 0;
  local_90._0_8_ = 0;
  local_90._8_8_ = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 6;
  local_a8 = 0;
  local_b0 = 0;
  local_68 = &_LC34;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_60._0_8_;
  local_60 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_b0);
  local_b8 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,2);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_b0 == 0) {
LAB_001116c8:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_a8);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_b0);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_001116c8;
    StringName::StringName((StringName *)&local_a0,(CowData<char32_t> *)&local_48,false);
    if (local_60._8_8_ == local_a0) {
      if ((StringName::configured != '\0') && (local_a0 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_60._8_8_ = local_a0;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  if ((StringName::configured != '\0') && (local_a8 != 0)) {
    StringName::unref();
  }
  local_98 = CONCAT44(local_98._4_4_,local_68._0_4_);
  if (local_90._0_8_ != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
    local_90._0_8_ = local_60._0_8_;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = local_60._8_8_;
    local_60 = auVar3 << 0x40;
  }
  if (local_90._8_8_ != local_60._8_8_) {
    StringName::unref();
    local_90._8_8_ = local_60._8_8_;
    local_60._8_8_ = 0;
  }
  local_80 = CONCAT44(local_80._4_4_,local_50);
  if (local_78 != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    local_78 = local_48;
    local_48 = 0;
  }
  local_70 = local_40;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
  uVar6 = local_90._8_8_;
  uVar5 = local_90._0_8_;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = local_90._8_8_;
  local_90 = auVar4 << 0x40;
  *puVar7 = (undefined4)local_98;
  *(undefined8 *)(puVar7 + 2) = uVar5;
  *(undefined8 *)(puVar7 + 4) = uVar6;
  puVar7[6] = (undefined4)local_80;
  *(long *)(puVar7 + 8) = local_78;
  puVar7[10] = local_70;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
LAB_00111692:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar7;
}



/* MethodBind* create_method_bind<CollisionObject3D, unsigned int>(void
   (CollisionObject3D::*)(unsigned int)) */

MethodBind * create_method_bind<CollisionObject3D,unsigned_int>(_func_void_uint *param_1)

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
  *(_func_void_uint **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00122e58;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "CollisionObject3D";
  local_30 = 0x11;
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



/* MethodBind* create_method_bind<CollisionObject3D, unsigned int>(unsigned int
   (CollisionObject3D::*)() const) */

MethodBind * create_method_bind<CollisionObject3D,unsigned_int>(_func_uint *param_1)

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
  *(_func_uint **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00122eb8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "CollisionObject3D";
  local_30 = 0x11;
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



/* MethodBind* create_method_bind<CollisionObject3D, int, bool>(void (CollisionObject3D::*)(int,
   bool)) */

MethodBind * create_method_bind<CollisionObject3D,int,bool>(_func_void_int_bool *param_1)

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
  *(_func_void_int_bool **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00122f18;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "CollisionObject3D";
  local_30 = 0x11;
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



/* MethodBind* create_method_bind<CollisionObject3D, bool, int>(bool (CollisionObject3D::*)(int)
   const) */

MethodBind * create_method_bind<CollisionObject3D,bool,int>(_func_bool_int *param_1)

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
  *(_func_bool_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00122f78;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "CollisionObject3D";
  local_30 = 0x11;
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



/* MethodBind* create_method_bind<CollisionObject3D, float>(void (CollisionObject3D::*)(float)) */

MethodBind * create_method_bind<CollisionObject3D,float>(_func_void_float *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_00122fd8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "CollisionObject3D";
  local_30 = 0x11;
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



/* MethodBind* create_method_bind<CollisionObject3D, float>(float (CollisionObject3D::*)() const) */

MethodBind * create_method_bind<CollisionObject3D,float>(_func_float *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_00123038;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "CollisionObject3D";
  local_30 = 0x11;
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



/* MethodBind* create_method_bind<CollisionObject3D, CollisionObject3D::DisableMode>(void
   (CollisionObject3D::*)(CollisionObject3D::DisableMode)) */

MethodBind *
create_method_bind<CollisionObject3D,CollisionObject3D::DisableMode>
          (_func_void_DisableMode *param_1)

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
  *(_func_void_DisableMode **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00123098;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "CollisionObject3D";
  local_30 = 0x11;
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



/* MethodBind* create_method_bind<CollisionObject3D,
   CollisionObject3D::DisableMode>(CollisionObject3D::DisableMode (CollisionObject3D::*)() const) */

MethodBind *
create_method_bind<CollisionObject3D,CollisionObject3D::DisableMode>(_func_DisableMode *param_1)

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
  *(_func_DisableMode **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_001230f8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "CollisionObject3D";
  local_30 = 0x11;
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



/* MethodBind* create_method_bind<CollisionObject3D, bool>(void (CollisionObject3D::*)(bool)) */

MethodBind * create_method_bind<CollisionObject3D,bool>(_func_void_bool *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_00123158;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "CollisionObject3D";
  local_30 = 0x11;
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



/* MethodBind* create_method_bind<CollisionObject3D, bool>(bool (CollisionObject3D::*)() const) */

MethodBind * create_method_bind<CollisionObject3D,bool>(_func_bool *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_001231b8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "CollisionObject3D";
  local_30 = 0x11;
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



/* MethodBind* create_method_bind<CollisionObject3D, RID>(RID (CollisionObject3D::*)() const) */

MethodBind * create_method_bind<CollisionObject3D,RID>(_func_RID *param_1)

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
  *(_func_RID **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00123218;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "CollisionObject3D";
  local_30 = 0x11;
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



/* MethodBind* create_method_bind<CollisionObject3D, unsigned int, Object*>(unsigned int
   (CollisionObject3D::*)(Object*)) */

MethodBind *
create_method_bind<CollisionObject3D,unsigned_int,Object*>(_func_uint_Object_ptr *param_1)

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
  *(_func_uint_Object_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00123278;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "CollisionObject3D";
  local_30 = 0x11;
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



/* MethodBind* create_method_bind<CollisionObject3D, Vector<int>>(Vector<int>
   (CollisionObject3D::*)()) */

MethodBind * create_method_bind<CollisionObject3D,Vector<int>>(_func_Vector *param_1)

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
  *(_func_Vector **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_001232d8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "CollisionObject3D";
  local_30 = 0x11;
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



/* MethodBind* create_method_bind<CollisionObject3D, unsigned int, Transform3D const&>(void
   (CollisionObject3D::*)(unsigned int, Transform3D const&)) */

MethodBind *
create_method_bind<CollisionObject3D,unsigned_int,Transform3D_const&>
          (_func_void_uint_Transform3D_ptr *param_1)

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
  *(_func_void_uint_Transform3D_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00123338;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "CollisionObject3D";
  local_30 = 0x11;
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



/* MethodBind* create_method_bind<CollisionObject3D, Transform3D, unsigned int>(Transform3D
   (CollisionObject3D::*)(unsigned int) const) */

MethodBind *
create_method_bind<CollisionObject3D,Transform3D,unsigned_int>(_func_Transform3D_uint *param_1)

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
  *(_func_Transform3D_uint **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00123398;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "CollisionObject3D";
  local_30 = 0x11;
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



/* MethodBind* create_method_bind<CollisionObject3D, Object*, unsigned int>(Object*
   (CollisionObject3D::*)(unsigned int) const) */

MethodBind *
create_method_bind<CollisionObject3D,Object*,unsigned_int>(_func_Object_ptr_uint *param_1)

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
  *(_func_Object_ptr_uint **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_001233f8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "CollisionObject3D";
  local_30 = 0x11;
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



/* MethodBind* create_method_bind<CollisionObject3D, unsigned int, bool>(void
   (CollisionObject3D::*)(unsigned int, bool)) */

MethodBind * create_method_bind<CollisionObject3D,unsigned_int,bool>(_func_void_uint_bool *param_1)

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
  *(_func_void_uint_bool **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00123458;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "CollisionObject3D";
  local_30 = 0x11;
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



/* MethodBind* create_method_bind<CollisionObject3D, bool, unsigned int>(bool
   (CollisionObject3D::*)(unsigned int) const) */

MethodBind * create_method_bind<CollisionObject3D,bool,unsigned_int>(_func_bool_uint *param_1)

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
  *(_func_bool_uint **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_001234b8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "CollisionObject3D";
  local_30 = 0x11;
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



/* MethodBind* create_method_bind<CollisionObject3D, unsigned int, Ref<Shape3D> const&>(void
   (CollisionObject3D::*)(unsigned int, Ref<Shape3D> const&)) */

MethodBind *
create_method_bind<CollisionObject3D,unsigned_int,Ref<Shape3D>const&>
          (_func_void_uint_Ref_ptr *param_1)

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
  *(_func_void_uint_Ref_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00123518;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "CollisionObject3D";
  local_30 = 0x11;
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



/* MethodBind* create_method_bind<CollisionObject3D, int, unsigned int>(int
   (CollisionObject3D::*)(unsigned int) const) */

MethodBind * create_method_bind<CollisionObject3D,int,unsigned_int>(_func_int_uint *param_1)

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
  *(_func_int_uint **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00123578;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "CollisionObject3D";
  local_30 = 0x11;
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



/* MethodBind* create_method_bind<CollisionObject3D, Ref<Shape3D>, unsigned int, int>(Ref<Shape3D>
   (CollisionObject3D::*)(unsigned int, int) const) */

MethodBind *
create_method_bind<CollisionObject3D,Ref<Shape3D>,unsigned_int,int>(_func_Ref_uint_int *param_1)

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
  *(_func_Ref_uint_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_001235d8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "CollisionObject3D";
  local_30 = 0x11;
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



/* MethodBind* create_method_bind<CollisionObject3D, int, unsigned int, int>(int
   (CollisionObject3D::*)(unsigned int, int) const) */

MethodBind * create_method_bind<CollisionObject3D,int,unsigned_int,int>(_func_int_uint_int *param_1)

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
  *(_func_int_uint_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00123638;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "CollisionObject3D";
  local_30 = 0x11;
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



/* MethodBind* create_method_bind<CollisionObject3D, unsigned int, int>(void
   (CollisionObject3D::*)(unsigned int, int)) */

MethodBind * create_method_bind<CollisionObject3D,unsigned_int,int>(_func_void_uint_int *param_1)

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
  *(_func_void_uint_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00123698;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "CollisionObject3D";
  local_30 = 0x11;
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



/* MethodBind* create_method_bind<CollisionObject3D, unsigned int, int>(unsigned int
   (CollisionObject3D::*)(int) const) */

MethodBind * create_method_bind<CollisionObject3D,unsigned_int,int>(_func_uint_int *param_1)

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
  *(_func_uint_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_001236f8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "CollisionObject3D";
  local_30 = 0x11;
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



/* GetTypeInfo<CollisionObject3D::DisableMode, void>::get_class_info() */

GetTypeInfo<CollisionObject3D::DisableMode,void> * __thiscall
GetTypeInfo<CollisionObject3D::DisableMode,void>::get_class_info
          (GetTypeInfo<CollisionObject3D::DisableMode,void> *this)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long in_FS_OFFSET;
  undefined8 local_80;
  long local_78;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_80 = 0;
  local_58 = "CollisionObject3D::DisableMode";
  local_50 = 0x1e;
  String::parse_latin1((StrRange *)&local_80);
  String::split((char *)&local_68,SUB81((StrRange *)&local_80,0),0x11356f);
  if ((local_60 != 0) && (2 < *(long *)(local_60 + -8))) {
    local_70 = 0;
    local_58 = ".";
    local_50 = 1;
    String::parse_latin1((StrRange *)&local_70);
    if (local_60 == 0) {
      lVar3 = -2;
      lVar4 = 0;
    }
    else {
      lVar4 = *(long *)(local_60 + -8);
      lVar3 = lVar4 + -2;
      if (-1 < lVar3) {
        String::operator+((String *)&local_58,(String *)(local_60 + lVar3 * 8));
        String::operator+((String *)&local_78,(String *)&local_58);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        goto LAB_00113655;
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
  local_70 = 0;
  local_58 = ".";
  local_50 = 1;
  String::parse_latin1((StrRange *)&local_70);
  String::join((Vector *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
LAB_00113655:
  CowData<String>::_unref((CowData<String> *)&local_60);
  StringName::StringName((StringName *)&local_58,(String *)&local_78,false);
  *(undefined4 *)this = 2;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x28) = 0x10006;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  local_68 = 0;
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  if ((StringName::configured != '\0') && (local_58 != (undefined *)0x0)) {
    StringName::unref();
  }
  lVar4 = local_78;
  if (local_78 != 0) {
    LOCK();
    plVar1 = (long *)(local_78 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_78 = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<CollisionObject3D::DisableMode>::_gen_argument_type_info(int) const */

undefined8 MethodBindTRC<CollisionObject3D::DisableMode>::_gen_argument_type_info(int param_1)

{
  long lVar1;
  undefined4 in_register_0000003c;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  GetTypeInfo<CollisionObject3D::DisableMode,void>::get_class_info
            ((GetTypeInfo<CollisionObject3D::DisableMode,void> *)
             CONCAT44(in_register_0000003c,param_1));
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return CONCAT44(in_register_0000003c,param_1);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<CollisionObject3D::DisableMode>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<CollisionObject3D::DisableMode>::_gen_argument_type_info(int param_1)

{
  long lVar1;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar2;
  long in_FS_OFFSET;
  undefined4 local_48 [2];
  long local_40;
  long local_38;
  undefined4 local_30;
  long local_28;
  undefined4 local_20;
  long local_10;
  
  puVar2 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar2 = 0;
  puVar2[6] = 0;
  *(undefined8 *)(puVar2 + 8) = 0;
  puVar2[10] = 6;
  *(undefined1 (*) [16])(puVar2 + 2) = (undefined1  [16])0x0;
  if (in_EDX == 0) {
    GetTypeInfo<CollisionObject3D::DisableMode,void>::get_class_info
              ((GetTypeInfo<CollisionObject3D::DisableMode,void> *)local_48);
    *puVar2 = local_48[0];
    if (*(long *)(puVar2 + 2) != local_40) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar2 + 2));
      lVar1 = local_40;
      local_40 = 0;
      *(long *)(puVar2 + 2) = lVar1;
    }
    if (*(long *)(puVar2 + 4) != local_38) {
      StringName::unref();
      lVar1 = local_38;
      local_38 = 0;
      *(long *)(puVar2 + 4) = lVar1;
    }
    puVar2[6] = local_30;
    if (*(long *)(puVar2 + 8) != local_28) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar2 + 8));
      lVar1 = local_28;
      local_28 = 0;
      *(long *)(puVar2 + 8) = lVar1;
    }
    puVar2[10] = local_20;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_28);
    if ((StringName::configured != '\0') && (local_38 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar2;
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
LAB_00113d20:
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
  if (lVar10 == 0) goto LAB_00113d20;
  if (param_1 <= lVar6) {
    lVar6 = *(long *)this;
    uVar8 = param_1;
    while (lVar6 != 0) {
      if (*(ulong *)(lVar6 + -8) <= uVar8) {
LAB_00113bf9:
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
        if (*(ulong *)(lVar6 + -8) <= uVar8) goto LAB_00113bf9;
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
    goto LAB_00113d76;
  }
  if (lVar10 == lVar7) {
LAB_00113c9f:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
LAB_00113d76:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar6 = puVar9[-1];
    if (param_1 <= lVar6) goto LAB_00113c8a;
  }
  else {
    if (lVar6 != 0) {
      uVar4 = _realloc(this,lVar10);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      goto LAB_00113c9f;
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
LAB_00113c8a:
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
LAB_00114040:
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
  if (lVar8 == 0) goto LAB_00114040;
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
        goto LAB_00113f51;
      }
      uVar6 = _realloc(this,lVar8);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
    }
    puVar7 = *(undefined8 **)this;
    if (puVar7 != (undefined8 *)0x0) {
LAB_00113f51:
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



/* CollisionObject3D::_initialize_classv() */

void CollisionObject3D::_initialize_classv(void)

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
        if ((code *)PTR__bind_methods_0012a020 != Node::_bind_methods) {
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
      if ((code *)PTR__bind_methods_0012a018 != Node::_bind_methods) {
        Node3D::_bind_methods();
      }
      Node3D::initialize_class()::initialized = '\x01';
    }
    local_58 = "Node3D";
    local_68 = 0;
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
    _bind_methods();
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CowData<CollisionObject3D::ShapeData::ShapeBase>::_unref() */

void __thiscall
CowData<CollisionObject3D::ShapeData::ShapeBase>::_unref
          (CowData<CollisionObject3D::ShapeData::ShapeBase> *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  Object *pOVar4;
  code *pcVar5;
  char cVar6;
  long lVar7;
  long lVar8;
  
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
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  lVar3 = *(long *)(lVar2 + -8);
  *(undefined8 *)this = 0;
  if (lVar3 != 0) {
    lVar8 = 0;
    lVar7 = lVar2;
LAB_0011443d:
    do {
      if (*(long *)(lVar7 + 8) != 0) {
        cVar6 = RefCounted::unreference();
        if (cVar6 != '\0') {
          pOVar4 = *(Object **)(lVar7 + 8);
          cVar6 = predelete_handler(pOVar4);
          if (cVar6 != '\0') {
            lVar8 = lVar8 + 1;
            lVar7 = lVar7 + 0x18;
            (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
            Memory::free_static(pOVar4,false);
            if (lVar3 == lVar8) break;
            goto LAB_0011443d;
          }
        }
      }
      lVar8 = lVar8 + 1;
      lVar7 = lVar7 + 0x18;
    } while (lVar3 != lVar8);
  }
  Memory::free_static((void *)(lVar2 + -0x10),false);
  return;
}



/* RBMap<unsigned int, CollisionObject3D::ShapeData, Comparator<unsigned int>,
   DefaultAllocator>::_insert(unsigned int const&, CollisionObject3D::ShapeData const&) */

int * __thiscall
RBMap<unsigned_int,CollisionObject3D::ShapeData,Comparator<unsigned_int>,DefaultAllocator>::_insert
          (RBMap<unsigned_int,CollisionObject3D::ShapeData,Comparator<unsigned_int>,DefaultAllocator>
           *this,uint *param_1,ShapeData *param_2)

{
  ShapeData SVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  int *piVar13;
  long lVar14;
  int *piVar15;
  int *piVar16;
  int *piVar17;
  int *piVar18;
  int *piVar19;
  int *piVar20;
  int *piVar21;
  long in_FS_OFFSET;
  bool bVar22;
  long local_50;
  ShapeData local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  piVar20 = *(int **)this;
  if (*(int **)(piVar20 + 4) != *(int **)(this + 8)) {
    piVar13 = *(int **)(piVar20 + 4);
    do {
      piVar20 = piVar13;
      if (*param_1 < (uint)piVar20[0xc]) {
        piVar13 = *(int **)(piVar20 + 4);
      }
      else {
        if (*param_1 <= (uint)piVar20[0xc]) {
          uVar7 = *(undefined8 *)(param_2 + 0x10);
          uVar4 = *(undefined8 *)param_2;
          *(undefined8 *)(piVar20 + 0x10) = *(undefined8 *)(param_2 + 8);
          *(undefined8 *)(piVar20 + 0x12) = uVar7;
          uVar7 = *(undefined8 *)(param_2 + 0x18);
          uVar8 = *(undefined8 *)(param_2 + 0x20);
          *(undefined8 *)(piVar20 + 0xe) = uVar4;
          lVar14 = *(long *)(param_2 + 0x40);
          *(undefined8 *)(piVar20 + 0x14) = uVar7;
          *(undefined8 *)(piVar20 + 0x16) = uVar8;
          uVar4 = *(undefined8 *)(param_2 + 0x30);
          *(undefined8 *)(piVar20 + 0x18) = *(undefined8 *)(param_2 + 0x28);
          *(undefined8 *)(piVar20 + 0x1a) = uVar4;
          if (*(long *)(piVar20 + 0x1e) != lVar14) {
            CowData<CollisionObject3D::ShapeData::ShapeBase>::_ref
                      ((CowData<CollisionObject3D::ShapeData::ShapeBase> *)(piVar20 + 0x1e),
                       (CowData *)(param_2 + 0x40));
          }
          *(ShapeData *)(piVar20 + 0x20) = param_2[0x48];
          goto LAB_001147d9;
        }
        piVar13 = *(int **)(piVar20 + 2);
      }
    } while (*(int **)(this + 8) != piVar13);
  }
  piVar13 = (int *)operator_new(0x88,DefaultAllocator::alloc);
  uVar2 = *param_1;
  uVar7 = *(undefined8 *)(param_2 + 8);
  uVar8 = *(undefined8 *)(param_2 + 0x10);
  local_50 = 0;
  uVar4 = *(undefined8 *)param_2;
  uVar9 = *(undefined8 *)(param_2 + 0x18);
  uVar10 = *(undefined8 *)(param_2 + 0x20);
  uVar11 = *(undefined8 *)(param_2 + 0x28);
  uVar12 = *(undefined8 *)(param_2 + 0x30);
  lVar14 = *(long *)(param_2 + 0x40);
  if (*(long *)(param_2 + 0x40) != 0) {
    CowData<CollisionObject3D::ShapeData::ShapeBase>::_ref
              ((CowData<CollisionObject3D::ShapeData::ShapeBase> *)&local_50,
               (CowData *)(param_2 + 0x40));
    lVar14 = local_50;
  }
  SVar1 = param_2[0x48];
  piVar13[0xc] = uVar2;
  *piVar13 = 0;
  piVar13[10] = 0;
  piVar13[0xb] = 0;
  *(undefined8 *)(piVar13 + 0xe) = uVar4;
  piVar13[0x1e] = 0;
  piVar13[0x1f] = 0;
  *(undefined1 (*) [16])(piVar13 + 2) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(piVar13 + 6) = (undefined1  [16])0x0;
  *(undefined8 *)(piVar13 + 0x10) = uVar7;
  *(undefined8 *)(piVar13 + 0x12) = uVar8;
  *(undefined8 *)(piVar13 + 0x14) = uVar9;
  *(undefined8 *)(piVar13 + 0x16) = uVar10;
  *(undefined8 *)(piVar13 + 0x18) = uVar11;
  *(undefined8 *)(piVar13 + 0x1a) = uVar12;
  local_48 = SVar1;
  if (lVar14 != 0) {
    CowData<CollisionObject3D::ShapeData::ShapeBase>::_ref
              ((CowData<CollisionObject3D::ShapeData::ShapeBase> *)(piVar13 + 0x1e),
               (CowData *)&local_50);
  }
  *(ShapeData *)(piVar13 + 0x20) = SVar1;
  CowData<CollisionObject3D::ShapeData::ShapeBase>::_unref
            ((CowData<CollisionObject3D::ShapeData::ShapeBase> *)&local_50);
  *(int **)(piVar13 + 6) = piVar20;
  piVar21 = *(int **)(this + 8);
  *(int **)(piVar13 + 2) = piVar21;
  *(int **)(piVar13 + 4) = piVar21;
  if ((*(int **)this == piVar20) || (*param_1 < (uint)piVar20[0xc])) {
    *(int **)(piVar20 + 4) = piVar13;
    piVar18 = *(int **)(this + 8);
    piVar17 = *(int **)(piVar13 + 4);
    piVar19 = *(int **)this;
    if (piVar21 == piVar18) {
      piVar16 = piVar20;
      piVar15 = piVar20;
      if (piVar13 == *(int **)(piVar20 + 2)) goto LAB_00114848;
      goto LAB_00114855;
    }
LAB_00114820:
    do {
      piVar16 = piVar21;
      piVar21 = *(int **)(piVar16 + 4);
    } while (*(int **)(piVar16 + 4) != piVar18);
  }
  else {
    *(int **)(piVar20 + 2) = piVar13;
    piVar16 = *(int **)(piVar13 + 2);
    piVar18 = *(int **)(this + 8);
    piVar19 = *(int **)this;
    piVar15 = piVar20;
    piVar17 = piVar21;
    if (piVar16 == piVar18) {
LAB_00114848:
      do {
        piVar16 = *(int **)(piVar15 + 6);
        bVar22 = piVar15 == *(int **)(piVar16 + 2);
        piVar15 = piVar16;
      } while (bVar22);
LAB_00114855:
      if (piVar19 == piVar16) {
        piVar16 = (int *)0x0;
      }
    }
    else {
      piVar21 = *(int **)(piVar16 + 4);
      if (*(int **)(piVar16 + 4) != piVar18) goto LAB_00114820;
    }
  }
  *(int **)(piVar13 + 8) = piVar16;
  piVar21 = *(int **)this;
  if (*(int **)(this + 8) == piVar17) {
    piVar17 = piVar13;
    piVar18 = piVar20;
    piVar19 = piVar20;
    if (piVar13 == *(int **)(piVar20 + 4)) {
      do {
        piVar18 = *(int **)(piVar19 + 6);
        bVar22 = piVar19 == *(int **)(piVar18 + 4);
        piVar17 = piVar19;
        piVar19 = piVar18;
      } while (bVar22);
    }
    if (piVar21 != piVar17) goto LAB_001146ec;
    piVar13[10] = 0;
    piVar13[0xb] = 0;
    if (piVar16 == (int *)0x0) goto LAB_00114706;
LAB_001146f5:
    *(int **)(piVar16 + 10) = piVar13;
    piVar18 = *(int **)(piVar13 + 10);
    if (piVar18 == (int *)0x0) goto LAB_00114706;
  }
  else {
    do {
      piVar18 = piVar17;
      piVar17 = *(int **)(piVar18 + 2);
    } while (*(int **)(this + 8) != *(int **)(piVar18 + 2));
LAB_001146ec:
    *(int **)(piVar13 + 10) = piVar18;
    if (piVar16 != (int *)0x0) goto LAB_001146f5;
  }
  *(int **)(piVar18 + 8) = piVar13;
LAB_00114706:
  iVar3 = *piVar20;
  *(int *)(this + 0x10) = *(int *)(this + 0x10) + 1;
  piVar18 = piVar13;
  if (iVar3 == 0) {
    do {
      while( true ) {
        piVar21 = *(int **)(piVar20 + 6);
        piVar17 = *(int **)(piVar21 + 4);
        if (piVar17 == piVar20) break;
        if (*piVar17 == 0) goto LAB_0011479d;
        piVar17 = *(int **)(piVar20 + 4);
        if (piVar18 == piVar17) {
          lVar14 = *(long *)(this + 8);
          lVar5 = *(long *)(piVar17 + 2);
          *(long *)(piVar20 + 4) = lVar5;
          piVar18 = piVar21;
          if (lVar14 != lVar5) {
            *(int **)(lVar5 + 0x18) = piVar20;
            piVar18 = *(int **)(piVar20 + 6);
          }
          *(int **)(piVar17 + 6) = piVar18;
          if (piVar20 == *(int **)(piVar18 + 2)) {
            *(int **)(piVar18 + 2) = piVar17;
          }
          else {
            *(int **)(piVar18 + 4) = piVar17;
          }
          *(int **)(piVar17 + 2) = piVar20;
          *(int **)(piVar20 + 6) = piVar17;
          piVar18 = *(int **)(this + 8);
          *piVar17 = 1;
          if (piVar21 == piVar18) goto LAB_00114948;
LAB_00114741:
          *piVar21 = 0;
          piVar18 = piVar20;
        }
        else {
          piVar19 = *(int **)(this + 8);
          *piVar20 = 1;
          piVar17 = piVar20;
          piVar20 = piVar18;
          if (piVar21 != piVar19) goto LAB_00114741;
LAB_00114948:
          _err_print_error("_set_color","./core/templates/rb_map.h",0xed,
                           "Condition \"p_node == _data._nil && p_color == RED\" is true.",0,0);
          piVar18 = piVar20;
        }
        lVar14 = *(long *)(piVar21 + 2);
        lVar5 = *(long *)(this + 8);
        lVar6 = *(long *)(lVar14 + 0x10);
        *(long *)(piVar21 + 2) = lVar6;
        if (lVar5 != lVar6) {
          *(int **)(lVar6 + 0x18) = piVar21;
        }
        lVar5 = *(long *)(piVar21 + 6);
        *(long *)(lVar14 + 0x18) = lVar5;
        if (piVar21 == *(int **)(lVar5 + 0x10)) {
          *(long *)(lVar5 + 0x10) = lVar14;
        }
        else {
          *(long *)(lVar5 + 8) = lVar14;
        }
        *(int **)(lVar14 + 0x10) = piVar21;
        *(long *)(piVar21 + 6) = lVar14;
LAB_00114780:
        piVar20 = piVar17;
        if (*piVar17 != 0) goto LAB_001147cb;
      }
      piVar17 = *(int **)(piVar21 + 2);
      if (*piVar17 != 0) {
        piVar17 = piVar20;
        if (*(int **)(piVar20 + 2) == piVar18) {
          lVar14 = *(long *)(this + 8);
          lVar5 = *(long *)(piVar18 + 4);
          *(long *)(piVar20 + 2) = lVar5;
          if (lVar14 == lVar5) {
            *(int **)(piVar18 + 6) = piVar21;
            piVar17 = piVar21;
LAB_00114ad8:
            *(int **)(piVar17 + 4) = piVar18;
          }
          else {
            *(int **)(lVar5 + 0x18) = piVar20;
            piVar17 = *(int **)(piVar20 + 6);
            *(int **)(piVar18 + 6) = piVar17;
            if (piVar20 == *(int **)(piVar17 + 4)) goto LAB_00114ad8;
            *(int **)(piVar17 + 2) = piVar18;
          }
          *(int **)(piVar18 + 4) = piVar20;
          *(int **)(piVar20 + 6) = piVar18;
          piVar17 = piVar18;
          piVar18 = piVar20;
        }
        piVar20 = *(int **)(this + 8);
        *piVar17 = 1;
        if (piVar21 == piVar20) {
          _err_print_error("_set_color","./core/templates/rb_map.h",0xed,
                           "Condition \"p_node == _data._nil && p_color == RED\" is true.",0,0);
        }
        else {
          *piVar21 = 0;
        }
        lVar14 = *(long *)(piVar21 + 4);
        lVar5 = *(long *)(this + 8);
        lVar6 = *(long *)(lVar14 + 8);
        *(long *)(piVar21 + 4) = lVar6;
        if (lVar5 != lVar6) {
          *(int **)(lVar6 + 0x18) = piVar21;
        }
        lVar5 = *(long *)(piVar21 + 6);
        *(long *)(lVar14 + 0x18) = lVar5;
        if (piVar21 == *(int **)(lVar5 + 8)) {
          *(long *)(lVar5 + 8) = lVar14;
        }
        else {
          *(long *)(lVar5 + 0x10) = lVar14;
        }
        *(int **)(lVar14 + 8) = piVar21;
        *(long *)(piVar21 + 6) = lVar14;
        goto LAB_00114780;
      }
LAB_0011479d:
      piVar18 = *(int **)(this + 8);
      *piVar20 = 1;
      *piVar17 = 1;
      if (piVar21 == piVar18) {
        _err_print_error("_set_color","./core/templates/rb_map.h",0xed,
                         "Condition \"p_node == _data._nil && p_color == RED\" is true.",0,0);
      }
      else {
        *piVar21 = 0;
      }
      piVar20 = *(int **)(piVar21 + 6);
      piVar18 = piVar21;
    } while (**(int **)(piVar21 + 6) == 0);
LAB_001147cb:
    piVar21 = *(int **)this;
  }
  **(undefined4 **)(piVar21 + 4) = 1;
  piVar20 = piVar13;
LAB_001147d9:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return piVar20;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RBMap<unsigned int, CollisionObject3D::ShapeData, Comparator<unsigned int>,
   DefaultAllocator>::_cleanup_tree(RBMap<unsigned int, CollisionObject3D::ShapeData,
   Comparator<unsigned int>, DefaultAllocator>::Element*) [clone .part.0] */

void __thiscall
RBMap<unsigned_int,CollisionObject3D::ShapeData,Comparator<unsigned_int>,DefaultAllocator>::
_cleanup_tree(RBMap<unsigned_int,CollisionObject3D::ShapeData,Comparator<unsigned_int>,DefaultAllocator>
              *this,Element *param_1)

{
  Element *pEVar1;
  Element *pEVar2;
  Element *pEVar3;
  Element *pEVar4;
  Element *pEVar5;
  Element *pEVar6;
  
  pEVar1 = *(Element **)(param_1 + 0x10);
  pEVar2 = *(Element **)(this + 8);
  if (pEVar1 != pEVar2) {
    pEVar3 = *(Element **)(pEVar1 + 0x10);
    if (pEVar2 != pEVar3) {
      pEVar5 = *(Element **)(pEVar3 + 0x10);
      if (pEVar2 != pEVar5) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar2 != pEVar6) {
          pEVar4 = *(Element **)(pEVar6 + 0x10);
          if (pEVar2 != pEVar4) {
            _cleanup_tree(this,pEVar4);
            pEVar4 = *(Element **)(this + 8);
          }
          if (pEVar4 != *(Element **)(pEVar6 + 8)) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          CowData<CollisionObject3D::ShapeData::ShapeBase>::_unref
                    ((CowData<CollisionObject3D::ShapeData::ShapeBase> *)(pEVar6 + 0x78));
          Memory::free_static(pEVar6,false);
          pEVar6 = *(Element **)(this + 8);
        }
        pEVar2 = *(Element **)(pEVar5 + 8);
        if (pEVar2 != pEVar6) {
          pEVar4 = *(Element **)(pEVar2 + 0x10);
          if (pEVar6 != pEVar4) {
            _cleanup_tree(this,pEVar4);
            pEVar4 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar2 + 8) != pEVar4) {
            _cleanup_tree(this,*(Element **)(pEVar2 + 8));
          }
          CowData<CollisionObject3D::ShapeData::ShapeBase>::_unref
                    ((CowData<CollisionObject3D::ShapeData::ShapeBase> *)(pEVar2 + 0x78));
          Memory::free_static(pEVar2,false);
        }
        CowData<CollisionObject3D::ShapeData::ShapeBase>::_unref
                  ((CowData<CollisionObject3D::ShapeData::ShapeBase> *)(pEVar5 + 0x78));
        Memory::free_static(pEVar5,false);
        pEVar5 = *(Element **)(this + 8);
      }
      pEVar2 = *(Element **)(pEVar3 + 8);
      if (pEVar2 != pEVar5) {
        pEVar6 = *(Element **)(pEVar2 + 0x10);
        if (pEVar6 != pEVar5) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar5 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          CowData<CollisionObject3D::ShapeData::ShapeBase>::_unref
                    ((CowData<CollisionObject3D::ShapeData::ShapeBase> *)(pEVar6 + 0x78));
          Memory::free_static(pEVar6,false);
          pEVar5 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar2 + 8);
        if (pEVar6 != pEVar5) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar5 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          CowData<CollisionObject3D::ShapeData::ShapeBase>::_unref
                    ((CowData<CollisionObject3D::ShapeData::ShapeBase> *)(pEVar6 + 0x78));
          Memory::free_static(pEVar6,false);
        }
        CowData<CollisionObject3D::ShapeData::ShapeBase>::_unref
                  ((CowData<CollisionObject3D::ShapeData::ShapeBase> *)(pEVar2 + 0x78));
        Memory::free_static(pEVar2,false);
      }
      CowData<CollisionObject3D::ShapeData::ShapeBase>::_unref
                ((CowData<CollisionObject3D::ShapeData::ShapeBase> *)(pEVar3 + 0x78));
      Memory::free_static(pEVar3,false);
      pEVar3 = *(Element **)(this + 8);
    }
    pEVar2 = *(Element **)(pEVar1 + 8);
    if (pEVar2 != pEVar3) {
      pEVar5 = *(Element **)(pEVar2 + 0x10);
      if (pEVar5 != pEVar3) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          CowData<CollisionObject3D::ShapeData::ShapeBase>::_unref
                    ((CowData<CollisionObject3D::ShapeData::ShapeBase> *)(pEVar6 + 0x78));
          Memory::free_static(pEVar6,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar5 + 8);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          CowData<CollisionObject3D::ShapeData::ShapeBase>::_unref
                    ((CowData<CollisionObject3D::ShapeData::ShapeBase> *)(pEVar6 + 0x78));
          Memory::free_static(pEVar6,false);
        }
        CowData<CollisionObject3D::ShapeData::ShapeBase>::_unref
                  ((CowData<CollisionObject3D::ShapeData::ShapeBase> *)(pEVar5 + 0x78));
        Memory::free_static(pEVar5,false);
        pEVar3 = *(Element **)(this + 8);
      }
      pEVar5 = *(Element **)(pEVar2 + 8);
      if (pEVar5 != pEVar3) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          CowData<CollisionObject3D::ShapeData::ShapeBase>::_unref
                    ((CowData<CollisionObject3D::ShapeData::ShapeBase> *)(pEVar6 + 0x78));
          Memory::free_static(pEVar6,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar5 + 8);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          CowData<CollisionObject3D::ShapeData::ShapeBase>::_unref
                    ((CowData<CollisionObject3D::ShapeData::ShapeBase> *)(pEVar6 + 0x78));
          Memory::free_static(pEVar6,false);
        }
        CowData<CollisionObject3D::ShapeData::ShapeBase>::_unref
                  ((CowData<CollisionObject3D::ShapeData::ShapeBase> *)(pEVar5 + 0x78));
        Memory::free_static(pEVar5,false);
      }
      CowData<CollisionObject3D::ShapeData::ShapeBase>::_unref
                ((CowData<CollisionObject3D::ShapeData::ShapeBase> *)(pEVar2 + 0x78));
      Memory::free_static(pEVar2,false);
    }
    CowData<CollisionObject3D::ShapeData::ShapeBase>::_unref
              ((CowData<CollisionObject3D::ShapeData::ShapeBase> *)(pEVar1 + 0x78));
    Memory::free_static(pEVar1,false);
    pEVar2 = *(Element **)(this + 8);
  }
  pEVar1 = *(Element **)(param_1 + 8);
  if (pEVar1 != pEVar2) {
    pEVar3 = *(Element **)(pEVar1 + 0x10);
    if (pEVar2 != pEVar3) {
      pEVar5 = *(Element **)(pEVar3 + 0x10);
      if (pEVar2 != pEVar5) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar2 != pEVar6) {
          pEVar4 = *(Element **)(pEVar6 + 0x10);
          if (pEVar2 != pEVar4) {
            _cleanup_tree(this,pEVar4);
            pEVar4 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar4) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          CowData<CollisionObject3D::ShapeData::ShapeBase>::_unref
                    ((CowData<CollisionObject3D::ShapeData::ShapeBase> *)(pEVar6 + 0x78));
          Memory::free_static(pEVar6,false);
          pEVar6 = *(Element **)(this + 8);
        }
        pEVar2 = *(Element **)(pEVar5 + 8);
        if (pEVar2 != pEVar6) {
          if (*(Element **)(pEVar2 + 0x10) != pEVar6) {
            _cleanup_tree(this,*(Element **)(pEVar2 + 0x10));
            pEVar6 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar2 + 8) != pEVar6) {
            _cleanup_tree(this,*(Element **)(pEVar2 + 8));
          }
          CowData<CollisionObject3D::ShapeData::ShapeBase>::_unref
                    ((CowData<CollisionObject3D::ShapeData::ShapeBase> *)(pEVar2 + 0x78));
          Memory::free_static(pEVar2,false);
        }
        CowData<CollisionObject3D::ShapeData::ShapeBase>::_unref
                  ((CowData<CollisionObject3D::ShapeData::ShapeBase> *)(pEVar5 + 0x78));
        Memory::free_static(pEVar5,false);
        pEVar5 = *(Element **)(this + 8);
      }
      pEVar2 = *(Element **)(pEVar3 + 8);
      if (pEVar2 != pEVar5) {
        pEVar6 = *(Element **)(pEVar2 + 0x10);
        if (pEVar6 != pEVar5) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar5 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          CowData<CollisionObject3D::ShapeData::ShapeBase>::_unref
                    ((CowData<CollisionObject3D::ShapeData::ShapeBase> *)(pEVar6 + 0x78));
          Memory::free_static(pEVar6,false);
          pEVar5 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar2 + 8);
        if (pEVar6 != pEVar5) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar5 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          CowData<CollisionObject3D::ShapeData::ShapeBase>::_unref
                    ((CowData<CollisionObject3D::ShapeData::ShapeBase> *)(pEVar6 + 0x78));
          Memory::free_static(pEVar6,false);
        }
        CowData<CollisionObject3D::ShapeData::ShapeBase>::_unref
                  ((CowData<CollisionObject3D::ShapeData::ShapeBase> *)(pEVar2 + 0x78));
        Memory::free_static(pEVar2,false);
      }
      CowData<CollisionObject3D::ShapeData::ShapeBase>::_unref
                ((CowData<CollisionObject3D::ShapeData::ShapeBase> *)(pEVar3 + 0x78));
      Memory::free_static(pEVar3,false);
      pEVar3 = *(Element **)(this + 8);
    }
    pEVar2 = *(Element **)(pEVar1 + 8);
    if (pEVar2 != pEVar3) {
      pEVar5 = *(Element **)(pEVar2 + 0x10);
      if (pEVar5 != pEVar3) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          CowData<CollisionObject3D::ShapeData::ShapeBase>::_unref
                    ((CowData<CollisionObject3D::ShapeData::ShapeBase> *)(pEVar6 + 0x78));
          Memory::free_static(pEVar6,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar5 + 8);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          CowData<CollisionObject3D::ShapeData::ShapeBase>::_unref
                    ((CowData<CollisionObject3D::ShapeData::ShapeBase> *)(pEVar6 + 0x78));
          Memory::free_static(pEVar6,false);
        }
        CowData<CollisionObject3D::ShapeData::ShapeBase>::_unref
                  ((CowData<CollisionObject3D::ShapeData::ShapeBase> *)(pEVar5 + 0x78));
        Memory::free_static(pEVar5,false);
        pEVar3 = *(Element **)(this + 8);
      }
      pEVar5 = *(Element **)(pEVar2 + 8);
      if (pEVar5 != pEVar3) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          CowData<CollisionObject3D::ShapeData::ShapeBase>::_unref
                    ((CowData<CollisionObject3D::ShapeData::ShapeBase> *)(pEVar6 + 0x78));
          Memory::free_static(pEVar6,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar5 + 8);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          CowData<CollisionObject3D::ShapeData::ShapeBase>::_unref
                    ((CowData<CollisionObject3D::ShapeData::ShapeBase> *)(pEVar6 + 0x78));
          Memory::free_static(pEVar6,false);
        }
        CowData<CollisionObject3D::ShapeData::ShapeBase>::_unref
                  ((CowData<CollisionObject3D::ShapeData::ShapeBase> *)(pEVar5 + 0x78));
        Memory::free_static(pEVar5,false);
      }
      CowData<CollisionObject3D::ShapeData::ShapeBase>::_unref
                ((CowData<CollisionObject3D::ShapeData::ShapeBase> *)(pEVar2 + 0x78));
      Memory::free_static(pEVar2,false);
    }
    CowData<CollisionObject3D::ShapeData::ShapeBase>::_unref
              ((CowData<CollisionObject3D::ShapeData::ShapeBase> *)(pEVar1 + 0x78));
    Memory::free_static(pEVar1,false);
  }
  CowData<CollisionObject3D::ShapeData::ShapeBase>::_unref
            ((CowData<CollisionObject3D::ShapeData::ShapeBase> *)(param_1 + 0x78));
  Memory::free_static(param_1,false);
  return;
}



/* RBMap<unsigned int, CollisionObject3D::ShapeData, Comparator<unsigned int>,
   DefaultAllocator>::~RBMap() */

void __thiscall
RBMap<unsigned_int,CollisionObject3D::ShapeData,Comparator<unsigned_int>,DefaultAllocator>::~RBMap
          (RBMap<unsigned_int,CollisionObject3D::ShapeData,Comparator<unsigned_int>,DefaultAllocator>
           *this)

{
  Element *pEVar1;
  Element *pEVar2;
  Element *pEVar3;
  void *pvVar4;
  Element *pEVar5;
  Element *pEVar6;
  Element *pEVar7;
  
  pvVar4 = *(void **)this;
  if (pvVar4 != (void *)0x0) {
    pEVar1 = *(Element **)((long)pvVar4 + 0x10);
    pEVar2 = *(Element **)(this + 8);
    if (pEVar1 != pEVar2) {
      pEVar3 = *(Element **)(pEVar1 + 0x10);
      if (pEVar2 != pEVar3) {
        pEVar7 = *(Element **)(pEVar3 + 0x10);
        if (pEVar2 != pEVar7) {
          pEVar5 = *(Element **)(pEVar7 + 0x10);
          if (pEVar2 != pEVar5) {
            _cleanup_tree(this,pEVar5);
            pEVar5 = *(Element **)(this + 8);
          }
          if (pEVar5 != *(Element **)(pEVar7 + 8)) {
            _cleanup_tree(this,*(Element **)(pEVar7 + 8));
          }
          CowData<CollisionObject3D::ShapeData::ShapeBase>::_unref
                    ((CowData<CollisionObject3D::ShapeData::ShapeBase> *)(pEVar7 + 0x78));
          Memory::free_static(pEVar7,false);
          pEVar7 = *(Element **)(this + 8);
        }
        pEVar2 = *(Element **)(pEVar3 + 8);
        if (pEVar7 != pEVar2) {
          pEVar5 = *(Element **)(pEVar2 + 0x10);
          if (pEVar7 != pEVar5) {
            _cleanup_tree(this,pEVar5);
            pEVar5 = *(Element **)(this + 8);
          }
          pEVar7 = *(Element **)(pEVar2 + 8);
          if (pEVar7 != pEVar5) {
            if (*(Element **)(pEVar7 + 0x10) != pEVar5) {
              _cleanup_tree(this,*(Element **)(pEVar7 + 0x10));
              pEVar5 = *(Element **)(this + 8);
            }
            if (*(Element **)(pEVar7 + 8) != pEVar5) {
              _cleanup_tree(this,*(Element **)(pEVar7 + 8));
            }
            CowData<CollisionObject3D::ShapeData::ShapeBase>::_unref
                      ((CowData<CollisionObject3D::ShapeData::ShapeBase> *)(pEVar7 + 0x78));
            Memory::free_static(pEVar7,false);
          }
          CowData<CollisionObject3D::ShapeData::ShapeBase>::_unref
                    ((CowData<CollisionObject3D::ShapeData::ShapeBase> *)(pEVar2 + 0x78));
          Memory::free_static(pEVar2,false);
        }
        CowData<CollisionObject3D::ShapeData::ShapeBase>::_unref
                  ((CowData<CollisionObject3D::ShapeData::ShapeBase> *)(pEVar3 + 0x78));
        Memory::free_static(pEVar3,false);
        pEVar3 = *(Element **)(this + 8);
      }
      pEVar2 = *(Element **)(pEVar1 + 8);
      if (pEVar2 != pEVar3) {
        pEVar7 = *(Element **)(pEVar2 + 0x10);
        if (pEVar3 != pEVar7) {
          pEVar5 = *(Element **)(pEVar7 + 0x10);
          if (pEVar3 != pEVar5) {
            _cleanup_tree(this,pEVar5);
            pEVar5 = *(Element **)(this + 8);
          }
          if (pEVar5 != *(Element **)(pEVar7 + 8)) {
            _cleanup_tree(this,*(Element **)(pEVar7 + 8));
          }
          CowData<CollisionObject3D::ShapeData::ShapeBase>::_unref
                    ((CowData<CollisionObject3D::ShapeData::ShapeBase> *)(pEVar7 + 0x78));
          Memory::free_static(pEVar7,false);
          pEVar7 = *(Element **)(this + 8);
        }
        pEVar3 = *(Element **)(pEVar2 + 8);
        if (pEVar3 != pEVar7) {
          pEVar5 = *(Element **)(pEVar3 + 0x10);
          if (pEVar5 != pEVar7) {
            pEVar6 = *(Element **)(pEVar5 + 0x10);
            if (pEVar7 != pEVar6) {
              _cleanup_tree(this,pEVar6);
              pEVar6 = *(Element **)(this + 8);
            }
            if (pEVar6 != *(Element **)(pEVar5 + 8)) {
              _cleanup_tree(this,*(Element **)(pEVar5 + 8));
            }
            CowData<CollisionObject3D::ShapeData::ShapeBase>::_unref
                      ((CowData<CollisionObject3D::ShapeData::ShapeBase> *)(pEVar5 + 0x78));
            Memory::free_static(pEVar5,false);
            pEVar7 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar3 + 8) != pEVar7) {
            _cleanup_tree(this,*(Element **)(pEVar3 + 8));
          }
          CowData<CollisionObject3D::ShapeData::ShapeBase>::_unref
                    ((CowData<CollisionObject3D::ShapeData::ShapeBase> *)(pEVar3 + 0x78));
          Memory::free_static(pEVar3,false);
        }
        CowData<CollisionObject3D::ShapeData::ShapeBase>::_unref
                  ((CowData<CollisionObject3D::ShapeData::ShapeBase> *)(pEVar2 + 0x78));
        Memory::free_static(pEVar2,false);
      }
      CowData<CollisionObject3D::ShapeData::ShapeBase>::_unref
                ((CowData<CollisionObject3D::ShapeData::ShapeBase> *)(pEVar1 + 0x78));
      Memory::free_static(pEVar1,false);
      pvVar4 = *(void **)this;
      pEVar2 = *(Element **)(this + 8);
    }
    *(Element **)((long)pvVar4 + 0x10) = pEVar2;
    *(undefined4 *)(this + 0x10) = 0;
    CowData<CollisionObject3D::ShapeData::ShapeBase>::_unref
              ((CowData<CollisionObject3D::ShapeData::ShapeBase> *)((long)pvVar4 + 0x78));
    Memory::free_static(pvVar4,false);
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RBMap<unsigned int, CollisionObject3D::ShapeData, Comparator<unsigned int>,
   DefaultAllocator>::operator[](unsigned int const&) */

long __thiscall
RBMap<unsigned_int,CollisionObject3D::ShapeData,Comparator<unsigned_int>,DefaultAllocator>::
operator[](RBMap<unsigned_int,CollisionObject3D::ShapeData,Comparator<unsigned_int>,DefaultAllocator>
           *this,uint *param_1)

{
  long lVar1;
  undefined4 *puVar2;
  long in_FS_OFFSET;
  undefined8 local_88;
  undefined8 local_80;
  ulong local_78;
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)this == 0) {
    puVar2 = (undefined4 *)operator_new(0x88,DefaultAllocator::alloc);
    local_60._0_8_ = _UNK_00123948;
    local_60._8_8_ = CONCAT44(_UNK_00123944,_LC27);
    uStack_40 = 0;
    *puVar2 = 0;
    *(undefined8 *)(puVar2 + 10) = 0;
    puVar2[0xc] = 0;
    *(undefined8 *)(puVar2 + 0xe) = 0;
    *(undefined8 *)(puVar2 + 0x1e) = 0;
    *(undefined1 *)(puVar2 + 0x20) = 0;
    *(undefined1 (*) [16])(puVar2 + 2) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(puVar2 + 6) = (undefined1  [16])0x0;
    *(undefined8 *)(puVar2 + 0x10) = local_60._8_8_;
    *(undefined8 *)(puVar2 + 0x12) = local_60._0_8_;
    *(undefined8 *)(puVar2 + 0x14) = local_60._8_8_;
    *(undefined8 *)(puVar2 + 0x16) = local_60._0_8_;
    *(undefined8 *)(puVar2 + 0x18) = 0x3f800000;
    *(undefined8 *)(puVar2 + 0x1a) = 0;
    *(undefined4 **)this = puVar2;
    local_50 = (undefined4)local_60._0_8_;
    local_4c = (undefined4)((ulong)local_60._0_8_ >> 0x20);
    uStack_48 = 0x3f800000;
    uStack_44 = 0;
    local_80 = 0;
    local_88 = 0;
    local_78 = local_78 & 0xffffffff00000000;
    local_70._8_8_ = 0;
    local_70._0_8_ = local_60._8_8_;
    local_70 = local_70 << 0x40;
    local_30 = 0;
    local_28 = 0;
    CowData<CollisionObject3D::ShapeData::ShapeBase>::_unref
              ((CowData<CollisionObject3D::ShapeData::ShapeBase> *)&local_30);
    CowData<CollisionObject3D::ShapeData::ShapeBase>::_unref
              ((CowData<CollisionObject3D::ShapeData::ShapeBase> *)&local_88);
    puVar2 = *(undefined4 **)this;
    lVar1 = *(long *)(this + 8);
    *puVar2 = 1;
    *(long *)(puVar2 + 2) = lVar1;
    *(long *)(puVar2 + 4) = lVar1;
    *(long *)(puVar2 + 6) = lVar1;
  }
  else {
    lVar1 = *(long *)(*(long *)this + 0x10);
  }
  for (; lVar1 != *(long *)(this + 8); lVar1 = *(long *)(lVar1 + 8)) {
    while (*param_1 < *(uint *)(lVar1 + 0x30)) {
      lVar1 = *(long *)(lVar1 + 0x10);
      if (*(long *)(this + 8) == lVar1) goto LAB_00115585;
    }
    if (*param_1 <= *(uint *)(lVar1 + 0x30)) goto LAB_001155f4;
  }
LAB_00115585:
  local_70 = ZEXT416(_LC27);
  local_30 = 0;
  local_78 = 0;
  local_50 = 0x3f800000;
  local_4c = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  local_38 = 0;
  local_60 = local_70;
  lVar1 = _insert(this,param_1,(ShapeData *)&local_78);
  CowData<CollisionObject3D::ShapeData::ShapeBase>::_unref
            ((CowData<CollisionObject3D::ShapeData::ShapeBase> *)&local_38);
LAB_001155f4:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar1 + 0x38;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x00115820) */
/* CollisionObject3D::_notificationv(int, bool) */

void __thiscall CollisionObject3D::_notificationv(CollisionObject3D *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    _notification(this,param_1);
    if ((code *)PTR__notification_0012a028 != Node::_notification) {
      Node3D::_notification(iVar1);
    }
    Node::_notification(iVar1);
    return;
  }
  Node::_notification(iVar1);
  if ((code *)PTR__notification_0012a028 != Node::_notification) {
    Node3D::_notification(iVar1);
  }
  _notification(this,param_1);
  return;
}



/* RBMap<unsigned int, CollisionObject3D::ShapeData, Comparator<unsigned int>,
   DefaultAllocator>::_erase_fix_rb(RBMap<unsigned int, CollisionObject3D::ShapeData,
   Comparator<unsigned int>, DefaultAllocator>::Element*) */

void __thiscall
RBMap<unsigned_int,CollisionObject3D::ShapeData,Comparator<unsigned_int>,DefaultAllocator>::
_erase_fix_rb(RBMap<unsigned_int,CollisionObject3D::ShapeData,Comparator<unsigned_int>,DefaultAllocator>
              *this,Element *param_1)

{
  int iVar1;
  Element *pEVar2;
  long lVar3;
  long lVar4;
  undefined4 *puVar5;
  Element *pEVar6;
  Element *pEVar7;
  Element *pEVar8;
  Element *pEVar9;
  
  pEVar8 = *(Element **)(this + 8);
  pEVar2 = *(Element **)(*(long *)this + 0x10);
  pEVar9 = *(Element **)(param_1 + 0x18);
  pEVar7 = pEVar8;
  do {
    pEVar6 = pEVar9;
    if (pEVar2 == pEVar7) {
LAB_001159a0:
      iVar1 = *(int *)pEVar8;
joined_r0x00115a63:
      if (iVar1 != 1) {
        _err_print_error("_erase_fix_rb","./core/templates/rb_map.h",0x202,
                         "Condition \"_data._nil->color != BLACK\" is true.",0,0);
        return;
      }
      return;
    }
    pEVar9 = param_1;
    if (*(int *)param_1 != 0) {
LAB_00115949:
      pEVar7 = *(Element **)(pEVar9 + 0x10);
      if (*(int *)pEVar7 == 1) goto LAB_00115956;
LAB_00115a00:
      if (pEVar9 != *(Element **)(pEVar6 + 8)) {
        iVar1 = *(int *)pEVar6;
        pEVar7 = pEVar9;
        goto joined_r0x00115a0f;
      }
      if (**(int **)(pEVar9 + 8) == 1) {
        *(int *)pEVar7 = 1;
        if (pEVar9 == pEVar8) {
          _err_print_error("_set_color","./core/templates/rb_map.h",0xed,
                           "Condition \"p_node == _data._nil && p_color == RED\" is true.",0,0);
          pEVar8 = *(Element **)(this + 8);
          pEVar7 = *(Element **)(pEVar9 + 0x10);
        }
        else {
          *(int *)pEVar9 = 0;
        }
        pEVar2 = *(Element **)(pEVar7 + 8);
        *(Element **)(pEVar9 + 0x10) = pEVar2;
        if (pEVar2 != pEVar8) {
          *(Element **)(pEVar2 + 0x18) = pEVar9;
        }
        lVar3 = *(long *)(pEVar9 + 0x18);
        *(long *)(pEVar7 + 0x18) = lVar3;
        if (pEVar9 == *(Element **)(lVar3 + 8)) {
          *(Element **)(lVar3 + 8) = pEVar7;
        }
        else {
          *(Element **)(lVar3 + 0x10) = pEVar7;
        }
        *(Element **)(pEVar7 + 8) = pEVar9;
        *(Element **)(pEVar9 + 0x18) = pEVar7;
        pEVar9 = pEVar7;
      }
LAB_00115bf1:
      if ((pEVar9 == pEVar8) && (*(int *)pEVar6 == 0)) {
        _err_print_error("_set_color","./core/templates/rb_map.h",0xed,
                         "Condition \"p_node == _data._nil && p_color == RED\" is true.",0,0);
        pEVar8 = *(Element **)(this + 8);
      }
      else {
        *(int *)pEVar9 = *(int *)pEVar6;
      }
      puVar5 = *(undefined4 **)(pEVar9 + 8);
      *(int *)pEVar6 = 1;
      *puVar5 = 1;
      lVar3 = *(long *)(pEVar6 + 8);
      pEVar2 = *(Element **)(lVar3 + 0x10);
      *(Element **)(pEVar6 + 8) = pEVar2;
      if (pEVar2 != pEVar8) {
        *(Element **)(pEVar2 + 0x18) = pEVar6;
      }
      lVar4 = *(long *)(pEVar6 + 0x18);
      *(long *)(lVar3 + 0x18) = lVar4;
      if (pEVar6 == *(Element **)(lVar4 + 0x10)) {
        *(long *)(lVar4 + 0x10) = lVar3;
      }
      else {
        *(long *)(lVar4 + 8) = lVar3;
      }
      *(Element **)(lVar3 + 0x10) = pEVar6;
      *(long *)(pEVar6 + 0x18) = lVar3;
      goto LAB_001159a0;
    }
    *(int *)param_1 = 1;
    if (pEVar6 == pEVar8) {
      _err_print_error("_set_color","./core/templates/rb_map.h",0xed,
                       "Condition \"p_node == _data._nil && p_color == RED\" is true.",0,0);
      pEVar8 = *(Element **)(this + 8);
    }
    else {
      *(int *)pEVar6 = 0;
    }
    if (*(Element **)(pEVar6 + 8) != param_1) {
      lVar3 = *(long *)(pEVar6 + 0x10);
      pEVar9 = *(Element **)(param_1 + 8);
      pEVar7 = *(Element **)(lVar3 + 8);
      *(Element **)(pEVar6 + 0x10) = pEVar7;
      if (pEVar7 != pEVar8) {
        *(Element **)(pEVar7 + 0x18) = pEVar6;
      }
      lVar4 = *(long *)(pEVar6 + 0x18);
      *(long *)(lVar3 + 0x18) = lVar4;
      if (pEVar6 == *(Element **)(lVar4 + 8)) {
        *(long *)(lVar4 + 8) = lVar3;
      }
      else {
        *(long *)(lVar4 + 0x10) = lVar3;
      }
      *(Element **)(lVar3 + 8) = pEVar6;
      *(long *)(pEVar6 + 0x18) = lVar3;
      goto LAB_00115949;
    }
    pEVar9 = *(Element **)(param_1 + 0x10);
    *(Element **)(pEVar6 + 8) = pEVar9;
    if (pEVar9 != pEVar8) {
      *(Element **)(pEVar9 + 0x18) = pEVar6;
    }
    lVar3 = *(long *)(pEVar6 + 0x18);
    *(long *)(param_1 + 0x18) = lVar3;
    if (pEVar6 == *(Element **)(lVar3 + 0x10)) {
      *(Element **)(lVar3 + 0x10) = param_1;
    }
    else {
      *(Element **)(lVar3 + 8) = param_1;
    }
    *(Element **)(param_1 + 0x10) = pEVar6;
    *(Element **)(pEVar6 + 0x18) = param_1;
    pEVar7 = *(Element **)(pEVar9 + 0x10);
    if (*(int *)pEVar7 != 1) goto LAB_00115a00;
LAB_00115956:
    pEVar7 = *(Element **)(pEVar9 + 8);
    if (*(int *)pEVar7 != 1) {
      if (*(Element **)(pEVar6 + 8) == pEVar9) goto LAB_00115bf1;
      *(int *)pEVar7 = 1;
      if (pEVar9 == pEVar8) {
        _err_print_error("_set_color","./core/templates/rb_map.h",0xed,
                         "Condition \"p_node == _data._nil && p_color == RED\" is true.",0,0);
        pEVar8 = *(Element **)(this + 8);
        pEVar7 = *(Element **)(pEVar9 + 8);
      }
      else {
        *(int *)pEVar9 = 0;
      }
      pEVar2 = *(Element **)(pEVar7 + 0x10);
      *(Element **)(pEVar9 + 8) = pEVar2;
      if (pEVar2 != pEVar8) {
        *(Element **)(pEVar2 + 0x18) = pEVar9;
      }
      lVar3 = *(long *)(pEVar9 + 0x18);
      *(long *)(pEVar7 + 0x18) = lVar3;
      if (pEVar9 == *(Element **)(lVar3 + 0x10)) {
        *(Element **)(lVar3 + 0x10) = pEVar7;
      }
      else {
        *(Element **)(lVar3 + 8) = pEVar7;
      }
      *(Element **)(pEVar7 + 0x10) = pEVar9;
      *(Element **)(pEVar9 + 0x18) = pEVar7;
      iVar1 = *(int *)pEVar6;
joined_r0x00115a0f:
      if ((iVar1 == 0) && (pEVar7 == pEVar8)) {
        _err_print_error("_set_color","./core/templates/rb_map.h",0xed,
                         "Condition \"p_node == _data._nil && p_color == RED\" is true.",0,0);
        pEVar8 = *(Element **)(this + 8);
      }
      else {
        *(int *)pEVar7 = iVar1;
      }
      puVar5 = *(undefined4 **)(pEVar7 + 0x10);
      *(int *)pEVar6 = 1;
      *puVar5 = 1;
      lVar3 = *(long *)(pEVar6 + 0x10);
      pEVar2 = *(Element **)(lVar3 + 8);
      *(Element **)(pEVar6 + 0x10) = pEVar2;
      if (pEVar2 != pEVar8) {
        *(Element **)(pEVar2 + 0x18) = pEVar6;
      }
      lVar4 = *(long *)(pEVar6 + 0x18);
      *(long *)(lVar3 + 0x18) = lVar4;
      if (pEVar6 == *(Element **)(lVar4 + 8)) {
        *(long *)(lVar4 + 8) = lVar3;
      }
      else {
        *(long *)(lVar4 + 0x10) = lVar3;
      }
      iVar1 = *(int *)pEVar8;
      *(Element **)(lVar3 + 8) = pEVar6;
      *(long *)(pEVar6 + 0x18) = lVar3;
      goto joined_r0x00115a63;
    }
    if (pEVar9 == pEVar8) {
      _err_print_error("_set_color","./core/templates/rb_map.h",0xed,
                       "Condition \"p_node == _data._nil && p_color == RED\" is true.",0,0);
      iVar1 = *(int *)pEVar6;
      pEVar8 = *(Element **)(this + 8);
    }
    else {
      *(int *)pEVar9 = 0;
      iVar1 = *(int *)pEVar6;
    }
    if (iVar1 == 0) {
      *(int *)pEVar6 = 1;
      goto LAB_001159a0;
    }
    pEVar9 = *(Element **)(pEVar6 + 0x18);
    param_1 = *(Element **)(pEVar9 + 0x10);
    pEVar7 = pEVar6;
    if (param_1 == pEVar6) {
      param_1 = *(Element **)(pEVar9 + 8);
    }
  } while( true );
}



/* RBMap<unsigned int, CollisionObject3D::ShapeData, Comparator<unsigned int>,
   DefaultAllocator>::_erase(RBMap<unsigned int, CollisionObject3D::ShapeData, Comparator<unsigned
   int>, DefaultAllocator>::Element*) */

void __thiscall
RBMap<unsigned_int,CollisionObject3D::ShapeData,Comparator<unsigned_int>,DefaultAllocator>::_erase
          (RBMap<unsigned_int,CollisionObject3D::ShapeData,Comparator<unsigned_int>,DefaultAllocator>
           *this,Element *param_1)

{
  int *piVar1;
  Element *pEVar2;
  Element *pEVar3;
  int *piVar4;
  char *pcVar5;
  long lVar6;
  undefined8 uVar7;
  Element *pEVar8;
  Element *pEVar9;
  
  piVar4 = *(int **)(param_1 + 0x10);
  piVar1 = *(int **)(this + 8);
  pEVar8 = param_1;
  if (piVar4 == piVar1) {
LAB_00115ed0:
    lVar6 = *(long *)(pEVar8 + 0x18);
    piVar4 = *(int **)(pEVar8 + 8);
    pEVar9 = *(Element **)(lVar6 + 0x10);
    if (pEVar9 == pEVar8) goto LAB_00115ee5;
LAB_00115ded:
    *(int **)(lVar6 + 8) = piVar4;
  }
  else {
    if (piVar1 != *(int **)(param_1 + 8)) {
      pEVar8 = *(Element **)(param_1 + 0x20);
      piVar4 = *(int **)(pEVar8 + 0x10);
      if (piVar1 == piVar4) goto LAB_00115ed0;
    }
    lVar6 = *(long *)(pEVar8 + 0x18);
    pEVar9 = *(Element **)(lVar6 + 0x10);
    if (pEVar9 != pEVar8) goto LAB_00115ded;
LAB_00115ee5:
    *(int **)(lVar6 + 0x10) = piVar4;
    pEVar9 = *(Element **)(lVar6 + 8);
  }
  if (*piVar4 == 0) {
    *(long *)(piVar4 + 6) = lVar6;
    *piVar4 = 1;
  }
  else if ((*(int *)pEVar8 == 1) && (lVar6 != *(long *)this)) {
    _erase_fix_rb(this,pEVar9);
  }
  if (pEVar8 != param_1) {
    pEVar9 = *(Element **)(this + 8);
    if (pEVar9 == pEVar8) {
      uVar7 = 0x21a;
      pcVar5 = "Condition \"rp == _data._nil\" is true.";
      goto LAB_00115f1a;
    }
    uVar7 = *(undefined8 *)(param_1 + 0x10);
    pEVar2 = *(Element **)(param_1 + 0x10);
    pEVar3 = *(Element **)(param_1 + 8);
    *(undefined8 *)(pEVar8 + 8) = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(pEVar8 + 0x10) = uVar7;
    *(undefined8 *)(pEVar8 + 0x18) = *(undefined8 *)(param_1 + 0x18);
    *(int *)pEVar8 = *(int *)param_1;
    if (pEVar9 != pEVar2) {
      *(Element **)(pEVar2 + 0x18) = pEVar8;
    }
    if (pEVar9 != pEVar3) {
      *(Element **)(pEVar3 + 0x18) = pEVar8;
    }
    lVar6 = *(long *)(param_1 + 0x18);
    if (*(Element **)(lVar6 + 0x10) == param_1) {
      *(Element **)(lVar6 + 0x10) = pEVar8;
    }
    else {
      *(Element **)(lVar6 + 8) = pEVar8;
    }
  }
  lVar6 = *(long *)(param_1 + 0x20);
  if (lVar6 != 0) {
    *(undefined8 *)(lVar6 + 0x28) = *(undefined8 *)(param_1 + 0x28);
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    *(long *)(*(long *)(param_1 + 0x28) + 0x20) = lVar6;
  }
  CowData<CollisionObject3D::ShapeData::ShapeBase>::_unref
            ((CowData<CollisionObject3D::ShapeData::ShapeBase> *)(param_1 + 0x78));
  Memory::free_static(param_1,false);
  *(int *)(this + 0x10) = *(int *)(this + 0x10) + -1;
  if (**(int **)(this + 8) != 0) {
    return;
  }
  uVar7 = 0x237;
  pcVar5 = "Condition \"_data._nil->color == RED\" is true.";
LAB_00115f1a:
  _err_print_error("_erase","./core/templates/rb_map.h",uVar7,pcVar5,0,0);
  return;
}



/* CowData<CollisionObject3D::ShapeData::ShapeBase>::_realloc(long) */

undefined8 __thiscall
CowData<CollisionObject3D::ShapeData::ShapeBase>::_realloc
          (CowData<CollisionObject3D::ShapeData::ShapeBase> *this,long param_1)

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
/* Error CowData<CollisionObject3D::ShapeData::ShapeBase>::resize<false>(long) */

undefined8 __thiscall
CowData<CollisionObject3D::ShapeData::ShapeBase>::resize<false>
          (CowData<CollisionObject3D::ShapeData::ShapeBase> *this,long param_1)

{
  long lVar1;
  Object *pOVar2;
  code *pcVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  
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
    lVar8 = 0;
    lVar10 = 0;
  }
  else {
    lVar8 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar8) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    lVar10 = lVar8 * 0x18;
    if (lVar10 != 0) {
      uVar11 = lVar10 - 1U | lVar10 - 1U >> 1;
      uVar11 = uVar11 | uVar11 >> 2;
      uVar11 = uVar11 | uVar11 >> 4;
      uVar11 = uVar11 | uVar11 >> 8;
      uVar11 = uVar11 | uVar11 >> 0x10;
      lVar10 = (uVar11 | uVar11 >> 0x20) + 1;
    }
  }
  if (param_1 * 0x18 == 0) {
LAB_001162a0:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar11 = param_1 * 0x18 - 1;
  uVar11 = uVar11 >> 1 | uVar11;
  uVar11 = uVar11 | uVar11 >> 2;
  uVar11 = uVar11 | uVar11 >> 4;
  uVar11 = uVar11 | uVar11 >> 8;
  uVar11 = uVar11 | uVar11 >> 0x10;
  uVar11 = uVar11 | uVar11 >> 0x20;
  lVar12 = uVar11 + 1;
  if (lVar12 == 0) goto LAB_001162a0;
  if (param_1 <= lVar8) {
    lVar8 = *(long *)this;
    uVar11 = param_1;
    while (lVar8 != 0) {
      if (*(ulong *)(lVar8 + -8) <= uVar11) {
LAB_0011612a:
        if (lVar12 != lVar10) {
          uVar5 = _realloc(this,lVar12);
          if ((int)uVar5 != 0) {
            return uVar5;
          }
          lVar8 = *(long *)this;
          if (lVar8 == 0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
        }
        *(long *)(lVar8 + -8) = param_1;
        return 0;
      }
      while (lVar1 = lVar8 + uVar11 * 0x18, *(long *)(lVar1 + 8) == 0) {
        uVar11 = uVar11 + 1;
        if (*(ulong *)(lVar8 + -8) <= uVar11) goto LAB_0011612a;
      }
      cVar4 = RefCounted::unreference();
      if (cVar4 != '\0') {
        pOVar2 = *(Object **)(lVar1 + 8);
        cVar4 = predelete_handler(pOVar2);
        if (cVar4 != '\0') {
          (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
          Memory::free_static(pOVar2,false);
        }
      }
      uVar11 = uVar11 + 1;
      lVar8 = *(long *)this;
    }
    goto LAB_001160f6;
  }
  if (lVar12 == lVar10) {
LAB_00116213:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
LAB_001160f6:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar8 = puVar9[-1];
    if (param_1 <= lVar8) goto LAB_001161ef;
  }
  else {
    if (lVar8 != 0) {
      uVar5 = _realloc(this,lVar12);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      goto LAB_00116213;
    }
    puVar6 = (undefined8 *)Memory::alloc_static(uVar11 + 0x11,false);
    if (puVar6 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar9 = puVar6 + 2;
    *puVar6 = 1;
    puVar6[1] = 0;
    *(undefined8 **)this = puVar9;
    lVar8 = 0;
  }
  puVar6 = puVar9 + lVar8 * 3;
  do {
    *puVar6 = 0;
    puVar7 = puVar6 + 3;
    puVar6[1] = 0;
    *(undefined4 *)(puVar6 + 2) = 0;
    puVar6 = puVar7;
  } while (puVar7 != puVar9 + param_1 * 3);
LAB_001161ef:
  puVar9[-1] = param_1;
  return 0;
}



/* WARNING: Removing unreachable block (ram,0x00116488) */
/* WARNING: Removing unreachable block (ram,0x0011661d) */
/* WARNING: Removing unreachable block (ram,0x00116629) */
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



/* MethodBindTRC<unsigned int, int>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<unsigned_int,int>::validated_call
          (MethodBindTRC<unsigned_int,int> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  uint uVar1;
  code *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
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
      local_50 = 0;
      local_40 = 0x35;
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
      goto LAB_001167ab;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60),*(undefined4 *)(*param_2 + 8));
  *(ulong *)(param_3 + 8) = (ulong)uVar1;
LAB_001167ab:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<unsigned int, int>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<unsigned_int,int>::ptrcall
          (MethodBindTRC<unsigned_int,int> *this,Object *param_1,void **param_2,void *param_3)

{
  uint uVar1;
  code *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
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
      local_50 = 0;
      local_40 = 0x35;
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
      goto LAB_0011698a;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
                    /* WARNING: Load size is inaccurate */
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60),**param_2);
  *(ulong *)param_3 = (ulong)uVar1;
LAB_0011698a:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<unsigned int, int>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<unsigned_int,int>::validated_call
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
      goto LAB_00116cf9;
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
                    /* WARNING: Could not recover jumptable at 0x00116b83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8),*(undefined4 *)(*(long *)(param_3 + 8) + 8));
    return;
  }
LAB_00116cf9:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<unsigned int, int>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<unsigned_int,int>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_00116ed9;
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
                    /* WARNING: Could not recover jumptable at 0x00116d61. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3,
               **(undefined4 **)((long)param_3 + 8));
    return;
  }
LAB_00116ed9:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<int, unsigned int, int>::validated_call(Object*, Variant const**, Variant*) const
    */

void __thiscall
MethodBindTRC<int,unsigned_int,int>::validated_call
          (MethodBindTRC<int,unsigned_int,int> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  int iVar1;
  code *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
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
      local_50 = 0;
      local_40 = 0x35;
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
      goto LAB_00116f31;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  iVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60),*(undefined4 *)(*param_2 + 8),
                    *(undefined4 *)(param_2[1] + 8));
  *(long *)(param_3 + 8) = (long)iVar1;
LAB_00116f31:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<int, unsigned int, int>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<int,unsigned_int,int>::ptrcall
          (MethodBindTRC<int,unsigned_int,int> *this,Object *param_1,void **param_2,void *param_3)

{
  int iVar1;
  code *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
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
      local_50 = 0;
      local_40 = 0x35;
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
      goto LAB_0011710e;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Load size is inaccurate */
  iVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60),**param_2,*param_2[1]);
  *(long *)param_3 = (long)iVar1;
LAB_0011710e:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<int, unsigned int>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<int,unsigned_int>::validated_call
          (MethodBindTRC<int,unsigned_int> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  int iVar1;
  code *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
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
      local_50 = 0;
      local_40 = 0x35;
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
      goto LAB_001172ea;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  iVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60),*(undefined4 *)(*param_2 + 8));
  *(long *)(param_3 + 8) = (long)iVar1;
LAB_001172ea:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<int, unsigned int>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<int,unsigned_int>::ptrcall
          (MethodBindTRC<int,unsigned_int> *this,Object *param_1,void **param_2,void *param_3)

{
  int iVar1;
  code *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
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
      local_50 = 0;
      local_40 = 0x35;
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
      goto LAB_001174c8;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
                    /* WARNING: Load size is inaccurate */
  iVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60),**param_2);
  *(long *)param_3 = (long)iVar1;
LAB_001174c8:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool, unsigned int>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<bool,unsigned_int>::validated_call
          (MethodBindTRC<bool,unsigned_int> *this,Object *param_1,Variant **param_2,Variant *param_3
          )

{
  Variant VVar1;
  code *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
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
      local_50 = 0;
      local_40 = 0x35;
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
      goto LAB_001176a8;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  VVar1 = (Variant)(*pcVar2)(param_1 + *(long *)(this + 0x60),*(undefined4 *)(*param_2 + 8));
  param_3[8] = VVar1;
LAB_001176a8:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool, unsigned int>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<bool,unsigned_int>::ptrcall
          (MethodBindTRC<bool,unsigned_int> *this,Object *param_1,void **param_2,void *param_3)

{
  undefined1 uVar1;
  code *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
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
      local_50 = 0;
      local_40 = 0x35;
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
      goto LAB_00117887;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
                    /* WARNING: Load size is inaccurate */
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60),**param_2);
  *(undefined1 *)param_3 = uVar1;
LAB_00117887:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<unsigned int, bool>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<unsigned_int,bool>::validated_call
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
      goto LAB_00117c01;
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
                    /* WARNING: Could not recover jumptable at 0x00117a86. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8),*(undefined1 *)(*(long *)(param_3 + 8) + 8));
    return;
  }
LAB_00117c01:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<unsigned int, bool>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<unsigned_int,bool>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_00117df1;
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
                    /* WARNING: Could not recover jumptable at 0x00117c7a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3,
               **(char **)((long)param_3 + 8) != '\0');
    return;
  }
LAB_00117df1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Object*, unsigned int>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<Object*,unsigned_int>::validated_call
          (MethodBindTRC<Object*,unsigned_int> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
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
      local_50 = 0;
      local_40 = 0x35;
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
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00117fe1;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar1)(param_1 + *(long *)(this + 0x60),*(undefined4 *)(*param_2 + 8));
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    Variant::ObjData::ref_pointer((Object *)(param_3 + 8));
    return;
  }
LAB_00117fe1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Transform3D, unsigned int>::validated_call(Object*, Variant const**, Variant*)
   const */

void __thiscall
MethodBindTRC<Transform3D,unsigned_int>::validated_call
          (MethodBindTRC<Transform3D,unsigned_int> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
  long local_88;
  undefined8 local_80;
  char *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_78,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_78 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_78 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_80 = 0;
      local_70 = 0x35;
      String::parse_latin1((StrRange *)&local_80);
      vformat<StringName>((StringName *)&local_78,(StrRange *)&local_80,&local_88);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_78,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      if ((StringName::configured != '\0') && (local_88 != 0)) {
        StringName::unref();
      }
      goto LAB_0011805a;
    }
    if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar2)(&local_68,param_1 + *(long *)(this + 0x60),*(undefined4 *)(*param_2 + 8));
  puVar1 = *(undefined8 **)(param_3 + 8);
  *puVar1 = local_68;
  puVar1[1] = uStack_60;
  puVar1[2] = local_58;
  puVar1[3] = uStack_50;
  puVar1[4] = local_48;
  puVar1[5] = uStack_40;
LAB_0011805a:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Transform3D, unsigned int>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Transform3D,unsigned_int>::ptrcall
          (MethodBindTRC<Transform3D,unsigned_int> *this,Object *param_1,void **param_2,
          void *param_3)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  long local_88;
  undefined8 local_80;
  char *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_78,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar2 = *(long **)(param_1 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_78 == (char *)*plVar2) {
      if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_78 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_80 = 0;
      local_70 = 0x35;
      String::parse_latin1((StrRange *)&local_80);
      vformat<StringName>((StringName *)&local_78,(StrRange *)&local_80,&local_88);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_78,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      if ((StringName::configured != '\0') && (local_88 != 0)) {
        StringName::unref();
      }
      goto LAB_00118257;
    }
    if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
                    /* WARNING: Load size is inaccurate */
  (*pcVar1)(&local_68,param_1 + *(long *)(this + 0x60),**param_2);
  *(undefined8 *)param_3 = local_68;
  *(undefined8 *)((long)param_3 + 8) = uStack_60;
  *(undefined8 *)((long)param_3 + 0x10) = local_58;
  *(undefined8 *)((long)param_3 + 0x18) = uStack_50;
  *(undefined8 *)((long)param_3 + 0x20) = local_48;
  *(undefined8 *)((long)param_3 + 0x28) = uStack_40;
LAB_00118257:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<unsigned int, Transform3D const&>::validated_call(Object*, Variant const**, Variant*)
   const */

void MethodBindT<unsigned_int,Transform3D_const&>::validated_call
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
      goto LAB_001185d1;
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
                    /* WARNING: Could not recover jumptable at 0x00118457. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8),*(undefined8 *)(*(long *)(param_3 + 8) + 8));
    return;
  }
LAB_001185d1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<unsigned int, Transform3D const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<unsigned_int,Transform3D_const&>::ptrcall
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
      goto LAB_001187b9;
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
                    /* WARNING: Could not recover jumptable at 0x00118642. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3,
               *(undefined8 *)((long)param_3 + 8));
    return;
  }
LAB_001187b9:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Vector<int>>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTR<Vector<int>>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  Variant *pVVar3;
  long *plVar4;
  undefined4 in_register_00000014;
  long *plVar5;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  long local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
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
      _err_print_error(&_LC77,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00118950;
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
      (*(code *)pVVar3)(&local_58);
      Variant::Variant((Variant *)local_48,(Vector *)&local_58);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      lVar2 = local_50;
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
      if (local_50 != 0) {
        LOCK();
        plVar5 = (long *)(local_50 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
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
LAB_00118950:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Vector<int>>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTR<Vector<int>>::validated_call
          (MethodBindTR<Vector<int>> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  Variant **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  Variant **local_48;
  long local_40 [2];
  long local_30;
  
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
    if (local_48 == (Variant **)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Variant **)0x116678;
      local_40[0] = 0x35;
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
      goto LAB_00118bbb;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    param_2 = *(Variant ***)(param_1 + *(long *)(this + 0x60));
    pcVar2 = *(code **)(pcVar2 + (long)param_2 + -1);
  }
  (*pcVar2)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  if (*(long *)(*(long *)(param_3 + 8) + 0x18) != local_40[0]) {
    CowData<int>::_ref((CowData<int> *)(*(long *)(param_3 + 8) + 0x18),(CowData *)local_40);
  }
  lVar1 = local_40[0];
  if (local_40[0] != 0) {
    LOCK();
    plVar3 = (long *)(local_40[0] + -0x10);
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      local_40[0] = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
LAB_00118bbb:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Vector<int>>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<Vector<int>>::ptrcall
          (MethodBindTR<Vector<int>> *this,Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  void **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  void **local_48;
  long local_40 [2];
  long local_30;
  
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
    if (local_48 == (void **)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (void **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (void **)0x116678;
      local_40[0] = 0x35;
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
      goto LAB_00118db7;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (void **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    param_2 = *(void ***)(param_1 + *(long *)(this + 0x60));
    pcVar2 = *(code **)(pcVar2 + (long)param_2 + -1);
  }
  (*pcVar2)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  if (*(long *)((long)param_3 + 8) != local_40[0]) {
    CowData<int>::_ref((CowData<int> *)((long)param_3 + 8),(CowData *)local_40);
  }
  lVar1 = local_40[0];
  if (local_40[0] != 0) {
    LOCK();
    plVar3 = (long *)(local_40[0] + -0x10);
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      local_40[0] = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
LAB_00118db7:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<unsigned int, Object*>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTR<unsigned_int,Object*>::validated_call
          (MethodBindTR<unsigned_int,Object*> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  uint uVar1;
  code *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
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
      local_50 = 0;
      local_40 = 0x35;
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
      goto LAB_00118f6c;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60),*(undefined8 *)(*param_2 + 0x10));
  *(ulong *)(param_3 + 8) = (ulong)uVar1;
LAB_00118f6c:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<RID>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<RID>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

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
      _err_print_error(&_LC77,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_001191d0;
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
      local_58 = (char *)(*(code *)pVVar2)();
      Variant::Variant((Variant *)local_48,(RID *)&local_58);
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
LAB_001191d0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<RID>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<RID>::validated_call
          (MethodBindTRC<RID> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  undefined8 uVar1;
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
      goto LAB_001193e2;
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
  *(undefined8 *)(param_3 + 8) = uVar1;
LAB_001193e2:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<RID>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<RID>::ptrcall(MethodBindTRC<RID> *this,Object *param_1,void **param_2,void *param_3)

{
  undefined8 uVar1;
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
      goto LAB_00119591;
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
  *(undefined8 *)param_3 = uVar1;
LAB_00119591:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
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
      _err_print_error(&_LC77,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_001197c0;
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
LAB_001197c0:
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
      goto LAB_001199d2;
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
LAB_001199d2:
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
      goto LAB_00119b81;
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
LAB_00119b81:
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
      goto LAB_00119ec1;
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
                    /* WARNING: Could not recover jumptable at 0x00119d4d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined1 *)(*(long *)param_3 + 8));
    return;
  }
LAB_00119ec1:
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
      goto LAB_0011a0a9;
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
                    /* WARNING: Could not recover jumptable at 0x00119f32. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3 != '\0');
    return;
  }
LAB_0011a0a9:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<CollisionObject3D::DisableMode>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTRC<CollisionObject3D::DisableMode>::call
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
      _err_print_error(&_LC77,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0011a170;
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
LAB_0011a170:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<CollisionObject3D::DisableMode>::validated_call(Object*, Variant const**, Variant*)
   const */

void __thiscall
MethodBindTRC<CollisionObject3D::DisableMode>::validated_call
          (MethodBindTRC<CollisionObject3D::DisableMode> *this,Object *param_1,Variant **param_2,
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
      goto LAB_0011a384;
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
LAB_0011a384:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<CollisionObject3D::DisableMode>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<CollisionObject3D::DisableMode>::ptrcall
          (MethodBindTRC<CollisionObject3D::DisableMode> *this,Object *param_1,void **param_2,
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
      goto LAB_0011a533;
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
LAB_0011a533:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<CollisionObject3D::DisableMode>::validated_call(Object*, Variant const**, Variant*)
   const */

void MethodBindT<CollisionObject3D::DisableMode>::validated_call
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
      goto LAB_0011a871;
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
                    /* WARNING: Could not recover jumptable at 0x0011a6fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8));
    return;
  }
LAB_0011a871:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<CollisionObject3D::DisableMode>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<CollisionObject3D::DisableMode>::ptrcall
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
      goto LAB_0011aa51;
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
                    /* WARNING: Could not recover jumptable at 0x0011a8db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_0011aa51:
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
      _err_print_error(&_LC77,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0011ab20;
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
LAB_0011ab20:
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
      goto LAB_0011ad38;
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
LAB_0011ad38:
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
      goto LAB_0011aef7;
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
LAB_0011aef7:
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
      goto LAB_0011b249;
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
                    /* WARNING: Could not recover jumptable at 0x0011b0d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(auVar2._0_8_,(long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_0011b249:
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
      goto LAB_0011b429;
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
                    /* WARNING: Could not recover jumptable at 0x0011b2b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(auVar2._0_8_,(long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_0011b429:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool, int>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<bool,int>::validated_call
          (MethodBindTRC<bool,int> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  Variant VVar1;
  code *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
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
      local_50 = 0;
      local_40 = 0x35;
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
      goto LAB_0011b478;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  VVar1 = (Variant)(*pcVar2)(param_1 + *(long *)(this + 0x60),*(undefined4 *)(*param_2 + 8));
  param_3[8] = VVar1;
LAB_0011b478:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool, int>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<bool,int>::ptrcall
          (MethodBindTRC<bool,int> *this,Object *param_1,void **param_2,void *param_3)

{
  undefined1 uVar1;
  code *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
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
      local_50 = 0;
      local_40 = 0x35;
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
      goto LAB_0011b657;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
                    /* WARNING: Load size is inaccurate */
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60),**param_2);
  *(undefined1 *)param_3 = uVar1;
LAB_0011b657:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, bool>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<int,bool>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

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
      goto LAB_0011b9d1;
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
                    /* WARNING: Could not recover jumptable at 0x0011b856. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8),*(undefined1 *)(*(long *)(param_3 + 8) + 8));
    return;
  }
LAB_0011b9d1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, bool>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<int,bool>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_0011bbc1;
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
                    /* WARNING: Could not recover jumptable at 0x0011ba4a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3,
               **(char **)((long)param_3 + 8) != '\0');
    return;
  }
LAB_0011bbc1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<unsigned int>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<unsigned_int>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  uint uVar2;
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
      _err_print_error(&_LC77,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0011bc90;
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
      uVar2 = (*(code *)pVVar3)();
      Variant::Variant((Variant *)local_48,uVar2);
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
LAB_0011bc90:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<unsigned int>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<unsigned_int>::validated_call
          (MethodBindTRC<unsigned_int> *this,Object *param_1,Variant **param_2,Variant *param_3)

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
      goto LAB_0011bea4;
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
LAB_0011bea4:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<unsigned int>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<unsigned_int>::ptrcall
          (MethodBindTRC<unsigned_int> *this,Object *param_1,void **param_2,void *param_3)

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
      goto LAB_0011c053;
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
LAB_0011c053:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<unsigned int>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<unsigned_int>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

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
      goto LAB_0011c391;
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
                    /* WARNING: Could not recover jumptable at 0x0011c21c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8));
    return;
  }
LAB_0011c391:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<unsigned int>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<unsigned_int>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_0011c571;
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
                    /* WARNING: Could not recover jumptable at 0x0011c3fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_0011c571:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<Shape3D>, unsigned int, int>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Ref<Shape3D>,unsigned_int,int>::ptrcall
          (MethodBindTRC<Ref<Shape3D>,unsigned_int,int> *this,Object *param_1,void **param_2,
          void *param_3)

{
  char cVar1;
  code *pcVar2;
  Object *pOVar3;
  long *plVar4;
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
      local_48 = (Object *)0x116678;
      local_50 = 0;
      local_40 = 0x35;
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
      goto LAB_0011c641;
    }
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Load size is inaccurate */
  (*pcVar2)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),**param_2,*param_2[1]);
  if (local_48 == (Object *)0x0) {
                    /* WARNING: Load size is inaccurate */
    pOVar5 = *param_3;
    if (pOVar5 == (Object *)0x0) goto LAB_0011c641;
    *(undefined8 *)param_3 = 0;
    goto LAB_0011c681;
  }
  pOVar3 = (Object *)__dynamic_cast(local_48,&Object::typeinfo,&RefCounted::typeinfo,0);
                    /* WARNING: Load size is inaccurate */
  pOVar5 = *param_3;
  if (pOVar5 != pOVar3) {
    *(Object **)param_3 = pOVar3;
    if (pOVar3 == (Object *)0x0) {
      if (pOVar5 != (Object *)0x0) goto LAB_0011c681;
    }
    else {
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        *(undefined8 *)param_3 = 0;
      }
      if (pOVar5 != (Object *)0x0) {
LAB_0011c681:
        cVar1 = RefCounted::unreference();
        if (cVar1 != '\0') {
          cVar1 = predelete_handler(pOVar5);
          if (cVar1 != '\0') {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
        }
      }
      if (local_48 == (Object *)0x0) goto LAB_0011c641;
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
LAB_0011c641:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<unsigned int, Ref<Shape3D> const&>::validated_call(Object*, Variant const**,
   Variant*) const */

void MethodBindT<unsigned_int,Ref<Shape3D>const&>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  long lVar1;
  Object *pOVar2;
  char cVar3;
  Object *pOVar4;
  Variant *pVVar5;
  code *pcVar6;
  long in_FS_OFFSET;
  long local_78;
  undefined8 local_70;
  Object *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar5 = param_2[0x23];
      if (pVVar5 == (Variant *)0x0) {
        pVVar5 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar5 = param_2[1] + 0x20;
    }
    if (local_68 == (Object *)*(long *)pVVar5) {
      if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = (Object *)0x116678;
      local_60 = 0x35;
      local_70 = 0;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_0011c969;
    }
    if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar6 = *(code **)(param_1 + 0x58);
  lVar1 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar6 & 1) != 0) {
    pcVar6 = *(code **)(pcVar6 + *(long *)((long)param_2 + lVar1) + -1);
  }
  Variant::Variant((Variant *)local_58,*(Object **)(*(long *)(param_3 + 8) + 0x10));
  local_68 = (Object *)0x0;
  pOVar4 = (Object *)Variant::get_validated_object();
  pOVar2 = local_68;
  if (pOVar4 != local_68) {
    if (pOVar4 == (Object *)0x0) {
      if (local_68 != (Object *)0x0) {
        local_68 = (Object *)0x0;
LAB_0011c920:
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
      pOVar4 = (Object *)__dynamic_cast(pOVar4,&Object::typeinfo,&Shape3D::typeinfo,0);
      if (pOVar2 != pOVar4) {
        local_68 = pOVar4;
        if (pOVar4 != (Object *)0x0) {
          cVar3 = RefCounted::reference();
          if (cVar3 == '\0') {
            local_68 = (Object *)0x0;
          }
        }
        if (pOVar2 != (Object *)0x0) goto LAB_0011c920;
      }
    }
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  (*pcVar6)((long *)((long)param_2 + lVar1),*(undefined4 *)(*(long *)param_3 + 8),
            (StringName *)&local_68);
  if (local_68 != (Object *)0x0) {
    cVar3 = RefCounted::unreference();
    pOVar2 = local_68;
    if (cVar3 != '\0') {
      cVar3 = predelete_handler(local_68);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
  }
LAB_0011c969:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<unsigned int, Ref<Shape3D> const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<unsigned_int,Ref<Shape3D>const&>::ptrcall
               (Object *param_1,void **param_2,void *param_3)

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
      local_48 = (Object *)0x116678;
      local_40 = 0x35;
      local_50 = 0;
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
      goto LAB_0011cc18;
    }
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar5 = *(code **)(param_1 + 0x58);
  lVar1 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar5 & 1) != 0) {
    pcVar5 = *(code **)(pcVar5 + *(long *)((long)param_2 + lVar1) + -1);
  }
  if ((*(long **)((long)param_3 + 8) == (long *)0x0) ||
     (local_48 = (Object *)**(long **)((long)param_3 + 8), local_48 == (Object *)0x0)) {
LAB_0011cbed:
    local_48 = (Object *)0x0;
  }
  else {
    cVar3 = RefCounted::init_ref();
    if (cVar3 == '\0') goto LAB_0011cbed;
  }
                    /* WARNING: Load size is inaccurate */
  (*pcVar5)((long *)((long)param_2 + lVar1),**param_3,(StringName *)&local_48);
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
LAB_0011cc18:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Object*, unsigned int>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Object*,unsigned_int>::ptrcall
          (MethodBindTRC<Object*,unsigned_int> *this,Object *param_1,void **param_2,void *param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  long *plVar3;
  long in_FS_OFFSET;
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
      local_50 = 0;
      local_40 = 0x35;
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
      goto LAB_0011cdf8;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
                    /* WARNING: Load size is inaccurate */
  uVar2 = (*pcVar1)(param_1 + *(long *)(this + 0x60),**param_2);
  *(undefined8 *)param_3 = uVar2;
LAB_0011cdf8:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<unsigned int, Object*>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<unsigned_int,Object*>::ptrcall
          (MethodBindTR<unsigned_int,Object*> *this,Object *param_1,void **param_2,void *param_3)

{
  uint uVar1;
  code *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
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
      local_50 = 0;
      local_40 = 0x35;
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
      goto LAB_0011cfe0;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  plVar3 = (long *)*param_2;
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  if (plVar3 != (long *)0x0) {
    plVar3 = (long *)*plVar3;
  }
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60),plVar3);
  *(ulong *)param_3 = (ulong)uVar1;
LAB_0011cfe0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool, int>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<bool,int>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  bool bVar6;
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
  undefined8 local_60;
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
      _err_print_error(&_LC77,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0011d2a0;
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
      if (in_R8D != 1) goto LAB_0011d2e0;
LAB_0011d2d0:
      pVVar12 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar12 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0011d2e0:
        uVar8 = 4;
        goto LAB_0011d295;
      }
      if (in_R8D == 1) goto LAB_0011d2d0;
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
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar12,2);
    uVar4 = _LC78;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    iVar7 = Variant::operator_cast_to_int(pVVar12);
    bVar6 = (bool)(*(code *)pVVar13)((Variant *)((long)plVar11 + (long)pVVar1),iVar7);
    Variant::Variant((Variant *)local_48,bVar6);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_48[0];
    *(undefined8 *)(param_1 + 8) = local_40;
    *(undefined8 *)(param_1 + 0x10) = uStack_38;
  }
  else {
    uVar8 = 3;
LAB_0011d295:
    *in_R9 = uVar8;
    in_R9[2] = 1;
  }
LAB_0011d2a0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<unsigned int, int>::call(Object*, Variant const**, int, Callable::CallError&) const
    */

Object * MethodBindTRC<unsigned_int,int>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
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
  undefined8 local_60;
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
      _err_print_error(&_LC77,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0011d620;
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
      if (in_R8D != 1) goto LAB_0011d660;
LAB_0011d650:
      pVVar12 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar12 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0011d660:
        uVar8 = 4;
        goto LAB_0011d615;
      }
      if (in_R8D == 1) goto LAB_0011d650;
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
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar12,2);
    uVar4 = _LC78;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    iVar6 = Variant::operator_cast_to_int(pVVar12);
    uVar7 = (*(code *)pVVar13)((Variant *)((long)plVar11 + (long)pVVar1),iVar6);
    Variant::Variant((Variant *)local_48,uVar7);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_48[0];
    *(undefined8 *)(param_1 + 8) = local_40;
    *(undefined8 *)(param_1 + 0x10) = uStack_38;
  }
  else {
    uVar8 = 3;
LAB_0011d615:
    *in_R9 = uVar8;
    in_R9[2] = 1;
  }
LAB_0011d620:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Transform3D, unsigned int>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTRC<Transform3D,unsigned_int>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  uint uVar6;
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
  long local_a8;
  undefined8 local_a0;
  char *local_98;
  undefined8 local_90;
  undefined4 local_88 [2];
  undefined8 local_80;
  undefined8 uStack_78;
  Transform3D local_68 [56];
  long local_30;
  
  plVar10 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar10 != (long *)0x0) && (plVar10[1] != 0)) && (*(char *)(plVar10[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_98,(StringName *)(param_2 + 3));
    if (plVar10[1] == 0) {
      plVar8 = (long *)plVar10[0x23];
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)(**(code **)(*plVar10 + 0x40))(plVar10);
      }
    }
    else {
      plVar8 = (long *)(plVar10[1] + 0x20);
    }
    if (local_98 == (char *)*plVar8) {
      if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_98 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_a0 = 0;
      local_90 = 0x35;
      String::parse_latin1((StrRange *)&local_a0);
      vformat<StringName>((StringName *)&local_98,(StrRange *)&local_a0,&local_a8);
      _err_print_error(&_LC77,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_98,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
      if ((StringName::configured != '\0') && (local_a8 != 0)) {
        StringName::unref();
      }
      goto LAB_0011d9b0;
    }
    if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar12 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar11 = param_2[5];
    if (pVVar11 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_0011da00;
LAB_0011d9f0:
      pVVar11 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar11 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0011da00:
        uVar7 = 4;
        goto LAB_0011d9a5;
      }
      if (in_R8D == 1) goto LAB_0011d9f0;
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
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar11,2);
    uVar4 = _LC78;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    uVar6 = Variant::operator_cast_to_unsigned_int(pVVar11);
    (*(code *)pVVar12)(local_68,(Variant *)((long)plVar10 + (long)pVVar1),uVar6);
    Variant::Variant((Variant *)local_88,local_68);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_88[0];
    *(undefined8 *)(param_1 + 8) = local_80;
    *(undefined8 *)(param_1 + 0x10) = uStack_78;
  }
  else {
    uVar7 = 3;
LAB_0011d9a5:
    *in_R9 = uVar7;
    in_R9[2] = 1;
  }
LAB_0011d9b0:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindTRC<Object*, unsigned int>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindTRC<Object*,unsigned_int>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  uint uVar6;
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
  long local_68;
  undefined8 local_60;
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
      _err_print_error(&_LC77,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0011dd40;
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
      if (in_R8D != 1) goto LAB_0011dd80;
LAB_0011dd70:
      pVVar12 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar12 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0011dd80:
        uVar7 = 4;
        goto LAB_0011dd35;
      }
      if (in_R8D == 1) goto LAB_0011dd70;
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
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar12,2);
    uVar4 = _LC78;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    uVar6 = Variant::operator_cast_to_unsigned_int(pVVar12);
    pOVar8 = (Object *)(*(code *)pVVar13)((Variant *)((long)plVar11 + (long)pVVar1),uVar6);
    Variant::Variant((Variant *)local_48,pOVar8);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_48[0];
    *(undefined8 *)(param_1 + 8) = local_40;
    *(undefined8 *)(param_1 + 0x10) = uStack_38;
  }
  else {
    uVar7 = 3;
LAB_0011dd35:
    *in_R9 = uVar7;
    in_R9[2] = 1;
  }
LAB_0011dd40:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool, unsigned int>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindTRC<bool,unsigned_int>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
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
  undefined8 local_60;
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
      _err_print_error(&_LC77,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0011e0c0;
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
      if (in_R8D != 1) goto LAB_0011e100;
LAB_0011e0f0:
      pVVar12 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar12 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0011e100:
        uVar8 = 4;
        goto LAB_0011e0b5;
      }
      if (in_R8D == 1) goto LAB_0011e0f0;
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
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar12,2);
    uVar4 = _LC78;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    uVar7 = Variant::operator_cast_to_unsigned_int(pVVar12);
    bVar6 = (bool)(*(code *)pVVar13)((Variant *)((long)plVar11 + (long)pVVar1),uVar7);
    Variant::Variant((Variant *)local_48,bVar6);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_48[0];
    *(undefined8 *)(param_1 + 8) = local_40;
    *(undefined8 *)(param_1 + 0x10) = uStack_38;
  }
  else {
    uVar8 = 3;
LAB_0011e0b5:
    *in_R9 = uVar8;
    in_R9[2] = 1;
  }
LAB_0011e0c0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<int, unsigned int>::call(Object*, Variant const**, int, Callable::CallError&) const
    */

Object * MethodBindTRC<int,unsigned_int>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  uint uVar6;
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
  undefined8 local_60;
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
      _err_print_error(&_LC77,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0011e440;
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
      if (in_R8D != 1) goto LAB_0011e480;
LAB_0011e470:
      pVVar12 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar12 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0011e480:
        uVar8 = 4;
        goto LAB_0011e435;
      }
      if (in_R8D == 1) goto LAB_0011e470;
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
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar12,2);
    uVar4 = _LC78;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    uVar6 = Variant::operator_cast_to_unsigned_int(pVVar12);
    iVar7 = (*(code *)pVVar13)((Variant *)((long)plVar11 + (long)pVVar1),uVar6);
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
LAB_0011e435:
    *in_R9 = uVar8;
    in_R9[2] = 1;
  }
LAB_0011e440:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<Shape3D>, unsigned int, int>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTRC<Ref<Shape3D>,unsigned_int,int>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  Object *pOVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  long *plVar10;
  long lVar11;
  Variant *pVVar12;
  undefined4 in_register_00000014;
  long *plVar13;
  Variant *this;
  int iVar14;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar15;
  long in_FS_OFFSET;
  long local_78;
  undefined8 local_70;
  Object *local_68;
  undefined8 local_60;
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  plVar13 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar13 != (long *)0x0) && (plVar13[1] != 0)) && (*(char *)(plVar13[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar13[1] == 0) {
      plVar10 = (long *)plVar13[0x23];
      if (plVar10 == (long *)0x0) {
        plVar10 = (long *)(**(code **)(*plVar13 + 0x40))(plVar13);
      }
    }
    else {
      plVar10 = (long *)(plVar13[1] + 0x20);
    }
    if (local_68 == (Object *)*plVar10) {
      if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = (Object *)0x116678;
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC77,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_0011e828;
    }
    if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pVVar15 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 3) {
    pVVar12 = param_2[5];
    iVar7 = 2 - in_R8D;
    if (pVVar12 == (Variant *)0x0) {
      if (iVar7 != 0) goto LAB_0011e868;
      this = *(Variant **)param_4;
LAB_0011e87d:
      pVVar12 = *(Variant **)(param_4 + 8);
    }
    else {
      lVar2 = *(long *)(pVVar12 + -8);
      iVar14 = (int)lVar2;
      if (iVar14 < iVar7) {
LAB_0011e868:
        uVar9 = 4;
        goto LAB_0011e855;
      }
      if (in_R8D == 0) {
        lVar11 = (long)(iVar14 + -2);
        if (lVar2 <= lVar11) goto LAB_0011e970;
        this = pVVar12 + lVar11 * 0x18;
      }
      else {
        this = *(Variant **)param_4;
        if (in_R8D == 2) goto LAB_0011e87d;
      }
      lVar11 = (long)(int)((in_R8D ^ 1) + (iVar14 - iVar7));
      if (lVar2 <= lVar11) {
LAB_0011e970:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar11,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar12 = pVVar12 + lVar11 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar15 & 1) != 0) {
      pVVar15 = *(Variant **)(pVVar15 + *(long *)((long)plVar13 + (long)pVVar1) + -1);
    }
    cVar6 = Variant::can_convert_strict(*(undefined4 *)pVVar12,2);
    uVar4 = _LC193;
    if (cVar6 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    iVar7 = Variant::operator_cast_to_int(pVVar12);
    cVar6 = Variant::can_convert_strict(*(undefined4 *)this,2);
    uVar4 = _LC78;
    if (cVar6 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    uVar8 = Variant::operator_cast_to_unsigned_int(this);
    (*(code *)pVVar15)(&local_68,(Variant *)((long)plVar13 + (long)pVVar1),uVar8,iVar7);
    Variant::Variant((Variant *)local_58,local_68);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_58[0];
    *(undefined8 *)(param_1 + 8) = local_50;
    *(undefined8 *)(param_1 + 0x10) = uStack_48;
    if (((local_68 != (Object *)0x0) &&
        (cVar6 = RefCounted::unreference(), pOVar5 = local_68, cVar6 != '\0')) &&
       (cVar6 = predelete_handler(local_68), cVar6 != '\0')) {
      (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
      Memory::free_static(pOVar5,false);
    }
  }
  else {
    uVar9 = 3;
LAB_0011e855:
    *in_R9 = uVar9;
    in_R9[2] = 2;
  }
LAB_0011e828:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindT<unsigned int, Ref<Shape3D> const&>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindT<unsigned_int,Ref<Shape3D>const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  Object *pOVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  Object *pOVar10;
  long *plVar11;
  long lVar12;
  undefined4 in_register_00000014;
  long *plVar13;
  Variant *this;
  int iVar14;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar15;
  Variant *pVVar16;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  Object *local_58;
  undefined8 local_50;
  long local_40;
  
  plVar13 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar13 != (long *)0x0) && (plVar13[1] != 0)) && (*(char *)(plVar13[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar13[1] == 0) {
      plVar11 = (long *)plVar13[0x23];
      if (plVar11 == (long *)0x0) {
        plVar11 = (long *)(**(code **)(*plVar13 + 0x40))(plVar13);
      }
    }
    else {
      plVar11 = (long *)(plVar13[1] + 0x20);
    }
    if (local_58 == (Object *)*plVar11) {
      if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = (Object *)0x116678;
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC77,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0011ed40;
    }
    if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pVVar15 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (2 < in_R8D) {
    uVar9 = 3;
LAB_0011ed35:
    *in_R9 = uVar9;
    in_R9[2] = 2;
    goto LAB_0011ed40;
  }
  pVVar16 = param_2[5];
  iVar7 = 2 - in_R8D;
  if (pVVar16 == (Variant *)0x0) {
    if (iVar7 != 0) goto LAB_0011ed78;
    this = *(Variant **)param_4;
LAB_0011ed8d:
    pVVar16 = *(Variant **)(param_4 + 8);
  }
  else {
    lVar2 = *(long *)(pVVar16 + -8);
    iVar14 = (int)lVar2;
    if (iVar14 < iVar7) {
LAB_0011ed78:
      uVar9 = 4;
      goto LAB_0011ed35;
    }
    if (in_R8D == 0) {
      lVar12 = (long)(iVar14 + -2);
      if (lVar2 <= lVar12) goto LAB_0011eeb0;
      this = pVVar16 + lVar12 * 0x18;
    }
    else {
      this = *(Variant **)param_4;
      if (in_R8D == 2) goto LAB_0011ed8d;
    }
    lVar12 = (long)(int)((in_R8D ^ 1) + (iVar14 - iVar7));
    if (lVar2 <= lVar12) {
LAB_0011eeb0:
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,lVar12,lVar2,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    pVVar16 = pVVar16 + lVar12 * 0x18;
  }
  *in_R9 = 0;
  if (((ulong)pVVar15 & 1) != 0) {
    pVVar15 = *(Variant **)(pVVar15 + *(long *)((long)plVar13 + (long)pVVar1) + -1);
  }
  cVar6 = Variant::can_convert_strict(*(undefined4 *)pVVar16);
  uVar4 = _LC195;
  if (cVar6 == '\0') {
    *in_R9 = 2;
    *(undefined8 *)(in_R9 + 1) = uVar4;
  }
  local_58 = (Object *)0x0;
  pOVar10 = (Object *)Variant::get_validated_object();
  pOVar5 = local_58;
  if (pOVar10 != local_58) {
    if (pOVar10 == (Object *)0x0) {
      if (local_58 != (Object *)0x0) {
        local_58 = (Object *)0x0;
LAB_0011eca9:
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
      pOVar10 = (Object *)__dynamic_cast(pOVar10,&Object::typeinfo,&Shape3D::typeinfo,0);
      if (pOVar5 != pOVar10) {
        local_58 = pOVar10;
        if (pOVar10 != (Object *)0x0) {
          cVar6 = RefCounted::reference();
          if (cVar6 == '\0') {
            local_58 = (Object *)0x0;
          }
        }
        if (pOVar5 != (Object *)0x0) goto LAB_0011eca9;
      }
    }
  }
  cVar6 = Variant::can_convert_strict(*(undefined4 *)this,2);
  uVar4 = _LC78;
  if (cVar6 == '\0') {
    *in_R9 = 2;
    *(undefined8 *)(in_R9 + 1) = uVar4;
  }
  uVar8 = Variant::operator_cast_to_unsigned_int(this);
  (*(code *)pVVar15)((Variant *)((long)plVar13 + (long)pVVar1),uVar8,&local_58);
  if (local_58 != (Object *)0x0) {
    cVar6 = RefCounted::unreference();
    pOVar5 = local_58;
    if (cVar6 != '\0') {
      cVar6 = predelete_handler(local_58);
      if (cVar6 != '\0') {
        (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
        Memory::free_static(pOVar5,false);
      }
    }
  }
LAB_0011ed40:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<unsigned int, Object*>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindTR<unsigned_int,Object*>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  uint uVar6;
  undefined4 uVar7;
  Object *pOVar8;
  long *plVar9;
  Object *pOVar10;
  long lVar11;
  undefined4 in_register_00000014;
  long *plVar12;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar13;
  Variant *pVVar14;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
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
      plVar9 = (long *)plVar12[0x23];
      if (plVar9 == (long *)0x0) {
        plVar9 = (long *)(**(code **)(*plVar12 + 0x40))(plVar12);
      }
    }
    else {
      plVar9 = (long *)(plVar12[1] + 0x20);
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
      _err_print_error(&_LC77,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0011f130;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar13 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (1 < in_R8D) {
    uVar7 = 3;
LAB_0011f125:
    *in_R9 = uVar7;
    in_R9[2] = 1;
    goto LAB_0011f130;
  }
  pVVar14 = param_2[5];
  if (pVVar14 == (Variant *)0x0) {
    if (in_R8D != 1) goto LAB_0011f170;
LAB_0011f160:
    pVVar14 = *(Variant **)param_4;
  }
  else {
    lVar2 = *(long *)(pVVar14 + -8);
    if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0011f170:
      uVar7 = 4;
      goto LAB_0011f125;
    }
    if (in_R8D == 1) goto LAB_0011f160;
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
    pVVar14 = pVVar14 + lVar11 * 0x18;
  }
  *in_R9 = 0;
  if (((ulong)pVVar13 & 1) != 0) {
    pVVar13 = *(Variant **)(pVVar13 + *(long *)((long)plVar12 + (long)pVVar1) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar14,0x18);
  if (cVar5 == '\0') {
LAB_0011f0c6:
    uVar4 = _LC79;
    *in_R9 = 2;
    *(undefined8 *)(in_R9 + 1) = uVar4;
  }
  else {
    pOVar8 = Variant::operator_cast_to_Object_(pVVar14);
    pOVar10 = Variant::operator_cast_to_Object_(pVVar14);
    if ((pOVar10 == (Object *)0x0) && (pOVar8 != (Object *)0x0)) goto LAB_0011f0c6;
  }
  pOVar8 = Variant::operator_cast_to_Object_(pVVar14);
  uVar6 = (*(code *)pVVar13)((Variant *)((long)plVar12 + (long)pVVar1),pOVar8);
  Variant::Variant((Variant *)local_48,uVar6);
  if (Variant::needs_deinit[*(int *)param_1] != '\0') {
    Variant::_clear_internal();
  }
  *(undefined4 *)param_1 = local_48[0];
  *(undefined8 *)(param_1 + 8) = local_40;
  *(undefined8 *)(param_1 + 0x10) = uStack_38;
LAB_0011f130:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindTRC<Ref<Shape3D>, unsigned int, int>::validated_call(Object*, Variant const**,
   Variant*) const */

void __thiscall
MethodBindTRC<Ref<Shape3D>,unsigned_int,int>::validated_call
          (MethodBindTRC<Ref<Shape3D>,unsigned_int,int> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  Object *pOVar1;
  char cVar2;
  code *pcVar3;
  long *plVar4;
  long in_FS_OFFSET;
  long local_58;
  Object *local_50;
  char *local_48;
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
    if (local_48 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
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
      goto LAB_0011f423;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar3)(&local_50,param_1 + *(long *)(this + 0x60),*(undefined4 *)(*param_2 + 8),
            *(undefined4 *)(param_2[1] + 8));
  if (local_50 == (Object *)0x0) {
    Variant::ObjData::unref();
  }
  else {
    local_48 = *(char **)(local_50 + 0x60);
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
LAB_0011f423:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, unsigned int, int>(__UnexistingClass*, void
   (__UnexistingClass::*)(unsigned int, int), Variant const**, int, Callable::CallError&,
   Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,unsigned_int,int>
               (__UnexistingClass *param_1,_func_void_uint_int *param_2,Variant **param_3,
               int param_4,CallError *param_5,Vector *param_6)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 in_register_0000000c;
  long *plVar9;
  long lVar10;
  Variant *this;
  int iVar11;
  Variant *this_00;
  long in_stack_00000008;
  
  plVar9 = (long *)CONCAT44(in_register_0000000c,param_4);
  uVar7 = (uint)param_5;
  if (2 < uVar7) {
    uVar8 = 3;
    goto LAB_0011f71d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  iVar6 = 2 - uVar7;
  if (lVar1 == 0) {
    if (iVar6 == 0) {
      this = (Variant *)*plVar9;
LAB_0011f74d:
      this_00 = (Variant *)plVar9[1];
      goto LAB_0011f685;
    }
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    iVar11 = (int)lVar2;
    if (iVar6 <= iVar11) {
      if (uVar7 == 0) {
        lVar10 = (long)(iVar11 + -2);
        if (lVar2 <= lVar10) goto LAB_0011f768;
        this = (Variant *)(lVar1 + lVar10 * 0x18);
      }
      else {
        this = (Variant *)*plVar9;
        if (uVar7 == 2) goto LAB_0011f74d;
      }
      lVar10 = (long)(int)((uVar7 ^ 1) + (iVar11 - iVar6));
      if (lVar2 <= lVar10) {
LAB_0011f768:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar10,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      this_00 = (Variant *)(lVar1 + lVar10 * 0x18);
LAB_0011f685:
      *(undefined4 *)param_6 = 0;
      if (((ulong)param_2 & 1) != 0) {
        param_2 = *(_func_void_uint_int **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
      }
      cVar5 = Variant::can_convert_strict(*(undefined4 *)this_00,2);
      uVar4 = _LC193;
      if (cVar5 == '\0') {
        *(undefined4 *)param_6 = 2;
        *(undefined8 *)(param_6 + 4) = uVar4;
      }
      Variant::operator_cast_to_int(this_00);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
      uVar4 = _LC78;
      if (cVar5 == '\0') {
        *(undefined4 *)param_6 = 2;
        *(undefined8 *)(param_6 + 4) = uVar4;
      }
      uVar7 = Variant::operator_cast_to_unsigned_int(this);
                    /* WARNING: Could not recover jumptable at 0x0011f70b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*param_2)((uint)(param_1 + (long)param_3),uVar7);
      return;
    }
  }
  uVar8 = 4;
LAB_0011f71d:
  *(undefined4 *)param_6 = uVar8;
  *(undefined4 *)(param_6 + 8) = 2;
  return;
}



/* MethodBindT<unsigned int, int>::call(Object*, Variant const**, int, Callable::CallError&) const
    */

Object * MethodBindT<unsigned_int,int>::call
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
      _err_print_error(&_LC77,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_0011f806;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,unsigned_int,int>
            (p_Var2,(_func_void_uint_int *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8,
             in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_0011f806:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_retc_dv<__UnexistingClass, int, unsigned int,
   int>(__UnexistingClass*, int (__UnexistingClass::*)(unsigned int, int) const, Variant const**,
   int, Variant&, Callable::CallError&, Vector<Variant> const&) */

void call_with_variant_args_retc_dv<__UnexistingClass,int,unsigned_int,int>
               (__UnexistingClass *param_1,_func_int_uint_int *param_2,Variant **param_3,int param_4
               ,Variant *param_5,CallError *param_6,Vector *param_7)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 in_register_0000000c;
  long *plVar8;
  long lVar9;
  Variant *this;
  int iVar10;
  int iVar11;
  Variant *this_00;
  long in_FS_OFFSET;
  long in_stack_00000010;
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  plVar8 = (long *)CONCAT44(in_register_0000000c,param_4);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar6 = (uint)param_5;
  if (uVar6 < 3) {
    lVar1 = *(long *)(in_stack_00000010 + 8);
    iVar10 = 2 - uVar6;
    if (lVar1 == 0) {
      if (iVar10 != 0) goto LAB_0011fb48;
      this = (Variant *)*plVar8;
LAB_0011fb9d:
      this_00 = (Variant *)plVar8[1];
    }
    else {
      lVar2 = *(long *)(lVar1 + -8);
      iVar11 = (int)lVar2;
      if (iVar11 < iVar10) {
LAB_0011fb48:
        uVar7 = 4;
        goto LAB_0011fb4d;
      }
      if (uVar6 == 0) {
        lVar9 = (long)(iVar11 + -2);
        if (lVar2 <= lVar9) goto LAB_0011fbb8;
        this = (Variant *)(lVar1 + lVar9 * 0x18);
      }
      else {
        this = (Variant *)*plVar8;
        if (uVar6 == 2) goto LAB_0011fb9d;
      }
      lVar9 = (long)(int)((iVar11 - iVar10) + (uVar6 ^ 1));
      if (lVar2 <= lVar9) {
LAB_0011fbb8:
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
    *(undefined4 *)param_7 = 0;
    if (((ulong)param_2 & 1) != 0) {
      param_2 = *(_func_int_uint_int **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)this_00,2);
    uVar4 = _LC193;
    if (cVar5 == '\0') {
      *(undefined4 *)param_7 = 2;
      *(undefined8 *)(param_7 + 4) = uVar4;
    }
    Variant::operator_cast_to_int(this_00);
    cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
    uVar4 = _LC78;
    if (cVar5 == '\0') {
      *(undefined4 *)param_7 = 2;
      *(undefined8 *)(param_7 + 4) = uVar4;
    }
    uVar6 = Variant::operator_cast_to_unsigned_int(this);
    iVar10 = (*param_2)((uint)(param_1 + (long)param_3),uVar6);
    Variant::Variant((Variant *)local_58,iVar10);
    if (Variant::needs_deinit[*(int *)param_6] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_6 = local_58[0];
    *(undefined8 *)(param_6 + 8) = local_50;
    *(undefined8 *)(param_6 + 0x10) = uStack_48;
  }
  else {
    uVar7 = 3;
LAB_0011fb4d:
    *(undefined4 *)param_7 = uVar7;
    *(undefined4 *)(param_7 + 8) = 2;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<int, unsigned int, int>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindTRC<int,unsigned_int,int>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long *plVar1;
  undefined4 in_register_00000014;
  __UnexistingClass *p_Var2;
  Variant *in_R8;
  Vector *in_R9;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  p_Var2 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
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
    in_R8 = (Variant *)((ulong)in_R8 & 0xffffffff);
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
      _err_print_error(&_LC77,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011fc76;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_retc_dv<__UnexistingClass,int,unsigned_int,int>
            (p_Var2,(_func_int_uint_int *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8,
             (CallError *)param_1,in_R9);
LAB_0011fc76:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, unsigned int, bool>(__UnexistingClass*, void
   (__UnexistingClass::*)(unsigned int, bool), Variant const**, int, Callable::CallError&,
   Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,unsigned_int,bool>
               (__UnexistingClass *param_1,_func_void_uint_bool *param_2,Variant **param_3,
               int param_4,CallError *param_5,Vector *param_6)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 in_register_0000000c;
  long *plVar9;
  long lVar10;
  Variant *this;
  int iVar11;
  Variant *this_00;
  long in_stack_00000008;
  
  plVar9 = (long *)CONCAT44(in_register_0000000c,param_4);
  uVar7 = (uint)param_5;
  if (2 < uVar7) {
    uVar8 = 3;
    goto LAB_0011ff5d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  iVar6 = 2 - uVar7;
  if (lVar1 == 0) {
    if (iVar6 == 0) {
      this = (Variant *)*plVar9;
LAB_0011ff8d:
      this_00 = (Variant *)plVar9[1];
      goto LAB_0011fec5;
    }
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    iVar11 = (int)lVar2;
    if (iVar6 <= iVar11) {
      if (uVar7 == 0) {
        lVar10 = (long)(iVar11 + -2);
        if (lVar2 <= lVar10) goto LAB_0011ffa8;
        this = (Variant *)(lVar1 + lVar10 * 0x18);
      }
      else {
        this = (Variant *)*plVar9;
        if (uVar7 == 2) goto LAB_0011ff8d;
      }
      lVar10 = (long)(int)((uVar7 ^ 1) + (iVar11 - iVar6));
      if (lVar2 <= lVar10) {
LAB_0011ffa8:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar10,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      this_00 = (Variant *)(lVar1 + lVar10 * 0x18);
LAB_0011fec5:
      *(undefined4 *)param_6 = 0;
      if (((ulong)param_2 & 1) != 0) {
        param_2 = *(_func_void_uint_bool **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
      }
      cVar5 = Variant::can_convert_strict(*(undefined4 *)this_00,1);
      uVar4 = _LC49;
      if (cVar5 == '\0') {
        *(undefined4 *)param_6 = 2;
        *(undefined8 *)(param_6 + 4) = uVar4;
      }
      Variant::operator_cast_to_bool(this_00);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
      uVar4 = _LC78;
      if (cVar5 == '\0') {
        *(undefined4 *)param_6 = 2;
        *(undefined8 *)(param_6 + 4) = uVar4;
      }
      uVar7 = Variant::operator_cast_to_unsigned_int(this);
                    /* WARNING: Could not recover jumptable at 0x0011ff4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*param_2)((uint)(param_1 + (long)param_3),SUB41(uVar7,0));
      return;
    }
  }
  uVar8 = 4;
LAB_0011ff5d:
  *(undefined4 *)param_6 = uVar8;
  *(undefined4 *)(param_6 + 8) = 2;
  return;
}



/* MethodBindT<unsigned int, bool>::call(Object*, Variant const**, int, Callable::CallError&) const
    */

Object * MethodBindT<unsigned_int,bool>::call
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
      _err_print_error(&_LC77,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_00120046;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,unsigned_int,bool>
            (p_Var2,(_func_void_uint_bool *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8
             ,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_00120046:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, unsigned int, Transform3D
   const&>(__UnexistingClass*, void (__UnexistingClass::*)(unsigned int, Transform3D const&),
   Variant const**, int, Callable::CallError&, Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,unsigned_int,Transform3D_const&>
               (__UnexistingClass *param_1,_func_void_uint_Transform3D_ptr *param_2,
               Variant **param_3,int param_4,CallError *param_5,Vector *param_6)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 in_register_0000000c;
  long *plVar9;
  long lVar10;
  Variant *this;
  int iVar11;
  undefined4 *puVar12;
  long in_FS_OFFSET;
  long in_stack_00000008;
  Variant aVStack_78 [56];
  long local_40;
  
  plVar9 = (long *)CONCAT44(in_register_0000000c,param_4);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar7 = (uint)param_5;
  if (uVar7 < 3) {
    lVar1 = *(long *)(in_stack_00000008 + 8);
    iVar6 = 2 - uVar7;
    if (lVar1 == 0) {
      if (iVar6 != 0) goto LAB_00120348;
      this = (Variant *)*plVar9;
LAB_0012039d:
      puVar12 = (undefined4 *)plVar9[1];
    }
    else {
      lVar2 = *(long *)(lVar1 + -8);
      iVar11 = (int)lVar2;
      if (iVar11 < iVar6) {
LAB_00120348:
        uVar8 = 4;
        goto LAB_0012034d;
      }
      if (uVar7 == 0) {
        lVar10 = (long)(iVar11 + -2);
        if (lVar2 <= lVar10) goto LAB_001203b8;
        this = (Variant *)(lVar1 + lVar10 * 0x18);
      }
      else {
        this = (Variant *)*plVar9;
        if (uVar7 == 2) goto LAB_0012039d;
      }
      lVar10 = (long)(int)((uVar7 ^ 1) + (iVar11 - iVar6));
      if (lVar2 <= lVar10) {
LAB_001203b8:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar10,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      puVar12 = (undefined4 *)(lVar1 + lVar10 * 0x18);
    }
    *(undefined4 *)param_6 = 0;
    if (((ulong)param_2 & 1) != 0) {
      param_2 = *(_func_void_uint_Transform3D_ptr **)
                 (param_2 + *(long *)(param_1 + (long)param_3) + -1);
    }
    cVar5 = Variant::can_convert_strict(*puVar12,0x12);
    uVar4 = _LC196;
    if (cVar5 == '\0') {
      *(undefined4 *)param_6 = 2;
      *(undefined8 *)(param_6 + 4) = uVar4;
    }
    Variant::operator_cast_to_Transform3D(aVStack_78);
    cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
    uVar4 = _LC78;
    if (cVar5 == '\0') {
      *(undefined4 *)param_6 = 2;
      *(undefined8 *)(param_6 + 4) = uVar4;
    }
    uVar7 = Variant::operator_cast_to_unsigned_int(this);
    (*param_2)((uint)(param_1 + (long)param_3),(Transform3D *)uVar7);
  }
  else {
    uVar8 = 3;
LAB_0012034d:
    *(undefined4 *)param_6 = uVar8;
    *(undefined4 *)(param_6 + 8) = 2;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<unsigned int, Transform3D const&>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindT<unsigned_int,Transform3D_const&>::call
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
      _err_print_error(&_LC77,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_00120456;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,unsigned_int,Transform3D_const&>
            (p_Var2,(_func_void_uint_Transform3D_ptr *)param_2[0xb],(Variant **)param_2[0xc],
             (int)param_4,in_R8,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_00120456:
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
    goto LAB_0012071d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_00120780;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_00120780:
      uVar6 = 4;
LAB_0012071d:
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
      goto LAB_0012069b;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0012069b:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_bool **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,1);
  uVar4 = _LC197;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_bool(this);
                    /* WARNING: Could not recover jumptable at 0x001206f7. Too many branches */
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
      _err_print_error(&_LC77,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_001207e6;
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
LAB_001207e6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass,
   CollisionObject3D::DisableMode>(__UnexistingClass*, void
   (__UnexistingClass::*)(CollisionObject3D::DisableMode), Variant const**, int,
   Callable::CallError&, Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,CollisionObject3D::DisableMode>
               (__UnexistingClass *param_1,_func_void_DisableMode *param_2,Variant **param_3,
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
    goto LAB_00120aad;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_00120b10;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_00120b10:
      uVar6 = 4;
LAB_00120aad:
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
      goto LAB_00120a2b;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_00120a2b:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_DisableMode **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
  uVar4 = _LC78;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_long(this);
                    /* WARNING: Could not recover jumptable at 0x00120a86. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)((char)(param_1 + (long)param_3));
  return;
}



/* MethodBindT<CollisionObject3D::DisableMode>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindT<CollisionObject3D::DisableMode>::call
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
      _err_print_error(&_LC77,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_00120b76;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,CollisionObject3D::DisableMode>
            (p_Var2,(_func_void_DisableMode *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,
             in_R8,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_00120b76:
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
    goto LAB_00120e3d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_00120ea0;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_00120ea0:
      uVar6 = 4;
LAB_00120e3d:
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
      goto LAB_00120dbb;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_00120dbb:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_float **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,3);
  uVar4 = _LC198;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  fVar9 = Variant::operator_cast_to_float(this);
                    /* WARNING: Could not recover jumptable at 0x00120e14. Too many branches */
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
      _err_print_error(&_LC77,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_00120f06;
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
LAB_00120f06:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, int, bool>(__UnexistingClass*, void
   (__UnexistingClass::*)(int, bool), Variant const**, int, Callable::CallError&, Vector<Variant>
   const&) */

void call_with_variant_args_dv<__UnexistingClass,int,bool>
               (__UnexistingClass *param_1,_func_void_int_bool *param_2,Variant **param_3,
               int param_4,CallError *param_5,Vector *param_6)

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
  Variant *this;
  uint uVar10;
  int iVar11;
  Variant *this_00;
  long in_stack_00000008;
  
  plVar8 = (long *)CONCAT44(in_register_0000000c,param_4);
  uVar10 = (uint)param_5;
  if (2 < uVar10) {
    uVar7 = 3;
    goto LAB_001211fd;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  iVar6 = 2 - uVar10;
  if (lVar1 == 0) {
    if (iVar6 == 0) {
      this = (Variant *)*plVar8;
LAB_0012122d:
      this_00 = (Variant *)plVar8[1];
      goto LAB_00121165;
    }
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    iVar11 = (int)lVar2;
    if (iVar6 <= iVar11) {
      if (uVar10 == 0) {
        lVar9 = (long)(iVar11 + -2);
        if (lVar2 <= lVar9) goto LAB_00121248;
        this = (Variant *)(lVar1 + lVar9 * 0x18);
      }
      else {
        this = (Variant *)*plVar8;
        if (uVar10 == 2) goto LAB_0012122d;
      }
      lVar9 = (long)(int)((uVar10 ^ 1) + (iVar11 - iVar6));
      if (lVar2 <= lVar9) {
LAB_00121248:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      this_00 = (Variant *)(lVar1 + lVar9 * 0x18);
LAB_00121165:
      *(undefined4 *)param_6 = 0;
      if (((ulong)param_2 & 1) != 0) {
        param_2 = *(_func_void_int_bool **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
      }
      cVar5 = Variant::can_convert_strict(*(undefined4 *)this_00,1);
      uVar4 = _LC49;
      if (cVar5 == '\0') {
        *(undefined4 *)param_6 = 2;
        *(undefined8 *)(param_6 + 4) = uVar4;
      }
      Variant::operator_cast_to_bool(this_00);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
      uVar4 = _LC78;
      if (cVar5 == '\0') {
        *(undefined4 *)param_6 = 2;
        *(undefined8 *)(param_6 + 4) = uVar4;
      }
      iVar6 = Variant::operator_cast_to_int(this);
                    /* WARNING: Could not recover jumptable at 0x001211ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*param_2)((int)(param_1 + (long)param_3),SUB41(iVar6,0));
      return;
    }
  }
  uVar7 = 4;
LAB_001211fd:
  *(undefined4 *)param_6 = uVar7;
  *(undefined4 *)(param_6 + 8) = 2;
  return;
}



/* MethodBindT<int, bool>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<int,bool>::call
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
      _err_print_error(&_LC77,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_001212e6;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,int,bool>
            (p_Var2,(_func_void_int_bool *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8,
             in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_001212e6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, unsigned int>(__UnexistingClass*, void
   (__UnexistingClass::*)(unsigned int), Variant const**, int, Callable::CallError&, Vector<Variant>
   const&) */

void call_with_variant_args_dv<__UnexistingClass,unsigned_int>
               (__UnexistingClass *param_1,_func_void_uint *param_2,Variant **param_3,int param_4,
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
    goto LAB_001215ad;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_00121610;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_00121610:
      uVar6 = 4;
LAB_001215ad:
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
      goto LAB_0012152b;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0012152b:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_uint **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
  uVar4 = _LC78;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_unsigned_int(this);
                    /* WARNING: Could not recover jumptable at 0x00121586. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)((uint)(param_1 + (long)param_3));
  return;
}



/* MethodBindT<unsigned int>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<unsigned_int>::call
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
      _err_print_error(&_LC77,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_00121676;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,unsigned_int>
            (p_Var2,(_func_void_uint *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8,
             in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_00121676:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info_helper<unsigned int>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<unsigned_int>
               (int param_1,int *param_2,PropertyInfo *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long lVar4;
  int iVar5;
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
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar5 = *param_2;
  if (iVar5 != param_1) goto LAB_00121879;
  local_88 = 0;
  local_90 = 0;
  local_78 = &_LC34;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_70._8_8_;
  local_70 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_90);
  local_98 = 0;
  local_78 = (undefined *)CONCAT44(local_78._4_4_,2);
  local_60 = 0;
  local_58 = 0;
  local_70 = (undefined1  [16])0x0;
  if (local_90 == 0) {
LAB_00121978:
    local_50 = 6;
    StringName::operator=((StringName *)(local_70 + 8),(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 6;
    if (local_60 != 0x11) goto LAB_00121978;
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
  *(undefined4 *)param_3 = local_78._0_4_;
  if (*(long *)(param_3 + 8) != local_70._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 8));
    uVar3 = local_70._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_70._8_8_;
    local_70 = auVar2 << 0x40;
    *(undefined8 *)(param_3 + 8) = uVar3;
  }
  if (*(long *)(param_3 + 0x10) != local_70._8_8_) {
    StringName::unref();
    uVar3 = local_70._8_8_;
    local_70._8_8_ = 0;
    *(undefined8 *)(param_3 + 0x10) = uVar3;
  }
  *(int *)(param_3 + 0x18) = local_60;
  if (*(long *)(param_3 + 0x20) != local_58) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 0x20));
    lVar4 = local_58;
    local_58 = 0;
    *(long *)(param_3 + 0x20) = lVar4;
  }
  *(undefined4 *)(param_3 + 0x28) = local_50;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
  iVar5 = *param_2;
LAB_00121879:
  *param_2 = iVar5 + 1;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindTRC<Transform3D, unsigned int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Transform3D,unsigned_int>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined8 uVar4;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar5;
  long in_FS_OFFSET;
  undefined8 local_80;
  long local_78;
  ulong local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar5 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX == 0) {
    local_68 = (undefined *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_70 = local_70 & 0xffffffff00000000;
    local_60 = (undefined1  [16])0x0;
    call_get_argument_type_info_helper<unsigned_int>(0,(int *)&local_70,(PropertyInfo *)&local_68);
    uVar3 = local_60._0_8_;
    uVar4 = local_60._8_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_60._8_8_;
    local_60 = auVar1 << 0x40;
    *puVar5 = local_68._0_4_;
    *(undefined8 *)(puVar5 + 2) = uVar3;
    *(undefined8 *)(puVar5 + 4) = uVar4;
    puVar5[6] = (undefined4)local_50;
    *(undefined8 *)(puVar5 + 8) = local_48;
    puVar5[10] = local_40;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
    goto LAB_00121b28;
  }
  local_70 = 0;
  local_78 = 0;
  local_68 = &_LC34;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._0_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_78);
  local_80 = 0;
  *puVar5 = 0x12;
  puVar5[6] = 0;
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar5[10] = 6;
LAB_00121c0f:
    StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_70);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_78);
    puVar5[10] = 6;
    if (puVar5[6] != 0x11) goto LAB_00121c0f;
    StringName::StringName((StringName *)&local_68,(CowData<char32_t> *)(puVar5 + 8),false);
    if (*(undefined **)(puVar5 + 4) == local_68) {
      if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      *(undefined **)(puVar5 + 4) = local_68;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_00121b28:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Object*, unsigned int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Object*,unsigned_int>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar6;
  long in_FS_OFFSET;
  bool bVar7;
  ulong local_60;
  char *local_58;
  undefined1 local_50 [16];
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  long local_20;
  
  puVar6 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX == 0) {
    local_58 = (char *)0x0;
    local_40 = 0;
    local_38 = 0;
    local_30 = 6;
    local_60 = local_60 & 0xffffffff00000000;
    local_50 = (undefined1  [16])0x0;
    call_get_argument_type_info_helper<unsigned_int>(0,(int *)&local_60,(PropertyInfo *)&local_58);
    uVar4 = local_50._0_8_;
    uVar5 = local_50._8_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_50._8_8_;
    local_50 = auVar2 << 0x40;
    *puVar6 = local_58._0_4_;
    *(undefined8 *)(puVar6 + 2) = uVar4;
    *(undefined8 *)(puVar6 + 4) = uVar5;
    puVar6[6] = (undefined4)local_40;
    *(undefined8 *)(puVar6 + 8) = local_38;
    puVar6[10] = local_30;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_50);
  }
  else {
    local_60 = 0;
    local_50._8_8_ = local_50._0_8_;
    local_50._0_8_ = 6;
    local_58 = "Object";
    String::parse_latin1((StrRange *)&local_60);
    StringName::StringName((StringName *)&local_58,(StrRange *)&local_60,false);
    *puVar6 = 0x18;
    *(undefined8 *)(puVar6 + 2) = 0;
    StringName::StringName((StringName *)(puVar6 + 4),(StringName *)&local_58);
    bVar7 = StringName::configured != '\0';
    puVar6[6] = 0;
    *(undefined8 *)(puVar6 + 8) = 0;
    puVar6[10] = 6;
    if ((bVar7) && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
    uVar3 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 - 0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(uVar3 - 0x10),false);
      }
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<Shape3D>, unsigned int, int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Ref<Shape3D>,unsigned_int,int>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  uint in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  undefined8 local_a8;
  ulong local_a0;
  long local_98;
  undefined1 local_90 [16];
  undefined8 local_80;
  long local_78;
  undefined4 local_70;
  char *local_68;
  long local_60;
  ulong local_58;
  undefined4 local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX < 2) {
    local_98 = 0;
    local_80 = 0;
    local_78 = 0;
    local_70 = 6;
    local_a0 = local_a0 & 0xffffffff00000000;
    local_90._0_8_ = 0;
    local_90._8_8_ = 0;
    call_get_argument_type_info_helper<unsigned_int>
              (in_EDX,(int *)&local_a0,(PropertyInfo *)&local_98);
    if (in_EDX == (uint)local_a0) {
      GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void> *)&local_68);
      local_98 = CONCAT44(local_98._4_4_,local_68._0_4_);
      if (local_90._0_8_ != local_60) {
        CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
        local_90._0_8_ = local_60;
        local_60 = 0;
      }
      if (local_90._8_8_ != local_58) {
        StringName::unref();
        local_90._8_8_ = local_58;
        local_58 = 0;
      }
      local_80 = CONCAT44(local_80._4_4_,local_50);
      if (local_78 != local_48) {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
        local_78 = local_48;
        local_48 = 0;
      }
      local_70 = local_40;
      PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
    }
    uVar3 = local_90._8_8_;
    uVar2 = local_90._0_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_90._8_8_;
    local_90 = auVar1 << 0x40;
    *puVar4 = (undefined4)local_98;
    *(undefined8 *)(puVar4 + 2) = uVar2;
    *(undefined8 *)(puVar4 + 4) = uVar3;
    puVar4[6] = (undefined4)local_80;
    *(long *)(puVar4 + 8) = local_78;
    puVar4[10] = local_70;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
    goto LAB_00121f13;
  }
  local_98 = 0;
  local_a0 = 0;
  local_68 = "Shape3D";
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_a0);
  local_a8 = 0;
  *puVar4 = 0x18;
  puVar4[6] = 0x11;
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (local_a0 == 0) {
    puVar4[10] = 6;
LAB_00121fdf:
    StringName::StringName((StringName *)&local_68,(CowData<char32_t> *)(puVar4 + 8),false);
    if (*(char **)(puVar4 + 4) == local_68) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      *(char **)(puVar4 + 4) = local_68;
    }
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_a0);
    puVar4[10] = 6;
    if (puVar4[6] == 0x11) goto LAB_00121fdf;
    StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_98);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  if ((StringName::configured != '\0') && (local_98 != 0)) {
    StringName::unref();
  }
LAB_00121f13:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<int, unsigned int, int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<int,unsigned_int,int>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  uint in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  long local_a8;
  ulong local_a0;
  undefined8 local_98;
  undefined1 local_90 [16];
  undefined8 local_80;
  long local_78;
  undefined4 local_70;
  undefined *local_68;
  long local_60;
  ulong local_58;
  undefined4 local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX < 2) {
    local_98 = 0;
    local_80 = 0;
    local_78 = 0;
    local_70 = 6;
    local_a0 = local_a0 & 0xffffffff00000000;
    local_90._0_8_ = 0;
    local_90._8_8_ = 0;
    call_get_argument_type_info_helper<unsigned_int>
              (in_EDX,(int *)&local_a0,(PropertyInfo *)&local_98);
    if (in_EDX == (uint)local_a0) {
      GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void> *)&local_68);
      local_98 = CONCAT44(local_98._4_4_,local_68._0_4_);
      if (local_90._0_8_ != local_60) {
        CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
        local_90._0_8_ = local_60;
        local_60 = 0;
      }
      if (local_90._8_8_ != local_58) {
        StringName::unref();
        local_90._8_8_ = local_58;
        local_58 = 0;
      }
      local_80 = CONCAT44(local_80._4_4_,local_50);
      if (local_78 != local_48) {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
        local_78 = local_48;
        local_48 = 0;
      }
      local_70 = local_40;
      PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
    }
    uVar3 = local_90._8_8_;
    uVar2 = local_90._0_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_90._8_8_;
    local_90 = auVar1 << 0x40;
    *puVar4 = (undefined4)local_98;
    *(undefined8 *)(puVar4 + 2) = uVar2;
    *(undefined8 *)(puVar4 + 4) = uVar3;
    puVar4[6] = (undefined4)local_80;
    *(long *)(puVar4 + 8) = local_78;
    puVar4[10] = local_70;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
    goto LAB_0012226e;
  }
  local_a8 = 0;
  local_a0 = 0;
  local_68 = &_LC34;
  local_60 = 0;
  String::parse_latin1((StrRange *)&local_a0);
  local_98 = 0;
  *puVar4 = 2;
  puVar4[6] = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (local_a0 == 0) {
    puVar4[10] = 6;
LAB_0012229f:
    StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_a8);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_a0);
    puVar4[10] = 6;
    if (puVar4[6] != 0x11) goto LAB_0012229f;
    StringName::StringName((StringName *)&local_68,(CowData<char32_t> *)(puVar4 + 8),false);
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  if ((StringName::configured != '\0') && (local_a8 != 0)) {
    StringName::unref();
  }
LAB_0012226e:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Control flow encountered bad instruction data */
/* RBMap<unsigned int, CollisionObject3D::ShapeData, Comparator<unsigned int>,
   DefaultAllocator>::~RBMap() */

void __thiscall
RBMap<unsigned_int,CollisionObject3D::ShapeData,Comparator<unsigned_int>,DefaultAllocator>::~RBMap
          (RBMap<unsigned_int,CollisionObject3D::ShapeData,Comparator<unsigned_int>,DefaultAllocator>
           *this)

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
/* MethodBindTRC<unsigned int, int>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<unsigned_int,int>::~MethodBindTRC(MethodBindTRC<unsigned_int,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<unsigned int>::~MethodBindT() */

void __thiscall MethodBindT<unsigned_int>::~MethodBindT(MethodBindT<unsigned_int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<unsigned int, int>::~MethodBindT() */

void __thiscall MethodBindT<unsigned_int,int>::~MethodBindT(MethodBindT<unsigned_int,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<int, unsigned int, int>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<int,unsigned_int,int>::~MethodBindTRC(MethodBindTRC<int,unsigned_int,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Ref<Shape3D>, unsigned int, int>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Ref<Shape3D>,unsigned_int,int>::~MethodBindTRC
          (MethodBindTRC<Ref<Shape3D>,unsigned_int,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<int, unsigned int>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<int,unsigned_int>::~MethodBindTRC(MethodBindTRC<int,unsigned_int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<unsigned int, Ref<Shape3D> const&>::~MethodBindT() */

void __thiscall
MethodBindT<unsigned_int,Ref<Shape3D>const&>::~MethodBindT
          (MethodBindT<unsigned_int,Ref<Shape3D>const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<bool, unsigned int>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<bool,unsigned_int>::~MethodBindTRC(MethodBindTRC<bool,unsigned_int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<unsigned int, bool>::~MethodBindT() */

void __thiscall MethodBindT<unsigned_int,bool>::~MethodBindT(MethodBindT<unsigned_int,bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Object*, unsigned int>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Object*,unsigned_int>::~MethodBindTRC(MethodBindTRC<Object*,unsigned_int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Transform3D, unsigned int>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Transform3D,unsigned_int>::~MethodBindTRC
          (MethodBindTRC<Transform3D,unsigned_int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<unsigned int, Transform3D const&>::~MethodBindT() */

void __thiscall
MethodBindT<unsigned_int,Transform3D_const&>::~MethodBindT
          (MethodBindT<unsigned_int,Transform3D_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<Vector<int>>::~MethodBindTR() */

void __thiscall MethodBindTR<Vector<int>>::~MethodBindTR(MethodBindTR<Vector<int>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<unsigned int, Object*>::~MethodBindTR() */

void __thiscall
MethodBindTR<unsigned_int,Object*>::~MethodBindTR(MethodBindTR<unsigned_int,Object*> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<RID>::~MethodBindTRC() */

void __thiscall MethodBindTRC<RID>::~MethodBindTRC(MethodBindTRC<RID> *this)

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
/* MethodBindTRC<CollisionObject3D::DisableMode>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<CollisionObject3D::DisableMode>::~MethodBindTRC
          (MethodBindTRC<CollisionObject3D::DisableMode> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<CollisionObject3D::DisableMode>::~MethodBindT() */

void __thiscall
MethodBindT<CollisionObject3D::DisableMode>::~MethodBindT
          (MethodBindT<CollisionObject3D::DisableMode> *this)

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
/* MethodBindTRC<bool, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool,int>::~MethodBindTRC(MethodBindTRC<bool,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<int, bool>::~MethodBindT() */

void __thiscall MethodBindT<int,bool>::~MethodBindT(MethodBindT<int,bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<unsigned int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<unsigned_int>::~MethodBindTRC(MethodBindTRC<unsigned_int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<CollisionObject3D, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<CollisionObject3D,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<CollisionObject3D,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<CollisionObject3D, void, Ref<Shape3D>
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<CollisionObject3D,void,Ref<Shape3D>const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<CollisionObject3D,void,Ref<Shape3D>const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<CollisionObject3D, void, unsigned
   int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<CollisionObject3D,void,unsigned_int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<CollisionObject3D,void,unsigned_int> *this)

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



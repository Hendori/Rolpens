
/* JoltObject3D::_remove_from_space() */

void __thiscall JoltObject3D::_remove_from_space(JoltObject3D *this)

{
  if (*(int *)(this + 0x30) != -1) {
    JoltSpace3D::remove_body(*(BodyID **)(this + 0x28));
    *(undefined4 *)(this + 0x30) = 0xffffffff;
    return;
  }
  return;
}



/* JoltObject3D::_collision_mask_changed() */

void __thiscall JoltObject3D::_collision_mask_changed(JoltObject3D *this)

{
  BodyID *pBVar1;
  
  if ((*(long *)(this + 0x28) != 0) && (*(int *)(this + 0x30) != -1)) {
    pBVar1 = (BodyID *)JoltSpace3D::get_body_iface();
    (**(code **)(*(long *)this + 8))(this);
    JPH::BodyInterface::SetObjectLayer(pBVar1,(short)this + 0x30);
    return;
  }
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



/* JoltObject3D::_reset_space() */

void __thiscall JoltObject3D::_reset_space(JoltObject3D *this)

{
  code *pcVar1;
  long lVar2;
  
  if (*(long *)(this + 0x28) == 0) {
    _err_print_error("_reset_space","modules/jolt_physics/objects/jolt_object_3d.cpp",0x32,
                     "Parameter \"space\" is null.",0,0);
    return;
  }
  lVar2 = *(long *)this;
  if (*(code **)(lVar2 + 0x30) == _space_changing) {
    pcVar1 = *(code **)(lVar2 + 0x18);
  }
  else {
    (**(code **)(lVar2 + 0x30))();
    lVar2 = *(long *)this;
    pcVar1 = *(code **)(lVar2 + 0x18);
  }
  if (pcVar1 == _remove_from_space) {
    if (*(int *)(this + 0x30) != -1) {
      JoltSpace3D::remove_body(*(BodyID **)(this + 0x28));
      *(undefined4 *)(this + 0x30) = 0xffffffff;
      lVar2 = *(long *)this;
    }
  }
  else {
    (*pcVar1)(this);
    lVar2 = *(long *)this;
  }
  (**(code **)(lVar2 + 0x10))(this);
  if (*(code **)(*(long *)this + 0x38) != _space_changed) {
                    /* WARNING: Could not recover jumptable at 0x00100194. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 0x38))(this);
    return;
  }
  return;
}



/* JoltObject3D::_update_object_layer() */

void __thiscall JoltObject3D::_update_object_layer(JoltObject3D *this)

{
  BodyID *pBVar1;
  
  if ((*(long *)(this + 0x28) != 0) && (*(int *)(this + 0x30) != -1)) {
    pBVar1 = (BodyID *)JoltSpace3D::get_body_iface();
    (**(code **)(*(long *)this + 8))(this);
    JPH::BodyInterface::SetObjectLayer(pBVar1,(short)this + 0x30);
    return;
  }
  return;
}



/* JoltObject3D::JoltObject3D(JoltObject3D::ObjectType) */

void __thiscall JoltObject3D::JoltObject3D(JoltObject3D *this,JoltObject3D param_2)

{
  undefined8 uVar1;
  
  *(undefined8 *)(this + 8) = 0;
  *(undefined ***)this = &PTR___cxa_pure_virtual_00100f18;
  uVar1 = _LC3;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = uVar1;
  *(undefined4 *)(this + 0x38) = 1;
  this[0x3c] = param_2;
  this[0x3d] = (JoltObject3D)0x0;
  *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
  return;
}



/* JoltObject3D::~JoltObject3D() */

void __thiscall JoltObject3D::~JoltObject3D(JoltObject3D *this)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  void *pvVar5;
  
  *(undefined ***)this = &PTR___cxa_pure_virtual_00100f18;
  pvVar5 = *(void **)(this + 0x10);
  if (pvVar5 == (void *)0x0) {
    return;
  }
  if (*(int *)(this + 8) != 0) {
    lVar4 = 0;
    while( true ) {
      plVar2 = *(long **)((long)pvVar5 + lVar4 * 0x60 + 0x50);
      if (plVar2 != (long *)0x0) {
        LOCK();
        plVar1 = plVar2 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)(*plVar2 + 8))();
        }
      }
      lVar3 = lVar4 * 0x60;
      lVar4 = lVar4 + 1;
      JoltShapeInstance3D::ShapeReference::~ShapeReference
                ((ShapeReference *)((long)pvVar5 + lVar3 + 0x40));
      if (*(uint *)(this + 8) <= (uint)lVar4) break;
      pvVar5 = *(void **)(this + 0x10);
    }
    *(undefined4 *)(this + 8) = 0;
    pvVar5 = *(void **)(this + 0x10);
    if (pvVar5 == (void *)0x0) {
      return;
    }
  }
  Memory::free_static(pvVar5,false);
  return;
}



/* JoltObject3D::~JoltObject3D() */

void __thiscall JoltObject3D::~JoltObject3D(JoltObject3D *this)

{
  ~JoltObject3D(this);
  operator_delete(this,0x40);
  return;
}



/* JoltObject3D::get_instance() const */

ulong __thiscall JoltObject3D::get_instance(JoltObject3D *this)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  ulong *puVar4;
  long in_FS_OFFSET;
  bool bVar5;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = (uint)*(ulong *)(this + 0x20) & 0xffffff;
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
    if ((*(ulong *)(this + 0x20) >> 0x18 & 0x7fffffffff) == (*puVar4 & 0x7fffffffff)) {
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
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* JoltObject3D::set_space(JoltSpace3D*) */

void __thiscall JoltObject3D::set_space(JoltObject3D *this,JoltSpace3D *param_1)

{
  long lVar1;
  JoltSpace3D *pJVar2;
  
  pJVar2 = *(JoltSpace3D **)(this + 0x28);
  if (pJVar2 != param_1) {
    lVar1 = *(long *)this;
    if (*(code **)(lVar1 + 0x30) != _space_changing) {
      (**(code **)(lVar1 + 0x30))(this);
      pJVar2 = *(JoltSpace3D **)(this + 0x28);
      lVar1 = *(long *)this;
    }
    if (pJVar2 != (JoltSpace3D *)0x0) {
      if (*(code **)(lVar1 + 0x18) == _remove_from_space) {
        if (*(int *)(this + 0x30) != -1) {
          JoltSpace3D::remove_body((BodyID *)pJVar2);
          *(undefined4 *)(this + 0x30) = 0xffffffff;
          lVar1 = *(long *)this;
        }
      }
      else {
        (**(code **)(lVar1 + 0x18))(this);
        lVar1 = *(long *)this;
      }
    }
    *(JoltSpace3D **)(this + 0x28) = param_1;
    if (param_1 != (JoltSpace3D *)0x0) {
      (**(code **)(lVar1 + 0x10))(this);
      lVar1 = *(long *)this;
    }
    if (*(code **)(lVar1 + 0x38) != _space_changed) {
                    /* WARNING: Could not recover jumptable at 0x001004b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar1 + 0x38))(this);
      return;
    }
  }
  return;
}



/* JoltObject3D::set_collision_layer(unsigned int) */

void __thiscall JoltObject3D::set_collision_layer(JoltObject3D *this,uint param_1)

{
  if (*(uint *)(this + 0x34) == param_1) {
    return;
  }
  *(uint *)(this + 0x34) = param_1;
  if (*(code **)(*(long *)this + 0x20) == _collision_mask_changed) {
    _update_object_layer(this);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00100510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x20))();
  return;
}



/* JoltObject3D::set_collision_mask(unsigned int) */

void __thiscall JoltObject3D::set_collision_mask(JoltObject3D *this,uint param_1)

{
  if (*(uint *)(this + 0x38) == param_1) {
    return;
  }
  *(uint *)(this + 0x38) = param_1;
  if (*(code **)(*(long *)this + 0x28) == _collision_mask_changed) {
    _update_object_layer(this);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00100550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x28))();
  return;
}



/* JoltObject3D::can_collide_with(JoltObject3D const&) const */

undefined4 __thiscall JoltObject3D::can_collide_with(JoltObject3D *this,JoltObject3D *param_1)

{
  return CONCAT31((int3)((*(uint *)(this + 0x38) & *(uint *)(param_1 + 0x34)) >> 8),
                  (*(uint *)(this + 0x38) & *(uint *)(param_1 + 0x34)) != 0);
}



/* JoltObject3D::to_string() const */

void JoltObject3D::to_string(void)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  JoltObject3D *in_RSI;
  CowData<char32_t> *in_RDI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (to_string()::fallback_name == '\0') {
    iVar2 = __cxa_guard_acquire(&to_string()::fallback_name);
    if (iVar2 != 0) {
      to_string()::fallback_name = 0;
      String::parse_latin1((StrRange *)&to_string()::fallback_name);
      __cxa_atexit(String::~String,&to_string()::fallback_name,&__dso_handle);
      __cxa_guard_release(&to_string()::fallback_name);
    }
  }
  if (*(char *)(JoltPhysicsServer3D::singleton + 0x3b8) == '\0') {
    plVar3 = (long *)get_instance(in_RSI);
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x78))();
      goto LAB_001005c8;
    }
  }
  *(undefined8 *)in_RDI = 0;
  if (to_string()::fallback_name != 0) {
    CowData<char32_t>::_ref(in_RDI,(CowData *)&to_string()::fallback_name);
  }
LAB_001005c8:
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltObject3D::can_interact_with(JoltObject3D const&) const */

undefined8 __thiscall JoltObject3D::can_interact_with(JoltObject3D *this,JoltObject3D *param_1)

{
  long *plVar1;
  JoltObject3D JVar2;
  long lVar3;
  char *pcVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  JVar2 = param_1[0x3c];
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (JVar2 == (JoltObject3D)0x1) {
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001006d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar5 = (**(code **)(*(long *)this + 0x58))();
      return uVar5;
    }
  }
  else if (JVar2 == (JoltObject3D)0x3) {
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00100708. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar5 = (**(code **)(*(long *)this + 0x68))();
      return uVar5;
    }
  }
  else if (JVar2 == (JoltObject3D)0x2) {
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00100738. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar5 = (**(code **)(*(long *)this + 0x60))();
      return uVar5;
    }
  }
  else {
    local_40 = 0;
    local_30 = 0x48;
    local_38 = "Unhandled object type: \'%d\'. This should not happen. Please report this.";
    String::parse_latin1((StrRange *)&local_40);
    vformat<JoltObject3D::ObjectType>(&local_38,(StrRange *)&local_40,(int)(char)JVar2);
    _err_print_error("can_interact_with","modules/jolt_physics/objects/jolt_object_3d.cpp",0x88,
                     "Method/function failed. Returning: false",&local_38,0,0);
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
    lVar3 = local_40;
    if (local_40 != 0) {
      LOCK();
      plVar1 = (long *)(local_40 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_40 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 0;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltObject3D::_space_changing() */

void JoltObject3D::_space_changing(void)

{
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



/* String::~String() */

void __thiscall String::~String(String *this)

{
  long *plVar1;
  long lVar2;
  
  if (*(long *)this != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)this + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x00100b88) */
/* WARNING: Removing unreachable block (ram,0x00100cb8) */
/* WARNING: Removing unreachable block (ram,0x00100e80) */
/* WARNING: Removing unreachable block (ram,0x00100cc4) */
/* WARNING: Removing unreachable block (ram,0x00100cce) */
/* WARNING: Removing unreachable block (ram,0x00100e60) */
/* WARNING: Removing unreachable block (ram,0x00100cda) */
/* WARNING: Removing unreachable block (ram,0x00100ce4) */
/* WARNING: Removing unreachable block (ram,0x00100e40) */
/* WARNING: Removing unreachable block (ram,0x00100cf0) */
/* WARNING: Removing unreachable block (ram,0x00100cfa) */
/* WARNING: Removing unreachable block (ram,0x00100e20) */
/* WARNING: Removing unreachable block (ram,0x00100d06) */
/* WARNING: Removing unreachable block (ram,0x00100d10) */
/* WARNING: Removing unreachable block (ram,0x00100e00) */
/* WARNING: Removing unreachable block (ram,0x00100d1c) */
/* WARNING: Removing unreachable block (ram,0x00100d26) */
/* WARNING: Removing unreachable block (ram,0x00100de0) */
/* WARNING: Removing unreachable block (ram,0x00100d32) */
/* WARNING: Removing unreachable block (ram,0x00100d3c) */
/* WARNING: Removing unreachable block (ram,0x00100dc0) */
/* WARNING: Removing unreachable block (ram,0x00100d44) */
/* WARNING: Removing unreachable block (ram,0x00100d5a) */
/* WARNING: Removing unreachable block (ram,0x00100d66) */
/* String vformat<JoltObject3D::ObjectType>(String const&, JoltObject3D::ObjectType const) */

undefined8 * vformat<JoltObject3D::ObjectType>(undefined8 *param_1,bool *param_2,char param_3)

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
  Variant::Variant((Variant *)local_78,(int)param_3);
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



/* JoltObject3D::_remove_from_space() */

void JoltObject3D::_GLOBAL__sub_I__remove_from_space(void)

{
  if (JPH::DVec3::cTrue == '\0') {
    JPH::DVec3::cTrue = '\x01';
    JPH::DVec3::cTrue = _LC18;
  }
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* String::~String() */

void __thiscall String::~String(String *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



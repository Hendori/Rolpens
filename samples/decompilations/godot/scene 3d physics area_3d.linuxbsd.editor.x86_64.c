
/* Area3D::get_gravity_space_override_mode() const */

undefined4 __thiscall Area3D::get_gravity_space_override_mode(Area3D *this)

{
  return *(undefined4 *)(this + 0x618);
}



/* Area3D::is_gravity_a_point() const */

Area3D __thiscall Area3D::is_gravity_a_point(Area3D *this)

{
  return this[0x62c];
}



/* Area3D::get_gravity_point_unit_distance() const */

undefined4 __thiscall Area3D::get_gravity_point_unit_distance(Area3D *this)

{
  return *(undefined4 *)(this + 0x630);
}



/* Area3D::get_gravity_point_center() const */

Area3D * __thiscall Area3D::get_gravity_point_center(Area3D *this)

{
  return this + 0x61c;
}



/* Area3D::get_gravity() const */

undefined4 __thiscall Area3D::get_gravity(Area3D *this)

{
  return *(undefined4 *)(this + 0x628);
}



/* Area3D::get_linear_damp_space_override_mode() const */

undefined4 __thiscall Area3D::get_linear_damp_space_override_mode(Area3D *this)

{
  return *(undefined4 *)(this + 0x634);
}



/* Area3D::get_angular_damp_space_override_mode() const */

undefined4 __thiscall Area3D::get_angular_damp_space_override_mode(Area3D *this)

{
  return *(undefined4 *)(this + 0x638);
}



/* Area3D::get_linear_damp() const */

undefined4 __thiscall Area3D::get_linear_damp(Area3D *this)

{
  return *(undefined4 *)(this + 0x640);
}



/* Area3D::get_angular_damp() const */

undefined4 __thiscall Area3D::get_angular_damp(Area3D *this)

{
  return *(undefined4 *)(this + 0x63c);
}



/* Area3D::get_priority() const */

undefined4 __thiscall Area3D::get_priority(Area3D *this)

{
  return *(undefined4 *)(this + 0x644);
}



/* Area3D::get_wind_force_magnitude() const */

undefined4 __thiscall Area3D::get_wind_force_magnitude(Area3D *this)

{
  return *(undefined4 *)(this + 0x648);
}



/* Area3D::get_wind_attenuation_factor() const */

undefined4 __thiscall Area3D::get_wind_attenuation_factor(Area3D *this)

{
  return *(undefined4 *)(this + 0x64c);
}



/* Area3D::get_wind_source_path() const */

Area3D * __thiscall Area3D::get_wind_source_path(Area3D *this)

{
  return this + 0x650;
}



/* Area3D::is_monitoring() const */

Area3D __thiscall Area3D::is_monitoring(Area3D *this)

{
  return this[0x658];
}



/* Area3D::is_monitorable() const */

Area3D __thiscall Area3D::is_monitorable(Area3D *this)

{
  return this[0x659];
}



/* Area3D::set_audio_bus_override(bool) */

void __thiscall Area3D::set_audio_bus_override(Area3D *this,bool param_1)

{
  this[0x6c0] = (Area3D)param_1;
  return;
}



/* Area3D::is_overriding_audio_bus() const */

Area3D __thiscall Area3D::is_overriding_audio_bus(Area3D *this)

{
  return this[0x6c0];
}



/* Area3D::set_use_reverb_bus(bool) */

void __thiscall Area3D::set_use_reverb_bus(Area3D *this,bool param_1)

{
  this[0x6d0] = (Area3D)param_1;
  return;
}



/* Area3D::is_using_reverb_bus() const */

Area3D __thiscall Area3D::is_using_reverb_bus(Area3D *this)

{
  return this[0x6d0];
}



/* Area3D::set_reverb_amount(float) */

void __thiscall Area3D::set_reverb_amount(Area3D *this,float param_1)

{
  *(float *)(this + 0x6e0) = param_1;
  return;
}



/* Area3D::get_reverb_amount() const */

undefined4 __thiscall Area3D::get_reverb_amount(Area3D *this)

{
  return *(undefined4 *)(this + 0x6e0);
}



/* Area3D::set_reverb_uniformity(float) */

void __thiscall Area3D::set_reverb_uniformity(Area3D *this,float param_1)

{
  *(float *)(this + 0x6e4) = param_1;
  return;
}



/* Area3D::get_reverb_uniformity() const */

undefined4 __thiscall Area3D::get_reverb_uniformity(Area3D *this)

{
  return *(undefined4 *)(this + 0x6e4);
}



/* Area3D::set_gravity_space_override_mode(Area3D::SpaceOverride) */

void __thiscall Area3D::set_gravity_space_override_mode(Area3D *this,int param_2)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(int *)(this + 0x618) = param_2;
  plVar2 = (long *)PhysicsServer3D::get_singleton();
  pcVar1 = *(code **)(*plVar2 + 0x298);
  Variant::Variant((Variant *)local_48,param_2);
  (*pcVar1)(plVar2,*(undefined8 *)(this + 0x538),0,local_48);
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Area3D::set_linear_damp_space_override_mode(Area3D::SpaceOverride) */

void __thiscall Area3D::set_linear_damp_space_override_mode(Area3D *this,int param_2)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(int *)(this + 0x634) = param_2;
  plVar2 = (long *)PhysicsServer3D::get_singleton();
  pcVar1 = *(code **)(*plVar2 + 0x298);
  Variant::Variant((Variant *)local_48,param_2);
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



/* Area3D::set_angular_damp_space_override_mode(Area3D::SpaceOverride) */

void __thiscall Area3D::set_angular_damp_space_override_mode(Area3D *this,int param_2)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(int *)(this + 0x638) = param_2;
  plVar2 = (long *)PhysicsServer3D::get_singleton();
  pcVar1 = *(code **)(*plVar2 + 0x298);
  Variant::Variant((Variant *)local_48,param_2);
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



/* Area3D::set_priority(int) */

void __thiscall Area3D::set_priority(Area3D *this,int param_1)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(int *)(this + 0x644) = param_1;
  plVar2 = (long *)PhysicsServer3D::get_singleton();
  pcVar1 = *(code **)(*plVar2 + 0x298);
  Variant::Variant((Variant *)local_48,param_1);
  (*pcVar1)(plVar2,*(undefined8 *)(this + 0x538),9,local_48);
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Area3D::set_gravity_is_point(bool) */

void __thiscall Area3D::set_gravity_is_point(Area3D *this,bool param_1)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  this[0x62c] = (Area3D)param_1;
  plVar2 = (long *)PhysicsServer3D::get_singleton();
  pcVar1 = *(code **)(*plVar2 + 0x298);
  Variant::Variant((Variant *)local_48,param_1);
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



/* Area3D::set_gravity_point_unit_distance(float) */

void __thiscall Area3D::set_gravity_point_unit_distance(Area3D *this,float param_1)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(float *)(this + 0x630) = param_1;
  plVar2 = (long *)PhysicsServer3D::get_singleton();
  pcVar1 = *(code **)(*plVar2 + 0x298);
  Variant::Variant((Variant *)local_48,param_1);
  (*pcVar1)(plVar2,*(undefined8 *)(this + 0x538),4,(Variant *)local_48);
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Area3D::set_gravity(float) */

void __thiscall Area3D::set_gravity(Area3D *this,float param_1)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(float *)(this + 0x628) = param_1;
  plVar2 = (long *)PhysicsServer3D::get_singleton();
  pcVar1 = *(code **)(*plVar2 + 0x298);
  Variant::Variant((Variant *)local_48,param_1);
  (*pcVar1)(plVar2,*(undefined8 *)(this + 0x538),1,(Variant *)local_48);
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Area3D::set_linear_damp(float) */

void __thiscall Area3D::set_linear_damp(Area3D *this,float param_1)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(float *)(this + 0x640) = param_1;
  plVar2 = (long *)PhysicsServer3D::get_singleton();
  pcVar1 = *(code **)(*plVar2 + 0x298);
  Variant::Variant((Variant *)local_48,param_1);
  (*pcVar1)(plVar2,*(undefined8 *)(this + 0x538),6,(Variant *)local_48);
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Area3D::set_angular_damp(float) */

void __thiscall Area3D::set_angular_damp(Area3D *this,float param_1)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(float *)(this + 0x63c) = param_1;
  plVar2 = (long *)PhysicsServer3D::get_singleton();
  pcVar1 = *(code **)(*plVar2 + 0x298);
  Variant::Variant((Variant *)local_48,param_1);
  (*pcVar1)(plVar2,*(undefined8 *)(this + 0x538),8,(Variant *)local_48);
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Area3D::set_gravity_point_center(Vector3 const&) */

void __thiscall Area3D::set_gravity_point_center(Area3D *this,Vector3 *param_1)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(this + 0x61c) = *(undefined8 *)param_1;
  *(undefined4 *)(this + 0x624) = *(undefined4 *)(param_1 + 8);
  plVar2 = (long *)PhysicsServer3D::get_singleton();
  pcVar1 = *(code **)(*plVar2 + 0x298);
  Variant::Variant((Variant *)local_48,param_1);
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



/* Area3D::set_gravity_direction(Vector3 const&) */

void __thiscall Area3D::set_gravity_direction(Area3D *this,Vector3 *param_1)

{
  set_gravity_point_center(this,param_1);
  return;
}



/* Area3D::set_monitorable(bool) */

void __thiscall Area3D::set_monitorable(Area3D *this,bool param_1)

{
  char cVar1;
  long *plVar2;
  
  if (this[0x65a] == (Area3D)0x0) {
    if (((byte)this[0x2fa] & 0x40) != 0) {
      plVar2 = (long *)PhysicsServer3D::get_singleton();
      cVar1 = (**(code **)(*plVar2 + 0x728))(plVar2);
      if (cVar1 != '\0') goto LAB_00100890;
    }
    if (this[0x659] != (Area3D)param_1) {
      this[0x659] = (Area3D)param_1;
      plVar2 = (long *)PhysicsServer3D::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x00100867. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x2d8))(plVar2,*(undefined8 *)(this + 0x538),this[0x659]);
      return;
    }
  }
  else {
LAB_00100890:
    _err_print_error("set_monitorable","scene/3d/physics/area_3d.cpp",0x217,
                     "Condition \"locked || (is_inside_tree() && PhysicsServer3D::get_singleton()->is_flushing_queries())\" is true."
                     ,
                     "Function blocked during in/out signal. Use set_deferred(\"monitorable\", true/false)."
                     ,0,0);
  }
  return;
}



/* Area3D::set_audio_bus_name(StringName const&) */

void __thiscall Area3D::set_audio_bus_name(Area3D *this,StringName *param_1)

{
  StringName::operator=((StringName *)(this + 0x6c8),param_1);
  return;
}



/* Area3D::set_reverb_bus_name(StringName const&) */

void __thiscall Area3D::set_reverb_bus_name(Area3D *this,StringName *param_1)

{
  StringName::operator=((StringName *)(this + 0x6d8),param_1);
  return;
}



/* Area3D::has_overlapping_bodies() const */

undefined4 __thiscall Area3D::has_overlapping_bodies(Area3D *this)

{
  if (this[0x658] != (Area3D)0x0) {
    return CONCAT31((int3)((uint)*(int *)(this + 0x68c) >> 8),*(int *)(this + 0x68c) != 0);
  }
  _err_print_error("has_overlapping_bodies","scene/3d/physics/area_3d.cpp",0x212,
                   "Condition \"!monitoring\" is true. Returning: false",
                   "Can\'t find overlapping bodies when monitoring is off.",0,0);
  return 0;
}



/* Area3D::has_overlapping_areas() const */

undefined4 __thiscall Area3D::has_overlapping_areas(Area3D *this)

{
  if (this[0x658] != (Area3D)0x0) {
    return CONCAT31((int3)((uint)*(int *)(this + 0x6bc) >> 8),*(int *)(this + 0x6bc) != 0);
  }
  _err_print_error("has_overlapping_areas","scene/3d/physics/area_3d.cpp",0x237,
                   "Condition \"!monitoring\" is true. Returning: false",
                   "Can\'t find overlapping areas when monitoring is off.",0,0);
  return 0;
}



/* Error Object::emit_signal<RID, Node*, int, int>(StringName const&, RID, Node*, int, int) [clone
   .isra.0] */

void __thiscall
Object::emit_signal<RID,Node*,int,int>
          (Object *this,undefined8 param_1,undefined8 param_3,Object *param_4,int param_5,
          int param_6)

{
  Variant *pVVar1;
  Variant *pVVar2;
  long in_FS_OFFSET;
  undefined8 local_f0;
  Variant *local_e8;
  Variant *pVStack_e0;
  Variant *local_d8;
  Variant *pVStack_d0;
  Variant local_b8 [24];
  Variant local_a0 [24];
  Variant local_88 [24];
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  local_f0 = param_3;
  Variant::Variant(local_b8,(RID *)&local_f0);
  Variant::Variant(local_a0,param_4);
  Variant::Variant(local_88,param_5);
  Variant::Variant(local_70,param_6);
  local_50 = (undefined1  [16])0x0;
  pVVar2 = (Variant *)local_40;
  local_58 = 0;
  local_e8 = local_b8;
  pVStack_e0 = local_a0;
  local_d8 = local_88;
  pVStack_d0 = local_70;
  (**(code **)(*(long *)this + 0xd0))(this,param_1,&local_e8,4);
  do {
    pVVar1 = pVVar2 + -0x18;
    pVVar2 = pVVar2 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar2 != local_b8);
  if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Error Object::emit_signal<Node*>(StringName const&, Node*) [clone .isra.0] */

void __thiscall Object::emit_signal<Node*>(Object *this,StringName *param_1,Node *param_2)

{
  char cVar1;
  long in_FS_OFFSET;
  Variant *local_68 [2];
  int local_58 [6];
  undefined8 local_40;
  undefined1 local_38 [16];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_58,(Object *)param_2);
  local_40 = 0;
  local_38 = (undefined1  [16])0x0;
  local_68[0] = (Variant *)local_58;
  (**(code **)(*(long *)this + 0xd0))(this,param_1,local_68,1);
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
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* Area3D::get_gravity_direction() const */

Area3D * __thiscall Area3D::get_gravity_direction(Area3D *this)

{
  return this + 0x61c;
}



/* Area3D::~Area3D() */

void __thiscall Area3D::~Area3D(Area3D *this)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  void *pvVar5;
  bool bVar6;
  
  bVar6 = StringName::configured != '\0';
  *(undefined ***)this = &PTR__initialize_classv_0011f088;
  if (bVar6) {
    if (*(long *)(this + 0x6d8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00100c37;
    }
    if (*(long *)(this + 0x6c8) != 0) {
      StringName::unref();
    }
  }
LAB_00100c37:
  pvVar5 = *(void **)(this + 0x698);
  if (pvVar5 != (void *)0x0) {
    if (*(int *)(this + 0x6bc) != 0) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x6b8) * 4);
      if (uVar2 == 0) {
        *(undefined4 *)(this + 0x6bc) = 0;
        *(undefined1 (*) [16])(this + 0x6a8) = (undefined1  [16])0x0;
      }
      else {
        lVar4 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x6a0) + lVar4) != 0) {
            pvVar5 = *(void **)((long)pvVar5 + lVar4 * 2);
            *(int *)(*(long *)(this + 0x6a0) + lVar4) = 0;
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
            pvVar5 = *(void **)(this + 0x698);
            *(undefined8 *)((long)pvVar5 + lVar4 * 2) = 0;
          }
          lVar4 = lVar4 + 4;
        } while ((ulong)uVar2 << 2 != lVar4);
        *(undefined4 *)(this + 0x6bc) = 0;
        *(undefined1 (*) [16])(this + 0x6a8) = (undefined1  [16])0x0;
        if (pvVar5 == (void *)0x0) goto LAB_00100d07;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x6a0),false);
  }
LAB_00100d07:
  pvVar5 = *(void **)(this + 0x668);
  if (pvVar5 != (void *)0x0) {
    if (*(int *)(this + 0x68c) != 0) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x688) * 4);
      if (uVar2 == 0) {
        *(undefined4 *)(this + 0x68c) = 0;
        *(undefined1 (*) [16])(this + 0x678) = (undefined1  [16])0x0;
      }
      else {
        lVar4 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x670) + lVar4) != 0) {
            pvVar5 = *(void **)((long)pvVar5 + lVar4 * 2);
            *(int *)(*(long *)(this + 0x670) + lVar4) = 0;
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
            pvVar5 = *(void **)(this + 0x668);
            *(undefined8 *)((long)pvVar5 + lVar4 * 2) = 0;
          }
          lVar4 = lVar4 + 4;
        } while (lVar4 != (ulong)uVar2 << 2);
        *(undefined4 *)(this + 0x68c) = 0;
        *(undefined1 (*) [16])(this + 0x678) = (undefined1  [16])0x0;
        if (pvVar5 == (void *)0x0) goto LAB_00100dcb;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x670),false);
  }
LAB_00100dcb:
  NodePath::~NodePath((NodePath *)(this + 0x650));
  CollisionObject3D::~CollisionObject3D((CollisionObject3D *)this);
  return;
}



/* Area3D::~Area3D() */

void __thiscall Area3D::~Area3D(Area3D *this)

{
  ~Area3D(this);
  operator_delete(this,0x6e8);
  return;
}



/* Area3D::get_reverb_bus_name() const */

void Area3D::get_reverb_bus_name(void)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  long in_RSI;
  StringName *in_RDI;
  long in_FS_OFFSET;
  long local_38;
  long local_30;
  
  iVar5 = 0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  do {
    AudioServer::get_singleton();
    iVar4 = AudioServer::get_bus_count();
    if (iVar4 <= iVar5) {
      StringName::StringName(in_RDI,(StringName *)(SceneStringNames::singleton + 0x208));
LAB_00100f2a:
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    AudioServer::get_singleton();
    AudioServer::get_bus_name((int)&local_38);
    cVar3 = operator==((String *)&local_38,(StringName *)(in_RSI + 0x6d8));
    lVar2 = local_38;
    if (local_38 != 0) {
      LOCK();
      plVar1 = (long *)(local_38 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_38 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    if (cVar3 != '\0') {
      StringName::StringName(in_RDI,(StringName *)(in_RSI + 0x6d8));
      goto LAB_00100f2a;
    }
    iVar5 = iVar5 + 1;
  } while( true );
}



/* Area3D::get_audio_bus_name() const */

void Area3D::get_audio_bus_name(void)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  long in_RSI;
  StringName *in_RDI;
  long in_FS_OFFSET;
  long local_38;
  long local_30;
  
  iVar5 = 0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  do {
    AudioServer::get_singleton();
    iVar4 = AudioServer::get_bus_count();
    if (iVar4 <= iVar5) {
      StringName::StringName(in_RDI,(StringName *)(SceneStringNames::singleton + 0x208));
LAB_0010101a:
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    AudioServer::get_singleton();
    AudioServer::get_bus_name((int)&local_38);
    cVar3 = operator==((String *)&local_38,(StringName *)(in_RSI + 0x6c8));
    lVar2 = local_38;
    if (local_38 != 0) {
      LOCK();
      plVar1 = (long *)(local_38 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_38 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    if (cVar3 != '\0') {
      StringName::StringName(in_RDI,(StringName *)(in_RSI + 0x6c8));
      goto LAB_0010101a;
    }
    iVar5 = iVar5 + 1;
  } while( true );
}



/* Area3D::overlaps_area(Node*) const */

undefined1 __thiscall Area3D::overlaps_area(Area3D *this,Node *param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  ulong uVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  uint uVar17;
  
  if (param_1 == (Node *)0x0) {
    _err_print_error("overlaps_area","scene/3d/physics/area_3d.cpp",0x23c,
                     "Parameter \"p_area\" is null.",0,0);
  }
  else {
    lVar1 = *(long *)(this + 0x698);
    if ((lVar1 != 0) && (*(int *)(this + 0x6bc) != 0)) {
      uVar16 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x6b8) * 4));
      lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x6b8) * 8);
      uVar11 = *(long *)(param_1 + 0x60) * 0x3ffff - 1;
      uVar11 = (uVar11 ^ uVar11 >> 0x1f) * 0x15;
      uVar11 = (uVar11 ^ uVar11 >> 0xb) * 0x41;
      uVar11 = uVar11 >> 0x16 ^ uVar11;
      uVar14 = uVar11 & 0xffffffff;
      if ((int)uVar11 == 0) {
        uVar14 = 1;
      }
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar14 * lVar2;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar16;
      lVar13 = SUB168(auVar3 * auVar7,8);
      uVar15 = *(uint *)(*(long *)(this + 0x6a0) + lVar13 * 4);
      uVar12 = SUB164(auVar3 * auVar7,8);
      if (uVar15 != 0) {
        uVar17 = 0;
        while (((uint)uVar14 != uVar15 ||
               (*(long *)(param_1 + 0x60) != *(long *)(*(long *)(lVar1 + lVar13 * 8) + 0x10)))) {
          uVar17 = uVar17 + 1;
          auVar4._8_8_ = 0;
          auVar4._0_8_ = (ulong)(uVar12 + 1) * lVar2;
          auVar8._8_8_ = 0;
          auVar8._0_8_ = uVar16;
          lVar13 = SUB168(auVar4 * auVar8,8);
          uVar15 = *(uint *)(*(long *)(this + 0x6a0) + lVar13 * 4);
          uVar12 = SUB164(auVar4 * auVar8,8);
          if (uVar15 == 0) {
            return 0;
          }
          auVar5._8_8_ = 0;
          auVar5._0_8_ = (ulong)uVar15 * lVar2;
          auVar9._8_8_ = 0;
          auVar9._0_8_ = uVar16;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = (ulong)((*(uint *)(hash_table_size_primes +
                                           (ulong)*(uint *)(this + 0x6b8) * 4) + uVar12) -
                                SUB164(auVar5 * auVar9,8)) * lVar2;
          auVar10._8_8_ = 0;
          auVar10._0_8_ = uVar16;
          if (SUB164(auVar6 * auVar10,8) < uVar17) {
            return 0;
          }
        }
        lVar1 = *(long *)(lVar1 + (ulong)uVar12 * 8);
        if (lVar1 != 0) {
          return *(undefined1 *)(lVar1 + 0x24);
        }
      }
    }
  }
  return 0;
}



/* Area3D::overlaps_body(Node*) const */

undefined1 __thiscall Area3D::overlaps_body(Area3D *this,Node *param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  ulong uVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  uint uVar17;
  
  if (param_1 == (Node *)0x0) {
    _err_print_error("overlaps_body","scene/3d/physics/area_3d.cpp",0x245,
                     "Parameter \"p_body\" is null.",0,0);
  }
  else {
    lVar1 = *(long *)(this + 0x668);
    if ((lVar1 != 0) && (*(int *)(this + 0x68c) != 0)) {
      uVar16 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x688) * 4));
      lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x688) * 8);
      uVar11 = *(long *)(param_1 + 0x60) * 0x3ffff - 1;
      uVar11 = (uVar11 ^ uVar11 >> 0x1f) * 0x15;
      uVar11 = (uVar11 ^ uVar11 >> 0xb) * 0x41;
      uVar11 = uVar11 >> 0x16 ^ uVar11;
      uVar14 = uVar11 & 0xffffffff;
      if ((int)uVar11 == 0) {
        uVar14 = 1;
      }
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar14 * lVar2;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar16;
      lVar13 = SUB168(auVar3 * auVar7,8);
      uVar15 = *(uint *)(*(long *)(this + 0x670) + lVar13 * 4);
      uVar12 = SUB164(auVar3 * auVar7,8);
      if (uVar15 != 0) {
        uVar17 = 0;
        while (((uint)uVar14 != uVar15 ||
               (*(long *)(param_1 + 0x60) != *(long *)(*(long *)(lVar1 + lVar13 * 8) + 0x10)))) {
          uVar17 = uVar17 + 1;
          auVar4._8_8_ = 0;
          auVar4._0_8_ = (ulong)(uVar12 + 1) * lVar2;
          auVar8._8_8_ = 0;
          auVar8._0_8_ = uVar16;
          lVar13 = SUB168(auVar4 * auVar8,8);
          uVar15 = *(uint *)(*(long *)(this + 0x670) + lVar13 * 4);
          uVar12 = SUB164(auVar4 * auVar8,8);
          if (uVar15 == 0) {
            return 0;
          }
          auVar5._8_8_ = 0;
          auVar5._0_8_ = (ulong)uVar15 * lVar2;
          auVar9._8_8_ = 0;
          auVar9._0_8_ = uVar16;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = (ulong)((*(uint *)(hash_table_size_primes +
                                           (ulong)*(uint *)(this + 0x688) * 4) + uVar12) -
                                SUB164(auVar5 * auVar9,8)) * lVar2;
          auVar10._8_8_ = 0;
          auVar10._0_8_ = uVar16;
          if (SUB164(auVar6 * auVar10,8) < uVar17) {
            return 0;
          }
        }
        lVar1 = *(long *)(lVar1 + (ulong)uVar12 * 8);
        if (lVar1 != 0) {
          return *(undefined1 *)(lVar1 + 0x24);
        }
      }
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



/* CowData<Area3D::AreaShapePair>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Area3D::AreaShapePair>::_copy_on_write(CowData<Area3D::AreaShapePair> *this)

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
  __n = lVar2 * 8;
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



/* CowData<Area3D::ShapePair>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Area3D::ShapePair>::_copy_on_write(CowData<Area3D::ShapePair> *this)

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
  __n = lVar2 * 8;
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



/* Area3D::_area_enter_tree(ObjectID) */

void __thiscall Area3D::_area_enter_tree(Area3D *this,ulong param_2)

{
  Variant *pVVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  code *pcVar13;
  char cVar14;
  Object *pOVar15;
  ulong uVar16;
  long lVar17;
  uint uVar18;
  ulong *puVar19;
  char *pcVar20;
  uint uVar21;
  long lVar22;
  undefined8 uVar23;
  ulong uVar24;
  uint uVar25;
  ulong uVar26;
  Variant *pVVar27;
  long in_FS_OFFSET;
  bool bVar28;
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
  
  uVar18 = (uint)param_2 & 0xffffff;
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  if (uVar18 < (uint)ObjectDB::slot_max) {
    while( true ) {
      local_f0 = local_f0 & 0xffffffffffffff00;
      LOCK();
      bVar28 = (char)ObjectDB::spin_lock == '\0';
      cVar14 = (char)ObjectDB::spin_lock;
      if (bVar28) {
        ObjectDB::spin_lock._0_1_ = '\x01';
        cVar14 = '\0';
      }
      UNLOCK();
      if (bVar28) break;
                    /* WARNING: Ignoring partial resolution of indirect */
      local_f0._0_1_ = cVar14;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar19 = (ulong *)((ulong)uVar18 * 0x10 + ObjectDB::object_slots);
    if ((param_2 >> 0x18 & 0x7fffffffff) == (*puVar19 & 0x7fffffffff)) {
      uVar16 = puVar19[1];
      ObjectDB::spin_lock._0_1_ = '\0';
      if ((uVar16 != 0) &&
         (pOVar15 = (Object *)__dynamic_cast(uVar16,&Object::typeinfo,&Node::typeinfo,0),
         pOVar15 != (Object *)0x0)) {
        lVar4 = *(long *)(this + 0x698);
        if ((lVar4 != 0) && (*(int *)(this + 0x6bc) != 0)) {
          uVar24 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x6b8) * 4)
                           );
          lVar17 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x6b8) * 8);
          uVar16 = param_2 * 0x3ffff - 1;
          uVar16 = (uVar16 ^ uVar16 >> 0x1f) * 0x15;
          uVar16 = (uVar16 ^ uVar16 >> 0xb) * 0x41;
          uVar16 = uVar16 >> 0x16 ^ uVar16;
          uVar26 = uVar16 & 0xffffffff;
          if ((int)uVar16 == 0) {
            uVar26 = 1;
          }
          auVar5._8_8_ = 0;
          auVar5._0_8_ = uVar26 * lVar17;
          auVar9._8_8_ = 0;
          auVar9._0_8_ = uVar24;
          lVar22 = SUB168(auVar5 * auVar9,8);
          uVar18 = *(uint *)(*(long *)(this + 0x6a0) + lVar22 * 4);
          uVar21 = SUB164(auVar5 * auVar9,8);
          if (uVar18 != 0) {
            uVar25 = 0;
            while ((uVar18 != (uint)uVar26 ||
                   (param_2 != *(ulong *)(*(long *)(lVar4 + lVar22 * 8) + 0x10)))) {
              uVar25 = uVar25 + 1;
              auVar6._8_8_ = 0;
              auVar6._0_8_ = (ulong)(uVar21 + 1) * lVar17;
              auVar10._8_8_ = 0;
              auVar10._0_8_ = uVar24;
              lVar22 = SUB168(auVar6 * auVar10,8);
              uVar18 = *(uint *)(*(long *)(this + 0x6a0) + lVar22 * 4);
              uVar21 = SUB164(auVar6 * auVar10,8);
              if ((uVar18 == 0) ||
                 (auVar7._8_8_ = 0, auVar7._0_8_ = (ulong)uVar18 * lVar17, auVar11._8_8_ = 0,
                 auVar11._0_8_ = uVar24, auVar8._8_8_ = 0,
                 auVar8._0_8_ = (ulong)((*(uint *)(hash_table_size_primes +
                                                  (ulong)*(uint *)(this + 0x6b8) * 4) + uVar21) -
                                       SUB164(auVar7 * auVar11,8)) * lVar17, auVar12._8_8_ = 0,
                 auVar12._0_8_ = uVar24, SUB164(auVar8 * auVar12,8) < uVar25)) goto LAB_00101b90;
            }
            lVar4 = *(long *)(lVar4 + (ulong)uVar21 * 8);
            if (lVar4 != 0) {
              if (*(char *)(lVar4 + 0x24) != '\0') {
                if (local_40[0] != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_00101cca;
                uVar23 = 0x194;
                pcVar20 = "Condition \"E->value.in_tree\" is true.";
                goto LAB_00101bb9;
              }
              *(undefined1 *)(lVar4 + 0x24) = 1;
              lVar17 = SceneStringNames::singleton + 0x1b8;
              Variant::Variant((Variant *)local_b8,pOVar15);
              local_a0[0] = 0;
              local_a0[1] = 0;
              local_98 = (undefined1  [16])0x0;
              local_e8 = (Variant *)local_b8;
              (**(code **)(*(long *)this + 0xd0))(this,lVar17,&local_e8,1);
              if (Variant::needs_deinit[local_a0[0]] != '\0') {
                Variant::_clear_internal();
              }
              if (Variant::needs_deinit[local_b8[0]] != '\0') {
                Variant::_clear_internal();
              }
              lVar17 = *(long *)(lVar4 + 0x30);
              if (lVar17 == 0) goto LAB_00101b36;
              lVar22 = 0;
              goto LAB_00101a08;
            }
          }
        }
LAB_00101b90:
        if (local_40[0] != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_00101cca;
        uVar23 = 0x193;
        pcVar20 = "Condition \"!E\" is true.";
        goto LAB_00101bb9;
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
  if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    uVar23 = 400;
    pcVar20 = "Parameter \"node\" is null.";
LAB_00101bb9:
    _err_print_error("_area_enter_tree","scene/3d/physics/area_3d.cpp",uVar23,pcVar20,0,0);
    return;
  }
  goto LAB_00101cca;
LAB_00101a08:
  do {
    lVar17 = *(long *)(lVar17 + -8);
    if ((int)lVar17 <= (int)lVar22) break;
    if (lVar17 <= lVar22) {
LAB_00101be0:
      _err_print_index_error
                ("operator[]","./core/templates/vector.h",0x38,lVar22,lVar17,"p_index",
                 "((Vector<T> *)(this))->_cowdata.size()","",false,true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar13 = (code *)invalidInstructionException();
      (*pcVar13)();
    }
    CowData<Area3D::AreaShapePair>::_copy_on_write((CowData<Area3D::AreaShapePair> *)(lVar4 + 0x30))
    ;
    lVar17 = *(long *)(lVar4 + 0x30);
    iVar2 = *(int *)(lVar17 + 4 + lVar22 * 8);
    if (lVar17 == 0) {
      lVar17 = 0;
      goto LAB_00101be0;
    }
    lVar17 = *(long *)(lVar17 + -8);
    if (lVar17 <= lVar22) goto LAB_00101be0;
    CowData<Area3D::AreaShapePair>::_copy_on_write((CowData<Area3D::AreaShapePair> *)(lVar4 + 0x30))
    ;
    iVar3 = *(int *)(*(long *)(lVar4 + 0x30) + lVar22 * 8);
    lVar17 = SceneStringNames::singleton + 0x160;
    local_f0 = *(ulong *)(lVar4 + 0x18);
    Variant::Variant((Variant *)local_b8,(RID *)&local_f0);
    Variant::Variant((Variant *)local_a0,pOVar15);
    Variant::Variant(local_88,iVar3);
    pVVar27 = (Variant *)local_40;
    Variant::Variant(local_70,iVar2);
    local_58 = 0;
    local_50 = (undefined1  [16])0x0;
    local_e8 = (Variant *)local_b8;
    pVStack_e0 = (Variant *)local_a0;
    local_d8 = local_88;
    pVStack_d0 = local_70;
    (**(code **)(*(long *)this + 0xd0))(this,lVar17,&local_e8,4);
    do {
      pVVar1 = pVVar27 + -0x18;
      pVVar27 = pVVar27 + -0x18;
      if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
        Variant::_clear_internal();
      }
    } while (pVVar27 != (Variant *)local_b8);
    lVar17 = *(long *)(lVar4 + 0x30);
    lVar22 = lVar22 + 1;
  } while (lVar17 != 0);
LAB_00101b36:
  if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00101cca:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Area3D::_body_enter_tree(ObjectID) */

void __thiscall Area3D::_body_enter_tree(Area3D *this,ulong param_2)

{
  Variant *pVVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  code *pcVar13;
  char cVar14;
  Object *pOVar15;
  ulong uVar16;
  long lVar17;
  uint uVar18;
  ulong *puVar19;
  char *pcVar20;
  uint uVar21;
  long lVar22;
  undefined8 uVar23;
  ulong uVar24;
  uint uVar25;
  ulong uVar26;
  Variant *pVVar27;
  long in_FS_OFFSET;
  bool bVar28;
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
  
  uVar18 = (uint)param_2 & 0xffffff;
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  if (uVar18 < (uint)ObjectDB::slot_max) {
    while( true ) {
      local_f0 = local_f0 & 0xffffffffffffff00;
      LOCK();
      bVar28 = (char)ObjectDB::spin_lock == '\0';
      cVar14 = (char)ObjectDB::spin_lock;
      if (bVar28) {
        ObjectDB::spin_lock._0_1_ = '\x01';
        cVar14 = '\0';
      }
      UNLOCK();
      if (bVar28) break;
                    /* WARNING: Ignoring partial resolution of indirect */
      local_f0._0_1_ = cVar14;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar19 = (ulong *)((ulong)uVar18 * 0x10 + ObjectDB::object_slots);
    if ((param_2 >> 0x18 & 0x7fffffffff) == (*puVar19 & 0x7fffffffff)) {
      uVar16 = puVar19[1];
      ObjectDB::spin_lock._0_1_ = '\0';
      if ((uVar16 != 0) &&
         (pOVar15 = (Object *)__dynamic_cast(uVar16,&Object::typeinfo,&Node::typeinfo,0),
         pOVar15 != (Object *)0x0)) {
        lVar4 = *(long *)(this + 0x668);
        if ((lVar4 != 0) && (*(int *)(this + 0x68c) != 0)) {
          uVar24 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x688) * 4)
                           );
          lVar17 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x688) * 8);
          uVar16 = param_2 * 0x3ffff - 1;
          uVar16 = (uVar16 ^ uVar16 >> 0x1f) * 0x15;
          uVar16 = (uVar16 ^ uVar16 >> 0xb) * 0x41;
          uVar16 = uVar16 >> 0x16 ^ uVar16;
          uVar26 = uVar16 & 0xffffffff;
          if ((int)uVar16 == 0) {
            uVar26 = 1;
          }
          auVar5._8_8_ = 0;
          auVar5._0_8_ = uVar26 * lVar17;
          auVar9._8_8_ = 0;
          auVar9._0_8_ = uVar24;
          lVar22 = SUB168(auVar5 * auVar9,8);
          uVar18 = *(uint *)(*(long *)(this + 0x670) + lVar22 * 4);
          uVar21 = SUB164(auVar5 * auVar9,8);
          if (uVar18 != 0) {
            uVar25 = 0;
            while ((uVar18 != (uint)uVar26 ||
                   (param_2 != *(ulong *)(*(long *)(lVar4 + lVar22 * 8) + 0x10)))) {
              uVar25 = uVar25 + 1;
              auVar6._8_8_ = 0;
              auVar6._0_8_ = (ulong)(uVar21 + 1) * lVar17;
              auVar10._8_8_ = 0;
              auVar10._0_8_ = uVar24;
              lVar22 = SUB168(auVar6 * auVar10,8);
              uVar18 = *(uint *)(*(long *)(this + 0x670) + lVar22 * 4);
              uVar21 = SUB164(auVar6 * auVar10,8);
              if ((uVar18 == 0) ||
                 (auVar7._8_8_ = 0, auVar7._0_8_ = (ulong)uVar18 * lVar17, auVar11._8_8_ = 0,
                 auVar11._0_8_ = uVar24, auVar8._8_8_ = 0,
                 auVar8._0_8_ = (ulong)((*(uint *)(hash_table_size_primes +
                                                  (ulong)*(uint *)(this + 0x688) * 4) + uVar21) -
                                       SUB164(auVar7 * auVar11,8)) * lVar17, auVar12._8_8_ = 0,
                 auVar12._0_8_ = uVar24, SUB164(auVar8 * auVar12,8) < uVar25)) goto LAB_00102150;
            }
            lVar4 = *(long *)(lVar4 + (ulong)uVar21 * 8);
            if (lVar4 != 0) {
              if (*(char *)(lVar4 + 0x24) != '\0') {
                if (local_40[0] != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_0010228a;
                uVar23 = 0xc6;
                pcVar20 = "Condition \"E->value.in_tree\" is true.";
                goto LAB_00102179;
              }
              *(undefined1 *)(lVar4 + 0x24) = 1;
              lVar17 = SceneStringNames::singleton + 0x148;
              Variant::Variant((Variant *)local_b8,pOVar15);
              local_a0[0] = 0;
              local_a0[1] = 0;
              local_98 = (undefined1  [16])0x0;
              local_e8 = (Variant *)local_b8;
              (**(code **)(*(long *)this + 0xd0))(this,lVar17,&local_e8,1);
              if (Variant::needs_deinit[local_a0[0]] != '\0') {
                Variant::_clear_internal();
              }
              if (Variant::needs_deinit[local_b8[0]] != '\0') {
                Variant::_clear_internal();
              }
              lVar17 = *(long *)(lVar4 + 0x30);
              if (lVar17 == 0) goto LAB_001020f6;
              lVar22 = 0;
              goto LAB_00101fc8;
            }
          }
        }
LAB_00102150:
        if (local_40[0] != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_0010228a;
        uVar23 = 0xc5;
        pcVar20 = "Condition \"!E\" is true.";
        goto LAB_00102179;
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
  if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    uVar23 = 0xc2;
    pcVar20 = "Parameter \"node\" is null.";
LAB_00102179:
    _err_print_error("_body_enter_tree","scene/3d/physics/area_3d.cpp",uVar23,pcVar20,0,0);
    return;
  }
  goto LAB_0010228a;
LAB_00101fc8:
  do {
    lVar17 = *(long *)(lVar17 + -8);
    if ((int)lVar17 <= (int)lVar22) break;
    if (lVar17 <= lVar22) {
LAB_001021a0:
      _err_print_index_error
                ("operator[]","./core/templates/vector.h",0x38,lVar22,lVar17,"p_index",
                 "((Vector<T> *)(this))->_cowdata.size()","",false,true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar13 = (code *)invalidInstructionException();
      (*pcVar13)();
    }
    CowData<Area3D::ShapePair>::_copy_on_write((CowData<Area3D::ShapePair> *)(lVar4 + 0x30));
    lVar17 = *(long *)(lVar4 + 0x30);
    iVar2 = *(int *)(lVar17 + 4 + lVar22 * 8);
    if (lVar17 == 0) {
      lVar17 = 0;
      goto LAB_001021a0;
    }
    lVar17 = *(long *)(lVar17 + -8);
    if (lVar17 <= lVar22) goto LAB_001021a0;
    CowData<Area3D::ShapePair>::_copy_on_write((CowData<Area3D::ShapePair> *)(lVar4 + 0x30));
    iVar3 = *(int *)(*(long *)(lVar4 + 0x30) + lVar22 * 8);
    lVar17 = SceneStringNames::singleton + 0x140;
    local_f0 = *(ulong *)(lVar4 + 0x18);
    Variant::Variant((Variant *)local_b8,(RID *)&local_f0);
    Variant::Variant((Variant *)local_a0,pOVar15);
    Variant::Variant(local_88,iVar3);
    pVVar27 = (Variant *)local_40;
    Variant::Variant(local_70,iVar2);
    local_58 = 0;
    local_50 = (undefined1  [16])0x0;
    local_e8 = (Variant *)local_b8;
    pVStack_e0 = (Variant *)local_a0;
    local_d8 = local_88;
    pVStack_d0 = local_70;
    (**(code **)(*(long *)this + 0xd0))(this,lVar17,&local_e8,4);
    do {
      pVVar1 = pVVar27 + -0x18;
      pVVar27 = pVVar27 + -0x18;
      if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
        Variant::_clear_internal();
      }
    } while (pVVar27 != (Variant *)local_b8);
    lVar17 = *(long *)(lVar4 + 0x30);
    lVar22 = lVar22 + 1;
  } while (lVar17 != 0);
LAB_001020f6:
  if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010228a:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Area3D::_body_exit_tree(ObjectID) */

void __thiscall Area3D::_body_exit_tree(Area3D *this,ulong param_2)

{
  Variant *pVVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  code *pcVar13;
  char cVar14;
  Object *pOVar15;
  ulong uVar16;
  long lVar17;
  uint uVar18;
  ulong *puVar19;
  char *pcVar20;
  uint uVar21;
  long lVar22;
  undefined8 uVar23;
  ulong uVar24;
  uint uVar25;
  ulong uVar26;
  Variant *pVVar27;
  long in_FS_OFFSET;
  bool bVar28;
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
  
  uVar18 = (uint)param_2 & 0xffffff;
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  if (uVar18 < (uint)ObjectDB::slot_max) {
    while( true ) {
      local_f0 = local_f0 & 0xffffffffffffff00;
      LOCK();
      bVar28 = (char)ObjectDB::spin_lock == '\0';
      cVar14 = (char)ObjectDB::spin_lock;
      if (bVar28) {
        ObjectDB::spin_lock._0_1_ = '\x01';
        cVar14 = '\0';
      }
      UNLOCK();
      if (bVar28) break;
                    /* WARNING: Ignoring partial resolution of indirect */
      local_f0._0_1_ = cVar14;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar19 = (ulong *)((ulong)uVar18 * 0x10 + ObjectDB::object_slots);
    if ((param_2 >> 0x18 & 0x7fffffffff) == (*puVar19 & 0x7fffffffff)) {
      uVar16 = puVar19[1];
      ObjectDB::spin_lock._0_1_ = '\0';
      if ((uVar16 != 0) &&
         (pOVar15 = (Object *)__dynamic_cast(uVar16,&Object::typeinfo,&Node::typeinfo,0),
         pOVar15 != (Object *)0x0)) {
        lVar4 = *(long *)(this + 0x668);
        if ((lVar4 != 0) && (*(int *)(this + 0x68c) != 0)) {
          uVar24 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x688) * 4)
                           );
          lVar17 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x688) * 8);
          uVar16 = param_2 * 0x3ffff - 1;
          uVar16 = (uVar16 ^ uVar16 >> 0x1f) * 0x15;
          uVar16 = (uVar16 ^ uVar16 >> 0xb) * 0x41;
          uVar16 = uVar16 >> 0x16 ^ uVar16;
          uVar26 = uVar16 & 0xffffffff;
          if ((int)uVar16 == 0) {
            uVar26 = 1;
          }
          auVar5._8_8_ = 0;
          auVar5._0_8_ = uVar26 * lVar17;
          auVar9._8_8_ = 0;
          auVar9._0_8_ = uVar24;
          lVar22 = SUB168(auVar5 * auVar9,8);
          uVar18 = *(uint *)(*(long *)(this + 0x670) + lVar22 * 4);
          uVar21 = SUB164(auVar5 * auVar9,8);
          if (uVar18 != 0) {
            uVar25 = 0;
            while ((uVar18 != (uint)uVar26 ||
                   (param_2 != *(ulong *)(*(long *)(lVar4 + lVar22 * 8) + 0x10)))) {
              uVar25 = uVar25 + 1;
              auVar6._8_8_ = 0;
              auVar6._0_8_ = (ulong)(uVar21 + 1) * lVar17;
              auVar10._8_8_ = 0;
              auVar10._0_8_ = uVar24;
              lVar22 = SUB168(auVar6 * auVar10,8);
              uVar18 = *(uint *)(*(long *)(this + 0x670) + lVar22 * 4);
              uVar21 = SUB164(auVar6 * auVar10,8);
              if ((uVar18 == 0) ||
                 (auVar7._8_8_ = 0, auVar7._0_8_ = (ulong)uVar18 * lVar17, auVar11._8_8_ = 0,
                 auVar11._0_8_ = uVar24, auVar8._8_8_ = 0,
                 auVar8._0_8_ = (ulong)((*(uint *)(hash_table_size_primes +
                                                  (ulong)*(uint *)(this + 0x688) * 4) + uVar21) -
                                       SUB164(auVar7 * auVar11,8)) * lVar17, auVar12._8_8_ = 0,
                 auVar12._0_8_ = uVar24, SUB164(auVar8 * auVar12,8) < uVar25)) goto LAB_00102710;
            }
            lVar4 = *(long *)(lVar4 + (ulong)uVar21 * 8);
            if (lVar4 != 0) {
              if (*(char *)(lVar4 + 0x24) == '\0') {
                if (local_40[0] != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_0010284a;
                uVar23 = 0xd5;
                pcVar20 = "Condition \"!E->value.in_tree\" is true.";
                goto LAB_00102739;
              }
              *(undefined1 *)(lVar4 + 0x24) = 0;
              lVar17 = SceneStringNames::singleton + 0x158;
              Variant::Variant((Variant *)local_b8,pOVar15);
              local_a0[0] = 0;
              local_a0[1] = 0;
              local_98 = (undefined1  [16])0x0;
              local_e8 = (Variant *)local_b8;
              (**(code **)(*(long *)this + 0xd0))(this,lVar17,&local_e8,1);
              if (Variant::needs_deinit[local_a0[0]] != '\0') {
                Variant::_clear_internal();
              }
              if (Variant::needs_deinit[local_b8[0]] != '\0') {
                Variant::_clear_internal();
              }
              lVar17 = *(long *)(lVar4 + 0x30);
              if (lVar17 == 0) goto LAB_001026b6;
              lVar22 = 0;
              goto LAB_00102588;
            }
          }
        }
LAB_00102710:
        if (local_40[0] != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_0010284a;
        uVar23 = 0xd4;
        pcVar20 = "Condition \"!E\" is true.";
        goto LAB_00102739;
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
  if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    uVar23 = 0xd2;
    pcVar20 = "Parameter \"node\" is null.";
LAB_00102739:
    _err_print_error("_body_exit_tree","scene/3d/physics/area_3d.cpp",uVar23,pcVar20,0,0);
    return;
  }
  goto LAB_0010284a;
LAB_00102588:
  do {
    lVar17 = *(long *)(lVar17 + -8);
    if ((int)lVar17 <= (int)lVar22) break;
    if (lVar17 <= lVar22) {
LAB_00102760:
      _err_print_index_error
                ("operator[]","./core/templates/vector.h",0x38,lVar22,lVar17,"p_index",
                 "((Vector<T> *)(this))->_cowdata.size()","",false,true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar13 = (code *)invalidInstructionException();
      (*pcVar13)();
    }
    CowData<Area3D::ShapePair>::_copy_on_write((CowData<Area3D::ShapePair> *)(lVar4 + 0x30));
    lVar17 = *(long *)(lVar4 + 0x30);
    iVar2 = *(int *)(lVar17 + 4 + lVar22 * 8);
    if (lVar17 == 0) {
      lVar17 = 0;
      goto LAB_00102760;
    }
    lVar17 = *(long *)(lVar17 + -8);
    if (lVar17 <= lVar22) goto LAB_00102760;
    CowData<Area3D::ShapePair>::_copy_on_write((CowData<Area3D::ShapePair> *)(lVar4 + 0x30));
    iVar3 = *(int *)(*(long *)(lVar4 + 0x30) + lVar22 * 8);
    lVar17 = SceneStringNames::singleton + 0x150;
    local_f0 = *(ulong *)(lVar4 + 0x18);
    Variant::Variant((Variant *)local_b8,(RID *)&local_f0);
    Variant::Variant((Variant *)local_a0,pOVar15);
    Variant::Variant(local_88,iVar3);
    pVVar27 = (Variant *)local_40;
    Variant::Variant(local_70,iVar2);
    local_58 = 0;
    local_50 = (undefined1  [16])0x0;
    local_e8 = (Variant *)local_b8;
    pVStack_e0 = (Variant *)local_a0;
    local_d8 = local_88;
    pVStack_d0 = local_70;
    (**(code **)(*(long *)this + 0xd0))(this,lVar17,&local_e8,4);
    do {
      pVVar1 = pVVar27 + -0x18;
      pVVar27 = pVVar27 + -0x18;
      if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
        Variant::_clear_internal();
      }
    } while (pVVar27 != (Variant *)local_b8);
    lVar17 = *(long *)(lVar4 + 0x30);
    lVar22 = lVar22 + 1;
  } while (lVar17 != 0);
LAB_001026b6:
  if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010284a:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Area3D::_area_exit_tree(ObjectID) */

void __thiscall Area3D::_area_exit_tree(Area3D *this,ulong param_2)

{
  Variant *pVVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  code *pcVar13;
  char cVar14;
  Object *pOVar15;
  ulong uVar16;
  long lVar17;
  uint uVar18;
  ulong *puVar19;
  char *pcVar20;
  uint uVar21;
  long lVar22;
  undefined8 uVar23;
  ulong uVar24;
  uint uVar25;
  ulong uVar26;
  Variant *pVVar27;
  long in_FS_OFFSET;
  bool bVar28;
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
  
  uVar18 = (uint)param_2 & 0xffffff;
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  if (uVar18 < (uint)ObjectDB::slot_max) {
    while( true ) {
      local_f0 = local_f0 & 0xffffffffffffff00;
      LOCK();
      bVar28 = (char)ObjectDB::spin_lock == '\0';
      cVar14 = (char)ObjectDB::spin_lock;
      if (bVar28) {
        ObjectDB::spin_lock._0_1_ = '\x01';
        cVar14 = '\0';
      }
      UNLOCK();
      if (bVar28) break;
                    /* WARNING: Ignoring partial resolution of indirect */
      local_f0._0_1_ = cVar14;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar19 = (ulong *)((ulong)uVar18 * 0x10 + ObjectDB::object_slots);
    if ((param_2 >> 0x18 & 0x7fffffffff) == (*puVar19 & 0x7fffffffff)) {
      uVar16 = puVar19[1];
      ObjectDB::spin_lock._0_1_ = '\0';
      if ((uVar16 != 0) &&
         (pOVar15 = (Object *)__dynamic_cast(uVar16,&Object::typeinfo,&Node::typeinfo,0),
         pOVar15 != (Object *)0x0)) {
        lVar4 = *(long *)(this + 0x698);
        if ((lVar4 != 0) && (*(int *)(this + 0x6bc) != 0)) {
          uVar24 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x6b8) * 4)
                           );
          lVar17 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x6b8) * 8);
          uVar16 = param_2 * 0x3ffff - 1;
          uVar16 = (uVar16 ^ uVar16 >> 0x1f) * 0x15;
          uVar16 = (uVar16 ^ uVar16 >> 0xb) * 0x41;
          uVar16 = uVar16 >> 0x16 ^ uVar16;
          uVar26 = uVar16 & 0xffffffff;
          if ((int)uVar16 == 0) {
            uVar26 = 1;
          }
          auVar5._8_8_ = 0;
          auVar5._0_8_ = uVar26 * lVar17;
          auVar9._8_8_ = 0;
          auVar9._0_8_ = uVar24;
          lVar22 = SUB168(auVar5 * auVar9,8);
          uVar18 = *(uint *)(*(long *)(this + 0x6a0) + lVar22 * 4);
          uVar21 = SUB164(auVar5 * auVar9,8);
          if (uVar18 != 0) {
            uVar25 = 0;
            while ((uVar18 != (uint)uVar26 ||
                   (param_2 != *(ulong *)(*(long *)(lVar4 + lVar22 * 8) + 0x10)))) {
              uVar25 = uVar25 + 1;
              auVar6._8_8_ = 0;
              auVar6._0_8_ = (ulong)(uVar21 + 1) * lVar17;
              auVar10._8_8_ = 0;
              auVar10._0_8_ = uVar24;
              lVar22 = SUB168(auVar6 * auVar10,8);
              uVar18 = *(uint *)(*(long *)(this + 0x6a0) + lVar22 * 4);
              uVar21 = SUB164(auVar6 * auVar10,8);
              if ((uVar18 == 0) ||
                 (auVar7._8_8_ = 0, auVar7._0_8_ = (ulong)uVar18 * lVar17, auVar11._8_8_ = 0,
                 auVar11._0_8_ = uVar24, auVar8._8_8_ = 0,
                 auVar8._0_8_ = (ulong)((*(uint *)(hash_table_size_primes +
                                                  (ulong)*(uint *)(this + 0x6b8) * 4) + uVar21) -
                                       SUB164(auVar7 * auVar11,8)) * lVar17, auVar12._8_8_ = 0,
                 auVar12._0_8_ = uVar24, SUB164(auVar8 * auVar12,8) < uVar25)) goto LAB_00102cd0;
            }
            lVar4 = *(long *)(lVar4 + (ulong)uVar21 * 8);
            if (lVar4 != 0) {
              if (*(char *)(lVar4 + 0x24) == '\0') {
                if (local_40[0] != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_00102e0a;
                uVar23 = 0x1a3;
                pcVar20 = "Condition \"!E->value.in_tree\" is true.";
                goto LAB_00102cf9;
              }
              *(undefined1 *)(lVar4 + 0x24) = 0;
              lVar17 = SceneStringNames::singleton + 0x1c0;
              Variant::Variant((Variant *)local_b8,pOVar15);
              local_a0[0] = 0;
              local_a0[1] = 0;
              local_98 = (undefined1  [16])0x0;
              local_e8 = (Variant *)local_b8;
              (**(code **)(*(long *)this + 0xd0))(this,lVar17,&local_e8,1);
              if (Variant::needs_deinit[local_a0[0]] != '\0') {
                Variant::_clear_internal();
              }
              if (Variant::needs_deinit[local_b8[0]] != '\0') {
                Variant::_clear_internal();
              }
              lVar17 = *(long *)(lVar4 + 0x30);
              if (lVar17 == 0) goto LAB_00102c76;
              lVar22 = 0;
              goto LAB_00102b48;
            }
          }
        }
LAB_00102cd0:
        if (local_40[0] != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_00102e0a;
        uVar23 = 0x1a2;
        pcVar20 = "Condition \"!E\" is true.";
        goto LAB_00102cf9;
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
  if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    uVar23 = 0x1a0;
    pcVar20 = "Parameter \"node\" is null.";
LAB_00102cf9:
    _err_print_error("_area_exit_tree","scene/3d/physics/area_3d.cpp",uVar23,pcVar20,0,0);
    return;
  }
  goto LAB_00102e0a;
LAB_00102b48:
  do {
    lVar17 = *(long *)(lVar17 + -8);
    if ((int)lVar17 <= (int)lVar22) break;
    if (lVar17 <= lVar22) {
LAB_00102d20:
      _err_print_index_error
                ("operator[]","./core/templates/vector.h",0x38,lVar22,lVar17,"p_index",
                 "((Vector<T> *)(this))->_cowdata.size()","",false,true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar13 = (code *)invalidInstructionException();
      (*pcVar13)();
    }
    CowData<Area3D::AreaShapePair>::_copy_on_write((CowData<Area3D::AreaShapePair> *)(lVar4 + 0x30))
    ;
    lVar17 = *(long *)(lVar4 + 0x30);
    iVar2 = *(int *)(lVar17 + 4 + lVar22 * 8);
    if (lVar17 == 0) {
      lVar17 = 0;
      goto LAB_00102d20;
    }
    lVar17 = *(long *)(lVar17 + -8);
    if (lVar17 <= lVar22) goto LAB_00102d20;
    CowData<Area3D::AreaShapePair>::_copy_on_write((CowData<Area3D::AreaShapePair> *)(lVar4 + 0x30))
    ;
    iVar3 = *(int *)(*(long *)(lVar4 + 0x30) + lVar22 * 8);
    lVar17 = SceneStringNames::singleton + 0x168;
    local_f0 = *(ulong *)(lVar4 + 0x18);
    Variant::Variant((Variant *)local_b8,(RID *)&local_f0);
    Variant::Variant((Variant *)local_a0,pOVar15);
    Variant::Variant(local_88,iVar3);
    pVVar27 = (Variant *)local_40;
    Variant::Variant(local_70,iVar2);
    local_58 = 0;
    local_50 = (undefined1  [16])0x0;
    local_e8 = (Variant *)local_b8;
    pVStack_e0 = (Variant *)local_a0;
    local_d8 = local_88;
    pVStack_d0 = local_70;
    (**(code **)(*(long *)this + 0xd0))(this,lVar17,&local_e8,4);
    do {
      pVVar1 = pVVar27 + -0x18;
      pVVar27 = pVVar27 + -0x18;
      if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
        Variant::_clear_internal();
      }
    } while (pVVar27 != (Variant *)local_b8);
    lVar17 = *(long *)(lVar4 + 0x30);
    lVar22 = lVar22 + 1;
  } while (lVar17 != 0);
LAB_00102c76:
  if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00102e0a:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Area3D::get_overlapping_areas() const */

void Area3D::get_overlapping_areas(void)

{
  long *plVar1;
  char cVar2;
  undefined8 *puVar3;
  Object *pOVar4;
  ulong uVar5;
  long lVar6;
  Variant *pVVar7;
  uint uVar8;
  ulong *puVar9;
  long in_RSI;
  uint uVar10;
  Array *in_RDI;
  long in_FS_OFFSET;
  bool bVar11;
  long local_70;
  char *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Array::Array(in_RDI);
  local_50 = (undefined1  [16])0x0;
  local_68 = "Area3D";
  local_58 = 0;
  local_70 = 0;
  local_60 = 6;
  String::parse_latin1((StrRange *)&local_70);
  StringName::StringName((StringName *)&local_68,(String *)&local_70,false);
  uVar10 = (uint)in_RDI;
  Array::set_typed(uVar10,(StringName *)0x18,(Variant *)&local_68);
  if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
    StringName::unref();
  }
  lVar6 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar6 + -0x10),false);
    }
  }
  if (Variant::needs_deinit[(int)local_58] == '\0') {
    cVar2 = *(char *)(in_RSI + 0x658);
  }
  else {
    Variant::_clear_internal();
    cVar2 = *(char *)(in_RSI + 0x658);
  }
  if (cVar2 == '\0') {
    _err_print_error("get_overlapping_areas","scene/3d/physics/area_3d.cpp",0x228,
                     "Condition \"!monitoring\" is true. Returning: ret",
                     "Can\'t find overlapping areas when monitoring is off.",0,0);
  }
  else {
    Array::resize(uVar10);
    for (puVar3 = *(undefined8 **)(in_RSI + 0x6a8); puVar3 != (undefined8 *)0x0;
        puVar3 = (undefined8 *)*puVar3) {
      uVar8 = (uint)puVar3[2] & 0xffffff;
      if (uVar8 < (uint)ObjectDB::slot_max) {
        while( true ) {
          uVar5 = (ulong)local_68 >> 8;
          local_68 = (char *)(uVar5 << 8);
          LOCK();
          bVar11 = (char)ObjectDB::spin_lock == '\0';
          if (bVar11) {
            ObjectDB::spin_lock._0_1_ = '\x01';
          }
          UNLOCK();
          if (bVar11) break;
          local_68 = (char *)(uVar5 << 8);
          do {
          } while ((char)ObjectDB::spin_lock != '\0');
        }
        puVar9 = (ulong *)((ulong)uVar8 * 0x10 + ObjectDB::object_slots);
        if (((ulong)puVar3[2] >> 0x18 & 0x7fffffffff) == (*puVar9 & 0x7fffffffff)) {
          pOVar4 = (Object *)puVar9[1];
          ObjectDB::spin_lock._0_1_ = '\0';
          if (pOVar4 != (Object *)0x0) {
            Variant::Variant((Variant *)&local_58,pOVar4);
            pVVar7 = (Variant *)Array::operator[](uVar10);
            if (pVVar7 == (Variant *)&local_58) {
              if (Variant::needs_deinit[(int)local_58] != '\0') {
                Variant::_clear_internal();
              }
            }
            else {
              if (Variant::needs_deinit[*(int *)pVVar7] != '\0') {
                Variant::_clear_internal();
              }
              *(undefined4 *)pVVar7 = 0;
              *(int *)pVVar7 = (int)local_58;
              *(undefined8 *)(pVVar7 + 8) = local_50._0_8_;
              *(undefined8 *)(pVVar7 + 0x10) = local_50._8_8_;
            }
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
    Array::resize(uVar10);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* Area3D::get_overlapping_bodies() const */

void Area3D::get_overlapping_bodies(void)

{
  long *plVar1;
  char cVar2;
  undefined8 *puVar3;
  Object *pOVar4;
  ulong uVar5;
  long lVar6;
  Variant *pVVar7;
  uint uVar8;
  ulong *puVar9;
  long in_RSI;
  uint uVar10;
  Array *in_RDI;
  long in_FS_OFFSET;
  bool bVar11;
  long local_70;
  char *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Array::Array(in_RDI);
  local_50 = (undefined1  [16])0x0;
  local_68 = "Node3D";
  local_58 = 0;
  local_70 = 0;
  local_60 = 6;
  String::parse_latin1((StrRange *)&local_70);
  StringName::StringName((StringName *)&local_68,(String *)&local_70,false);
  uVar10 = (uint)in_RDI;
  Array::set_typed(uVar10,(StringName *)0x18,(Variant *)&local_68);
  if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
    StringName::unref();
  }
  lVar6 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar6 + -0x10),false);
    }
  }
  if (Variant::needs_deinit[(int)local_58] == '\0') {
    cVar2 = *(char *)(in_RSI + 0x658);
  }
  else {
    Variant::_clear_internal();
    cVar2 = *(char *)(in_RSI + 0x658);
  }
  if (cVar2 == '\0') {
    _err_print_error("get_overlapping_bodies","scene/3d/physics/area_3d.cpp",0x202,
                     "Condition \"!monitoring\" is true. Returning: ret",
                     "Can\'t find overlapping bodies when monitoring is off.",0,0);
  }
  else {
    Array::resize(uVar10);
    for (puVar3 = *(undefined8 **)(in_RSI + 0x678); puVar3 != (undefined8 *)0x0;
        puVar3 = (undefined8 *)*puVar3) {
      uVar8 = (uint)puVar3[2] & 0xffffff;
      if (uVar8 < (uint)ObjectDB::slot_max) {
        while( true ) {
          uVar5 = (ulong)local_68 >> 8;
          local_68 = (char *)(uVar5 << 8);
          LOCK();
          bVar11 = (char)ObjectDB::spin_lock == '\0';
          if (bVar11) {
            ObjectDB::spin_lock._0_1_ = '\x01';
          }
          UNLOCK();
          if (bVar11) break;
          local_68 = (char *)(uVar5 << 8);
          do {
          } while ((char)ObjectDB::spin_lock != '\0');
        }
        puVar9 = (ulong *)((ulong)uVar8 * 0x10 + ObjectDB::object_slots);
        if (((ulong)puVar3[2] >> 0x18 & 0x7fffffffff) == (*puVar9 & 0x7fffffffff)) {
          pOVar4 = (Object *)puVar9[1];
          ObjectDB::spin_lock._0_1_ = '\0';
          if (pOVar4 != (Object *)0x0) {
            Variant::Variant((Variant *)&local_58,pOVar4);
            pVVar7 = (Variant *)Array::operator[](uVar10);
            if (pVVar7 == (Variant *)&local_58) {
              if (Variant::needs_deinit[(int)local_58] != '\0') {
                Variant::_clear_internal();
              }
            }
            else {
              if (Variant::needs_deinit[*(int *)pVVar7] != '\0') {
                Variant::_clear_internal();
              }
              *(undefined4 *)pVVar7 = 0;
              *(int *)pVVar7 = (int)local_58;
              *(undefined8 *)(pVVar7 + 8) = local_50._0_8_;
              *(undefined8 *)(pVVar7 + 0x10) = local_50._8_8_;
            }
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
    Array::resize(uVar10);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* Area3D::_validate_property(PropertyInfo&) const */

void __thiscall Area3D::_validate_property(Area3D *this,PropertyInfo *param_1)

{
  String *this_00;
  long *plVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  long in_FS_OFFSET;
  long local_40;
  long local_38;
  long local_30;
  
  this_00 = (String *)(param_1 + 8);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  cVar3 = String::operator==(this_00,"audio_bus_name");
  if ((cVar3 == '\0') && (cVar3 = String::operator==(this_00,"reverb_bus_name"), cVar3 == '\0')) {
    cVar3 = String::begins_with((char *)this_00);
    if ((cVar3 == '\0') ||
       (cVar3 = String::operator!=(this_00,"gravity_space_override"), cVar3 == '\0')) {
      cVar3 = String::begins_with((char *)this_00);
      if ((cVar3 == '\0') ||
         (cVar3 = String::operator!=(this_00,"linear_damp_space_override"), cVar3 == '\0')) {
        cVar3 = String::begins_with((char *)this_00);
        if ((cVar3 == '\0') ||
           (cVar3 = String::operator!=(this_00,"angular_damp_space_override"), cVar3 == '\0'))
        goto LAB_0010351b;
        iVar4 = *(int *)(this + 0x638);
      }
      else {
        iVar4 = *(int *)(this + 0x634);
      }
      if (iVar4 != 0) goto LAB_0010351b;
    }
    else if (*(int *)(this + 0x618) != 0) {
      if (this[0x62c] == (Area3D)0x0) {
        cVar3 = String::begins_with((char *)this_00);
      }
      else {
        cVar3 = String::operator==(this_00,"gravity_direction");
      }
      if (cVar3 == '\0') goto LAB_0010351b;
    }
    *(undefined4 *)(param_1 + 0x28) = 2;
  }
  else {
    local_40 = 0;
    iVar5 = 0;
    AudioServer::get_singleton();
    iVar4 = AudioServer::get_bus_count();
    if (0 < iVar4) {
      while( true ) {
        AudioServer::get_singleton();
        AudioServer::get_bus_name((int)(String *)&local_38);
        String::operator+=((String *)&local_40,(String *)&local_38);
        lVar2 = local_38;
        if (local_38 != 0) {
          LOCK();
          plVar1 = (long *)(local_38 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_38 = 0;
            Memory::free_static((void *)(lVar2 + -0x10),false);
          }
        }
        AudioServer::get_singleton();
        iVar5 = iVar5 + 1;
        iVar4 = AudioServer::get_bus_count();
        if (iVar4 <= iVar5) break;
        String::operator+=((String *)&local_40,",");
      }
    }
    if (*(long *)(param_1 + 0x20) != local_40) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(param_1 + 0x20),(CowData *)&local_40);
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
LAB_0010351b:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Area3D::_initialize_wind() */

void __thiscall Area3D::_initialize_wind(Area3D *this)

{
  code *pcVar1;
  char cVar2;
  long lVar3;
  long *plVar4;
  char *pcVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
  float fVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  NodePath local_c0 [8];
  String local_b8 [8];
  undefined8 local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  uint local_90;
  undefined8 local_88;
  undefined4 local_80;
  int local_78 [2];
  float local_70;
  undefined8 local_68;
  float fStack_64;
  float local_58;
  undefined8 local_54;
  undefined4 local_4c;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_90 = 0;
  local_98 = 0;
  local_88 = 0;
  local_80 = 0;
  cVar2 = NodePath::is_empty();
  if (cVar2 == '\0') {
    lVar3 = Node::get_node_or_null((NodePath *)this);
    if (lVar3 == 0) {
      local_b0 = 0;
      local_a8 = &_LC58;
      local_a0 = 2;
      String::parse_latin1((StrRange *)&local_b0);
      NodePath::operator_cast_to_String(local_c0);
      operator+((char *)local_b8,(String *)"Path to wind source is invalid: \'");
      String::operator+((String *)&local_a8,local_b8);
      pcVar5 = "Parameter \"wind_source_node\" is null.";
      uVar6 = 0xaf;
    }
    else {
      lVar3 = __dynamic_cast(lVar3,&Object::typeinfo,&Node3D::typeinfo,0);
      if (lVar3 != 0) {
        Node3D::get_transform();
        fVar7 = local_70 * local_70 + fStack_64 * fStack_64 + local_58 * local_58;
        if (fVar7 == 0.0) {
          local_98 = CONCAT44(_LC55._4_4_,(uint)_LC55);
          local_90 = _LC56;
        }
        else {
          fVar7 = SQRT(fVar7);
          auVar8._4_4_ = fStack_64;
          auVar8._0_4_ = local_70;
          auVar8._8_8_ = 0;
          auVar9._4_4_ = fVar7;
          auVar9._0_4_ = fVar7;
          auVar9._8_8_ = _LC64;
          auVar8 = divps(auVar8,auVar9);
          local_90 = (uint)(local_58 / fVar7) ^ _LC56;
          local_98 = CONCAT44(auVar8._4_4_ ^ _LC55._4_4_,auVar8._0_4_ ^ (uint)_LC55);
        }
        fVar7 = *(float *)(this + 0x648);
        local_88 = local_54;
        local_80 = local_4c;
        goto LAB_001037a8;
      }
      local_b0 = 0;
      local_a8 = &_LC58;
      local_a0 = 2;
      String::parse_latin1((StrRange *)&local_b0);
      NodePath::operator_cast_to_String(local_c0);
      operator+((char *)local_b8,(String *)"Path to wind source does not point to a Node3D: \'");
      String::operator+((String *)&local_a8,local_b8);
      pcVar5 = "Parameter \"wind_source_node3d\" is null.";
      uVar6 = 0xb1;
    }
    _err_print_error("_initialize_wind","scene/3d/physics/area_3d.cpp",uVar6,pcVar5,
                     (CowData<char32_t> *)&local_a8,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_c0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  }
  else {
    fVar7 = 0.0;
LAB_001037a8:
    plVar4 = (long *)PhysicsServer3D::get_singleton();
    pcVar1 = *(code **)(*plVar4 + 0x298);
    Variant::Variant((Variant *)local_78,*(float *)(this + 0x64c));
    (*pcVar1)(plVar4,*(undefined8 *)(this + 0x538),0xd,(Variant *)local_78);
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    plVar4 = (long *)PhysicsServer3D::get_singleton();
    pcVar1 = *(code **)(*plVar4 + 0x298);
    Variant::Variant((Variant *)local_78,(Vector3 *)&local_88);
    (*pcVar1)(plVar4,*(undefined8 *)(this + 0x538),0xb,(Variant *)local_78);
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    plVar4 = (long *)PhysicsServer3D::get_singleton();
    pcVar1 = *(code **)(*plVar4 + 0x298);
    Variant::Variant((Variant *)local_78,(Vector3 *)&local_98);
    (*pcVar1)(plVar4,*(undefined8 *)(this + 0x538),0xc,(Variant *)local_78);
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    plVar4 = (long *)PhysicsServer3D::get_singleton();
    pcVar1 = *(code **)(*plVar4 + 0x298);
    Variant::Variant((Variant *)local_78,fVar7);
    (*pcVar1)(plVar4,*(undefined8 *)(this + 0x538),10,(Variant *)local_78);
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* Area3D::set_wind_force_magnitude(float) */

void __thiscall Area3D::set_wind_force_magnitude(Area3D *this,float param_1)

{
  *(float *)(this + 0x648) = param_1;
  if (((byte)this[0x2fa] & 0x40) == 0) {
    return;
  }
  _initialize_wind(this);
  return;
}



/* Area3D::set_wind_attenuation_factor(float) */

void __thiscall Area3D::set_wind_attenuation_factor(Area3D *this,float param_1)

{
  *(float *)(this + 0x64c) = param_1;
  if (((byte)this[0x2fa] & 0x40) == 0) {
    return;
  }
  _initialize_wind(this);
  return;
}



/* Area3D::set_wind_source_path(NodePath const&) */

void __thiscall Area3D::set_wind_source_path(Area3D *this,NodePath *param_1)

{
  NodePath::operator=((NodePath *)(this + 0x650),param_1);
  if (((byte)this[0x2fa] & 0x40) == 0) {
    return;
  }
  _initialize_wind(this);
  return;
}



/* Area3D::_notification(int) */

void __thiscall Area3D::_notification(Area3D *this,int param_1)

{
  if (param_1 != 10) {
    return;
  }
  _initialize_wind(this);
  return;
}



/* MethodBind* ClassDB::bind_method<MethodDefinition, void (Area3D::*)(float)>(MethodDefinition,
   void (Area3D::*)(float)) [clone .isra.0] */

MethodBind *
ClassDB::bind_method<MethodDefinition,void(Area3D::*)(float)>
          (MethodDefinition *param_1,_func_void_float *param_2)

{
  long lVar1;
  MethodBind *pMVar2;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  pMVar2 = create_method_bind<Area3D,float>(param_2);
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



/* MethodBind* ClassDB::bind_method<MethodDefinition, float (Area3D::*)() const>(MethodDefinition,
   float (Area3D::*)() const) [clone .isra.0] */

MethodBind *
ClassDB::bind_method<MethodDefinition,float(Area3D::*)()const>
          (MethodDefinition *param_1,_func_float *param_2)

{
  long lVar1;
  MethodBind *pMVar2;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  pMVar2 = create_method_bind<Area3D,float>(param_2);
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



/* Area3D::_bind_methods() */

void Area3D::_bind_methods(void)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined *puVar6;
  MethodBind *pMVar7;
  undefined *puVar8;
  long in_FS_OFFSET;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  long local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  long local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  long local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  long local_1b8;
  undefined8 local_1b0;
  char *local_1a8;
  undefined8 local_1a0;
  long local_198 [6];
  long local_168 [6];
  char *local_138;
  undefined8 local_130;
  char *local_108;
  undefined8 local_100;
  char *local_d8;
  long local_d0;
  undefined1 local_c8 [16];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98 [2];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  char **local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  D_METHOD<char_const*>((char *)&local_d8,"set_gravity_space_override_mode");
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar7 = create_method_bind<Area3D,Area3D::SpaceOverride>(set_gravity_space_override_mode);
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)&local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_d8);
  D_METHODP((char *)&local_d8,(char ***)"get_gravity_space_override_mode",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar7 = create_method_bind<Area3D,Area3D::SpaceOverride>(get_gravity_space_override_mode);
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)&local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_d8);
  D_METHOD<char_const*>((char *)&local_d8,"set_gravity_is_point");
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar7 = create_method_bind<Area3D,bool>(set_gravity_is_point);
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)&local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_d8);
  D_METHODP((char *)&local_d8,(char ***)"is_gravity_a_point",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar7 = create_method_bind<Area3D,bool>(is_gravity_a_point);
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)&local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_d8);
  D_METHOD<char_const*>((char *)&local_d8,"set_gravity_point_unit_distance");
  ClassDB::bind_method<MethodDefinition,void(Area3D::*)(float)>
            ((MethodDefinition *)&local_d8,set_gravity_point_unit_distance,0);
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_d8);
  D_METHODP((char *)&local_d8,(char ***)"get_gravity_point_unit_distance",0);
  ClassDB::bind_method<MethodDefinition,float(Area3D::*)()const>
            ((MethodDefinition *)&local_d8,get_gravity_point_unit_distance,0);
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_d8);
  D_METHOD<char_const*>((char *)&local_d8,"set_gravity_point_center");
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar7 = create_method_bind<Area3D,Vector3_const&>(set_gravity_point_center);
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)&local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_d8);
  D_METHODP((char *)&local_d8,(char ***)"get_gravity_point_center",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar7 = create_method_bind<Area3D,Vector3_const&>(get_gravity_point_center);
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)&local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_d8);
  D_METHOD<char_const*>((char *)&local_d8,"set_gravity_direction");
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar7 = create_method_bind<Area3D,Vector3_const&>(set_gravity_direction);
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)&local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_d8);
  D_METHODP((char *)&local_d8,(char ***)"get_gravity_direction",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar7 = create_method_bind<Area3D,Vector3_const&>(get_gravity_direction);
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)&local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_d8);
  D_METHOD<char_const*>((char *)&local_d8,"set_gravity");
  ClassDB::bind_method<MethodDefinition,void(Area3D::*)(float)>
            ((MethodDefinition *)&local_d8,set_gravity,0);
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_d8);
  D_METHODP((char *)&local_d8,(char ***)"get_gravity",0);
  ClassDB::bind_method<MethodDefinition,float(Area3D::*)()const>
            ((MethodDefinition *)&local_d8,get_gravity,0);
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_d8);
  D_METHOD<char_const*>((char *)&local_d8,"set_linear_damp_space_override_mode");
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar7 = create_method_bind<Area3D,Area3D::SpaceOverride>(set_linear_damp_space_override_mode);
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)&local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_d8);
  D_METHODP((char *)&local_d8,(char ***)"get_linear_damp_space_override_mode",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar7 = create_method_bind<Area3D,Area3D::SpaceOverride>(get_linear_damp_space_override_mode);
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)&local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_d8);
  D_METHOD<char_const*>((char *)&local_d8,"set_angular_damp_space_override_mode");
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar7 = create_method_bind<Area3D,Area3D::SpaceOverride>(set_angular_damp_space_override_mode);
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)&local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_d8);
  D_METHODP((char *)&local_d8,(char ***)"get_angular_damp_space_override_mode",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar7 = create_method_bind<Area3D,Area3D::SpaceOverride>(get_angular_damp_space_override_mode);
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)&local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_d8);
  D_METHOD<char_const*>((char *)&local_d8,"set_angular_damp");
  ClassDB::bind_method<MethodDefinition,void(Area3D::*)(float)>
            ((MethodDefinition *)&local_d8,set_angular_damp,0);
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_d8);
  D_METHODP((char *)&local_d8,(char ***)"get_angular_damp",0);
  ClassDB::bind_method<MethodDefinition,float(Area3D::*)()const>
            ((MethodDefinition *)&local_d8,get_angular_damp,0);
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_d8);
  D_METHOD<char_const*>((char *)&local_d8,"set_linear_damp");
  ClassDB::bind_method<MethodDefinition,void(Area3D::*)(float)>
            ((MethodDefinition *)&local_d8,set_linear_damp,0);
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_d8);
  D_METHODP((char *)&local_d8,(char ***)"get_linear_damp",0);
  ClassDB::bind_method<MethodDefinition,float(Area3D::*)()const>
            ((MethodDefinition *)&local_d8,get_linear_damp,0);
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_d8);
  D_METHOD<char_const*>((char *)&local_d8,"set_priority");
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar7 = create_method_bind<Area3D,int>(set_priority);
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)&local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_d8);
  D_METHODP((char *)&local_d8,(char ***)"get_priority",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar7 = create_method_bind<Area3D,int>(get_priority);
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)&local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_d8);
  D_METHOD<char_const*>((char *)&local_d8,"set_wind_force_magnitude");
  ClassDB::bind_method<MethodDefinition,void(Area3D::*)(float)>
            ((MethodDefinition *)&local_d8,set_wind_force_magnitude,0);
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_d8);
  D_METHODP((char *)&local_d8,(char ***)"get_wind_force_magnitude",0);
  ClassDB::bind_method<MethodDefinition,float(Area3D::*)()const>
            ((MethodDefinition *)&local_d8,get_wind_force_magnitude,0);
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_d8);
  D_METHOD<char_const*>((char *)&local_d8,"set_wind_attenuation_factor");
  ClassDB::bind_method<MethodDefinition,void(Area3D::*)(float)>
            ((MethodDefinition *)&local_d8,set_wind_attenuation_factor,0);
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_d8);
  D_METHODP((char *)&local_d8,(char ***)"get_wind_attenuation_factor",0);
  ClassDB::bind_method<MethodDefinition,float(Area3D::*)()const>
            ((MethodDefinition *)&local_d8,get_wind_attenuation_factor,0);
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_d8);
  local_60 = 0;
  local_68 = "wind_source_path";
  local_58 = &local_68;
  D_METHODP((char *)&local_d8,(char ***)"set_wind_source_path",(uint)&local_58);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar7 = create_method_bind<Area3D,NodePath_const&>(set_wind_source_path);
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)&local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_d8);
  D_METHODP((char *)&local_d8,(char ***)"get_wind_source_path",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar7 = create_method_bind<Area3D,NodePath_const&>(get_wind_source_path);
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)&local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_d8);
  D_METHOD<char_const*>((char *)&local_d8,"set_monitorable");
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar7 = create_method_bind<Area3D,bool>(set_monitorable);
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)&local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_d8);
  D_METHODP((char *)&local_d8,(char ***)"is_monitorable",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar7 = create_method_bind<Area3D,bool>(is_monitorable);
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)&local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_d8);
  D_METHOD<char_const*>((char *)&local_d8,"set_monitoring");
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar7 = create_method_bind<Area3D,bool>(set_monitoring);
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)&local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_d8);
  D_METHODP((char *)&local_d8,(char ***)"is_monitoring",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar7 = create_method_bind<Area3D,bool>(is_monitoring);
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)&local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_d8);
  D_METHODP((char *)&local_d8,(char ***)"get_overlapping_bodies",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar7 = create_method_bind<Area3D,TypedArray<Node3D>>(get_overlapping_bodies);
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)&local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_d8);
  D_METHODP((char *)&local_d8,(char ***)"get_overlapping_areas",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar7 = create_method_bind<Area3D,TypedArray<Area3D>>(get_overlapping_areas);
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)&local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_d8);
  D_METHODP((char *)&local_d8,(char ***)"has_overlapping_bodies",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar7 = create_method_bind<Area3D,bool>(has_overlapping_bodies);
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)&local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_d8);
  D_METHODP((char *)&local_d8,(char ***)"has_overlapping_areas",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar7 = create_method_bind<Area3D,bool>(has_overlapping_areas);
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)&local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_d8);
  D_METHOD<char_const*>((char *)&local_d8,"overlaps_body");
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar7 = create_method_bind<Area3D,bool,Node*>(overlaps_body);
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)&local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_d8);
  D_METHOD<char_const*>((char *)&local_d8,"overlaps_area");
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar7 = create_method_bind<Area3D,bool,Node*>(overlaps_area);
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)&local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_d8);
  D_METHOD<char_const*>((char *)&local_d8,"set_audio_bus_override");
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar7 = create_method_bind<Area3D,bool>(set_audio_bus_override);
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)&local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_d8);
  D_METHODP((char *)&local_d8,(char ***)"is_overriding_audio_bus",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar7 = create_method_bind<Area3D,bool>(is_overriding_audio_bus);
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)&local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_d8);
  D_METHOD<char_const*>((char *)&local_d8,"set_audio_bus_name");
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar7 = create_method_bind<Area3D,StringName_const&>(set_audio_bus_name);
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)&local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_d8);
  D_METHODP((char *)&local_d8,(char ***)"get_audio_bus_name",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar7 = create_method_bind<Area3D,StringName>(get_audio_bus_name);
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)&local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_d8);
  D_METHOD<char_const*>((char *)&local_d8,"set_use_reverb_bus");
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar7 = create_method_bind<Area3D,bool>(set_use_reverb_bus);
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)&local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_d8);
  D_METHODP((char *)&local_d8,(char ***)"is_using_reverb_bus",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar7 = create_method_bind<Area3D,bool>(is_using_reverb_bus);
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)&local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_d8);
  D_METHOD<char_const*>((char *)&local_d8,"set_reverb_bus_name");
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar7 = create_method_bind<Area3D,StringName_const&>(set_reverb_bus_name);
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)&local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_d8);
  D_METHODP((char *)&local_d8,(char ***)"get_reverb_bus_name",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar7 = create_method_bind<Area3D,StringName>(get_reverb_bus_name);
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)&local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_d8);
  D_METHOD<char_const*>((char *)&local_d8,"set_reverb_amount");
  ClassDB::bind_method<MethodDefinition,void(Area3D::*)(float)>
            ((MethodDefinition *)&local_d8,set_reverb_amount,0);
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_d8);
  D_METHODP((char *)&local_d8,(char ***)"get_reverb_amount",0);
  ClassDB::bind_method<MethodDefinition,float(Area3D::*)()const>
            ((MethodDefinition *)&local_d8,get_reverb_amount,0);
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_d8);
  D_METHOD<char_const*>((char *)&local_d8,"set_reverb_uniformity");
  ClassDB::bind_method<MethodDefinition,void(Area3D::*)(float)>
            ((MethodDefinition *)&local_d8,set_reverb_uniformity,0);
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_d8);
  D_METHODP((char *)&local_d8,(char ***)"get_reverb_uniformity",0);
  ClassDB::bind_method<MethodDefinition,float(Area3D::*)()const>
            ((MethodDefinition *)&local_d8,get_reverb_uniformity,0);
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_d8);
  local_d8 = "";
  local_1b8 = 0;
  local_1c0 = 0;
  local_d0 = 0;
  String::parse_latin1((StrRange *)&local_1c0);
  local_1c8 = 0;
  local_d8 = "local_shape_index";
  local_d0 = 0x11;
  String::parse_latin1((StrRange *)&local_1c8);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_108,2,(StrRange *)&local_1c8,0,(StrRange *)&local_1c0,6,
             (StrRange *)&local_1b8);
  local_d8 = "";
  local_1d0 = 0;
  local_1d8 = 0;
  local_d0 = 0;
  String::parse_latin1((StrRange *)&local_1d8);
  local_1e0 = 0;
  local_d8 = "body_shape_index";
  local_d0 = 0x10;
  String::parse_latin1((StrRange *)&local_1e0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_138,2,(StrRange *)&local_1e0,0,(StrRange *)&local_1d8,6,
             &local_1d0);
  local_1e8 = 0;
  local_d8 = "Node3D";
  local_1f0 = 0;
  local_d0 = 6;
  String::parse_latin1((StrRange *)&local_1f0);
  local_1f8 = 0;
  local_d8 = "body";
  local_d0 = 4;
  String::parse_latin1((StrRange *)&local_1f8);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_168,0x18,(StrRange *)&local_1f8,0x11,(StrRange *)&local_1f0,6,
             &local_1e8);
  local_d8 = "";
  local_200 = 0;
  local_208 = 0;
  local_d0 = 0;
  String::parse_latin1((StrRange *)&local_208);
  local_210 = 0;
  local_d8 = "body_rid";
  local_d0 = 8;
  String::parse_latin1((StrRange *)&local_210);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_198,0x17,(StrRange *)&local_210,0,(StrRange *)&local_208,6,
             &local_200);
  local_d8 = "body_shape_entered";
  local_1b0 = 0;
  local_d0 = 0x12;
  String::parse_latin1((StrRange *)&local_1b0);
  MethodInfo::MethodInfo<PropertyInfo,PropertyInfo,PropertyInfo,PropertyInfo>
            ((MethodInfo *)&local_d8,(StrRange *)&local_1b0,(PropertyInfo *)local_198,
             (PropertyInfo *)local_168,(PropertyInfo *)&local_138,(PropertyInfo *)&local_108);
  local_218 = 0;
  local_1a8 = "Area3D";
  local_1a0 = 6;
  String::parse_latin1((StrRange *)&local_218);
  StringName::StringName((StringName *)&local_1a8,(String *)&local_218,false);
  ClassDB::add_signal((StringName *)&local_1a8,(MethodInfo *)&local_d8);
  if ((StringName::configured != '\0') && (local_1a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_218);
  MethodInfo::~MethodInfo((MethodInfo *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b0);
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_198);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_210);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_208);
  if ((StringName::configured != '\0') && (local_200 != 0)) {
    StringName::unref();
  }
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_168);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1f0);
  if ((StringName::configured != '\0') && (local_1e8 != 0)) {
    StringName::unref();
  }
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_138);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1e0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1d8);
  if ((StringName::configured != '\0') && (local_1d0 != 0)) {
    StringName::unref();
  }
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c0);
  if ((StringName::configured != '\0') && (local_1b8 != 0)) {
    StringName::unref();
  }
  local_1b8 = 0;
  local_d8 = "";
  local_1c0 = 0;
  local_d0 = 0;
  String::parse_latin1((StrRange *)&local_1c0);
  local_d8 = "local_shape_index";
  local_1c8 = 0;
  local_d0 = 0x11;
  String::parse_latin1((StrRange *)&local_1c8);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_108,2,(StrRange *)&local_1c8,0,(StrRange *)&local_1c0,6,
             (StrRange *)&local_1b8);
  local_d8 = "";
  local_1d0 = 0;
  local_1d8 = 0;
  local_d0 = 0;
  String::parse_latin1((StrRange *)&local_1d8);
  local_1e0 = 0;
  local_d8 = "body_shape_index";
  local_d0 = 0x10;
  String::parse_latin1((StrRange *)&local_1e0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_138,2,(StrRange *)&local_1e0,0,(StrRange *)&local_1d8,6,
             &local_1d0);
  local_d8 = "Node3D";
  local_1e8 = 0;
  local_1f0 = 0;
  local_d0 = 6;
  String::parse_latin1((StrRange *)&local_1f0);
  local_d8 = "body";
  local_1f8 = 0;
  local_d0 = 4;
  String::parse_latin1((StrRange *)&local_1f8);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_168,0x18,(StrRange *)&local_1f8,0x11,(StrRange *)&local_1f0,6,
             &local_1e8);
  local_d8 = "";
  local_200 = 0;
  local_208 = 0;
  local_d0 = 0;
  String::parse_latin1((StrRange *)&local_208);
  local_d8 = "body_rid";
  local_210 = 0;
  local_d0 = 8;
  String::parse_latin1((StrRange *)&local_210);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_198,0x17,(StrRange *)&local_210,0,(StrRange *)&local_208,6,
             &local_200);
  local_d8 = "body_shape_exited";
  local_1b0 = 0;
  local_d0 = 0x11;
  String::parse_latin1((StrRange *)&local_1b0);
  MethodInfo::MethodInfo<PropertyInfo,PropertyInfo,PropertyInfo,PropertyInfo>
            ((MethodInfo *)&local_d8,(StrRange *)&local_1b0,(PropertyInfo *)local_198,
             (PropertyInfo *)local_168,(PropertyInfo *)&local_138,(PropertyInfo *)&local_108);
  local_1a8 = "Area3D";
  local_218 = 0;
  local_1a0 = 6;
  String::parse_latin1((StrRange *)&local_218);
  StringName::StringName((StringName *)&local_1a8,(String *)&local_218,false);
  ClassDB::add_signal((StringName *)&local_1a8,(MethodInfo *)&local_d8);
  if ((StringName::configured != '\0') && (local_1a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_218);
  MethodInfo::~MethodInfo((MethodInfo *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b0);
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_198);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_210);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_208);
  if ((StringName::configured != '\0') && (local_200 != 0)) {
    StringName::unref();
  }
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_168);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1f0);
  if ((StringName::configured != '\0') && (local_1e8 != 0)) {
    StringName::unref();
  }
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_138);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1e0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1d8);
  if ((StringName::configured != '\0') && (local_1d0 != 0)) {
    StringName::unref();
  }
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c0);
  if ((StringName::configured != '\0') && (local_1b8 != 0)) {
    StringName::unref();
  }
  local_198[0] = 0;
  local_d8 = "Node3D";
  local_1a8 = (char *)0x0;
  local_d0 = 6;
  String::parse_latin1((StrRange *)&local_1a8);
  local_d8 = "body";
  local_1b0 = 0;
  local_d0 = 4;
  String::parse_latin1((StrRange *)&local_1b0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_108,0x18,(StrRange *)&local_1b0,0x11,(StringName *)&local_1a8,6,
             (PropertyInfo *)local_198);
  local_d8 = "body_entered";
  local_168[0] = 0;
  local_d0 = 0xc;
  String::parse_latin1((StrRange *)local_168);
  local_c8 = (undefined1  [16])0x0;
  local_d8 = (char *)0x0;
  local_d0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 6;
  local_a0 = 1;
  local_98[0] = 0;
  local_88 = 0;
  local_80 = 0;
  local_70 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_d8,(CowData *)local_168);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_98,(PropertyInfo *)&local_108);
  local_138 = "Area3D";
  local_1b8 = 0;
  local_130 = 6;
  String::parse_latin1((StrRange *)&local_1b8);
  StringName::StringName((StringName *)&local_138,(String *)&local_1b8,false);
  ClassDB::add_signal((StringName *)&local_138,(MethodInfo *)&local_d8);
  if ((StringName::configured != '\0') && (local_138 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
  MethodInfo::~MethodInfo((MethodInfo *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_168);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a8);
  if ((StringName::configured != '\0') && (local_198[0] != 0)) {
    StringName::unref();
  }
  local_198[0] = 0;
  local_d8 = "Node3D";
  local_1a8 = (char *)0x0;
  local_d0 = 6;
  String::parse_latin1((StrRange *)&local_1a8);
  local_d8 = "body";
  local_1b0 = 0;
  local_d0 = 4;
  String::parse_latin1((StrRange *)&local_1b0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_108,0x18,(StrRange *)&local_1b0,0x11,(StringName *)&local_1a8,6,
             (PropertyInfo *)local_198);
  local_d8 = "body_exited";
  local_168[0] = 0;
  local_d0 = 0xb;
  String::parse_latin1((StrRange *)local_168);
  local_c8 = (undefined1  [16])0x0;
  local_d8 = (char *)0x0;
  local_d0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 6;
  local_a0 = 1;
  local_98[0] = 0;
  local_88 = 0;
  local_80 = 0;
  local_70 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_d8,(CowData *)local_168);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_98,(PropertyInfo *)&local_108);
  local_138 = "Area3D";
  local_1b8 = 0;
  local_130 = 6;
  String::parse_latin1((StrRange *)&local_1b8);
  StringName::StringName((StringName *)&local_138,(String *)&local_1b8,false);
  ClassDB::add_signal((StringName *)&local_138,(MethodInfo *)&local_d8);
  if ((StringName::configured != '\0') && (local_138 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
  MethodInfo::~MethodInfo((MethodInfo *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_168);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a8);
  if ((StringName::configured != '\0') && (local_198[0] != 0)) {
    StringName::unref();
  }
  local_1b8 = 0;
  local_d8 = "";
  local_1c0 = 0;
  local_d0 = 0;
  String::parse_latin1((StrRange *)&local_1c0);
  local_d8 = "local_shape_index";
  local_1c8 = 0;
  local_d0 = 0x11;
  String::parse_latin1((StrRange *)&local_1c8);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_108,2,(StrRange *)&local_1c8,0,(StrRange *)&local_1c0,6,
             (StrRange *)&local_1b8);
  local_d8 = "";
  local_1d0 = 0;
  local_1d8 = 0;
  local_d0 = 0;
  String::parse_latin1((StrRange *)&local_1d8);
  local_1e0 = 0;
  local_d8 = "area_shape_index";
  local_d0 = 0x10;
  String::parse_latin1((StrRange *)&local_1e0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_138,2,(StrRange *)&local_1e0,0,(StrRange *)&local_1d8,6,
             &local_1d0);
  local_d8 = "Area3D";
  local_1e8 = 0;
  local_1f0 = 0;
  local_d0 = 6;
  String::parse_latin1((StrRange *)&local_1f0);
  local_d8 = "area";
  local_1f8 = 0;
  local_d0 = 4;
  String::parse_latin1((StrRange *)&local_1f8);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_168,0x18,(StrRange *)&local_1f8,0x11,(StrRange *)&local_1f0,6,
             &local_1e8);
  local_d8 = "";
  local_200 = 0;
  local_208 = 0;
  local_d0 = 0;
  String::parse_latin1((StrRange *)&local_208);
  local_d8 = "area_rid";
  local_210 = 0;
  local_d0 = 8;
  String::parse_latin1((StrRange *)&local_210);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_198,0x17,(StrRange *)&local_210,0,(StrRange *)&local_208,6,
             &local_200);
  local_d8 = "area_shape_entered";
  local_1b0 = 0;
  local_d0 = 0x12;
  String::parse_latin1((StrRange *)&local_1b0);
  MethodInfo::MethodInfo<PropertyInfo,PropertyInfo,PropertyInfo,PropertyInfo>
            ((MethodInfo *)&local_d8,(StrRange *)&local_1b0,(PropertyInfo *)local_198,
             (PropertyInfo *)local_168,(PropertyInfo *)&local_138,(PropertyInfo *)&local_108);
  local_1a8 = "Area3D";
  local_218 = 0;
  local_1a0 = 6;
  String::parse_latin1((StrRange *)&local_218);
  StringName::StringName((StringName *)&local_1a8,(String *)&local_218,false);
  ClassDB::add_signal((StringName *)&local_1a8,(MethodInfo *)&local_d8);
  if ((StringName::configured != '\0') && (local_1a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_218);
  MethodInfo::~MethodInfo((MethodInfo *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b0);
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_198);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_210);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_208);
  if ((StringName::configured != '\0') && (local_200 != 0)) {
    StringName::unref();
  }
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_168);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1f0);
  if ((StringName::configured != '\0') && (local_1e8 != 0)) {
    StringName::unref();
  }
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_138);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1e0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1d8);
  if ((StringName::configured != '\0') && (local_1d0 != 0)) {
    StringName::unref();
  }
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c0);
  if ((StringName::configured != '\0') && (local_1b8 != 0)) {
    StringName::unref();
  }
  local_1b8 = 0;
  local_d8 = "";
  local_1c0 = 0;
  local_d0 = 0;
  String::parse_latin1((StrRange *)&local_1c0);
  local_d8 = "local_shape_index";
  local_1c8 = 0;
  local_d0 = 0x11;
  String::parse_latin1((StrRange *)&local_1c8);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_108,2,(StrRange *)&local_1c8,0,(StrRange *)&local_1c0,6,
             (StrRange *)&local_1b8);
  local_d8 = "";
  local_1d0 = 0;
  local_1d8 = 0;
  local_d0 = 0;
  String::parse_latin1((StrRange *)&local_1d8);
  local_d8 = "area_shape_index";
  local_1e0 = 0;
  local_d0 = 0x10;
  String::parse_latin1((StrRange *)&local_1e0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_138,2,(StrRange *)&local_1e0,0,(StrRange *)&local_1d8,6,
             &local_1d0);
  local_d8 = "Area3D";
  local_1e8 = 0;
  local_1f0 = 0;
  local_d0 = 6;
  String::parse_latin1((StrRange *)&local_1f0);
  local_d8 = "area";
  local_1f8 = 0;
  local_d0 = 4;
  String::parse_latin1((StrRange *)&local_1f8);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_168,0x18,(StrRange *)&local_1f8,0x11,(StrRange *)&local_1f0,6,
             &local_1e8);
  local_d8 = "";
  local_200 = 0;
  local_208 = 0;
  local_d0 = 0;
  String::parse_latin1((StrRange *)&local_208);
  local_210 = 0;
  local_d8 = "area_rid";
  local_d0 = 8;
  String::parse_latin1((StrRange *)&local_210);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_198,0x17,(StrRange *)&local_210,0,(StrRange *)&local_208,6,
             &local_200);
  local_d8 = "area_shape_exited";
  local_1b0 = 0;
  local_d0 = 0x11;
  String::parse_latin1((StrRange *)&local_1b0);
  MethodInfo::MethodInfo<PropertyInfo,PropertyInfo,PropertyInfo,PropertyInfo>
            ((MethodInfo *)&local_d8,(StrRange *)&local_1b0,(PropertyInfo *)local_198,
             (PropertyInfo *)local_168,(PropertyInfo *)&local_138,(PropertyInfo *)&local_108);
  local_1a8 = "Area3D";
  local_218 = 0;
  local_1a0 = 6;
  String::parse_latin1((StrRange *)&local_218);
  StringName::StringName((StringName *)&local_1a8,(String *)&local_218,false);
  ClassDB::add_signal((StringName *)&local_1a8,(MethodInfo *)&local_d8);
  if ((StringName::configured != '\0') && (local_1a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_218);
  MethodInfo::~MethodInfo((MethodInfo *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b0);
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_198);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_210);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_208);
  if ((StringName::configured != '\0') && (local_200 != 0)) {
    StringName::unref();
  }
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_168);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1f0);
  if ((StringName::configured != '\0') && (local_1e8 != 0)) {
    StringName::unref();
  }
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_138);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1e0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1d8);
  if ((StringName::configured != '\0') && (local_1d0 != 0)) {
    StringName::unref();
  }
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c0);
  if ((StringName::configured != '\0') && (local_1b8 != 0)) {
    StringName::unref();
  }
  local_198[0] = 0;
  local_d8 = "Area3D";
  local_1a8 = (char *)0x0;
  local_d0 = 6;
  String::parse_latin1((StrRange *)&local_1a8);
  local_d8 = "area";
  local_1b0 = 0;
  local_d0 = 4;
  String::parse_latin1((StrRange *)&local_1b0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_108,0x18,(StrRange *)&local_1b0,0x11,(StringName *)&local_1a8,6,
             (PropertyInfo *)local_198);
  local_d8 = "area_entered";
  local_168[0] = 0;
  local_d0 = 0xc;
  String::parse_latin1((StrRange *)local_168);
  local_c8 = (undefined1  [16])0x0;
  local_d8 = (char *)0x0;
  local_d0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 6;
  local_a0 = 1;
  local_98[0] = 0;
  local_88 = 0;
  local_80 = 0;
  local_70 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_d8,(CowData *)local_168);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_98,(PropertyInfo *)&local_108);
  local_138 = "Area3D";
  local_1b8 = 0;
  local_130 = 6;
  String::parse_latin1((StrRange *)&local_1b8);
  StringName::StringName((StringName *)&local_138,(String *)&local_1b8,false);
  ClassDB::add_signal((StringName *)&local_138,(MethodInfo *)&local_d8);
  if ((StringName::configured != '\0') && (local_138 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
  MethodInfo::~MethodInfo((MethodInfo *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_168);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a8);
  if ((StringName::configured != '\0') && (local_198[0] != 0)) {
    StringName::unref();
  }
  local_198[0] = 0;
  local_d8 = "Area3D";
  local_1a8 = (char *)0x0;
  local_d0 = 6;
  String::parse_latin1((StrRange *)&local_1a8);
  local_d8 = "area";
  local_1b0 = 0;
  local_d0 = 4;
  String::parse_latin1((StrRange *)&local_1b0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_108,0x18,(StrRange *)&local_1b0,0x11,(StringName *)&local_1a8,6,
             (PropertyInfo *)local_198);
  local_d8 = "area_exited";
  local_168[0] = 0;
  local_d0 = 0xb;
  String::parse_latin1((StrRange *)local_168);
  local_c8 = (undefined1  [16])0x0;
  local_d8 = (char *)0x0;
  local_d0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 6;
  local_a0 = 1;
  local_98[0] = 0;
  local_88 = 0;
  local_80 = 0;
  local_70 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_d8,(CowData *)local_168);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_98,(PropertyInfo *)&local_108);
  local_138 = "Area3D";
  local_1b8 = 0;
  local_130 = 6;
  String::parse_latin1((StrRange *)&local_1b8);
  StringName::StringName((StringName *)&local_138,(String *)&local_1b8,false);
  ClassDB::add_signal((StringName *)&local_138,(MethodInfo *)&local_d8);
  if ((StringName::configured != '\0') && (local_138 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
  MethodInfo::~MethodInfo((MethodInfo *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_168);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a8);
  if ((StringName::configured != '\0') && (local_198[0] != 0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_138,true);
  _scs_create((char *)local_168,true);
  local_d8 = "";
  local_198[0] = 0;
  local_1a8 = (char *)0x0;
  local_d0 = 0;
  String::parse_latin1((StrRange *)&local_1a8);
  local_d8 = "monitoring";
  local_1b0 = 0;
  local_d0 = 10;
  String::parse_latin1((StrRange *)&local_1b0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_d8,1,(StrRange *)&local_1b0,0,(StringName *)&local_1a8,6,
             (PropertyInfo *)local_198);
  local_108 = "Area3D";
  local_1b8 = 0;
  local_100 = 6;
  String::parse_latin1((StrRange *)&local_1b8);
  StringName::StringName((StringName *)&local_108,(String *)&local_1b8,false);
  ClassDB::add_property
            ((StringName *)&local_108,(PropertyInfo *)&local_d8,(StringName *)local_168,
             (StringName *)&local_138,-1);
  if ((StringName::configured != '\0') && (local_108 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a8);
  if (StringName::configured != '\0') {
    if (local_198[0] != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001069be;
    }
    if (local_168[0] != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001069be;
    }
    if (local_138 != (char *)0x0) {
      StringName::unref();
    }
  }
LAB_001069be:
  _scs_create((char *)&local_138,true);
  _scs_create((char *)local_168,true);
  local_d8 = "";
  local_198[0] = 0;
  local_1a8 = (char *)0x0;
  local_d0 = 0;
  String::parse_latin1((StrRange *)&local_1a8);
  local_d8 = "monitorable";
  local_1b0 = 0;
  local_d0 = 0xb;
  String::parse_latin1((StrRange *)&local_1b0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_d8,1,(StrRange *)&local_1b0,0,(StringName *)&local_1a8,6,
             (PropertyInfo *)local_198);
  local_108 = "Area3D";
  local_1b8 = 0;
  local_100 = 6;
  String::parse_latin1((StrRange *)&local_1b8);
  StringName::StringName((StringName *)&local_108,(String *)&local_1b8,false);
  ClassDB::add_property
            ((StringName *)&local_108,(PropertyInfo *)&local_d8,(StringName *)local_168,
             (StringName *)&local_138,-1);
  if ((StringName::configured != '\0') && (local_108 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a8);
  if (StringName::configured != '\0') {
    if (local_198[0] != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00106b63;
    }
    if (local_168[0] != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00106b63;
    }
    if (local_138 != (char *)0x0) {
      StringName::unref();
    }
  }
LAB_00106b63:
  _scs_create((char *)&local_138,true);
  _scs_create((char *)local_168,true);
  local_d8 = "0,100000,1,or_greater,or_less";
  local_198[0] = 0;
  local_1a8 = (char *)0x0;
  local_d0 = 0x1d;
  String::parse_latin1((StrRange *)&local_1a8);
  local_d8 = "priority";
  local_1b0 = 0;
  local_d0 = 8;
  String::parse_latin1((StrRange *)&local_1b0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_d8,2,(StrRange *)&local_1b0,1,(StringName *)&local_1a8,6,
             (PropertyInfo *)local_198);
  local_108 = "Area3D";
  local_1b8 = 0;
  local_100 = 6;
  String::parse_latin1((StrRange *)&local_1b8);
  StringName::StringName((StringName *)&local_108,(String *)&local_1b8,false);
  ClassDB::add_property
            ((StringName *)&local_108,(PropertyInfo *)&local_d8,(StringName *)local_168,
             (StringName *)&local_138,-1);
  if ((StringName::configured != '\0') && (local_108 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a8);
  if (StringName::configured != '\0') {
    if (local_198[0] != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00106d0b;
    }
    if (local_168[0] != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00106d0b;
    }
    if (local_138 != (char *)0x0) {
      StringName::unref();
    }
  }
LAB_00106d0b:
  local_108 = (char *)0x0;
  local_d8 = "gravity_";
  local_d0 = 8;
  String::parse_latin1((StrRange *)&local_108);
  local_d8 = "Gravity";
  local_138 = (char *)0x0;
  local_d0 = 7;
  String::parse_latin1((StrRange *)&local_138);
  local_d8 = "Area3D";
  local_168[0] = 0;
  local_d0 = 6;
  String::parse_latin1((StrRange *)local_168);
  StringName::StringName((StringName *)&local_d8,(String *)local_168,false);
  ClassDB::add_property_group((StringName *)&local_d8,(String *)&local_138,(String *)&local_108,0);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_168);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  _scs_create((char *)&local_138,true);
  _scs_create((char *)local_168,true);
  local_d8 = "Disabled,Combine,Combine-Replace,Replace,Replace-Combine";
  local_198[0] = 0;
  local_1a8 = (char *)0x0;
  local_d0 = 0x38;
  String::parse_latin1((StrRange *)&local_1a8);
  local_d8 = "gravity_space_override";
  local_1b0 = 0;
  local_d0 = 0x16;
  String::parse_latin1((StrRange *)&local_1b0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_d8,2,(StrRange *)&local_1b0,2,(StringName *)&local_1a8,0x4006,
             (PropertyInfo *)local_198);
  local_108 = "Area3D";
  local_1b8 = 0;
  local_100 = 6;
  String::parse_latin1((StrRange *)&local_1b8);
  StringName::StringName((StringName *)&local_108,(String *)&local_1b8,false);
  ClassDB::add_property
            ((StringName *)&local_108,(PropertyInfo *)&local_d8,(StringName *)local_168,
             (StringName *)&local_138,-1);
  if ((StringName::configured != '\0') && (local_108 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a8);
  if (StringName::configured != '\0') {
    if (local_198[0] != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00106f9b;
    }
    if (local_168[0] != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00106f9b;
    }
    if (local_138 != (char *)0x0) {
      StringName::unref();
    }
  }
LAB_00106f9b:
  _scs_create((char *)&local_138,true);
  _scs_create((char *)local_168,true);
  local_d8 = "";
  local_198[0] = 0;
  local_1a8 = (char *)0x0;
  local_d0 = 0;
  String::parse_latin1((StrRange *)&local_1a8);
  local_d8 = "gravity_point";
  local_1b0 = 0;
  local_d0 = 0xd;
  String::parse_latin1((StrRange *)&local_1b0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_d8,1,(StrRange *)&local_1b0,0,(StringName *)&local_1a8,0x4006,
             (PropertyInfo *)local_198);
  local_108 = "Area3D";
  local_1b8 = 0;
  local_100 = 6;
  String::parse_latin1((StrRange *)&local_1b8);
  StringName::StringName((StringName *)&local_108,(String *)&local_1b8,false);
  ClassDB::add_property
            ((StringName *)&local_108,(PropertyInfo *)&local_d8,(StringName *)local_168,
             (StringName *)&local_138,-1);
  if ((StringName::configured != '\0') && (local_108 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a8);
  if (StringName::configured != '\0') {
    if (local_198[0] != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00107142;
    }
    if (local_168[0] != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00107142;
    }
    if (local_138 != (char *)0x0) {
      StringName::unref();
    }
  }
LAB_00107142:
  _scs_create((char *)&local_138,true);
  _scs_create((char *)local_168,true);
  local_d8 = "0,1024,0.001,or_greater,exp,suffix:m";
  local_198[0] = 0;
  local_1a8 = (char *)0x0;
  local_d0 = 0x24;
  String::parse_latin1((StrRange *)&local_1a8);
  local_d8 = "gravity_point_unit_distance";
  local_1b0 = 0;
  local_d0 = 0x1b;
  String::parse_latin1((StrRange *)&local_1b0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_d8,3,(StrRange *)&local_1b0,1,(StringName *)&local_1a8,6,
             (PropertyInfo *)local_198);
  local_108 = "Area3D";
  local_1b8 = 0;
  local_100 = 6;
  String::parse_latin1((StrRange *)&local_1b8);
  StringName::StringName((StringName *)&local_108,(String *)&local_1b8,false);
  ClassDB::add_property
            ((StringName *)&local_108,(PropertyInfo *)&local_d8,(StringName *)local_168,
             (StringName *)&local_138,-1);
  if ((StringName::configured != '\0') && (local_108 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a8);
  if (StringName::configured != '\0') {
    if (local_198[0] != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001072eb;
    }
    if (local_168[0] != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001072eb;
    }
    if (local_138 != (char *)0x0) {
      StringName::unref();
    }
  }
LAB_001072eb:
  _scs_create((char *)&local_138,true);
  _scs_create((char *)local_168,true);
  local_d8 = "suffix:m";
  local_198[0] = 0;
  local_1a8 = (char *)0x0;
  local_d0 = 8;
  String::parse_latin1((StrRange *)&local_1a8);
  local_d8 = "gravity_point_center";
  local_1b0 = 0;
  local_d0 = 0x14;
  String::parse_latin1((StrRange *)&local_1b0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_d8,9,(StrRange *)&local_1b0,0,(StringName *)&local_1a8,6,
             (PropertyInfo *)local_198);
  local_108 = "Area3D";
  local_1b8 = 0;
  local_100 = 6;
  String::parse_latin1((StrRange *)&local_1b8);
  StringName::StringName((StringName *)&local_108,(String *)&local_1b8,false);
  ClassDB::add_property
            ((StringName *)&local_108,(PropertyInfo *)&local_d8,(StringName *)local_168,
             (StringName *)&local_138,-1);
  if ((StringName::configured != '\0') && (local_108 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a8);
  if (StringName::configured != '\0') {
    if (local_198[0] != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00107490;
    }
    if (local_168[0] != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00107490;
    }
    if (local_138 != (char *)0x0) {
      StringName::unref();
    }
  }
LAB_00107490:
  _scs_create((char *)&local_138,true);
  _scs_create((char *)local_168,true);
  local_d8 = "";
  local_198[0] = 0;
  local_1a8 = (char *)0x0;
  local_d0 = 0;
  String::parse_latin1((StrRange *)&local_1a8);
  local_d8 = "gravity_direction";
  local_1b0 = 0;
  local_d0 = 0x11;
  String::parse_latin1((StrRange *)&local_1b0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_d8,9,(StrRange *)&local_1b0,0,(StringName *)&local_1a8,6,
             (PropertyInfo *)local_198);
  local_108 = "Area3D";
  local_1b8 = 0;
  local_100 = 6;
  String::parse_latin1((StrRange *)&local_1b8);
  StringName::StringName((StringName *)&local_108,(String *)&local_1b8,false);
  ClassDB::add_property
            ((StringName *)&local_108,(PropertyInfo *)&local_d8,(StringName *)local_168,
             (StringName *)&local_138,-1);
  if ((StringName::configured != '\0') && (local_108 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a8);
  if (StringName::configured != '\0') {
    if (local_198[0] != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00107635;
    }
    if (local_168[0] != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00107635;
    }
    if (local_138 != (char *)0x0) {
      StringName::unref();
    }
  }
LAB_00107635:
  _scs_create((char *)&local_138,true);
  _scs_create((char *)local_168,true);
  local_198[0] = 0;
  local_1a8 = (char *)0x0;
  puVar6 = &_LC84;
  do {
    puVar8 = puVar6;
    puVar6 = puVar8 + 4;
  } while (*(int *)(puVar8 + 4) != 0);
  local_d8 = "-";
  local_d0 = (long)(puVar8 + -0x114edc) >> 2;
  String::parse_utf32((StrRange *)&local_1a8);
  local_d8 = "gravity";
  local_1b0 = 0;
  local_d0 = 7;
  String::parse_latin1((StrRange *)&local_1b0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_d8,3,(StrRange *)&local_1b0,1,(StringName *)&local_1a8,6,
             (PropertyInfo *)local_198);
  local_108 = "Area3D";
  local_1b8 = 0;
  local_100 = 6;
  String::parse_latin1((StrRange *)&local_1b8);
  StringName::StringName((StringName *)&local_108,(String *)&local_1b8,false);
  ClassDB::add_property
            ((StringName *)&local_108,(PropertyInfo *)&local_d8,(StringName *)local_168,
             (StringName *)&local_138,-1);
  if ((StringName::configured != '\0') && (local_108 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a8);
  if (StringName::configured != '\0') {
    if (local_198[0] != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001077f9;
    }
    if (local_168[0] != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001077f9;
    }
    if (local_138 != (char *)0x0) {
      StringName::unref();
    }
  }
LAB_001077f9:
  local_108 = (char *)0x0;
  local_d8 = "linear_damp_";
  local_d0 = 0xc;
  String::parse_latin1((StrRange *)&local_108);
  local_d8 = "Linear Damp";
  local_138 = (char *)0x0;
  local_d0 = 0xb;
  String::parse_latin1((StrRange *)&local_138);
  local_d8 = "Area3D";
  local_168[0] = 0;
  local_d0 = 6;
  String::parse_latin1((StrRange *)local_168);
  StringName::StringName((StringName *)&local_d8,(String *)local_168,false);
  ClassDB::add_property_group((StringName *)&local_d8,(String *)&local_138,(String *)&local_108,0);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_168);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  _scs_create((char *)&local_138,true);
  _scs_create((char *)local_168,true);
  local_d8 = "Disabled,Combine,Combine-Replace,Replace,Replace-Combine";
  local_198[0] = 0;
  local_1a8 = (char *)0x0;
  local_d0 = 0x38;
  String::parse_latin1((StrRange *)&local_1a8);
  local_d8 = "linear_damp_space_override";
  local_1b0 = 0;
  local_d0 = 0x1a;
  String::parse_latin1((StrRange *)&local_1b0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_d8,2,(StrRange *)&local_1b0,2,(StringName *)&local_1a8,0x4006,
             (PropertyInfo *)local_198);
  local_108 = "Area3D";
  local_1b8 = 0;
  local_100 = 6;
  String::parse_latin1((StrRange *)&local_1b8);
  StringName::StringName((StringName *)&local_108,(String *)&local_1b8,false);
  ClassDB::add_property
            ((StringName *)&local_108,(PropertyInfo *)&local_d8,(StringName *)local_168,
             (StringName *)&local_138,-1);
  if ((StringName::configured != '\0') && (local_108 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a8);
  if (StringName::configured != '\0') {
    if (local_198[0] != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00107a89;
    }
    if (local_168[0] != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00107a89;
    }
    if (local_138 != (char *)0x0) {
      StringName::unref();
    }
  }
LAB_00107a89:
  _scs_create((char *)&local_138,true);
  _scs_create((char *)local_168,true);
  local_d8 = "0,100,0.001,or_greater";
  local_198[0] = 0;
  local_1a8 = (char *)0x0;
  local_d0 = 0x16;
  String::parse_latin1((StrRange *)&local_1a8);
  local_d8 = "linear_damp";
  local_1b0 = 0;
  local_d0 = 0xb;
  String::parse_latin1((StrRange *)&local_1b0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_d8,3,(StrRange *)&local_1b0,1,(StringName *)&local_1a8,6,
             (PropertyInfo *)local_198);
  local_108 = "Area3D";
  local_1b8 = 0;
  local_100 = 6;
  String::parse_latin1((StrRange *)&local_1b8);
  StringName::StringName((StringName *)&local_108,(String *)&local_1b8,false);
  ClassDB::add_property
            ((StringName *)&local_108,(PropertyInfo *)&local_d8,(StringName *)local_168,
             (StringName *)&local_138,-1);
  if ((StringName::configured != '\0') && (local_108 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a8);
  if (StringName::configured != '\0') {
    if (local_198[0] != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00107c31;
    }
    if (local_168[0] != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00107c31;
    }
    if (local_138 != (char *)0x0) {
      StringName::unref();
    }
  }
LAB_00107c31:
  local_108 = (char *)0x0;
  local_d8 = "angular_damp_";
  local_d0 = 0xd;
  String::parse_latin1((StrRange *)&local_108);
  local_d8 = "Angular Damp";
  local_138 = (char *)0x0;
  local_d0 = 0xc;
  String::parse_latin1((StrRange *)&local_138);
  local_d8 = "Area3D";
  local_168[0] = 0;
  local_d0 = 6;
  String::parse_latin1((StrRange *)local_168);
  StringName::StringName((StringName *)&local_d8,(String *)local_168,false);
  ClassDB::add_property_group((StringName *)&local_d8,(String *)&local_138,(String *)&local_108,0);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_168);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  _scs_create((char *)&local_138,true);
  _scs_create((char *)local_168,true);
  local_d8 = "Disabled,Combine,Combine-Replace,Replace,Replace-Combine";
  local_198[0] = 0;
  local_1a8 = (char *)0x0;
  local_d0 = 0x38;
  String::parse_latin1((StrRange *)&local_1a8);
  local_d8 = "angular_damp_space_override";
  local_1b0 = 0;
  local_d0 = 0x1b;
  String::parse_latin1((StrRange *)&local_1b0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_d8,2,(StrRange *)&local_1b0,2,(StringName *)&local_1a8,0x4006,
             (PropertyInfo *)local_198);
  local_108 = "Area3D";
  local_1b8 = 0;
  local_100 = 6;
  String::parse_latin1((StrRange *)&local_1b8);
  StringName::StringName((StringName *)&local_108,(String *)&local_1b8,false);
  ClassDB::add_property
            ((StringName *)&local_108,(PropertyInfo *)&local_d8,(StringName *)local_168,
             (StringName *)&local_138,-1);
  if ((StringName::configured != '\0') && (local_108 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a8);
  if (StringName::configured != '\0') {
    if (local_198[0] != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00107ec0;
    }
    if (local_168[0] != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00107ec0;
    }
    if (local_138 != (char *)0x0) {
      StringName::unref();
    }
  }
LAB_00107ec0:
  _scs_create((char *)&local_138,true);
  _scs_create((char *)local_168,true);
  local_d8 = "0,100,0.001,or_greater";
  local_198[0] = 0;
  local_1a8 = (char *)0x0;
  local_d0 = 0x16;
  String::parse_latin1((StrRange *)&local_1a8);
  local_d8 = "angular_damp";
  local_1b0 = 0;
  local_d0 = 0xc;
  String::parse_latin1((StrRange *)&local_1b0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_d8,3,(StrRange *)&local_1b0,1,(StringName *)&local_1a8,6,
             (PropertyInfo *)local_198);
  local_108 = "Area3D";
  local_1b8 = 0;
  local_100 = 6;
  String::parse_latin1((StrRange *)&local_1b8);
  StringName::StringName((StringName *)&local_108,(String *)&local_1b8,false);
  ClassDB::add_property
            ((StringName *)&local_108,(PropertyInfo *)&local_d8,(StringName *)local_168,
             (StringName *)&local_138,-1);
  if ((StringName::configured != '\0') && (local_108 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a8);
  if (StringName::configured != '\0') {
    if (local_198[0] != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00108069;
    }
    if (local_168[0] != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00108069;
    }
    if (local_138 != (char *)0x0) {
      StringName::unref();
    }
  }
LAB_00108069:
  local_108 = (char *)0x0;
  local_d8 = "wind_";
  local_d0 = 5;
  String::parse_latin1((StrRange *)&local_108);
  local_d8 = "Wind";
  local_138 = (char *)0x0;
  local_d0 = 4;
  String::parse_latin1((StrRange *)&local_138);
  local_d8 = "Area3D";
  local_168[0] = 0;
  local_d0 = 6;
  String::parse_latin1((StrRange *)local_168);
  StringName::StringName((StringName *)&local_d8,(String *)local_168,false);
  ClassDB::add_property_group((StringName *)&local_d8,(String *)&local_138,(String *)&local_108,0);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_168);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  _scs_create((char *)&local_138,true);
  _scs_create((char *)local_168,true);
  local_d8 = "0,10,0.001,or_greater";
  local_198[0] = 0;
  local_1a8 = (char *)0x0;
  local_d0 = 0x15;
  String::parse_latin1((StrRange *)&local_1a8);
  local_d8 = "wind_force_magnitude";
  local_1b0 = 0;
  local_d0 = 0x14;
  String::parse_latin1((StrRange *)&local_1b0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_d8,3,(StrRange *)&local_1b0,1,(StringName *)&local_1a8,6,
             (PropertyInfo *)local_198);
  local_108 = "Area3D";
  local_1b8 = 0;
  local_100 = 6;
  String::parse_latin1((StrRange *)&local_1b8);
  StringName::StringName((StringName *)&local_108,(String *)&local_1b8,false);
  ClassDB::add_property
            ((StringName *)&local_108,(PropertyInfo *)&local_d8,(StringName *)local_168,
             (StringName *)&local_138,-1);
  if ((StringName::configured != '\0') && (local_108 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a8);
  if (StringName::configured != '\0') {
    if (local_198[0] != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001082fa;
    }
    if (local_168[0] != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001082fa;
    }
    if (local_138 != (char *)0x0) {
      StringName::unref();
    }
  }
LAB_001082fa:
  _scs_create((char *)&local_138,true);
  _scs_create((char *)local_168,true);
  local_d8 = "0.0,3.0,0.001,or_greater";
  local_198[0] = 0;
  local_1a8 = (char *)0x0;
  local_d0 = 0x18;
  String::parse_latin1((StrRange *)&local_1a8);
  local_d8 = "wind_attenuation_factor";
  local_1b0 = 0;
  local_d0 = 0x17;
  String::parse_latin1((StrRange *)&local_1b0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_d8,3,(StrRange *)&local_1b0,1,(StringName *)&local_1a8,6,
             (PropertyInfo *)local_198);
  local_108 = "Area3D";
  local_1b8 = 0;
  local_100 = 6;
  String::parse_latin1((StrRange *)&local_1b8);
  StringName::StringName((StringName *)&local_108,(String *)&local_1b8,false);
  ClassDB::add_property
            ((StringName *)&local_108,(PropertyInfo *)&local_d8,(StringName *)local_168,
             (StringName *)&local_138,-1);
  if ((StringName::configured != '\0') && (local_108 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a8);
  if (StringName::configured != '\0') {
    if (local_198[0] != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001084a3;
    }
    if (local_168[0] != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001084a3;
    }
    if (local_138 != (char *)0x0) {
      StringName::unref();
    }
  }
LAB_001084a3:
  _scs_create((char *)&local_138,true);
  _scs_create((char *)local_168,true);
  local_d8 = "Node3D";
  local_198[0] = 0;
  local_1a8 = (char *)0x0;
  local_d0 = 6;
  String::parse_latin1((StrRange *)&local_1a8);
  local_d8 = "wind_source_path";
  local_1b0 = 0;
  local_d0 = 0x10;
  String::parse_latin1((StrRange *)&local_1b0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_d8,0x16,(StrRange *)&local_1b0,0x1a,(StringName *)&local_1a8,6,
             (PropertyInfo *)local_198);
  local_108 = "Area3D";
  local_1b8 = 0;
  local_100 = 6;
  String::parse_latin1((StrRange *)&local_1b8);
  StringName::StringName((StringName *)&local_108,(String *)&local_1b8,false);
  ClassDB::add_property
            ((StringName *)&local_108,(PropertyInfo *)&local_d8,(StringName *)local_168,
             (StringName *)&local_138,-1);
  if ((StringName::configured != '\0') && (local_108 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a8);
  if (StringName::configured != '\0') {
    if (local_198[0] != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010864b;
    }
    if (local_168[0] != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010864b;
    }
    if (local_138 != (char *)0x0) {
      StringName::unref();
    }
  }
LAB_0010864b:
  local_108 = (char *)0x0;
  local_d8 = "audio_bus_";
  local_d0 = 10;
  String::parse_latin1((StrRange *)&local_108);
  local_d8 = "Audio Bus";
  local_138 = (char *)0x0;
  local_d0 = 9;
  String::parse_latin1((StrRange *)&local_138);
  local_d8 = "Area3D";
  local_168[0] = 0;
  local_d0 = 6;
  String::parse_latin1((StrRange *)local_168);
  StringName::StringName((StringName *)&local_d8,(String *)local_168,false);
  ClassDB::add_property_group((StringName *)&local_d8,(String *)&local_138,(String *)&local_108,0);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_168);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  _scs_create((char *)&local_138,true);
  _scs_create((char *)local_168,true);
  local_d8 = "";
  local_198[0] = 0;
  local_1a8 = (char *)0x0;
  local_d0 = 0;
  String::parse_latin1((StrRange *)&local_1a8);
  local_d8 = "audio_bus_override";
  local_1b0 = 0;
  local_d0 = 0x12;
  String::parse_latin1((StrRange *)&local_1b0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_d8,1,(StrRange *)&local_1b0,0,(StringName *)&local_1a8,6,
             (PropertyInfo *)local_198);
  local_108 = "Area3D";
  local_1b8 = 0;
  local_100 = 6;
  String::parse_latin1((StrRange *)&local_1b8);
  StringName::StringName((StringName *)&local_108,(String *)&local_1b8,false);
  ClassDB::add_property
            ((StringName *)&local_108,(PropertyInfo *)&local_d8,(StringName *)local_168,
             (StringName *)&local_138,-1);
  if ((StringName::configured != '\0') && (local_108 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a8);
  if (StringName::configured != '\0') {
    if (local_198[0] != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001088d7;
    }
    if (local_168[0] != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001088d7;
    }
    if (local_138 != (char *)0x0) {
      StringName::unref();
    }
  }
LAB_001088d7:
  _scs_create((char *)&local_138,true);
  _scs_create((char *)local_168,true);
  local_d8 = "";
  local_198[0] = 0;
  local_1a8 = (char *)0x0;
  local_d0 = 0;
  String::parse_latin1((StrRange *)&local_1a8);
  local_d8 = "audio_bus_name";
  local_1b0 = 0;
  local_d0 = 0xe;
  String::parse_latin1((StrRange *)&local_1b0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_d8,0x15,(StrRange *)&local_1b0,2,(StringName *)&local_1a8,6,
             (PropertyInfo *)local_198);
  local_108 = "Area3D";
  local_1b8 = 0;
  local_100 = 6;
  String::parse_latin1((StrRange *)&local_1b8);
  StringName::StringName((StringName *)&local_108,(String *)&local_1b8,false);
  ClassDB::add_property
            ((StringName *)&local_108,(PropertyInfo *)&local_d8,(StringName *)local_168,
             (StringName *)&local_138,-1);
  if ((StringName::configured != '\0') && (local_108 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a8);
  if (StringName::configured != '\0') {
    if (local_198[0] != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00108a80;
    }
    if (local_168[0] != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00108a80;
    }
    if (local_138 != (char *)0x0) {
      StringName::unref();
    }
  }
LAB_00108a80:
  local_108 = (char *)0x0;
  local_d8 = "reverb_bus_";
  local_d0 = 0xb;
  String::parse_latin1((StrRange *)&local_108);
  local_d8 = "Reverb Bus";
  local_138 = (char *)0x0;
  local_d0 = 10;
  String::parse_latin1((StrRange *)&local_138);
  local_d8 = "Area3D";
  local_168[0] = 0;
  local_d0 = 6;
  String::parse_latin1((StrRange *)local_168);
  StringName::StringName((StringName *)&local_d8,(String *)local_168,false);
  ClassDB::add_property_group((StringName *)&local_d8,(String *)&local_138,(String *)&local_108,0);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_168);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  _scs_create((char *)&local_138,true);
  _scs_create((char *)local_168,true);
  local_d8 = "";
  local_198[0] = 0;
  local_1a8 = (char *)0x0;
  local_d0 = 0;
  String::parse_latin1((StrRange *)&local_1a8);
  local_d8 = "reverb_bus_enabled";
  local_1b0 = 0;
  local_d0 = 0x12;
  String::parse_latin1((StrRange *)&local_1b0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_d8,1,(StrRange *)&local_1b0,0,(StringName *)&local_1a8,6,
             (PropertyInfo *)local_198);
  local_108 = "Area3D";
  local_1b8 = 0;
  local_100 = 6;
  String::parse_latin1((StrRange *)&local_1b8);
  StringName::StringName((StringName *)&local_108,(String *)&local_1b8,false);
  ClassDB::add_property
            ((StringName *)&local_108,(PropertyInfo *)&local_d8,(StringName *)local_168,
             (StringName *)&local_138,-1);
  if ((StringName::configured != '\0') && (local_108 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a8);
  if (StringName::configured != '\0') {
    if (local_198[0] != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00108d0e;
    }
    if (local_168[0] != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00108d0e;
    }
    if (local_138 != (char *)0x0) {
      StringName::unref();
    }
  }
LAB_00108d0e:
  _scs_create((char *)&local_138,true);
  _scs_create((char *)local_168,true);
  local_d8 = "";
  local_198[0] = 0;
  local_1a8 = (char *)0x0;
  local_d0 = 0;
  String::parse_latin1((StrRange *)&local_1a8);
  local_d8 = "reverb_bus_name";
  local_1b0 = 0;
  local_d0 = 0xf;
  String::parse_latin1((StrRange *)&local_1b0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_d8,0x15,(StrRange *)&local_1b0,2,(StringName *)&local_1a8,6,
             (PropertyInfo *)local_198);
  local_108 = "Area3D";
  local_1b8 = 0;
  local_100 = 6;
  String::parse_latin1((StrRange *)&local_1b8);
  StringName::StringName((StringName *)&local_108,(String *)&local_1b8,false);
  ClassDB::add_property
            ((StringName *)&local_108,(PropertyInfo *)&local_d8,(StringName *)local_168,
             (StringName *)&local_138,-1);
  if ((StringName::configured != '\0') && (local_108 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a8);
  if (StringName::configured != '\0') {
    if (local_198[0] != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00108eb7;
    }
    if (local_168[0] != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00108eb7;
    }
    if (local_138 != (char *)0x0) {
      StringName::unref();
    }
  }
LAB_00108eb7:
  _scs_create((char *)&local_138,true);
  _scs_create((char *)local_168,true);
  local_d8 = "0,1,0.01";
  local_198[0] = 0;
  local_1a8 = (char *)0x0;
  local_d0 = 8;
  String::parse_latin1((StrRange *)&local_1a8);
  local_d8 = "reverb_bus_amount";
  local_1b0 = 0;
  local_d0 = 0x11;
  String::parse_latin1((StrRange *)&local_1b0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_d8,3,(StrRange *)&local_1b0,1,(StringName *)&local_1a8,6,
             (PropertyInfo *)local_198);
  local_108 = "Area3D";
  local_1b8 = 0;
  local_100 = 6;
  String::parse_latin1((StrRange *)&local_1b8);
  StringName::StringName((StringName *)&local_108,(String *)&local_1b8,false);
  ClassDB::add_property
            ((StringName *)&local_108,(PropertyInfo *)&local_d8,(StringName *)local_168,
             (StringName *)&local_138,-1);
  if ((StringName::configured != '\0') && (local_108 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a8);
  if (StringName::configured != '\0') {
    if (local_198[0] != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010905f;
    }
    if (local_168[0] != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010905f;
    }
    if (local_138 != (char *)0x0) {
      StringName::unref();
    }
  }
LAB_0010905f:
  _scs_create((char *)&local_138,true);
  _scs_create((char *)local_168,true);
  local_d8 = "0,1,0.01";
  local_198[0] = 0;
  local_1a8 = (char *)0x0;
  local_d0 = 8;
  String::parse_latin1((StrRange *)&local_1a8);
  local_d8 = "reverb_bus_uniformity";
  local_1b0 = 0;
  local_d0 = 0x15;
  String::parse_latin1((StrRange *)&local_1b0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_d8,3,(StrRange *)&local_1b0,1,(StringName *)&local_1a8,6,
             (PropertyInfo *)local_198);
  local_108 = "Area3D";
  local_1b8 = 0;
  local_100 = 6;
  String::parse_latin1((StrRange *)&local_1b8);
  StringName::StringName((StringName *)&local_108,(String *)&local_1b8,false);
  ClassDB::add_property
            ((StringName *)&local_108,(PropertyInfo *)&local_d8,(StringName *)local_168,
             (StringName *)&local_138,-1);
  if ((StringName::configured != '\0') && (local_108 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a8);
  if (StringName::configured != '\0') {
    if (local_198[0] != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00109207;
    }
    if (local_168[0] != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00109207;
    }
    if (local_138 != (char *)0x0) {
      StringName::unref();
    }
  }
LAB_00109207:
  StringName::StringName((StringName *)&local_108,"SPACE_OVERRIDE_DISABLED",false);
  local_168[0] = 0;
  local_d8 = "SPACE_OVERRIDE_DISABLED";
  local_d0 = 0x17;
  String::parse_latin1((StrRange *)local_168);
  GetTypeInfo<Area3D::SpaceOverride,void>::get_class_info
            ((GetTypeInfo<Area3D::SpaceOverride,void> *)&local_d8);
  local_138 = (char *)local_c8._0_8_;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_c8._8_8_;
  local_c8 = auVar1 << 0x40;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_d8);
  local_d8 = "Area3D";
  local_198[0] = 0;
  local_d0 = 6;
  String::parse_latin1((StrRange *)local_198);
  StringName::StringName((StringName *)&local_d8,(String *)local_198,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_d8,(StringName *)&local_138,(StringName *)&local_108,0,false);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_198);
  if ((StringName::configured != '\0') && (local_138 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_168);
  if ((StringName::configured != '\0') && (local_108 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_108,"SPACE_OVERRIDE_COMBINE",false);
  local_168[0] = 0;
  local_d8 = "SPACE_OVERRIDE_COMBINE";
  local_d0 = 0x16;
  String::parse_latin1((StrRange *)local_168);
  GetTypeInfo<Area3D::SpaceOverride,void>::get_class_info
            ((GetTypeInfo<Area3D::SpaceOverride,void> *)&local_d8);
  local_138 = (char *)local_c8._0_8_;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_c8._8_8_;
  local_c8 = auVar2 << 0x40;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_d8);
  local_d8 = "Area3D";
  local_198[0] = 0;
  local_d0 = 6;
  String::parse_latin1((StrRange *)local_198);
  StringName::StringName((StringName *)&local_d8,(String *)local_198,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_d8,(StringName *)&local_138,(StringName *)&local_108,1,false);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_198);
  if ((StringName::configured != '\0') && (local_138 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_168);
  if ((StringName::configured != '\0') && (local_108 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_108,"SPACE_OVERRIDE_COMBINE_REPLACE",false);
  local_168[0] = 0;
  local_d8 = "SPACE_OVERRIDE_COMBINE_REPLACE";
  local_d0 = 0x1e;
  String::parse_latin1((StrRange *)local_168);
  GetTypeInfo<Area3D::SpaceOverride,void>::get_class_info
            ((GetTypeInfo<Area3D::SpaceOverride,void> *)&local_d8);
  local_138 = (char *)local_c8._0_8_;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = local_c8._8_8_;
  local_c8 = auVar3 << 0x40;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_d8);
  local_d8 = "Area3D";
  local_198[0] = 0;
  local_d0 = 6;
  String::parse_latin1((StrRange *)local_198);
  StringName::StringName((StringName *)&local_d8,(String *)local_198,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_d8,(StringName *)&local_138,(StringName *)&local_108,2,false);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_198);
  if ((StringName::configured != '\0') && (local_138 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_168);
  if ((StringName::configured != '\0') && (local_108 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_108,"SPACE_OVERRIDE_REPLACE",false);
  local_168[0] = 0;
  local_d8 = "SPACE_OVERRIDE_REPLACE";
  local_d0 = 0x16;
  String::parse_latin1((StrRange *)local_168);
  GetTypeInfo<Area3D::SpaceOverride,void>::get_class_info
            ((GetTypeInfo<Area3D::SpaceOverride,void> *)&local_d8);
  local_138 = (char *)local_c8._0_8_;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = local_c8._8_8_;
  local_c8 = auVar4 << 0x40;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_d8);
  local_d8 = "Area3D";
  local_198[0] = 0;
  local_d0 = 6;
  String::parse_latin1((StrRange *)local_198);
  StringName::StringName((StringName *)&local_d8,(String *)local_198,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_d8,(StringName *)&local_138,(StringName *)&local_108,3,false);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_198);
  if ((StringName::configured != '\0') && (local_138 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_168);
  if ((StringName::configured != '\0') && (local_108 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_108,"SPACE_OVERRIDE_REPLACE_COMBINE",false);
  local_168[0] = 0;
  local_d8 = "SPACE_OVERRIDE_REPLACE_COMBINE";
  local_d0 = 0x1e;
  String::parse_latin1((StrRange *)local_168);
  GetTypeInfo<Area3D::SpaceOverride,void>::get_class_info
            ((GetTypeInfo<Area3D::SpaceOverride,void> *)&local_d8);
  local_138 = (char *)local_c8._0_8_;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = local_c8._8_8_;
  local_c8 = auVar5 << 0x40;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_d8);
  local_d8 = "Area3D";
  local_198[0] = 0;
  local_d0 = 6;
  String::parse_latin1((StrRange *)local_198);
  StringName::StringName((StringName *)&local_d8,(String *)local_198,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_d8,(StringName *)&local_138,(StringName *)&local_108,4,false);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_198);
  if ((StringName::configured != '\0') && (local_138 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_168);
  if ((StringName::configured != '\0') && (local_108 != (char *)0x0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Area3D::_clear_monitoring() */

void __thiscall Area3D::_clear_monitoring(Area3D *this)

{
  Variant *pVVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  void *pvVar6;
  ulong uVar7;
  Object *pOVar8;
  Object *pOVar9;
  uint uVar10;
  ulong *puVar11;
  void *pvVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  undefined8 *puVar17;
  Variant *pVVar18;
  long in_FS_OFFSET;
  bool bVar19;
  Variant *local_228;
  ulong local_1b8 [2];
  BodyState local_1a8 [8];
  undefined1 local_1a0 [16];
  undefined1 local_190 [16];
  undefined8 local_180;
  Variant *local_178 [2];
  Variant *local_168;
  Variant *pVStack_160;
  Variant *local_158;
  Variant *pVStack_150;
  undefined1 local_148 [16];
  Variant local_138 [24];
  Variant local_120 [24];
  Variant local_108 [24];
  Variant local_f0 [24];
  undefined8 local_d8;
  undefined1 local_d0 [16];
  Variant local_c0 [8];
  Variant *local_b8;
  Variant *pVStack_b0;
  Variant *local_a8;
  Variant *pVStack_a0;
  undefined1 local_98 [16];
  Variant local_88 [24];
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  if (this[0x65a] != (Area3D)0x0) {
    _err_print_error("_clear_monitoring","scene/3d/physics/area_3d.cpp",0x12f,
                     "Condition \"locked\" is true.",
                     "This function can\'t be used during the in/out signal.",0,0);
    goto LAB_0010a2a7;
  }
  local_180 = 0;
  local_1a0 = (undefined1  [16])0x0;
  uVar7 = 1;
  local_190 = (undefined1  [16])0x0;
  if (5 < *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x688) * 4)) {
    do {
      if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x688) * 4) <=
          *(uint *)(hash_table_size_primes + uVar7 * 4)) {
        local_180 = uVar7 & 0xffffffff;
        goto LAB_00109aef;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 != 0x1d);
    _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                     "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.",0,0,0);
  }
LAB_00109aef:
  if (*(int *)(this + 0x68c) == 0) {
LAB_00109da0:
    if ((void *)local_1a0._0_8_ != (void *)0x0) {
      pvVar12 = (void *)local_1a0._0_8_;
      if ((local_180._4_4_ != 0) &&
         (uVar10 = *(uint *)(hash_table_size_primes + (local_180 & 0xffffffff) * 4), uVar10 != 0)) {
        lVar13 = 0;
        do {
          if (*(int *)(local_1a0._8_8_ + lVar13) != 0) {
            *(int *)(local_1a0._8_8_ + lVar13) = 0;
            puVar17 = (undefined8 *)((long)pvVar12 + lVar13 * 2);
            pvVar6 = (void *)*puVar17;
            if (*(long *)((long)pvVar6 + 0x30) != 0) {
              LOCK();
              plVar14 = (long *)(*(long *)((long)pvVar6 + 0x30) + -0x10);
              *plVar14 = *plVar14 + -1;
              UNLOCK();
              if (*plVar14 == 0) {
                lVar16 = *(long *)((long)pvVar6 + 0x30);
                *(undefined8 *)((long)pvVar6 + 0x30) = 0;
                Memory::free_static((void *)(lVar16 + -0x10),false);
              }
              puVar17 = (undefined8 *)(local_1a0._0_8_ + lVar13 * 2);
              pvVar12 = (void *)local_1a0._0_8_;
            }
            Memory::free_static(pvVar6,false);
            *puVar17 = 0;
          }
          lVar13 = lVar13 + 4;
        } while (lVar13 != (ulong)uVar10 * 4);
        local_180 = local_180 & 0xffffffff;
        local_190 = (undefined1  [16])0x0;
        if (pvVar12 == (void *)0x0) goto LAB_00109e98;
      }
      Memory::free_static(pvVar12,false);
      Memory::free_static((void *)local_1a0._8_8_,false);
    }
  }
  else {
    plVar14 = *(long **)(this + 0x678);
    if (plVar14 != (long *)0x0) {
      do {
        HashMap<ObjectID,Area3D::BodyState,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,Area3D::BodyState>>>
        ::insert((ObjectID *)local_1b8,local_1a8,(bool)((char)plVar14 + '\x10'));
        plVar14 = (long *)*plVar14;
      } while (plVar14 != (long *)0x0);
      if ((*(long *)(this + 0x668) != 0) && (*(int *)(this + 0x68c) != 0)) goto LAB_00109b5d;
LAB_00109c07:
      if ((long *)local_190._0_8_ != (long *)0x0) {
        plVar14 = (long *)local_190._0_8_;
        do {
          uVar10 = (uint)plVar14[2] & 0xffffff;
          if (uVar10 < (uint)ObjectDB::slot_max) {
            while( true ) {
              uVar7 = local_1b8[0] >> 8;
              local_1b8[0] = uVar7 << 8;
              LOCK();
              bVar19 = (char)ObjectDB::spin_lock == '\0';
              if (bVar19) {
                ObjectDB::spin_lock._0_1_ = '\x01';
              }
              UNLOCK();
              if (bVar19) break;
              local_1b8[0] = uVar7 << 8;
              do {
              } while ((char)ObjectDB::spin_lock != '\0');
            }
            puVar11 = (ulong *)((ulong)uVar10 * 0x10 + ObjectDB::object_slots);
            if (((ulong)plVar14[2] >> 0x18 & 0x7fffffffff) == (*puVar11 & 0x7fffffffff)) {
              uVar7 = puVar11[1];
              ObjectDB::spin_lock._0_1_ = '\0';
              if ((uVar7 != 0) &&
                 (pOVar8 = (Object *)__dynamic_cast(uVar7,&Object::typeinfo,&Node::typeinfo,0),
                 pOVar8 != (Object *)0x0)) {
                pcVar5 = *(code **)(*(long *)pOVar8 + 0x110);
                create_custom_callable_function_pointer<Area3D,ObjectID>
                          ((Area3D *)local_1b8,(char *)this,
                           (_func_void_ObjectID *)"&Area3D::_body_enter_tree");
                (*pcVar5)(pOVar8,SceneStringNames::singleton + 0x38,(Area3D *)local_1b8);
                Callable::~Callable((Callable *)local_1b8);
                pcVar5 = *(code **)(*(long *)pOVar8 + 0x110);
                create_custom_callable_function_pointer<Area3D,ObjectID>
                          ((Area3D *)local_1b8,(char *)this,
                           (_func_void_ObjectID *)"&Area3D::_body_exit_tree");
                (*pcVar5)(pOVar8,SceneStringNames::singleton + 0x40,(Area3D *)local_1b8);
                Callable::~Callable((Callable *)local_1b8);
                if (*(char *)((long)plVar14 + 0x24) != '\0') {
                  lVar13 = plVar14[6];
                  if (lVar13 != 0) {
                    lVar16 = 0;
                    do {
                      lVar15 = *(long *)(lVar13 + -8);
                      if ((int)lVar15 <= (int)lVar16) break;
                      if (lVar15 <= lVar16) goto LAB_0010a72f;
                      piVar2 = (int *)(lVar13 + lVar16 * 8);
                      iVar3 = piVar2[1];
                      iVar4 = *piVar2;
                      lVar13 = SceneStringNames::singleton + 0x150;
                      local_1b8[0] = plVar14[3];
                      Variant::Variant(local_138,(Area3D *)local_1b8);
                      Variant::Variant(local_120,pOVar8);
                      Variant::Variant(local_108,iVar4);
                      Variant::Variant(local_f0,iVar3);
                      local_d8 = 0;
                      pVVar18 = local_c0;
                      local_d0 = (undefined1  [16])0x0;
                      local_b8 = local_138;
                      pVStack_b0 = local_120;
                      local_a8 = local_108;
                      pVStack_a0 = local_f0;
                      (**(code **)(*(long *)this + 0xd0))(this,lVar13,&local_b8,4);
                      do {
                        pVVar1 = pVVar18 + -0x18;
                        pVVar18 = pVVar18 + -0x18;
                        if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
                          Variant::_clear_internal();
                        }
                      } while (pVVar18 != local_138);
                      lVar13 = plVar14[6];
                      lVar16 = lVar16 + 1;
                    } while (lVar13 != 0);
                  }
                  lVar13 = SceneStringNames::singleton + 0x158;
                  Variant::Variant((Variant *)&local_b8,pOVar8);
                  pVStack_a0 = (Variant *)0x0;
                  local_98 = (undefined1  [16])0x0;
                  local_168 = (Variant *)&local_b8;
                  (**(code **)(*(long *)this + 0xd0))(this,lVar13,&local_168,1);
                  if (Variant::needs_deinit[(int)pVStack_a0] != '\0') {
                    Variant::_clear_internal();
                  }
                  if (Variant::needs_deinit[(int)local_b8] != '\0') {
                    Variant::_clear_internal();
                  }
                }
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
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      goto LAB_00109da0;
    }
    if (*(long *)(this + 0x668) != 0) {
LAB_00109b5d:
      lVar13 = 0;
      uVar10 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x688) * 4);
      if (uVar10 != 0) {
        do {
          if (*(int *)(*(long *)(this + 0x670) + lVar13) != 0) {
            *(int *)(*(long *)(this + 0x670) + lVar13) = 0;
            pvVar12 = *(void **)(*(long *)(this + 0x668) + lVar13 * 2);
            if (*(long *)((long)pvVar12 + 0x30) != 0) {
              LOCK();
              plVar14 = (long *)(*(long *)((long)pvVar12 + 0x30) + -0x10);
              *plVar14 = *plVar14 + -1;
              UNLOCK();
              if (*plVar14 == 0) {
                lVar16 = *(long *)((long)pvVar12 + 0x30);
                *(undefined8 *)((long)pvVar12 + 0x30) = 0;
                Memory::free_static((void *)(lVar16 + -0x10),false);
              }
            }
            Memory::free_static(pvVar12,false);
            *(undefined8 *)(*(long *)(this + 0x668) + lVar13 * 2) = 0;
          }
          lVar13 = lVar13 + 4;
        } while (lVar13 != (ulong)uVar10 << 2);
      }
      *(undefined4 *)(this + 0x68c) = 0;
      *(undefined1 (*) [16])(this + 0x678) = (undefined1  [16])0x0;
      goto LAB_00109c07;
    }
  }
LAB_00109e98:
  local_180 = 0;
  local_1a0 = (undefined1  [16])0x0;
  local_190 = (undefined1  [16])0x0;
  uVar7 = 1;
  if (5 < *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x6b8) * 4)) {
    do {
      if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x6b8) * 4) <=
          *(uint *)(hash_table_size_primes + uVar7 * 4)) {
        local_180 = uVar7 & 0xffffffff;
        goto LAB_00109f21;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 != 0x1d);
    _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                     "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.",0,0,0);
  }
LAB_00109f21:
  if (*(int *)(this + 0x6bc) == 0) {
    if (*(long *)(this + 0x698) == 0) goto LAB_0010a2a7;
  }
  else {
    plVar14 = *(long **)(this + 0x6a8);
    if (plVar14 == (long *)0x0) {
      if (*(long *)(this + 0x698) == 0) goto LAB_0010a2a7;
    }
    else {
      do {
        HashMap<ObjectID,Area3D::AreaState,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,Area3D::AreaState>>>
        ::insert((ObjectID *)local_1b8,(AreaState *)local_1a8,(bool)((char)plVar14 + '\x10'));
        plVar14 = (long *)*plVar14;
      } while (plVar14 != (long *)0x0);
      if ((*(long *)(this + 0x698) == 0) || (*(int *)(this + 0x6bc) == 0)) goto LAB_0010a02f;
    }
    lVar13 = 0;
    uVar10 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x6b8) * 4);
    if (uVar10 != 0) {
      do {
        if (*(int *)(*(long *)(this + 0x6a0) + lVar13) != 0) {
          *(int *)(*(long *)(this + 0x6a0) + lVar13) = 0;
          pvVar12 = *(void **)(*(long *)(this + 0x698) + lVar13 * 2);
          if (*(long *)((long)pvVar12 + 0x30) != 0) {
            LOCK();
            plVar14 = (long *)(*(long *)((long)pvVar12 + 0x30) + -0x10);
            *plVar14 = *plVar14 + -1;
            UNLOCK();
            if (*plVar14 == 0) {
              lVar16 = *(long *)((long)pvVar12 + 0x30);
              *(undefined8 *)((long)pvVar12 + 0x30) = 0;
              Memory::free_static((void *)(lVar16 + -0x10),false);
            }
          }
          Memory::free_static(pvVar12,false);
          *(undefined8 *)(*(long *)(this + 0x698) + lVar13 * 2) = 0;
        }
        lVar13 = lVar13 + 4;
      } while (lVar13 != (ulong)uVar10 << 2);
    }
    *(undefined4 *)(this + 0x6bc) = 0;
    *(undefined1 (*) [16])(this + 0x6a8) = (undefined1  [16])0x0;
  }
LAB_0010a02f:
  if ((long *)local_190._0_8_ != (long *)0x0) {
    plVar14 = (long *)local_190._0_8_;
    do {
      uVar10 = (uint)plVar14[2] & 0xffffff;
      if (uVar10 < (uint)ObjectDB::slot_max) {
        while( true ) {
          uVar7 = local_1b8[0] >> 8;
          local_1b8[0] = uVar7 << 8;
          LOCK();
          bVar19 = (char)ObjectDB::spin_lock == '\0';
          if (bVar19) {
            ObjectDB::spin_lock._0_1_ = '\x01';
          }
          UNLOCK();
          if (bVar19) break;
          local_1b8[0] = uVar7 << 8;
          do {
          } while ((char)ObjectDB::spin_lock != '\0');
        }
        puVar11 = (ulong *)((ulong)uVar10 * 0x10 + ObjectDB::object_slots);
        if (((ulong)plVar14[2] >> 0x18 & 0x7fffffffff) == (*puVar11 & 0x7fffffffff)) {
          pOVar8 = (Object *)puVar11[1];
          ObjectDB::spin_lock._0_1_ = '\0';
          if ((pOVar8 != (Object *)0x0) &&
             (pOVar9 = (Object *)__dynamic_cast(pOVar8,&Object::typeinfo,&Node::typeinfo,0),
             pOVar9 != (Object *)0x0)) {
            pcVar5 = *(code **)(*(long *)pOVar9 + 0x110);
            create_custom_callable_function_pointer<Area3D,ObjectID>
                      ((Area3D *)local_1b8,(char *)this,
                       (_func_void_ObjectID *)"&Area3D::_area_enter_tree");
            (*pcVar5)(pOVar9,SceneStringNames::singleton + 0x38,(Area3D *)local_1b8);
            Callable::~Callable((Callable *)local_1b8);
            pcVar5 = *(code **)(*(long *)pOVar9 + 0x110);
            create_custom_callable_function_pointer<Area3D,ObjectID>
                      ((Area3D *)local_1b8,(char *)this,
                       (_func_void_ObjectID *)"&Area3D::_area_exit_tree");
            (*pcVar5)(pOVar9,SceneStringNames::singleton + 0x40,(Area3D *)local_1b8);
            Callable::~Callable((Callable *)local_1b8);
            if (*(char *)((long)plVar14 + 0x24) != '\0') {
              lVar13 = plVar14[6];
              if (lVar13 != 0) {
                lVar16 = 0;
                do {
                  lVar15 = *(long *)(lVar13 + -8);
                  if ((int)lVar15 <= (int)lVar16) break;
                  if (lVar15 <= lVar16) {
LAB_0010a72f:
                    _err_print_index_error
                              ("get","./core/templates/cowdata.h",0xdb,lVar16,lVar15,"p_index",
                               "size()","",false,true);
                    _err_flush_stdout();
                    /* WARNING: Does not return */
                    pcVar5 = (code *)invalidInstructionException();
                    (*pcVar5)();
                  }
                  piVar2 = (int *)(lVar13 + lVar16 * 8);
                  iVar3 = piVar2[1];
                  iVar4 = *piVar2;
                  lVar13 = SceneStringNames::singleton + 0x168;
                  local_1b8[0] = plVar14[3];
                  Variant::Variant((Variant *)&local_b8,(Area3D *)local_1b8);
                  Variant::Variant((Variant *)&pVStack_a0,pOVar9);
                  Variant::Variant(local_88,iVar4);
                  pVVar18 = (Variant *)local_40;
                  Variant::Variant(local_70,iVar3);
                  local_58 = 0;
                  local_50 = (undefined1  [16])0x0;
                  local_168 = (Variant *)&local_b8;
                  pVStack_160 = (Variant *)&pVStack_a0;
                  local_158 = local_88;
                  pVStack_150 = local_70;
                  (**(code **)(*(long *)this + 0xd0))(this,lVar13,&local_168,4);
                  do {
                    pVVar1 = pVVar18 + -0x18;
                    pVVar18 = pVVar18 + -0x18;
                    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
                      Variant::_clear_internal();
                    }
                  } while (pVVar18 != (Variant *)&local_b8);
                  lVar13 = plVar14[6];
                  lVar16 = lVar16 + 1;
                } while (lVar13 != 0);
              }
              local_228 = (Variant *)&local_168;
              lVar13 = SceneStringNames::singleton + 0x1c0;
              Variant::Variant(local_228,pOVar8);
              local_178[0] = local_228;
              pVStack_150 = (Variant *)0x0;
              local_148 = (undefined1  [16])0x0;
              (**(code **)(*(long *)this + 0xd0))(this,lVar13,local_178,1);
              if (Variant::needs_deinit[(int)pVStack_150] != '\0') {
                Variant::_clear_internal();
              }
              if (Variant::needs_deinit[(int)local_168] != '\0') {
                Variant::_clear_internal();
              }
            }
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
      plVar14 = (long *)*plVar14;
    } while (plVar14 != (long *)0x0);
  }
  if ((void *)local_1a0._0_8_ != (void *)0x0) {
    pvVar12 = (void *)local_1a0._0_8_;
    if ((local_180._4_4_ != 0) &&
       (uVar10 = *(uint *)(hash_table_size_primes + (local_180 & 0xffffffff) * 4), uVar10 != 0)) {
      lVar13 = 0;
      do {
        if (*(int *)(local_1a0._8_8_ + lVar13) != 0) {
          *(int *)(local_1a0._8_8_ + lVar13) = 0;
          puVar17 = (undefined8 *)((long)pvVar12 + lVar13 * 2);
          pvVar6 = (void *)*puVar17;
          if (*(long *)((long)pvVar6 + 0x30) != 0) {
            LOCK();
            plVar14 = (long *)(*(long *)((long)pvVar6 + 0x30) + -0x10);
            *plVar14 = *plVar14 + -1;
            UNLOCK();
            if (*plVar14 == 0) {
              lVar16 = *(long *)((long)pvVar6 + 0x30);
              *(undefined8 *)((long)pvVar6 + 0x30) = 0;
              Memory::free_static((void *)(lVar16 + -0x10),false);
            }
            puVar17 = (undefined8 *)(local_1a0._0_8_ + lVar13 * 2);
            pvVar12 = (void *)local_1a0._0_8_;
          }
          Memory::free_static(pvVar6,false);
          *puVar17 = 0;
        }
        lVar13 = lVar13 + 4;
      } while (lVar13 != (ulong)uVar10 * 4);
      local_180 = local_180 & 0xffffffff;
      local_190 = (undefined1  [16])0x0;
      if (pvVar12 == (void *)0x0) goto LAB_0010a2a7;
    }
    Memory::free_static(pvVar12,false);
    Memory::free_static((void *)local_1a0._8_8_,false);
  }
LAB_0010a2a7:
  if (local_40[0] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* Area3D::_space_changed(RID const&) */

void __thiscall Area3D::_space_changed(Area3D *this,RID *param_1)

{
  if (*(long *)param_1 != 0) {
    return;
  }
  _clear_monitoring(this);
  return;
}



/* Area3D::set_monitoring(bool) */

void __thiscall Area3D::set_monitoring(Area3D *this,bool param_1)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  undefined8 local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (this[0x65a] == (Area3D)0x0) {
    if (this[0x658] != (Area3D)param_1) {
      this[0x658] = (Area3D)param_1;
      if (!param_1) {
        plVar2 = (long *)PhysicsServer3D::get_singleton();
        local_48 = 0;
        local_40 = 0;
        (**(code **)(*plVar2 + 0x2e0))(plVar2,*(undefined8 *)(this + 0x538),&local_48);
        Callable::~Callable((Callable *)&local_48);
        plVar2 = (long *)PhysicsServer3D::get_singleton();
        local_48 = 0;
        local_40 = 0;
        (**(code **)(*plVar2 + 0x2e8))(plVar2,*(undefined8 *)(this + 0x538),&local_48);
        Callable::~Callable((Callable *)&local_48);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
          _clear_monitoring(this);
          return;
        }
        goto LAB_0010aa8b;
      }
      plVar2 = (long *)PhysicsServer3D::get_singleton();
      pcVar1 = *(code **)(*plVar2 + 0x2e0);
      create_custom_callable_function_pointer<Area3D,int,RID_const&,ObjectID,int,int>
                ((Area3D *)&local_48,(char *)this,
                 (_func_void_int_RID_ptr_ObjectID_int_int *)"&Area3D::_body_inout");
      (*pcVar1)(plVar2,*(undefined8 *)(this + 0x538),&local_48);
      Callable::~Callable((Callable *)&local_48);
      plVar2 = (long *)PhysicsServer3D::get_singleton();
      pcVar1 = *(code **)(*plVar2 + 0x2e8);
      create_custom_callable_function_pointer<Area3D,int,RID_const&,ObjectID,int,int>
                ((Area3D *)&local_48,(char *)this,
                 (_func_void_int_RID_ptr_ObjectID_int_int *)"&Area3D::_area_inout");
      (*pcVar1)(plVar2,*(undefined8 *)(this + 0x538),&local_48);
      Callable::~Callable((Callable *)&local_48);
    }
  }
  else {
    _err_print_error("set_monitoring","scene/3d/physics/area_3d.cpp",0x17b,
                     "Condition \"locked\" is true.",
                     "Function blocked during in/out signal. Use set_deferred(\"monitoring\", true/false)."
                     ,0,0);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010aa8b:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Area3D::Area3D() */

void __thiscall Area3D::Area3D(Area3D *this)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined4 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  plVar2 = (long *)PhysicsServer3D::get_singleton();
  uVar3 = (**(code **)(*plVar2 + 0x228))(plVar2);
  CollisionObject3D::CollisionObject3D((CollisionObject3D *)this,uVar3,1);
  *(undefined4 *)(this + 0x618) = 0;
  *(undefined ***)this = &PTR__initialize_classv_0011f088;
  *(undefined8 *)(this + 0x638) = 0x3dcccccd00000000;
  *(undefined2 *)(this + 0x658) = 0;
  uVar3 = _LC206;
  *(undefined8 *)(this + 0x61c) = 0;
  *(undefined8 *)(this + 0x688) = uVar3;
  *(undefined8 *)(this + 0x6b8) = uVar3;
  lVar1 = SceneStringNames::singleton;
  *(undefined4 *)(this + 0x624) = 0;
  this[0x62c] = (Area3D)0x0;
  *(undefined4 *)(this + 0x628) = 0;
  *(undefined8 *)(this + 0x630) = 0;
  *(undefined8 *)(this + 0x640) = 0x3dcccccd;
  *(undefined8 *)(this + 0x648) = 0;
  *(undefined8 *)(this + 0x650) = 0;
  this[0x65a] = (Area3D)0x0;
  this[0x6c0] = (Area3D)0x0;
  *(undefined8 *)(this + 0x6c8) = 0;
  this[0x6d0] = (Area3D)0x0;
  *(undefined8 *)(this + 0x6d8) = 0;
  *(undefined8 *)(this + 0x6e0) = 0;
  *(undefined1 (*) [16])(this + 0x668) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x678) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x698) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x6a8) = (undefined1  [16])0x0;
  StringName::operator=((StringName *)(this + 0x6c8),(StringName *)(lVar1 + 0x208));
  StringName::operator=
            ((StringName *)(this + 0x6d8),(StringName *)(SceneStringNames::singleton + 0x208));
  set_gravity(this,_LC207);
  local_18 = 0;
  local_20 = _LC208;
  set_gravity_point_center(this,(Vector3 *)&local_20);
  set_monitoring(this,true);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    set_monitorable(this,true);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Area3D::_body_inout(int, RID const&, ObjectID, int, int) */

void __thiscall
Area3D::_body_inout(Area3D *this,int param_1,ulong *param_2,ulong param_4,int param_5,int param_6)

{
  Variant *pVVar1;
  uint *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  int iVar7;
  char cVar8;
  uint uVar9;
  code *pcVar10;
  undefined8 uVar11;
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
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  int iVar38;
  int iVar39;
  uint uVar40;
  ulong uVar41;
  long lVar42;
  int iVar43;
  long lVar44;
  ulong uVar45;
  Variant *pVVar46;
  long *plVar47;
  uint uVar48;
  int iVar49;
  ulong *puVar50;
  uint uVar51;
  ulong uVar52;
  ulong uVar53;
  uint uVar54;
  ulong uVar55;
  long lVar56;
  long lVar57;
  uint *puVar58;
  long in_FS_OFFSET;
  bool bVar59;
  Node *local_150;
  Object *local_140;
  long local_138;
  ulong local_120;
  long local_118 [2];
  ulong local_108;
  undefined4 local_100;
  undefined1 local_fc;
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
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  local_120 = param_4;
  if (param_4 == 0) {
    *(int *)(this + 0x540) = *(int *)(this + 0x540) + 1;
    lVar42 = SceneStringNames::singleton;
    this[0x65a] = (Area3D)0x1;
    if (param_1 == 0) {
      Object::emit_signal<RID,Node*,int,int>((Object *)this,lVar42 + 0x140,*param_2,0);
    }
    else {
      Object::emit_signal<RID,Node*,int,int>
                ((Object *)this,lVar42 + 0x150,*param_2,0,param_5,param_6);
    }
    goto LAB_0010afb2;
  }
  uVar48 = (uint)param_4 & 0xffffff;
  if (uVar48 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar41 = local_108 >> 8;
      local_108 = uVar41 << 8;
      LOCK();
      bVar59 = (char)ObjectDB::spin_lock == '\0';
      if (bVar59) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar59) break;
      local_108 = uVar41 << 8;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar50 = (ulong *)((ulong)uVar48 * 0x10 + ObjectDB::object_slots);
    if ((param_4 >> 0x18 & 0x7fffffffff) == (*puVar50 & 0x7fffffffff)) {
      local_140 = (Object *)puVar50[1];
      ObjectDB::spin_lock._0_1_ = '\0';
      if (local_140 == (Object *)0x0) {
        local_150 = (Node *)0x0;
      }
      else {
        local_150 = (Node *)__dynamic_cast(local_140,&Object::typeinfo,&Node::typeinfo,0);
        param_4 = local_120;
      }
    }
    else {
      ObjectDB::spin_lock._0_1_ = '\0';
      local_140 = (Object *)0x0;
      local_150 = (Node *)0x0;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
    local_140 = (Object *)0x0;
    local_150 = (Node *)0x0;
  }
  local_138 = *(long *)(this + 0x668);
  if ((local_138 != 0) && (*(int *)(this + 0x68c) != 0)) {
    uVar48 = *(uint *)(this + 0x688);
    lVar57 = *(long *)(this + 0x670);
    uVar52 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)uVar48 * 4));
    lVar42 = *(long *)(hash_table_size_primes_inv + (ulong)uVar48 * 8);
    uVar41 = param_4 * 0x3ffff - 1;
    uVar41 = (uVar41 ^ uVar41 >> 0x1f) * 0x15;
    uVar41 = (uVar41 ^ uVar41 >> 0xb) * 0x41;
    uVar41 = uVar41 >> 0x16 ^ uVar41;
    uVar55 = uVar41 & 0xffffffff;
    if ((int)uVar41 == 0) {
      uVar55 = 1;
    }
    auVar12._8_8_ = 0;
    auVar12._0_8_ = uVar55 * lVar42;
    auVar25._8_8_ = 0;
    auVar25._0_8_ = uVar52;
    lVar44 = SUB168(auVar12 * auVar25,8);
    uVar51 = *(uint *)(lVar57 + lVar44 * 4);
    uVar40 = SUB164(auVar12 * auVar25,8);
    if (uVar51 != 0) {
      uVar54 = 0;
      do {
        if (((uint)uVar55 == uVar51) &&
           (*(ulong *)(*(long *)(local_138 + lVar44 * 8) + 0x10) == param_4)) {
          lVar42 = *(long *)(local_138 + (ulong)uVar40 * 8);
          if (param_1 == 0) {
            *(int *)(this + 0x540) = *(int *)(this + 0x540) + 1;
            this[0x65a] = (Area3D)0x1;
            if (lVar42 == 0) goto LAB_0010affe;
            *(int *)(lVar42 + 0x20) = *(int *)(lVar42 + 0x20) + 1;
            if (local_150 == (Node *)0x0) goto LAB_0010b199;
            goto LAB_0010b173;
          }
          if (lVar42 == 0) goto LAB_0010af50;
          *(int *)(this + 0x540) = *(int *)(this + 0x540) + 1;
          iVar39 = *(int *)(lVar42 + 0x20);
          this[0x65a] = (Area3D)0x1;
          iVar39 = iVar39 + -1;
          *(int *)(lVar42 + 0x20) = iVar39;
          if (local_150 == (Node *)0x0) {
            cVar8 = *(char *)(lVar42 + 0x24);
            if (iVar39 != 0) goto LAB_0010b1fe;
            lVar42 = *(long *)(lVar42 + 0x10);
            goto LAB_0010b594;
          }
          lVar57 = *(long *)(lVar42 + 0x30);
          if (lVar57 == 0) goto LAB_0010b901;
          lVar44 = *(long *)(lVar57 + -8);
          iVar43 = (int)lVar44 + -1;
          if (lVar44 < 1) {
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,0,lVar44,"p_index","size()","",false,
                       true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar10 = (code *)invalidInstructionException();
            (*pcVar10)();
          }
          iVar49 = 0;
          if (-1 < iVar43) goto LAB_0010aeed;
          goto LAB_0010b901;
        }
        uVar54 = uVar54 + 1;
        auVar13._8_8_ = 0;
        auVar13._0_8_ = (ulong)(uVar40 + 1) * lVar42;
        auVar26._8_8_ = 0;
        auVar26._0_8_ = uVar52;
        lVar44 = SUB168(auVar13 * auVar26,8);
        uVar51 = *(uint *)(lVar57 + lVar44 * 4);
        uVar40 = SUB164(auVar13 * auVar26,8);
      } while ((uVar51 != 0) &&
              (auVar14._8_8_ = 0, auVar14._0_8_ = (ulong)uVar51 * lVar42, auVar27._8_8_ = 0,
              auVar27._0_8_ = uVar52, auVar15._8_8_ = 0,
              auVar15._0_8_ =
                   (ulong)((*(uint *)(hash_table_size_primes + (ulong)uVar48 * 4) + uVar40) -
                          SUB164(auVar14 * auVar27,8)) * lVar42, auVar28._8_8_ = 0,
              auVar28._0_8_ = uVar52, uVar54 <= SUB164(auVar15 * auVar28,8)));
    }
  }
  if (param_1 == 0) {
    *(int *)(this + 0x540) = *(int *)(this + 0x540) + 1;
    this[0x65a] = (Area3D)0x1;
LAB_0010affe:
    local_100 = 0;
    local_fc = 0;
    local_108 = 0;
    local_f0 = 0;
    HashMap<ObjectID,Area3D::BodyState,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,Area3D::BodyState>>>
    ::insert((Area3D *)local_118,(BodyState *)(this + 0x660),SUB81(&local_120,0));
    uVar41 = *param_2;
    *(undefined4 *)(local_118[0] + 0x20) = 0;
    *(ulong *)(local_118[0] + 0x18) = uVar41;
    if (local_150 == (Node *)0x0) {
      *(undefined1 *)(local_118[0] + 0x24) = 0;
      *(undefined4 *)(local_118[0] + 0x20) = 1;
    }
    else {
      *(byte *)(local_118[0] + 0x24) = (byte)local_150[0x2fa] >> 6 & 1;
      pcVar10 = *(code **)(*(long *)local_150 + 0x108);
      create_custom_callable_function_pointer<Area3D,ObjectID>
                ((Area3D *)local_118,(char *)this,(_func_void_ObjectID *)"&Area3D::_body_enter_tree"
                );
      Callable::bind<ObjectID>((Callable *)&local_108,(Area3D *)local_118,local_120);
      (*pcVar10)(local_150,SceneStringNames::singleton + 0x38,(Callable *)&local_108,0);
      Callable::~Callable((Callable *)&local_108);
      Callable::~Callable((Callable *)local_118);
      pcVar10 = *(code **)(*(long *)local_150 + 0x108);
      create_custom_callable_function_pointer<Area3D,ObjectID>
                ((Area3D *)local_118,(char *)this,(_func_void_ObjectID *)"&Area3D::_body_exit_tree")
      ;
      Callable::bind<ObjectID>((Callable *)&local_108,(Area3D *)local_118,local_120);
      (*pcVar10)(local_150,SceneStringNames::singleton + 0x40,(Callable *)&local_108,0);
      Callable::~Callable((Callable *)&local_108);
      Callable::~Callable((Callable *)local_118);
      if (*(char *)(local_118[0] + 0x24) == '\0') {
        iVar39 = *(int *)(local_118[0] + 0x20);
      }
      else {
        Object::emit_signal<Node*>
                  ((Object *)this,(StringName *)(SceneStringNames::singleton + 0x148),local_150);
        iVar39 = *(int *)(local_118[0] + 0x20);
      }
      *(int *)(local_118[0] + 0x20) = iVar39 + 1;
      lVar42 = local_118[0];
LAB_0010b173:
      local_108 = CONCAT44(param_6,param_5);
      VSet<Area3D::ShapePair>::insert
                ((VSet<Area3D::ShapePair> *)(lVar42 + 0x28),(ShapePair *)&local_108);
      if (*(char *)(lVar42 + 0x24) == '\0') goto LAB_0010afb2;
    }
LAB_0010b199:
    Object::emit_signal<RID,Node*,int,int>
              ((Object *)this,SceneStringNames::singleton + 0x140,*param_2,local_150,param_5,param_6
              );
    goto LAB_0010afb2;
  }
  goto LAB_0010af50;
LAB_0010b628:
  uVar9 = *(uint *)(lVar57 + uVar45 * 4);
  uVar53 = (ulong)uVar9;
  uVar55 = uVar45 & 0xffffffff;
  uVar40 = uVar40 + 1;
  if ((uVar9 == 0) ||
     (auVar17._8_8_ = 0, auVar17._0_8_ = uVar53 * lVar44, auVar30._8_8_ = 0, auVar30._0_8_ = uVar52,
     auVar18._8_8_ = 0,
     auVar18._0_8_ = (ulong)((uVar51 + uVar54) - SUB164(auVar17 * auVar30,8)) * lVar44,
     auVar31._8_8_ = 0, auVar31._0_8_ = uVar52, uVar41 = uVar45,
     SUB164(auVar18 * auVar31,8) < uVar40)) goto LAB_0010b7d7;
  goto LAB_0010b664;
LAB_0010aeed:
  do {
    iVar38 = (iVar43 + iVar49) / 2;
    lVar56 = (long)iVar38;
    lVar6 = lVar56 * 8;
    iVar7 = *(int *)(lVar57 + lVar6);
    if (param_5 == iVar7) {
      iVar7 = ((int *)(lVar57 + lVar6))[1];
      if (param_6 < iVar7) goto LAB_0010aee2;
      if (param_6 <= iVar7) {
        if (-2 < iVar43 + iVar49) {
          if (lVar56 < lVar44) {
            CowData<Area3D::ShapePair>::_copy_on_write
                      ((CowData<Area3D::ShapePair> *)(lVar42 + 0x30));
            lVar57 = *(long *)(lVar42 + 0x30);
            if (lVar57 == 0) {
              lVar44 = -1;
            }
            else {
              lVar44 = *(long *)(lVar57 + -8) + -1;
              if (lVar56 < lVar44) {
                memmove((void *)(lVar57 + lVar6),(void *)(lVar57 + 8 + lVar6),(lVar44 - lVar56) * 8)
                ;
              }
            }
            CowData<Area3D::ShapePair>::resize<false>
                      ((CowData<Area3D::ShapePair> *)(lVar42 + 0x30),lVar44);
            iVar39 = *(int *)(lVar42 + 0x20);
          }
          else {
            _err_print_index_error
                      ("remove_at","./core/templates/cowdata.h",0xe4,lVar56,lVar44,"p_index",
                       "size()","",false,false);
            iVar39 = *(int *)(lVar42 + 0x20);
          }
          cVar8 = *(char *)(lVar42 + 0x24);
          if (iVar39 != 0) goto LAB_0010b3a6;
          local_138 = *(long *)(this + 0x668);
          lVar42 = *(long *)(lVar42 + 0x10);
          if (local_138 == 0) goto LAB_0010b44a;
          goto LAB_0010b43c;
        }
        break;
      }
LAB_0010af19:
      iVar49 = iVar38 + 1;
    }
    else {
      if (iVar7 <= param_5) goto LAB_0010af19;
LAB_0010aee2:
      iVar43 = iVar38 + -1;
    }
  } while (iVar49 <= iVar43);
LAB_0010b901:
  cVar8 = *(char *)(lVar42 + 0x24);
  if (iVar39 == 0) {
    lVar42 = *(long *)(lVar42 + 0x10);
LAB_0010b43c:
    if (*(int *)(this + 0x68c) != 0) {
      uVar48 = *(uint *)(this + 0x688);
      lVar57 = *(long *)(this + 0x670);
LAB_0010b594:
      uVar51 = *(uint *)(hash_table_size_primes + (ulong)uVar48 * 4);
      uVar52 = CONCAT44(0,uVar51);
      lVar44 = *(long *)(hash_table_size_primes_inv + (ulong)uVar48 * 8);
      uVar41 = lVar42 * 0x3ffff - 1;
      uVar41 = (uVar41 ^ uVar41 >> 0x1f) * 0x15;
      uVar41 = (uVar41 ^ uVar41 >> 0xb) * 0x41;
      uVar40 = (uint)(uVar41 >> 0x16) ^ (uint)uVar41;
      uVar48 = 1;
      if (uVar40 != 0) {
        uVar48 = uVar40;
      }
      auVar16._8_8_ = 0;
      auVar16._0_8_ = (ulong)uVar48 * lVar44;
      auVar29._8_8_ = 0;
      auVar29._0_8_ = uVar52;
      uVar41 = SUB168(auVar16 * auVar29,8);
      uVar40 = *(uint *)(lVar57 + uVar41 * 4);
      uVar53 = (ulong)uVar40;
      uVar55 = (ulong)SUB164(auVar16 * auVar29,8);
      if (uVar40 != 0) {
        uVar40 = 0;
LAB_0010b664:
        auVar19._8_8_ = 0;
        auVar19._0_8_ = (ulong)((int)uVar55 + 1) * lVar44;
        auVar32._8_8_ = 0;
        auVar32._0_8_ = uVar52;
        uVar45 = SUB168(auVar19 * auVar32,8);
        uVar54 = SUB164(auVar19 * auVar32,8);
        if ((uVar48 != (uint)uVar53) ||
           (lVar42 != *(long *)(*(long *)(local_138 + uVar41 * 8) + 0x10))) goto LAB_0010b628;
        puVar58 = (uint *)(lVar57 + uVar45 * 4);
        uVar41 = (ulong)uVar54;
        uVar48 = *puVar58;
        if ((uVar48 != 0) &&
           (auVar20._8_8_ = 0, auVar20._0_8_ = (ulong)uVar48 * lVar44, auVar33._8_8_ = 0,
           auVar33._0_8_ = uVar52, auVar21._8_8_ = 0,
           auVar21._0_8_ = (ulong)((uVar54 + uVar51) - SUB164(auVar20 * auVar33,8)) * lVar44,
           auVar34._8_8_ = 0, auVar34._0_8_ = uVar52, SUB164(auVar21 * auVar34,8) != 0)) {
          while( true ) {
            puVar2 = (uint *)(lVar57 + uVar55 * 4);
            *puVar58 = *puVar2;
            puVar3 = (undefined8 *)(local_138 + uVar45 * 8);
            *puVar2 = uVar48;
            puVar4 = (undefined8 *)(local_138 + uVar55 * 8);
            uVar11 = *puVar3;
            *puVar3 = *puVar4;
            *puVar4 = uVar11;
            auVar24._8_8_ = 0;
            auVar24._0_8_ = (ulong)((int)uVar41 + 1) * lVar44;
            auVar37._8_8_ = 0;
            auVar37._0_8_ = uVar52;
            uVar45 = SUB168(auVar24 * auVar37,8);
            puVar58 = (uint *)(lVar57 + uVar45 * 4);
            uVar48 = *puVar58;
            uVar55 = uVar41;
            if ((uVar48 == 0) ||
               (auVar22._8_8_ = 0, auVar22._0_8_ = (ulong)uVar48 * lVar44, auVar35._8_8_ = 0,
               auVar35._0_8_ = uVar52, auVar23._8_8_ = 0,
               auVar23._0_8_ =
                    (ulong)((SUB164(auVar24 * auVar37,8) + uVar51) - SUB164(auVar22 * auVar35,8)) *
                    lVar44, auVar36._8_8_ = 0, auVar36._0_8_ = uVar52,
               SUB164(auVar23 * auVar36,8) == 0)) break;
            uVar41 = uVar45 & 0xffffffff;
          }
        }
        *(undefined4 *)(lVar57 + uVar55 * 4) = 0;
        plVar5 = (long *)(local_138 + uVar55 * 8);
        plVar47 = (long *)*plVar5;
        if (*(long **)(this + 0x678) == plVar47) {
          *(long *)(this + 0x678) = *plVar47;
          plVar47 = (long *)*plVar5;
        }
        if (*(long **)(this + 0x680) == plVar47) {
          *(long *)(this + 0x680) = plVar47[1];
          plVar47 = (long *)*plVar5;
        }
        if ((long *)plVar47[1] != (long *)0x0) {
          *(long *)plVar47[1] = *plVar47;
          plVar47 = (long *)*plVar5;
        }
        if (*plVar47 != 0) {
          *(long *)(*plVar47 + 8) = plVar47[1];
          plVar47 = (long *)*plVar5;
        }
        if (plVar47[6] != 0) {
          LOCK();
          plVar5 = (long *)(plVar47[6] + -0x10);
          *plVar5 = *plVar5 + -1;
          UNLOCK();
          if (*plVar5 == 0) {
            lVar42 = plVar47[6];
            plVar47[6] = 0;
            Memory::free_static((void *)(lVar42 + -0x10),false);
          }
        }
        Memory::free_static(plVar47,false);
        *(undefined8 *)(*(long *)(this + 0x668) + uVar55 * 8) = 0;
        *(int *)(this + 0x68c) = *(int *)(this + 0x68c) + -1;
      }
LAB_0010b7d7:
      if (local_150 == (Node *)0x0) goto LAB_0010b1fe;
    }
LAB_0010b44a:
    pcVar10 = *(code **)(*(long *)local_150 + 0x110);
    create_custom_callable_function_pointer<Area3D,ObjectID>
              ((Area3D *)&local_108,(char *)this,(_func_void_ObjectID *)"&Area3D::_body_enter_tree")
    ;
    (*pcVar10)(local_150,SceneStringNames::singleton + 0x38,(Area3D *)&local_108);
    Callable::~Callable((Callable *)&local_108);
    pcVar10 = *(code **)(*(long *)local_150 + 0x110);
    create_custom_callable_function_pointer<Area3D,ObjectID>
              ((Area3D *)&local_108,(char *)this,(_func_void_ObjectID *)"&Area3D::_body_exit_tree");
    (*pcVar10)(local_150,SceneStringNames::singleton + 0x40,(Area3D *)&local_108);
    Callable::~Callable((Callable *)&local_108);
    if (cVar8 != '\0') {
      lVar42 = SceneStringNames::singleton + 0x158;
      Variant::Variant((Variant *)local_b8,local_140);
      local_98 = (undefined1  [16])0x0;
      local_a0[0] = 0;
      local_a0[1] = 0;
      local_e8 = (Variant *)local_b8;
      (**(code **)(*(long *)this + 0xd0))(this,lVar42,&local_e8,1);
      if (Variant::needs_deinit[local_a0[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_b8[0]] != '\0') {
        Variant::_clear_internal();
      }
LAB_0010b1fe:
      lVar42 = SceneStringNames::singleton + 0x150;
      local_108 = *param_2;
      Variant::Variant((Variant *)local_b8,(RID *)&local_108);
      Variant::Variant((Variant *)local_a0,local_140);
      Variant::Variant(local_88,param_5);
      Variant::Variant(local_70,param_6);
      local_50 = (undefined1  [16])0x0;
      pVVar46 = (Variant *)local_40;
      local_58 = 0;
      local_e8 = (Variant *)local_b8;
      pVStack_e0 = (Variant *)local_a0;
      local_d8 = local_88;
      pVStack_d0 = local_70;
      (**(code **)(*(long *)this + 0xd0))(this,lVar42,&local_e8,4);
      do {
        pVVar1 = pVVar46 + -0x18;
        pVVar46 = pVVar46 + -0x18;
        if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
          Variant::_clear_internal();
        }
      } while (pVVar46 != (Variant *)local_b8);
    }
  }
  else {
LAB_0010b3a6:
    if (cVar8 != '\0') goto LAB_0010b1fe;
  }
LAB_0010afb2:
  this[0x65a] = (Area3D)0x0;
  if (*(int *)(this + 0x540) == 0) {
    if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("unlock_callback","./scene/3d/physics/collision_object_3d.h",0x67,
                       "Condition \"callback_lock == 0\" is true.",0,0);
      return;
    }
    goto LAB_0010b8ef;
  }
  *(int *)(this + 0x540) = *(int *)(this + 0x540) + -1;
LAB_0010af50:
  if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010b8ef:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Area3D::_area_inout(int, RID const&, ObjectID, int, int) */

void __thiscall
Area3D::_area_inout(Area3D *this,int param_1,ulong *param_2,ulong param_4,int param_5,int param_6)

{
  Variant *pVVar1;
  uint *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  int iVar7;
  char cVar8;
  uint uVar9;
  code *pcVar10;
  undefined8 uVar11;
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
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  int iVar38;
  int iVar39;
  uint uVar40;
  ulong uVar41;
  long lVar42;
  int iVar43;
  long lVar44;
  ulong uVar45;
  Variant *pVVar46;
  long *plVar47;
  uint uVar48;
  int iVar49;
  ulong *puVar50;
  uint uVar51;
  ulong uVar52;
  ulong uVar53;
  uint uVar54;
  ulong uVar55;
  long lVar56;
  long lVar57;
  uint *puVar58;
  long in_FS_OFFSET;
  bool bVar59;
  Node *local_150;
  Object *local_140;
  long local_138;
  ulong local_120;
  long local_118 [2];
  ulong local_108;
  undefined4 local_100;
  undefined1 local_fc;
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
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  local_120 = param_4;
  if (param_4 == 0) {
    *(int *)(this + 0x540) = *(int *)(this + 0x540) + 1;
    lVar42 = SceneStringNames::singleton;
    this[0x65a] = (Area3D)0x1;
    if (param_1 == 0) {
      Object::emit_signal<RID,Node*,int,int>((Object *)this,lVar42 + 0x160,*param_2,0);
    }
    else {
      Object::emit_signal<RID,Node*,int,int>
                ((Object *)this,lVar42 + 0x168,*param_2,0,param_5,param_6);
    }
    goto LAB_0010bc72;
  }
  uVar48 = (uint)param_4 & 0xffffff;
  if (uVar48 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar41 = local_108 >> 8;
      local_108 = uVar41 << 8;
      LOCK();
      bVar59 = (char)ObjectDB::spin_lock == '\0';
      if (bVar59) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar59) break;
      local_108 = uVar41 << 8;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar50 = (ulong *)((ulong)uVar48 * 0x10 + ObjectDB::object_slots);
    if ((param_4 >> 0x18 & 0x7fffffffff) == (*puVar50 & 0x7fffffffff)) {
      local_140 = (Object *)puVar50[1];
      ObjectDB::spin_lock._0_1_ = '\0';
      if (local_140 == (Object *)0x0) {
        local_150 = (Node *)0x0;
      }
      else {
        local_150 = (Node *)__dynamic_cast(local_140,&Object::typeinfo,&Node::typeinfo,0);
        param_4 = local_120;
      }
    }
    else {
      ObjectDB::spin_lock._0_1_ = '\0';
      local_140 = (Object *)0x0;
      local_150 = (Node *)0x0;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
    local_140 = (Object *)0x0;
    local_150 = (Node *)0x0;
  }
  local_138 = *(long *)(this + 0x698);
  if ((local_138 != 0) && (*(int *)(this + 0x6bc) != 0)) {
    uVar48 = *(uint *)(this + 0x6b8);
    lVar57 = *(long *)(this + 0x6a0);
    uVar52 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)uVar48 * 4));
    lVar42 = *(long *)(hash_table_size_primes_inv + (ulong)uVar48 * 8);
    uVar41 = param_4 * 0x3ffff - 1;
    uVar41 = (uVar41 ^ uVar41 >> 0x1f) * 0x15;
    uVar41 = (uVar41 ^ uVar41 >> 0xb) * 0x41;
    uVar41 = uVar41 >> 0x16 ^ uVar41;
    uVar55 = uVar41 & 0xffffffff;
    if ((int)uVar41 == 0) {
      uVar55 = 1;
    }
    auVar12._8_8_ = 0;
    auVar12._0_8_ = uVar55 * lVar42;
    auVar25._8_8_ = 0;
    auVar25._0_8_ = uVar52;
    lVar44 = SUB168(auVar12 * auVar25,8);
    uVar51 = *(uint *)(lVar57 + lVar44 * 4);
    uVar40 = SUB164(auVar12 * auVar25,8);
    if (uVar51 != 0) {
      uVar54 = 0;
      do {
        if (((uint)uVar55 == uVar51) &&
           (*(ulong *)(*(long *)(local_138 + lVar44 * 8) + 0x10) == param_4)) {
          lVar42 = *(long *)(local_138 + (ulong)uVar40 * 8);
          if (param_1 == 0) {
            *(int *)(this + 0x540) = *(int *)(this + 0x540) + 1;
            this[0x65a] = (Area3D)0x1;
            if (lVar42 == 0) goto LAB_0010bcbe;
            *(int *)(lVar42 + 0x20) = *(int *)(lVar42 + 0x20) + 1;
            if (local_150 == (Node *)0x0) goto LAB_0010be59;
            goto LAB_0010be33;
          }
          if (lVar42 == 0) goto LAB_0010bc10;
          *(int *)(this + 0x540) = *(int *)(this + 0x540) + 1;
          iVar39 = *(int *)(lVar42 + 0x20);
          this[0x65a] = (Area3D)0x1;
          iVar39 = iVar39 + -1;
          *(int *)(lVar42 + 0x20) = iVar39;
          if (local_150 == (Node *)0x0) {
            cVar8 = *(char *)(lVar42 + 0x24);
            if (iVar39 != 0) goto LAB_0010bebe;
            lVar42 = *(long *)(lVar42 + 0x10);
            goto LAB_0010c254;
          }
          lVar57 = *(long *)(lVar42 + 0x30);
          if (lVar57 == 0) goto LAB_0010c5c1;
          lVar44 = *(long *)(lVar57 + -8);
          iVar43 = (int)lVar44 + -1;
          if (lVar44 < 1) {
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,0,lVar44,"p_index","size()","",false,
                       true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar10 = (code *)invalidInstructionException();
            (*pcVar10)();
          }
          iVar49 = 0;
          if (-1 < iVar43) goto LAB_0010bbad;
          goto LAB_0010c5c1;
        }
        uVar54 = uVar54 + 1;
        auVar13._8_8_ = 0;
        auVar13._0_8_ = (ulong)(uVar40 + 1) * lVar42;
        auVar26._8_8_ = 0;
        auVar26._0_8_ = uVar52;
        lVar44 = SUB168(auVar13 * auVar26,8);
        uVar51 = *(uint *)(lVar57 + lVar44 * 4);
        uVar40 = SUB164(auVar13 * auVar26,8);
      } while ((uVar51 != 0) &&
              (auVar14._8_8_ = 0, auVar14._0_8_ = (ulong)uVar51 * lVar42, auVar27._8_8_ = 0,
              auVar27._0_8_ = uVar52, auVar15._8_8_ = 0,
              auVar15._0_8_ =
                   (ulong)((*(uint *)(hash_table_size_primes + (ulong)uVar48 * 4) + uVar40) -
                          SUB164(auVar14 * auVar27,8)) * lVar42, auVar28._8_8_ = 0,
              auVar28._0_8_ = uVar52, uVar54 <= SUB164(auVar15 * auVar28,8)));
    }
  }
  if (param_1 == 0) {
    *(int *)(this + 0x540) = *(int *)(this + 0x540) + 1;
    this[0x65a] = (Area3D)0x1;
LAB_0010bcbe:
    local_100 = 0;
    local_fc = 0;
    local_108 = 0;
    local_f0 = 0;
    HashMap<ObjectID,Area3D::AreaState,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,Area3D::AreaState>>>
    ::insert((Area3D *)local_118,(AreaState *)(this + 0x690),SUB81(&local_120,0));
    uVar41 = *param_2;
    *(undefined4 *)(local_118[0] + 0x20) = 0;
    *(ulong *)(local_118[0] + 0x18) = uVar41;
    if (local_150 == (Node *)0x0) {
      *(undefined1 *)(local_118[0] + 0x24) = 0;
      *(undefined4 *)(local_118[0] + 0x20) = 1;
    }
    else {
      *(byte *)(local_118[0] + 0x24) = (byte)local_150[0x2fa] >> 6 & 1;
      pcVar10 = *(code **)(*(long *)local_150 + 0x108);
      create_custom_callable_function_pointer<Area3D,ObjectID>
                ((Area3D *)local_118,(char *)this,(_func_void_ObjectID *)"&Area3D::_area_enter_tree"
                );
      Callable::bind<ObjectID>((Callable *)&local_108,(Area3D *)local_118,local_120);
      (*pcVar10)(local_150,SceneStringNames::singleton + 0x38,(Callable *)&local_108,0);
      Callable::~Callable((Callable *)&local_108);
      Callable::~Callable((Callable *)local_118);
      pcVar10 = *(code **)(*(long *)local_150 + 0x108);
      create_custom_callable_function_pointer<Area3D,ObjectID>
                ((Area3D *)local_118,(char *)this,(_func_void_ObjectID *)"&Area3D::_area_exit_tree")
      ;
      Callable::bind<ObjectID>((Callable *)&local_108,(Area3D *)local_118,local_120);
      (*pcVar10)(local_150,SceneStringNames::singleton + 0x40,(Callable *)&local_108,0);
      Callable::~Callable((Callable *)&local_108);
      Callable::~Callable((Callable *)local_118);
      if (*(char *)(local_118[0] + 0x24) == '\0') {
        iVar39 = *(int *)(local_118[0] + 0x20);
      }
      else {
        Object::emit_signal<Node*>
                  ((Object *)this,(StringName *)(SceneStringNames::singleton + 0x1b8),local_150);
        iVar39 = *(int *)(local_118[0] + 0x20);
      }
      *(int *)(local_118[0] + 0x20) = iVar39 + 1;
      lVar42 = local_118[0];
LAB_0010be33:
      local_108 = CONCAT44(param_6,param_5);
      VSet<Area3D::AreaShapePair>::insert
                ((VSet<Area3D::AreaShapePair> *)(lVar42 + 0x28),(AreaShapePair *)&local_108);
      if (*(char *)(lVar42 + 0x24) == '\0') goto LAB_0010bc72;
    }
LAB_0010be59:
    Object::emit_signal<RID,Node*,int,int>
              ((Object *)this,SceneStringNames::singleton + 0x160,*param_2,local_150,param_5,param_6
              );
    goto LAB_0010bc72;
  }
  goto LAB_0010bc10;
LAB_0010c2e8:
  uVar9 = *(uint *)(lVar57 + uVar45 * 4);
  uVar53 = (ulong)uVar9;
  uVar55 = uVar45 & 0xffffffff;
  uVar40 = uVar40 + 1;
  if ((uVar9 == 0) ||
     (auVar17._8_8_ = 0, auVar17._0_8_ = uVar53 * lVar44, auVar30._8_8_ = 0, auVar30._0_8_ = uVar52,
     auVar18._8_8_ = 0,
     auVar18._0_8_ = (ulong)((uVar51 + uVar54) - SUB164(auVar17 * auVar30,8)) * lVar44,
     auVar31._8_8_ = 0, auVar31._0_8_ = uVar52, uVar41 = uVar45,
     SUB164(auVar18 * auVar31,8) < uVar40)) goto LAB_0010c497;
  goto LAB_0010c324;
LAB_0010bbad:
  do {
    iVar38 = (iVar43 + iVar49) / 2;
    lVar56 = (long)iVar38;
    lVar6 = lVar56 * 8;
    iVar7 = *(int *)(lVar57 + lVar6);
    if (param_5 == iVar7) {
      iVar7 = ((int *)(lVar57 + lVar6))[1];
      if (param_6 < iVar7) goto LAB_0010bba2;
      if (param_6 <= iVar7) {
        if (-2 < iVar43 + iVar49) {
          if (lVar56 < lVar44) {
            CowData<Area3D::AreaShapePair>::_copy_on_write
                      ((CowData<Area3D::AreaShapePair> *)(lVar42 + 0x30));
            lVar57 = *(long *)(lVar42 + 0x30);
            if (lVar57 == 0) {
              lVar44 = -1;
            }
            else {
              lVar44 = *(long *)(lVar57 + -8) + -1;
              if (lVar56 < lVar44) {
                memmove((void *)(lVar57 + lVar6),(void *)(lVar57 + 8 + lVar6),(lVar44 - lVar56) * 8)
                ;
              }
            }
            CowData<Area3D::AreaShapePair>::resize<false>
                      ((CowData<Area3D::AreaShapePair> *)(lVar42 + 0x30),lVar44);
            iVar39 = *(int *)(lVar42 + 0x20);
          }
          else {
            _err_print_index_error
                      ("remove_at","./core/templates/cowdata.h",0xe4,lVar56,lVar44,"p_index",
                       "size()","",false,false);
            iVar39 = *(int *)(lVar42 + 0x20);
          }
          cVar8 = *(char *)(lVar42 + 0x24);
          if (iVar39 != 0) goto LAB_0010c066;
          local_138 = *(long *)(this + 0x698);
          lVar42 = *(long *)(lVar42 + 0x10);
          if (local_138 == 0) goto LAB_0010c10a;
          goto LAB_0010c0fc;
        }
        break;
      }
LAB_0010bbd9:
      iVar49 = iVar38 + 1;
    }
    else {
      if (iVar7 <= param_5) goto LAB_0010bbd9;
LAB_0010bba2:
      iVar43 = iVar38 + -1;
    }
  } while (iVar49 <= iVar43);
LAB_0010c5c1:
  cVar8 = *(char *)(lVar42 + 0x24);
  if (iVar39 == 0) {
    lVar42 = *(long *)(lVar42 + 0x10);
LAB_0010c0fc:
    if (*(int *)(this + 0x6bc) != 0) {
      uVar48 = *(uint *)(this + 0x6b8);
      lVar57 = *(long *)(this + 0x6a0);
LAB_0010c254:
      uVar51 = *(uint *)(hash_table_size_primes + (ulong)uVar48 * 4);
      uVar52 = CONCAT44(0,uVar51);
      lVar44 = *(long *)(hash_table_size_primes_inv + (ulong)uVar48 * 8);
      uVar41 = lVar42 * 0x3ffff - 1;
      uVar41 = (uVar41 ^ uVar41 >> 0x1f) * 0x15;
      uVar41 = (uVar41 ^ uVar41 >> 0xb) * 0x41;
      uVar40 = (uint)(uVar41 >> 0x16) ^ (uint)uVar41;
      uVar48 = 1;
      if (uVar40 != 0) {
        uVar48 = uVar40;
      }
      auVar16._8_8_ = 0;
      auVar16._0_8_ = (ulong)uVar48 * lVar44;
      auVar29._8_8_ = 0;
      auVar29._0_8_ = uVar52;
      uVar41 = SUB168(auVar16 * auVar29,8);
      uVar40 = *(uint *)(lVar57 + uVar41 * 4);
      uVar53 = (ulong)uVar40;
      uVar55 = (ulong)SUB164(auVar16 * auVar29,8);
      if (uVar40 != 0) {
        uVar40 = 0;
LAB_0010c324:
        auVar19._8_8_ = 0;
        auVar19._0_8_ = (ulong)((int)uVar55 + 1) * lVar44;
        auVar32._8_8_ = 0;
        auVar32._0_8_ = uVar52;
        uVar45 = SUB168(auVar19 * auVar32,8);
        uVar54 = SUB164(auVar19 * auVar32,8);
        if ((uVar48 != (uint)uVar53) ||
           (lVar42 != *(long *)(*(long *)(local_138 + uVar41 * 8) + 0x10))) goto LAB_0010c2e8;
        puVar58 = (uint *)(lVar57 + uVar45 * 4);
        uVar41 = (ulong)uVar54;
        uVar48 = *puVar58;
        if ((uVar48 != 0) &&
           (auVar20._8_8_ = 0, auVar20._0_8_ = (ulong)uVar48 * lVar44, auVar33._8_8_ = 0,
           auVar33._0_8_ = uVar52, auVar21._8_8_ = 0,
           auVar21._0_8_ = (ulong)((uVar54 + uVar51) - SUB164(auVar20 * auVar33,8)) * lVar44,
           auVar34._8_8_ = 0, auVar34._0_8_ = uVar52, SUB164(auVar21 * auVar34,8) != 0)) {
          while( true ) {
            puVar2 = (uint *)(lVar57 + uVar55 * 4);
            *puVar58 = *puVar2;
            puVar3 = (undefined8 *)(local_138 + uVar45 * 8);
            *puVar2 = uVar48;
            puVar4 = (undefined8 *)(local_138 + uVar55 * 8);
            uVar11 = *puVar3;
            *puVar3 = *puVar4;
            *puVar4 = uVar11;
            auVar24._8_8_ = 0;
            auVar24._0_8_ = (ulong)((int)uVar41 + 1) * lVar44;
            auVar37._8_8_ = 0;
            auVar37._0_8_ = uVar52;
            uVar45 = SUB168(auVar24 * auVar37,8);
            puVar58 = (uint *)(lVar57 + uVar45 * 4);
            uVar48 = *puVar58;
            uVar55 = uVar41;
            if ((uVar48 == 0) ||
               (auVar22._8_8_ = 0, auVar22._0_8_ = (ulong)uVar48 * lVar44, auVar35._8_8_ = 0,
               auVar35._0_8_ = uVar52, auVar23._8_8_ = 0,
               auVar23._0_8_ =
                    (ulong)((SUB164(auVar24 * auVar37,8) + uVar51) - SUB164(auVar22 * auVar35,8)) *
                    lVar44, auVar36._8_8_ = 0, auVar36._0_8_ = uVar52,
               SUB164(auVar23 * auVar36,8) == 0)) break;
            uVar41 = uVar45 & 0xffffffff;
          }
        }
        *(undefined4 *)(lVar57 + uVar55 * 4) = 0;
        plVar5 = (long *)(local_138 + uVar55 * 8);
        plVar47 = (long *)*plVar5;
        if (*(long **)(this + 0x6a8) == plVar47) {
          *(long *)(this + 0x6a8) = *plVar47;
          plVar47 = (long *)*plVar5;
        }
        if (*(long **)(this + 0x6b0) == plVar47) {
          *(long *)(this + 0x6b0) = plVar47[1];
          plVar47 = (long *)*plVar5;
        }
        if ((long *)plVar47[1] != (long *)0x0) {
          *(long *)plVar47[1] = *plVar47;
          plVar47 = (long *)*plVar5;
        }
        if (*plVar47 != 0) {
          *(long *)(*plVar47 + 8) = plVar47[1];
          plVar47 = (long *)*plVar5;
        }
        if (plVar47[6] != 0) {
          LOCK();
          plVar5 = (long *)(plVar47[6] + -0x10);
          *plVar5 = *plVar5 + -1;
          UNLOCK();
          if (*plVar5 == 0) {
            lVar42 = plVar47[6];
            plVar47[6] = 0;
            Memory::free_static((void *)(lVar42 + -0x10),false);
          }
        }
        Memory::free_static(plVar47,false);
        *(undefined8 *)(*(long *)(this + 0x698) + uVar55 * 8) = 0;
        *(int *)(this + 0x6bc) = *(int *)(this + 0x6bc) + -1;
      }
LAB_0010c497:
      if (local_150 == (Node *)0x0) goto LAB_0010bebe;
    }
LAB_0010c10a:
    pcVar10 = *(code **)(*(long *)local_150 + 0x110);
    create_custom_callable_function_pointer<Area3D,ObjectID>
              ((Area3D *)&local_108,(char *)this,(_func_void_ObjectID *)"&Area3D::_area_enter_tree")
    ;
    (*pcVar10)(local_150,SceneStringNames::singleton + 0x38,(Area3D *)&local_108);
    Callable::~Callable((Callable *)&local_108);
    pcVar10 = *(code **)(*(long *)local_150 + 0x110);
    create_custom_callable_function_pointer<Area3D,ObjectID>
              ((Area3D *)&local_108,(char *)this,(_func_void_ObjectID *)"&Area3D::_area_exit_tree");
    (*pcVar10)(local_150,SceneStringNames::singleton + 0x40,(Area3D *)&local_108);
    Callable::~Callable((Callable *)&local_108);
    if (cVar8 != '\0') {
      lVar42 = SceneStringNames::singleton + 0x1c0;
      Variant::Variant((Variant *)local_b8,local_140);
      local_98 = (undefined1  [16])0x0;
      local_a0[0] = 0;
      local_a0[1] = 0;
      local_e8 = (Variant *)local_b8;
      (**(code **)(*(long *)this + 0xd0))(this,lVar42,&local_e8,1);
      if (Variant::needs_deinit[local_a0[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_b8[0]] != '\0') {
        Variant::_clear_internal();
      }
LAB_0010bebe:
      lVar42 = SceneStringNames::singleton + 0x168;
      local_108 = *param_2;
      Variant::Variant((Variant *)local_b8,(RID *)&local_108);
      Variant::Variant((Variant *)local_a0,local_140);
      Variant::Variant(local_88,param_5);
      Variant::Variant(local_70,param_6);
      local_50 = (undefined1  [16])0x0;
      pVVar46 = (Variant *)local_40;
      local_58 = 0;
      local_e8 = (Variant *)local_b8;
      pVStack_e0 = (Variant *)local_a0;
      local_d8 = local_88;
      pVStack_d0 = local_70;
      (**(code **)(*(long *)this + 0xd0))(this,lVar42,&local_e8,4);
      do {
        pVVar1 = pVVar46 + -0x18;
        pVVar46 = pVVar46 + -0x18;
        if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
          Variant::_clear_internal();
        }
      } while (pVVar46 != (Variant *)local_b8);
    }
  }
  else {
LAB_0010c066:
    if (cVar8 != '\0') goto LAB_0010bebe;
  }
LAB_0010bc72:
  this[0x65a] = (Area3D)0x0;
  if (*(int *)(this + 0x540) == 0) {
    if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("unlock_callback","./scene/3d/physics/collision_object_3d.h",0x67,
                       "Condition \"callback_lock == 0\" is true.",0,0);
      return;
    }
    goto LAB_0010c5af;
  }
  *(int *)(this + 0x540) = *(int *)(this + 0x540) + -1;
LAB_0010bc10:
  if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010c5af:
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



/* Area3D::is_class_ptr(void*) const */

uint __thiscall Area3D::is_class_ptr(Area3D *this,void *param_1)

{
  return (uint)CONCAT71(0x11fa,(undefined4 *)param_1 ==
                               &CollisionObject3D::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x11fa,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x11fa,(undefined4 *)param_1 == &Node3D::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x11fa,(undefined4 *)param_1 == &Node::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x11fa,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* Area3D::_getv(StringName const&, Variant&) const */

undefined8 Area3D::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Area3D::_setv(StringName const&, Variant const&) */

undefined8 Area3D::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* CallableCustomMethodPointer<Area3D, void, int, RID const&, ObjectID, int,
   int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Area3D,void,int,RID_const&,ObjectID,int,int>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Area3D,void,int,RID_const&,ObjectID,int,int> *this)

{
  return;
}



/* CallableCustomMethodPointer<Area3D, void, ObjectID>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Area3D,void,ObjectID>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Area3D,void,ObjectID> *this)

{
  return;
}



/* MethodBindTRC<StringName>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<StringName>::_gen_argument_type(int param_1)

{
  return 0x15;
}



/* MethodBindTRC<StringName>::get_argument_meta(int) const */

undefined8 MethodBindTRC<StringName>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<StringName const&>::_gen_argument_type(int) const */

byte __thiscall
MethodBindT<StringName_const&>::_gen_argument_type(MethodBindT<StringName_const&> *this,int param_1)

{
  return -(param_1 == 0) & 0x15;
}



/* MethodBindT<StringName const&>::get_argument_meta(int) const */

undefined8 MethodBindT<StringName_const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<bool, Node*>::_gen_argument_type(int) const */

char __thiscall
MethodBindTRC<bool,Node*>::_gen_argument_type(MethodBindTRC<bool,Node*> *this,int param_1)

{
  return (-(param_1 == 0) & 0x17U) + 1;
}



/* MethodBindTRC<bool, Node*>::get_argument_meta(int) const */

undefined8 MethodBindTRC<bool,Node*>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<TypedArray<Area3D>>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<TypedArray<Area3D>>::_gen_argument_type(int param_1)

{
  return 0x1c;
}



/* MethodBindTRC<TypedArray<Area3D>>::get_argument_meta(int) const */

undefined8 MethodBindTRC<TypedArray<Area3D>>::get_argument_meta(int param_1)

{
  return 0;
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



/* MethodBindTRC<NodePath const&>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<NodePath_const&>::_gen_argument_type(int param_1)

{
  return 0x16;
}



/* MethodBindTRC<NodePath const&>::get_argument_meta(int) const */

undefined8 MethodBindTRC<NodePath_const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<NodePath const&>::_gen_argument_type(int) const */

byte __thiscall
MethodBindT<NodePath_const&>::_gen_argument_type(MethodBindT<NodePath_const&> *this,int param_1)

{
  return -(param_1 == 0) & 0x16;
}



/* MethodBindT<NodePath const&>::get_argument_meta(int) const */

undefined8 MethodBindT<NodePath_const&>::get_argument_meta(int param_1)

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



/* MethodBindTRC<Area3D::SpaceOverride>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<Area3D::SpaceOverride>::_gen_argument_type(int param_1)

{
  return 2;
}



/* MethodBindTRC<Area3D::SpaceOverride>::get_argument_meta(int) const */

undefined8 MethodBindTRC<Area3D::SpaceOverride>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<Area3D::SpaceOverride>::_gen_argument_type(int) const */

char __thiscall
MethodBindT<Area3D::SpaceOverride>::_gen_argument_type
          (MethodBindT<Area3D::SpaceOverride> *this,int param_1)

{
  return (param_1 == 0) * '\x02';
}



/* MethodBindT<Area3D::SpaceOverride>::get_argument_meta(int) const */

undefined8 MethodBindT<Area3D::SpaceOverride>::get_argument_meta(int param_1)

{
  return 0;
}



/* CallableCustomMethodPointer<Area3D, void, int, RID const&, ObjectID, int,
   int>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<Area3D,void,int,RID_const&,ObjectID,int,int>::get_argument_count
          (CallableCustomMethodPointer<Area3D,void,int,RID_const&,ObjectID,int,int> *this,
          bool *param_1)

{
  *param_1 = true;
  return 5;
}



/* CallableCustomMethodPointer<Area3D, void, ObjectID>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<Area3D,void,ObjectID>::get_argument_count
          (CallableCustomMethodPointer<Area3D,void,ObjectID> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<Area3D, void, ObjectID>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Area3D,void,ObjectID>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Area3D,void,ObjectID> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<Area3D, void, int, RID const&, ObjectID, int,
   int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Area3D,void,int,RID_const&,ObjectID,int,int>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Area3D,void,int,RID_const&,ObjectID,int,int> *this)

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



/* MethodBindT<Vector3 const&>::~MethodBindT() */

void __thiscall MethodBindT<Vector3_const&>::~MethodBindT(MethodBindT<Vector3_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011f5f0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Vector3 const&>::~MethodBindT() */

void __thiscall MethodBindT<Vector3_const&>::~MethodBindT(MethodBindT<Vector3_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011f5f0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Vector3 const&>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Vector3_const&>::~MethodBindTRC(MethodBindTRC<Vector3_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011f650;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Vector3 const&>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Vector3_const&>::~MethodBindTRC(MethodBindTRC<Vector3_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011f650;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Area3D::SpaceOverride>::~MethodBindT() */

void __thiscall
MethodBindT<Area3D::SpaceOverride>::~MethodBindT(MethodBindT<Area3D::SpaceOverride> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011f3b0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Area3D::SpaceOverride>::~MethodBindT() */

void __thiscall
MethodBindT<Area3D::SpaceOverride>::~MethodBindT(MethodBindT<Area3D::SpaceOverride> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011f3b0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Area3D::SpaceOverride>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Area3D::SpaceOverride>::~MethodBindTRC(MethodBindTRC<Area3D::SpaceOverride> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011f410;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Area3D::SpaceOverride>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Area3D::SpaceOverride>::~MethodBindTRC(MethodBindTRC<Area3D::SpaceOverride> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011f410;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<int>::~MethodBindT() */

void __thiscall MethodBindT<int>::~MethodBindT(MethodBindT<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011f6b0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<int>::~MethodBindT() */

void __thiscall MethodBindT<int>::~MethodBindT(MethodBindT<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011f6b0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011f710;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011f710;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<NodePath const&>::~MethodBindT() */

void __thiscall MethodBindT<NodePath_const&>::~MethodBindT(MethodBindT<NodePath_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011f770;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<NodePath const&>::~MethodBindT() */

void __thiscall MethodBindT<NodePath_const&>::~MethodBindT(MethodBindT<NodePath_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011f770;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<NodePath const&>::~MethodBindTRC() */

void __thiscall MethodBindTRC<NodePath_const&>::~MethodBindTRC(MethodBindTRC<NodePath_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011f7d0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<NodePath const&>::~MethodBindTRC() */

void __thiscall MethodBindTRC<NodePath_const&>::~MethodBindTRC(MethodBindTRC<NodePath_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011f7d0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<TypedArray<Node3D>>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<TypedArray<Node3D>>::~MethodBindTRC(MethodBindTRC<TypedArray<Node3D>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011f830;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<TypedArray<Node3D>>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<TypedArray<Node3D>>::~MethodBindTRC(MethodBindTRC<TypedArray<Node3D>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011f830;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<TypedArray<Area3D>>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<TypedArray<Area3D>>::~MethodBindTRC(MethodBindTRC<TypedArray<Area3D>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011f890;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<TypedArray<Area3D>>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<TypedArray<Area3D>>::~MethodBindTRC(MethodBindTRC<TypedArray<Area3D>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011f890;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<bool, Node*>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool,Node*>::~MethodBindTRC(MethodBindTRC<bool,Node*> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011f8f0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<bool, Node*>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool,Node*>::~MethodBindTRC(MethodBindTRC<bool,Node*> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011f8f0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<bool>::~MethodBindT() */

void __thiscall MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011f470;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<bool>::~MethodBindT() */

void __thiscall MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011f470;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<bool>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011f4d0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<bool>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011f4d0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<StringName const&>::~MethodBindT() */

void __thiscall MethodBindT<StringName_const&>::~MethodBindT(MethodBindT<StringName_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011f950;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<StringName const&>::~MethodBindT() */

void __thiscall MethodBindT<StringName_const&>::~MethodBindT(MethodBindT<StringName_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011f950;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<StringName>::~MethodBindTRC() */

void __thiscall MethodBindTRC<StringName>::~MethodBindTRC(MethodBindTRC<StringName> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011f9b0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<StringName>::~MethodBindTRC() */

void __thiscall MethodBindTRC<StringName>::~MethodBindTRC(MethodBindTRC<StringName> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011f9b0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<float>::~MethodBindT() */

void __thiscall MethodBindT<float>::~MethodBindT(MethodBindT<float> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011f530;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<float>::~MethodBindT() */

void __thiscall MethodBindT<float>::~MethodBindT(MethodBindT<float> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011f530;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<float>::~MethodBindTRC() */

void __thiscall MethodBindTRC<float>::~MethodBindTRC(MethodBindTRC<float> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011f590;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<float>::~MethodBindTRC() */

void __thiscall MethodBindTRC<float>::~MethodBindTRC(MethodBindTRC<float> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011f590;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* Area3D::_property_get_revertv(StringName const&, Variant&) const */

undefined8 Area3D::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_property_get_revert) {
    uVar1 = Node3D::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* Area3D::_property_can_revertv(StringName const&) const */

undefined8 Area3D::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00125008 != Object::_property_can_revert) {
    uVar1 = Node3D::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* CallableCustomMethodPointer<Area3D, void, int, RID const&, ObjectID, int, int>::get_object()
   const */

undefined8 __thiscall
CallableCustomMethodPointer<Area3D,void,int,RID_const&,ObjectID,int,int>::get_object
          (CallableCustomMethodPointer<Area3D,void,int,RID_const&,ObjectID,int,int> *this)

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
      goto LAB_0010dfcd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010dfcd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010dfcd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<Area3D, void, ObjectID>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<Area3D,void,ObjectID>::get_object
          (CallableCustomMethodPointer<Area3D,void,ObjectID> *this)

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
      goto LAB_0010e0cd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010e0cd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010e0cd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
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



/* CowData<Area3D::ShapePair>::_ref(CowData<Area3D::ShapePair> const&) [clone .part.0] */

void __thiscall CowData<Area3D::ShapePair>::_ref(CowData<Area3D::ShapePair> *this,CowData *param_1)

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



/* CowData<Area3D::AreaShapePair>::_ref(CowData<Area3D::AreaShapePair> const&) [clone .part.0] */

void __thiscall
CowData<Area3D::AreaShapePair>::_ref(CowData<Area3D::AreaShapePair> *this,CowData *param_1)

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



/* Area3D::_get_class_namev() const */

undefined8 * Area3D::_get_class_namev(void)

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
LAB_0010e2e3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010e2e3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"Area3D");
      goto LAB_0010e34e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"Area3D");
LAB_0010e34e:
  return &_get_class_namev()::_class_name_static;
}



/* Area3D::get_class() const */

void Area3D::get_class(void)

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



/* CowData<Area3D::AreaShapePair>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Area3D::AreaShapePair>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<Area3D::ShapePair>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Area3D::ShapePair>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
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
  local_48 = &_LC29;
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
      StringName::StringName((StringName *)&local_48,(String *)(puVar3 + 8),false);
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
      goto joined_r0x0010e5ac;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010e5ac:
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



/* MethodBindTRC<NodePath const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<NodePath_const&>::_gen_argument_type_info(int param_1)

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
  local_48 = &_LC29;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 0x16;
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
      StringName::StringName((StringName *)&local_48,(String *)(puVar3 + 8),false);
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
      goto joined_r0x0010e72c;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010e72c:
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
      StringName::StringName((StringName *)&local_48,(String *)(puVar3 + 8),false);
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
      goto joined_r0x0010e8bc;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010e8bc:
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



/* MethodBindTRC<StringName>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<StringName>::_gen_argument_type_info(int param_1)

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
  local_48 = &_LC29;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 0x15;
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
      StringName::StringName((StringName *)&local_48,(String *)(puVar3 + 8),false);
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
      goto joined_r0x0010ea3c;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010ea3c:
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
  local_48 = &_LC29;
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
      StringName::StringName((StringName *)&local_48,(String *)(puVar3 + 8),false);
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
      goto joined_r0x0010ebbc;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010ebbc:
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
  local_48 = &_LC29;
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
      StringName::StringName((StringName *)&local_48,(String *)(puVar3 + 8),false);
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
      goto joined_r0x0010ed3c;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010ed3c:
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
  local_48 = &_LC29;
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
      StringName::StringName((StringName *)&local_48,(String *)(puVar3 + 8),false);
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
      goto joined_r0x0010eebc;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010eebc:
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



/* MethodBindTRC<TypedArray<Area3D>>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<TypedArray<Area3D>>::_gen_argument_type_info(int param_1)

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
  local_48 = "Area3D";
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
      StringName::StringName((StringName *)&local_48,(String *)(puVar3 + 8),false);
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
      goto joined_r0x0010f03c;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010f03c:
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
    StringName::StringName((StringName *)&local_48,(String *)(this + 0x20),false);
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



/* Area3D::_validate_propertyv(PropertyInfo&) const */

void __thiscall Area3D::_validate_propertyv(Area3D *this,PropertyInfo *param_1)

{
  Node::_validate_property((PropertyInfo *)this);
  if ((code *)PTR__validate_property_00125010 != Node::_validate_property) {
    Node3D::_validate_property((PropertyInfo *)this);
  }
  _validate_property(this,param_1);
  return;
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



/* Callable create_custom_callable_function_pointer<Area3D, ObjectID>(Area3D*, char const*, void
   (Area3D::*)(ObjectID)) */

Area3D * create_custom_callable_function_pointer<Area3D,ObjectID>
                   (Area3D *param_1,char *param_2,_func_void_ObjectID *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC29;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_0011f290;
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



/* Callable create_custom_callable_function_pointer<Area3D, int, RID const&, ObjectID, int,
   int>(Area3D*, char const*, void (Area3D::*)(int, RID const&, ObjectID, int, int)) */

Area3D * create_custom_callable_function_pointer<Area3D,int,RID_const&,ObjectID,int,int>
                   (Area3D *param_1,char *param_2,_func_void_int_RID_ptr_ObjectID_int_int *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC29;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_0011f320;
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(char **)(this + 0x28) = param_2;
  *(undefined8 *)(this + 0x30) = uVar1;
  *(undefined8 *)(this + 0x38) = in_RCX;
  *(undefined8 *)(this + 0x40) = in_R8;
  *(undefined8 *)(this + 0x10) = 0;
  CallableCustomMethodPointerBase::_setup((uint *)this,(int)this + 0x28);
  *(_func_void_int_RID_ptr_ObjectID_int_int **)(this + 0x20) = param_3 + 1;
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



/* Area3D::_notificationv(int, bool) */

void __thiscall Area3D::_notificationv(Area3D *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if (param_1 == 10) {
      _initialize_wind(this);
    }
    if ((code *)PTR__notification_00125018 != Node3D::_notification) {
      CollisionObject3D::_notification(iVar1);
    }
    Node3D::_notification(iVar1);
    Node::_notification(iVar1);
    return;
  }
  Node::_notification(iVar1);
  Node3D::_notification(iVar1);
  if ((code *)PTR__notification_00125018 != Node3D::_notification) {
    CollisionObject3D::_notification(iVar1);
  }
  if (param_1 != 10) {
    return;
  }
  _initialize_wind(this);
  return;
}



/* godot::details::enum_qualified_name_to_class_info_name(String const&) */

details * __thiscall
godot::details::enum_qualified_name_to_class_info_name(details *this,String *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  code *pcVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long in_FS_OFFSET;
  long local_60;
  char local_58 [8];
  long *local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  String::split(local_58,SUB81(param_1,0),0x10fada);
  if ((local_50 != (long *)0x0) && (2 < local_50[-1])) {
    local_60 = 0;
    local_48 = &_LC67;
    local_40 = 1;
    String::parse_latin1((StrRange *)&local_60);
    if (local_50 == (long *)0x0) {
      lVar7 = 0;
      lVar6 = -2;
    }
    else {
      lVar7 = local_50[-1];
      lVar6 = lVar7 + -2;
      if (-1 < lVar6) {
        String::operator+((String *)&local_48,(String *)(local_50 + lVar6));
        String::operator+((String *)this,(String *)&local_48);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        goto LAB_0010fbad;
      }
    }
    _err_print_index_error
              ("get","./core/templates/cowdata.h",0xdb,lVar6,lVar7,"p_index","size()","",false,true)
    ;
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  local_60 = 0;
  local_48 = &_LC67;
  local_40 = 1;
  String::parse_latin1((StrRange *)&local_60);
  String::join((Vector *)this);
  lVar7 = local_60;
  if (local_60 != 0) {
    LOCK();
    plVar1 = (long *)(local_60 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_60 = 0;
      Memory::free_static((void *)(lVar7 + -0x10),false);
    }
  }
LAB_0010fbad:
  plVar1 = local_50;
  if (local_50 != (long *)0x0) {
    LOCK();
    plVar5 = local_50 + -2;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      if (local_50 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar7 = local_50[-1];
      local_50 = (long *)0x0;
      if (lVar7 != 0) {
        lVar6 = 0;
        plVar5 = plVar1;
        do {
          if (*plVar5 != 0) {
            LOCK();
            plVar2 = (long *)(*plVar5 + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar3 = *plVar5;
              *plVar5 = 0;
              Memory::free_static((void *)(lVar3 + -0x10),false);
            }
          }
          lVar6 = lVar6 + 1;
          plVar5 = plVar5 + 1;
        } while (lVar7 != lVar6);
      }
      Memory::free_static(plVar1 + -2,false);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GetTypeInfo<Area3D::SpaceOverride, void>::get_class_info() */

GetTypeInfo<Area3D::SpaceOverride,void> * __thiscall
GetTypeInfo<Area3D::SpaceOverride,void>::get_class_info
          (GetTypeInfo<Area3D::SpaceOverride,void> *this)

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
  local_48 = "Area3D::SpaceOverride";
  local_40 = 0x15;
  String::parse_latin1((StrRange *)&local_58);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_50,(String *)&local_58);
  StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
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



/* MethodBindTRC<Area3D::SpaceOverride>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Area3D::SpaceOverride>::_gen_argument_type_info(int param_1)

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
  local_38 = "Area3D::SpaceOverride";
  String::parse_latin1((StrRange *)&local_40);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_38,(String *)&local_40);
  StringName::StringName((StringName *)&local_48,(String *)&local_38,false);
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



/* CallableCustomMethodPointer<Area3D, void, ObjectID>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<Area3D,void,ObjectID>::call
          (CallableCustomMethodPointer<Area3D,void,ObjectID> *this,Variant **param_1,int param_2,
          Variant *param_3,CallError *param_4)

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
      goto LAB_00110219;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar7[1] == 0) goto LAB_00110219;
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
        uVar5 = _LC76;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar5;
        }
        uVar5 = Variant::operator_cast_to_ObjectID(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001101c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5);
          return;
        }
        goto LAB_001102db;
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
LAB_00110219:
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
LAB_001102db:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<Area3D, void, int, RID const&, ObjectID, int, int>::call(Variant
   const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<Area3D,void,int,RID_const&,ObjectID,int,int>::call
          (CallableCustomMethodPointer<Area3D,void,int,RID_const&,ObjectID,int,int> *this,
          Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  uint uVar10;
  ulong *puVar11;
  code *pcVar12;
  long in_FS_OFFSET;
  bool bVar13;
  CowData<char32_t> local_70 [8];
  CowData<char32_t> local_68 [8];
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar10 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar10 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar3 = (ulong)local_58 >> 8;
      local_58 = (char *)(uVar3 << 8);
      LOCK();
      bVar13 = (char)ObjectDB::spin_lock == '\0';
      if (bVar13) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar13) break;
      local_58 = (char *)(uVar3 << 8);
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar11 = (ulong *)((ulong)uVar10 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) == (*puVar11 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar11[1] != 0) {
        lVar1 = *(long *)(this + 0x28);
        pcVar12 = *(code **)(this + 0x38);
        lVar2 = *(long *)(this + 0x40);
        if ((uint)param_2 < 6) {
          if (param_2 == 5) {
            *(undefined4 *)param_4 = 0;
            if (((ulong)pcVar12 & 1) != 0) {
              pcVar12 = *(code **)(pcVar12 + *(long *)(lVar1 + lVar2) + -1);
            }
            cVar5 = Variant::can_convert_strict(*(undefined4 *)param_1[4],2);
            uVar4 = _LC77;
            if (cVar5 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar4;
            }
            iVar6 = Variant::operator_cast_to_int(param_1[4]);
            cVar5 = Variant::can_convert_strict(*(undefined4 *)param_1[3],2);
            uVar4 = _LC78;
            if (cVar5 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar4;
            }
            iVar7 = Variant::operator_cast_to_int(param_1[3]);
            cVar5 = Variant::can_convert_strict(*(undefined4 *)param_1[2],2);
            uVar4 = _LC79;
            if (cVar5 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar4;
            }
            uVar9 = Variant::operator_cast_to_ObjectID(param_1[2]);
            cVar5 = Variant::can_convert_strict(*(undefined4 *)param_1[1],0x17);
            uVar4 = _LC80;
            if (cVar5 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar4;
            }
            local_58 = (char *)Variant::operator_cast_to_RID(param_1[1]);
            cVar5 = Variant::can_convert_strict(*(undefined4 *)*param_1,2);
            uVar4 = _LC76;
            if (cVar5 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar4;
            }
            iVar8 = Variant::operator_cast_to_int(*param_1);
            (*pcVar12)((long *)(lVar1 + lVar2),iVar8,(String *)&local_58,uVar9,iVar7,iVar6);
          }
          else {
            *(undefined4 *)param_4 = 4;
            *(undefined4 *)(param_4 + 8) = 5;
          }
        }
        else {
          *(undefined4 *)param_4 = 3;
          *(undefined4 *)(param_4 + 8) = 5;
        }
        goto LAB_001103ac;
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
LAB_001103ac:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
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
  char *pcVar3;
  long lVar4;
  long lVar5;
  char cVar6;
  long lVar7;
  undefined8 uVar8;
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
            if (lVar5 == 0) goto LAB_001106af;
            LOCK();
            lVar7 = *plVar1;
            bVar9 = lVar5 == lVar7;
            if (bVar9) {
              *plVar1 = lVar5 + 1;
              lVar7 = lVar5;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar7 != -1) {
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
LAB_001106af:
    cVar6 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar6 != '\0') goto LAB_00110763;
  }
  cVar6 = String::operator==(param_1,"CollisionObject3D");
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
              if (lVar5 == 0) goto LAB_001108ab;
              LOCK();
              lVar7 = *plVar1;
              bVar9 = lVar5 == lVar7;
              if (bVar9) {
                *plVar1 = lVar5 + 1;
                lVar7 = lVar5;
              }
              UNLOCK();
            } while (!bVar9);
            if (lVar7 != -1) {
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
LAB_001108ab:
      cVar6 = String::operator==(param_1,(String *)&local_60);
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
      if (cVar6 != '\0') goto LAB_00110763;
    }
    cVar6 = String::operator==(param_1,"Node3D");
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
            if (*(long *)(lVar4 + 0x10) != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar4 + 0x10));
            }
          }
          else {
            local_50 = strlen(pcVar3);
            local_58 = pcVar3;
            String::parse_latin1((StrRange *)&local_60);
          }
        }
        cVar6 = String::operator==(param_1,(String *)&local_60);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        if (cVar6 != '\0') goto LAB_00110763;
      }
      cVar6 = String::operator==(param_1,"Node");
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
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar4 + 0x10));
            }
            else {
              local_50 = strlen(pcVar3);
              local_58 = pcVar3;
              String::parse_latin1((StrRange *)&local_60);
            }
          }
          cVar6 = String::operator==(param_1,(String *)&local_60);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
          if (cVar6 != '\0') goto LAB_00110763;
        }
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar8 = String::operator==(param_1,"Object");
          return uVar8;
        }
        goto LAB_00110a23;
      }
    }
  }
LAB_00110763:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00110a23:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Area3D::is_class(String const&) const */

undefined8 __thiscall Area3D::is_class(Area3D *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_00110a9f;
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
LAB_00110a9f:
    cVar5 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar5 != '\0') goto LAB_00110b53;
  }
  cVar5 = String::operator==(param_1,"Area3D");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = CollisionObject3D::is_class((CollisionObject3D *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_00110b53:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<bool>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<bool>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uVar5;
  long lVar6;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar7;
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
  
  puVar7 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar7 = 0;
  puVar7[6] = 0;
  *(undefined8 *)(puVar7 + 8) = 0;
  puVar7[10] = 6;
  *(undefined1 (*) [16])(puVar7 + 2) = (undefined1  [16])0x0;
  if (in_EDX != 0) goto LAB_00110bf9;
  local_78 = 0;
  local_68 = &_LC29;
  local_80 = 0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._8_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,1);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00110cf0:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00110cf0;
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  *puVar7 = local_68._0_4_;
  if (*(long *)(puVar7 + 2) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar7 + 2));
    uVar5 = local_60._0_8_;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = local_60._8_8_;
    local_60 = auVar3 << 0x40;
    *(undefined8 *)(puVar7 + 2) = uVar5;
  }
  if (*(long *)(puVar7 + 4) != local_60._8_8_) {
    StringName::unref();
    uVar5 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(puVar7 + 4) = uVar5;
  }
  lVar6 = local_48;
  puVar7[6] = local_50;
  if (*(long *)(puVar7 + 8) == local_48) {
    puVar7[10] = local_40;
    if (local_48 != 0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
  }
  else {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar7 + 8));
    *(long *)(puVar7 + 8) = local_48;
    puVar7[10] = local_40;
  }
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  uVar5 = local_60._0_8_;
  if (local_60._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_60._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar4._8_8_ = 0;
      auVar4._0_8_ = local_60._8_8_;
      local_60 = auVar4 << 0x40;
      Memory::free_static((void *)(uVar5 + -0x10),false);
    }
  }
LAB_00110bf9:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar7;
}



/* MethodBindT<NodePath const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<NodePath_const&>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uVar5;
  long lVar6;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar7;
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
  
  puVar7 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar7 = 0;
  puVar7[6] = 0;
  *(undefined8 *)(puVar7 + 8) = 0;
  puVar7[10] = 6;
  *(undefined1 (*) [16])(puVar7 + 2) = (undefined1  [16])0x0;
  if (in_EDX != 0) goto LAB_00110ea9;
  local_78 = 0;
  local_68 = &_LC29;
  local_80 = 0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._8_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,0x16);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00110fa0:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00110fa0;
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  *puVar7 = local_68._0_4_;
  if (*(long *)(puVar7 + 2) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar7 + 2));
    uVar5 = local_60._0_8_;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = local_60._8_8_;
    local_60 = auVar3 << 0x40;
    *(undefined8 *)(puVar7 + 2) = uVar5;
  }
  if (*(long *)(puVar7 + 4) != local_60._8_8_) {
    StringName::unref();
    uVar5 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(puVar7 + 4) = uVar5;
  }
  lVar6 = local_48;
  puVar7[6] = local_50;
  if (*(long *)(puVar7 + 8) == local_48) {
    puVar7[10] = local_40;
    if (local_48 != 0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
  }
  else {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar7 + 8));
    *(long *)(puVar7 + 8) = local_48;
    puVar7[10] = local_40;
  }
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  uVar5 = local_60._0_8_;
  if (local_60._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_60._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar4._8_8_ = 0;
      auVar4._0_8_ = local_60._8_8_;
      local_60 = auVar4 << 0x40;
      Memory::free_static((void *)(uVar5 + -0x10),false);
    }
  }
LAB_00110ea9:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar7;
}



/* MethodBindT<Vector3 const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<Vector3_const&>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uVar5;
  long lVar6;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar7;
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
  
  puVar7 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar7 = 0;
  puVar7[6] = 0;
  *(undefined8 *)(puVar7 + 8) = 0;
  puVar7[10] = 6;
  *(undefined1 (*) [16])(puVar7 + 2) = (undefined1  [16])0x0;
  if (in_EDX != 0) goto LAB_00111159;
  local_78 = 0;
  local_68 = &_LC29;
  local_80 = 0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._8_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,9);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00111250:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00111250;
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  *puVar7 = local_68._0_4_;
  if (*(long *)(puVar7 + 2) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar7 + 2));
    uVar5 = local_60._0_8_;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = local_60._8_8_;
    local_60 = auVar3 << 0x40;
    *(undefined8 *)(puVar7 + 2) = uVar5;
  }
  if (*(long *)(puVar7 + 4) != local_60._8_8_) {
    StringName::unref();
    uVar5 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(puVar7 + 4) = uVar5;
  }
  lVar6 = local_48;
  puVar7[6] = local_50;
  if (*(long *)(puVar7 + 8) == local_48) {
    puVar7[10] = local_40;
    if (local_48 != 0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
  }
  else {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar7 + 8));
    *(long *)(puVar7 + 8) = local_48;
    puVar7[10] = local_40;
  }
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  uVar5 = local_60._0_8_;
  if (local_60._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_60._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar4._8_8_ = 0;
      auVar4._0_8_ = local_60._8_8_;
      local_60 = auVar4 << 0x40;
      Memory::free_static((void *)(uVar5 + -0x10),false);
    }
  }
LAB_00111159:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar7;
}



/* MethodBindT<StringName const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<StringName_const&>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uVar5;
  long lVar6;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar7;
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
  
  puVar7 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar7 = 0;
  puVar7[6] = 0;
  *(undefined8 *)(puVar7 + 8) = 0;
  puVar7[10] = 6;
  *(undefined1 (*) [16])(puVar7 + 2) = (undefined1  [16])0x0;
  if (in_EDX != 0) goto LAB_00111409;
  local_78 = 0;
  local_68 = &_LC29;
  local_80 = 0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._8_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,0x15);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00111500:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00111500;
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  *puVar7 = local_68._0_4_;
  if (*(long *)(puVar7 + 2) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar7 + 2));
    uVar5 = local_60._0_8_;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = local_60._8_8_;
    local_60 = auVar3 << 0x40;
    *(undefined8 *)(puVar7 + 2) = uVar5;
  }
  if (*(long *)(puVar7 + 4) != local_60._8_8_) {
    StringName::unref();
    uVar5 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(puVar7 + 4) = uVar5;
  }
  lVar6 = local_48;
  puVar7[6] = local_50;
  if (*(long *)(puVar7 + 8) == local_48) {
    puVar7[10] = local_40;
    if (local_48 != 0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
  }
  else {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar7 + 8));
    *(long *)(puVar7 + 8) = local_48;
    puVar7[10] = local_40;
  }
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  uVar5 = local_60._0_8_;
  if (local_60._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_60._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar4._8_8_ = 0;
      auVar4._0_8_ = local_60._8_8_;
      local_60 = auVar4 << 0x40;
      Memory::free_static((void *)(uVar5 + -0x10),false);
    }
  }
LAB_00111409:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar7;
}



/* MethodBindT<float>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<float>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uVar5;
  long lVar6;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar7;
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
  
  puVar7 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar7 = 0;
  puVar7[6] = 0;
  *(undefined8 *)(puVar7 + 8) = 0;
  puVar7[10] = 6;
  *(undefined1 (*) [16])(puVar7 + 2) = (undefined1  [16])0x0;
  if (in_EDX != 0) goto LAB_001116b9;
  local_78 = 0;
  local_68 = &_LC29;
  local_80 = 0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._8_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,3);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_001117b0:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_001117b0;
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  *puVar7 = local_68._0_4_;
  if (*(long *)(puVar7 + 2) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar7 + 2));
    uVar5 = local_60._0_8_;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = local_60._8_8_;
    local_60 = auVar3 << 0x40;
    *(undefined8 *)(puVar7 + 2) = uVar5;
  }
  if (*(long *)(puVar7 + 4) != local_60._8_8_) {
    StringName::unref();
    uVar5 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(puVar7 + 4) = uVar5;
  }
  lVar6 = local_48;
  puVar7[6] = local_50;
  if (*(long *)(puVar7 + 8) == local_48) {
    puVar7[10] = local_40;
    if (local_48 != 0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
  }
  else {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar7 + 8));
    *(long *)(puVar7 + 8) = local_48;
    puVar7[10] = local_40;
  }
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  uVar5 = local_60._0_8_;
  if (local_60._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_60._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar4._8_8_ = 0;
      auVar4._0_8_ = local_60._8_8_;
      local_60 = auVar4 << 0x40;
      Memory::free_static((void *)(uVar5 + -0x10),false);
    }
  }
LAB_001116b9:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar7;
}



/* MethodBindT<int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<int>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uVar5;
  long lVar6;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar7;
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
  
  puVar7 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar7 = 0;
  puVar7[6] = 0;
  *(undefined8 *)(puVar7 + 8) = 0;
  puVar7[10] = 6;
  *(undefined1 (*) [16])(puVar7 + 2) = (undefined1  [16])0x0;
  if (in_EDX != 0) goto LAB_00111969;
  local_78 = 0;
  local_68 = &_LC29;
  local_80 = 0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._8_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,2);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00111a60:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00111a60;
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  *puVar7 = local_68._0_4_;
  if (*(long *)(puVar7 + 2) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar7 + 2));
    uVar5 = local_60._0_8_;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = local_60._8_8_;
    local_60 = auVar3 << 0x40;
    *(undefined8 *)(puVar7 + 2) = uVar5;
  }
  if (*(long *)(puVar7 + 4) != local_60._8_8_) {
    StringName::unref();
    uVar5 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(puVar7 + 4) = uVar5;
  }
  lVar6 = local_48;
  puVar7[6] = local_50;
  if (*(long *)(puVar7 + 8) == local_48) {
    puVar7[10] = local_40;
    if (local_48 != 0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
  }
  else {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar7 + 8));
    *(long *)(puVar7 + 8) = local_48;
    puVar7[10] = local_40;
  }
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  uVar5 = local_60._0_8_;
  if (local_60._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_60._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar4._8_8_ = 0;
      auVar4._0_8_ = local_60._8_8_;
      local_60 = auVar4 << 0x40;
      Memory::free_static((void *)(uVar5 + -0x10),false);
    }
  }
LAB_00111969:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar7;
}



/* MethodBindT<Area3D::SpaceOverride>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<Area3D::SpaceOverride>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 uVar4;
  long lVar5;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar6;
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
  
  puVar6 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar6 = 0;
  puVar6[6] = 0;
  *(undefined8 *)(puVar6 + 8) = 0;
  puVar6[10] = 6;
  *(undefined1 (*) [16])(puVar6 + 2) = (undefined1  [16])0x0;
  if (in_EDX == 0) {
    local_80 = 0;
    local_68 = "Area3D::SpaceOverride";
    local_60._0_8_ = 0x15;
    String::parse_latin1((StrRange *)&local_80);
    godot::details::enum_qualified_name_to_class_info_name(local_88,(String *)&local_80);
    StringName::StringName((StringName *)&local_90,(String *)local_88,false);
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
    *puVar6 = local_68._0_4_;
    if (*(long *)(puVar6 + 2) != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar6 + 2));
      uVar4 = local_60._0_8_;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_60._8_8_;
      local_60 = auVar2 << 0x40;
      *(undefined8 *)(puVar6 + 2) = uVar4;
    }
    if (*(long *)(puVar6 + 4) != local_60._8_8_) {
      StringName::unref();
      uVar4 = local_60._8_8_;
      local_60._8_8_ = 0;
      *(undefined8 *)(puVar6 + 4) = uVar4;
    }
    lVar5 = local_48;
    puVar6[6] = (undefined4)local_50;
    if (*(long *)(puVar6 + 8) == local_48) {
      puVar6[10] = local_40;
      if (local_48 != 0) {
        LOCK();
        plVar1 = (long *)(local_48 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_48 = 0;
          Memory::free_static((void *)(lVar5 + -0x10),false);
        }
      }
    }
    else {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar6 + 8));
      *(long *)(puVar6 + 8) = local_48;
      puVar6[10] = local_40;
    }
    if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
      StringName::unref();
    }
    uVar4 = local_60._0_8_;
    if (local_60._0_8_ != 0) {
      LOCK();
      plVar1 = (long *)(local_60._0_8_ + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        auVar3._8_8_ = 0;
        auVar3._0_8_ = local_60._8_8_;
        local_60 = auVar3 << 0x40;
        Memory::free_static((void *)(uVar4 + -0x10),false);
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Node3D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Node3D::_get_property_listv(Node3D *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 (*pauVar3) [16];
  undefined4 *puVar4;
  long in_FS_OFFSET;
  CowData<char32_t> *local_b8;
  StringName *local_b0;
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
    local_88 = 0;
    local_90 = 0;
    local_78 = "Node";
    local_70 = 4;
    String::parse_latin1((StrRange *)&local_90);
    local_78 = "Node";
    local_98 = 0;
    local_70 = 4;
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
LAB_0011228d:
      local_50 = 0x80;
      StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
    }
    else {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_0011228d;
      StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
    }
    local_b8 = (CowData<char32_t> *)&local_70;
    List<PropertyInfo,DefaultAllocator>::push_back
              ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    if ((StringName::configured != '\0') && (local_68 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref(local_b8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    if ((StringName::configured != '\0') && (local_88 != 0)) {
      StringName::unref();
    }
    StringName::StringName((StringName *)&local_78,"Node",false);
    ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
    if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
      StringName::unref();
    }
  }
  local_b0 = (StringName *)&local_68;
  local_b8 = (CowData<char32_t> *)&local_70;
  local_88 = 0;
  local_78 = "Node3D";
  local_90 = 0;
  local_70 = 6;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Node3D";
  local_98 = 0;
  local_70 = 6;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref(local_b8,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 == 0) {
LAB_00111fc0:
    local_50 = 0x80;
    StringName::operator=(local_b0,(StringName *)&local_88);
LAB_00111fcf:
    lVar2 = *(long *)param_1;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00111fc0;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 == local_80) {
      if ((StringName::configured != '\0') && (local_80 != 0)) {
        StringName::unref();
      }
      goto LAB_00111fcf;
    }
    StringName::unref();
    lVar2 = *(long *)param_1;
    local_68 = local_80;
  }
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
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 2),(CowData *)local_b8);
  }
  StringName::operator=((StringName *)(puVar4 + 4),local_b0);
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
  CowData<char32_t>::_unref(local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"Node3D",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (!param_2) goto LAB_0011213f;
  local_88 = 0;
  local_90 = 0;
  local_78 = "Node";
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Node";
  local_98 = 0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref(local_b8,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 == 0) {
LAB_00112450:
    local_50 = 0x80;
    StringName::operator=(local_b0,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00112450;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 == local_80) {
      if ((StringName::configured != '\0') && (local_80 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_68 = local_80;
    }
  }
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref(local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"Node",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
LAB_0011213f:
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
LAB_00112718:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00112718;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00112735;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00112735:
  if (lVar2 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
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
  StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_68);
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



/* Area3D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Area3D::_get_property_listv(Area3D *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
  undefined4 *puVar5;
  long in_FS_OFFSET;
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
  local_78 = "Area3D";
  local_70 = 6;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Area3D";
  local_98 = 0;
  local_70 = 6;
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
LAB_00112b68:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00112b68;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00112b85;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00112b85:
  if (lVar2 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
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
  StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_68);
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
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"Area3D",false);
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



/* MethodInfo::MethodInfo<PropertyInfo, PropertyInfo, PropertyInfo, PropertyInfo>(String const&,
   PropertyInfo, PropertyInfo, PropertyInfo, PropertyInfo) */

void __thiscall
MethodInfo::MethodInfo<PropertyInfo,PropertyInfo,PropertyInfo,PropertyInfo>
          (MethodInfo *this,CowData *param_1,undefined4 *param_3,undefined4 *param_4,
          undefined4 *param_5,undefined4 *param_6)

{
  undefined4 uVar1;
  long *plVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined1 (*pauVar5) [16];
  long in_FS_OFFSET;
  long local_160;
  long local_158;
  undefined4 local_150;
  long local_148;
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
  lVar3 = *(long *)param_1;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x30) = 6;
  *(undefined8 *)(this + 0x38) = 1;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  if (lVar3 != 0) {
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
  uVar1 = *param_4;
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
    pauVar5 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])(this + 0x40) = pauVar5;
    *(undefined4 *)pauVar5[1] = 0;
    *pauVar5 = (undefined1  [16])0x0;
  }
  puVar4 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  lVar3 = *(long *)(param_3 + 2);
  *puVar4 = 0;
  puVar4[6] = 0;
  puVar4[10] = 6;
  *(undefined8 *)(puVar4 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar4 + 0xc) = (undefined1  [16])0x0;
  *puVar4 = *param_3;
  if (lVar3 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 2),(CowData *)(param_3 + 2));
  }
  StringName::operator=((StringName *)(puVar4 + 4),(StringName *)(param_3 + 4));
  puVar4[6] = param_3[6];
  if (*(long *)(puVar4 + 8) != *(long *)(param_3 + 8)) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)(param_3 + 8));
  }
  puVar4[10] = param_3[10];
  plVar2 = *(long **)(this + 0x40);
  lVar3 = plVar2[1];
  *(undefined8 *)(puVar4 + 0xc) = 0;
  *(long **)(puVar4 + 0x10) = plVar2;
  *(long *)(puVar4 + 0xe) = lVar3;
  if (lVar3 != 0) {
    *(undefined4 **)(lVar3 + 0x30) = puVar4;
  }
  plVar2[1] = (long)puVar4;
  if (*plVar2 == 0) {
    *plVar2 = (long)puVar4;
  }
  *(int *)(plVar2 + 2) = (int)plVar2[2] + 1;
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
  if (*(long *)(this + 0x40) == 0) {
    pauVar5 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])(this + 0x40) = pauVar5;
    *(undefined4 *)pauVar5[1] = 0;
    *pauVar5 = (undefined1  [16])0x0;
  }
  puVar4 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  *puVar4 = 0;
  puVar4[6] = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  puVar4[10] = 6;
  *(undefined8 *)(puVar4 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar4 + 0xc) = (undefined1  [16])0x0;
  *puVar4 = uVar1;
  if (local_160 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 2),(CowData *)&local_160);
  }
  StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_158);
  puVar4[6] = local_150;
  if (*(long *)(puVar4 + 8) != local_148) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_148);
  }
  puVar4[10] = local_140;
  plVar2 = *(long **)(this + 0x40);
  lVar3 = plVar2[1];
  *(long **)(puVar4 + 0x10) = plVar2;
  *(undefined8 *)(puVar4 + 0xc) = 0;
  *(long *)(puVar4 + 0xe) = lVar3;
  if (lVar3 != 0) {
    *(undefined4 **)(lVar3 + 0x30) = puVar4;
  }
  plVar2[1] = (long)puVar4;
  if (*plVar2 == 0) {
    *plVar2 = (long)puVar4;
  }
  *(int *)(plVar2 + 2) = (int)plVar2[2] + 1;
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
    pauVar5 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])(this + 0x40) = pauVar5;
    *(undefined4 *)pauVar5[1] = 0;
    *pauVar5 = (undefined1  [16])0x0;
  }
  puVar4 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  *puVar4 = 0;
  puVar4[6] = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  puVar4[10] = 6;
  *(undefined8 *)(puVar4 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar4 + 0xc) = (undefined1  [16])0x0;
  *puVar4 = local_d8;
  if (local_d0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 2),(CowData *)&local_d0);
  }
  StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_c8);
  puVar4[6] = local_c0;
  if (*(long *)(puVar4 + 8) != local_b8) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_b8);
  }
  puVar4[10] = local_b0;
  plVar2 = *(long **)(this + 0x40);
  lVar3 = plVar2[1];
  *(long **)(puVar4 + 0x10) = plVar2;
  *(undefined8 *)(puVar4 + 0xc) = 0;
  *(long *)(puVar4 + 0xe) = lVar3;
  if (lVar3 != 0) {
    *(undefined4 **)(lVar3 + 0x30) = puVar4;
  }
  plVar2[1] = (long)puVar4;
  if (*plVar2 == 0) {
    *plVar2 = (long)puVar4;
  }
  *(int *)(plVar2 + 2) = (int)plVar2[2] + 1;
  puVar4 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  *puVar4 = 0;
  puVar4[6] = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  puVar4[10] = 6;
  *(undefined8 *)(puVar4 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar4 + 0xc) = (undefined1  [16])0x0;
  *puVar4 = local_78;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_68);
  puVar4[6] = local_60;
  if (*(long *)(puVar4 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_58);
  }
  puVar4[10] = local_50;
  plVar2 = *(long **)(this + 0x40);
  lVar3 = plVar2[1];
  *(undefined8 *)(puVar4 + 0xc) = 0;
  *(long **)(puVar4 + 0x10) = plVar2;
  *(long *)(puVar4 + 0xe) = lVar3;
  if (lVar3 != 0) {
    *(undefined4 **)(lVar3 + 0x30) = puVar4;
  }
  plVar2[1] = (long)puVar4;
  if (*plVar2 == 0) {
    *plVar2 = (long)puVar4;
  }
  *(int *)(plVar2 + 2) = (int)plVar2[2] + 1;
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



/* MethodBindTRC<bool, Node*>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<bool,Node*>::_gen_argument_type_info(int param_1)

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
    local_90._0_8_ = 0;
    local_90._8_8_ = 0;
    local_70 = 6;
    local_68 = &_LC82;
    local_78 = 0;
    local_a8 = 0;
    local_60 = 4;
    String::parse_latin1((StrRange *)&local_a8);
    StringName::StringName((StringName *)&local_a0,(String *)&local_a8,false);
    local_68 = (undefined *)CONCAT44(local_68._4_4_,0x18);
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
    goto LAB_00113ac0;
  }
  local_a0 = 0;
  local_60 = 0;
  local_68 = &_LC29;
  String::parse_latin1((StrRange *)&local_a0);
  local_a8 = 0;
  *puVar4 = 1;
  puVar4[6] = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (local_a0 == 0) {
    puVar4[10] = 6;
LAB_00113a87:
    StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_98);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_a0);
    puVar4[10] = 6;
    if (puVar4[6] != 0x11) goto LAB_00113a87;
    StringName::StringName((StringName *)&local_68,(String *)(puVar4 + 8),false);
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
LAB_00113ac0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<Area3D, Area3D::SpaceOverride>(void
   (Area3D::*)(Area3D::SpaceOverride)) */

MethodBind * create_method_bind<Area3D,Area3D::SpaceOverride>(_func_void_SpaceOverride *param_1)

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
  *(_func_void_SpaceOverride **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0011f3b0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "Area3D";
  local_30 = 6;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
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



/* MethodBind* create_method_bind<Area3D, Area3D::SpaceOverride>(Area3D::SpaceOverride (Area3D::*)()
   const) */

MethodBind * create_method_bind<Area3D,Area3D::SpaceOverride>(_func_SpaceOverride *param_1)

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
  *(_func_SpaceOverride **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0011f410;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "Area3D";
  local_30 = 6;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
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



/* MethodBind* create_method_bind<Area3D, bool>(void (Area3D::*)(bool)) */

MethodBind * create_method_bind<Area3D,bool>(_func_void_bool *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_0011f470;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "Area3D";
  local_30 = 6;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
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



/* MethodBind* create_method_bind<Area3D, bool>(bool (Area3D::*)() const) */

MethodBind * create_method_bind<Area3D,bool>(_func_bool *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_0011f4d0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "Area3D";
  local_30 = 6;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
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



/* MethodBind* create_method_bind<Area3D, float>(void (Area3D::*)(float)) */

MethodBind * create_method_bind<Area3D,float>(_func_void_float *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_0011f530;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "Area3D";
  local_30 = 6;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
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



/* MethodBind* create_method_bind<Area3D, float>(float (Area3D::*)() const) */

MethodBind * create_method_bind<Area3D,float>(_func_float *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_0011f590;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "Area3D";
  local_30 = 6;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
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



/* MethodBind* create_method_bind<Area3D, Vector3 const&>(void (Area3D::*)(Vector3 const&)) */

MethodBind * create_method_bind<Area3D,Vector3_const&>(_func_void_Vector3_ptr *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_0011f5f0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "Area3D";
  local_30 = 6;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
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



/* MethodBind* create_method_bind<Area3D, Vector3 const&>(Vector3 const& (Area3D::*)() const) */

MethodBind * create_method_bind<Area3D,Vector3_const&>(_func_Vector3_ptr *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_0011f650;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "Area3D";
  local_30 = 6;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
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



/* MethodBind* create_method_bind<Area3D, int>(void (Area3D::*)(int)) */

MethodBind * create_method_bind<Area3D,int>(_func_void_int *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_0011f6b0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "Area3D";
  local_30 = 6;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
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



/* MethodBind* create_method_bind<Area3D, int>(int (Area3D::*)() const) */

MethodBind * create_method_bind<Area3D,int>(_func_int *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_0011f710;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "Area3D";
  local_30 = 6;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
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



/* MethodBind* create_method_bind<Area3D, NodePath const&>(void (Area3D::*)(NodePath const&)) */

MethodBind * create_method_bind<Area3D,NodePath_const&>(_func_void_NodePath_ptr *param_1)

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
  *(_func_void_NodePath_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0011f770;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "Area3D";
  local_30 = 6;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
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



/* MethodBind* create_method_bind<Area3D, NodePath const&>(NodePath const& (Area3D::*)() const) */

MethodBind * create_method_bind<Area3D,NodePath_const&>(_func_NodePath_ptr *param_1)

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
  *(_func_NodePath_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0011f7d0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "Area3D";
  local_30 = 6;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
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



/* MethodBind* create_method_bind<Area3D, TypedArray<Node3D>>(TypedArray<Node3D> (Area3D::*)()
   const) */

MethodBind * create_method_bind<Area3D,TypedArray<Node3D>>(_func_TypedArray *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_0011f830;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "Area3D";
  local_30 = 6;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
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



/* MethodBind* create_method_bind<Area3D, TypedArray<Area3D>>(TypedArray<Area3D> (Area3D::*)()
   const) */

MethodBind * create_method_bind<Area3D,TypedArray<Area3D>>(_func_TypedArray *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_0011f890;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "Area3D";
  local_30 = 6;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
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



/* MethodBind* create_method_bind<Area3D, bool, Node*>(bool (Area3D::*)(Node*) const) */

MethodBind * create_method_bind<Area3D,bool,Node*>(_func_bool_Node_ptr *param_1)

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
  *(_func_bool_Node_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0011f8f0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "Area3D";
  local_30 = 6;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
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



/* MethodBind* create_method_bind<Area3D, StringName const&>(void (Area3D::*)(StringName const&)) */

MethodBind * create_method_bind<Area3D,StringName_const&>(_func_void_StringName_ptr *param_1)

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
  *(_func_void_StringName_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0011f950;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "Area3D";
  local_30 = 6;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
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



/* MethodBind* create_method_bind<Area3D, StringName>(StringName (Area3D::*)() const) */

MethodBind * create_method_bind<Area3D,StringName>(_func_StringName *param_1)

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
  *(_func_StringName **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0011f9b0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "Area3D";
  local_30 = 6;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
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



/* Area3D::_initialize_classv() */

void Area3D::_initialize_classv(void)

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
    if (CollisionObject3D::initialize_class()::initialized == '\0') {
      if (Node3D::initialize_class()::initialized == '\0') {
        if (Node::initialize_class()::initialized == '\0') {
          Object::initialize_class();
          local_68 = 0;
          local_50 = 6;
          local_58 = "Object";
          String::parse_latin1((StrRange *)&local_68);
          StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
          local_58 = "Node";
          local_70 = 0;
          local_50 = 4;
          String::parse_latin1((StrRange *)&local_70);
          StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
          ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
          if ((StringName::configured != '\0') && (local_58 != (undefined *)0x0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
          if ((StringName::configured != '\0') && (local_60 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
          if ((code *)PTR__bind_methods_00125028 != Node::_bind_methods) {
            Node::_bind_methods();
          }
          Node::initialize_class()::initialized = '\x01';
        }
        local_68 = 0;
        local_58 = "Node";
        local_50 = 4;
        String::parse_latin1((StrRange *)&local_68);
        StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
        local_58 = "Node3D";
        local_70 = 0;
        local_50 = 6;
        String::parse_latin1((StrRange *)&local_70);
        StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
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
      local_58 = "Node3D";
      local_68 = 0;
      local_50 = 6;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "CollisionObject3D";
      local_70 = 0;
      local_50 = 0x11;
      String::parse_latin1((StrRange *)&local_70);
      StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
      ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      if ((code *)PTR__bind_methods_00125020 != Node3D::_bind_methods) {
        CollisionObject3D::_bind_methods();
      }
      CollisionObject3D::initialize_class()::initialized = '\x01';
    }
    local_58 = "CollisionObject3D";
    local_68 = 0;
    local_50 = 0x11;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "Area3D";
    local_70 = 0;
    local_50 = 6;
    String::parse_latin1((StrRange *)&local_70);
    StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
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
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HashMap<ObjectID, Area3D::BodyState, HashMapHasherDefault, HashMapComparatorDefault<ObjectID>,
   DefaultTypedAllocator<HashMapElement<ObjectID, Area3D::BodyState> >
   >::_resize_and_rehash(unsigned int) */

void __thiscall
HashMap<ObjectID,Area3D::BodyState,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,Area3D::BodyState>>>
::_resize_and_rehash
          (HashMap<ObjectID,Area3D::BodyState,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,Area3D::BodyState>>>
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<ObjectID, Area3D::BodyState, HashMapHasherDefault, HashMapComparatorDefault<ObjectID>,
   DefaultTypedAllocator<HashMapElement<ObjectID, Area3D::BodyState> > >::insert(ObjectID const&,
   Area3D::BodyState const&, bool) */

ObjectID *
HashMap<ObjectID,Area3D::BodyState,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,Area3D::BodyState>>>
::insert(ObjectID *param_1,BodyState *param_2,bool param_3)

{
  long *plVar1;
  uint *puVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  void *__s;
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
  undefined1 (*pauVar24) [16];
  uint uVar25;
  ulong uVar26;
  undefined8 *puVar27;
  undefined8 uVar28;
  void *__s_00;
  undefined8 *in_RCX;
  int iVar29;
  undefined7 in_register_00000011;
  long *plVar30;
  long lVar31;
  long lVar32;
  uint uVar33;
  char in_R8B;
  uint uVar34;
  ulong uVar35;
  ulong uVar36;
  undefined1 (*pauVar37) [16];
  long in_FS_OFFSET;
  long local_b8;
  undefined1 (*pauStack_90) [16];
  long local_48;
  long local_40;
  
  plVar30 = (long *)CONCAT71(in_register_00000011,param_3);
  __s_00 = *(void **)(param_2 + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar4 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
  if (__s_00 == (void *)0x0) {
    uVar35 = (ulong)uVar4;
    uVar26 = uVar35 * 4;
    uVar36 = uVar35 * 8;
    uVar28 = Memory::alloc_static(uVar26,false);
    *(undefined8 *)(param_2 + 0x10) = uVar28;
    __s_00 = (void *)Memory::alloc_static(uVar36,false);
    *(void **)(param_2 + 8) = __s_00;
    if (uVar4 != 0) {
      __s = *(void **)(param_2 + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar36)) && (__s_00 < (void *)((long)__s + uVar26))) {
        uVar26 = 0;
        do {
          *(undefined4 *)((long)__s + uVar26 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar26 * 8) = 0;
          uVar26 = uVar26 + 1;
        } while (uVar35 != uVar26);
        goto LAB_0011572a;
      }
      memset(__s,0,uVar26);
      memset(__s_00,0,uVar36);
      iVar29 = *(int *)(param_2 + 0x2c);
      local_b8 = *plVar30;
      goto LAB_0011573a;
    }
    iVar29 = *(int *)(param_2 + 0x2c);
    local_b8 = *plVar30;
    if (__s_00 != (void *)0x0) goto LAB_0011573a;
  }
  else {
LAB_0011572a:
    iVar29 = *(int *)(param_2 + 0x2c);
    local_b8 = *plVar30;
LAB_0011573a:
    if (iVar29 != 0) {
      uVar36 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4));
      lVar6 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
      uVar26 = local_b8 * 0x3ffff - 1;
      uVar26 = (uVar26 ^ uVar26 >> 0x1f) * 0x15;
      uVar26 = (uVar26 ^ uVar26 >> 0xb) * 0x41;
      uVar26 = uVar26 >> 0x16 ^ uVar26;
      uVar35 = uVar26 & 0xffffffff;
      if ((int)uVar26 == 0) {
        uVar35 = 1;
      }
      auVar8._8_8_ = 0;
      auVar8._0_8_ = uVar35 * lVar6;
      auVar16._8_8_ = 0;
      auVar16._0_8_ = uVar36;
      lVar31 = SUB168(auVar8 * auVar16,8);
      uVar33 = *(uint *)(*(long *)(param_2 + 0x10) + lVar31 * 4);
      uVar25 = SUB164(auVar8 * auVar16,8);
      if (uVar33 != 0) {
        uVar34 = 0;
        do {
          if ((uVar33 == (uint)uVar35) &&
             (local_b8 == *(long *)(*(long *)((long)__s_00 + lVar31 * 8) + 0x10))) {
            lVar6 = *(long *)((long)__s_00 + (ulong)uVar25 * 8);
            *(undefined8 *)(lVar6 + 0x18) = *in_RCX;
            *(undefined4 *)(lVar6 + 0x20) = *(undefined4 *)(in_RCX + 1);
            *(undefined1 *)(lVar6 + 0x24) = *(undefined1 *)((long)in_RCX + 0xc);
            if (*(long *)(lVar6 + 0x30) != in_RCX[3]) {
              CowData<Area3D::ShapePair>::_ref
                        ((CowData<Area3D::ShapePair> *)(lVar6 + 0x30),(CowData *)(in_RCX + 3));
            }
            pauStack_90 = *(undefined1 (**) [16])(*(long *)(param_2 + 8) + (ulong)uVar25 * 8);
            goto LAB_00115afe;
          }
          uVar34 = uVar34 + 1;
          auVar9._8_8_ = 0;
          auVar9._0_8_ = (ulong)(uVar25 + 1) * lVar6;
          auVar17._8_8_ = 0;
          auVar17._0_8_ = uVar36;
          lVar31 = SUB168(auVar9 * auVar17,8);
          uVar33 = *(uint *)(*(long *)(param_2 + 0x10) + lVar31 * 4);
          uVar25 = SUB164(auVar9 * auVar17,8);
        } while ((uVar33 != 0) &&
                (auVar10._8_8_ = 0, auVar10._0_8_ = (ulong)uVar33 * lVar6, auVar18._8_8_ = 0,
                auVar18._0_8_ = uVar36, auVar11._8_8_ = 0,
                auVar11._0_8_ =
                     (ulong)((*(uint *)(hash_table_size_primes +
                                       (ulong)*(uint *)(param_2 + 0x28) * 4) + uVar25) -
                            SUB164(auVar10 * auVar18,8)) * lVar6, auVar19._8_8_ = 0,
                auVar19._0_8_ = uVar36, uVar34 <= SUB164(auVar11 * auVar19,8)));
      }
    }
  }
  if ((float)uVar4 * __LC188 < (float)(iVar29 + 1)) {
    if (*(int *)(param_2 + 0x28) == 0x1c) {
      pauStack_90 = (undefined1 (*) [16])0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_00115afe;
    }
    _resize_and_rehash((HashMap<ObjectID,Area3D::BodyState,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,Area3D::BodyState>>>
                        *)param_2,*(int *)(param_2 + 0x28) + 1);
  }
  uVar5 = *(undefined4 *)(in_RCX + 1);
  local_48 = 0;
  uVar3 = *(undefined1 *)((long)in_RCX + 0xc);
  lVar6 = *plVar30;
  uVar28 = *in_RCX;
  if (in_RCX[3] == 0) {
    pauStack_90 = (undefined1 (*) [16])operator_new(0x38,"");
    *pauStack_90 = (undefined1  [16])0x0;
    *(undefined4 *)pauStack_90[2] = uVar5;
    *(long *)pauStack_90[1] = lVar6;
    pauStack_90[2][4] = uVar3;
    *(undefined8 *)(pauStack_90[1] + 8) = uVar28;
    *(undefined8 *)pauStack_90[3] = 0;
LAB_001159aa:
    puVar27 = *(undefined8 **)(param_2 + 0x20);
    if (puVar27 != (undefined8 *)0x0) goto LAB_001159b7;
LAB_00115b70:
    *(undefined1 (**) [16])(param_2 + 0x18) = pauStack_90;
    *(undefined1 (**) [16])(param_2 + 0x20) = pauStack_90;
  }
  else {
    CowData<Area3D::ShapePair>::_ref
              ((CowData<Area3D::ShapePair> *)&local_48,(CowData *)(in_RCX + 3));
    lVar31 = local_48;
    pauStack_90 = (undefined1 (*) [16])operator_new(0x38,"");
    *(undefined8 *)*pauStack_90 = 0;
    *(undefined8 *)(*pauStack_90 + 8) = 0;
    *(undefined4 *)pauStack_90[2] = uVar5;
    *(long *)pauStack_90[1] = lVar6;
    pauStack_90[2][4] = uVar3;
    *(undefined8 *)(pauStack_90[1] + 8) = uVar28;
    *(undefined8 *)pauStack_90[3] = 0;
    if (lVar31 == 0) goto LAB_001159aa;
    CowData<Area3D::ShapePair>::_ref
              ((CowData<Area3D::ShapePair> *)(pauStack_90 + 3),(CowData *)&local_48);
    LOCK();
    plVar1 = (long *)(lVar31 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 != 0) goto LAB_001159aa;
    Memory::free_static((void *)(local_48 + -0x10),false);
    puVar27 = *(undefined8 **)(param_2 + 0x20);
    if (puVar27 == (undefined8 *)0x0) goto LAB_00115b70;
LAB_001159b7:
    if (in_R8B == '\0') {
      *puVar27 = pauStack_90;
      *(undefined8 **)(*pauStack_90 + 8) = puVar27;
      *(undefined1 (**) [16])(param_2 + 0x20) = pauStack_90;
    }
    else {
      lVar6 = *(long *)(param_2 + 0x18);
      *(undefined1 (**) [16])(lVar6 + 8) = pauStack_90;
      *(long *)*pauStack_90 = lVar6;
      *(undefined1 (**) [16])(param_2 + 0x18) = pauStack_90;
    }
  }
  lVar6 = *(long *)(param_2 + 0x10);
  uVar26 = *plVar30 * 0x3ffff - 1;
  uVar26 = (uVar26 ^ uVar26 >> 0x1f) * 0x15;
  uVar26 = (uVar26 ^ uVar26 >> 0xb) * 0x41;
  uVar26 = uVar26 >> 0x16 ^ uVar26;
  uVar36 = uVar26 & 0xffffffff;
  if ((int)uVar26 == 0) {
    uVar36 = 1;
  }
  uVar34 = 0;
  lVar31 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
  uVar25 = (uint)uVar36;
  uVar4 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
  uVar26 = CONCAT44(0,uVar4);
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar36 * lVar31;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = uVar26;
  lVar32 = SUB168(auVar12 * auVar20,8);
  lVar7 = *(long *)(param_2 + 8);
  puVar2 = (uint *)(lVar6 + lVar32 * 4);
  iVar29 = SUB164(auVar12 * auVar20,8);
  uVar33 = *puVar2;
  pauVar24 = pauStack_90;
  while (uVar33 != 0) {
    auVar13._8_8_ = 0;
    auVar13._0_8_ = (ulong)uVar33 * lVar31;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = uVar26;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = (ulong)((iVar29 + uVar4) - SUB164(auVar13 * auVar21,8)) * lVar31;
    auVar22._8_8_ = 0;
    auVar22._0_8_ = uVar26;
    uVar25 = SUB164(auVar14 * auVar22,8);
    pauVar37 = pauVar24;
    if (uVar25 < uVar34) {
      *puVar2 = (uint)uVar36;
      uVar36 = (ulong)uVar33;
      puVar27 = (undefined8 *)(lVar7 + lVar32 * 8);
      pauVar37 = (undefined1 (*) [16])*puVar27;
      *puVar27 = pauVar24;
      uVar34 = uVar25;
    }
    uVar25 = (uint)uVar36;
    uVar34 = uVar34 + 1;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = (ulong)(iVar29 + 1) * lVar31;
    auVar23._8_8_ = 0;
    auVar23._0_8_ = uVar26;
    lVar32 = SUB168(auVar15 * auVar23,8);
    puVar2 = (uint *)(lVar6 + lVar32 * 4);
    iVar29 = SUB164(auVar15 * auVar23,8);
    pauVar24 = pauVar37;
    uVar33 = *puVar2;
  }
  *(undefined1 (**) [16])(lVar7 + lVar32 * 8) = pauVar24;
  *puVar2 = uVar25;
  *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + 1;
LAB_00115afe:
  *(undefined1 (**) [16])param_1 = pauStack_90;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HashMap<ObjectID, Area3D::AreaState, HashMapHasherDefault, HashMapComparatorDefault<ObjectID>,
   DefaultTypedAllocator<HashMapElement<ObjectID, Area3D::AreaState> >
   >::_resize_and_rehash(unsigned int) */

void __thiscall
HashMap<ObjectID,Area3D::AreaState,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,Area3D::AreaState>>>
::_resize_and_rehash
          (HashMap<ObjectID,Area3D::AreaState,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,Area3D::AreaState>>>
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<ObjectID, Area3D::AreaState, HashMapHasherDefault, HashMapComparatorDefault<ObjectID>,
   DefaultTypedAllocator<HashMapElement<ObjectID, Area3D::AreaState> > >::insert(ObjectID const&,
   Area3D::AreaState const&, bool) */

ObjectID *
HashMap<ObjectID,Area3D::AreaState,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,Area3D::AreaState>>>
::insert(ObjectID *param_1,AreaState *param_2,bool param_3)

{
  long *plVar1;
  uint *puVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  void *__s;
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
  undefined1 (*pauVar24) [16];
  uint uVar25;
  ulong uVar26;
  undefined8 *puVar27;
  undefined8 uVar28;
  void *__s_00;
  undefined8 *in_RCX;
  int iVar29;
  undefined7 in_register_00000011;
  long *plVar30;
  long lVar31;
  long lVar32;
  uint uVar33;
  char in_R8B;
  uint uVar34;
  ulong uVar35;
  ulong uVar36;
  undefined1 (*pauVar37) [16];
  long in_FS_OFFSET;
  long local_b8;
  undefined1 (*pauStack_90) [16];
  long local_48;
  long local_40;
  
  plVar30 = (long *)CONCAT71(in_register_00000011,param_3);
  __s_00 = *(void **)(param_2 + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar4 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
  if (__s_00 == (void *)0x0) {
    uVar35 = (ulong)uVar4;
    uVar26 = uVar35 * 4;
    uVar36 = uVar35 * 8;
    uVar28 = Memory::alloc_static(uVar26,false);
    *(undefined8 *)(param_2 + 0x10) = uVar28;
    __s_00 = (void *)Memory::alloc_static(uVar36,false);
    *(void **)(param_2 + 8) = __s_00;
    if (uVar4 != 0) {
      __s = *(void **)(param_2 + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar36)) && (__s_00 < (void *)((long)__s + uVar26))) {
        uVar26 = 0;
        do {
          *(undefined4 *)((long)__s + uVar26 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar26 * 8) = 0;
          uVar26 = uVar26 + 1;
        } while (uVar35 != uVar26);
        goto LAB_00115f7a;
      }
      memset(__s,0,uVar26);
      memset(__s_00,0,uVar36);
      iVar29 = *(int *)(param_2 + 0x2c);
      local_b8 = *plVar30;
      goto LAB_00115f8a;
    }
    iVar29 = *(int *)(param_2 + 0x2c);
    local_b8 = *plVar30;
    if (__s_00 != (void *)0x0) goto LAB_00115f8a;
  }
  else {
LAB_00115f7a:
    iVar29 = *(int *)(param_2 + 0x2c);
    local_b8 = *plVar30;
LAB_00115f8a:
    if (iVar29 != 0) {
      uVar36 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4));
      lVar6 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
      uVar26 = local_b8 * 0x3ffff - 1;
      uVar26 = (uVar26 ^ uVar26 >> 0x1f) * 0x15;
      uVar26 = (uVar26 ^ uVar26 >> 0xb) * 0x41;
      uVar26 = uVar26 >> 0x16 ^ uVar26;
      uVar35 = uVar26 & 0xffffffff;
      if ((int)uVar26 == 0) {
        uVar35 = 1;
      }
      auVar8._8_8_ = 0;
      auVar8._0_8_ = uVar35 * lVar6;
      auVar16._8_8_ = 0;
      auVar16._0_8_ = uVar36;
      lVar31 = SUB168(auVar8 * auVar16,8);
      uVar33 = *(uint *)(*(long *)(param_2 + 0x10) + lVar31 * 4);
      uVar25 = SUB164(auVar8 * auVar16,8);
      if (uVar33 != 0) {
        uVar34 = 0;
        do {
          if ((uVar33 == (uint)uVar35) &&
             (local_b8 == *(long *)(*(long *)((long)__s_00 + lVar31 * 8) + 0x10))) {
            lVar6 = *(long *)((long)__s_00 + (ulong)uVar25 * 8);
            *(undefined8 *)(lVar6 + 0x18) = *in_RCX;
            *(undefined4 *)(lVar6 + 0x20) = *(undefined4 *)(in_RCX + 1);
            *(undefined1 *)(lVar6 + 0x24) = *(undefined1 *)((long)in_RCX + 0xc);
            if (*(long *)(lVar6 + 0x30) != in_RCX[3]) {
              CowData<Area3D::AreaShapePair>::_ref
                        ((CowData<Area3D::AreaShapePair> *)(lVar6 + 0x30),(CowData *)(in_RCX + 3));
            }
            pauStack_90 = *(undefined1 (**) [16])(*(long *)(param_2 + 8) + (ulong)uVar25 * 8);
            goto LAB_0011634e;
          }
          uVar34 = uVar34 + 1;
          auVar9._8_8_ = 0;
          auVar9._0_8_ = (ulong)(uVar25 + 1) * lVar6;
          auVar17._8_8_ = 0;
          auVar17._0_8_ = uVar36;
          lVar31 = SUB168(auVar9 * auVar17,8);
          uVar33 = *(uint *)(*(long *)(param_2 + 0x10) + lVar31 * 4);
          uVar25 = SUB164(auVar9 * auVar17,8);
        } while ((uVar33 != 0) &&
                (auVar10._8_8_ = 0, auVar10._0_8_ = (ulong)uVar33 * lVar6, auVar18._8_8_ = 0,
                auVar18._0_8_ = uVar36, auVar11._8_8_ = 0,
                auVar11._0_8_ =
                     (ulong)((*(uint *)(hash_table_size_primes +
                                       (ulong)*(uint *)(param_2 + 0x28) * 4) + uVar25) -
                            SUB164(auVar10 * auVar18,8)) * lVar6, auVar19._8_8_ = 0,
                auVar19._0_8_ = uVar36, uVar34 <= SUB164(auVar11 * auVar19,8)));
      }
    }
  }
  if ((float)uVar4 * __LC188 < (float)(iVar29 + 1)) {
    if (*(int *)(param_2 + 0x28) == 0x1c) {
      pauStack_90 = (undefined1 (*) [16])0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_0011634e;
    }
    _resize_and_rehash((HashMap<ObjectID,Area3D::AreaState,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,Area3D::AreaState>>>
                        *)param_2,*(int *)(param_2 + 0x28) + 1);
  }
  uVar5 = *(undefined4 *)(in_RCX + 1);
  local_48 = 0;
  uVar3 = *(undefined1 *)((long)in_RCX + 0xc);
  lVar6 = *plVar30;
  uVar28 = *in_RCX;
  if (in_RCX[3] == 0) {
    pauStack_90 = (undefined1 (*) [16])operator_new(0x38,"");
    *pauStack_90 = (undefined1  [16])0x0;
    *(undefined4 *)pauStack_90[2] = uVar5;
    *(long *)pauStack_90[1] = lVar6;
    pauStack_90[2][4] = uVar3;
    *(undefined8 *)(pauStack_90[1] + 8) = uVar28;
    *(undefined8 *)pauStack_90[3] = 0;
LAB_001161fa:
    puVar27 = *(undefined8 **)(param_2 + 0x20);
    if (puVar27 != (undefined8 *)0x0) goto LAB_00116207;
LAB_001163c0:
    *(undefined1 (**) [16])(param_2 + 0x18) = pauStack_90;
    *(undefined1 (**) [16])(param_2 + 0x20) = pauStack_90;
  }
  else {
    CowData<Area3D::AreaShapePair>::_ref
              ((CowData<Area3D::AreaShapePair> *)&local_48,(CowData *)(in_RCX + 3));
    lVar31 = local_48;
    pauStack_90 = (undefined1 (*) [16])operator_new(0x38,"");
    *(undefined8 *)*pauStack_90 = 0;
    *(undefined8 *)(*pauStack_90 + 8) = 0;
    *(undefined4 *)pauStack_90[2] = uVar5;
    *(long *)pauStack_90[1] = lVar6;
    pauStack_90[2][4] = uVar3;
    *(undefined8 *)(pauStack_90[1] + 8) = uVar28;
    *(undefined8 *)pauStack_90[3] = 0;
    if (lVar31 == 0) goto LAB_001161fa;
    CowData<Area3D::AreaShapePair>::_ref
              ((CowData<Area3D::AreaShapePair> *)(pauStack_90 + 3),(CowData *)&local_48);
    LOCK();
    plVar1 = (long *)(lVar31 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 != 0) goto LAB_001161fa;
    Memory::free_static((void *)(local_48 + -0x10),false);
    puVar27 = *(undefined8 **)(param_2 + 0x20);
    if (puVar27 == (undefined8 *)0x0) goto LAB_001163c0;
LAB_00116207:
    if (in_R8B == '\0') {
      *puVar27 = pauStack_90;
      *(undefined8 **)(*pauStack_90 + 8) = puVar27;
      *(undefined1 (**) [16])(param_2 + 0x20) = pauStack_90;
    }
    else {
      lVar6 = *(long *)(param_2 + 0x18);
      *(undefined1 (**) [16])(lVar6 + 8) = pauStack_90;
      *(long *)*pauStack_90 = lVar6;
      *(undefined1 (**) [16])(param_2 + 0x18) = pauStack_90;
    }
  }
  lVar6 = *(long *)(param_2 + 0x10);
  uVar26 = *plVar30 * 0x3ffff - 1;
  uVar26 = (uVar26 ^ uVar26 >> 0x1f) * 0x15;
  uVar26 = (uVar26 ^ uVar26 >> 0xb) * 0x41;
  uVar26 = uVar26 >> 0x16 ^ uVar26;
  uVar36 = uVar26 & 0xffffffff;
  if ((int)uVar26 == 0) {
    uVar36 = 1;
  }
  uVar34 = 0;
  lVar31 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
  uVar25 = (uint)uVar36;
  uVar4 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
  uVar26 = CONCAT44(0,uVar4);
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar36 * lVar31;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = uVar26;
  lVar32 = SUB168(auVar12 * auVar20,8);
  lVar7 = *(long *)(param_2 + 8);
  puVar2 = (uint *)(lVar6 + lVar32 * 4);
  iVar29 = SUB164(auVar12 * auVar20,8);
  uVar33 = *puVar2;
  pauVar24 = pauStack_90;
  while (uVar33 != 0) {
    auVar13._8_8_ = 0;
    auVar13._0_8_ = (ulong)uVar33 * lVar31;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = uVar26;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = (ulong)((iVar29 + uVar4) - SUB164(auVar13 * auVar21,8)) * lVar31;
    auVar22._8_8_ = 0;
    auVar22._0_8_ = uVar26;
    uVar25 = SUB164(auVar14 * auVar22,8);
    pauVar37 = pauVar24;
    if (uVar25 < uVar34) {
      *puVar2 = (uint)uVar36;
      uVar36 = (ulong)uVar33;
      puVar27 = (undefined8 *)(lVar7 + lVar32 * 8);
      pauVar37 = (undefined1 (*) [16])*puVar27;
      *puVar27 = pauVar24;
      uVar34 = uVar25;
    }
    uVar25 = (uint)uVar36;
    uVar34 = uVar34 + 1;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = (ulong)(iVar29 + 1) * lVar31;
    auVar23._8_8_ = 0;
    auVar23._0_8_ = uVar26;
    lVar32 = SUB168(auVar15 * auVar23,8);
    puVar2 = (uint *)(lVar6 + lVar32 * 4);
    iVar29 = SUB164(auVar15 * auVar23,8);
    pauVar24 = pauVar37;
    uVar33 = *puVar2;
  }
  *(undefined1 (**) [16])(lVar7 + lVar32 * 8) = pauVar24;
  *puVar2 = uVar25;
  *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + 1;
LAB_0011634e:
  *(undefined1 (**) [16])param_1 = pauStack_90;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<Area3D::ShapePair>::_realloc(long) */

undefined8 __thiscall
CowData<Area3D::ShapePair>::_realloc(CowData<Area3D::ShapePair> *this,long param_1)

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
/* Error CowData<Area3D::ShapePair>::resize<false>(long) */

undefined8 __thiscall
CowData<Area3D::ShapePair>::resize<false>(CowData<Area3D::ShapePair> *this,long param_1)

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
  undefined8 *puVar11;
  
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
    lVar10 = 0;
    lVar3 = 0;
  }
  else {
    lVar10 = *(long *)(lVar3 + -8);
    if (param_1 == lVar10) {
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
    lVar3 = lVar10 * 8;
    if (lVar3 != 0) {
      uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      lVar3 = (uVar4 | uVar4 >> 0x20) + 1;
    }
  }
  if (param_1 * 8 == 0) {
LAB_001168d0:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar4 = param_1 * 8 - 1;
  uVar4 = uVar4 >> 1 | uVar4;
  uVar4 = uVar4 | uVar4 >> 2;
  uVar4 = uVar4 | uVar4 >> 4;
  uVar4 = uVar4 | uVar4 >> 8;
  uVar4 = uVar4 | uVar4 >> 0x10;
  uVar4 = uVar4 | uVar4 >> 0x20;
  lVar9 = uVar4 + 1;
  if (lVar9 == 0) goto LAB_001168d0;
  if (param_1 <= lVar10) {
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
LAB_0011683c:
    puVar8 = *(undefined8 **)this;
    if (puVar8 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar3 = puVar8[-1];
    if (param_1 <= lVar3) goto LAB_001167d0;
  }
  else {
    if (lVar10 != 0) {
      uVar7 = _realloc(this,lVar9);
      if ((int)uVar7 != 0) {
        return uVar7;
      }
      goto LAB_0011683c;
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
  puVar11 = puVar8 + param_1;
  puVar5 = puVar8 + lVar3;
  puVar6 = puVar5;
  if (((int)puVar11 - (int)puVar5 & 8U) != 0) {
    *puVar5 = 0;
    puVar6 = puVar5 + 1;
    if (puVar5 + 1 == puVar11) goto LAB_001167d0;
  }
  do {
    *puVar6 = 0;
    puVar5 = puVar6 + 2;
    puVar6[1] = 0;
    puVar6 = puVar5;
  } while (puVar5 != puVar11);
LAB_001167d0:
  puVar8[-1] = param_1;
  return 0;
}



/* VSet<Area3D::ShapePair>::insert(Area3D::ShapePair const&) */

void __thiscall VSet<Area3D::ShapePair>::insert(VSet<Area3D::ShapePair> *this,ShapePair *param_1)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  int *piVar10;
  int *piVar11;
  long lVar12;
  int iVar13;
  int iVar14;
  undefined8 local_30;
  
  piVar2 = *(int **)(this + 8);
  if (piVar2 == (int *)0x0) {
    local_30 = *(undefined8 *)param_1;
    iVar6 = CowData<Area3D::ShapePair>::resize<false>((CowData<Area3D::ShapePair> *)(this + 8),1);
    if (iVar6 != 0) goto LAB_00116b71;
    lVar7 = 0;
    CowData<Area3D::ShapePair>::_copy_on_write((CowData<Area3D::ShapePair> *)(this + 8));
    lVar9 = *(long *)(this + 8);
    goto LAB_00116ad7;
  }
  lVar9 = *(long *)(piVar2 + -2);
  iVar6 = (int)lVar9 + -1;
  if (lVar9 < 1) {
    _err_print_index_error
              ("get","./core/templates/cowdata.h",0xdb,0,lVar9,"p_index","size()","",false,true);
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  if (iVar6 < 0) {
    _err_print_error("_find","./core/templates/vset.h",0x36,"low > high, this may be a bug",0,0);
    local_30 = *(undefined8 *)param_1;
    iVar5 = 0;
    piVar11 = *(int **)(this + 8);
    bVar3 = *piVar2 < (int)local_30;
    piVar10 = piVar2;
    if ((int)local_30 == *piVar2) goto LAB_00116af0;
  }
  else {
    local_30 = *(undefined8 *)param_1;
    iVar8 = 0;
    iVar13 = (int)local_30;
    iVar14 = (int)((ulong)local_30 >> 0x20);
    do {
      while( true ) {
        iVar5 = (iVar8 + iVar6) / 2;
        piVar10 = piVar2 + (long)iVar5 * 2;
        iVar1 = *piVar10;
        if (iVar1 == iVar13) break;
        if (iVar13 < iVar1) goto LAB_00116a22;
LAB_00116a52:
        iVar8 = iVar5 + 1;
        if (iVar6 < iVar8) goto LAB_00116a59;
      }
      if (piVar10[1] <= iVar14) {
        if (iVar14 <= piVar10[1]) {
          return;
        }
        goto LAB_00116a52;
      }
LAB_00116a22:
      iVar6 = iVar5 + -1;
    } while (iVar8 <= iVar6);
LAB_00116a59:
    bVar3 = iVar13 != iVar1 && iVar1 <= iVar13;
    piVar11 = piVar2;
    if (iVar13 == iVar1) {
LAB_00116af0:
      bVar3 = piVar10[1] < local_30._4_4_;
    }
  }
  iVar6 = (iVar5 + 1) - (uint)!bVar3;
  lVar7 = (long)iVar6;
  if (piVar11 == (int *)0x0) {
    lVar9 = 1;
    lVar12 = 0;
  }
  else {
    lVar12 = *(long *)(piVar11 + -2);
    lVar9 = lVar12 + 1;
  }
  if ((lVar9 <= lVar7) || (iVar6 >> 7 != 0)) {
    _err_print_index_error
              ("insert","./core/templates/cowdata.h",0xf0,lVar7,lVar9,"p_pos","new_size","",false,
               false);
    return;
  }
  iVar6 = CowData<Area3D::ShapePair>::resize<false>((CowData<Area3D::ShapePair> *)(this + 8),lVar9);
  if (iVar6 != 0) {
LAB_00116b71:
    _err_print_error("insert","./core/templates/cowdata.h",0xf2,
                     "Condition \"err\" is true. Returning: err",0,0);
    return;
  }
  CowData<Area3D::ShapePair>::_copy_on_write((CowData<Area3D::ShapePair> *)(this + 8));
  lVar9 = *(long *)(this + 8);
  if (lVar7 < lVar12) {
    memmove((void *)(lVar9 + 8 + lVar7 * 8),(void *)(lVar9 + lVar7 * 8),(lVar12 - lVar7) * 8);
  }
LAB_00116ad7:
  *(undefined8 *)(lVar9 + lVar7 * 8) = local_30;
  return;
}



/* CowData<Area3D::AreaShapePair>::_realloc(long) */

undefined8 __thiscall
CowData<Area3D::AreaShapePair>::_realloc(CowData<Area3D::AreaShapePair> *this,long param_1)

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
/* Error CowData<Area3D::AreaShapePair>::resize<false>(long) */

undefined8 __thiscall
CowData<Area3D::AreaShapePair>::resize<false>(CowData<Area3D::AreaShapePair> *this,long param_1)

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
  undefined8 *puVar11;
  
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
    lVar10 = 0;
    lVar3 = 0;
  }
  else {
    lVar10 = *(long *)(lVar3 + -8);
    if (param_1 == lVar10) {
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
    lVar3 = lVar10 * 8;
    if (lVar3 != 0) {
      uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      lVar3 = (uVar4 | uVar4 >> 0x20) + 1;
    }
  }
  if (param_1 * 8 == 0) {
LAB_00116f30:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar4 = param_1 * 8 - 1;
  uVar4 = uVar4 >> 1 | uVar4;
  uVar4 = uVar4 | uVar4 >> 2;
  uVar4 = uVar4 | uVar4 >> 4;
  uVar4 = uVar4 | uVar4 >> 8;
  uVar4 = uVar4 | uVar4 >> 0x10;
  uVar4 = uVar4 | uVar4 >> 0x20;
  lVar9 = uVar4 + 1;
  if (lVar9 == 0) goto LAB_00116f30;
  if (param_1 <= lVar10) {
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
LAB_00116e9c:
    puVar8 = *(undefined8 **)this;
    if (puVar8 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar3 = puVar8[-1];
    if (param_1 <= lVar3) goto LAB_00116e30;
  }
  else {
    if (lVar10 != 0) {
      uVar7 = _realloc(this,lVar9);
      if ((int)uVar7 != 0) {
        return uVar7;
      }
      goto LAB_00116e9c;
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
  puVar11 = puVar8 + param_1;
  puVar5 = puVar8 + lVar3;
  puVar6 = puVar5;
  if (((int)puVar11 - (int)puVar5 & 8U) != 0) {
    *puVar5 = 0;
    puVar6 = puVar5 + 1;
    if (puVar5 + 1 == puVar11) goto LAB_00116e30;
  }
  do {
    *puVar6 = 0;
    puVar5 = puVar6 + 2;
    puVar6[1] = 0;
    puVar6 = puVar5;
  } while (puVar5 != puVar11);
LAB_00116e30:
  puVar8[-1] = param_1;
  return 0;
}



/* VSet<Area3D::AreaShapePair>::insert(Area3D::AreaShapePair const&) */

void __thiscall
VSet<Area3D::AreaShapePair>::insert(VSet<Area3D::AreaShapePair> *this,AreaShapePair *param_1)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  int *piVar10;
  int *piVar11;
  long lVar12;
  int iVar13;
  int iVar14;
  undefined8 local_30;
  
  piVar2 = *(int **)(this + 8);
  if (piVar2 == (int *)0x0) {
    local_30 = *(undefined8 *)param_1;
    iVar6 = CowData<Area3D::AreaShapePair>::resize<false>
                      ((CowData<Area3D::AreaShapePair> *)(this + 8),1);
    if (iVar6 != 0) goto LAB_00117151;
    lVar7 = 0;
    CowData<Area3D::AreaShapePair>::_copy_on_write((CowData<Area3D::AreaShapePair> *)(this + 8));
    lVar9 = *(long *)(this + 8);
    goto LAB_001170b7;
  }
  lVar9 = *(long *)(piVar2 + -2);
  iVar6 = (int)lVar9 + -1;
  if (lVar9 < 1) {
    _err_print_index_error
              ("get","./core/templates/cowdata.h",0xdb,0,lVar9,"p_index","size()","",false,true);
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  if (iVar6 < 0) {
    _err_print_error("_find","./core/templates/vset.h",0x36,"low > high, this may be a bug",0,0);
    local_30 = *(undefined8 *)param_1;
    iVar5 = 0;
    piVar11 = *(int **)(this + 8);
    bVar3 = *piVar2 < (int)local_30;
    piVar10 = piVar2;
    if ((int)local_30 == *piVar2) goto LAB_001170d0;
  }
  else {
    local_30 = *(undefined8 *)param_1;
    iVar8 = 0;
    iVar13 = (int)local_30;
    iVar14 = (int)((ulong)local_30 >> 0x20);
    do {
      while( true ) {
        iVar5 = (iVar8 + iVar6) / 2;
        piVar10 = piVar2 + (long)iVar5 * 2;
        iVar1 = *piVar10;
        if (iVar1 == iVar13) break;
        if (iVar13 < iVar1) goto LAB_00117002;
LAB_00117032:
        iVar8 = iVar5 + 1;
        if (iVar6 < iVar8) goto LAB_00117039;
      }
      if (piVar10[1] <= iVar14) {
        if (iVar14 <= piVar10[1]) {
          return;
        }
        goto LAB_00117032;
      }
LAB_00117002:
      iVar6 = iVar5 + -1;
    } while (iVar8 <= iVar6);
LAB_00117039:
    bVar3 = iVar13 != iVar1 && iVar1 <= iVar13;
    piVar11 = piVar2;
    if (iVar13 == iVar1) {
LAB_001170d0:
      bVar3 = piVar10[1] < local_30._4_4_;
    }
  }
  iVar6 = (iVar5 + 1) - (uint)!bVar3;
  lVar7 = (long)iVar6;
  if (piVar11 == (int *)0x0) {
    lVar9 = 1;
    lVar12 = 0;
  }
  else {
    lVar12 = *(long *)(piVar11 + -2);
    lVar9 = lVar12 + 1;
  }
  if ((lVar9 <= lVar7) || (iVar6 >> 7 != 0)) {
    _err_print_index_error
              ("insert","./core/templates/cowdata.h",0xf0,lVar7,lVar9,"p_pos","new_size","",false,
               false);
    return;
  }
  iVar6 = CowData<Area3D::AreaShapePair>::resize<false>
                    ((CowData<Area3D::AreaShapePair> *)(this + 8),lVar9);
  if (iVar6 != 0) {
LAB_00117151:
    _err_print_error("insert","./core/templates/cowdata.h",0xf2,
                     "Condition \"err\" is true. Returning: err",0,0);
    return;
  }
  CowData<Area3D::AreaShapePair>::_copy_on_write((CowData<Area3D::AreaShapePair> *)(this + 8));
  lVar9 = *(long *)(this + 8);
  if (lVar7 < lVar12) {
    memmove((void *)(lVar9 + 8 + lVar7 * 8),(void *)(lVar9 + lVar7 * 8),(lVar12 - lVar7) * 8);
  }
LAB_001170b7:
  *(undefined8 *)(lVar9 + lVar7 * 8) = local_30;
  return;
}



/* WARNING: Removing unreachable block (ram,0x001173b8) */
/* WARNING: Removing unreachable block (ram,0x0011754d) */
/* WARNING: Removing unreachable block (ram,0x00117559) */
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



/* MethodBindTRC<StringName>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<StringName>::call
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
  bool bVar5;
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
      goto LAB_00117770;
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
      (*(code *)pVVar2)((StringName *)&local_58);
      Variant::Variant((Variant *)local_48,(StringName *)&local_58);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      bVar5 = StringName::configured != '\0';
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
      if ((bVar5) && (local_58 != (char *)0x0)) {
        StringName::unref();
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
LAB_00117770:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<StringName>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<StringName>::validated_call
          (MethodBindTRC<StringName> *this,Object *param_1,Variant **param_2,Variant *param_3)

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
      local_48 = (Variant **)0x1175a8;
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
      goto LAB_00117a3a;
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
  (*pcVar1)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  StringName::operator=((StringName *)(param_3 + 8),(StringName *)&local_48);
  if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
    StringName::unref();
  }
LAB_00117a3a:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<StringName>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<StringName>::ptrcall
          (MethodBindTRC<StringName> *this,Object *param_1,void **param_2,void *param_3)

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
      local_48 = (void **)0x1175a8;
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
      goto LAB_00117c1b;
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
  (*pcVar1)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  StringName::operator=((StringName *)param_3,(StringName *)&local_48);
  if ((StringName::configured != '\0') && (local_48 != (void **)0x0)) {
    StringName::unref();
  }
LAB_00117c1b:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<StringName const&>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<StringName_const&>::validated_call
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
      goto LAB_00117f61;
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
                    /* WARNING: Could not recover jumptable at 0x00117ded. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*(long *)param_3 + 8);
    return;
  }
LAB_00117f61:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<StringName const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<StringName_const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_00118141;
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
                    /* WARNING: Could not recover jumptable at 0x00117fc9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3);
    return;
  }
LAB_00118141:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<TypedArray<Area3D>>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindTRC<TypedArray<Area3D>>::call
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
  long local_60;
  char *local_58;
  undefined8 local_50;
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
      _err_print_error(&_LC75,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      lVar2 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar5 = (long *)(local_60 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00118220;
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
      (*(code *)pVVar3)((Array *)&local_58);
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
LAB_00118220:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<TypedArray<Node3D>>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindTRC<TypedArray<Node3D>>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  char *pcVar2;
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
  undefined8 local_50;
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
      _err_print_error(&_LC75,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      pcVar2 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar5 = (long *)(local_58 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_001184f0;
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
      (*(code *)pVVar3)((Array *)&local_58);
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
LAB_001184f0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<NodePath const&>::call(Object*, Variant const**, int, Callable::CallError&) const
    */

Object * MethodBindTRC<NodePath_const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  char *pcVar2;
  NodePath *pNVar3;
  long *plVar5;
  undefined4 in_register_00000014;
  long *plVar6;
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
  Variant *pVVar4;
  
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
      _err_print_error(&_LC75,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      pcVar2 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar6 = (long *)(local_58 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_001187b0;
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
      pNVar3 = (NodePath *)(*(code *)pVVar4)();
      Variant::Variant((Variant *)local_48,pNVar3);
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
LAB_001187b0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<NodePath const&>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<NodePath_const&>::validated_call
          (MethodBindTRC<NodePath_const&> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  NodePath *pNVar1;
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
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00118b6f;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  pNVar1 = (NodePath *)(*pcVar2)(param_1 + *(long *)(this + 0x60));
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    NodePath::operator=((NodePath *)(param_3 + 8),pNVar1);
    return;
  }
LAB_00118b6f:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<NodePath const&>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<NodePath_const&>::ptrcall
          (MethodBindTRC<NodePath_const&> *this,Object *param_1,void **param_2,void *param_3)

{
  NodePath *pNVar1;
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
      vformat<StringName>((NodePath *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(NodePath *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00118be2;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  pNVar1 = (NodePath *)(*pcVar2)(param_1 + *(long *)(this + 0x60));
  NodePath::NodePath((NodePath *)&local_48,pNVar1);
  NodePath::operator=((NodePath *)param_3,(NodePath *)&local_48);
  NodePath::~NodePath((NodePath *)&local_48);
LAB_00118be2:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<NodePath const&>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<NodePath_const&>::validated_call
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
      goto LAB_00118f21;
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
                    /* WARNING: Could not recover jumptable at 0x00118dad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*(long *)param_3 + 8);
    return;
  }
LAB_00118f21:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<NodePath const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<NodePath_const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_00119101;
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
                    /* WARNING: Could not recover jumptable at 0x00118f89. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3);
    return;
  }
LAB_00119101:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<int>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<int>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  int iVar3;
  long *plVar5;
  undefined4 in_register_00000014;
  long *plVar6;
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
  Variant *pVVar4;
  
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
      _err_print_error(&_LC75,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
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
      goto LAB_001191d0;
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
      iVar3 = (*(code *)pVVar4)();
      Variant::Variant((Variant *)local_48,iVar3);
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
      goto LAB_00119414;
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
LAB_00119414:
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
      goto LAB_001195c3;
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
LAB_001195c3:
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
      goto LAB_00119901;
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
                    /* WARNING: Could not recover jumptable at 0x0011978c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8));
    return;
  }
LAB_00119901:
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
      goto LAB_00119ae1;
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
                    /* WARNING: Could not recover jumptable at 0x0011996b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_00119ae1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector3 const&>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<Vector3_const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  char *pcVar2;
  Vector3 *pVVar3;
  long *plVar5;
  undefined4 in_register_00000014;
  long *plVar6;
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
  Variant *pVVar4;
  
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
      _err_print_error(&_LC75,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      pcVar2 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar6 = (long *)(local_58 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00119bb0;
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
      pVVar3 = (Vector3 *)(*(code *)pVVar4)();
      Variant::Variant((Variant *)local_48,pVVar3);
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
LAB_00119bb0:
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
      goto LAB_00119dfd;
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
LAB_00119dfd:
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
      goto LAB_00119fbc;
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
LAB_00119fbc:
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
      goto LAB_0011a301;
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
                    /* WARNING: Could not recover jumptable at 0x0011a18d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*(long *)param_3 + 8);
    return;
  }
LAB_0011a301:
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
      goto LAB_0011a4e1;
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
                    /* WARNING: Could not recover jumptable at 0x0011a369. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3);
    return;
  }
LAB_0011a4e1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<float>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<float>::call
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
  float fVar6;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
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
      _err_print_error(&_LC75,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      lVar2 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar5 = (long *)(local_60 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0011a5b0;
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
      fVar6 = (float)(*(code *)pVVar3)();
      Variant::Variant((Variant *)local_48,fVar6);
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
LAB_0011a5b0:
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
      goto LAB_0011a7f8;
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
LAB_0011a7f8:
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
      goto LAB_0011a9b7;
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
LAB_0011a9b7:
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
      goto LAB_0011ad09;
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
                    /* WARNING: Could not recover jumptable at 0x0011ab92. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(auVar2._0_8_,(long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_0011ad09:
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
      goto LAB_0011aee9;
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
                    /* WARNING: Could not recover jumptable at 0x0011ad71. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(auVar2._0_8_,(long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_0011aee9:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<bool>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  char *pcVar2;
  bool bVar3;
  long *plVar5;
  undefined4 in_register_00000014;
  long *plVar6;
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
  Variant *pVVar4;
  
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
      _err_print_error(&_LC75,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      pcVar2 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar6 = (long *)(local_58 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0011afb0;
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
      bVar3 = (bool)(*(code *)pVVar4)();
      Variant::Variant((Variant *)local_48,bVar3);
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
LAB_0011afb0:
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
      goto LAB_0011b1f2;
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
LAB_0011b1f2:
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
      goto LAB_0011b3a1;
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
LAB_0011b3a1:
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
      goto LAB_0011b6e1;
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
                    /* WARNING: Could not recover jumptable at 0x0011b56d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined1 *)(*(long *)param_3 + 8));
    return;
  }
LAB_0011b6e1:
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
      goto LAB_0011b8c9;
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
                    /* WARNING: Could not recover jumptable at 0x0011b752. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3 != '\0');
    return;
  }
LAB_0011b8c9:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Area3D::SpaceOverride>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindTRC<Area3D::SpaceOverride>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  int iVar3;
  long *plVar5;
  undefined4 in_register_00000014;
  long *plVar6;
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
  Variant *pVVar4;
  
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
      _err_print_error(&_LC75,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
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
      goto LAB_0011b990;
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
      iVar3 = (*(code *)pVVar4)();
      Variant::Variant((Variant *)local_48,iVar3);
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
LAB_0011b990:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Area3D::SpaceOverride>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<Area3D::SpaceOverride>::validated_call
          (MethodBindTRC<Area3D::SpaceOverride> *this,Object *param_1,Variant **param_2,
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
      goto LAB_0011bbd4;
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
LAB_0011bbd4:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Area3D::SpaceOverride>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Area3D::SpaceOverride>::ptrcall
          (MethodBindTRC<Area3D::SpaceOverride> *this,Object *param_1,void **param_2,void *param_3)

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
      goto LAB_0011bd83;
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
LAB_0011bd83:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Area3D::SpaceOverride>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<Area3D::SpaceOverride>::validated_call
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
      goto LAB_0011c0c1;
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
                    /* WARNING: Could not recover jumptable at 0x0011bf4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8));
    return;
  }
LAB_0011c0c1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Area3D::SpaceOverride>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Area3D::SpaceOverride>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_0011c2a1;
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
                    /* WARNING: Could not recover jumptable at 0x0011c12b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_0011c2a1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool, Node*>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<bool,Node*>::validated_call
          (MethodBindTRC<bool,Node*> *this,Object *param_1,Variant **param_2,Variant *param_3)

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
      goto LAB_0011c2f9;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  VVar1 = (Variant)(*pcVar2)(param_1 + *(long *)(this + 0x60),*(undefined8 *)(*param_2 + 0x10));
  param_3[8] = VVar1;
LAB_0011c2f9:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool, Node*>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<bool,Node*>::ptrcall
          (MethodBindTRC<bool,Node*> *this,Object *param_1,void **param_2,void *param_3)

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
      goto LAB_0011c4dd;
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
  *(undefined1 *)param_3 = uVar1;
LAB_0011c4dd:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<TypedArray<Area3D>>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<TypedArray<Area3D>>::validated_call
          (MethodBindTRC<TypedArray<Area3D>> *this,Object *param_1,Variant **param_2,
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
      local_48 = (Variant **)0x1175a8;
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
      goto LAB_0011c6c9;
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
LAB_0011c6c9:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<TypedArray<Area3D>>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<TypedArray<Area3D>>::ptrcall
          (MethodBindTRC<TypedArray<Area3D>> *this,Object *param_1,void **param_2,void *param_3)

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
      local_48 = (void **)0x1175a8;
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
      goto LAB_0011c89a;
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
LAB_0011c89a:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
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
      local_48 = (Variant **)0x1175a8;
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
      goto LAB_0011ca69;
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
LAB_0011ca69:
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
      local_48 = (void **)0x1175a8;
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
      goto LAB_0011cc3a;
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
LAB_0011cc3a:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<StringName const&>::call(Object*, Variant const**, int, Callable::CallError&) const
    */

Object * MethodBindT<StringName_const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  long *plVar7;
  long lVar8;
  undefined4 in_register_00000014;
  long *plVar9;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar10;
  Variant *pVVar11;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  plVar9 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar9 != (long *)0x0) && (plVar9[1] != 0)) && (*(char *)(plVar9[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (plVar9[1] == 0) {
      plVar7 = (long *)plVar9[0x23];
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)(**(code **)(*plVar9 + 0x40))(plVar9);
      }
    }
    else {
      plVar7 = (long *)(plVar9[1] + 0x20);
    }
    if (local_48 == (char *)*plVar7) {
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
      goto LAB_0011cf50;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar11 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar10 = param_2[5];
    if (pVVar10 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_0011cfa0;
LAB_0011cf90:
      pVVar10 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar10 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0011cfa0:
        uVar6 = 4;
        goto LAB_0011cf45;
      }
      if (in_R8D == 1) goto LAB_0011cf90;
      lVar8 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar8) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar8,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar10 = pVVar10 + lVar8 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar11 & 1) != 0) {
      pVVar11 = *(Variant **)(pVVar11 + *(long *)((long)plVar9 + (long)pVVar1) + -1);
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar10,0x15);
    uVar4 = _LC236;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_StringName((Variant *)&local_48);
    (*(code *)pVVar11)((Variant *)((long)plVar9 + (long)pVVar1),(Variant *)&local_48);
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  else {
    uVar6 = 3;
LAB_0011cf45:
    *in_R9 = uVar6;
    in_R9[2] = 1;
  }
LAB_0011cf50:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool, Node*>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<bool,Node*>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  code *pcVar2;
  undefined8 uVar3;
  char cVar4;
  bool bVar5;
  undefined4 uVar6;
  Object *pOVar7;
  long *plVar8;
  Object *pOVar9;
  long lVar10;
  long lVar11;
  undefined4 in_register_00000014;
  long *plVar12;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar13;
  Variant *pVVar14;
  long in_FS_OFFSET;
  long local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  plVar12 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar12 != (long *)0x0) && (plVar12[1] != 0)) && (*(char *)(plVar12[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar12[1] == 0) {
      plVar8 = (long *)plVar12[0x23];
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)(**(code **)(*plVar12 + 0x40))(plVar12);
      }
    }
    else {
      plVar8 = (long *)(plVar12[1] + 0x20);
    }
    if (local_68 == (char *)*plVar8) {
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
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_0011d2f0;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar14 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (1 < in_R8D) {
    uVar6 = 3;
LAB_0011d2e5:
    *in_R9 = uVar6;
    in_R9[2] = 1;
    goto LAB_0011d2f0;
  }
  pVVar13 = param_2[5];
  if (pVVar13 == (Variant *)0x0) {
    if (in_R8D != 1) goto LAB_0011d340;
LAB_0011d330:
    pVVar13 = *(Variant **)param_4;
  }
  else {
    lVar10 = *(long *)(pVVar13 + -8);
    if ((int)lVar10 < (int)(in_R8D ^ 1)) {
LAB_0011d340:
      uVar6 = 4;
      goto LAB_0011d2e5;
    }
    if (in_R8D == 1) goto LAB_0011d330;
    lVar11 = (long)((int)lVar10 + -1);
    if (lVar10 <= lVar11) {
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,lVar11,lVar10,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    pVVar13 = pVVar13 + lVar11 * 0x18;
  }
  *in_R9 = 0;
  if (((ulong)pVVar14 & 1) != 0) {
    pVVar14 = *(Variant **)(pVVar14 + *(long *)((long)plVar12 + (long)pVVar1) + -1);
  }
  cVar4 = Variant::can_convert_strict(*(undefined4 *)pVVar13,0x18);
  if (cVar4 == '\0') {
LAB_0011d266:
    uVar3 = _LC238;
    *in_R9 = 2;
    *(undefined8 *)(in_R9 + 1) = uVar3;
  }
  else {
    pOVar7 = Variant::operator_cast_to_Object_(pVVar13);
    pOVar9 = Variant::operator_cast_to_Object_(pVVar13);
    if (((pOVar9 == (Object *)0x0) ||
        (lVar10 = __dynamic_cast(pOVar9,&Object::typeinfo,&Node::typeinfo,0), lVar10 == 0)) &&
       (pOVar7 != (Object *)0x0)) goto LAB_0011d266;
  }
  pOVar7 = Variant::operator_cast_to_Object_(pVVar13);
  if (pOVar7 != (Object *)0x0) {
    pOVar7 = (Object *)__dynamic_cast(pOVar7,&Object::typeinfo,&Node::typeinfo,0);
  }
  bVar5 = (bool)(*(code *)pVVar14)((Variant *)((long)plVar12 + (long)pVVar1),pOVar7);
  Variant::Variant((Variant *)local_58,bVar5);
  if (Variant::needs_deinit[*(int *)param_1] != '\0') {
    Variant::_clear_internal();
  }
  *(undefined4 *)param_1 = local_58[0];
  *(undefined8 *)(param_1 + 8) = local_50;
  *(undefined8 *)(param_1 + 0x10) = uStack_48;
LAB_0011d2f0:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindT<NodePath const&>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<NodePath_const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  long *plVar7;
  long lVar8;
  undefined4 in_register_00000014;
  long *plVar9;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar10;
  Variant *pVVar11;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  plVar9 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar9 != (long *)0x0) && (plVar9[1] != 0)) && (*(char *)(plVar9[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (plVar9[1] == 0) {
      plVar7 = (long *)plVar9[0x23];
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)(**(code **)(*plVar9 + 0x40))(plVar9);
      }
    }
    else {
      plVar7 = (long *)(plVar9[1] + 0x20);
    }
    if (local_48 == (char *)*plVar7) {
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
      goto LAB_0011d6a0;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar11 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar10 = param_2[5];
    if (pVVar10 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_0011d6f0;
LAB_0011d6e0:
      pVVar10 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar10 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0011d6f0:
        uVar6 = 4;
        goto LAB_0011d695;
      }
      if (in_R8D == 1) goto LAB_0011d6e0;
      lVar8 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar8) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar8,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar10 = pVVar10 + lVar8 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar11 & 1) != 0) {
      pVVar11 = *(Variant **)(pVVar11 + *(long *)((long)plVar9 + (long)pVVar1) + -1);
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar10,0x16);
    uVar4 = _LC239;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_NodePath((Variant *)&local_48);
    (*(code *)pVVar11)((Variant *)((long)plVar9 + (long)pVVar1),(Variant *)&local_48);
    NodePath::~NodePath((NodePath *)&local_48);
  }
  else {
    uVar6 = 3;
LAB_0011d695:
    *in_R9 = uVar6;
    in_R9[2] = 1;
  }
LAB_0011d6a0:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
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
      goto LAB_0011d9c8;
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
      if (in_R8D != 1) goto LAB_0011da20;
LAB_0011da10:
      pVVar11 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar11 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0011da20:
        uVar7 = 4;
        goto LAB_0011d9bd;
      }
      if (in_R8D == 1) goto LAB_0011da10;
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
    uVar5 = _LC240;
    if (cVar6 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar5;
    }
    local_60[0] = Variant::operator_cast_to_Vector3(pVVar11);
    (*(code *)pVVar12)((Variant *)((long)plVar10 + (long)pVVar1),local_60);
  }
  else {
    uVar7 = 3;
LAB_0011d9bd:
    *in_R9 = uVar7;
    in_R9[2] = 1;
  }
LAB_0011d9c8:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
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
    goto LAB_0011dcdd;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_0011dd40;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_0011dd40:
      uVar6 = 4;
LAB_0011dcdd:
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
      goto LAB_0011dc5b;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0011dc5b:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_int **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
  uVar4 = _LC76;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_int(this);
                    /* WARNING: Could not recover jumptable at 0x0011dcb6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)((int)(param_1 + (long)param_3));
  return;
}



/* MethodBindT<int>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<int>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long lVar1;
  char *pcVar2;
  long *plVar3;
  undefined4 in_register_00000014;
  __UnexistingClass *p_Var4;
  CallError *in_R8;
  Vector *in_R9;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  p_Var4 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var4 != (__UnexistingClass *)0x0) && (*(long *)(p_Var4 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var4 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var4 + 8) == 0) {
      plVar3 = *(long **)(p_Var4 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)p_Var4 + 0x40))(p_Var4);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(p_Var4 + 8) + 0x20);
    }
    in_R8 = (CallError *)((ulong)in_R8 & 0xffffffff);
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
      _err_print_error(&_LC75,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar3 = (long *)(local_48 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar3 = (long *)(local_50 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_0011dda6;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,int>
            (p_Var4,(_func_void_int *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8,in_R9
            );
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_0011dda6:
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
    goto LAB_0011e0ad;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_0011e110;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_0011e110:
      uVar6 = 4;
LAB_0011e0ad:
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
      goto LAB_0011e02b;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0011e02b:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_float **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,3);
  uVar4 = _LC241;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  fVar9 = Variant::operator_cast_to_float(this);
                    /* WARNING: Could not recover jumptable at 0x0011e084. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)(fVar9);
  return;
}



/* MethodBindT<float>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<float>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long lVar1;
  char *pcVar2;
  long *plVar3;
  undefined4 in_register_00000014;
  __UnexistingClass *p_Var4;
  CallError *in_R8;
  Vector *in_R9;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  p_Var4 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var4 != (__UnexistingClass *)0x0) && (*(long *)(p_Var4 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var4 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var4 + 8) == 0) {
      plVar3 = *(long **)(p_Var4 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)p_Var4 + 0x40))(p_Var4);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(p_Var4 + 8) + 0x20);
    }
    in_R8 = (CallError *)((ulong)in_R8 & 0xffffffff);
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
      _err_print_error(&_LC75,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar3 = (long *)(local_48 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar3 = (long *)(local_50 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_0011e176;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,float>
            (p_Var4,(_func_void_float *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8,
             in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_0011e176:
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
    goto LAB_0011e47d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_0011e4e0;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_0011e4e0:
      uVar6 = 4;
LAB_0011e47d:
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
      goto LAB_0011e3fb;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0011e3fb:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_bool **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,1);
  uVar4 = _LC242;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_bool(this);
                    /* WARNING: Could not recover jumptable at 0x0011e457. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)(SUB81(param_1 + (long)param_3,0));
  return;
}



/* MethodBindT<bool>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<bool>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long lVar1;
  char *pcVar2;
  long *plVar3;
  undefined4 in_register_00000014;
  __UnexistingClass *p_Var4;
  CallError *in_R8;
  Vector *in_R9;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  p_Var4 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var4 != (__UnexistingClass *)0x0) && (*(long *)(p_Var4 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var4 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var4 + 8) == 0) {
      plVar3 = *(long **)(p_Var4 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)p_Var4 + 0x40))(p_Var4);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(p_Var4 + 8) + 0x20);
    }
    in_R8 = (CallError *)((ulong)in_R8 & 0xffffffff);
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
      _err_print_error(&_LC75,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar3 = (long *)(local_48 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar3 = (long *)(local_50 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_0011e546;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,bool>
            (p_Var4,(_func_void_bool *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8,
             in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_0011e546:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, Area3D::SpaceOverride>(__UnexistingClass*, void
   (__UnexistingClass::*)(Area3D::SpaceOverride), Variant const**, int, Callable::CallError&,
   Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,Area3D::SpaceOverride>
               (__UnexistingClass *param_1,_func_void_SpaceOverride *param_2,Variant **param_3,
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
    goto LAB_0011e84d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_0011e8b0;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_0011e8b0:
      uVar6 = 4;
LAB_0011e84d:
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
      goto LAB_0011e7cb;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0011e7cb:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_SpaceOverride **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
  uVar4 = _LC76;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_long(this);
                    /* WARNING: Could not recover jumptable at 0x0011e826. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)((char)(param_1 + (long)param_3));
  return;
}



/* MethodBindT<Area3D::SpaceOverride>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindT<Area3D::SpaceOverride>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long lVar1;
  char *pcVar2;
  long *plVar3;
  undefined4 in_register_00000014;
  __UnexistingClass *p_Var4;
  CallError *in_R8;
  Vector *in_R9;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  p_Var4 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var4 != (__UnexistingClass *)0x0) && (*(long *)(p_Var4 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var4 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var4 + 8) == 0) {
      plVar3 = *(long **)(p_Var4 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)p_Var4 + 0x40))(p_Var4);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(p_Var4 + 8) + 0x20);
    }
    in_R8 = (CallError *)((ulong)in_R8 & 0xffffffff);
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
      _err_print_error(&_LC75,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar3 = (long *)(local_48 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar3 = (long *)(local_50 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_0011e916;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,Area3D::SpaceOverride>
            (p_Var4,(_func_void_SpaceOverride *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,
             in_R8,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_0011e916:
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
/* MethodBindTRC<StringName>::~MethodBindTRC() */

void __thiscall MethodBindTRC<StringName>::~MethodBindTRC(MethodBindTRC<StringName> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<StringName const&>::~MethodBindT() */

void __thiscall MethodBindT<StringName_const&>::~MethodBindT(MethodBindT<StringName_const&> *this)

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
/* MethodBindTRC<bool, Node*>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool,Node*>::~MethodBindTRC(MethodBindTRC<bool,Node*> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<TypedArray<Area3D>>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<TypedArray<Area3D>>::~MethodBindTRC(MethodBindTRC<TypedArray<Area3D>> *this)

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
/* MethodBindTRC<NodePath const&>::~MethodBindTRC() */

void __thiscall MethodBindTRC<NodePath_const&>::~MethodBindTRC(MethodBindTRC<NodePath_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<NodePath const&>::~MethodBindT() */

void __thiscall MethodBindT<NodePath_const&>::~MethodBindT(MethodBindT<NodePath_const&> *this)

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
/* MethodBindTRC<Area3D::SpaceOverride>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Area3D::SpaceOverride>::~MethodBindTRC(MethodBindTRC<Area3D::SpaceOverride> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Area3D::SpaceOverride>::~MethodBindT() */

void __thiscall
MethodBindT<Area3D::SpaceOverride>::~MethodBindT(MethodBindT<Area3D::SpaceOverride> *this)

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
/* MethodBindT<Vector3 const&>::~MethodBindT() */

void __thiscall MethodBindT<Vector3_const&>::~MethodBindT(MethodBindT<Vector3_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<Area3D, void, ObjectID>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Area3D,void,ObjectID>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Area3D,void,ObjectID> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<Area3D, void, int, RID const&, ObjectID, int,
   int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Area3D,void,int,RID_const&,ObjectID,int,int>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Area3D,void,int,RID_const&,ObjectID,int,int> *this)

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




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



/* JoltProjectSettings::get_simulation_velocity_steps() */

int JoltProjectSettings::get_simulation_velocity_steps(void)

{
  int iVar1;
  long in_FS_OFFSET;
  long local_40;
  int local_38 [6];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  ProjectSettings::get_singleton();
  StringName::StringName
            ((StringName *)&local_40,"physics/jolt_physics_3d/simulation/velocity_steps",false);
  ProjectSettings::get_setting_with_override((StringName *)local_38);
  iVar1 = Variant::operator_cast_to_int((Variant *)local_38);
  if (Variant::needs_deinit[local_38[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_40 != 0)) {
    StringName::unref();
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltProjectSettings::get_simulation_position_steps() */

int JoltProjectSettings::get_simulation_position_steps(void)

{
  int iVar1;
  long in_FS_OFFSET;
  long local_40;
  int local_38 [6];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  ProjectSettings::get_singleton();
  StringName::StringName
            ((StringName *)&local_40,"physics/jolt_physics_3d/simulation/position_steps",false);
  ProjectSettings::get_setting_with_override((StringName *)local_38);
  iVar1 = Variant::operator_cast_to_int((Variant *)local_38);
  if (Variant::needs_deinit[local_38[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_40 != 0)) {
    StringName::unref();
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltProjectSettings::use_enhanced_internal_edge_removal_for_bodies() */

ulong JoltProjectSettings::use_enhanced_internal_edge_removal_for_bodies(void)

{
  bool bVar1;
  undefined7 extraout_var;
  long in_FS_OFFSET;
  long local_40;
  int local_38 [6];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  ProjectSettings::get_singleton();
  StringName::StringName
            ((StringName *)&local_40,
             "physics/jolt_physics_3d/simulation/use_enhanced_internal_edge_removal",false);
  ProjectSettings::get_setting_with_override((StringName *)local_38);
  bVar1 = Variant::operator_cast_to_bool((Variant *)local_38);
  if (Variant::needs_deinit[local_38[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_40 != 0)) {
    StringName::unref();
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return CONCAT71(extraout_var,bVar1) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltProjectSettings::areas_detect_static_bodies() */

ulong JoltProjectSettings::areas_detect_static_bodies(void)

{
  bool bVar1;
  undefined7 extraout_var;
  long in_FS_OFFSET;
  long local_40;
  int local_38 [6];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  ProjectSettings::get_singleton();
  StringName::StringName
            ((StringName *)&local_40,"physics/jolt_physics_3d/simulation/areas_detect_static_bodies"
             ,false);
  ProjectSettings::get_setting_with_override((StringName *)local_38);
  bVar1 = Variant::operator_cast_to_bool((Variant *)local_38);
  if (Variant::needs_deinit[local_38[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_40 != 0)) {
    StringName::unref();
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return CONCAT71(extraout_var,bVar1) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltProjectSettings::should_generate_all_kinematic_contacts() */

ulong JoltProjectSettings::should_generate_all_kinematic_contacts(void)

{
  bool bVar1;
  undefined7 extraout_var;
  long in_FS_OFFSET;
  long local_40;
  int local_38 [6];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  ProjectSettings::get_singleton();
  StringName::StringName
            ((StringName *)&local_40,
             "physics/jolt_physics_3d/simulation/generate_all_kinematic_contacts",false);
  ProjectSettings::get_setting_with_override((StringName *)local_38);
  bVar1 = Variant::operator_cast_to_bool((Variant *)local_38);
  if (Variant::needs_deinit[local_38[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_40 != 0)) {
    StringName::unref();
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return CONCAT71(extraout_var,bVar1) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltProjectSettings::get_penetration_slop() */

void JoltProjectSettings::get_penetration_slop(void)

{
  long in_FS_OFFSET;
  float fVar1;
  long local_40;
  int local_38 [6];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  ProjectSettings::get_singleton();
  StringName::StringName
            ((StringName *)&local_40,"physics/jolt_physics_3d/simulation/penetration_slop",false);
  ProjectSettings::get_setting_with_override((StringName *)local_38);
  fVar1 = Variant::operator_cast_to_float((Variant *)local_38);
  if (Variant::needs_deinit[local_38[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_40 != 0)) {
    StringName::unref();
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(fVar1);
}



/* JoltProjectSettings::get_speculative_contact_distance() */

void JoltProjectSettings::get_speculative_contact_distance(void)

{
  long in_FS_OFFSET;
  float fVar1;
  long local_40;
  int local_38 [6];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  ProjectSettings::get_singleton();
  StringName::StringName
            ((StringName *)&local_40,
             "physics/jolt_physics_3d/simulation/speculative_contact_distance",false);
  ProjectSettings::get_setting_with_override((StringName *)local_38);
  fVar1 = Variant::operator_cast_to_float((Variant *)local_38);
  if (Variant::needs_deinit[local_38[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_40 != 0)) {
    StringName::unref();
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(fVar1);
}



/* JoltProjectSettings::get_baumgarte_stabilization_factor() */

void JoltProjectSettings::get_baumgarte_stabilization_factor(void)

{
  long in_FS_OFFSET;
  float fVar1;
  long local_40;
  int local_38 [6];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  ProjectSettings::get_singleton();
  StringName::StringName
            ((StringName *)&local_40,
             "physics/jolt_physics_3d/simulation/baumgarte_stabilization_factor",false);
  ProjectSettings::get_setting_with_override((StringName *)local_38);
  fVar1 = Variant::operator_cast_to_float((Variant *)local_38);
  if (Variant::needs_deinit[local_38[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_40 != 0)) {
    StringName::unref();
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(fVar1);
}



/* JoltProjectSettings::get_soft_body_point_radius() */

void JoltProjectSettings::get_soft_body_point_radius(void)

{
  long in_FS_OFFSET;
  float fVar1;
  long local_40;
  int local_38 [6];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  ProjectSettings::get_singleton();
  StringName::StringName
            ((StringName *)&local_40,"physics/jolt_physics_3d/simulation/soft_body_point_radius",
             false);
  ProjectSettings::get_setting_with_override((StringName *)local_38);
  fVar1 = Variant::operator_cast_to_float((Variant *)local_38);
  if (Variant::needs_deinit[local_38[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_40 != 0)) {
    StringName::unref();
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(fVar1);
}



/* JoltProjectSettings::get_bounce_velocity_threshold() */

void JoltProjectSettings::get_bounce_velocity_threshold(void)

{
  int iVar1;
  long in_FS_OFFSET;
  long local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (get_bounce_velocity_threshold()::value == '\0') {
    iVar1 = __cxa_guard_acquire(&get_bounce_velocity_threshold()::value);
    if (iVar1 != 0) {
      ProjectSettings::get_singleton();
      StringName::StringName
                ((StringName *)&local_50,
                 "physics/jolt_physics_3d/simulation/bounce_velocity_threshold",false);
      ProjectSettings::get_setting_with_override((StringName *)local_48);
      get_bounce_velocity_threshold()::value = Variant::operator_cast_to_float((Variant *)local_48);
      __cxa_guard_release(&get_bounce_velocity_threshold()::value);
      if (Variant::needs_deinit[local_48[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_50 != 0)) {
        StringName::unref();
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(get_bounce_velocity_threshold()::value);
}



/* JoltProjectSettings::is_sleep_allowed() */

ulong JoltProjectSettings::is_sleep_allowed(void)

{
  bool bVar1;
  undefined7 extraout_var;
  long in_FS_OFFSET;
  long local_40;
  int local_38 [6];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  ProjectSettings::get_singleton();
  StringName::StringName
            ((StringName *)&local_40,"physics/jolt_physics_3d/simulation/allow_sleep",false);
  ProjectSettings::get_setting_with_override((StringName *)local_38);
  bVar1 = Variant::operator_cast_to_bool((Variant *)local_38);
  if (Variant::needs_deinit[local_38[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_40 != 0)) {
    StringName::unref();
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return CONCAT71(extraout_var,bVar1) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltProjectSettings::get_sleep_velocity_threshold() */

void JoltProjectSettings::get_sleep_velocity_threshold(void)

{
  long in_FS_OFFSET;
  float fVar1;
  long local_40;
  int local_38 [6];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  ProjectSettings::get_singleton();
  StringName::StringName
            ((StringName *)&local_40,"physics/jolt_physics_3d/simulation/sleep_velocity_threshold",
             false);
  ProjectSettings::get_setting_with_override((StringName *)local_38);
  fVar1 = Variant::operator_cast_to_float((Variant *)local_38);
  if (Variant::needs_deinit[local_38[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_40 != 0)) {
    StringName::unref();
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(fVar1);
}



/* JoltProjectSettings::get_sleep_time_threshold() */

void JoltProjectSettings::get_sleep_time_threshold(void)

{
  long in_FS_OFFSET;
  float fVar1;
  long local_40;
  int local_38 [6];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  ProjectSettings::get_singleton();
  StringName::StringName
            ((StringName *)&local_40,"physics/jolt_physics_3d/simulation/sleep_time_threshold",false
            );
  ProjectSettings::get_setting_with_override((StringName *)local_38);
  fVar1 = Variant::operator_cast_to_float((Variant *)local_38);
  if (Variant::needs_deinit[local_38[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_40 != 0)) {
    StringName::unref();
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(fVar1);
}



/* JoltProjectSettings::get_ccd_movement_threshold() */

void JoltProjectSettings::get_ccd_movement_threshold(void)

{
  long in_FS_OFFSET;
  float fVar1;
  long local_40;
  int local_38 [6];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  ProjectSettings::get_singleton();
  StringName::StringName
            ((StringName *)&local_40,
             "physics/jolt_physics_3d/simulation/continuous_cd_movement_threshold",false);
  ProjectSettings::get_setting_with_override((StringName *)local_38);
  fVar1 = Variant::operator_cast_to_float((Variant *)local_38);
  if (Variant::needs_deinit[local_38[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_40 != 0)) {
    StringName::unref();
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(fVar1);
}



/* JoltProjectSettings::get_ccd_max_penetration() */

void JoltProjectSettings::get_ccd_max_penetration(void)

{
  long in_FS_OFFSET;
  float fVar1;
  long local_40;
  int local_38 [6];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  ProjectSettings::get_singleton();
  StringName::StringName
            ((StringName *)&local_40,
             "physics/jolt_physics_3d/simulation/continuous_cd_max_penetration",false);
  ProjectSettings::get_setting_with_override((StringName *)local_38);
  fVar1 = Variant::operator_cast_to_float((Variant *)local_38);
  if (Variant::needs_deinit[local_38[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_40 != 0)) {
    StringName::unref();
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(fVar1);
}



/* JoltProjectSettings::is_body_pair_contact_cache_enabled() */

ulong JoltProjectSettings::is_body_pair_contact_cache_enabled(void)

{
  bool bVar1;
  undefined7 extraout_var;
  long in_FS_OFFSET;
  long local_40;
  int local_38 [6];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  ProjectSettings::get_singleton();
  StringName::StringName
            ((StringName *)&local_40,
             "physics/jolt_physics_3d/simulation/body_pair_contact_cache_enabled",false);
  ProjectSettings::get_setting_with_override((StringName *)local_38);
  bVar1 = Variant::operator_cast_to_bool((Variant *)local_38);
  if (Variant::needs_deinit[local_38[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_40 != 0)) {
    StringName::unref();
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return CONCAT71(extraout_var,bVar1) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltProjectSettings::get_body_pair_cache_distance_sq() */

void JoltProjectSettings::get_body_pair_cache_distance_sq(void)

{
  long in_FS_OFFSET;
  float fVar1;
  long local_40;
  int local_38 [6];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  ProjectSettings::get_singleton();
  StringName::StringName
            ((StringName *)&local_40,
             "physics/jolt_physics_3d/simulation/body_pair_contact_cache_distance_threshold",false);
  ProjectSettings::get_setting_with_override((StringName *)local_38);
  fVar1 = Variant::operator_cast_to_float((Variant *)local_38);
  if (Variant::needs_deinit[local_38[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_40 != 0)) {
    StringName::unref();
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(fVar1 * fVar1);
}



/* JoltProjectSettings::get_body_pair_cache_angle_cos_div2() */

void JoltProjectSettings::get_body_pair_cache_angle_cos_div2(void)

{
  long in_FS_OFFSET;
  float fVar1;
  long local_40;
  int local_38 [6];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  ProjectSettings::get_singleton();
  StringName::StringName
            ((StringName *)&local_40,
             "physics/jolt_physics_3d/simulation/body_pair_contact_cache_angle_threshold",false);
  ProjectSettings::get_setting_with_override((StringName *)local_38);
  fVar1 = Variant::operator_cast_to_float((Variant *)local_38);
  fVar1 = cosf(fVar1 * _LC18);
  if (Variant::needs_deinit[local_38[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_40 != 0)) {
    StringName::unref();
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(fVar1);
}



/* JoltProjectSettings::use_enhanced_internal_edge_removal_for_queries() */

undefined1 JoltProjectSettings::use_enhanced_internal_edge_removal_for_queries(void)

{
  int iVar1;
  long in_FS_OFFSET;
  long local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (use_enhanced_internal_edge_removal_for_queries()::value == '\0') {
    iVar1 = __cxa_guard_acquire(&use_enhanced_internal_edge_removal_for_queries()::value);
    if (iVar1 != 0) {
      ProjectSettings::get_singleton();
      StringName::StringName
                ((StringName *)&local_50,
                 "physics/jolt_physics_3d/queries/use_enhanced_internal_edge_removal",false);
      ProjectSettings::get_setting_with_override((StringName *)local_48);
      use_enhanced_internal_edge_removal_for_queries()::value =
           Variant::operator_cast_to_bool((Variant *)local_48);
      __cxa_guard_release(&use_enhanced_internal_edge_removal_for_queries()::value);
      if (Variant::needs_deinit[local_48[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_50 != 0)) {
        StringName::unref();
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return use_enhanced_internal_edge_removal_for_queries()::value;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltProjectSettings::enable_ray_cast_face_index() */

undefined1 JoltProjectSettings::enable_ray_cast_face_index(void)

{
  int iVar1;
  long in_FS_OFFSET;
  long local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (enable_ray_cast_face_index()::value == '\0') {
    iVar1 = __cxa_guard_acquire(&enable_ray_cast_face_index()::value);
    if (iVar1 != 0) {
      ProjectSettings::get_singleton();
      StringName::StringName
                ((StringName *)&local_50,
                 "physics/jolt_physics_3d/queries/enable_ray_cast_face_index",false);
      ProjectSettings::get_setting_with_override((StringName *)local_48);
      enable_ray_cast_face_index()::value = Variant::operator_cast_to_bool((Variant *)local_48);
      __cxa_guard_release(&enable_ray_cast_face_index()::value);
      if (Variant::needs_deinit[local_48[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_50 != 0)) {
        StringName::unref();
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return enable_ray_cast_face_index()::value;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltProjectSettings::use_enhanced_internal_edge_removal_for_motion_queries() */

undefined1 JoltProjectSettings::use_enhanced_internal_edge_removal_for_motion_queries(void)

{
  int iVar1;
  long in_FS_OFFSET;
  long local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (use_enhanced_internal_edge_removal_for_motion_queries()::value == '\0') {
    iVar1 = __cxa_guard_acquire(&use_enhanced_internal_edge_removal_for_motion_queries()::value);
    if (iVar1 != 0) {
      ProjectSettings::get_singleton();
      StringName::StringName
                ((StringName *)&local_50,
                 "physics/jolt_physics_3d/motion_queries/use_enhanced_internal_edge_removal",false);
      ProjectSettings::get_setting_with_override((StringName *)local_48);
      use_enhanced_internal_edge_removal_for_motion_queries()::value =
           Variant::operator_cast_to_bool((Variant *)local_48);
      __cxa_guard_release(&use_enhanced_internal_edge_removal_for_motion_queries()::value);
      if (Variant::needs_deinit[local_48[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_50 != 0)) {
        StringName::unref();
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return use_enhanced_internal_edge_removal_for_motion_queries()::value;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltProjectSettings::get_motion_query_recovery_iterations() */

int JoltProjectSettings::get_motion_query_recovery_iterations(void)

{
  int iVar1;
  long in_FS_OFFSET;
  long local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (get_motion_query_recovery_iterations()::value == '\0') {
    iVar1 = __cxa_guard_acquire(&get_motion_query_recovery_iterations()::value);
    if (iVar1 != 0) {
      ProjectSettings::get_singleton();
      StringName::StringName
                ((StringName *)&local_50,
                 "physics/jolt_physics_3d/motion_queries/recovery_iterations",false);
      ProjectSettings::get_setting_with_override((StringName *)local_48);
      get_motion_query_recovery_iterations()::value =
           Variant::operator_cast_to_int((Variant *)local_48);
      __cxa_guard_release(&get_motion_query_recovery_iterations()::value);
      if (Variant::needs_deinit[local_48[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_50 != 0)) {
        StringName::unref();
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return get_motion_query_recovery_iterations()::value;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltProjectSettings::get_motion_query_recovery_amount() */

void JoltProjectSettings::get_motion_query_recovery_amount(void)

{
  int iVar1;
  long in_FS_OFFSET;
  long local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (get_motion_query_recovery_amount()::value == '\0') {
    iVar1 = __cxa_guard_acquire(&get_motion_query_recovery_amount()::value);
    if (iVar1 != 0) {
      ProjectSettings::get_singleton();
      StringName::StringName
                ((StringName *)&local_50,"physics/jolt_physics_3d/motion_queries/recovery_amount",
                 false);
      ProjectSettings::get_setting_with_override((StringName *)local_48);
      get_motion_query_recovery_amount()::value =
           Variant::operator_cast_to_float((Variant *)local_48);
      __cxa_guard_release(&get_motion_query_recovery_amount()::value);
      if (Variant::needs_deinit[local_48[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_50 != 0)) {
        StringName::unref();
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(get_motion_query_recovery_amount()::value);
}



/* JoltProjectSettings::get_collision_margin_fraction() */

void JoltProjectSettings::get_collision_margin_fraction(void)

{
  int iVar1;
  long in_FS_OFFSET;
  long local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (get_collision_margin_fraction()::value == '\0') {
    iVar1 = __cxa_guard_acquire(&get_collision_margin_fraction()::value);
    if (iVar1 != 0) {
      ProjectSettings::get_singleton();
      StringName::StringName
                ((StringName *)&local_50,
                 "physics/jolt_physics_3d/collisions/collision_margin_fraction",false);
      ProjectSettings::get_setting_with_override((StringName *)local_48);
      get_collision_margin_fraction()::value = Variant::operator_cast_to_float((Variant *)local_48);
      __cxa_guard_release(&get_collision_margin_fraction()::value);
      if (Variant::needs_deinit[local_48[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_50 != 0)) {
        StringName::unref();
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(get_collision_margin_fraction()::value);
}



/* JoltProjectSettings::get_active_edge_threshold() */

void JoltProjectSettings::get_active_edge_threshold(void)

{
  int iVar1;
  long in_FS_OFFSET;
  float __x;
  long local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (get_active_edge_threshold()::value == '\0') {
    iVar1 = __cxa_guard_acquire(&get_active_edge_threshold()::value);
    if (iVar1 != 0) {
      ProjectSettings::get_singleton();
      StringName::StringName
                ((StringName *)&local_50,"physics/jolt_physics_3d/collisions/active_edge_threshold",
                 false);
      ProjectSettings::get_setting_with_override((StringName *)local_48);
      __x = Variant::operator_cast_to_float((Variant *)local_48);
      get_active_edge_threshold()::value = cosf(__x);
      __cxa_guard_release(&get_active_edge_threshold()::value);
      if (Variant::needs_deinit[local_48[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_50 != 0)) {
        StringName::unref();
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(get_active_edge_threshold()::value);
}



/* JoltProjectSettings::use_joint_world_node_a() */

ulong JoltProjectSettings::use_joint_world_node_a(void)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  long local_40;
  int local_38 [6];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = ProjectSettings::get_singleton();
  StringName::StringName((StringName *)&local_40,"physics/jolt_physics_3d/joints/world_node",false);
  ProjectSettings::get_setting_with_override((StringName *)local_38);
  iVar1 = Variant::operator_cast_to_int((Variant *)local_38);
  if (Variant::needs_deinit[local_38[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_40 != 0)) {
    StringName::unref();
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return CONCAT71((int7)((ulong)uVar2 >> 8),iVar1 == 0) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltProjectSettings::get_temp_memory_mib() */

int JoltProjectSettings::get_temp_memory_mib(void)

{
  int iVar1;
  long in_FS_OFFSET;
  long local_40;
  int local_38 [6];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  ProjectSettings::get_singleton();
  StringName::StringName
            ((StringName *)&local_40,"physics/jolt_physics_3d/limits/temporary_memory_buffer_size",
             false);
  ProjectSettings::get_setting_with_override((StringName *)local_38);
  iVar1 = Variant::operator_cast_to_int((Variant *)local_38);
  if (Variant::needs_deinit[local_38[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_40 != 0)) {
    StringName::unref();
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltProjectSettings::get_temp_memory_b() */

long JoltProjectSettings::get_temp_memory_b(void)

{
  int iVar1;
  
  iVar1 = get_temp_memory_mib();
  return (long)(iVar1 << 0x14);
}



/* JoltProjectSettings::get_world_boundary_shape_size() */

void JoltProjectSettings::get_world_boundary_shape_size(void)

{
  long in_FS_OFFSET;
  float fVar1;
  long local_40;
  int local_38 [6];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  ProjectSettings::get_singleton();
  StringName::StringName
            ((StringName *)&local_40,"physics/jolt_physics_3d/limits/world_boundary_shape_size",
             false);
  ProjectSettings::get_setting_with_override((StringName *)local_38);
  fVar1 = Variant::operator_cast_to_float((Variant *)local_38);
  if (Variant::needs_deinit[local_38[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_40 != 0)) {
    StringName::unref();
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(fVar1);
}



/* JoltProjectSettings::get_max_linear_velocity() */

void JoltProjectSettings::get_max_linear_velocity(void)

{
  long in_FS_OFFSET;
  float fVar1;
  long local_40;
  int local_38 [6];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  ProjectSettings::get_singleton();
  StringName::StringName
            ((StringName *)&local_40,"physics/jolt_physics_3d/limits/max_linear_velocity",false);
  ProjectSettings::get_setting_with_override((StringName *)local_38);
  fVar1 = Variant::operator_cast_to_float((Variant *)local_38);
  if (Variant::needs_deinit[local_38[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_40 != 0)) {
    StringName::unref();
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(fVar1);
}



/* JoltProjectSettings::get_max_angular_velocity() */

void JoltProjectSettings::get_max_angular_velocity(void)

{
  long in_FS_OFFSET;
  float fVar1;
  long local_40;
  int local_38 [6];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  ProjectSettings::get_singleton();
  StringName::StringName
            ((StringName *)&local_40,"physics/jolt_physics_3d/limits/max_angular_velocity",false);
  ProjectSettings::get_setting_with_override((StringName *)local_38);
  fVar1 = Variant::operator_cast_to_float((Variant *)local_38);
  if (Variant::needs_deinit[local_38[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_40 != 0)) {
    StringName::unref();
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(fVar1);
}



/* JoltProjectSettings::get_max_bodies() */

int JoltProjectSettings::get_max_bodies(void)

{
  int iVar1;
  long in_FS_OFFSET;
  long local_40;
  int local_38 [6];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  ProjectSettings::get_singleton();
  StringName::StringName((StringName *)&local_40,"physics/jolt_physics_3d/limits/max_bodies",false);
  ProjectSettings::get_setting_with_override((StringName *)local_38);
  iVar1 = Variant::operator_cast_to_int((Variant *)local_38);
  if (Variant::needs_deinit[local_38[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_40 != 0)) {
    StringName::unref();
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltProjectSettings::get_max_pairs() */

int JoltProjectSettings::get_max_pairs(void)

{
  int iVar1;
  long in_FS_OFFSET;
  long local_40;
  int local_38 [6];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  ProjectSettings::get_singleton();
  StringName::StringName
            ((StringName *)&local_40,"physics/jolt_physics_3d/limits/max_body_pairs",false);
  ProjectSettings::get_setting_with_override((StringName *)local_38);
  iVar1 = Variant::operator_cast_to_int((Variant *)local_38);
  if (Variant::needs_deinit[local_38[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_40 != 0)) {
    StringName::unref();
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltProjectSettings::get_max_contact_constraints() */

int JoltProjectSettings::get_max_contact_constraints(void)

{
  int iVar1;
  long in_FS_OFFSET;
  long local_40;
  int local_38 [6];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  ProjectSettings::get_singleton();
  StringName::StringName
            ((StringName *)&local_40,"physics/jolt_physics_3d/limits/max_contact_constraints",false)
  ;
  ProjectSettings::get_setting_with_override((StringName *)local_38);
  iVar1 = Variant::operator_cast_to_int((Variant *)local_38);
  if (Variant::needs_deinit[local_38[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_40 != 0)) {
    StringName::unref();
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltProjectSettings::register_settings() */

void JoltProjectSettings::register_settings(void)

{
  long *plVar1;
  long lVar2;
  wchar_t *pwVar3;
  undefined *puVar4;
  undefined *puVar5;
  wchar_t *pwVar6;
  bool bVar7;
  long in_FS_OFFSET;
  long local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  wchar_t *local_a8;
  long local_a0;
  long local_98;
  int local_90;
  long local_88;
  undefined4 local_80;
  int local_78 [8];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_78,10);
  local_b8 = 0;
  local_c0 = 0;
  pwVar3 = L"2,16,or_greater";
  do {
    pwVar6 = pwVar3;
    pwVar3 = pwVar6 + 1;
  } while (pwVar6[1] != L'\0');
  local_a8 = L"2,16,or_greater";
  local_a0 = (long)(pwVar6 + -0x41b0b) >> 2;
  String::parse_utf32((StrRange *)&local_c0);
  local_c8 = 0;
  local_a8 = L"physics/jolt_physics_3d/simulation/velocity_steps";
  local_a0 = 0x31;
  String::parse_latin1((StrRange *)&local_c8);
  local_a8 = (wchar_t *)CONCAT44(local_a8._4_4_,2);
  local_a0 = 0;
  if (local_c8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_a0,(CowData *)&local_c8);
  }
  local_98 = 0;
  local_90 = 1;
  local_88 = 0;
  if (local_c0 == 0) {
LAB_00101ce8:
    local_80 = 6;
    StringName::operator=((StringName *)&local_98,(StringName *)&local_b8);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_88,(CowData *)&local_c0);
    local_80 = 6;
    if (local_90 != 0x11) goto LAB_00101ce8;
    StringName::StringName((StringName *)&local_b0,(String *)&local_88,false);
    if (local_98 == local_b0) {
      if ((StringName::configured != '\0') && (local_b0 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_98 = local_b0;
    }
  }
  bVar7 = SUB81((Variant *)local_78,0);
  _GLOBAL_DEF((PropertyInfo *)local_58,(Variant *)&local_a8,bVar7,false,false,false);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  lVar2 = local_88;
  if (local_88 != 0) {
    LOCK();
    plVar1 = (long *)(local_88 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_88 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_98 != 0)) {
    StringName::unref();
  }
  lVar2 = local_a0;
  if (local_a0 != 0) {
    LOCK();
    plVar1 = (long *)(local_a0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_a0 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  if ((StringName::configured != '\0') && (local_b8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_78,2);
  local_b8 = 0;
  local_c0 = 0;
  pwVar3 = L"1,16,or_greater";
  do {
    pwVar6 = pwVar3;
    pwVar3 = pwVar6 + 1;
  } while (pwVar6[1] != L'\0');
  local_a8 = L"1,16,or_greater";
  local_a0 = (long)(pwVar6 + -0x41b1b) >> 2;
  String::parse_utf32((StrRange *)&local_c0);
  local_c8 = 0;
  local_a8 = L"physics/jolt_physics_3d/simulation/position_steps";
  local_a0 = 0x31;
  String::parse_latin1((StrRange *)&local_c8);
  local_a8 = (wchar_t *)CONCAT44(local_a8._4_4_,2);
  local_a0 = 0;
  if (local_c8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_a0,(CowData *)&local_c8);
  }
  local_98 = 0;
  local_90 = 1;
  local_88 = 0;
  if (local_c0 == 0) {
LAB_00101ef0:
    local_80 = 6;
    StringName::operator=((StringName *)&local_98,(StringName *)&local_b8);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_88,(CowData *)&local_c0);
    local_80 = 6;
    if (local_90 != 0x11) goto LAB_00101ef0;
    StringName::StringName((StringName *)&local_b0,(String *)&local_88,false);
    if (local_98 == local_b0) {
      if ((StringName::configured != '\0') && (local_b0 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_98 = local_b0;
    }
  }
  _GLOBAL_DEF((PropertyInfo *)local_58,(Variant *)&local_a8,bVar7,false,false,false);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  if ((StringName::configured != '\0') && (local_b8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_78,true);
  local_a8 = (wchar_t *)&_LC54;
  local_b8 = 0;
  local_c0 = 0;
  local_a0 = 0;
  String::parse_latin1((StrRange *)&local_c0);
  local_c8 = 0;
  local_a8 = L"physics/jolt_physics_3d/simulation/use_enhanced_internal_edge_removal";
  local_a0 = 0x45;
  String::parse_latin1((StrRange *)&local_c8);
  local_a8 = (wchar_t *)CONCAT44(local_a8._4_4_,1);
  local_a0 = 0;
  if (local_c8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_a0,(CowData *)&local_c8);
  }
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  if (local_c0 == 0) {
LAB_00102098:
    local_80 = 6;
    StringName::operator=((StringName *)&local_98,(StringName *)&local_b8);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_88,(CowData *)&local_c0);
    local_80 = 6;
    if (local_90 != 0x11) goto LAB_00102098;
    StringName::StringName((StringName *)&local_b0,(String *)&local_88,false);
    if (local_98 == local_b0) {
      if ((StringName::configured != '\0') && (local_b0 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_98 = local_b0;
    }
  }
  _GLOBAL_DEF((PropertyInfo *)local_58,(Variant *)&local_a8,bVar7,false,false,false);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
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
  if ((StringName::configured != '\0') && (local_b8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_78,false);
  local_a8 = (wchar_t *)&_LC54;
  local_b8 = 0;
  local_c0 = 0;
  local_a0 = 0;
  String::parse_latin1((StrRange *)&local_c0);
  local_c8 = 0;
  local_a8 = L"physics/jolt_physics_3d/simulation/areas_detect_static_bodies";
  local_a0 = 0x3d;
  String::parse_latin1((StrRange *)&local_c8);
  local_a8 = (wchar_t *)CONCAT44(local_a8._4_4_,1);
  local_a0 = 0;
  if (local_c8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_a0,(CowData *)&local_c8);
  }
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  if (local_c0 == 0) {
LAB_00102248:
    local_80 = 6;
    StringName::operator=((StringName *)&local_98,(StringName *)&local_b8);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_88,(CowData *)&local_c0);
    local_80 = 6;
    if (local_90 != 0x11) goto LAB_00102248;
    StringName::StringName((StringName *)&local_b0,(String *)&local_88,false);
    if (local_98 == local_b0) {
      if ((StringName::configured != '\0') && (local_b0 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_98 = local_b0;
    }
  }
  _GLOBAL_DEF((PropertyInfo *)local_58,(Variant *)&local_a8,bVar7,false,false,false);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  lVar2 = local_88;
  if (local_88 != 0) {
    LOCK();
    plVar1 = (long *)(local_88 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_88 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_98 != 0)) {
    StringName::unref();
  }
  lVar2 = local_a0;
  if (local_a0 != 0) {
    LOCK();
    plVar1 = (long *)(local_a0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_a0 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  if ((StringName::configured != '\0') && (local_b8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_78,false);
  local_a8 = (wchar_t *)&_LC54;
  local_b8 = 0;
  local_c0 = 0;
  local_a0 = 0;
  String::parse_latin1((StrRange *)&local_c0);
  local_c8 = 0;
  local_a8 = L"physics/jolt_physics_3d/simulation/generate_all_kinematic_contacts";
  local_a0 = 0x42;
  String::parse_latin1((StrRange *)&local_c8);
  local_a8 = (wchar_t *)CONCAT44(local_a8._4_4_,1);
  local_a0 = 0;
  if (local_c8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_a0,(CowData *)&local_c8);
  }
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  if (local_c0 == 0) {
LAB_00102428:
    local_80 = 6;
    StringName::operator=((StringName *)&local_98,(StringName *)&local_b8);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_88,(CowData *)&local_c0);
    local_80 = 6;
    if (local_90 != 0x11) goto LAB_00102428;
    StringName::StringName((StringName *)&local_b0,(String *)&local_88,false);
    if (local_98 == local_b0) {
      if ((StringName::configured != '\0') && (local_b0 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_98 = local_b0;
    }
  }
  _GLOBAL_DEF((PropertyInfo *)local_58,(Variant *)&local_a8,bVar7,false,false,false);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  if ((StringName::configured != '\0') && (local_b8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_78,_LC55);
  local_b8 = 0;
  local_c0 = 0;
  pwVar3 = L"0,1,0.00001,or_greater,suffix:m";
  do {
    pwVar6 = pwVar3;
    pwVar3 = pwVar6 + 1;
  } while (pwVar6[1] != L'\0');
  local_a8 = L"0,1,0.00001,or_greater,suffix:m";
  local_a0 = (long)(pwVar6 + -0x41b2b) >> 2;
  String::parse_utf32((StrRange *)&local_c0);
  local_c8 = 0;
  local_a8 = L"physics/jolt_physics_3d/simulation/penetration_slop";
  local_a0 = 0x33;
  String::parse_latin1((StrRange *)&local_c8);
  local_a8 = (wchar_t *)CONCAT44(local_a8._4_4_,3);
  local_a0 = 0;
  if (local_c8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_a0,(CowData *)&local_c8);
  }
  local_98 = 0;
  local_90 = 1;
  local_88 = 0;
  if (local_c0 == 0) {
LAB_001025e8:
    local_80 = 6;
    StringName::operator=((StringName *)&local_98,(StringName *)&local_b8);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_88,(CowData *)&local_c0);
    local_80 = 6;
    if (local_90 != 0x11) goto LAB_001025e8;
    StringName::StringName((StringName *)&local_b0,(String *)&local_88,false);
    if (local_98 == local_b0) {
      if ((StringName::configured != '\0') && (local_b0 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_98 = local_b0;
    }
  }
  _GLOBAL_DEF((PropertyInfo *)local_58,(Variant *)&local_a8,bVar7,false,false,false);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  if ((StringName::configured != '\0') && (local_b8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_78,_LC55);
  local_b8 = 0;
  local_c0 = 0;
  pwVar3 = L"0,1,0.00001,or_greater,suffix:m";
  do {
    pwVar6 = pwVar3;
    pwVar3 = pwVar6 + 1;
  } while (pwVar6[1] != L'\0');
  local_a8 = L"0,1,0.00001,or_greater,suffix:m";
  local_a0 = (long)(pwVar6 + -0x41b2b) >> 2;
  String::parse_utf32((StrRange *)&local_c0);
  local_c8 = 0;
  local_a8 = L"physics/jolt_physics_3d/simulation/speculative_contact_distance";
  local_a0 = 0x3f;
  String::parse_latin1((StrRange *)&local_c8);
  local_a8 = (wchar_t *)CONCAT44(local_a8._4_4_,3);
  local_a0 = 0;
  if (local_c8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_a0,(CowData *)&local_c8);
  }
  local_98 = 0;
  local_90 = 1;
  local_88 = 0;
  if (local_c0 == 0) {
LAB_001027b8:
    local_80 = 6;
    StringName::operator=((StringName *)&local_98,(StringName *)&local_b8);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_88,(CowData *)&local_c0);
    local_80 = 6;
    if (local_90 != 0x11) goto LAB_001027b8;
    StringName::StringName((StringName *)&local_b0,(String *)&local_88,false);
    if (local_98 == local_b0) {
      if ((StringName::configured != '\0') && (local_b0 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_98 = local_b0;
    }
  }
  _GLOBAL_DEF((PropertyInfo *)local_58,(Variant *)&local_a8,bVar7,false,false,false);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  if ((StringName::configured != '\0') && (local_b8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_78,_LC56);
  local_b8 = 0;
  local_c0 = 0;
  puVar4 = &_LC37;
  do {
    puVar5 = puVar4;
    puVar4 = puVar5 + 4;
  } while (*(int *)(puVar5 + 4) != 0);
  local_a8 = L"0,1,0.01";
  local_a0 = (long)(puVar5 + -0x106d2c) >> 2;
  String::parse_utf32((StrRange *)&local_c0);
  local_c8 = 0;
  local_a8 = L"physics/jolt_physics_3d/simulation/baumgarte_stabilization_factor";
  local_a0 = 0x41;
  String::parse_latin1((StrRange *)&local_c8);
  local_a8 = (wchar_t *)CONCAT44(local_a8._4_4_,3);
  local_a0 = 0;
  if (local_c8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_a0,(CowData *)&local_c8);
  }
  local_98 = 0;
  local_90 = 1;
  local_88 = 0;
  if (local_c0 == 0) {
LAB_00102978:
    local_80 = 6;
    StringName::operator=((StringName *)&local_98,(StringName *)&local_b8);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_88,(CowData *)&local_c0);
    local_80 = 6;
    if (local_90 != 0x11) goto LAB_00102978;
    StringName::StringName((StringName *)&local_b0,(String *)&local_88,false);
    if (local_98 == local_b0) {
      if ((StringName::configured != '\0') && (local_b0 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_98 = local_b0;
    }
  }
  _GLOBAL_DEF((PropertyInfo *)local_58,(Variant *)&local_a8,bVar7,false,false,false);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  lVar2 = local_88;
  if (local_88 != 0) {
    LOCK();
    plVar1 = (long *)(local_88 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_88 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_98 != 0)) {
    StringName::unref();
  }
  lVar2 = local_a0;
  if (local_a0 != 0) {
    LOCK();
    plVar1 = (long *)(local_a0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_a0 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  if ((StringName::configured != '\0') && (local_b8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_78,_LC57);
  local_b8 = 0;
  local_c0 = 0;
  pwVar3 = L"0,1,0.001,or_greater,suffix:m";
  do {
    pwVar6 = pwVar3;
    pwVar3 = pwVar6 + 1;
  } while (pwVar6[1] != L'\0');
  local_a8 = L"0,1,0.001,or_greater,suffix:m";
  local_a0 = (long)(pwVar6 + -0x41b55) >> 2;
  String::parse_utf32((StrRange *)&local_c0);
  local_c8 = 0;
  local_a8 = L"physics/jolt_physics_3d/simulation/soft_body_point_radius";
  local_a0 = 0x39;
  String::parse_latin1((StrRange *)&local_c8);
  local_a8 = (wchar_t *)CONCAT44(local_a8._4_4_,3);
  local_a0 = 0;
  if (local_c8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_a0,(CowData *)&local_c8);
  }
  local_98 = 0;
  local_90 = 1;
  local_88 = 0;
  if (local_c0 == 0) {
LAB_00102b78:
    local_80 = 6;
    StringName::operator=((StringName *)&local_98,(StringName *)&local_b8);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_88,(CowData *)&local_c0);
    local_80 = 6;
    if (local_90 != 0x11) goto LAB_00102b78;
    StringName::StringName((StringName *)&local_b0,(String *)&local_88,false);
    if (local_98 == local_b0) {
      if ((StringName::configured != '\0') && (local_b0 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_98 = local_b0;
    }
  }
  _GLOBAL_DEF((PropertyInfo *)local_58,(Variant *)&local_a8,bVar7,false,false,false);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  if ((StringName::configured != '\0') && (local_b8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_78,_LC58);
  local_b8 = 0;
  local_c0 = 0;
  pwVar3 = L"0,1,0.001,or_greater,suffix:m/s";
  do {
    pwVar6 = pwVar3;
    pwVar3 = pwVar6 + 1;
  } while (pwVar6[1] != L'\0');
  local_a8 = L"0,1,0.001,or_greater,suffix:m/s";
  local_a0 = (long)(pwVar6 + -0x41b73) >> 2;
  String::parse_utf32((StrRange *)&local_c0);
  local_c8 = 0;
  local_a8 = L"physics/jolt_physics_3d/simulation/bounce_velocity_threshold";
  local_a0 = 0x3c;
  String::parse_latin1((StrRange *)&local_c8);
  local_a8 = (wchar_t *)CONCAT44(local_a8._4_4_,3);
  local_a0 = 0;
  if (local_c8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_a0,(CowData *)&local_c8);
  }
  local_98 = 0;
  local_90 = 1;
  local_88 = 0;
  if (local_c0 == 0) {
LAB_00102d48:
    local_80 = 6;
    StringName::operator=((StringName *)&local_98,(StringName *)&local_b8);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_88,(CowData *)&local_c0);
    local_80 = 6;
    if (local_90 != 0x11) goto LAB_00102d48;
    StringName::StringName((StringName *)&local_b0,(String *)&local_88,false);
    if (local_98 == local_b0) {
      if ((StringName::configured != '\0') && (local_b0 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_98 = local_b0;
    }
  }
  _GLOBAL_DEF((PropertyInfo *)local_58,(Variant *)&local_a8,bVar7,false,false,false);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  lVar2 = local_88;
  if (local_88 != 0) {
    LOCK();
    plVar1 = (long *)(local_88 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_88 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_98 != 0)) {
    StringName::unref();
  }
  lVar2 = local_a0;
  if (local_a0 != 0) {
    LOCK();
    plVar1 = (long *)(local_a0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_a0 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  if ((StringName::configured != '\0') && (local_b8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_78,true);
  local_a8 = (wchar_t *)&_LC54;
  local_b8 = 0;
  local_c0 = 0;
  local_a0 = 0;
  String::parse_latin1((StrRange *)&local_c0);
  local_c8 = 0;
  local_a8 = L"physics/jolt_physics_3d/simulation/allow_sleep";
  local_a0 = 0x2e;
  String::parse_latin1((StrRange *)&local_c8);
  local_a8 = (wchar_t *)CONCAT44(local_a8._4_4_,1);
  local_a0 = 0;
  if (local_c8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_a0,(CowData *)&local_c8);
  }
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  if (local_c0 == 0) {
LAB_00102f28:
    local_80 = 6;
    StringName::operator=((StringName *)&local_98,(StringName *)&local_b8);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_88,(CowData *)&local_c0);
    local_80 = 6;
    if (local_90 != 0x11) goto LAB_00102f28;
    StringName::StringName((StringName *)&local_b0,(String *)&local_88,false);
    if (local_98 == local_b0) {
      if ((StringName::configured != '\0') && (local_b0 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_98 = local_b0;
    }
  }
  _GLOBAL_DEF((PropertyInfo *)local_58,(Variant *)&local_a8,bVar7,false,false,false);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  if ((StringName::configured != '\0') && (local_b8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_78,_LC59);
  local_b8 = 0;
  local_c0 = 0;
  pwVar3 = L"0,1,0.001,or_greater,suffix:m/s";
  do {
    pwVar6 = pwVar3;
    pwVar3 = pwVar6 + 1;
  } while (pwVar6[1] != L'\0');
  local_a8 = L"0,1,0.001,or_greater,suffix:m/s";
  local_a0 = (long)(pwVar6 + -0x41b73) >> 2;
  String::parse_utf32((StrRange *)&local_c0);
  local_c8 = 0;
  local_a8 = L"physics/jolt_physics_3d/simulation/sleep_velocity_threshold";
  local_a0 = 0x3b;
  String::parse_latin1((StrRange *)&local_c8);
  local_a8 = (wchar_t *)CONCAT44(local_a8._4_4_,3);
  local_a0 = 0;
  if (local_c8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_a0,(CowData *)&local_c8);
  }
  local_98 = 0;
  local_90 = 1;
  local_88 = 0;
  if (local_c0 == 0) {
LAB_001030e8:
    local_80 = 6;
    StringName::operator=((StringName *)&local_98,(StringName *)&local_b8);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_88,(CowData *)&local_c0);
    local_80 = 6;
    if (local_90 != 0x11) goto LAB_001030e8;
    StringName::StringName((StringName *)&local_b0,(String *)&local_88,false);
    if (local_98 == local_b0) {
      if ((StringName::configured != '\0') && (local_b0 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_98 = local_b0;
    }
  }
  _GLOBAL_DEF((PropertyInfo *)local_58,(Variant *)&local_a8,bVar7,false,false,false);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  lVar2 = local_88;
  if (local_88 != 0) {
    LOCK();
    plVar1 = (long *)(local_88 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_88 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_98 != 0)) {
    StringName::unref();
  }
  lVar2 = local_a0;
  if (local_a0 != 0) {
    LOCK();
    plVar1 = (long *)(local_a0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_a0 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  if ((StringName::configured != '\0') && (local_b8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_78,_LC18);
  local_b8 = 0;
  local_c0 = 0;
  pwVar3 = L"0,5,0.01,or_greater,suffix:s";
  do {
    pwVar6 = pwVar3;
    pwVar3 = pwVar6 + 1;
  } while (pwVar6[1] != L'\0');
  local_a8 = L"0,5,0.01,or_greater,suffix:s";
  local_a0 = (long)(pwVar6 + -0x41b93) >> 2;
  String::parse_utf32((StrRange *)&local_c0);
  local_c8 = 0;
  local_a8 = L"physics/jolt_physics_3d/simulation/sleep_time_threshold";
  local_a0 = 0x37;
  String::parse_latin1((StrRange *)&local_c8);
  local_a8 = (wchar_t *)CONCAT44(local_a8._4_4_,3);
  local_a0 = 0;
  if (local_c8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_a0,(CowData *)&local_c8);
  }
  local_98 = 0;
  local_90 = 1;
  local_88 = 0;
  if (local_c0 == 0) {
LAB_001032e8:
    local_80 = 6;
    StringName::operator=((StringName *)&local_98,(StringName *)&local_b8);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_88,(CowData *)&local_c0);
    local_80 = 6;
    if (local_90 != 0x11) goto LAB_001032e8;
    StringName::StringName((StringName *)&local_b0,(String *)&local_88,false);
    if (local_98 == local_b0) {
      if ((StringName::configured != '\0') && (local_b0 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_98 = local_b0;
    }
  }
  _GLOBAL_DEF((PropertyInfo *)local_58,(Variant *)&local_a8,bVar7,false,false,false);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  if ((StringName::configured != '\0') && (local_b8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_78,_LC60);
  local_b8 = 0;
  local_c0 = 0;
  puVar4 = &_LC37;
  do {
    puVar5 = puVar4;
    puVar4 = puVar5 + 4;
  } while (*(int *)(puVar5 + 4) != 0);
  local_a8 = L"0,1,0.01";
  local_a0 = (long)(puVar5 + -0x106d2c) >> 2;
  String::parse_utf32((StrRange *)&local_c0);
  local_c8 = 0;
  local_a8 = L"physics/jolt_physics_3d/simulation/continuous_cd_movement_threshold";
  local_a0 = 0x43;
  String::parse_latin1((StrRange *)&local_c8);
  local_a8 = (wchar_t *)CONCAT44(local_a8._4_4_,3);
  local_a0 = 0;
  if (local_c8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_a0,(CowData *)&local_c8);
  }
  local_98 = 0;
  local_90 = 1;
  local_88 = 0;
  if (local_c0 == 0) {
LAB_001034a8:
    local_80 = 6;
    StringName::operator=((StringName *)&local_98,(StringName *)&local_b8);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_88,(CowData *)&local_c0);
    local_80 = 6;
    if (local_90 != 0x11) goto LAB_001034a8;
    StringName::StringName((StringName *)&local_b0,(String *)&local_88,false);
    if (local_98 == local_b0) {
      if ((StringName::configured != '\0') && (local_b0 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_98 = local_b0;
    }
  }
  _GLOBAL_DEF((PropertyInfo *)local_58,(Variant *)&local_a8,bVar7,false,false,false);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  if ((StringName::configured != '\0') && (local_b8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_78,_LC61);
  local_b8 = 0;
  local_c0 = 0;
  puVar4 = &_LC37;
  do {
    puVar5 = puVar4;
    puVar4 = puVar5 + 4;
  } while (*(int *)(puVar5 + 4) != 0);
  local_a8 = L"0,1,0.01";
  local_a0 = (long)(puVar5 + -0x106d2c) >> 2;
  String::parse_utf32((StrRange *)&local_c0);
  local_c8 = 0;
  local_a8 = L"physics/jolt_physics_3d/simulation/continuous_cd_max_penetration";
  local_a0 = 0x40;
  String::parse_latin1((StrRange *)&local_c8);
  local_a8 = (wchar_t *)CONCAT44(local_a8._4_4_,3);
  local_a0 = 0;
  if (local_c8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_a0,(CowData *)&local_c8);
  }
  local_98 = 0;
  local_90 = 1;
  local_88 = 0;
  if (local_c0 == 0) {
LAB_00103668:
    local_80 = 6;
    StringName::operator=((StringName *)&local_98,(StringName *)&local_b8);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_88,(CowData *)&local_c0);
    local_80 = 6;
    if (local_90 != 0x11) goto LAB_00103668;
    StringName::StringName((StringName *)&local_b0,(String *)&local_88,false);
    if (local_98 == local_b0) {
      if ((StringName::configured != '\0') && (local_b0 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_98 = local_b0;
    }
  }
  _GLOBAL_DEF((PropertyInfo *)local_58,(Variant *)&local_a8,bVar7,false,false,false);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  if ((StringName::configured != '\0') && (local_b8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_78,true);
  local_a8 = (wchar_t *)&_LC54;
  local_b8 = 0;
  local_c0 = 0;
  local_a0 = 0;
  String::parse_latin1((StrRange *)&local_c0);
  local_c8 = 0;
  local_a8 = L"physics/jolt_physics_3d/simulation/body_pair_contact_cache_enabled";
  local_a0 = 0x42;
  String::parse_latin1((StrRange *)&local_c8);
  local_a8 = (wchar_t *)CONCAT44(local_a8._4_4_,1);
  local_a0 = 0;
  if (local_c8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_a0,(CowData *)&local_c8);
  }
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  if (local_c0 == 0) {
LAB_00103810:
    local_80 = 6;
    StringName::operator=((StringName *)&local_98,(StringName *)&local_b8);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_88,(CowData *)&local_c0);
    local_80 = 6;
    if (local_90 != 0x11) goto LAB_00103810;
    StringName::StringName((StringName *)&local_b0,(String *)&local_88,false);
    if (local_98 == local_b0) {
      if ((StringName::configured != '\0') && (local_b0 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_98 = local_b0;
    }
  }
  _GLOBAL_DEF((PropertyInfo *)local_58,(Variant *)&local_a8,bVar7,false,false,false);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  if ((StringName::configured != '\0') && (local_b8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_78,_LC62);
  local_b8 = 0;
  local_c0 = 0;
  pwVar3 = L"0,0.01,0.00001,or_greater,suffix:m";
  do {
    pwVar6 = pwVar3;
    pwVar3 = pwVar6 + 1;
  } while (pwVar6[1] != L'\0');
  local_a8 = L"0,0.01,0.00001,or_greater,suffix:m";
  local_a0 = (long)(pwVar6 + -0x41bb1) >> 2;
  String::parse_utf32((StrRange *)&local_c0);
  local_c8 = 0;
  local_a8 = L"physics/jolt_physics_3d/simulation/body_pair_contact_cache_distance_threshold";
  local_a0 = 0x4d;
  String::parse_latin1((StrRange *)&local_c8);
  local_a8 = (wchar_t *)CONCAT44(local_a8._4_4_,3);
  local_a0 = 0;
  if (local_c8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_a0,(CowData *)&local_c8);
  }
  local_98 = 0;
  local_90 = 1;
  local_88 = 0;
  if (local_c0 == 0) {
LAB_001039c8:
    local_80 = 6;
    StringName::operator=((StringName *)&local_98,(StringName *)&local_b8);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_88,(CowData *)&local_c0);
    local_80 = 6;
    if (local_90 != 0x11) goto LAB_001039c8;
    StringName::StringName((StringName *)&local_b0,(String *)&local_88,false);
    if (local_98 == local_b0) {
      if ((StringName::configured != '\0') && (local_b0 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_98 = local_b0;
    }
  }
  _GLOBAL_DEF((PropertyInfo *)local_58,(Variant *)&local_a8,bVar7,false,false,false);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  lVar2 = local_88;
  if (local_88 != 0) {
    LOCK();
    plVar1 = (long *)(local_88 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_88 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_98 != 0)) {
    StringName::unref();
  }
  lVar2 = local_a0;
  if (local_a0 != 0) {
    LOCK();
    plVar1 = (long *)(local_a0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_a0 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  if ((StringName::configured != '\0') && (local_b8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_78,_LC63);
  local_b8 = 0;
  local_c0 = 0;
  pwVar3 = L"0,180,0.01,radians_as_degrees";
  do {
    pwVar6 = pwVar3;
    pwVar3 = pwVar6 + 1;
  } while (pwVar6[1] != L'\0');
  local_a8 = L"0,180,0.01,radians_as_degrees";
  local_a0 = (long)(pwVar6 + -0x41bd5) >> 2;
  String::parse_utf32((StrRange *)&local_c0);
  local_c8 = 0;
  local_a8 = L"physics/jolt_physics_3d/simulation/body_pair_contact_cache_angle_threshold";
  local_a0 = 0x4a;
  String::parse_latin1((StrRange *)&local_c8);
  local_a8 = (wchar_t *)CONCAT44(local_a8._4_4_,3);
  local_a0 = 0;
  if (local_c8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_a0,(CowData *)&local_c8);
  }
  local_98 = 0;
  local_90 = 1;
  local_88 = 0;
  if (local_c0 == 0) {
LAB_00103bc8:
    local_80 = 6;
    StringName::operator=((StringName *)&local_98,(StringName *)&local_b8);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_88,(CowData *)&local_c0);
    local_80 = 6;
    if (local_90 != 0x11) goto LAB_00103bc8;
    StringName::StringName((StringName *)&local_b0,(String *)&local_88,false);
    if (local_98 == local_b0) {
      if ((StringName::configured != '\0') && (local_b0 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_98 = local_b0;
    }
  }
  _GLOBAL_DEF((PropertyInfo *)local_58,(Variant *)&local_a8,bVar7,false,false,false);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  if ((StringName::configured != '\0') && (local_b8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_78,false);
  local_a8 = (wchar_t *)&_LC54;
  local_b8 = 0;
  local_c0 = 0;
  local_a0 = 0;
  String::parse_latin1((StrRange *)&local_c0);
  local_c8 = 0;
  local_a8 = L"physics/jolt_physics_3d/queries/use_enhanced_internal_edge_removal";
  local_a0 = 0x42;
  String::parse_latin1((StrRange *)&local_c8);
  local_a8 = (wchar_t *)CONCAT44(local_a8._4_4_,1);
  local_a0 = 0;
  if (local_c8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_a0,(CowData *)&local_c8);
  }
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  if (local_c0 == 0) {
LAB_00103d68:
    local_80 = 6;
    StringName::operator=((StringName *)&local_98,(StringName *)&local_b8);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_88,(CowData *)&local_c0);
    local_80 = 6;
    if (local_90 != 0x11) goto LAB_00103d68;
    StringName::StringName((StringName *)&local_b0,(String *)&local_88,false);
    if (local_98 == local_b0) {
      if ((StringName::configured != '\0') && (local_b0 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_98 = local_b0;
    }
  }
  _GLOBAL_DEF((PropertyInfo *)local_58,(Variant *)&local_a8,bVar7,false,false,false);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  lVar2 = local_88;
  if (local_88 != 0) {
    LOCK();
    plVar1 = (long *)(local_88 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_88 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_98 != 0)) {
    StringName::unref();
  }
  lVar2 = local_a0;
  if (local_a0 != 0) {
    LOCK();
    plVar1 = (long *)(local_a0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_a0 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  if ((StringName::configured != '\0') && (local_b8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_78,false);
  local_a8 = (wchar_t *)&_LC54;
  local_b8 = 0;
  local_c0 = 0;
  local_a0 = 0;
  String::parse_latin1((StrRange *)&local_c0);
  local_c8 = 0;
  local_a8 = L"physics/jolt_physics_3d/queries/enable_ray_cast_face_index";
  local_a0 = 0x3a;
  String::parse_latin1((StrRange *)&local_c8);
  local_a8 = (wchar_t *)CONCAT44(local_a8._4_4_,1);
  local_a0 = 0;
  if (local_c8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_a0,(CowData *)&local_c8);
  }
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  if (local_c0 == 0) {
LAB_00103f48:
    local_80 = 6;
    StringName::operator=((StringName *)&local_98,(StringName *)&local_b8);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_88,(CowData *)&local_c0);
    local_80 = 6;
    if (local_90 != 0x11) goto LAB_00103f48;
    StringName::StringName((StringName *)&local_b0,(String *)&local_88,false);
    if (local_98 == local_b0) {
      if ((StringName::configured != '\0') && (local_b0 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_98 = local_b0;
    }
  }
  _GLOBAL_DEF((PropertyInfo *)local_58,(Variant *)&local_a8,bVar7,true,false,false);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  if ((StringName::configured != '\0') && (local_b8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_78,true);
  local_a8 = (wchar_t *)&_LC54;
  local_b8 = 0;
  local_c0 = 0;
  local_a0 = 0;
  String::parse_latin1((StrRange *)&local_c0);
  local_c8 = 0;
  local_a8 = L"physics/jolt_physics_3d/motion_queries/use_enhanced_internal_edge_removal";
  local_a0 = 0x49;
  String::parse_latin1((StrRange *)&local_c8);
  local_a8 = (wchar_t *)CONCAT44(local_a8._4_4_,1);
  local_a0 = 0;
  if (local_c8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_a0,(CowData *)&local_c8);
  }
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  if (local_c0 == 0) {
LAB_001040f0:
    local_80 = 6;
    StringName::operator=((StringName *)&local_98,(StringName *)&local_b8);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_88,(CowData *)&local_c0);
    local_80 = 6;
    if (local_90 != 0x11) goto LAB_001040f0;
    StringName::StringName((StringName *)&local_b0,(String *)&local_88,false);
    if (local_98 == local_b0) {
      if ((StringName::configured != '\0') && (local_b0 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_98 = local_b0;
    }
  }
  _GLOBAL_DEF((PropertyInfo *)local_58,(Variant *)&local_a8,bVar7,false,false,false);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  lVar2 = local_88;
  if (local_88 != 0) {
    LOCK();
    plVar1 = (long *)(local_88 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_88 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_98 != 0)) {
    StringName::unref();
  }
  lVar2 = local_a0;
  if (local_a0 != 0) {
    LOCK();
    plVar1 = (long *)(local_a0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_a0 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  if ((StringName::configured != '\0') && (local_b8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_78,4);
  local_b8 = 0;
  local_c0 = 0;
  pwVar3 = L"1,8,or_greater";
  do {
    pwVar6 = pwVar3;
    pwVar3 = pwVar6 + 1;
  } while (pwVar6[1] != L'\0');
  local_a8 = L"1,8,or_greater";
  local_a0 = (long)(pwVar6 + -0x41bf3) >> 2;
  String::parse_utf32((StrRange *)&local_c0);
  local_c8 = 0;
  local_a8 = L"physics/jolt_physics_3d/motion_queries/recovery_iterations";
  local_a0 = 0x3a;
  String::parse_latin1((StrRange *)&local_c8);
  local_a8 = (wchar_t *)CONCAT44(local_a8._4_4_,2);
  local_a0 = 0;
  if (local_c8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_a0,(CowData *)&local_c8);
  }
  local_98 = 0;
  local_90 = 1;
  local_88 = 0;
  if (local_c0 == 0) {
LAB_001042e8:
    local_80 = 6;
    StringName::operator=((StringName *)&local_98,(StringName *)&local_b8);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_88,(CowData *)&local_c0);
    local_80 = 6;
    if (local_90 != 0x11) goto LAB_001042e8;
    StringName::StringName((StringName *)&local_b0,(String *)&local_88,false);
    if (local_98 == local_b0) {
      if ((StringName::configured != '\0') && (local_b0 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_98 = local_b0;
    }
  }
  _GLOBAL_DEF((PropertyInfo *)local_58,(Variant *)&local_a8,bVar7,false,false,false);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  if ((StringName::configured != '\0') && (local_b8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_78,_LC64);
  local_b8 = 0;
  local_c0 = 0;
  puVar4 = &_LC37;
  do {
    puVar5 = puVar4;
    puVar4 = puVar5 + 4;
  } while (*(int *)(puVar5 + 4) != 0);
  local_a8 = L"0,1,0.01";
  local_a0 = (long)(puVar5 + -0x106d2c) >> 2;
  String::parse_utf32((StrRange *)&local_c0);
  local_c8 = 0;
  local_a8 = L"physics/jolt_physics_3d/motion_queries/recovery_amount";
  local_a0 = 0x36;
  String::parse_latin1((StrRange *)&local_c8);
  local_a8 = (wchar_t *)CONCAT44(local_a8._4_4_,3);
  local_a0 = 0;
  if (local_c8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_a0,(CowData *)&local_c8);
  }
  local_98 = 0;
  local_90 = 1;
  local_88 = 0;
  if (local_c0 == 0) {
LAB_001044a8:
    local_80 = 6;
    StringName::operator=((StringName *)&local_98,(StringName *)&local_b8);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_88,(CowData *)&local_c0);
    local_80 = 6;
    if (local_90 != 0x11) goto LAB_001044a8;
    StringName::StringName((StringName *)&local_b0,(String *)&local_88,false);
    if (local_98 == local_b0) {
      if ((StringName::configured != '\0') && (local_b0 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_98 = local_b0;
    }
  }
  _GLOBAL_DEF((PropertyInfo *)local_58,(Variant *)&local_a8,bVar7,false,false,false);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  lVar2 = local_88;
  if (local_88 != 0) {
    LOCK();
    plVar1 = (long *)(local_88 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_88 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_98 != 0)) {
    StringName::unref();
  }
  lVar2 = local_a0;
  if (local_a0 != 0) {
    LOCK();
    plVar1 = (long *)(local_a0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_a0 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  if ((StringName::configured != '\0') && (local_b8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_78,_LC65);
  local_b8 = 0;
  local_c0 = 0;
  puVar4 = &_LC44;
  do {
    puVar5 = puVar4;
    puVar4 = puVar5 + 4;
  } while (*(int *)(puVar5 + 4) != 0);
  local_a8 = L"0,1,0.00001";
  local_a0 = (long)(puVar5 + -0x10700c) >> 2;
  String::parse_utf32((StrRange *)&local_c0);
  local_c8 = 0;
  local_a8 = L"physics/jolt_physics_3d/collisions/collision_margin_fraction";
  local_a0 = 0x3c;
  String::parse_latin1((StrRange *)&local_c8);
  local_a8 = (wchar_t *)CONCAT44(local_a8._4_4_,3);
  local_a0 = 0;
  if (local_c8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_a0,(CowData *)&local_c8);
  }
  local_98 = 0;
  local_90 = 1;
  local_88 = 0;
  if (local_c0 == 0) {
LAB_001046a8:
    local_80 = 6;
    StringName::operator=((StringName *)&local_98,(StringName *)&local_b8);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_88,(CowData *)&local_c0);
    local_80 = 6;
    if (local_90 != 0x11) goto LAB_001046a8;
    StringName::StringName((StringName *)&local_b0,(String *)&local_88,false);
    if (local_98 == local_b0) {
      if ((StringName::configured != '\0') && (local_b0 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_98 = local_b0;
    }
  }
  _GLOBAL_DEF((PropertyInfo *)local_58,(Variant *)&local_a8,bVar7,false,false,false);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  if ((StringName::configured != '\0') && (local_b8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_78,_LC66);
  local_b8 = 0;
  local_c0 = 0;
  pwVar3 = L"0,90,0.01,radians_as_degrees";
  do {
    pwVar6 = pwVar3;
    pwVar3 = pwVar6 + 1;
  } while (pwVar6[1] != L'\0');
  local_a8 = L"0,90,0.01,radians_as_degrees";
  local_a0 = (long)(pwVar6 + -0x41c0f) >> 2;
  String::parse_utf32((StrRange *)&local_c0);
  local_c8 = 0;
  local_a8 = L"physics/jolt_physics_3d/collisions/active_edge_threshold";
  local_a0 = 0x38;
  String::parse_latin1((StrRange *)&local_c8);
  local_a8 = (wchar_t *)CONCAT44(local_a8._4_4_,3);
  local_a0 = 0;
  if (local_c8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_a0,(CowData *)&local_c8);
  }
  local_98 = 0;
  local_90 = 1;
  local_88 = 0;
  if (local_c0 == 0) {
LAB_00104868:
    local_80 = 6;
    StringName::operator=((StringName *)&local_98,(StringName *)&local_b8);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_88,(CowData *)&local_c0);
    local_80 = 6;
    if (local_90 != 0x11) goto LAB_00104868;
    StringName::StringName((StringName *)&local_b0,(String *)&local_88,false);
    if (local_98 == local_b0) {
      if ((StringName::configured != '\0') && (local_b0 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_98 = local_b0;
    }
  }
  _GLOBAL_DEF((PropertyInfo *)local_58,(Variant *)&local_a8,bVar7,false,false,false);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  if ((StringName::configured != '\0') && (local_b8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_78,0);
  local_b8 = 0;
  local_c0 = 0;
  pwVar3 = L"Node A,Node B";
  do {
    pwVar6 = pwVar3;
    pwVar3 = pwVar6 + 1;
  } while (pwVar6[1] != L'\0');
  local_a8 = L"Node A,Node B";
  local_a0 = (long)(pwVar6 + -0x41c2d) >> 2;
  String::parse_utf32((StrRange *)&local_c0);
  local_c8 = 0;
  local_a8 = L"physics/jolt_physics_3d/joints/world_node";
  local_a0 = 0x29;
  String::parse_latin1((StrRange *)&local_c8);
  local_a8 = (wchar_t *)CONCAT44(local_a8._4_4_,2);
  local_a0 = 0;
  if (local_c8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_a0,(CowData *)&local_c8);
  }
  local_98 = 0;
  local_90 = 2;
  local_88 = 0;
  if (local_c0 == 0) {
LAB_00104a20:
    local_80 = 6;
    StringName::operator=((StringName *)&local_98,(StringName *)&local_b8);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_88,(CowData *)&local_c0);
    local_80 = 6;
    if (local_90 != 0x11) goto LAB_00104a20;
    StringName::StringName((StringName *)&local_b0,(String *)&local_88,false);
    if (local_98 == local_b0) {
      if ((StringName::configured != '\0') && (local_b0 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_98 = local_b0;
    }
  }
  _GLOBAL_DEF((PropertyInfo *)local_58,(Variant *)&local_a8,bVar7,false,false,false);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  if ((StringName::configured != '\0') && (local_b8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_78,0x20);
  local_b8 = 0;
  local_c0 = 0;
  pwVar3 = L"1,32,or_greater,suffix:MiB";
  do {
    pwVar6 = pwVar3;
    pwVar3 = pwVar6 + 1;
  } while (pwVar6[1] != L'\0');
  local_a8 = L"1,32,or_greater,suffix:MiB";
  local_a0 = (long)(pwVar6 + -0x41c3b) >> 2;
  String::parse_utf32((StrRange *)&local_c0);
  local_c8 = 0;
  local_a8 = L"physics/jolt_physics_3d/limits/temporary_memory_buffer_size";
  local_a0 = 0x3b;
  String::parse_latin1((StrRange *)&local_c8);
  local_a8 = (wchar_t *)CONCAT44(local_a8._4_4_,2);
  local_a0 = 0;
  if (local_c8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_a0,(CowData *)&local_c8);
  }
  local_98 = 0;
  local_90 = 1;
  local_88 = 0;
  if (local_c0 == 0) {
LAB_00104bd8:
    local_80 = 6;
    StringName::operator=((StringName *)&local_98,(StringName *)&local_b8);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_88,(CowData *)&local_c0);
    local_80 = 6;
    if (local_90 != 0x11) goto LAB_00104bd8;
    StringName::StringName((StringName *)&local_b0,(String *)&local_88,false);
    if (local_98 == local_b0) {
      if ((StringName::configured != '\0') && (local_b0 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_98 = local_b0;
    }
  }
  _GLOBAL_DEF((PropertyInfo *)local_58,(Variant *)&local_a8,bVar7,false,false,false);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  if ((StringName::configured != '\0') && (local_b8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_78,_LC67);
  local_b8 = 0;
  local_c0 = 0;
  pwVar3 = L"2,2000,0.1,or_greater,suffix:m";
  do {
    pwVar6 = pwVar3;
    pwVar3 = pwVar6 + 1;
  } while (pwVar6[1] != L'\0');
  local_a8 = L"2,2000,0.1,or_greater,suffix:m";
  local_a0 = (long)(pwVar6 + -0x41c57) >> 2;
  String::parse_utf32((StrRange *)&local_c0);
  local_c8 = 0;
  local_a8 = L"physics/jolt_physics_3d/limits/world_boundary_shape_size";
  local_a0 = 0x38;
  String::parse_latin1((StrRange *)&local_c8);
  local_a8 = (wchar_t *)CONCAT44(local_a8._4_4_,3);
  local_a0 = 0;
  if (local_c8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_a0,(CowData *)&local_c8);
  }
  local_98 = 0;
  local_90 = 1;
  local_88 = 0;
  if (local_c0 == 0) {
LAB_00104d98:
    local_80 = 6;
    StringName::operator=((StringName *)&local_98,(StringName *)&local_b8);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_88,(CowData *)&local_c0);
    local_80 = 6;
    if (local_90 != 0x11) goto LAB_00104d98;
    StringName::StringName((StringName *)&local_b0,(String *)&local_88,false);
    if (local_98 == local_b0) {
      if ((StringName::configured != '\0') && (local_b0 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_98 = local_b0;
    }
  }
  _GLOBAL_DEF((PropertyInfo *)local_58,(Variant *)&local_a8,bVar7,true,false,false);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  if ((StringName::configured != '\0') && (local_b8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_78,_LC68);
  local_b8 = 0;
  local_c0 = 0;
  pwVar3 = L"0,500,0.01,or_greater,suffix:m/s";
  do {
    pwVar6 = pwVar3;
    pwVar3 = pwVar6 + 1;
  } while (pwVar6[1] != L'\0');
  local_a8 = L"0,500,0.01,or_greater,suffix:m/s";
  local_a0 = (long)(pwVar6 + -0x41c77) >> 2;
  String::parse_utf32((StrRange *)&local_c0);
  local_c8 = 0;
  local_a8 = L"physics/jolt_physics_3d/limits/max_linear_velocity";
  local_a0 = 0x32;
  String::parse_latin1((StrRange *)&local_c8);
  local_a8 = (wchar_t *)CONCAT44(local_a8._4_4_,3);
  local_a0 = 0;
  if (local_c8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_a0,(CowData *)&local_c8);
  }
  local_98 = 0;
  local_90 = 1;
  local_88 = 0;
  if (local_c0 == 0) {
LAB_00104f58:
    local_80 = 6;
    StringName::operator=((StringName *)&local_98,(StringName *)&local_b8);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_88,(CowData *)&local_c0);
    local_80 = 6;
    if (local_90 != 0x11) goto LAB_00104f58;
    StringName::StringName((StringName *)&local_b0,(String *)&local_88,false);
    if (local_98 == local_b0) {
      if ((StringName::configured != '\0') && (local_b0 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_98 = local_b0;
    }
  }
  _GLOBAL_DEF((PropertyInfo *)local_58,(Variant *)&local_a8,bVar7,false,false,false);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  lVar2 = local_88;
  if (local_88 != 0) {
    LOCK();
    plVar1 = (long *)(local_88 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_88 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_98 != 0)) {
    StringName::unref();
  }
  lVar2 = local_a0;
  if (local_a0 != 0) {
    LOCK();
    plVar1 = (long *)(local_a0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_a0 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  if ((StringName::configured != '\0') && (local_b8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_78,_LC69);
  local_b8 = 0;
  local_c0 = 0;
  puVar4 = &_LC50;
  do {
    puVar5 = puVar4;
    puVar4 = puVar5 + 4;
  } while (*(int *)(puVar5 + 4) != 0);
  local_a8 = L"0,2700,0.01,or_greater,radians_as_degrees,suffix:°/s";
  local_a0 = (long)(puVar5 + -0x107264) >> 2;
  String::parse_utf32((StrRange *)&local_c0);
  local_c8 = 0;
  local_a8 = L"physics/jolt_physics_3d/limits/max_angular_velocity";
  local_a0 = 0x33;
  String::parse_latin1((StrRange *)&local_c8);
  local_a8 = (wchar_t *)CONCAT44(local_a8._4_4_,3);
  local_a0 = 0;
  if (local_c8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_a0,(CowData *)&local_c8);
  }
  local_98 = 0;
  local_90 = 1;
  local_88 = 0;
  if (local_c0 == 0) {
LAB_00105158:
    local_80 = 6;
    StringName::operator=((StringName *)&local_98,(StringName *)&local_b8);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_88,(CowData *)&local_c0);
    local_80 = 6;
    if (local_90 != 0x11) goto LAB_00105158;
    StringName::StringName((StringName *)&local_b0,(String *)&local_88,false);
    if (local_98 == local_b0) {
      if ((StringName::configured != '\0') && (local_b0 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_98 = local_b0;
    }
  }
  _GLOBAL_DEF((PropertyInfo *)local_58,(Variant *)&local_a8,bVar7,false,false,false);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  lVar2 = local_88;
  if (local_88 != 0) {
    LOCK();
    plVar1 = (long *)(local_88 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_88 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_98 != 0)) {
    StringName::unref();
  }
  lVar2 = local_a0;
  if (local_a0 != 0) {
    LOCK();
    plVar1 = (long *)(local_a0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_a0 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  if ((StringName::configured != '\0') && (local_b8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_78,0x2800);
  local_b8 = 0;
  local_c0 = 0;
  pwVar3 = L"1,10240,or_greater";
  do {
    pwVar6 = pwVar3;
    pwVar3 = pwVar6 + 1;
  } while (pwVar6[1] != L'\0');
  local_a8 = L"1,10240,or_greater";
  local_a0 = (long)(pwVar6 + -0x41ccf) >> 2;
  String::parse_utf32((StrRange *)&local_c0);
  local_c8 = 0;
  local_a8 = L"physics/jolt_physics_3d/limits/max_bodies";
  local_a0 = 0x29;
  String::parse_latin1((StrRange *)&local_c8);
  local_a8 = (wchar_t *)CONCAT44(local_a8._4_4_,2);
  local_a0 = 0;
  if (local_c8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_a0,(CowData *)&local_c8);
  }
  local_98 = 0;
  local_90 = 1;
  local_88 = 0;
  if (local_c0 == 0) {
LAB_00105350:
    local_80 = 6;
    StringName::operator=((StringName *)&local_98,(StringName *)&local_b8);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_88,(CowData *)&local_c0);
    local_80 = 6;
    if (local_90 != 0x11) goto LAB_00105350;
    StringName::StringName((StringName *)&local_b0,(String *)&local_88,false);
    if (local_98 == local_b0) {
      if ((StringName::configured != '\0') && (local_b0 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_98 = local_b0;
    }
  }
  _GLOBAL_DEF((PropertyInfo *)local_58,(Variant *)&local_a8,bVar7,true,false,false);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  if ((StringName::configured != '\0') && (local_b8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_78,0x10000);
  local_b8 = 0;
  local_c0 = 0;
  pwVar3 = L"8,65536,or_greater";
  do {
    pwVar6 = pwVar3;
    pwVar3 = pwVar6 + 1;
  } while (pwVar6[1] != L'\0');
  local_a8 = L"8,65536,or_greater";
  local_a0 = (long)(pwVar6 + -0x41ce3) >> 2;
  String::parse_utf32((StrRange *)&local_c0);
  local_c8 = 0;
  local_a8 = L"physics/jolt_physics_3d/limits/max_body_pairs";
  local_a0 = 0x2d;
  String::parse_latin1((StrRange *)&local_c8);
  local_a8 = (wchar_t *)CONCAT44(local_a8._4_4_,2);
  local_a0 = 0;
  if (local_c8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_a0,(CowData *)&local_c8);
  }
  local_98 = 0;
  local_90 = 1;
  local_88 = 0;
  if (local_c0 == 0) {
LAB_00105518:
    local_80 = 6;
    StringName::operator=((StringName *)&local_98,(StringName *)&local_b8);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_88,(CowData *)&local_c0);
    local_80 = 6;
    if (local_90 != 0x11) goto LAB_00105518;
    StringName::StringName((StringName *)&local_b0,(String *)&local_88,false);
    if (local_98 == local_b0) {
      if ((StringName::configured != '\0') && (local_b0 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_98 = local_b0;
    }
  }
  _GLOBAL_DEF((PropertyInfo *)local_58,(Variant *)&local_a8,bVar7,false,false,false);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  if ((StringName::configured != '\0') && (local_b8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_78,0x5000);
  local_b8 = 0;
  local_c0 = 0;
  pwVar3 = L"8,20480,or_greater";
  do {
    pwVar6 = pwVar3;
    pwVar3 = pwVar6 + 1;
  } while (pwVar6[1] != L'\0');
  local_a8 = L"8,20480,or_greater";
  local_a0 = (long)(pwVar6 + -0x41cf7) >> 2;
  String::parse_utf32((StrRange *)&local_c0);
  local_c8 = 0;
  local_a8 = L"physics/jolt_physics_3d/limits/max_contact_constraints";
  local_a0 = 0x36;
  String::parse_latin1((StrRange *)&local_c8);
  local_a8 = (wchar_t *)CONCAT44(local_a8._4_4_,2);
  local_a0 = 0;
  if (local_c8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_a0,(CowData *)&local_c8);
  }
  local_98 = 0;
  local_90 = 1;
  local_88 = 0;
  if (local_c0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_88,(CowData *)&local_c0);
    local_80 = 6;
    if (local_90 == 0x11) {
      StringName::StringName((StringName *)&local_b0,(String *)&local_88,false);
      if (local_98 == local_b0) {
        if ((StringName::configured != '\0') && (local_b0 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_98 = local_b0;
      }
      goto LAB_001056df;
    }
  }
  local_80 = 6;
  StringName::operator=((StringName *)&local_98,(StringName *)&local_b8);
LAB_001056df:
  _GLOBAL_DEF((PropertyInfo *)local_58,(Variant *)&local_a8,bVar7,false,false,false);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  if ((StringName::configured != '\0') && (local_b8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
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



/* WARNING: Control flow encountered bad instruction data */
/* PropertyInfo::~PropertyInfo() */

void __thiscall PropertyInfo::~PropertyInfo(PropertyInfo *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



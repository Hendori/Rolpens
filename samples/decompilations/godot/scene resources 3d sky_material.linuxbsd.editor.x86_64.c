
/* ProceduralSkyMaterial::get_sky_top_color() const */

undefined1  [16] __thiscall ProceduralSkyMaterial::get_sky_top_color(ProceduralSkyMaterial *this)

{
  return *(undefined1 (*) [16])(this + 0x2b8);
}



/* ProceduralSkyMaterial::get_sky_horizon_color() const */

undefined1  [16] __thiscall
ProceduralSkyMaterial::get_sky_horizon_color(ProceduralSkyMaterial *this)

{
  return *(undefined1 (*) [16])(this + 0x2c8);
}



/* ProceduralSkyMaterial::get_sky_curve() const */

undefined4 __thiscall ProceduralSkyMaterial::get_sky_curve(ProceduralSkyMaterial *this)

{
  return *(undefined4 *)(this + 0x2d8);
}



/* ProceduralSkyMaterial::get_sky_energy_multiplier() const */

undefined4 __thiscall ProceduralSkyMaterial::get_sky_energy_multiplier(ProceduralSkyMaterial *this)

{
  return *(undefined4 *)(this + 0x2dc);
}



/* ProceduralSkyMaterial::get_sky_cover_modulate() const */

undefined1  [16] __thiscall
ProceduralSkyMaterial::get_sky_cover_modulate(ProceduralSkyMaterial *this)

{
  return *(undefined1 (*) [16])(this + 0x2e8);
}



/* ProceduralSkyMaterial::get_ground_bottom_color() const */

undefined1  [16] __thiscall
ProceduralSkyMaterial::get_ground_bottom_color(ProceduralSkyMaterial *this)

{
  return *(undefined1 (*) [16])(this + 0x2f8);
}



/* ProceduralSkyMaterial::get_ground_horizon_color() const */

undefined1  [16] __thiscall
ProceduralSkyMaterial::get_ground_horizon_color(ProceduralSkyMaterial *this)

{
  return *(undefined1 (*) [16])(this + 0x308);
}



/* ProceduralSkyMaterial::get_ground_curve() const */

undefined4 __thiscall ProceduralSkyMaterial::get_ground_curve(ProceduralSkyMaterial *this)

{
  return *(undefined4 *)(this + 0x318);
}



/* ProceduralSkyMaterial::get_ground_energy_multiplier() const */

undefined4 __thiscall
ProceduralSkyMaterial::get_ground_energy_multiplier(ProceduralSkyMaterial *this)

{
  return *(undefined4 *)(this + 0x31c);
}



/* ProceduralSkyMaterial::get_sun_angle_max() const */

undefined4 __thiscall ProceduralSkyMaterial::get_sun_angle_max(ProceduralSkyMaterial *this)

{
  return *(undefined4 *)(this + 800);
}



/* ProceduralSkyMaterial::get_sun_curve() const */

undefined4 __thiscall ProceduralSkyMaterial::get_sun_curve(ProceduralSkyMaterial *this)

{
  return *(undefined4 *)(this + 0x324);
}



/* ProceduralSkyMaterial::get_use_debanding() const */

ProceduralSkyMaterial __thiscall
ProceduralSkyMaterial::get_use_debanding(ProceduralSkyMaterial *this)

{
  return this[0x328];
}



/* ProceduralSkyMaterial::get_energy_multiplier() const */

undefined4 __thiscall ProceduralSkyMaterial::get_energy_multiplier(ProceduralSkyMaterial *this)

{
  return *(undefined4 *)(this + 0x32c);
}



/* PanoramaSkyMaterial::get_shader_mode() const */

undefined8 PanoramaSkyMaterial::get_shader_mode(void)

{
  return 3;
}



/* PanoramaSkyMaterial::is_filtering_enabled() const */

PanoramaSkyMaterial __thiscall PanoramaSkyMaterial::is_filtering_enabled(PanoramaSkyMaterial *this)

{
  return this[0x2c5];
}



/* PanoramaSkyMaterial::get_energy_multiplier() const */

undefined4 __thiscall PanoramaSkyMaterial::get_energy_multiplier(PanoramaSkyMaterial *this)

{
  return *(undefined4 *)(this + 0x2c0);
}



/* PhysicalSkyMaterial::get_rayleigh_coefficient() const */

undefined4 __thiscall PhysicalSkyMaterial::get_rayleigh_coefficient(PhysicalSkyMaterial *this)

{
  return *(undefined4 *)(this + 0x2b8);
}



/* PhysicalSkyMaterial::get_rayleigh_color() const */

undefined1  [16] __thiscall PhysicalSkyMaterial::get_rayleigh_color(PhysicalSkyMaterial *this)

{
  return *(undefined1 (*) [16])(this + 700);
}



/* PhysicalSkyMaterial::get_mie_coefficient() const */

undefined4 __thiscall PhysicalSkyMaterial::get_mie_coefficient(PhysicalSkyMaterial *this)

{
  return *(undefined4 *)(this + 0x2cc);
}



/* PhysicalSkyMaterial::get_mie_eccentricity() const */

undefined4 __thiscall PhysicalSkyMaterial::get_mie_eccentricity(PhysicalSkyMaterial *this)

{
  return *(undefined4 *)(this + 0x2d0);
}



/* PhysicalSkyMaterial::get_mie_color() const */

undefined1  [16] __thiscall PhysicalSkyMaterial::get_mie_color(PhysicalSkyMaterial *this)

{
  return *(undefined1 (*) [16])(this + 0x2d4);
}



/* PhysicalSkyMaterial::get_turbidity() const */

undefined4 __thiscall PhysicalSkyMaterial::get_turbidity(PhysicalSkyMaterial *this)

{
  return *(undefined4 *)(this + 0x2e4);
}



/* PhysicalSkyMaterial::get_sun_disk_scale() const */

undefined4 __thiscall PhysicalSkyMaterial::get_sun_disk_scale(PhysicalSkyMaterial *this)

{
  return *(undefined4 *)(this + 0x2e8);
}



/* PhysicalSkyMaterial::get_ground_color() const */

undefined1  [16] __thiscall PhysicalSkyMaterial::get_ground_color(PhysicalSkyMaterial *this)

{
  return *(undefined1 (*) [16])(this + 0x2ec);
}



/* PhysicalSkyMaterial::get_energy_multiplier() const */

undefined4 __thiscall PhysicalSkyMaterial::get_energy_multiplier(PhysicalSkyMaterial *this)

{
  return *(undefined4 *)(this + 0x2fc);
}



/* PhysicalSkyMaterial::get_use_debanding() const */

PhysicalSkyMaterial __thiscall PhysicalSkyMaterial::get_use_debanding(PhysicalSkyMaterial *this)

{
  return this[0x300];
}



/* ProceduralSkyMaterial::set_sky_top_color(Color const&) */

void __thiscall ProceduralSkyMaterial::set_sky_top_color(ProceduralSkyMaterial *this,Color *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  long *plVar3;
  long in_FS_OFFSET;
  long local_50;
  int local_48 [6];
  long local_30;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(this + 0x2b8) = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x2c0) = uVar2;
  plVar3 = (long *)RenderingServer::get_singleton();
  pcVar1 = *(code **)(*plVar3 + 0x2a8);
  Variant::Variant((Variant *)local_48,(Color *)(this + 0x2b8));
  StringName::StringName((StringName *)&local_50,"sky_top_color",false);
  (*pcVar1)(plVar3,*(undefined8 *)(this + 0x240),(StringName *)&local_50,(Variant *)local_48);
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ProceduralSkyMaterial::set_sky_horizon_color(Color const&) */

void __thiscall
ProceduralSkyMaterial::set_sky_horizon_color(ProceduralSkyMaterial *this,Color *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  long *plVar3;
  long in_FS_OFFSET;
  long local_50;
  int local_48 [6];
  long local_30;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(this + 0x2c8) = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x2d0) = uVar2;
  plVar3 = (long *)RenderingServer::get_singleton();
  pcVar1 = *(code **)(*plVar3 + 0x2a8);
  Variant::Variant((Variant *)local_48,(Color *)(this + 0x2c8));
  StringName::StringName((StringName *)&local_50,"sky_horizon_color",false);
  (*pcVar1)(plVar3,*(undefined8 *)(this + 0x240),(StringName *)&local_50,(Variant *)local_48);
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ProceduralSkyMaterial::set_sky_cover_modulate(Color const&) */

void __thiscall
ProceduralSkyMaterial::set_sky_cover_modulate(ProceduralSkyMaterial *this,Color *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  long *plVar3;
  long in_FS_OFFSET;
  long local_50;
  int local_48 [6];
  long local_30;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(this + 0x2e8) = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x2f0) = uVar2;
  plVar3 = (long *)RenderingServer::get_singleton();
  pcVar1 = *(code **)(*plVar3 + 0x2a8);
  Variant::Variant((Variant *)local_48,(Color *)(this + 0x2e8));
  StringName::StringName((StringName *)&local_50,"sky_cover_modulate",false);
  (*pcVar1)(plVar3,*(undefined8 *)(this + 0x240),(StringName *)&local_50,(Variant *)local_48);
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ProceduralSkyMaterial::set_ground_bottom_color(Color const&) */

void __thiscall
ProceduralSkyMaterial::set_ground_bottom_color(ProceduralSkyMaterial *this,Color *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  long *plVar3;
  long in_FS_OFFSET;
  long local_50;
  int local_48 [6];
  long local_30;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(this + 0x2f8) = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x300) = uVar2;
  plVar3 = (long *)RenderingServer::get_singleton();
  pcVar1 = *(code **)(*plVar3 + 0x2a8);
  Variant::Variant((Variant *)local_48,(Color *)(this + 0x2f8));
  StringName::StringName((StringName *)&local_50,"ground_bottom_color",false);
  (*pcVar1)(plVar3,*(undefined8 *)(this + 0x240),(StringName *)&local_50,(Variant *)local_48);
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ProceduralSkyMaterial::set_ground_horizon_color(Color const&) */

void __thiscall
ProceduralSkyMaterial::set_ground_horizon_color(ProceduralSkyMaterial *this,Color *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  long *plVar3;
  long in_FS_OFFSET;
  long local_50;
  int local_48 [6];
  long local_30;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(this + 0x308) = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x310) = uVar2;
  plVar3 = (long *)RenderingServer::get_singleton();
  pcVar1 = *(code **)(*plVar3 + 0x2a8);
  Variant::Variant((Variant *)local_48,(Color *)(this + 0x308));
  StringName::StringName((StringName *)&local_50,"ground_horizon_color",false);
  (*pcVar1)(plVar3,*(undefined8 *)(this + 0x240),(StringName *)&local_50,(Variant *)local_48);
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PhysicalSkyMaterial::set_rayleigh_color(Color) */

void PhysicalSkyMaterial::set_rayleigh_color(undefined8 param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  long local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(param_3 + 700) = param_1;
  *(undefined8 *)(param_3 + 0x2c4) = param_2;
  plVar2 = (long *)RenderingServer::get_singleton();
  pcVar1 = *(code **)(*plVar2 + 0x2a8);
  Variant::Variant((Variant *)local_48,(Color *)(param_3 + 700));
  StringName::StringName((StringName *)&local_50,"rayleigh_color",false);
  (*pcVar1)(plVar2,*(undefined8 *)(param_3 + 0x240),(StringName *)&local_50,(Variant *)local_48);
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PhysicalSkyMaterial::set_mie_color(Color) */

void PhysicalSkyMaterial::set_mie_color(undefined8 param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  long local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(param_3 + 0x2d4) = param_1;
  *(undefined8 *)(param_3 + 0x2dc) = param_2;
  plVar2 = (long *)RenderingServer::get_singleton();
  pcVar1 = *(code **)(*plVar2 + 0x2a8);
  Variant::Variant((Variant *)local_48,(Color *)(param_3 + 0x2d4));
  StringName::StringName((StringName *)&local_50,"mie_color",false);
  (*pcVar1)(plVar2,*(undefined8 *)(param_3 + 0x240),(StringName *)&local_50,(Variant *)local_48);
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PhysicalSkyMaterial::set_ground_color(Color) */

void PhysicalSkyMaterial::set_ground_color(undefined8 param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  long local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(param_3 + 0x2ec) = param_1;
  *(undefined8 *)(param_3 + 0x2f4) = param_2;
  plVar2 = (long *)RenderingServer::get_singleton();
  pcVar1 = *(code **)(*plVar2 + 0x2a8);
  Variant::Variant((Variant *)local_48,(Color *)(param_3 + 0x2ec));
  StringName::StringName((StringName *)&local_50,"ground_color",false);
  (*pcVar1)(plVar2,*(undefined8 *)(param_3 + 0x240),(StringName *)&local_50,(Variant *)local_48);
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ProceduralSkyMaterial::set_sky_curve(float) */

void __thiscall ProceduralSkyMaterial::set_sky_curve(ProceduralSkyMaterial *this,float param_1)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  long local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(float *)(this + 0x2d8) = param_1;
  plVar2 = (long *)RenderingServer::get_singleton();
  pcVar1 = *(code **)(*plVar2 + 0x2a8);
  Variant::Variant((Variant *)local_48,*(float *)(this + 0x2d8));
  StringName::StringName((StringName *)&local_50,"sky_curve",false);
  (*pcVar1)(plVar2,*(undefined8 *)(this + 0x240),(StringName *)&local_50,(Variant *)local_48);
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ProceduralSkyMaterial::set_sky_energy_multiplier(float) */

void __thiscall
ProceduralSkyMaterial::set_sky_energy_multiplier(ProceduralSkyMaterial *this,float param_1)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  long local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(float *)(this + 0x2dc) = param_1;
  plVar2 = (long *)RenderingServer::get_singleton();
  pcVar1 = *(code **)(*plVar2 + 0x2a8);
  Variant::Variant((Variant *)local_48,*(float *)(this + 0x2dc));
  StringName::StringName((StringName *)&local_50,"sky_energy",false);
  (*pcVar1)(plVar2,*(undefined8 *)(this + 0x240),(StringName *)&local_50,(Variant *)local_48);
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ProceduralSkyMaterial::set_ground_curve(float) */

void __thiscall ProceduralSkyMaterial::set_ground_curve(ProceduralSkyMaterial *this,float param_1)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  long local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(float *)(this + 0x318) = param_1;
  plVar2 = (long *)RenderingServer::get_singleton();
  pcVar1 = *(code **)(*plVar2 + 0x2a8);
  Variant::Variant((Variant *)local_48,*(float *)(this + 0x318));
  StringName::StringName((StringName *)&local_50,"ground_curve",false);
  (*pcVar1)(plVar2,*(undefined8 *)(this + 0x240),(StringName *)&local_50,(Variant *)local_48);
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ProceduralSkyMaterial::set_ground_energy_multiplier(float) */

void __thiscall
ProceduralSkyMaterial::set_ground_energy_multiplier(ProceduralSkyMaterial *this,float param_1)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  long local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(float *)(this + 0x31c) = param_1;
  plVar2 = (long *)RenderingServer::get_singleton();
  pcVar1 = *(code **)(*plVar2 + 0x2a8);
  Variant::Variant((Variant *)local_48,*(float *)(this + 0x31c));
  StringName::StringName((StringName *)&local_50,"ground_energy",false);
  (*pcVar1)(plVar2,*(undefined8 *)(this + 0x240),(StringName *)&local_50,(Variant *)local_48);
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ProceduralSkyMaterial::set_sun_angle_max(float) */

void __thiscall ProceduralSkyMaterial::set_sun_angle_max(ProceduralSkyMaterial *this,float param_1)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  long local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(float *)(this + 800) = param_1;
  plVar2 = (long *)RenderingServer::get_singleton();
  pcVar1 = *(code **)(*plVar2 + 0x2a8);
  Variant::Variant((Variant *)local_48,_LC12 * *(float *)(this + 800));
  StringName::StringName((StringName *)&local_50,"sun_angle_max",false);
  (*pcVar1)(plVar2,*(undefined8 *)(this + 0x240),(StringName *)&local_50,(Variant *)local_48);
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ProceduralSkyMaterial::set_sun_curve(float) */

void __thiscall ProceduralSkyMaterial::set_sun_curve(ProceduralSkyMaterial *this,float param_1)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  long local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(float *)(this + 0x324) = param_1;
  plVar2 = (long *)RenderingServer::get_singleton();
  pcVar1 = *(code **)(*plVar2 + 0x2a8);
  Variant::Variant((Variant *)local_48,*(float *)(this + 0x324));
  StringName::StringName((StringName *)&local_50,"sun_curve",false);
  (*pcVar1)(plVar2,*(undefined8 *)(this + 0x240),(StringName *)&local_50,(Variant *)local_48);
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ProceduralSkyMaterial::set_energy_multiplier(float) */

void __thiscall
ProceduralSkyMaterial::set_energy_multiplier(ProceduralSkyMaterial *this,float param_1)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  long local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(float *)(this + 0x32c) = param_1;
  plVar2 = (long *)RenderingServer::get_singleton();
  pcVar1 = *(code **)(*plVar2 + 0x2a8);
  Variant::Variant((Variant *)local_48,*(float *)(this + 0x32c));
  StringName::StringName((StringName *)&local_50,"exposure",false);
  (*pcVar1)(plVar2,*(undefined8 *)(this + 0x240),(StringName *)&local_50,(Variant *)local_48);
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PanoramaSkyMaterial::set_energy_multiplier(float) */

void __thiscall PanoramaSkyMaterial::set_energy_multiplier(PanoramaSkyMaterial *this,float param_1)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  long local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(float *)(this + 0x2c0) = param_1;
  plVar2 = (long *)RenderingServer::get_singleton();
  pcVar1 = *(code **)(*plVar2 + 0x2a8);
  Variant::Variant((Variant *)local_48,*(float *)(this + 0x2c0));
  StringName::StringName((StringName *)&local_50,"exposure",false);
  (*pcVar1)(plVar2,*(undefined8 *)(this + 0x240),(StringName *)&local_50,(Variant *)local_48);
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PhysicalSkyMaterial::set_rayleigh_coefficient(float) */

void __thiscall
PhysicalSkyMaterial::set_rayleigh_coefficient(PhysicalSkyMaterial *this,float param_1)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  long local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(float *)(this + 0x2b8) = param_1;
  plVar2 = (long *)RenderingServer::get_singleton();
  pcVar1 = *(code **)(*plVar2 + 0x2a8);
  Variant::Variant((Variant *)local_48,*(float *)(this + 0x2b8));
  StringName::StringName((StringName *)&local_50,"rayleigh",false);
  (*pcVar1)(plVar2,*(undefined8 *)(this + 0x240),(StringName *)&local_50,(Variant *)local_48);
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PhysicalSkyMaterial::set_mie_coefficient(float) */

void __thiscall PhysicalSkyMaterial::set_mie_coefficient(PhysicalSkyMaterial *this,float param_1)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  long local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(float *)(this + 0x2cc) = param_1;
  plVar2 = (long *)RenderingServer::get_singleton();
  pcVar1 = *(code **)(*plVar2 + 0x2a8);
  Variant::Variant((Variant *)local_48,*(float *)(this + 0x2cc));
  StringName::StringName((StringName *)&local_50,"mie",false);
  (*pcVar1)(plVar2,*(undefined8 *)(this + 0x240),(StringName *)&local_50,(Variant *)local_48);
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PhysicalSkyMaterial::set_mie_eccentricity(float) */

void __thiscall PhysicalSkyMaterial::set_mie_eccentricity(PhysicalSkyMaterial *this,float param_1)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  long local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(float *)(this + 0x2d0) = param_1;
  plVar2 = (long *)RenderingServer::get_singleton();
  pcVar1 = *(code **)(*plVar2 + 0x2a8);
  Variant::Variant((Variant *)local_48,*(float *)(this + 0x2d0));
  StringName::StringName((StringName *)&local_50,"mie_eccentricity",false);
  (*pcVar1)(plVar2,*(undefined8 *)(this + 0x240),(StringName *)&local_50,(Variant *)local_48);
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PhysicalSkyMaterial::set_turbidity(float) */

void __thiscall PhysicalSkyMaterial::set_turbidity(PhysicalSkyMaterial *this,float param_1)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  long local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(float *)(this + 0x2e4) = param_1;
  plVar2 = (long *)RenderingServer::get_singleton();
  pcVar1 = *(code **)(*plVar2 + 0x2a8);
  Variant::Variant((Variant *)local_48,*(float *)(this + 0x2e4));
  StringName::StringName((StringName *)&local_50,"turbidity",false);
  (*pcVar1)(plVar2,*(undefined8 *)(this + 0x240),(StringName *)&local_50,(Variant *)local_48);
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PhysicalSkyMaterial::set_sun_disk_scale(float) */

void __thiscall PhysicalSkyMaterial::set_sun_disk_scale(PhysicalSkyMaterial *this,float param_1)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  long local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(float *)(this + 0x2e8) = param_1;
  plVar2 = (long *)RenderingServer::get_singleton();
  pcVar1 = *(code **)(*plVar2 + 0x2a8);
  Variant::Variant((Variant *)local_48,*(float *)(this + 0x2e8));
  StringName::StringName((StringName *)&local_50,"sun_disk_scale",false);
  (*pcVar1)(plVar2,*(undefined8 *)(this + 0x240),(StringName *)&local_50,(Variant *)local_48);
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PhysicalSkyMaterial::set_energy_multiplier(float) */

void __thiscall PhysicalSkyMaterial::set_energy_multiplier(PhysicalSkyMaterial *this,float param_1)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  long local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(float *)(this + 0x2fc) = param_1;
  plVar2 = (long *)RenderingServer::get_singleton();
  pcVar1 = *(code **)(*plVar2 + 0x2a8);
  Variant::Variant((Variant *)local_48,*(float *)(this + 0x2fc));
  StringName::StringName((StringName *)&local_50,"exposure",false);
  (*pcVar1)(plVar2,*(undefined8 *)(this + 0x240),(StringName *)&local_50,(Variant *)local_48);
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PhysicalSkyMaterial::~PhysicalSkyMaterial() */

void __thiscall PhysicalSkyMaterial::~PhysicalSkyMaterial(PhysicalSkyMaterial *this)

{
  Object *pOVar1;
  char cVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_00114ce0;
  if (*(long *)(this + 0x308) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0x308);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
        Material::~Material((Material *)this);
        return;
      }
    }
  }
  Material::~Material((Material *)this);
  return;
}



/* PanoramaSkyMaterial::~PanoramaSkyMaterial() */

void __thiscall PanoramaSkyMaterial::~PanoramaSkyMaterial(PanoramaSkyMaterial *this)

{
  Object *pOVar1;
  char cVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_00114ae0;
  if (*(long *)(this + 0x2b8) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0x2b8);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
        Material::~Material((Material *)this);
        return;
      }
    }
  }
  Material::~Material((Material *)this);
  return;
}



/* ProceduralSkyMaterial::~ProceduralSkyMaterial() */

void __thiscall ProceduralSkyMaterial::~ProceduralSkyMaterial(ProceduralSkyMaterial *this)

{
  Object *pOVar1;
  char cVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_001148e0;
  if (*(long *)(this + 0x2e0) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0x2e0);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
        Material::~Material((Material *)this);
        return;
      }
    }
  }
  Material::~Material((Material *)this);
  return;
}



/* PhysicalSkyMaterial::~PhysicalSkyMaterial() */

void __thiscall PhysicalSkyMaterial::~PhysicalSkyMaterial(PhysicalSkyMaterial *this)

{
  Object *pOVar1;
  char cVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_00114ce0;
  if (*(long *)(this + 0x308) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0x308);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  Material::~Material((Material *)this);
  operator_delete(this,0x318);
  return;
}



/* PanoramaSkyMaterial::~PanoramaSkyMaterial() */

void __thiscall PanoramaSkyMaterial::~PanoramaSkyMaterial(PanoramaSkyMaterial *this)

{
  Object *pOVar1;
  char cVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_00114ae0;
  if (*(long *)(this + 0x2b8) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0x2b8);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  Material::~Material((Material *)this);
  operator_delete(this,0x2c8);
  return;
}



/* ProceduralSkyMaterial::~ProceduralSkyMaterial() */

void __thiscall ProceduralSkyMaterial::~ProceduralSkyMaterial(ProceduralSkyMaterial *this)

{
  Object *pOVar1;
  char cVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_001148e0;
  if (*(long *)(this + 0x2e0) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0x2e0);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  Material::~Material((Material *)this);
  operator_delete(this,0x338);
  return;
}



/* PhysicalSkyMaterial::get_night_sky() const */

void PhysicalSkyMaterial::get_night_sky(void)

{
  char cVar1;
  long in_RSI;
  long *in_RDI;
  
  *in_RDI = 0;
  if (*(long *)(in_RSI + 0x308) != 0) {
    *in_RDI = *(long *)(in_RSI + 0x308);
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *in_RDI = 0;
    }
  }
  return;
}



/* PanoramaSkyMaterial::get_panorama() const */

void PanoramaSkyMaterial::get_panorama(void)

{
  char cVar1;
  long in_RSI;
  long *in_RDI;
  
  *in_RDI = 0;
  if (*(long *)(in_RSI + 0x2b8) != 0) {
    *in_RDI = *(long *)(in_RSI + 0x2b8);
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *in_RDI = 0;
    }
  }
  return;
}



/* ProceduralSkyMaterial::get_sky_cover() const */

void ProceduralSkyMaterial::get_sky_cover(void)

{
  char cVar1;
  long in_RSI;
  long *in_RDI;
  
  *in_RDI = 0;
  if (*(long *)(in_RSI + 0x2e0) != 0) {
    *in_RDI = *(long *)(in_RSI + 0x2e0);
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *in_RDI = 0;
    }
  }
  return;
}



/* PhysicalSkyMaterial::set_night_sky(Ref<Texture2D> const&) */

void __thiscall PhysicalSkyMaterial::set_night_sky(PhysicalSkyMaterial *this,Ref *param_1)

{
  Object *pOVar1;
  char cVar2;
  long *plVar3;
  undefined8 uVar4;
  Object *pOVar5;
  code *pcVar6;
  long in_FS_OFFSET;
  undefined8 local_58;
  long local_50;
  int local_48 [2];
  undefined1 local_40 [16];
  long local_30;
  
  pOVar1 = *(Object **)param_1;
  pOVar5 = *(Object **)(this + 0x308);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (pOVar1 != pOVar5) {
    *(Object **)(this + 0x308) = pOVar1;
    if (pOVar1 != (Object *)0x0) {
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
        *(undefined8 *)(this + 0x308) = 0;
      }
    }
    if (pOVar5 != (Object *)0x0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
        cVar2 = predelete_handler(pOVar5);
        if (cVar2 != '\0') {
          (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
          Memory::free_static(pOVar5,false);
        }
      }
    }
    pOVar5 = *(Object **)param_1;
  }
  if (pOVar5 == (Object *)0x0) {
    plVar3 = (long *)RenderingServer::get_singleton();
    pcVar6 = *(code **)(*plVar3 + 0x2a8);
    local_40 = (undefined1  [16])0x0;
    local_48[0] = 0;
    local_48[1] = 0;
    StringName::StringName((StringName *)&local_50,"night_sky",false);
    uVar4 = *(undefined8 *)(this + 0x240);
  }
  else {
    plVar3 = (long *)RenderingServer::get_singleton();
    pcVar6 = *(code **)(*plVar3 + 0x2a8);
    local_58 = (**(code **)(**(long **)param_1 + 0x1c0))();
    Variant::Variant((Variant *)local_48,(RID *)&local_58);
    StringName::StringName((StringName *)&local_50,"night_sky",false);
    uVar4 = *(undefined8 *)(this + 0x240);
  }
  (*pcVar6)(plVar3,uVar4,&local_50,local_48);
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PanoramaSkyMaterial::set_panorama(Ref<Texture2D> const&) */

void __thiscall PanoramaSkyMaterial::set_panorama(PanoramaSkyMaterial *this,Ref *param_1)

{
  Object *pOVar1;
  char cVar2;
  long *plVar3;
  undefined8 uVar4;
  Object *pOVar5;
  code *pcVar6;
  long in_FS_OFFSET;
  undefined8 local_58;
  long local_50;
  int local_48 [2];
  undefined1 local_40 [16];
  long local_30;
  
  pOVar1 = *(Object **)param_1;
  pOVar5 = *(Object **)(this + 0x2b8);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (pOVar1 != pOVar5) {
    *(Object **)(this + 0x2b8) = pOVar1;
    if (pOVar1 != (Object *)0x0) {
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
        *(undefined8 *)(this + 0x2b8) = 0;
      }
    }
    if (pOVar5 != (Object *)0x0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
        cVar2 = predelete_handler(pOVar5);
        if (cVar2 != '\0') {
          (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
          Memory::free_static(pOVar5,false);
        }
      }
    }
    pOVar5 = *(Object **)param_1;
  }
  if (pOVar5 == (Object *)0x0) {
    plVar3 = (long *)RenderingServer::get_singleton();
    pcVar6 = *(code **)(*plVar3 + 0x2a8);
    local_40 = (undefined1  [16])0x0;
    local_48[0] = 0;
    local_48[1] = 0;
    StringName::StringName((StringName *)&local_50,"source_panorama",false);
    uVar4 = *(undefined8 *)(this + 0x240);
  }
  else {
    plVar3 = (long *)RenderingServer::get_singleton();
    pcVar6 = *(code **)(*plVar3 + 0x2a8);
    local_58 = (**(code **)(**(long **)param_1 + 0x1c0))();
    Variant::Variant((Variant *)local_48,(RID *)&local_58);
    StringName::StringName((StringName *)&local_50,"source_panorama",false);
    uVar4 = *(undefined8 *)(this + 0x240);
  }
  (*pcVar6)(plVar3,uVar4,&local_50,local_48);
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ProceduralSkyMaterial::set_sky_cover(Ref<Texture2D> const&) */

void __thiscall ProceduralSkyMaterial::set_sky_cover(ProceduralSkyMaterial *this,Ref *param_1)

{
  Object *pOVar1;
  char cVar2;
  long *plVar3;
  undefined8 uVar4;
  Object *pOVar5;
  code *pcVar6;
  long in_FS_OFFSET;
  undefined8 local_58;
  long local_50;
  int local_48 [2];
  undefined1 local_40 [16];
  long local_30;
  
  pOVar1 = *(Object **)param_1;
  pOVar5 = *(Object **)(this + 0x2e0);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (pOVar1 != pOVar5) {
    *(Object **)(this + 0x2e0) = pOVar1;
    if (pOVar1 != (Object *)0x0) {
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
        *(undefined8 *)(this + 0x2e0) = 0;
      }
    }
    if (pOVar5 != (Object *)0x0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
        cVar2 = predelete_handler(pOVar5);
        if (cVar2 != '\0') {
          (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
          Memory::free_static(pOVar5,false);
        }
      }
    }
    pOVar5 = *(Object **)param_1;
  }
  if (pOVar5 == (Object *)0x0) {
    plVar3 = (long *)RenderingServer::get_singleton();
    pcVar6 = *(code **)(*plVar3 + 0x2a8);
    local_40 = (undefined1  [16])0x0;
    local_48[0] = 0;
    local_48[1] = 0;
    StringName::StringName((StringName *)&local_50,"sky_cover",false);
    uVar4 = *(undefined8 *)(this + 0x240);
  }
  else {
    plVar3 = (long *)RenderingServer::get_singleton();
    pcVar6 = *(code **)(*plVar3 + 0x2a8);
    local_58 = (**(code **)(**(long **)param_1 + 0x1c0))();
    Variant::Variant((Variant *)local_48,(RID *)&local_58);
    StringName::StringName((StringName *)&local_50,"sky_cover",false);
    uVar4 = *(undefined8 *)(this + 0x240);
  }
  (*pcVar6)(plVar3,uVar4,&local_50,local_48);
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



/* MethodBind* ClassDB::bind_method<MethodDefinition, float (ProceduralSkyMaterial::*)()
   const>(MethodDefinition, float (ProceduralSkyMaterial::*)() const) [clone .isra.0] */

MethodBind * __thiscall
ClassDB::bind_method<MethodDefinition,float(ProceduralSkyMaterial::*)()const>
          (ClassDB *this,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  MethodBind *this_00;
  long in_FS_OFFSET;
  long local_60;
  char *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_40 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = (undefined1  [16])0x0;
  local_48 = 0;
  this_00 = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this_00);
  *(undefined8 *)(this_00 + 0x58) = param_2;
  *(undefined ***)this_00 = &PTR__gen_argument_type_00115000;
  *(undefined8 *)(this_00 + 0x60) = param_3;
  MethodBind::_set_returns(SUB81(this_00,0));
  MethodBind::_set_const(SUB81(this_00,0));
  MethodBind::_generate_argument_types((int)this_00);
  *(undefined4 *)(this_00 + 0x34) = 0;
  local_60 = 0;
  local_58 = "ProceduralSkyMaterial";
  local_50 = 0x15;
  String::parse_latin1((StrRange *)&local_60);
  StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
  StringName::operator=((StringName *)(this_00 + 0x18),(StringName *)&local_58);
  if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
    StringName::unref();
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
  ClassDB::bind_methodfi(1,this_00,false,(MethodDefinition *)this,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_48] != '\0') {
    Variant::_clear_internal();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (MethodBind *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* ClassDB::bind_method<MethodDefinition, float (PhysicalSkyMaterial::*)()
   const>(MethodDefinition, float (PhysicalSkyMaterial::*)() const) [clone .isra.0] */

MethodBind * __thiscall
ClassDB::bind_method<MethodDefinition,float(PhysicalSkyMaterial::*)()const>
          (ClassDB *this,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  MethodBind *this_00;
  long in_FS_OFFSET;
  long local_60;
  char *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_40 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = (undefined1  [16])0x0;
  local_48 = 0;
  this_00 = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this_00);
  *(undefined8 *)(this_00 + 0x58) = param_2;
  *(undefined ***)this_00 = &PTR__gen_argument_type_00115000;
  *(undefined8 *)(this_00 + 0x60) = param_3;
  MethodBind::_set_returns(SUB81(this_00,0));
  MethodBind::_set_const(SUB81(this_00,0));
  MethodBind::_generate_argument_types((int)this_00);
  *(undefined4 *)(this_00 + 0x34) = 0;
  local_60 = 0;
  local_58 = "PhysicalSkyMaterial";
  local_50 = 0x13;
  String::parse_latin1((StrRange *)&local_60);
  StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
  StringName::operator=((StringName *)(this_00 + 0x18),(StringName *)&local_58);
  if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
    StringName::unref();
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
  ClassDB::bind_methodfi(1,this_00,false,(MethodDefinition *)this,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_48] != '\0') {
    Variant::_clear_internal();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (MethodBind *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* ClassDB::bind_method<MethodDefinition, Color (ProceduralSkyMaterial::*)()
   const>(MethodDefinition, Color (ProceduralSkyMaterial::*)() const) [clone .isra.0] */

MethodBind * __thiscall
ClassDB::bind_method<MethodDefinition,Color(ProceduralSkyMaterial::*)()const>
          (ClassDB *this,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  MethodBind *this_00;
  long in_FS_OFFSET;
  long local_60;
  char *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_40 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = (undefined1  [16])0x0;
  local_48 = 0;
  this_00 = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this_00);
  *(undefined8 *)(this_00 + 0x58) = param_2;
  *(undefined ***)this_00 = &PTR__gen_argument_type_00114f40;
  *(undefined8 *)(this_00 + 0x60) = param_3;
  MethodBind::_set_returns(SUB81(this_00,0));
  MethodBind::_set_const(SUB81(this_00,0));
  MethodBind::_generate_argument_types((int)this_00);
  *(undefined4 *)(this_00 + 0x34) = 0;
  local_60 = 0;
  local_58 = "ProceduralSkyMaterial";
  local_50 = 0x15;
  String::parse_latin1((StrRange *)&local_60);
  StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
  StringName::operator=((StringName *)(this_00 + 0x18),(StringName *)&local_58);
  if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
    StringName::unref();
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
  ClassDB::bind_methodfi(1,this_00,false,(MethodDefinition *)this,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_48] != '\0') {
    Variant::_clear_internal();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (MethodBind *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ProceduralSkyMaterial::_validate_property(PropertyInfo&) const */

void __thiscall
ProceduralSkyMaterial::_validate_property(ProceduralSkyMaterial *this,PropertyInfo *param_1)

{
  char cVar1;
  bool bVar2;
  long in_FS_OFFSET;
  long local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  cVar1 = String::operator==((String *)(param_1 + 8),"sky_luminance");
  if (cVar1 == '\0') {
    cVar1 = String::operator==((String *)(param_1 + 8),"ground_luminance");
    if (cVar1 == '\0') goto LAB_0010244d;
  }
  ProjectSettings::get_singleton();
  StringName::StringName
            ((StringName *)&local_50,"rendering/lights_and_shadows/use_physical_light_units",false);
  ProjectSettings::get_setting_with_override((StringName *)local_48);
  bVar2 = Variant::operator_cast_to_bool((Variant *)local_48);
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (!bVar2) {
    *(undefined4 *)(param_1 + 0x28) = 2;
  }
LAB_0010244d:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ProceduralSkyMaterial::cleanup_shader() */

void ProceduralSkyMaterial::cleanup_shader(void)

{
  long *plVar1;
  
  if (shader_cache == 0) {
    return;
  }
  plVar1 = (long *)RenderingServer::get_singleton();
  (**(code **)(*plVar1 + 0x11b0))(plVar1,shader_cache);
  plVar1 = (long *)RenderingServer::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x001024c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x11b0))(plVar1,DAT_001087b8);
  return;
}



/* PanoramaSkyMaterial::cleanup_shader() */

void PanoramaSkyMaterial::cleanup_shader(void)

{
  long *plVar1;
  
  if (shader_cache == 0) {
    return;
  }
  plVar1 = (long *)RenderingServer::get_singleton();
  (**(code **)(*plVar1 + 0x11b0))(plVar1,shader_cache);
  plVar1 = (long *)RenderingServer::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x00102519. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x11b0))(plVar1,DAT_001087a8);
  return;
}



/* PanoramaSkyMaterial::PanoramaSkyMaterial() */

void __thiscall PanoramaSkyMaterial::PanoramaSkyMaterial(PanoramaSkyMaterial *this)

{
  float fVar1;
  long *plVar2;
  undefined8 uVar3;
  
  Material::Material((Material *)this);
  *(undefined8 *)(this + 0x2b8) = 0;
  *(undefined ***)this = &PTR__initialize_classv_00114ae0;
  *(undefined4 *)(this + 0x2c0) = 0x3f800000;
  *(undefined2 *)(this + 0x2c4) = 0x100;
  plVar2 = (long *)RenderingServer::get_singleton();
  uVar3 = (**(code **)(*plVar2 + 0x290))(plVar2);
  fVar1 = _LC37;
  *(undefined8 *)(this + 0x240) = uVar3;
  set_energy_multiplier(this,fVar1);
  return;
}



/* PhysicalSkyMaterial::_validate_property(PropertyInfo&) const */

void __thiscall
PhysicalSkyMaterial::_validate_property(PhysicalSkyMaterial *this,PropertyInfo *param_1)

{
  char cVar1;
  bool bVar2;
  long in_FS_OFFSET;
  long local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  cVar1 = String::operator==((String *)(param_1 + 8),"exposure_value");
  if (cVar1 != '\0') {
    ProjectSettings::get_singleton();
    StringName::StringName
              ((StringName *)&local_50,"rendering/lights_and_shadows/use_physical_light_units",false
              );
    ProjectSettings::get_setting_with_override((StringName *)local_48);
    bVar2 = Variant::operator_cast_to_bool((Variant *)local_48);
    if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_50 != 0)) {
      StringName::unref();
    }
    if (!bVar2) {
      *(undefined4 *)(param_1 + 0x28) = 2;
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PhysicalSkyMaterial::cleanup_shader() */

void PhysicalSkyMaterial::cleanup_shader(void)

{
  long *plVar1;
  
  if (shader_cache == 0) {
    return;
  }
  plVar1 = (long *)RenderingServer::get_singleton();
  (**(code **)(*plVar1 + 0x11b0))(plVar1,shader_cache);
  plVar1 = (long *)RenderingServer::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x001026c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x11b0))(plVar1,DAT_00108798);
  return;
}



/* ProceduralSkyMaterial::_update_shader() */

void ProceduralSkyMaterial::_update_shader(void)

{
  code *pcVar1;
  long lVar2;
  char *pcVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar4 = pthread_mutex_lock((pthread_mutex_t *)shader_mutex);
  if (iVar4 == 0) {
    if (shader_cache == 0) {
      iVar4 = 0;
      while( true ) {
        plVar5 = (long *)RenderingServer::get_singleton();
        uVar6 = (**(code **)(*plVar5 + 0x240))(plVar5);
        (&shader_cache)[iVar4] = uVar6;
        plVar5 = (long *)RenderingServer::get_singleton();
        local_60 = 0;
        pcVar1 = *(code **)(*plVar5 + 0x250);
        local_50 = 0xc1b;
        local_58 = 
        "\n// NOTE: Shader automatically converted from Godot Engine 4.4.1.stable\'s ProceduralSkyMaterial.\n\nshader_type sky;\n%s\n\nuniform vec4 sky_top_color : source_color = vec4(0.385, 0.454, 0.55, 1.0);\nuniform vec4 sky_horizon_color : source_color = vec4(0.646, 0.656, 0.67, 1.0);\nuniform float sky_curve : hint_range(0, 1) = 0.15;\nuniform float sky_energy = 1.0; // In Lux.\nuniform sampler2D sky_cover : filter_linear, source_color, hint_default_black;\nuniform vec4 sky_cover_modulate : source_color = vec4(1.0, 1.0, 1.0, 1.0);\nuniform vec4 ground_bottom_color : source_color = vec4(0.2, 0.169, 0.133, 1.0);\nuniform vec4 ground_horizon_color : source_color = vec4(0.646, 0.656, 0.67, 1.0);\nuniform float ground_curve : hint_range(0, 1) = 0.02;\nuniform float ground_energy = 1.0;\nuniform float sun_angle_max = 30.0;\nuniform float sun_curve : hint_range(0, 1) = 0.15;\nuniform float exposure : hint_range(0, 128) = 1.0;\n\nvoid sky() {\n\tfloat v_angle = acos(clamp(EYEDIR.y, -1.0, 1.0));\n\tfloat c = (1.0 - v_angle / (PI * 0.5));\n\tvec3 sky = mix(sky_horizon_color.rgb, sky_top_color.rgb, clamp(1.0 - pow(1.0 - c, 1.0 / sky_curve), 0.0, 1.0));\n\tsky *= sky_energy;\n\n\tif (LIGHT0_ENABLED) {\n\t\tfloat sun_angle = acos(dot(LIGHT0_DIRECTION, EYEDIR));\n\t\tif (sun_angle < LIGHT0_SIZE) {\n\t\t\tsky = LIGHT0_COLOR * LIGHT0_ENERGY;\n\t\t} else if (sun_angle < sun_angle_max) {\n\t\t\tfloat c2 = (sun_angle - LIGHT0_SIZE) / (sun_angle_max - LIGHT0_SIZE);\n\t\t\tsky = mix(LIGHT0_COLOR * LIGHT0_ENERGY, sky, clamp(1.0 - pow(1.0 - c2, 1.0 / sun_curve), 0.0, 1.0));\n\t\t}\n\t}\n\n\tif (LIGHT1_ENABLED) {\n\t\tfloat sun_angle = acos(dot(LIGHT1_DIRECTION, EYEDIR));\n\t\tif (sun_angle < LIGHT1_SIZE) {\n\t\t\tsky = LIGHT1_COLOR * LIGHT1_ENERGY;\n\t\t} else if (sun_angle < sun_angle_max) {\n\t\t\tfloat c2 = (sun_angle - LIGHT1_SIZE) / (sun_angle_max - LIGHT1_SIZE);\n\t\t\tsky = mix(LIGHT1_COLOR * LIGHT1_ENERGY, sky, clamp(1.0 - pow(1.0 - c2, 1.0 / sun_curve), 0.0, 1.0));\n\t\t}\n\t}\n\n\tif (LIGHT2_ENABLED) {\n\t\tfloat sun_angle = acos(dot(LIGHT2_DIRECTION, EYEDIR));\n\t\tif (sun_angle < LIGHT2_SIZE) {\n\t\t\tsky = LIGHT2_COLOR * LIG..." /* TRUNCATED STRING LITERAL */
        ;
        String::parse_latin1((StrRange *)&local_60);
        vformat<char_const*>((String *)&local_58,(char *)&local_60);
        (*pcVar1)(plVar5,(&shader_cache)[iVar4],(String *)&local_58);
        pcVar3 = local_58;
        if (local_58 != (char *)0x0) {
          LOCK();
          plVar5 = (long *)(local_58 + -0x10);
          *plVar5 = *plVar5 + -1;
          UNLOCK();
          if (*plVar5 == 0) {
            local_58 = (char *)0x0;
            Memory::free_static(pcVar3 + -0x10,false);
          }
        }
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
        if (iVar4 != 0) break;
        iVar4 = 1;
      }
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      pthread_mutex_unlock((pthread_mutex_t *)shader_mutex);
      return;
    }
  }
  else {
    std::__throw_system_error(iVar4);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ProceduralSkyMaterial::set_use_debanding(bool) */

void __thiscall ProceduralSkyMaterial::set_use_debanding(ProceduralSkyMaterial *this,bool param_1)

{
  long *plVar1;
  
  this[0x328] = (ProceduralSkyMaterial)param_1;
  _update_shader();
  if (this[0x330] == (ProceduralSkyMaterial)0x0) {
    return;
  }
  plVar1 = (long *)RenderingServer::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x001028ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x2a0))
            (plVar1,*(undefined8 *)(this + 0x240),(&shader_cache)[(byte)this[0x328]]);
  return;
}



/* ProceduralSkyMaterial::get_rid() const */

undefined8 __thiscall ProceduralSkyMaterial::get_rid(ProceduralSkyMaterial *this)

{
  long *plVar1;
  
  _update_shader();
  if (this[0x330] != (ProceduralSkyMaterial)0x0) {
    return *(undefined8 *)(this + 0x240);
  }
  plVar1 = (long *)RenderingServer::get_singleton();
  (**(code **)(*plVar1 + 0x2a0))
            (plVar1,*(undefined8 *)(this + 0x240),(&shader_cache)[(byte)this[0x328] ^ 1]);
  plVar1 = (long *)RenderingServer::get_singleton();
  (**(code **)(*plVar1 + 0x2a0))
            (plVar1,*(undefined8 *)(this + 0x240),(&shader_cache)[(byte)this[0x328]]);
  this[0x330] = (ProceduralSkyMaterial)0x1;
  return *(undefined8 *)(this + 0x240);
}



/* ProceduralSkyMaterial::get_shader_rid() const */

undefined8 __thiscall ProceduralSkyMaterial::get_shader_rid(ProceduralSkyMaterial *this)

{
  _update_shader();
  return (&shader_cache)[(byte)this[0x328]];
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProceduralSkyMaterial::ProceduralSkyMaterial() */

void __thiscall ProceduralSkyMaterial::ProceduralSkyMaterial(ProceduralSkyMaterial *this)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  Material::Material((Material *)this);
  uVar1 = __LC48;
  uVar3 = CONCAT44(_LC37,_UNK_001152f8);
  *(undefined8 *)(this + 0x2d8) = 0;
  *(undefined ***)this = &PTR__initialize_classv_001148e0;
  *(undefined8 *)(this + 0x2e0) = 0;
  this[0x328] = (ProceduralSkyMaterial)0x1;
  *(undefined4 *)(this + 0x32c) = 0x3f800000;
  this[0x330] = (ProceduralSkyMaterial)0x0;
  *(undefined8 *)(this + 0x2b8) = uVar1;
  *(undefined8 *)(this + 0x2c0) = uVar3;
  *(undefined8 *)(this + 0x2c8) = uVar1;
  *(undefined8 *)(this + 0x2d0) = uVar3;
  *(undefined8 *)(this + 0x2e8) = uVar1;
  *(undefined8 *)(this + 0x2f0) = uVar3;
  *(undefined8 *)(this + 0x2f8) = uVar1;
  *(undefined8 *)(this + 0x300) = uVar3;
  *(undefined8 *)(this + 0x308) = uVar1;
  *(undefined8 *)(this + 0x310) = uVar3;
  *(undefined1 (*) [16])(this + 0x318) = (undefined1  [16])0x0;
  plVar2 = (long *)RenderingServer::get_singleton();
  uVar3 = (**(code **)(*plVar2 + 0x290))(plVar2);
  uStack_30 = _UNK_00115308;
  local_38 = __LC49;
  *(undefined8 *)(this + 0x240) = uVar3;
  set_sky_top_color(this,(Color *)&local_38);
  local_38 = __LC50;
  uStack_30 = _UNK_00115318;
  set_sky_horizon_color(this,(Color *)&local_38);
  set_sky_curve(this,_LC51);
  set_sky_energy_multiplier(this,_LC37);
  local_38 = CONCAT44(_LC37,_LC37);
  uStack_30 = CONCAT44(_LC37,_LC37);
  set_sky_cover_modulate(this,(Color *)&local_38);
  local_38 = __LC53;
  uStack_30 = _UNK_00115328;
  set_ground_bottom_color(this,(Color *)&local_38);
  local_38 = __LC50;
  uStack_30 = _UNK_00115318;
  set_ground_horizon_color(this,(Color *)&local_38);
  set_ground_curve(this,_LC54);
  set_ground_energy_multiplier(this,_LC37);
  set_sun_angle_max(this,_LC55);
  set_sun_curve(this,_LC51);
  this[0x328] = (ProceduralSkyMaterial)0x1;
  _update_shader();
  if (this[0x330] != (ProceduralSkyMaterial)0x0) {
    plVar2 = (long *)RenderingServer::get_singleton();
    (**(code **)(*plVar2 + 0x2a0))
              (plVar2,*(undefined8 *)(this + 0x240),(&shader_cache)[(byte)this[0x328]]);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    set_energy_multiplier(this,_LC37);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PanoramaSkyMaterial::_update_shader() */

void PanoramaSkyMaterial::_update_shader(void)

{
  code *pcVar1;
  long lVar2;
  char *pcVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar4 = pthread_mutex_lock((pthread_mutex_t *)shader_mutex);
  if (iVar4 == 0) {
    if (shader_cache == 0) {
      iVar4 = 0;
      while( true ) {
        plVar5 = (long *)RenderingServer::get_singleton();
        uVar6 = (**(code **)(*plVar5 + 0x240))(plVar5);
        (&shader_cache)[iVar4] = uVar6;
        plVar5 = (long *)RenderingServer::get_singleton();
        local_60 = 0;
        pcVar1 = *(code **)(*plVar5 + 0x250);
        local_50 = 0x13d;
        local_58 = 
        "\n// NOTE: Shader automatically converted from Godot Engine 4.4.1.stable\'s PanoramaSkyMaterial.\n\nshader_type sky;\n\nuniform sampler2D source_panorama : %s, source_color, hint_default_black;\nuniform float exposure : hint_range(0, 128) = 1.0;\n\nvoid sky() {\n\tCOLOR = texture(source_panorama, SKY_COORDS).rgb * exposure;\n}\n"
        ;
        String::parse_latin1((StrRange *)&local_60);
        vformat<char_const*>((String *)&local_58,(char *)&local_60);
        (*pcVar1)(plVar5,(&shader_cache)[iVar4],(String *)&local_58);
        pcVar3 = local_58;
        if (local_58 != (char *)0x0) {
          LOCK();
          plVar5 = (long *)(local_58 + -0x10);
          *plVar5 = *plVar5 + -1;
          UNLOCK();
          if (*plVar5 == 0) {
            local_58 = (char *)0x0;
            Memory::free_static(pcVar3 + -0x10,false);
          }
        }
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
        if (iVar4 != 0) break;
        iVar4 = 1;
      }
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      pthread_mutex_unlock((pthread_mutex_t *)shader_mutex);
      return;
    }
  }
  else {
    std::__throw_system_error(iVar4);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PanoramaSkyMaterial::set_filtering_enabled(bool) */

void __thiscall PanoramaSkyMaterial::set_filtering_enabled(PanoramaSkyMaterial *this,bool param_1)

{
  long *plVar1;
  
  this[0x2c5] = (PanoramaSkyMaterial)param_1;
  Object::notify_property_list_changed();
  _update_shader();
  if (this[0x2c4] == (PanoramaSkyMaterial)0x0) {
    return;
  }
  plVar1 = (long *)RenderingServer::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x00102d64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x2a0))
            (plVar1,*(undefined8 *)(this + 0x240),(&shader_cache)[(byte)this[0x2c5]]);
  return;
}



/* PanoramaSkyMaterial::get_rid() const */

undefined8 __thiscall PanoramaSkyMaterial::get_rid(PanoramaSkyMaterial *this)

{
  long *plVar1;
  
  _update_shader();
  if (this[0x2c4] != (PanoramaSkyMaterial)0x0) {
    return *(undefined8 *)(this + 0x240);
  }
  plVar1 = (long *)RenderingServer::get_singleton();
  (**(code **)(*plVar1 + 0x2a0))
            (plVar1,*(undefined8 *)(this + 0x240),(&shader_cache)[(byte)this[0x2c5] ^ 1]);
  plVar1 = (long *)RenderingServer::get_singleton();
  (**(code **)(*plVar1 + 0x2a0))
            (plVar1,*(undefined8 *)(this + 0x240),(&shader_cache)[(byte)this[0x2c5]]);
  this[0x2c4] = (PanoramaSkyMaterial)0x1;
  return *(undefined8 *)(this + 0x240);
}



/* PanoramaSkyMaterial::get_shader_rid() const */

undefined8 __thiscall PanoramaSkyMaterial::get_shader_rid(PanoramaSkyMaterial *this)

{
  _update_shader();
  return (&shader_cache)[(byte)this[0x2c5]];
}



/* PhysicalSkyMaterial::_update_shader() */

void PhysicalSkyMaterial::_update_shader(void)

{
  code *pcVar1;
  long lVar2;
  char *pcVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar4 = pthread_mutex_lock((pthread_mutex_t *)shader_mutex);
  if (iVar4 == 0) {
    if (shader_cache == 0) {
      iVar4 = 0;
      while( true ) {
        plVar5 = (long *)RenderingServer::get_singleton();
        uVar6 = (**(code **)(*plVar5 + 0x240))(plVar5);
        (&shader_cache)[iVar4] = uVar6;
        plVar5 = (long *)RenderingServer::get_singleton();
        local_60 = 0;
        pcVar1 = *(code **)(*plVar5 + 0x250);
        local_50 = 0xdb8;
        local_58 = 
        "\n// NOTE: Shader automatically converted from Godot Engine 4.4.1.stable\'s PhysicalSkyMaterial.\n\nshader_type sky;\n%s\n\nuniform float rayleigh : hint_range(0, 64) = 2.0;\nuniform vec4 rayleigh_color : source_color = vec4(0.3, 0.405, 0.6, 1.0);\nuniform float mie : hint_range(0, 1) = 0.005;\nuniform float mie_eccentricity : hint_range(-1, 1) = 0.8;\nuniform vec4 mie_color : source_color = vec4(0.69, 0.729, 0.812, 1.0);\n\nuniform float turbidity : hint_range(0, 1000) = 10.0;\nuniform float sun_disk_scale : hint_range(0, 360) = 1.0;\nuniform vec4 ground_color : source_color = vec4(0.1, 0.07, 0.034, 1.0);\nuniform float exposure : hint_range(0, 128) = 1.0;\n\nuniform sampler2D night_sky : filter_linear, source_color, hint_default_black;\n\nconst vec3 UP = vec3( 0.0, 1.0, 0.0 );\n\n// Optical length at zenith for molecules.\nconst float rayleigh_zenith_size = 8.4e3;\nconst float mie_zenith_size = 1.25e3;\n\nfloat henyey_greenstein(float cos_theta, float g) {\n\tconst float k = 0.0795774715459;\n\treturn k * (1.0 - g * g) / (pow(1.0 + g * g - 2.0 * g * cos_theta, 1.5));\n}\n\nvoid sky() {\n\tif (LIGHT0_ENABLED) {\n\t\tfloat zenith_angle = clamp( dot(UP, normalize(LIGHT0_DIRECTION)), -1.0, 1.0 );\n\t\tfloat sun_energy = max(0.0, 1.0 - exp(-((PI * 0.5) - acos(zenith_angle)))) * LIGHT0_ENERGY;\n\t\tfloat sun_fade = 1.0 - clamp(1.0 - exp(LIGHT0_DIRECTION.y), 0.0, 1.0);\n\n\t\t// Rayleigh coefficients.\n\t\tfloat rayleigh_coefficient = rayleigh - ( 1.0 * ( 1.0 - sun_fade ) );\n\t\tvec3 rayleigh_beta = rayleigh_coefficient * rayleigh_color.rgb * 0.0001;\n\t\t// mie coefficients from Preetham\n\t\tvec3 mie_beta = turbidity * mie * mie_color.rgb * 0.000434;\n\n\t\t// Optical length.\n\t\tfloat zenith = acos(max(0.0, dot(UP, EYEDIR)));\n\t\tfloat optical_mass = 1.0 / (cos(zenith) + 0.15 * pow(93.885 - degrees(zenith), -1.253));\n\t\tfloat rayleigh_scatter = rayleigh_zenith_size * optical_mass;\n\t\tfloat mie_scatter = mie_zenith_size * optical_mass;\n\n\t\t// Light extinction based on thickness of atmosphere.\n\t\tvec3 extinction = exp(-(rayleigh_beta * rayleigh_scatter + mie_beta * mie_scatter));\n\n\t\t// ..." /* TRUNCATED STRING LITERAL */
        ;
        String::parse_latin1((StrRange *)&local_60);
        vformat<char_const*>((String *)&local_58,(char *)&local_60);
        (*pcVar1)(plVar5,(&shader_cache)[iVar4],(String *)&local_58);
        pcVar3 = local_58;
        if (local_58 != (char *)0x0) {
          LOCK();
          plVar5 = (long *)(local_58 + -0x10);
          *plVar5 = *plVar5 + -1;
          UNLOCK();
          if (*plVar5 == 0) {
            local_58 = (char *)0x0;
            Memory::free_static(pcVar3 + -0x10,false);
          }
        }
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
        if (iVar4 != 0) break;
        iVar4 = 1;
      }
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      pthread_mutex_unlock((pthread_mutex_t *)shader_mutex);
      return;
    }
  }
  else {
    std::__throw_system_error(iVar4);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PhysicalSkyMaterial::set_use_debanding(bool) */

void __thiscall PhysicalSkyMaterial::set_use_debanding(PhysicalSkyMaterial *this,bool param_1)

{
  long *plVar1;
  
  this[0x300] = (PhysicalSkyMaterial)param_1;
  _update_shader();
  if (this[0x310] == (PhysicalSkyMaterial)0x0) {
    return;
  }
  plVar1 = (long *)RenderingServer::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x0010301c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x2a0))
            (plVar1,*(undefined8 *)(this + 0x240),(&shader_cache)[(byte)this[0x300]]);
  return;
}



/* PhysicalSkyMaterial::get_rid() const */

undefined8 __thiscall PhysicalSkyMaterial::get_rid(PhysicalSkyMaterial *this)

{
  long *plVar1;
  
  _update_shader();
  if (this[0x310] != (PhysicalSkyMaterial)0x0) {
    return *(undefined8 *)(this + 0x240);
  }
  plVar1 = (long *)RenderingServer::get_singleton();
  (**(code **)(*plVar1 + 0x2a0))
            (plVar1,*(undefined8 *)(this + 0x240),(&shader_cache)[(byte)this[0x300] ^ 1]);
  plVar1 = (long *)RenderingServer::get_singleton();
  (**(code **)(*plVar1 + 0x2a0))
            (plVar1,*(undefined8 *)(this + 0x240),(&shader_cache)[(byte)this[0x300]]);
  this[0x310] = (PhysicalSkyMaterial)0x1;
  return *(undefined8 *)(this + 0x240);
}



/* PhysicalSkyMaterial::get_shader_rid() const */

undefined8 __thiscall PhysicalSkyMaterial::get_shader_rid(PhysicalSkyMaterial *this)

{
  _update_shader();
  return (&shader_cache)[(byte)this[0x300]];
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PhysicalSkyMaterial::PhysicalSkyMaterial() */

void __thiscall PhysicalSkyMaterial::PhysicalSkyMaterial(PhysicalSkyMaterial *this)

{
  float fVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  Material::Material((Material *)this);
  auVar6 = ZEXT416(_LC61);
  *(undefined ***)this = &PTR__initialize_classv_00114ce0;
  uVar3 = _LC63;
  *(undefined1 (*) [16])(this + 0x2c8) = auVar6;
  uVar2 = _UNK_00115348;
  uVar5 = __LC62;
  *(undefined8 *)(this + 0x2f8) = uVar3;
  this[0x300] = (PhysicalSkyMaterial)0x1;
  *(undefined8 *)(this + 0x308) = 0;
  this[0x310] = (PhysicalSkyMaterial)0x0;
  *(undefined8 *)(this + 0x2d8) = uVar5;
  *(undefined8 *)(this + 0x2e0) = uVar2;
  *(undefined1 (*) [16])(this + 0x2b8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x2e8) = (undefined1  [16])0x0;
  plVar4 = (long *)RenderingServer::get_singleton();
  uVar5 = (**(code **)(*plVar4 + 0x290))(plVar4);
  fVar1 = _LC64;
  *(undefined8 *)(this + 0x240) = uVar5;
  set_rayleigh_coefficient(this,fVar1);
  set_rayleigh_color(0x3ecf5c293e99999a,0x3f8000003f19999a,this);
  set_mie_coefficient(this,_LC65);
  set_mie_eccentricity(this,_LC66);
  set_mie_color(0x3f3a9fbe3f30a3d7,0x3f8000003f4fdf3b,this);
  set_turbidity(this,_LC67);
  set_sun_disk_scale(this,_LC37);
  set_ground_color(0x3d8f5c293dcccccd,0x3f8000003d0b4396,this);
  set_energy_multiplier(this,_LC37);
  this[0x300] = (PhysicalSkyMaterial)0x1;
  _update_shader();
  if (this[0x310] == (PhysicalSkyMaterial)0x0) {
    return;
  }
  plVar4 = (long *)RenderingServer::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x0010328c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x2a0))
            (plVar4,*(undefined8 *)(this + 0x240),(&shader_cache)[(byte)this[0x300]]);
  return;
}



/* Material::initialize_class() [clone .part.0] */

void Material::initialize_class(void)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_70;
  undefined8 local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (Resource::initialize_class()::initialized == '\0') {
    if (RefCounted::initialize_class()::initialized == '\0') {
      Object::initialize_class();
      local_68 = 0;
      local_50 = 6;
      local_58 = "Object";
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "RefCounted";
      local_70 = 0;
      local_50 = 10;
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
      if ((code *)PTR__bind_methods_0011a008 != RefCounted::_bind_methods) {
        RefCounted::_bind_methods();
      }
      RefCounted::initialize_class()::initialized = '\x01';
    }
    local_68 = 0;
    local_58 = "RefCounted";
    local_50 = 10;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "Resource";
    local_70 = 0;
    local_50 = 8;
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
    Resource::_bind_methods();
    Resource::initialize_class()::initialized = '\x01';
  }
  local_58 = "Resource";
  local_68 = 0;
  local_50 = 8;
  String::parse_latin1((StrRange *)&local_68);
  StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
  local_58 = "Material";
  local_70 = 0;
  local_50 = 8;
  String::parse_latin1((StrRange *)&local_70);
  StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
  ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
  if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
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
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  if ((code *)_GLOBAL_OFFSET_TABLE_ != Resource::_bind_methods) {
    Material::_bind_methods();
  }
  initialize_class()::initialized = 1;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ProceduralSkyMaterial::_bind_methods() */

void ProceduralSkyMaterial::_bind_methods(void)

{
  MethodBind *pMVar1;
  long in_FS_OFFSET;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  char *local_98;
  undefined8 local_90;
  char *local_88;
  undefined8 local_80;
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  D_METHOD<char_const*>((char *)&local_88,"set_sky_top_color");
  local_50 = (undefined1  [16])0x0;
  local_58 = 0;
  pMVar1 = create_method_bind<ProceduralSkyMaterial,Color_const&>(set_sky_top_color);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_88,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_88);
  D_METHODP((char *)&local_88,(char ***)"get_sky_top_color",0);
  ClassDB::bind_method<MethodDefinition,Color(ProceduralSkyMaterial::*)()const>
            ((ClassDB *)&local_88,0x100000,0);
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_88);
  D_METHOD<char_const*>((char *)&local_88,"set_sky_horizon_color");
  local_50 = (undefined1  [16])0x0;
  local_58 = 0;
  pMVar1 = create_method_bind<ProceduralSkyMaterial,Color_const&>(set_sky_horizon_color);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_88,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_88);
  D_METHODP((char *)&local_88,(char ***)"get_sky_horizon_color",0);
  ClassDB::bind_method<MethodDefinition,Color(ProceduralSkyMaterial::*)()const>
            ((ClassDB *)&local_88,get_sky_horizon_color,0);
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_88);
  D_METHOD<char_const*>((char *)&local_88,"set_sky_curve");
  local_50 = (undefined1  [16])0x0;
  local_58 = 0;
  pMVar1 = create_method_bind<ProceduralSkyMaterial,float>(set_sky_curve);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_88,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_88);
  D_METHODP((char *)&local_88,(char ***)"get_sky_curve",0);
  ClassDB::bind_method<MethodDefinition,float(ProceduralSkyMaterial::*)()const>
            ((ClassDB *)&local_88,get_sky_curve,0);
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_88);
  D_METHOD<char_const*>((char *)&local_88,"set_sky_energy_multiplier");
  local_50 = (undefined1  [16])0x0;
  local_58 = 0;
  pMVar1 = create_method_bind<ProceduralSkyMaterial,float>(set_sky_energy_multiplier);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_88,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_88);
  D_METHODP((char *)&local_88,(char ***)"get_sky_energy_multiplier",0);
  ClassDB::bind_method<MethodDefinition,float(ProceduralSkyMaterial::*)()const>
            ((ClassDB *)&local_88,get_sky_energy_multiplier,0);
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_88);
  D_METHOD<char_const*>((char *)&local_88,"set_sky_cover");
  local_50 = (undefined1  [16])0x0;
  local_58 = 0;
  pMVar1 = create_method_bind<ProceduralSkyMaterial,Ref<Texture2D>const&>(set_sky_cover);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_88,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_88);
  D_METHODP((char *)&local_88,(char ***)"get_sky_cover",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = 0;
  pMVar1 = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(pMVar1);
  *(undefined ***)pMVar1 = &PTR__gen_argument_type_001150c0;
  *(code **)(pMVar1 + 0x58) = get_sky_cover;
  *(undefined8 *)(pMVar1 + 0x60) = 0;
  MethodBind::_set_returns(SUB81(pMVar1,0));
  MethodBind::_set_const(SUB81(pMVar1,0));
  MethodBind::_generate_argument_types((int)pMVar1);
  *(undefined4 *)(pMVar1 + 0x34) = 0;
  local_a0 = 0;
  local_98 = "ProceduralSkyMaterial";
  local_90 = 0x15;
  String::parse_latin1((StrRange *)&local_a0);
  StringName::StringName((StringName *)&local_98,(String *)&local_a0,false);
  StringName::operator=((StringName *)(pMVar1 + 0x18),(StringName *)&local_98);
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_88,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_88);
  D_METHOD<char_const*>((char *)&local_88,"set_sky_cover_modulate");
  local_50 = (undefined1  [16])0x0;
  local_58 = 0;
  pMVar1 = create_method_bind<ProceduralSkyMaterial,Color_const&>(set_sky_cover_modulate);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_88,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_88);
  D_METHODP((char *)&local_88,(char ***)"get_sky_cover_modulate",0);
  ClassDB::bind_method<MethodDefinition,Color(ProceduralSkyMaterial::*)()const>
            ((ClassDB *)&local_88,get_sky_cover_modulate,0);
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_88);
  D_METHOD<char_const*>((char *)&local_88,"set_ground_bottom_color");
  local_50 = (undefined1  [16])0x0;
  local_58 = 0;
  pMVar1 = create_method_bind<ProceduralSkyMaterial,Color_const&>(set_ground_bottom_color);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_88,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_88);
  D_METHODP((char *)&local_88,(char ***)"get_ground_bottom_color",0);
  ClassDB::bind_method<MethodDefinition,Color(ProceduralSkyMaterial::*)()const>
            ((ClassDB *)&local_88,get_ground_bottom_color,0);
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_88);
  D_METHOD<char_const*>((char *)&local_88,"set_ground_horizon_color");
  local_50 = (undefined1  [16])0x0;
  local_58 = 0;
  pMVar1 = create_method_bind<ProceduralSkyMaterial,Color_const&>(set_ground_horizon_color);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_88,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_88);
  D_METHODP((char *)&local_88,(char ***)"get_ground_horizon_color",0);
  ClassDB::bind_method<MethodDefinition,Color(ProceduralSkyMaterial::*)()const>
            ((ClassDB *)&local_88,get_ground_horizon_color,0);
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_88);
  D_METHOD<char_const*>((char *)&local_88,"set_ground_curve");
  local_50 = (undefined1  [16])0x0;
  local_58 = 0;
  pMVar1 = create_method_bind<ProceduralSkyMaterial,float>(set_ground_curve);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_88,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_88);
  D_METHODP((char *)&local_88,(char ***)"get_ground_curve",0);
  ClassDB::bind_method<MethodDefinition,float(ProceduralSkyMaterial::*)()const>
            ((ClassDB *)&local_88,get_ground_curve,0);
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_88);
  D_METHOD<char_const*>((char *)&local_88,"set_ground_energy_multiplier");
  local_50 = (undefined1  [16])0x0;
  local_58 = 0;
  pMVar1 = create_method_bind<ProceduralSkyMaterial,float>(set_ground_energy_multiplier);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_88,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_88);
  D_METHODP((char *)&local_88,(char ***)"get_ground_energy_multiplier",0);
  ClassDB::bind_method<MethodDefinition,float(ProceduralSkyMaterial::*)()const>
            ((ClassDB *)&local_88,get_ground_energy_multiplier,0);
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_88);
  D_METHOD<char_const*>((char *)&local_88,"set_sun_angle_max");
  local_50 = (undefined1  [16])0x0;
  local_58 = 0;
  pMVar1 = create_method_bind<ProceduralSkyMaterial,float>(set_sun_angle_max);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_88,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_88);
  D_METHODP((char *)&local_88,(char ***)"get_sun_angle_max",0);
  ClassDB::bind_method<MethodDefinition,float(ProceduralSkyMaterial::*)()const>
            ((ClassDB *)&local_88,get_sun_angle_max,0);
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_88);
  D_METHOD<char_const*>((char *)&local_88,"set_sun_curve");
  local_50 = (undefined1  [16])0x0;
  local_58 = 0;
  pMVar1 = create_method_bind<ProceduralSkyMaterial,float>(set_sun_curve);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_88,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_88);
  D_METHODP((char *)&local_88,(char ***)"get_sun_curve",0);
  ClassDB::bind_method<MethodDefinition,float(ProceduralSkyMaterial::*)()const>
            ((ClassDB *)&local_88,get_sun_curve,0);
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_88);
  D_METHOD<char_const*>((char *)&local_88,"set_use_debanding");
  local_50 = (undefined1  [16])0x0;
  local_58 = 0;
  pMVar1 = create_method_bind<ProceduralSkyMaterial,bool>(set_use_debanding);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_88,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_88);
  D_METHODP((char *)&local_88,(char ***)"get_use_debanding",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = 0;
  pMVar1 = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(pMVar1);
  *(undefined ***)pMVar1 = &PTR__gen_argument_type_00115180;
  *(code **)(pMVar1 + 0x58) = get_use_debanding;
  *(undefined8 *)(pMVar1 + 0x60) = 0;
  MethodBind::_set_returns(SUB81(pMVar1,0));
  MethodBind::_set_const(SUB81(pMVar1,0));
  MethodBind::_generate_argument_types((int)pMVar1);
  *(undefined4 *)(pMVar1 + 0x34) = 0;
  local_a0 = 0;
  local_98 = "ProceduralSkyMaterial";
  local_90 = 0x15;
  String::parse_latin1((StrRange *)&local_a0);
  StringName::StringName((StringName *)&local_98,(String *)&local_a0,false);
  StringName::operator=((StringName *)(pMVar1 + 0x18),(StringName *)&local_98);
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_88,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_88);
  D_METHOD<char_const*>((char *)&local_88,"set_energy_multiplier");
  local_50 = (undefined1  [16])0x0;
  local_58 = 0;
  pMVar1 = create_method_bind<ProceduralSkyMaterial,float>(set_energy_multiplier);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_88,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_88);
  D_METHODP((char *)&local_88,(char ***)"get_energy_multiplier",0);
  ClassDB::bind_method<MethodDefinition,float(ProceduralSkyMaterial::*)()const>
            ((ClassDB *)&local_88,get_energy_multiplier,0);
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_88);
  local_88 = "sky_";
  local_98 = (char *)0x0;
  local_80 = 4;
  String::parse_latin1((StrRange *)&local_98);
  local_88 = "Sky";
  local_a0 = 0;
  local_80 = 3;
  String::parse_latin1((StrRange *)&local_a0);
  local_88 = "ProceduralSkyMaterial";
  local_a8 = 0;
  local_80 = 0x15;
  String::parse_latin1((StrRange *)&local_a8);
  StringName::StringName((StringName *)&local_88,(String *)&local_a8,false);
  ClassDB::add_property_group((StringName *)&local_88,(String *)&local_a0,(String *)&local_98,0);
  if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  _scs_create((char *)&local_a0,true);
  _scs_create((char *)&local_a8,true);
  local_88 = "";
  local_b0 = 0;
  local_b8 = 0;
  local_80 = 0;
  String::parse_latin1((StrRange *)&local_b8);
  local_c0 = 0;
  local_88 = "sky_top_color";
  local_80 = 0xd;
  String::parse_latin1((StrRange *)&local_c0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_88,0x14,(StrRange *)&local_c0,0x15,(StrRange *)&local_b8,6,
             &local_b0);
  local_c8 = 0;
  local_98 = "ProceduralSkyMaterial";
  local_90 = 0x15;
  String::parse_latin1((StrRange *)&local_c8);
  StringName::StringName((StringName *)&local_98,(String *)&local_c8,false);
  ClassDB::add_property
            ((StringName *)&local_98,(PropertyInfo *)&local_88,(StringName *)&local_a8,
             (StringName *)&local_a0,-1);
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  if (StringName::configured != '\0') {
    if (local_b0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00104307;
    }
    if (local_a8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00104307;
    }
    if (local_a0 != 0) {
      StringName::unref();
    }
  }
LAB_00104307:
  _scs_create((char *)&local_a0,true);
  _scs_create((char *)&local_a8,true);
  local_88 = "";
  local_b0 = 0;
  local_b8 = 0;
  local_80 = 0;
  String::parse_latin1((StrRange *)&local_b8);
  local_88 = "sky_horizon_color";
  local_c0 = 0;
  local_80 = 0x11;
  String::parse_latin1((StrRange *)&local_c0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_88,0x14,(StrRange *)&local_c0,0x15,(StrRange *)&local_b8,6,
             &local_b0);
  local_98 = "ProceduralSkyMaterial";
  local_c8 = 0;
  local_90 = 0x15;
  String::parse_latin1((StrRange *)&local_c8);
  StringName::StringName((StringName *)&local_98,(String *)&local_c8,false);
  ClassDB::add_property
            ((StringName *)&local_98,(PropertyInfo *)&local_88,(StringName *)&local_a8,
             (StringName *)&local_a0,-1);
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  if (StringName::configured != '\0') {
    if (local_b0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00104485;
    }
    if (local_a8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00104485;
    }
    if (local_a0 != 0) {
      StringName::unref();
    }
  }
LAB_00104485:
  _scs_create((char *)&local_a0,true);
  _scs_create((char *)&local_a8,true);
  local_88 = "";
  local_b0 = 0;
  local_b8 = 0;
  local_80 = 0;
  String::parse_latin1((StrRange *)&local_b8);
  local_88 = "sky_curve";
  local_c0 = 0;
  local_80 = 9;
  String::parse_latin1((StrRange *)&local_c0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_88,3,(StrRange *)&local_c0,4,(StrRange *)&local_b8,6,&local_b0);
  local_98 = "ProceduralSkyMaterial";
  local_c8 = 0;
  local_90 = 0x15;
  String::parse_latin1((StrRange *)&local_c8);
  StringName::StringName((StringName *)&local_98,(String *)&local_c8,false);
  ClassDB::add_property
            ((StringName *)&local_98,(PropertyInfo *)&local_88,(StringName *)&local_a8,
             (StringName *)&local_a0,-1);
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  if (StringName::configured != '\0') {
    if (local_b0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00104602;
    }
    if (local_a8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00104602;
    }
    if (local_a0 != 0) {
      StringName::unref();
    }
  }
LAB_00104602:
  _scs_create((char *)&local_a0,true);
  _scs_create((char *)&local_a8,true);
  local_88 = "0,64,0.01";
  local_b0 = 0;
  local_b8 = 0;
  local_80 = 9;
  String::parse_latin1((StrRange *)&local_b8);
  local_88 = "sky_energy_multiplier";
  local_c0 = 0;
  local_80 = 0x15;
  String::parse_latin1((StrRange *)&local_c0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_88,3,(StrRange *)&local_c0,1,(StrRange *)&local_b8,6,&local_b0);
  local_98 = "ProceduralSkyMaterial";
  local_c8 = 0;
  local_90 = 0x15;
  String::parse_latin1((StrRange *)&local_c8);
  StringName::StringName((StringName *)&local_98,(String *)&local_c8,false);
  ClassDB::add_property
            ((StringName *)&local_98,(PropertyInfo *)&local_88,(StringName *)&local_a8,
             (StringName *)&local_a0,-1);
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  if (StringName::configured != '\0') {
    if (local_b0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010477f;
    }
    if (local_a8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010477f;
    }
    if (local_a0 != 0) {
      StringName::unref();
    }
  }
LAB_0010477f:
  _scs_create((char *)&local_a0,true);
  _scs_create((char *)&local_a8,true);
  local_88 = "Texture2D";
  local_b0 = 0;
  local_b8 = 0;
  local_80 = 9;
  String::parse_latin1((StrRange *)&local_b8);
  local_88 = "sky_cover";
  local_c0 = 0;
  local_80 = 9;
  String::parse_latin1((StrRange *)&local_c0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_88,0x18,(StrRange *)&local_c0,0x11,(StrRange *)&local_b8,6,
             &local_b0);
  local_98 = "ProceduralSkyMaterial";
  local_c8 = 0;
  local_90 = 0x15;
  String::parse_latin1((StrRange *)&local_c8);
  StringName::StringName((StringName *)&local_98,(String *)&local_c8,false);
  ClassDB::add_property
            ((StringName *)&local_98,(PropertyInfo *)&local_88,(StringName *)&local_a8,
             (StringName *)&local_a0,-1);
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  if (StringName::configured != '\0') {
    if (local_b0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001048fd;
    }
    if (local_a8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001048fd;
    }
    if (local_a0 != 0) {
      StringName::unref();
    }
  }
LAB_001048fd:
  _scs_create((char *)&local_a0,true);
  _scs_create((char *)&local_a8,true);
  local_88 = "";
  local_b0 = 0;
  local_b8 = 0;
  local_80 = 0;
  String::parse_latin1((StrRange *)&local_b8);
  local_88 = "sky_cover_modulate";
  local_c0 = 0;
  local_80 = 0x12;
  String::parse_latin1((StrRange *)&local_c0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_88,0x14,(StrRange *)&local_c0,0,(StrRange *)&local_b8,6,
             &local_b0);
  local_98 = "ProceduralSkyMaterial";
  local_c8 = 0;
  local_90 = 0x15;
  String::parse_latin1((StrRange *)&local_c8);
  StringName::StringName((StringName *)&local_98,(String *)&local_c8,false);
  ClassDB::add_property
            ((StringName *)&local_98,(PropertyInfo *)&local_88,(StringName *)&local_a8,
             (StringName *)&local_a0,-1);
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  if (StringName::configured != '\0') {
    if (local_b0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00104a79;
    }
    if (local_a8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00104a79;
    }
    if (local_a0 != 0) {
      StringName::unref();
    }
  }
LAB_00104a79:
  local_98 = (char *)0x0;
  local_88 = "ground_";
  local_80 = 7;
  String::parse_latin1((StrRange *)&local_98);
  local_88 = "Ground";
  local_a0 = 0;
  local_80 = 6;
  String::parse_latin1((StrRange *)&local_a0);
  local_88 = "ProceduralSkyMaterial";
  local_a8 = 0;
  local_80 = 0x15;
  String::parse_latin1((StrRange *)&local_a8);
  StringName::StringName((StringName *)&local_88,(String *)&local_a8,false);
  ClassDB::add_property_group((StringName *)&local_88,(String *)&local_a0,(String *)&local_98,0);
  if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  _scs_create((char *)&local_a0,true);
  _scs_create((char *)&local_a8,true);
  local_88 = "";
  local_b0 = 0;
  local_b8 = 0;
  local_80 = 0;
  String::parse_latin1((StrRange *)&local_b8);
  local_88 = "ground_bottom_color";
  local_c0 = 0;
  local_80 = 0x13;
  String::parse_latin1((StrRange *)&local_c0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_88,0x14,(StrRange *)&local_c0,0x15,(StrRange *)&local_b8,6,
             &local_b0);
  local_98 = "ProceduralSkyMaterial";
  local_c8 = 0;
  local_90 = 0x15;
  String::parse_latin1((StrRange *)&local_c8);
  StringName::StringName((StringName *)&local_98,(String *)&local_c8,false);
  ClassDB::add_property
            ((StringName *)&local_98,(PropertyInfo *)&local_88,(StringName *)&local_a8,
             (StringName *)&local_a0,-1);
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  if (StringName::configured != '\0') {
    if (local_b0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00104cc0;
    }
    if (local_a8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00104cc0;
    }
    if (local_a0 != 0) {
      StringName::unref();
    }
  }
LAB_00104cc0:
  _scs_create((char *)&local_a0,true);
  _scs_create((char *)&local_a8,true);
  local_88 = "";
  local_b0 = 0;
  local_b8 = 0;
  local_80 = 0;
  String::parse_latin1((StrRange *)&local_b8);
  local_88 = "ground_horizon_color";
  local_c0 = 0;
  local_80 = 0x14;
  String::parse_latin1((StrRange *)&local_c0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_88,0x14,(StrRange *)&local_c0,0x15,(StrRange *)&local_b8,6,
             &local_b0);
  local_98 = "ProceduralSkyMaterial";
  local_c8 = 0;
  local_90 = 0x15;
  String::parse_latin1((StrRange *)&local_c8);
  StringName::StringName((StringName *)&local_98,(String *)&local_c8,false);
  ClassDB::add_property
            ((StringName *)&local_98,(PropertyInfo *)&local_88,(StringName *)&local_a8,
             (StringName *)&local_a0,-1);
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  if (StringName::configured != '\0') {
    if (local_b0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00104e3d;
    }
    if (local_a8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00104e3d;
    }
    if (local_a0 != 0) {
      StringName::unref();
    }
  }
LAB_00104e3d:
  _scs_create((char *)&local_a0,true);
  _scs_create((char *)&local_a8,true);
  local_88 = "";
  local_b0 = 0;
  local_b8 = 0;
  local_80 = 0;
  String::parse_latin1((StrRange *)&local_b8);
  local_88 = "ground_curve";
  local_c0 = 0;
  local_80 = 0xc;
  String::parse_latin1((StrRange *)&local_c0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_88,3,(StrRange *)&local_c0,4,(StrRange *)&local_b8,6,&local_b0);
  local_98 = "ProceduralSkyMaterial";
  local_c8 = 0;
  local_90 = 0x15;
  String::parse_latin1((StrRange *)&local_c8);
  StringName::StringName((StringName *)&local_98,(String *)&local_c8,false);
  ClassDB::add_property
            ((StringName *)&local_98,(PropertyInfo *)&local_88,(StringName *)&local_a8,
             (StringName *)&local_a0,-1);
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  if (StringName::configured != '\0') {
    if (local_b0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00104fba;
    }
    if (local_a8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00104fba;
    }
    if (local_a0 != 0) {
      StringName::unref();
    }
  }
LAB_00104fba:
  _scs_create((char *)&local_a0,true);
  _scs_create((char *)&local_a8,true);
  local_88 = "0,64,0.01";
  local_b0 = 0;
  local_b8 = 0;
  local_80 = 9;
  String::parse_latin1((StrRange *)&local_b8);
  local_88 = "ground_energy_multiplier";
  local_c0 = 0;
  local_80 = 0x18;
  String::parse_latin1((StrRange *)&local_c0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_88,3,(StrRange *)&local_c0,1,(StrRange *)&local_b8,6,&local_b0);
  local_98 = "ProceduralSkyMaterial";
  local_c8 = 0;
  local_90 = 0x15;
  String::parse_latin1((StrRange *)&local_c8);
  StringName::StringName((StringName *)&local_98,(String *)&local_c8,false);
  ClassDB::add_property
            ((StringName *)&local_98,(PropertyInfo *)&local_88,(StringName *)&local_a8,
             (StringName *)&local_a0,-1);
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  if (StringName::configured != '\0') {
    if (local_b0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00105138;
    }
    if (local_a8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00105138;
    }
    if (local_a0 != 0) {
      StringName::unref();
    }
  }
LAB_00105138:
  local_98 = (char *)0x0;
  local_88 = "sun_";
  local_80 = 4;
  String::parse_latin1((StrRange *)&local_98);
  local_88 = "Sun";
  local_a0 = 0;
  local_80 = 3;
  String::parse_latin1((StrRange *)&local_a0);
  local_88 = "ProceduralSkyMaterial";
  local_a8 = 0;
  local_80 = 0x15;
  String::parse_latin1((StrRange *)&local_a8);
  StringName::StringName((StringName *)&local_88,(String *)&local_a8,false);
  ClassDB::add_property_group((StringName *)&local_88,(String *)&local_a0,(String *)&local_98,0);
  if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  _scs_create((char *)&local_a0,true);
  _scs_create((char *)&local_a8,true);
  local_88 = "0,360,0.01,degrees";
  local_b0 = 0;
  local_b8 = 0;
  local_80 = 0x12;
  String::parse_latin1((StrRange *)&local_b8);
  local_88 = "sun_angle_max";
  local_c0 = 0;
  local_80 = 0xd;
  String::parse_latin1((StrRange *)&local_c0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_88,3,(StrRange *)&local_c0,1,(StrRange *)&local_b8,6,&local_b0);
  local_98 = "ProceduralSkyMaterial";
  local_c8 = 0;
  local_90 = 0x15;
  String::parse_latin1((StrRange *)&local_c8);
  StringName::StringName((StringName *)&local_98,(String *)&local_c8,false);
  ClassDB::add_property
            ((StringName *)&local_98,(PropertyInfo *)&local_88,(StringName *)&local_a8,
             (StringName *)&local_a0,-1);
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  if (StringName::configured != '\0') {
    if (local_b0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00105380;
    }
    if (local_a8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00105380;
    }
    if (local_a0 != 0) {
      StringName::unref();
    }
  }
LAB_00105380:
  _scs_create((char *)&local_a0,true);
  _scs_create((char *)&local_a8,true);
  local_88 = "";
  local_b0 = 0;
  local_b8 = 0;
  local_80 = 0;
  String::parse_latin1((StrRange *)&local_b8);
  local_88 = "sun_curve";
  local_c0 = 0;
  local_80 = 9;
  String::parse_latin1((StrRange *)&local_c0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_88,3,(StrRange *)&local_c0,4,(StrRange *)&local_b8,6,&local_b0);
  local_98 = "ProceduralSkyMaterial";
  local_c8 = 0;
  local_90 = 0x15;
  String::parse_latin1((StrRange *)&local_c8);
  StringName::StringName((StringName *)&local_98,(String *)&local_c8,false);
  ClassDB::add_property
            ((StringName *)&local_98,(PropertyInfo *)&local_88,(StringName *)&local_a8,
             (StringName *)&local_a0,-1);
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  if (StringName::configured != '\0') {
    if (local_b0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001054fe;
    }
    if (local_a8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001054fe;
    }
    if (local_a0 != 0) {
      StringName::unref();
    }
  }
LAB_001054fe:
  local_98 = (char *)0x0;
  local_88 = "";
  local_80 = 0;
  String::parse_latin1((StrRange *)&local_98);
  local_88 = "";
  local_a0 = 0;
  local_80 = 0;
  String::parse_latin1((StrRange *)&local_a0);
  local_88 = "ProceduralSkyMaterial";
  local_a8 = 0;
  local_80 = 0x15;
  String::parse_latin1((StrRange *)&local_a8);
  StringName::StringName((StringName *)&local_88,(String *)&local_a8,false);
  ClassDB::add_property_group((StringName *)&local_88,(String *)&local_a0,(String *)&local_98,0);
  if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  _scs_create((char *)&local_a0,true);
  _scs_create((char *)&local_a8,true);
  local_88 = "";
  local_b0 = 0;
  local_b8 = 0;
  local_80 = 0;
  String::parse_latin1((StrRange *)&local_b8);
  local_88 = "use_debanding";
  local_c0 = 0;
  local_80 = 0xd;
  String::parse_latin1((StrRange *)&local_c0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_88,1,(StrRange *)&local_c0,0,(StrRange *)&local_b8,6,&local_b0);
  local_98 = "ProceduralSkyMaterial";
  local_c8 = 0;
  local_90 = 0x15;
  String::parse_latin1((StrRange *)&local_c8);
  StringName::StringName((StringName *)&local_98,(String *)&local_c8,false);
  ClassDB::add_property
            ((StringName *)&local_98,(PropertyInfo *)&local_88,(StringName *)&local_a8,
             (StringName *)&local_a0,-1);
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  if (StringName::configured != '\0') {
    if (local_b0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00105741;
    }
    if (local_a8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00105741;
    }
    if (local_a0 != 0) {
      StringName::unref();
    }
  }
LAB_00105741:
  _scs_create((char *)&local_a0,true);
  _scs_create((char *)&local_a8,true);
  local_88 = "0,128,0.01";
  local_b0 = 0;
  local_b8 = 0;
  local_80 = 10;
  String::parse_latin1((StrRange *)&local_b8);
  local_88 = "energy_multiplier";
  local_c0 = 0;
  local_80 = 0x11;
  String::parse_latin1((StrRange *)&local_c0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_88,3,(StrRange *)&local_c0,1,(StrRange *)&local_b8,6,&local_b0);
  local_98 = "ProceduralSkyMaterial";
  local_c8 = 0;
  local_90 = 0x15;
  String::parse_latin1((StrRange *)&local_c8);
  StringName::StringName((StringName *)&local_98,(String *)&local_c8,false);
  ClassDB::add_property
            ((StringName *)&local_98,(PropertyInfo *)&local_88,(StringName *)&local_a8,
             (StringName *)&local_a0,-1);
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  if (StringName::configured != '\0') {
    if (local_b0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001058be;
    }
    if (local_a8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001058be;
    }
    if (local_a0 != 0) {
      StringName::unref();
    }
  }
LAB_001058be:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PanoramaSkyMaterial::_bind_methods() */

void PanoramaSkyMaterial::_bind_methods(void)

{
  MethodBind *pMVar1;
  uint uVar2;
  long in_FS_OFFSET;
  CowData<char32_t> *local_e0;
  undefined8 local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  char *local_a8;
  undefined8 local_a0;
  char *local_98;
  undefined8 local_90;
  char *local_88;
  int local_80;
  undefined8 local_78;
  undefined4 local_70;
  char *local_68;
  undefined8 local_60;
  char **local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = 0;
  local_68 = "texture";
  uVar2 = (uint)&local_58;
  local_58 = &local_68;
  D_METHODP((char *)&local_98,(char ***)"set_panorama",uVar2);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar1 = create_method_bind<PanoramaSkyMaterial,Ref<Texture2D>const&>(set_panorama);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_98);
  D_METHODP((char *)&local_98,(char ***)"get_panorama",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar1 = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(pMVar1);
  *(undefined ***)pMVar1 = &PTR__gen_argument_type_001150c0;
  *(code **)(pMVar1 + 0x58) = get_panorama;
  *(undefined8 *)(pMVar1 + 0x60) = 0;
  MethodBind::_set_returns(SUB81(pMVar1,0));
  MethodBind::_set_const(SUB81(pMVar1,0));
  MethodBind::_generate_argument_types((int)pMVar1);
  *(undefined4 *)(pMVar1 + 0x34) = 0;
  local_a8 = "PanoramaSkyMaterial";
  local_b0 = 0;
  local_a0 = 0x13;
  String::parse_latin1((StrRange *)&local_b0);
  StringName::StringName((StringName *)&local_a8,(String *)&local_b0,false);
  StringName::operator=((StringName *)(pMVar1 + 0x18),(StringName *)&local_a8);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_98);
  local_68 = "enabled";
  local_60 = 0;
  local_58 = &local_68;
  D_METHODP((char *)&local_98,(char ***)"set_filtering_enabled",uVar2);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar1 = create_method_bind<PanoramaSkyMaterial,bool>(set_filtering_enabled);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_98);
  D_METHODP((char *)&local_98,(char ***)"is_filtering_enabled",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar1 = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(pMVar1);
  *(undefined ***)pMVar1 = &PTR__gen_argument_type_00115180;
  *(code **)(pMVar1 + 0x58) = is_filtering_enabled;
  *(undefined8 *)(pMVar1 + 0x60) = 0;
  MethodBind::_set_returns(SUB81(pMVar1,0));
  MethodBind::_set_const(SUB81(pMVar1,0));
  MethodBind::_generate_argument_types((int)pMVar1);
  *(undefined4 *)(pMVar1 + 0x34) = 0;
  local_a8 = "PanoramaSkyMaterial";
  local_b0 = 0;
  local_a0 = 0x13;
  String::parse_latin1((StrRange *)&local_b0);
  StringName::StringName((StringName *)&local_a8,(String *)&local_b0,false);
  StringName::operator=((StringName *)(pMVar1 + 0x18),(StringName *)&local_a8);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_98);
  local_68 = "multiplier";
  local_60 = 0;
  local_58 = &local_68;
  D_METHODP((char *)&local_98,(char ***)"set_energy_multiplier",uVar2);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar1 = create_method_bind<PanoramaSkyMaterial,float>(set_energy_multiplier);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_98);
  D_METHODP((char *)&local_98,(char ***)"get_energy_multiplier",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar1 = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(pMVar1);
  *(undefined ***)pMVar1 = &PTR__gen_argument_type_00115000;
  *(code **)(pMVar1 + 0x58) = get_energy_multiplier;
  *(undefined8 *)(pMVar1 + 0x60) = 0;
  MethodBind::_set_returns(SUB81(pMVar1,0));
  MethodBind::_set_const(SUB81(pMVar1,0));
  MethodBind::_generate_argument_types((int)pMVar1);
  *(undefined4 *)(pMVar1 + 0x34) = 0;
  local_a8 = "PanoramaSkyMaterial";
  local_b0 = 0;
  local_a0 = 0x13;
  String::parse_latin1((StrRange *)&local_b0);
  StringName::StringName((StringName *)&local_a8,(String *)&local_b0,false);
  StringName::operator=((StringName *)(pMVar1 + 0x18),(StringName *)&local_a8);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_98);
  _scs_create((char *)&local_b0,true);
  _scs_create((char *)&local_b8,true);
  local_98 = "Texture2D";
  local_c0 = 0;
  local_c8 = 0;
  local_90 = 9;
  String::parse_latin1((StrRange *)&local_c8);
  local_d0 = 0;
  local_98 = "panorama";
  local_90 = 8;
  String::parse_latin1((StrRange *)&local_d0);
  local_98 = (char *)CONCAT44(local_98._4_4_,0x18);
  local_90 = 0;
  if (local_d0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_90,(CowData *)&local_d0);
  }
  local_88 = (char *)0x0;
  local_80 = 0x11;
  local_78 = 0;
  if (local_c8 == 0) {
LAB_00106642:
    local_e0 = (CowData<char32_t> *)&local_78;
    local_70 = 6;
    StringName::StringName((StringName *)&local_a8,(String *)local_e0,false);
    if (local_88 == local_a8) {
      if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_88 = local_a8;
    }
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_78,(CowData *)&local_c8);
    local_70 = 6;
    if (local_80 == 0x11) goto LAB_00106642;
    StringName::operator=((StringName *)&local_88,(StringName *)&local_c0);
  }
  local_e0 = (CowData<char32_t> *)&local_78;
  local_d8 = 0;
  local_a8 = "PanoramaSkyMaterial";
  local_a0 = 0x13;
  String::parse_latin1((StrRange *)&local_d8);
  StringName::StringName((StringName *)&local_a8,(String *)&local_d8,false);
  ClassDB::add_property
            ((StringName *)&local_a8,(PropertyInfo *)&local_98,(StringName *)&local_b8,
             (StringName *)&local_b0,-1);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  if ((((StringName::configured != '\0') &&
       ((local_c0 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_b8 == 0 || (StringName::unref(), StringName::configured != '\0')))) && (local_b0 != 0)
     ) {
    StringName::unref();
  }
  _scs_create((char *)&local_b0,true);
  _scs_create((char *)&local_b8,true);
  local_98 = "";
  local_c0 = 0;
  local_c8 = 0;
  local_90 = 0;
  String::parse_latin1((StrRange *)&local_c8);
  local_d0 = 0;
  local_98 = "filter";
  local_90 = 6;
  String::parse_latin1((StrRange *)&local_d0);
  local_98 = (char *)CONCAT44(local_98._4_4_,1);
  local_90 = 0;
  if (local_d0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_90,(CowData *)&local_d0);
  }
  local_88 = (char *)0x0;
  local_80 = 0;
  local_78 = 0;
  if (local_c8 == 0) {
LAB_00106318:
    local_70 = 6;
    StringName::operator=((StringName *)&local_88,(StringName *)&local_c0);
  }
  else {
    CowData<char32_t>::_ref(local_e0,(CowData *)&local_c8);
    local_70 = 6;
    if (local_80 != 0x11) goto LAB_00106318;
    StringName::StringName((StringName *)&local_a8,(String *)local_e0,false);
    if (local_88 == local_a8) {
      if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_88 = local_a8;
    }
  }
  local_d8 = 0;
  local_a8 = "PanoramaSkyMaterial";
  local_a0 = 0x13;
  String::parse_latin1((StrRange *)&local_d8);
  StringName::StringName((StringName *)&local_a8,(String *)&local_d8,false);
  ClassDB::add_property
            ((StringName *)&local_a8,(PropertyInfo *)&local_98,(StringName *)&local_b8,
             (StringName *)&local_b0,-1);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  if ((((StringName::configured != '\0') &&
       ((local_c0 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_b8 == 0 || (StringName::unref(), StringName::configured != '\0')))) && (local_b0 != 0)
     ) {
    StringName::unref();
  }
  _scs_create((char *)&local_b0,true);
  _scs_create((char *)&local_b8,true);
  local_98 = "0,128,0.01";
  local_c0 = 0;
  local_c8 = 0;
  local_90 = 10;
  String::parse_latin1((StrRange *)&local_c8);
  local_d0 = 0;
  local_98 = "energy_multiplier";
  local_90 = 0x11;
  String::parse_latin1((StrRange *)&local_d0);
  local_98 = (char *)CONCAT44(local_98._4_4_,3);
  local_90 = 0;
  if (local_d0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_90,(CowData *)&local_d0);
  }
  local_88 = (char *)0x0;
  local_80 = 1;
  local_78 = 0;
  if (local_c8 != 0) {
    CowData<char32_t>::_ref(local_e0,(CowData *)&local_c8);
    local_70 = 6;
    if (local_80 == 0x11) {
      StringName::StringName((StringName *)&local_a8,(String *)local_e0,false);
      if (local_88 == local_a8) {
        if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_88 = local_a8;
      }
      goto LAB_0010652f;
    }
  }
  local_70 = 6;
  StringName::operator=((StringName *)&local_88,(StringName *)&local_c0);
LAB_0010652f:
  local_d8 = 0;
  local_a8 = "PanoramaSkyMaterial";
  local_a0 = 0x13;
  String::parse_latin1((StrRange *)&local_d8);
  StringName::StringName((StringName *)&local_a8,(String *)&local_d8,false);
  ClassDB::add_property
            ((StringName *)&local_a8,(PropertyInfo *)&local_98,(StringName *)&local_b8,
             (StringName *)&local_b0,-1);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  if ((((StringName::configured != '\0') &&
       ((local_c0 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_b8 == 0 || (StringName::unref(), StringName::configured != '\0')))) && (local_b0 != 0)
     ) {
    StringName::unref();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* PhysicalSkyMaterial::_bind_methods() */

void PhysicalSkyMaterial::_bind_methods(void)

{
  MethodBind *pMVar1;
  long in_FS_OFFSET;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  char *local_98;
  undefined8 local_90;
  char *local_88;
  undefined8 local_80;
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  D_METHOD<char_const*>((char *)&local_88,"set_rayleigh_coefficient");
  local_50 = (undefined1  [16])0x0;
  local_58 = 0;
  pMVar1 = create_method_bind<PhysicalSkyMaterial,float>(set_rayleigh_coefficient);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_88,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_88);
  D_METHODP((char *)&local_88,(char ***)"get_rayleigh_coefficient",0);
  ClassDB::bind_method<MethodDefinition,float(PhysicalSkyMaterial::*)()const>
            ((ClassDB *)&local_88,get_rayleigh_coefficient,0);
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_88);
  D_METHOD<char_const*>((char *)&local_88,"set_rayleigh_color");
  local_50 = (undefined1  [16])0x0;
  local_58 = 0;
  pMVar1 = create_method_bind<PhysicalSkyMaterial,Color>(set_rayleigh_color);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_88,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_88);
  D_METHODP((char *)&local_88,(char ***)"get_rayleigh_color",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = 0;
  pMVar1 = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(pMVar1);
  *(undefined ***)pMVar1 = &PTR__gen_argument_type_00114f40;
  *(code **)(pMVar1 + 0x58) = get_rayleigh_color;
  *(undefined8 *)(pMVar1 + 0x60) = 0;
  MethodBind::_set_returns(SUB81(pMVar1,0));
  MethodBind::_set_const(SUB81(pMVar1,0));
  MethodBind::_generate_argument_types((int)pMVar1);
  *(undefined4 *)(pMVar1 + 0x34) = 0;
  local_a0 = 0;
  local_98 = "PhysicalSkyMaterial";
  local_90 = 0x13;
  String::parse_latin1((StrRange *)&local_a0);
  StringName::StringName((StringName *)&local_98,(String *)&local_a0,false);
  StringName::operator=((StringName *)(pMVar1 + 0x18),(StringName *)&local_98);
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_88,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_88);
  D_METHOD<char_const*>((char *)&local_88,"set_mie_coefficient");
  local_50 = (undefined1  [16])0x0;
  local_58 = 0;
  pMVar1 = create_method_bind<PhysicalSkyMaterial,float>(set_mie_coefficient);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_88,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_88);
  D_METHODP((char *)&local_88,(char ***)"get_mie_coefficient",0);
  ClassDB::bind_method<MethodDefinition,float(PhysicalSkyMaterial::*)()const>
            ((ClassDB *)&local_88,get_mie_coefficient,0);
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_88);
  D_METHOD<char_const*>((char *)&local_88,"set_mie_eccentricity");
  local_50 = (undefined1  [16])0x0;
  local_58 = 0;
  pMVar1 = create_method_bind<PhysicalSkyMaterial,float>(set_mie_eccentricity);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_88,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_88);
  D_METHODP((char *)&local_88,(char ***)"get_mie_eccentricity",0);
  ClassDB::bind_method<MethodDefinition,float(PhysicalSkyMaterial::*)()const>
            ((ClassDB *)&local_88,get_mie_eccentricity,0);
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_88);
  D_METHOD<char_const*>((char *)&local_88,"set_mie_color");
  local_50 = (undefined1  [16])0x0;
  local_58 = 0;
  pMVar1 = create_method_bind<PhysicalSkyMaterial,Color>(set_mie_color);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_88,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_88);
  D_METHODP((char *)&local_88,(char ***)"get_mie_color",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = 0;
  pMVar1 = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(pMVar1);
  *(undefined ***)pMVar1 = &PTR__gen_argument_type_00114f40;
  *(code **)(pMVar1 + 0x58) = get_mie_color;
  *(undefined8 *)(pMVar1 + 0x60) = 0;
  MethodBind::_set_returns(SUB81(pMVar1,0));
  MethodBind::_set_const(SUB81(pMVar1,0));
  MethodBind::_generate_argument_types((int)pMVar1);
  *(undefined4 *)(pMVar1 + 0x34) = 0;
  local_a0 = 0;
  local_98 = "PhysicalSkyMaterial";
  local_90 = 0x13;
  String::parse_latin1((StrRange *)&local_a0);
  StringName::StringName((StringName *)&local_98,(String *)&local_a0,false);
  StringName::operator=((StringName *)(pMVar1 + 0x18),(StringName *)&local_98);
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_88,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_88);
  D_METHOD<char_const*>((char *)&local_88,"set_turbidity");
  local_50 = (undefined1  [16])0x0;
  local_58 = 0;
  pMVar1 = create_method_bind<PhysicalSkyMaterial,float>(set_turbidity);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_88,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_88);
  D_METHODP((char *)&local_88,(char ***)"get_turbidity",0);
  ClassDB::bind_method<MethodDefinition,float(PhysicalSkyMaterial::*)()const>
            ((ClassDB *)&local_88,get_turbidity,0);
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_88);
  D_METHOD<char_const*>((char *)&local_88,"set_sun_disk_scale");
  local_50 = (undefined1  [16])0x0;
  local_58 = 0;
  pMVar1 = create_method_bind<PhysicalSkyMaterial,float>(set_sun_disk_scale);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_88,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_88);
  D_METHODP((char *)&local_88,(char ***)"get_sun_disk_scale",0);
  ClassDB::bind_method<MethodDefinition,float(PhysicalSkyMaterial::*)()const>
            ((ClassDB *)&local_88,get_sun_disk_scale,0);
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_88);
  D_METHOD<char_const*>((char *)&local_88,"set_ground_color");
  local_50 = (undefined1  [16])0x0;
  local_58 = 0;
  pMVar1 = create_method_bind<PhysicalSkyMaterial,Color>(set_ground_color);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_88,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_88);
  D_METHODP((char *)&local_88,(char ***)"get_ground_color",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = 0;
  pMVar1 = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(pMVar1);
  *(undefined ***)pMVar1 = &PTR__gen_argument_type_00114f40;
  *(code **)(pMVar1 + 0x58) = get_ground_color;
  *(undefined8 *)(pMVar1 + 0x60) = 0;
  MethodBind::_set_returns(SUB81(pMVar1,0));
  MethodBind::_set_const(SUB81(pMVar1,0));
  MethodBind::_generate_argument_types((int)pMVar1);
  *(undefined4 *)(pMVar1 + 0x34) = 0;
  local_a0 = 0;
  local_98 = "PhysicalSkyMaterial";
  local_90 = 0x13;
  String::parse_latin1((StrRange *)&local_a0);
  StringName::StringName((StringName *)&local_98,(String *)&local_a0,false);
  StringName::operator=((StringName *)(pMVar1 + 0x18),(StringName *)&local_98);
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_88,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_88);
  D_METHOD<char_const*>((char *)&local_88,"set_energy_multiplier");
  local_50 = (undefined1  [16])0x0;
  local_58 = 0;
  pMVar1 = create_method_bind<PhysicalSkyMaterial,float>(set_energy_multiplier);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_88,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_88);
  D_METHODP((char *)&local_88,(char ***)"get_energy_multiplier",0);
  ClassDB::bind_method<MethodDefinition,float(PhysicalSkyMaterial::*)()const>
            ((ClassDB *)&local_88,get_energy_multiplier,0);
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_88);
  D_METHOD<char_const*>((char *)&local_88,"set_use_debanding");
  local_50 = (undefined1  [16])0x0;
  local_58 = 0;
  pMVar1 = create_method_bind<PhysicalSkyMaterial,bool>(set_use_debanding);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_88,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_88);
  D_METHODP((char *)&local_88,(char ***)"get_use_debanding",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = 0;
  pMVar1 = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(pMVar1);
  *(undefined ***)pMVar1 = &PTR__gen_argument_type_00115180;
  *(code **)(pMVar1 + 0x58) = get_use_debanding;
  *(undefined8 *)(pMVar1 + 0x60) = 0;
  MethodBind::_set_returns(SUB81(pMVar1,0));
  MethodBind::_set_const(SUB81(pMVar1,0));
  MethodBind::_generate_argument_types((int)pMVar1);
  *(undefined4 *)(pMVar1 + 0x34) = 0;
  local_a0 = 0;
  local_98 = "PhysicalSkyMaterial";
  local_90 = 0x13;
  String::parse_latin1((StrRange *)&local_a0);
  StringName::StringName((StringName *)&local_98,(String *)&local_a0,false);
  StringName::operator=((StringName *)(pMVar1 + 0x18),(StringName *)&local_98);
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_88,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_88);
  D_METHOD<char_const*>((char *)&local_88,"set_night_sky");
  local_50 = (undefined1  [16])0x0;
  local_58 = 0;
  pMVar1 = create_method_bind<PhysicalSkyMaterial,Ref<Texture2D>const&>(set_night_sky);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_88,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_88);
  D_METHODP((char *)&local_88,(char ***)"get_night_sky",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = 0;
  pMVar1 = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(pMVar1);
  *(undefined ***)pMVar1 = &PTR__gen_argument_type_001150c0;
  *(code **)(pMVar1 + 0x58) = get_night_sky;
  *(undefined8 *)(pMVar1 + 0x60) = 0;
  MethodBind::_set_returns(SUB81(pMVar1,0));
  MethodBind::_set_const(SUB81(pMVar1,0));
  MethodBind::_generate_argument_types((int)pMVar1);
  *(undefined4 *)(pMVar1 + 0x34) = 0;
  local_a0 = 0;
  local_98 = "PhysicalSkyMaterial";
  local_90 = 0x13;
  String::parse_latin1((StrRange *)&local_a0);
  StringName::StringName((StringName *)&local_98,(String *)&local_a0,false);
  StringName::operator=((StringName *)(pMVar1 + 0x18),(StringName *)&local_98);
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_88,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_88);
  local_88 = "rayleigh_";
  local_98 = (char *)0x0;
  local_80 = 9;
  String::parse_latin1((StrRange *)&local_98);
  local_88 = "Rayleigh";
  local_a0 = 0;
  local_80 = 8;
  String::parse_latin1((StrRange *)&local_a0);
  local_88 = "PhysicalSkyMaterial";
  local_a8 = 0;
  local_80 = 0x13;
  String::parse_latin1((StrRange *)&local_a8);
  StringName::StringName((StringName *)&local_88,(String *)&local_a8,false);
  ClassDB::add_property_group((StringName *)&local_88,(String *)&local_a0,(String *)&local_98,0);
  if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  _scs_create((char *)&local_a0,true);
  _scs_create((char *)&local_a8,true);
  local_b0 = 0;
  local_88 = "0,64,0.01";
  local_b8 = 0;
  local_80 = 9;
  String::parse_latin1((StrRange *)&local_b8);
  local_c0 = 0;
  local_88 = "rayleigh_coefficient";
  local_80 = 0x14;
  String::parse_latin1((StrRange *)&local_c0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_88,3,(StrRange *)&local_c0,1,(StrRange *)&local_b8,6,&local_b0);
  local_98 = "PhysicalSkyMaterial";
  local_c8 = 0;
  local_90 = 0x13;
  String::parse_latin1((StrRange *)&local_c8);
  StringName::StringName((StringName *)&local_98,(String *)&local_c8,false);
  ClassDB::add_property
            ((StringName *)&local_98,(PropertyInfo *)&local_88,(StringName *)&local_a8,
             (StringName *)&local_a0,-1);
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  if (StringName::configured != '\0') {
    if (local_b0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00107591;
    }
    if (local_a8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00107591;
    }
    if (local_a0 != 0) {
      StringName::unref();
    }
  }
LAB_00107591:
  _scs_create((char *)&local_a0,true);
  _scs_create((char *)&local_a8,true);
  local_88 = "";
  local_b0 = 0;
  local_b8 = 0;
  local_80 = 0;
  String::parse_latin1((StrRange *)&local_b8);
  local_88 = "rayleigh_color";
  local_c0 = 0;
  local_80 = 0xe;
  String::parse_latin1((StrRange *)&local_c0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_88,0x14,(StrRange *)&local_c0,0x15,(StrRange *)&local_b8,6,
             &local_b0);
  local_98 = "PhysicalSkyMaterial";
  local_c8 = 0;
  local_90 = 0x13;
  String::parse_latin1((StrRange *)&local_c8);
  StringName::StringName((StringName *)&local_98,(String *)&local_c8,false);
  ClassDB::add_property
            ((StringName *)&local_98,(PropertyInfo *)&local_88,(StringName *)&local_a8,
             (StringName *)&local_a0,-1);
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  if (StringName::configured != '\0') {
    if (local_b0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010770e;
    }
    if (local_a8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010770e;
    }
    if (local_a0 != 0) {
      StringName::unref();
    }
  }
LAB_0010770e:
  local_98 = (char *)0x0;
  local_88 = "mie_";
  local_80 = 4;
  String::parse_latin1((StrRange *)&local_98);
  local_88 = "Mie";
  local_a0 = 0;
  local_80 = 3;
  String::parse_latin1((StrRange *)&local_a0);
  local_88 = "PhysicalSkyMaterial";
  local_a8 = 0;
  local_80 = 0x13;
  String::parse_latin1((StrRange *)&local_a8);
  StringName::StringName((StringName *)&local_88,(String *)&local_a8,false);
  ClassDB::add_property_group((StringName *)&local_88,(String *)&local_a0,(String *)&local_98,0);
  if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  _scs_create((char *)&local_a0,true);
  _scs_create((char *)&local_a8,true);
  local_88 = "0,1,0.001";
  local_b0 = 0;
  local_b8 = 0;
  local_80 = 9;
  String::parse_latin1((StrRange *)&local_b8);
  local_88 = "mie_coefficient";
  local_c0 = 0;
  local_80 = 0xf;
  String::parse_latin1((StrRange *)&local_c0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_88,3,(StrRange *)&local_c0,1,(StrRange *)&local_b8,6,&local_b0);
  local_98 = "PhysicalSkyMaterial";
  local_c8 = 0;
  local_90 = 0x13;
  String::parse_latin1((StrRange *)&local_c8);
  StringName::StringName((StringName *)&local_98,(String *)&local_c8,false);
  ClassDB::add_property
            ((StringName *)&local_98,(PropertyInfo *)&local_88,(StringName *)&local_a8,
             (StringName *)&local_a0,-1);
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  if (StringName::configured != '\0') {
    if (local_b0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00107955;
    }
    if (local_a8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00107955;
    }
    if (local_a0 != 0) {
      StringName::unref();
    }
  }
LAB_00107955:
  _scs_create((char *)&local_a0,true);
  _scs_create((char *)&local_a8,true);
  local_88 = "-1,1,0.01";
  local_b0 = 0;
  local_b8 = 0;
  local_80 = 9;
  String::parse_latin1((StrRange *)&local_b8);
  local_88 = "mie_eccentricity";
  local_c0 = 0;
  local_80 = 0x10;
  String::parse_latin1((StrRange *)&local_c0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_88,3,(StrRange *)&local_c0,1,(StrRange *)&local_b8,6,&local_b0);
  local_98 = "PhysicalSkyMaterial";
  local_c8 = 0;
  local_90 = 0x13;
  String::parse_latin1((StrRange *)&local_c8);
  StringName::StringName((StringName *)&local_98,(String *)&local_c8,false);
  ClassDB::add_property
            ((StringName *)&local_98,(PropertyInfo *)&local_88,(StringName *)&local_a8,
             (StringName *)&local_a0,-1);
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  if (StringName::configured != '\0') {
    if (local_b0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00107ad2;
    }
    if (local_a8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00107ad2;
    }
    if (local_a0 != 0) {
      StringName::unref();
    }
  }
LAB_00107ad2:
  _scs_create((char *)&local_a0,true);
  _scs_create((char *)&local_a8,true);
  local_88 = "";
  local_b0 = 0;
  local_b8 = 0;
  local_80 = 0;
  String::parse_latin1((StrRange *)&local_b8);
  local_88 = "mie_color";
  local_c0 = 0;
  local_80 = 9;
  String::parse_latin1((StrRange *)&local_c0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_88,0x14,(StrRange *)&local_c0,0x15,(StrRange *)&local_b8,6,
             &local_b0);
  local_98 = "PhysicalSkyMaterial";
  local_c8 = 0;
  local_90 = 0x13;
  String::parse_latin1((StrRange *)&local_c8);
  StringName::StringName((StringName *)&local_98,(String *)&local_c8,false);
  ClassDB::add_property
            ((StringName *)&local_98,(PropertyInfo *)&local_88,(StringName *)&local_a8,
             (StringName *)&local_a0,-1);
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  if (StringName::configured != '\0') {
    if (local_b0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00107c4e;
    }
    if (local_a8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00107c4e;
    }
    if (local_a0 != 0) {
      StringName::unref();
    }
  }
LAB_00107c4e:
  _scs_create((char *)&local_a0,true);
  _scs_create((char *)&local_a8,true);
  local_88 = "0,1000,0.01";
  local_b0 = 0;
  local_b8 = 0;
  local_80 = 0xb;
  String::parse_latin1((StrRange *)&local_b8);
  local_88 = "turbidity";
  local_c0 = 0;
  local_80 = 9;
  String::parse_latin1((StrRange *)&local_c0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_88,3,(StrRange *)&local_c0,1,(StrRange *)&local_b8,6,&local_b0);
  local_98 = "PhysicalSkyMaterial";
  local_c8 = 0;
  local_90 = 0x13;
  String::parse_latin1((StrRange *)&local_c8);
  StringName::StringName((StringName *)&local_98,(String *)&local_c8,false);
  ClassDB::add_property
            ((StringName *)&local_98,(PropertyInfo *)&local_88,(StringName *)&local_a8,
             (StringName *)&local_a0,-1);
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  if (StringName::configured != '\0') {
    if (local_b0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00107dca;
    }
    if (local_a8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00107dca;
    }
    if (local_a0 != 0) {
      StringName::unref();
    }
  }
LAB_00107dca:
  _scs_create((char *)&local_a0,true);
  _scs_create((char *)&local_a8,true);
  local_88 = "0,360,0.01";
  local_b0 = 0;
  local_b8 = 0;
  local_80 = 10;
  String::parse_latin1((StrRange *)&local_b8);
  local_88 = "sun_disk_scale";
  local_c0 = 0;
  local_80 = 0xe;
  String::parse_latin1((StrRange *)&local_c0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_88,3,(StrRange *)&local_c0,1,(StrRange *)&local_b8,6,&local_b0);
  local_98 = "PhysicalSkyMaterial";
  local_c8 = 0;
  local_90 = 0x13;
  String::parse_latin1((StrRange *)&local_c8);
  StringName::StringName((StringName *)&local_98,(String *)&local_c8,false);
  ClassDB::add_property
            ((StringName *)&local_98,(PropertyInfo *)&local_88,(StringName *)&local_a8,
             (StringName *)&local_a0,-1);
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  if (StringName::configured != '\0') {
    if (local_b0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00107f47;
    }
    if (local_a8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00107f47;
    }
    if (local_a0 != 0) {
      StringName::unref();
    }
  }
LAB_00107f47:
  _scs_create((char *)&local_a0,true);
  _scs_create((char *)&local_a8,true);
  local_88 = "";
  local_b0 = 0;
  local_b8 = 0;
  local_80 = 0;
  String::parse_latin1((StrRange *)&local_b8);
  local_88 = "ground_color";
  local_c0 = 0;
  local_80 = 0xc;
  String::parse_latin1((StrRange *)&local_c0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_88,0x14,(StrRange *)&local_c0,0x15,(StrRange *)&local_b8,6,
             &local_b0);
  local_98 = "PhysicalSkyMaterial";
  local_c8 = 0;
  local_90 = 0x13;
  String::parse_latin1((StrRange *)&local_c8);
  StringName::StringName((StringName *)&local_98,(String *)&local_c8,false);
  ClassDB::add_property
            ((StringName *)&local_98,(PropertyInfo *)&local_88,(StringName *)&local_a8,
             (StringName *)&local_a0,-1);
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  if (StringName::configured != '\0') {
    if (local_b0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001080c5;
    }
    if (local_a8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001080c5;
    }
    if (local_a0 != 0) {
      StringName::unref();
    }
  }
LAB_001080c5:
  _scs_create((char *)&local_a0,true);
  _scs_create((char *)&local_a8,true);
  local_88 = "0,128,0.01";
  local_b0 = 0;
  local_b8 = 0;
  local_80 = 10;
  String::parse_latin1((StrRange *)&local_b8);
  local_88 = "energy_multiplier";
  local_c0 = 0;
  local_80 = 0x11;
  String::parse_latin1((StrRange *)&local_c0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_88,3,(StrRange *)&local_c0,1,(StrRange *)&local_b8,6,&local_b0);
  local_98 = "PhysicalSkyMaterial";
  local_c8 = 0;
  local_90 = 0x13;
  String::parse_latin1((StrRange *)&local_c8);
  StringName::StringName((StringName *)&local_98,(String *)&local_c8,false);
  ClassDB::add_property
            ((StringName *)&local_98,(PropertyInfo *)&local_88,(StringName *)&local_a8,
             (StringName *)&local_a0,-1);
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  if (StringName::configured != '\0') {
    if (local_b0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00108242;
    }
    if (local_a8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00108242;
    }
    if (local_a0 != 0) {
      StringName::unref();
    }
  }
LAB_00108242:
  _scs_create((char *)&local_a0,true);
  _scs_create((char *)&local_a8,true);
  local_88 = "";
  local_b0 = 0;
  local_b8 = 0;
  local_80 = 0;
  String::parse_latin1((StrRange *)&local_b8);
  local_88 = "use_debanding";
  local_c0 = 0;
  local_80 = 0xd;
  String::parse_latin1((StrRange *)&local_c0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_88,1,(StrRange *)&local_c0,0,(StrRange *)&local_b8,6,&local_b0);
  local_98 = "PhysicalSkyMaterial";
  local_c8 = 0;
  local_90 = 0x13;
  String::parse_latin1((StrRange *)&local_c8);
  StringName::StringName((StringName *)&local_98,(String *)&local_c8,false);
  ClassDB::add_property
            ((StringName *)&local_98,(PropertyInfo *)&local_88,(StringName *)&local_a8,
             (StringName *)&local_a0,-1);
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  if (StringName::configured != '\0') {
    if (local_b0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001083bb;
    }
    if (local_a8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001083bb;
    }
    if (local_a0 != 0) {
      StringName::unref();
    }
  }
LAB_001083bb:
  _scs_create((char *)&local_a0,true);
  _scs_create((char *)&local_a8,true);
  local_88 = "Texture2D";
  local_b0 = 0;
  local_b8 = 0;
  local_80 = 9;
  String::parse_latin1((StrRange *)&local_b8);
  local_88 = "night_sky";
  local_c0 = 0;
  local_80 = 9;
  String::parse_latin1((StrRange *)&local_c0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_88,0x18,(StrRange *)&local_c0,0x11,(StrRange *)&local_b8,6,
             &local_b0);
  local_98 = "PhysicalSkyMaterial";
  local_c8 = 0;
  local_90 = 0x13;
  String::parse_latin1((StrRange *)&local_c8);
  StringName::StringName((StringName *)&local_98,(String *)&local_c8,false);
  ClassDB::add_property
            ((StringName *)&local_98,(PropertyInfo *)&local_88,(StringName *)&local_a8,
             (StringName *)&local_a0,-1);
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  if (StringName::configured != '\0') {
    if (local_b0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00108537;
    }
    if (local_a8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00108537;
    }
    if (local_a0 != 0) {
      StringName::unref();
    }
  }
LAB_00108537:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
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



/* Resource::set_last_modified_time(unsigned long) */

void __thiscall Resource::set_last_modified_time(Resource *this,ulong param_1)

{
  *(ulong *)(this + 0x198) = param_1;
  return;
}



/* Resource::set_import_last_modified_time(unsigned long) */

void __thiscall Resource::set_import_last_modified_time(Resource *this,ulong param_1)

{
  *(ulong *)(this + 0x1a0) = param_1;
  return;
}



/* ProceduralSkyMaterial::is_class_ptr(void*) const */

uint __thiscall ProceduralSkyMaterial::is_class_ptr(ProceduralSkyMaterial *this,void *param_1)

{
  return (uint)CONCAT71(0x1152,(undefined4 *)param_1 == &Material::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1152,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1152,(undefined4 *)param_1 == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1152,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1152,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* ProceduralSkyMaterial::_getv(StringName const&, Variant&) const */

undefined8 ProceduralSkyMaterial::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ProceduralSkyMaterial::_setv(StringName const&, Variant const&) */

undefined8 ProceduralSkyMaterial::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ProceduralSkyMaterial::_property_can_revertv(StringName const&) const */

undefined8 ProceduralSkyMaterial::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* ProceduralSkyMaterial::_property_get_revertv(StringName const&, Variant&) const */

undefined8 ProceduralSkyMaterial::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ProceduralSkyMaterial::_notificationv(int, bool) */

void ProceduralSkyMaterial::_notificationv(int param_1,bool param_2)

{
  return;
}



/* PanoramaSkyMaterial::is_class_ptr(void*) const */

uint __thiscall PanoramaSkyMaterial::is_class_ptr(PanoramaSkyMaterial *this,void *param_1)

{
  return (uint)CONCAT71(0x1152,(undefined4 *)param_1 == &Material::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1152,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1152,(undefined4 *)param_1 == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1152,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1152,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* PanoramaSkyMaterial::_getv(StringName const&, Variant&) const */

undefined8 PanoramaSkyMaterial::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* PanoramaSkyMaterial::_setv(StringName const&, Variant const&) */

undefined8 PanoramaSkyMaterial::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* PanoramaSkyMaterial::_property_can_revertv(StringName const&) const */

undefined8 PanoramaSkyMaterial::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* PanoramaSkyMaterial::_property_get_revertv(StringName const&, Variant&) const */

undefined8 PanoramaSkyMaterial::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* PanoramaSkyMaterial::_notificationv(int, bool) */

void PanoramaSkyMaterial::_notificationv(int param_1,bool param_2)

{
  return;
}



/* PhysicalSkyMaterial::is_class_ptr(void*) const */

uint __thiscall PhysicalSkyMaterial::is_class_ptr(PhysicalSkyMaterial *this,void *param_1)

{
  return (uint)CONCAT71(0x1152,(undefined4 *)param_1 == &Material::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1152,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1152,(undefined4 *)param_1 == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1152,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1152,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* PhysicalSkyMaterial::_getv(StringName const&, Variant&) const */

undefined8 PhysicalSkyMaterial::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* PhysicalSkyMaterial::_setv(StringName const&, Variant const&) */

undefined8 PhysicalSkyMaterial::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* PhysicalSkyMaterial::_property_can_revertv(StringName const&) const */

undefined8 PhysicalSkyMaterial::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* PhysicalSkyMaterial::_property_get_revertv(StringName const&, Variant&) const */

undefined8 PhysicalSkyMaterial::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* PhysicalSkyMaterial::_notificationv(int, bool) */

void PhysicalSkyMaterial::_notificationv(int param_1,bool param_2)

{
  return;
}



/* MethodBindT<Color>::_gen_argument_type(int) const */

byte __thiscall MethodBindT<Color>::_gen_argument_type(MethodBindT<Color> *this,int param_1)

{
  return -(param_1 == 0) & 0x14;
}



/* MethodBindT<Color>::get_argument_meta(int) const */

undefined8 MethodBindT<Color>::get_argument_meta(int param_1)

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



/* MethodBindTRC<Ref<Texture2D>>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<Ref<Texture2D>>::_gen_argument_type(int param_1)

{
  return 0x18;
}



/* MethodBindTRC<Ref<Texture2D>>::get_argument_meta(int) const */

undefined8 MethodBindTRC<Ref<Texture2D>>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<Ref<Texture2D> const&>::_gen_argument_type(int) const */

byte __thiscall
MethodBindT<Ref<Texture2D>const&>::_gen_argument_type
          (MethodBindT<Ref<Texture2D>const&> *this,int param_1)

{
  return -(param_1 == 0) & 0x18;
}



/* MethodBindT<Ref<Texture2D> const&>::get_argument_meta(int) const */

undefined8 MethodBindT<Ref<Texture2D>const&>::get_argument_meta(int param_1)

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



/* MethodBindTRC<Color>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<Color>::_gen_argument_type(int param_1)

{
  return 0x14;
}



/* MethodBindTRC<Color>::get_argument_meta(int) const */

undefined8 MethodBindTRC<Color>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<Color const&>::_gen_argument_type(int) const */

byte __thiscall
MethodBindT<Color_const&>::_gen_argument_type(MethodBindT<Color_const&> *this,int param_1)

{
  return -(param_1 == 0) & 0x14;
}



/* MethodBindT<Color const&>::get_argument_meta(int) const */

undefined8 MethodBindT<Color_const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<Ref<Texture2D> const&>::~MethodBindT() */

void __thiscall
MethodBindT<Ref<Texture2D>const&>::~MethodBindT(MethodBindT<Ref<Texture2D>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00115060;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Ref<Texture2D> const&>::~MethodBindT() */

void __thiscall
MethodBindT<Ref<Texture2D>const&>::~MethodBindT(MethodBindT<Ref<Texture2D>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00115060;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Ref<Texture2D>>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Ref<Texture2D>>::~MethodBindTRC(MethodBindTRC<Ref<Texture2D>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001150c0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Ref<Texture2D>>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Ref<Texture2D>>::~MethodBindTRC(MethodBindTRC<Ref<Texture2D>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001150c0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Color const&>::~MethodBindT() */

void __thiscall MethodBindT<Color_const&>::~MethodBindT(MethodBindT<Color_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00114ee0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Color const&>::~MethodBindT() */

void __thiscall MethodBindT<Color_const&>::~MethodBindT(MethodBindT<Color_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00114ee0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Color>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Color>::~MethodBindTRC(MethodBindTRC<Color> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00114f40;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Color>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Color>::~MethodBindTRC(MethodBindTRC<Color> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00114f40;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<bool>::~MethodBindT() */

void __thiscall MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00115120;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<bool>::~MethodBindT() */

void __thiscall MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00115120;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<bool>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00115180;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<bool>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00115180;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<float>::~MethodBindT() */

void __thiscall MethodBindT<float>::~MethodBindT(MethodBindT<float> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00114fa0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<float>::~MethodBindT() */

void __thiscall MethodBindT<float>::~MethodBindT(MethodBindT<float> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00114fa0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<float>::~MethodBindTRC() */

void __thiscall MethodBindTRC<float>::~MethodBindTRC(MethodBindTRC<float> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00115000;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<float>::~MethodBindTRC() */

void __thiscall MethodBindTRC<float>::~MethodBindTRC(MethodBindTRC<float> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00115000;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Color>::~MethodBindT() */

void __thiscall MethodBindT<Color>::~MethodBindT(MethodBindT<Color> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001151e0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Color>::~MethodBindT() */

void __thiscall MethodBindT<Color>::~MethodBindT(MethodBindT<Color> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001151e0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* PanoramaSkyMaterial::_validate_propertyv(PropertyInfo&) const */

void PanoramaSkyMaterial::_validate_propertyv(PropertyInfo *param_1)

{
  if ((code *)PTR__validate_property_0011a010 != Object::_validate_property) {
    Material::_validate_property(param_1);
    return;
  }
  return;
}



/* Material::get_save_class() const */

Material * __thiscall Material::get_save_class(Material *this)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)this = 0;
  String::parse_latin1((StrRange *)this);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Material::get_base_extension() const */

Material * __thiscall Material::get_base_extension(Material *this)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)this = 0;
  String::parse_latin1((StrRange *)this);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ProceduralSkyMaterial::_get_class_namev() const */

undefined8 * ProceduralSkyMaterial::_get_class_namev(void)

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
LAB_00109623:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00109623;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"ProceduralSkyMaterial");
      goto LAB_0010968e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"ProceduralSkyMaterial");
LAB_0010968e:
  return &_get_class_namev()::_class_name_static;
}



/* PanoramaSkyMaterial::_get_class_namev() const */

undefined8 * PanoramaSkyMaterial::_get_class_namev(void)

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
LAB_00109713:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00109713;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"PanoramaSkyMaterial");
      goto LAB_0010977e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"PanoramaSkyMaterial");
LAB_0010977e:
  return &_get_class_namev()::_class_name_static;
}



/* PhysicalSkyMaterial::_get_class_namev() const */

undefined8 * PhysicalSkyMaterial::_get_class_namev(void)

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
LAB_00109803:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00109803;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"PhysicalSkyMaterial");
      goto LAB_0010986e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"PhysicalSkyMaterial");
LAB_0010986e:
  return &_get_class_namev()::_class_name_static;
}



/* PanoramaSkyMaterial::get_class() const */

void PanoramaSkyMaterial::get_class(void)

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



/* ProceduralSkyMaterial::get_class() const */

void ProceduralSkyMaterial::get_class(void)

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



/* PhysicalSkyMaterial::get_class() const */

void PhysicalSkyMaterial::get_class(void)

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



/* MethodBindTRC<Color>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Color>::_gen_argument_type_info(int param_1)

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
  *puVar3 = 0x14;
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
      goto joined_r0x00109c5c;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x00109c5c:
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
      goto joined_r0x00109ddc;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x00109ddc:
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
      goto joined_r0x00109f5c;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x00109f5c:
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



/* MethodBindTRC<Ref<Texture2D>>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Ref<Texture2D>>::_gen_argument_type_info(int param_1)

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
  local_48 = "Texture2D";
  local_40 = 9;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 0x18;
  puVar3[6] = 0x11;
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar3[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)&local_58);
    puVar3[10] = 6;
    if (puVar3[6] != 0x11) {
      StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
      goto LAB_0010a060;
    }
  }
  StringName::StringName((StringName *)&local_48,(String *)(puVar3 + 8),false);
  if (*(char **)(puVar3 + 4) == local_48) {
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  else {
    StringName::unref();
    *(char **)(puVar3 + 4) = local_48;
  }
LAB_0010a060:
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



/* RefCounted::is_class(String const&) const */

undefined8 __thiscall RefCounted::is_class(RefCounted *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
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
            if (lVar5 == 0) goto LAB_0010a36f;
            LOCK();
            lVar8 = *plVar1;
            bVar9 = lVar5 == lVar8;
            if (bVar9) {
              *plVar1 = lVar5 + 1;
              lVar8 = lVar5;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar8 != -1) {
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
LAB_0010a36f:
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
    if (cVar6 != '\0') goto LAB_0010a423;
  }
  cVar6 = String::operator==(param_1,"RefCounted");
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
              if (lVar5 == 0) goto LAB_0010a4d3;
              LOCK();
              lVar8 = *plVar1;
              bVar9 = lVar5 == lVar8;
              if (bVar9) {
                *plVar1 = lVar5 + 1;
                lVar8 = lVar5;
              }
              UNLOCK();
            } while (!bVar9);
            if (lVar8 != -1) {
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
LAB_0010a4d3:
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
      if (cVar6 != '\0') goto LAB_0010a423;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = String::operator==(param_1,"Object");
      return uVar7;
    }
  }
  else {
LAB_0010a423:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Material::is_class(String const&) const */

undefined8 __thiscall Material::is_class(Material *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
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
            if (lVar5 == 0) goto LAB_0010a5ff;
            LOCK();
            lVar8 = *plVar1;
            bVar9 = lVar5 == lVar8;
            if (bVar9) {
              *plVar1 = lVar5 + 1;
              lVar8 = lVar5;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar8 != -1) {
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
LAB_0010a5ff:
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
    if (cVar6 != '\0') goto LAB_0010a6b3;
  }
  cVar6 = String::operator==(param_1,"Material");
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
              if (lVar5 == 0) goto LAB_0010a773;
              LOCK();
              lVar8 = *plVar1;
              bVar9 = lVar5 == lVar8;
              if (bVar9) {
                *plVar1 = lVar5 + 1;
                lVar8 = lVar5;
              }
              UNLOCK();
            } while (!bVar9);
            if (lVar8 != -1) {
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
LAB_0010a773:
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
      if (cVar6 != '\0') goto LAB_0010a6b3;
    }
    cVar6 = String::operator==(param_1,"Resource");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
        return uVar7;
      }
      goto LAB_0010a81c;
    }
  }
LAB_0010a6b3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010a81c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PhysicalSkyMaterial::is_class(String const&) const */

undefined8 __thiscall PhysicalSkyMaterial::is_class(PhysicalSkyMaterial *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_0010a89f;
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
LAB_0010a89f:
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
    if (cVar5 != '\0') goto LAB_0010a953;
  }
  cVar5 = String::operator==(param_1,"PhysicalSkyMaterial");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = Material::is_class((Material *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_0010a953:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PanoramaSkyMaterial::is_class(String const&) const */

undefined8 __thiscall PanoramaSkyMaterial::is_class(PanoramaSkyMaterial *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_0010aa1f;
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
LAB_0010aa1f:
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
    if (cVar5 != '\0') goto LAB_0010aad3;
  }
  cVar5 = String::operator==(param_1,"PanoramaSkyMaterial");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = Material::is_class((Material *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_0010aad3:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ProceduralSkyMaterial::is_class(String const&) const */

undefined8 __thiscall ProceduralSkyMaterial::is_class(ProceduralSkyMaterial *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_0010ab9f;
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
LAB_0010ab9f:
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
    if (cVar5 != '\0') goto LAB_0010ac53;
  }
  cVar5 = String::operator==(param_1,"ProceduralSkyMaterial");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = Material::is_class((Material *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_0010ac53:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ProceduralSkyMaterial::_validate_propertyv(PropertyInfo&) const */

void __thiscall
ProceduralSkyMaterial::_validate_propertyv(ProceduralSkyMaterial *this,PropertyInfo *param_1)

{
  if ((code *)PTR__validate_property_0011a010 != Object::_validate_property) {
    Material::_validate_property((PropertyInfo *)this);
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



/* PhysicalSkyMaterial::_validate_propertyv(PropertyInfo&) const */

void __thiscall
PhysicalSkyMaterial::_validate_propertyv(PhysicalSkyMaterial *this,PropertyInfo *param_1)

{
  if ((code *)PTR__validate_property_0011a010 != Object::_validate_property) {
    Material::_validate_property((PropertyInfo *)this);
  }
  _validate_property(this,param_1);
  return;
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



/* WARNING: Removing unreachable block (ram,0x0010cb78) */
/* WARNING: Removing unreachable block (ram,0x0010cd0d) */
/* WARNING: Removing unreachable block (ram,0x0010cd19) */
/* String vformat<char const*>(String const&, char const* const) */

String * vformat<char_const*>(String *param_1,char *param_2)

{
  Variant *this;
  char *in_RDX;
  int iVar1;
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
  iVar1 = (int)local_c8;
  Array::resize(iVar1);
  this = (Variant *)Array::operator[](iVar1);
  Variant::operator=(this,(Variant *)local_78);
  String::sprintf((Array *)local_c0,(bool *)param_2);
  *(undefined8 *)param_1 = local_c0[0];
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
  if (in_EDX != 0) goto LAB_0010cdbb;
  local_78 = 0;
  local_80 = 0;
  local_68 = &_LC29;
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
LAB_0010ceb0:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_0010ceb0;
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
LAB_0010cdbb:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar5;
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
  if (in_EDX != 0) goto LAB_0010cffb;
  local_78 = 0;
  local_80 = 0;
  local_68 = &_LC29;
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
LAB_0010d0f0:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_0010d0f0;
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
LAB_0010cffb:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar5;
}



/* MethodBindT<Color>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<Color>::_gen_argument_type_info(int param_1)

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
  if (in_EDX != 0) goto LAB_0010d23b;
  local_78 = 0;
  local_80 = 0;
  local_68 = &_LC29;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_60._8_8_;
  local_60 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,0x14);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_0010d330:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_0010d330;
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
LAB_0010d23b:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar5;
}



/* MethodBindT<Color const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<Color_const&>::_gen_argument_type_info(int param_1)

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
  if (in_EDX != 0) goto LAB_0010d47b;
  local_78 = 0;
  local_80 = 0;
  local_68 = &_LC29;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_60._8_8_;
  local_60 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,0x14);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_0010d570:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_0010d570;
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
LAB_0010d47b:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar5;
}



/* MethodBindT<Ref<Texture2D> const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<Ref<Texture2D>const&>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  long lVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  undefined8 local_88;
  long local_80;
  long local_78;
  long local_70;
  char *local_68;
  undefined1 local_60 [16];
  int local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar4 = 0;
  puVar4[6] = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  puVar4[10] = 6;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (in_EDX != 0) goto LAB_0010d6bb;
  local_78 = 0;
  local_80 = 0;
  local_68 = "Texture2D";
  local_60._0_8_ = 9;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (char *)CONCAT44(local_68._4_4_,0x18);
  local_50 = 0x11;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_0010d855:
    local_40 = 6;
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
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 == 0x11) goto LAB_0010d855;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  *puVar4 = local_68._0_4_;
  if (*(long *)(puVar4 + 2) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar4 + 2));
    uVar2 = local_60._0_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_60._8_8_;
    local_60 = auVar1 << 0x40;
    *(undefined8 *)(puVar4 + 2) = uVar2;
  }
  if (*(long *)(puVar4 + 4) != local_60._8_8_) {
    StringName::unref();
    uVar2 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(puVar4 + 4) = uVar2;
  }
  puVar4[6] = local_50;
  if (*(long *)(puVar4 + 8) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar4 + 8));
    lVar3 = local_48;
    local_48 = 0;
    *(long *)(puVar4 + 8) = lVar3;
  }
  puVar4[10] = local_40;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
LAB_0010d6bb:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar4;
}



/* RefCounted::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void RefCounted::_get_property_listv(List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
  undefined4 *puVar5;
  undefined7 in_register_00000031;
  List *pLVar6;
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
  
  pLVar6 = (List *)CONCAT71(in_register_00000031,param_2);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = "RefCounted";
  local_88 = 0;
  local_90 = 0;
  local_70 = 10;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "RefCounted";
  local_98 = 0;
  local_70 = 10;
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
LAB_0010da48:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0010da48;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x0010da6a;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x0010da6a:
  if (lVar2 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])pLVar6 = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  local_a8 = (StringName *)&local_68;
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
  StringName::operator=((StringName *)(puVar5 + 4),local_a8);
  puVar5[6] = local_60;
  if (*(long *)(puVar5 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_58);
  }
  lVar3 = local_58;
  puVar5[10] = local_50;
  plVar1 = *(long **)pLVar6;
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"RefCounted",false);
  ClassDB::get_property_list((StringName *)&local_78,pLVar6,true,(Object *)param_1);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Resource::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Resource::_get_property_listv(Resource *this,List *param_1,bool param_2)

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
    RefCounted::_get_property_listv((List *)this,SUB81(param_1,0));
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "Resource";
  local_70 = 8;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Resource";
  local_98 = 0;
  local_70 = 8;
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
LAB_0010ddfd:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0010ddfd;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0010de1f;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0010de1f:
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
  StringName::StringName((StringName *)&local_78,"Resource",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      RefCounted::_get_property_listv((List *)this,SUB81(param_1,0));
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Material::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Material::_get_property_listv(Material *this,List *param_1,bool param_2)

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
    Resource::_get_property_listv((Resource *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "Material";
  local_70 = 8;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Material";
  local_98 = 0;
  local_70 = 8;
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
LAB_0010e1dd:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0010e1dd;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0010e1ff;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0010e1ff:
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
  StringName::StringName((StringName *)&local_78,"Material",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Resource::_get_property_listv((Resource *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ProceduralSkyMaterial::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
ProceduralSkyMaterial::_get_property_listv(ProceduralSkyMaterial *this,List *param_1,bool param_2)

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
    Material::_get_property_listv((Material *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "ProceduralSkyMaterial";
  local_70 = 0x15;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "ProceduralSkyMaterial";
  local_98 = 0;
  local_70 = 0x15;
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
LAB_0010e5bd:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0010e5bd;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0010e5df;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0010e5df:
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
  StringName::StringName((StringName *)&local_78,"ProceduralSkyMaterial",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Material::_get_property_listv((Material *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PhysicalSkyMaterial::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
PhysicalSkyMaterial::_get_property_listv(PhysicalSkyMaterial *this,List *param_1,bool param_2)

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
    Material::_get_property_listv((Material *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "PhysicalSkyMaterial";
  local_70 = 0x13;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "PhysicalSkyMaterial";
  local_98 = 0;
  local_70 = 0x13;
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
LAB_0010e995:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0010e995;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0010e9b7;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0010e9b7:
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
  StringName::StringName((StringName *)&local_78,"PhysicalSkyMaterial",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Material::_get_property_listv((Material *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PanoramaSkyMaterial::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
PanoramaSkyMaterial::_get_property_listv(PanoramaSkyMaterial *this,List *param_1,bool param_2)

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
    Material::_get_property_listv((Material *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "PanoramaSkyMaterial";
  local_70 = 0x13;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "PanoramaSkyMaterial";
  local_98 = 0;
  local_70 = 0x13;
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
LAB_0010ed8d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0010ed8d;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0010edaf;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0010edaf:
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
  StringName::StringName((StringName *)&local_78,"PanoramaSkyMaterial",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Material::_get_property_listv((Material *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<ProceduralSkyMaterial, Color const&>(void
   (ProceduralSkyMaterial::*)(Color const&)) */

MethodBind * create_method_bind<ProceduralSkyMaterial,Color_const&>(_func_void_Color_ptr *param_1)

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
  *(_func_void_Color_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00114ee0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "ProceduralSkyMaterial";
  local_30 = 0x15;
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



/* MethodBind* create_method_bind<ProceduralSkyMaterial, float>(void
   (ProceduralSkyMaterial::*)(float)) */

MethodBind * create_method_bind<ProceduralSkyMaterial,float>(_func_void_float *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_00114fa0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "ProceduralSkyMaterial";
  local_30 = 0x15;
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



/* MethodBind* create_method_bind<ProceduralSkyMaterial, Ref<Texture2D> const&>(void
   (ProceduralSkyMaterial::*)(Ref<Texture2D> const&)) */

MethodBind *
create_method_bind<ProceduralSkyMaterial,Ref<Texture2D>const&>(_func_void_Ref_ptr *param_1)

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
  *(_func_void_Ref_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00115060;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "ProceduralSkyMaterial";
  local_30 = 0x15;
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



/* MethodBind* create_method_bind<ProceduralSkyMaterial, bool>(void
   (ProceduralSkyMaterial::*)(bool)) */

MethodBind * create_method_bind<ProceduralSkyMaterial,bool>(_func_void_bool *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_00115120;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "ProceduralSkyMaterial";
  local_30 = 0x15;
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



/* ProceduralSkyMaterial::_initialize_classv() */

void ProceduralSkyMaterial::_initialize_classv(void)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_50;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (Material::initialize_class()::initialized == '\0') {
      Material::initialize_class();
    }
    local_48 = 0;
    local_38 = "Material";
    local_30 = 8;
    String::parse_latin1((StrRange *)&local_48);
    StringName::StringName((StringName *)&local_40,(String *)&local_48,false);
    local_38 = "ProceduralSkyMaterial";
    local_50 = 0;
    local_30 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    StringName::StringName((StringName *)&local_38,(String *)&local_50,false);
    ClassDB::_add_class2((StringName *)&local_38,(StringName *)&local_40);
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
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
    if ((StringName::configured != '\0') && (local_40 != 0)) {
      StringName::unref();
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
    _bind_methods();
    initialize_class()::initialized = '\x01';
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<PanoramaSkyMaterial, Ref<Texture2D> const&>(void
   (PanoramaSkyMaterial::*)(Ref<Texture2D> const&)) */

MethodBind *
create_method_bind<PanoramaSkyMaterial,Ref<Texture2D>const&>(_func_void_Ref_ptr *param_1)

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
  *(_func_void_Ref_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00115060;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "PanoramaSkyMaterial";
  local_30 = 0x13;
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



/* MethodBind* create_method_bind<PanoramaSkyMaterial, bool>(void (PanoramaSkyMaterial::*)(bool)) */

MethodBind * create_method_bind<PanoramaSkyMaterial,bool>(_func_void_bool *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_00115120;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "PanoramaSkyMaterial";
  local_30 = 0x13;
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



/* MethodBind* create_method_bind<PanoramaSkyMaterial, float>(void (PanoramaSkyMaterial::*)(float))
    */

MethodBind * create_method_bind<PanoramaSkyMaterial,float>(_func_void_float *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_00114fa0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "PanoramaSkyMaterial";
  local_30 = 0x13;
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



/* PanoramaSkyMaterial::_initialize_classv() */

void PanoramaSkyMaterial::_initialize_classv(void)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_50;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (Material::initialize_class()::initialized == '\0') {
      Material::initialize_class();
    }
    local_48 = 0;
    local_38 = "Material";
    local_30 = 8;
    String::parse_latin1((StrRange *)&local_48);
    StringName::StringName((StringName *)&local_40,(String *)&local_48,false);
    local_38 = "PanoramaSkyMaterial";
    local_50 = 0;
    local_30 = 0x13;
    String::parse_latin1((StrRange *)&local_50);
    StringName::StringName((StringName *)&local_38,(String *)&local_50,false);
    ClassDB::_add_class2((StringName *)&local_38,(StringName *)&local_40);
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
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
    if ((StringName::configured != '\0') && (local_40 != 0)) {
      StringName::unref();
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
    _bind_methods();
    initialize_class()::initialized = '\x01';
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<PhysicalSkyMaterial, float>(void (PhysicalSkyMaterial::*)(float))
    */

MethodBind * create_method_bind<PhysicalSkyMaterial,float>(_func_void_float *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_00114fa0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "PhysicalSkyMaterial";
  local_30 = 0x13;
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



/* MethodBind* create_method_bind<PhysicalSkyMaterial, Color>(void (PhysicalSkyMaterial::*)(Color))
    */

MethodBind * create_method_bind<PhysicalSkyMaterial,Color>(_func_void_Color *param_1)

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
  *(_func_void_Color **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_001151e0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "PhysicalSkyMaterial";
  local_30 = 0x13;
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



/* MethodBind* create_method_bind<PhysicalSkyMaterial, bool>(void (PhysicalSkyMaterial::*)(bool)) */

MethodBind * create_method_bind<PhysicalSkyMaterial,bool>(_func_void_bool *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_00115120;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "PhysicalSkyMaterial";
  local_30 = 0x13;
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



/* MethodBind* create_method_bind<PhysicalSkyMaterial, Ref<Texture2D> const&>(void
   (PhysicalSkyMaterial::*)(Ref<Texture2D> const&)) */

MethodBind *
create_method_bind<PhysicalSkyMaterial,Ref<Texture2D>const&>(_func_void_Ref_ptr *param_1)

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
  *(_func_void_Ref_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00115060;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "PhysicalSkyMaterial";
  local_30 = 0x13;
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



/* PhysicalSkyMaterial::_initialize_classv() */

void PhysicalSkyMaterial::_initialize_classv(void)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_50;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (Material::initialize_class()::initialized == '\0') {
      Material::initialize_class();
    }
    local_48 = 0;
    local_38 = "Material";
    local_30 = 8;
    String::parse_latin1((StrRange *)&local_48);
    StringName::StringName((StringName *)&local_40,(String *)&local_48,false);
    local_38 = "PhysicalSkyMaterial";
    local_50 = 0;
    local_30 = 0x13;
    String::parse_latin1((StrRange *)&local_50);
    StringName::StringName((StringName *)&local_38,(String *)&local_50,false);
    ClassDB::_add_class2((StringName *)&local_38,(StringName *)&local_40);
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
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
    if ((StringName::configured != '\0') && (local_40 != 0)) {
      StringName::unref();
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
    _bind_methods();
    initialize_class()::initialized = '\x01';
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x001101c8) */
/* WARNING: Removing unreachable block (ram,0x0011035d) */
/* WARNING: Removing unreachable block (ram,0x00110369) */
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



/* MethodBindT<Color>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<Color>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

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
      goto LAB_00110679;
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
                    /* WARNING: Could not recover jumptable at 0x00110503. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              (*(undefined8 *)(*(long *)param_3 + 8),*(undefined8 *)(*(long *)param_3 + 0x10),
               (long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_00110679:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Color>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Color>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_00110869;
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
                    /* WARNING: Could not recover jumptable at 0x001106f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              (**param_3,(*param_3)[1],(long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_00110869:
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
      _err_print_error(&_LC158,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_001109c0;
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
LAB_001109c0:
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
      goto LAB_00110bd2;
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
LAB_00110bd2:
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
      goto LAB_00110d81;
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
LAB_00110d81:
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
      goto LAB_001110c1;
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
                    /* WARNING: Could not recover jumptable at 0x00110f4d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined1 *)(*(long *)param_3 + 8));
    return;
  }
LAB_001110c1:
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
      goto LAB_001112a9;
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
                    /* WARNING: Could not recover jumptable at 0x00111132. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3 != '\0');
    return;
  }
LAB_001112a9:
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
      _err_print_error(&_LC158,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00111370;
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
LAB_00111370:
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
      goto LAB_00111588;
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
LAB_00111588:
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
      goto LAB_00111747;
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
LAB_00111747:
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
      goto LAB_00111a99;
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
                    /* WARNING: Could not recover jumptable at 0x00111922. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(auVar2._0_8_,(long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_00111a99:
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
      goto LAB_00111c79;
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
                    /* WARNING: Could not recover jumptable at 0x00111b01. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(auVar2._0_8_,(long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_00111c79:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Color>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<Color>::call
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
  long local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  undefined8 local_58 [2];
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar4 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar4 != (long *)0x0) && (plVar4[1] != 0)) && (*(char *)(plVar4[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar4[1] == 0) {
      plVar3 = (long *)plVar4[0x23];
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*plVar4 + 0x40))(plVar4);
      }
    }
    else {
      plVar3 = (long *)(plVar4[1] + 0x20);
    }
    if (local_68 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC158,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_00111d50;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
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
      local_58[0] = (*(code *)pVVar2)();
      Variant::Variant((Variant *)local_48,(Color *)local_58);
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
LAB_00111d50:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Color>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindTRC<Color>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

{
  code *pcVar1;
  Variant *pVVar2;
  long in_RCX;
  long in_FS_OFFSET;
  undefined8 uVar3;
  undefined8 in_XMM1_Qa;
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
      pVVar2 = param_2[0x23];
      if (pVVar2 == (Variant *)0x0) {
        pVVar2 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar2 = param_2[1] + 0x20;
    }
    if (local_48 == *(char **)pVVar2) {
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
      goto LAB_00111f6b;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(param_1 + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  uVar3 = (*pcVar1)((long *)((long)param_2 + *(long *)(param_1 + 0x60)));
  *(undefined8 *)(in_RCX + 8) = uVar3;
  *(undefined8 *)(in_RCX + 0x10) = in_XMM1_Qa;
LAB_00111f6b:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Color>::ptrcall(Object*, void const**, void*) const */

void MethodBindTRC<Color>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  code *pcVar1;
  long *plVar2;
  undefined8 *in_RCX;
  long in_FS_OFFSET;
  undefined8 uVar3;
  undefined8 in_XMM1_Qa;
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
      plVar2 = (long *)param_2[0x23];
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar2 = (long *)((long)param_2[1] + 0x20);
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
      goto LAB_0011212a;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(param_1 + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  uVar3 = (*pcVar1)((long *)((long)param_2 + *(long *)(param_1 + 0x60)));
  *in_RCX = uVar3;
  in_RCX[1] = in_XMM1_Qa;
LAB_0011212a:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Color const&>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<Color_const&>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

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
      goto LAB_00112471;
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
                    /* WARNING: Could not recover jumptable at 0x001122fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*(long *)param_3 + 8);
    return;
  }
LAB_00112471:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Color const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Color_const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_00112651;
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
                    /* WARNING: Could not recover jumptable at 0x001124d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3);
    return;
  }
LAB_00112651:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<Texture2D>>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<Ref<Texture2D>>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Object *pOVar2;
  char cVar3;
  Variant *pVVar4;
  long *plVar5;
  undefined4 in_register_00000014;
  long *plVar6;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  Object *local_58;
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
    if (local_58 == (Object *)*plVar5) {
      if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = (Object *)0x1103b8;
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC158,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00112770;
    }
    if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
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
      (*(code *)pVVar4)(&local_58);
      Variant::Variant((Variant *)local_48,local_58);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
      if (local_58 != (Object *)0x0) {
        cVar3 = RefCounted::unreference();
        pOVar2 = local_58;
        if (cVar3 != '\0') {
          cVar3 = predelete_handler(local_58);
          if (cVar3 != '\0') {
            (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
            Memory::free_static(pOVar2,false);
          }
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
LAB_00112770:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<Texture2D>>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Ref<Texture2D>>::ptrcall
          (MethodBindTRC<Ref<Texture2D>> *this,Object *param_1,void **param_2,void *param_3)

{
  char cVar1;
  code *pcVar2;
  Object *pOVar3;
  long *plVar4;
  Object *extraout_RDX;
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
      local_48 = (Object *)0x1103b8;
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
      goto LAB_001129f6;
    }
    param_2 = (void **)local_48;
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
      param_2 = (void **)extraout_RDX;
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    param_2 = *(void ***)(param_1 + *(long *)(this + 0x60));
    pcVar2 = *(code **)((Object *)((long)param_2 + -1) + (long)pcVar2);
  }
  (*pcVar2)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  if (local_48 == (Object *)0x0) {
                    /* WARNING: Load size is inaccurate */
    pOVar5 = *param_3;
    if (pOVar5 == (Object *)0x0) goto LAB_001129f6;
    *(undefined8 *)param_3 = 0;
    goto LAB_00112a39;
  }
  pOVar3 = (Object *)__dynamic_cast(local_48,&Object::typeinfo,&RefCounted::typeinfo,0);
                    /* WARNING: Load size is inaccurate */
  pOVar5 = *param_3;
  if (pOVar5 != pOVar3) {
    *(Object **)param_3 = pOVar3;
    if (pOVar3 == (Object *)0x0) {
      if (pOVar5 != (Object *)0x0) goto LAB_00112a39;
    }
    else {
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        *(undefined8 *)param_3 = 0;
      }
      if (pOVar5 != (Object *)0x0) {
LAB_00112a39:
        cVar1 = RefCounted::unreference();
        if (cVar1 != '\0') {
          cVar1 = predelete_handler(pOVar5);
          if (cVar1 != '\0') {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
        }
      }
      if (local_48 == (Object *)0x0) goto LAB_001129f6;
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
LAB_001129f6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<Texture2D> const&>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<Ref<Texture2D>const&>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  long lVar1;
  Object *pOVar2;
  char cVar3;
  Object *pOVar4;
  Variant *pVVar5;
  code *pcVar6;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  Object *local_58;
  undefined8 local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar5 = param_2[0x23];
      if (pVVar5 == (Variant *)0x0) {
        pVVar5 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar5 = param_2[1] + 0x20;
    }
    if (local_58 == (Object *)*(long *)pVVar5) {
      if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = (Object *)0x1103b8;
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00112cf8;
    }
    if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar6 = *(code **)(param_1 + 0x58);
  lVar1 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar6 & 1) != 0) {
    pcVar6 = *(code **)(pcVar6 + *(long *)((long)param_2 + lVar1) + -1);
  }
  Variant::Variant((Variant *)local_48,*(Object **)(*(long *)param_3 + 0x10));
  local_58 = (Object *)0x0;
  pOVar4 = (Object *)Variant::get_validated_object();
  pOVar2 = local_58;
  if (pOVar4 != local_58) {
    if (pOVar4 == (Object *)0x0) {
      if (local_58 != (Object *)0x0) {
        local_58 = (Object *)0x0;
LAB_00112cb6:
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
      pOVar4 = (Object *)__dynamic_cast(pOVar4,&Object::typeinfo,&Texture2D::typeinfo,0);
      if (pOVar2 != pOVar4) {
        local_58 = pOVar4;
        if (pOVar4 != (Object *)0x0) {
          cVar3 = RefCounted::reference();
          if (cVar3 == '\0') {
            local_58 = (Object *)0x0;
          }
        }
        if (pOVar2 != (Object *)0x0) goto LAB_00112cb6;
      }
    }
  }
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  (*pcVar6)((long *)((long)param_2 + lVar1));
  if (local_58 != (Object *)0x0) {
    cVar3 = RefCounted::unreference();
    pOVar2 = local_58;
    if (cVar3 != '\0') {
      cVar3 = predelete_handler(local_58);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
  }
LAB_00112cf8:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<Texture2D> const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Ref<Texture2D>const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      local_48 = (Object *)0x1103b8;
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
      goto LAB_00112fbc;
    }
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar5 = *(code **)(param_1 + 0x58);
                    /* WARNING: Load size is inaccurate */
  lVar1 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar5 & 1) != 0) {
    pcVar5 = *(code **)(pcVar5 + *(long *)((long)param_2 + lVar1) + -1);
  }
  if ((*param_3 == (long *)0x0) || (local_48 = (Object *)**param_3, local_48 == (Object *)0x0)) {
LAB_00112f98:
    local_48 = (Object *)0x0;
  }
  else {
    cVar3 = RefCounted::init_ref();
    if (cVar3 == '\0') goto LAB_00112f98;
  }
  (*pcVar5)((long *)((long)param_2 + lVar1));
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
LAB_00112fbc:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Color const&>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<Color_const&>::call
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
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined8 local_48 [3];
  long local_30;
  
  plVar9 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar9 != (long *)0x0) && (plVar9[1] != 0)) && (*(char *)(plVar9[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar9[1] == 0) {
      plVar7 = (long *)plVar9[0x23];
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)(**(code **)(*plVar9 + 0x40))(plVar9);
      }
    }
    else {
      plVar7 = (long *)(plVar9[1] + 0x20);
    }
    if (local_58 == (char *)*plVar7) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC158,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00113338;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar11 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar10 = param_2[5];
    if (pVVar10 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_00113390;
LAB_00113380:
      pVVar10 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar10 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00113390:
        uVar6 = 4;
        goto LAB_0011332d;
      }
      if (in_R8D == 1) goto LAB_00113380;
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
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar10,0x14);
    uVar4 = _LC164;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    local_48[0] = Variant::operator_cast_to_Color(pVVar10);
    (*(code *)pVVar11)((Variant *)((long)plVar9 + (long)pVVar1),local_48);
  }
  else {
    uVar6 = 3;
LAB_0011332d:
    *in_R9 = uVar6;
    in_R9[2] = 1;
  }
LAB_00113338:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindT<Color>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<Color>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

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
      _err_print_error(&_LC158,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00113658;
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
      if (in_R8D != 1) goto LAB_001136b0;
LAB_001136a0:
      pVVar10 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar10 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_001136b0:
        uVar6 = 4;
        goto LAB_0011364d;
      }
      if (in_R8D == 1) goto LAB_001136a0;
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
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar10,0x14);
    uVar4 = _LC164;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_Color(pVVar10);
    (*(code *)pVVar11)((Variant *)((long)plVar9 + (long)pVVar1));
  }
  else {
    uVar6 = 3;
LAB_0011364d:
    *in_R9 = uVar6;
    in_R9[2] = 1;
  }
LAB_00113658:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindT<Ref<Texture2D> const&>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindT<Ref<Texture2D>const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  Object *pOVar5;
  char cVar6;
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
  long local_58;
  undefined8 local_50;
  Object *local_48;
  undefined8 local_40;
  long local_30;
  
  plVar11 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar11 != (long *)0x0) && (plVar11[1] != 0)) && (*(char *)(plVar11[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (plVar11[1] == 0) {
      plVar9 = (long *)plVar11[0x23];
      if (plVar9 == (long *)0x0) {
        plVar9 = (long *)(**(code **)(*plVar11 + 0x40))(plVar11);
      }
    }
    else {
      plVar9 = (long *)(plVar11[1] + 0x20);
    }
    if (local_48 == (Object *)*plVar9) {
      if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Object *)0x1103b8;
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC158,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00113a10;
    }
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pVVar13 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (1 < in_R8D) {
    uVar7 = 3;
LAB_00113a05:
    *in_R9 = uVar7;
    in_R9[2] = 1;
    goto LAB_00113a10;
  }
  pVVar12 = param_2[5];
  if (pVVar12 == (Variant *)0x0) {
    if (in_R8D != 1) goto LAB_00113a60;
LAB_00113a50:
    pVVar12 = *(Variant **)param_4;
  }
  else {
    lVar2 = *(long *)(pVVar12 + -8);
    if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00113a60:
      uVar7 = 4;
      goto LAB_00113a05;
    }
    if (in_R8D == 1) goto LAB_00113a50;
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
  cVar6 = Variant::can_convert_strict(*(undefined4 *)pVVar12);
  uVar4 = _LC166;
  if (cVar6 == '\0') {
    *in_R9 = 2;
    *(undefined8 *)(in_R9 + 1) = uVar4;
  }
  local_48 = (Object *)0x0;
  pOVar8 = (Object *)Variant::get_validated_object();
  pOVar5 = local_48;
  if (pOVar8 != local_48) {
    if (pOVar8 == (Object *)0x0) {
      if (local_48 != (Object *)0x0) {
        local_48 = (Object *)0x0;
LAB_00113b7d:
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
      pOVar8 = (Object *)__dynamic_cast(pOVar8,&Object::typeinfo,&Texture2D::typeinfo,0);
      if (pOVar5 != pOVar8) {
        local_48 = pOVar8;
        if (pOVar8 != (Object *)0x0) {
          cVar6 = RefCounted::reference();
          if (cVar6 == '\0') {
            local_48 = (Object *)0x0;
          }
        }
        if (pOVar5 != (Object *)0x0) goto LAB_00113b7d;
      }
    }
  }
  (*(code *)pVVar13)((Variant *)((long)plVar11 + (long)pVVar1));
  if (local_48 != (Object *)0x0) {
    cVar6 = RefCounted::unreference();
    pOVar5 = local_48;
    if (cVar6 != '\0') {
      cVar6 = predelete_handler(local_48);
      if (cVar6 != '\0') {
        (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
        Memory::free_static(pOVar5,false);
      }
    }
  }
LAB_00113a10:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<Texture2D>>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<Ref<Texture2D>>::validated_call
          (MethodBindTRC<Ref<Texture2D>> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  Object *pOVar1;
  char cVar2;
  code *pcVar3;
  long *plVar4;
  Variant **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  Object *local_50;
  Variant **local_48;
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
    if (local_48 == (Variant **)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Variant **)0x1103b8;
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
      goto LAB_00113d26;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    param_2 = *(Variant ***)(param_1 + *(long *)(this + 0x60));
    pcVar3 = *(code **)(pcVar3 + (long)param_2 + -1);
  }
  (*pcVar3)(&local_50,param_1 + *(long *)(this + 0x60),param_2);
  if (local_50 == (Object *)0x0) {
    Variant::ObjData::unref();
  }
  else {
    local_48 = *(Variant ***)(local_50 + 0x60);
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
LAB_00113d26:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
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
    goto LAB_00113fcd;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_00114030;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_00114030:
      uVar6 = 4;
LAB_00113fcd:
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
      goto LAB_00113f4b;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_00113f4b:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_bool **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,1);
  uVar4 = _LC167;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_bool(this);
                    /* WARNING: Could not recover jumptable at 0x00113fa7. Too many branches */
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
      _err_print_error(&_LC158,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_00114096;
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
LAB_00114096:
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
    goto LAB_0011435d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_001143c0;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_001143c0:
      uVar6 = 4;
LAB_0011435d:
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
      goto LAB_001142db;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_001142db:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_float **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,3);
  uVar4 = _LC168;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  fVar9 = Variant::operator_cast_to_float(this);
                    /* WARNING: Could not recover jumptable at 0x00114334. Too many branches */
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
      _err_print_error(&_LC158,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_00114426;
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
LAB_00114426:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProceduralSkyMaterial::shader_mutex */

void ProceduralSkyMaterial::_GLOBAL__sub_I_shader_mutex(void)

{
  _shader_cache = (undefined1  [16])0x0;
  _shader_cache = (undefined1  [16])0x0;
  _shader_cache = (undefined1  [16])0x0;
  return;
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
/* MethodBindT<Color>::~MethodBindT() */

void __thiscall MethodBindT<Color>::~MethodBindT(MethodBindT<Color> *this)

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
/* MethodBindTRC<Color>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Color>::~MethodBindTRC(MethodBindTRC<Color> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Color const&>::~MethodBindT() */

void __thiscall MethodBindT<Color_const&>::~MethodBindT(MethodBindT<Color_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Ref<Texture2D>>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Ref<Texture2D>>::~MethodBindTRC(MethodBindTRC<Ref<Texture2D>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Ref<Texture2D> const&>::~MethodBindT() */

void __thiscall
MethodBindT<Ref<Texture2D>const&>::~MethodBindT(MethodBindT<Ref<Texture2D>const&> *this)

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



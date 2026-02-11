
/* RendererSceneRenderRD::environment_glow_set_use_bicubic_upscale(bool) */

void __thiscall
RendererSceneRenderRD::environment_glow_set_use_bicubic_upscale
          (RendererSceneRenderRD *this,bool param_1)

{
  this[0x178] = (RendererSceneRenderRD)param_1;
  return;
}



/* RendererSceneRenderRD::environment_set_volumetric_fog_volume_size(int, int) */

void __thiscall
RendererSceneRenderRD::environment_set_volumetric_fog_volume_size
          (RendererSceneRenderRD *this,int param_1,int param_2)

{
  *(int *)(this + 0x24a4) = param_1;
  *(int *)(this + 0x24a8) = param_2;
  return;
}



/* RendererSceneRenderRD::environment_set_volumetric_fog_filter_active(bool) */

void __thiscall
RendererSceneRenderRD::environment_set_volumetric_fog_filter_active
          (RendererSceneRenderRD *this,bool param_1)

{
  this[0x24ac] = (RendererSceneRenderRD)param_1;
  return;
}



/* RendererSceneRenderRD::environment_set_sdfgi_ray_count(RenderingServer::EnvironmentSDFGIRayCount)
    */

void __thiscall
RendererSceneRenderRD::environment_set_sdfgi_ray_count
          (RendererSceneRenderRD *this,undefined4 param_2)

{
  *(undefined4 *)(this + 0x21a4) = param_2;
  return;
}



/* RendererSceneRenderRD::environment_set_sdfgi_frames_to_converge(RenderingServer::EnvironmentSDFGIFramesToConverge)
    */

void __thiscall
RendererSceneRenderRD::environment_set_sdfgi_frames_to_converge
          (RendererSceneRenderRD *this,undefined4 param_2)

{
  *(undefined4 *)(this + 0x21a8) = param_2;
  return;
}



/* RendererSceneRenderRD::environment_set_sdfgi_frames_to_update_light(RenderingServer::EnvironmentSDFGIFramesToUpdateLight)
    */

void __thiscall
RendererSceneRenderRD::environment_set_sdfgi_frames_to_update_light
          (RendererSceneRenderRD *this,undefined4 param_2)

{
  *(undefined4 *)(this + 0x21ac) = param_2;
  return;
}



/* RendererSceneRenderRD::_render_buffers_get_luminance_multiplier() */

undefined4 RendererSceneRenderRD::_render_buffers_get_luminance_multiplier(void)

{
  return _LC0;
}



/* RendererSceneRenderRD::_render_buffers_get_color_format() */

undefined8 RendererSceneRenderRD::_render_buffers_get_color_format(void)

{
  return 0x60;
}



/* RendererSceneRenderRD::is_dynamic_gi_supported() const */

undefined8 RendererSceneRenderRD::is_dynamic_gi_supported(void)

{
  return 1;
}



/* RendererSceneRenderRD::gi_set_use_half_resolution(bool) */

void __thiscall
RendererSceneRenderRD::gi_set_use_half_resolution(RendererSceneRenderRD *this,bool param_1)

{
  this[0x21f0] = (RendererSceneRenderRD)param_1;
  return;
}



/* RendererSceneRenderRD::render_material(Transform3D const&, Projection const&, bool,
   PagedArray<RenderGeometryInstance*> const&, RID, Rect2i const&) */

void RendererSceneRenderRD::render_material(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x001000c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1f0))(_LC0);
  return;
}



/* RendererSceneRenderRD::set_debug_draw_mode(RenderingServer::ViewportDebugDraw) */

void __thiscall
RendererSceneRenderRD::set_debug_draw_mode(RendererSceneRenderRD *this,undefined4 param_2)

{
  *(undefined4 *)(this + 0x2438) = param_2;
  return;
}



/* RendererSceneRenderRD::set_time(double, double) */

void __thiscall
RendererSceneRenderRD::set_time(RendererSceneRenderRD *this,double param_1,double param_2)

{
  *(double *)(this + 0x168) = param_1;
  *(double *)(this + 0x170) = param_2;
  return;
}



/* RendererSceneRenderRD::screen_space_roughness_limiter_set_active(bool, float, float) */

void __thiscall
RendererSceneRenderRD::screen_space_roughness_limiter_set_active
          (RendererSceneRenderRD *this,bool param_1,float param_2,float param_3)

{
  this[0x248c] = (RendererSceneRenderRD)param_1;
  *(ulong *)(this + 0x2490) = CONCAT44(param_3,param_2);
  return;
}



/* RendererSceneRenderRD::screen_space_roughness_limiter_is_active() const */

RendererSceneRenderRD __thiscall
RendererSceneRenderRD::screen_space_roughness_limiter_is_active(RendererSceneRenderRD *this)

{
  return this[0x248c];
}



/* RendererSceneRenderRD::screen_space_roughness_limiter_get_amount() const */

undefined4 __thiscall
RendererSceneRenderRD::screen_space_roughness_limiter_get_amount(RendererSceneRenderRD *this)

{
  return *(undefined4 *)(this + 0x2490);
}



/* RendererSceneRenderRD::screen_space_roughness_limiter_get_limit() const */

undefined4 __thiscall
RendererSceneRenderRD::screen_space_roughness_limiter_get_limit(RendererSceneRenderRD *this)

{
  return *(undefined4 *)(this + 0x2494);
}



/* RendererSceneRenderRD::sdfgi_set_debug_probe_select(Vector3 const&, Vector3 const&) */

void __thiscall
RendererSceneRenderRD::sdfgi_set_debug_probe_select
          (RendererSceneRenderRD *this,Vector3 *param_1,Vector3 *param_2)

{
  *(undefined8 *)(this + 0x21b4) = *(undefined8 *)param_1;
  *(undefined4 *)(this + 0x21bc) = *(undefined4 *)(param_1 + 8);
  *(undefined8 *)(this + 0x21c0) = *(undefined8 *)param_2;
  *(undefined4 *)(this + 0x21c8) = *(undefined4 *)(param_2 + 8);
  return;
}



/* RendererSceneRenderRD::sky_allocate() */

void RendererSceneRenderRD::sky_allocate(void)

{
  RendererRD::SkyRD::allocate_sky_rid();
  return;
}



/* RendererSceneRenderRD::sky_initialize(RID) */

void RendererSceneRenderRD::sky_initialize(long param_1)

{
  RendererRD::SkyRD::initialize_sky_rid(param_1 + 0x210);
  return;
}



/* RendererSceneRenderRD::sky_set_radiance_size(RID, int) */

void RendererSceneRenderRD::sky_set_radiance_size(long param_1)

{
  RendererRD::SkyRD::sky_set_radiance_size(param_1 + 0x210);
  return;
}



/* RendererSceneRenderRD::sky_set_mode(RID, RenderingServer::SkyMode) */

void RendererSceneRenderRD::sky_set_mode(long param_1)

{
  RendererRD::SkyRD::sky_set_mode(param_1 + 0x210);
  return;
}



/* RendererSceneRenderRD::sky_set_material(RID, RID) */

void RendererSceneRenderRD::sky_set_material(long param_1)

{
  RendererRD::SkyRD::sky_set_material(param_1 + 0x210);
  return;
}



/* RendererSceneRenderRD::sky_bake_panorama(RID, float, bool, Vector2i const&) */

undefined8
RendererSceneRenderRD::sky_bake_panorama
          (undefined8 param_1,long param_2,undefined8 param_3,undefined1 param_4)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  RendererRD::SkyRD::sky_bake_panorama(param_1,param_2 + 0x210,param_3,param_4);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererSceneRenderRD::fog_volume_instance_create(RID) */

void RendererSceneRenderRD::fog_volume_instance_create(void)

{
  RendererRD::Fog::fog_volume_instance_create(RendererRD::Fog::singleton);
  return;
}



/* RendererSceneRenderRD::voxel_gi_instance_create(RID) */

void RendererSceneRenderRD::voxel_gi_instance_create(long param_1)

{
  RendererRD::GI::voxel_gi_instance_create(param_1 + 0xb50);
  return;
}



/* RendererSceneRenderRD::render_particle_collider_heightfield(RID, Transform3D const&,
   PagedArray<RenderGeometryInstance*> const&) */

void __thiscall
RendererSceneRenderRD::render_particle_collider_heightfield
          (RendererSceneRenderRD *this,undefined8 param_2,long param_3,undefined8 param_4)

{
  char cVar1;
  long *plVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  float fVar4;
  float extraout_XMM1_Da;
  float extraout_XMM1_Da_00;
  float fVar5;
  undefined1 auVar6 [16];
  float fVar7;
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  undefined8 local_e0;
  float local_d8;
  undefined8 local_d0;
  uint local_c8;
  float local_c4;
  float fStack_c0;
  float local_bc;
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined4 local_98;
  undefined8 local_94;
  undefined4 local_8c;
  undefined8 local_88;
  float local_80;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  plVar2 = (long *)RendererRD::ParticlesStorage::get_singleton();
  cVar1 = (**(code **)(*plVar2 + 0x1f0))(plVar2,param_2);
  if (cVar1 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("render_particle_collider_heightfield",
                       "servers/rendering/renderer_rd/renderer_scene_render_rd.cpp",0x4f5,
                       "Condition \"!particles_storage->particles_collision_is_heightfield(p_collider)\" is true."
                       ,0,0);
      return;
    }
  }
  else {
    local_88 = Basis::get_scale();
    local_80 = extraout_XMM1_Da;
    local_b8._0_8_ = RendererRD::ParticlesStorage::particles_collision_get_extents(plVar2,param_2);
    fVar4 = (float)((ulong)local_b8._0_8_ >> 0x20) * local_88._4_4_;
    local_b8._8_4_ = extraout_XMM1_Da_00;
    fVar5 = (float)local_b8._0_8_ * (float)local_88;
    fVar7 = extraout_XMM1_Da_00 * local_80;
    Projection::Projection((Projection *)&local_88);
    Projection::set_orthogonal
              ((float)((uint)fVar5 ^ _LC9),fVar5,(float)((uint)fVar7 ^ _LC9),fVar7,0.0,fVar4 + fVar4
              );
    local_b8 = ZEXT416(_LC0);
    fVar5 = *(float *)(param_3 + 0x20);
    local_a8 = ZEXT416(_LC0);
    fVar9 = (float)*(undefined8 *)(param_3 + 8);
    fVar10 = (float)((ulong)*(undefined8 *)(param_3 + 0x10) >> 0x20);
    fStack_c0 = (float)((ulong)*(undefined8 *)(param_3 + 0x24) >> 0x20);
    fVar4 = fVar4 + fStack_c0;
    local_bc = *(float *)(param_3 + 0x2c);
    local_98 = 0x3f800000;
    local_8c = 0;
    local_94 = 0;
    local_c4 = (float)*(undefined8 *)(param_3 + 0x24);
    _local_c4 = CONCAT44(fVar4,local_c4);
    fVar7 = fVar9 * fVar9 + fVar10 * fVar10 + fVar5 * fVar5;
    if (fVar7 == 0.0) {
      local_d0 = CONCAT44(_LC8._4_4_,(uint)_LC8);
      local_c8 = _LC9;
    }
    else {
      fVar7 = SQRT(fVar7);
      auVar6._4_4_ = fVar10;
      auVar6._0_4_ = fVar9;
      auVar6._8_8_ = 0;
      auVar8._4_4_ = fVar7;
      auVar8._0_4_ = fVar7;
      auVar8._8_8_ = _LC16;
      auVar6 = divps(auVar6,auVar8);
      local_c8 = (uint)(fVar5 / fVar7) ^ _LC9;
      local_d0 = CONCAT44(auVar6._4_4_ ^ _LC8._4_4_,auVar6._0_4_ ^ (uint)_LC8);
    }
    local_d8 = local_bc - *(float *)(param_3 + 0x1c);
    local_e0 = CONCAT44(fVar4 - (float)((ulong)*(undefined8 *)(param_3 + 0xc) >> 0x20),
                        local_c4 - (float)*(undefined8 *)(param_3 + 4));
    Transform3D::set_look_at
              ((Vector3 *)local_b8,(Vector3 *)&local_c4,(Vector3 *)&local_e0,SUB81(&local_d0,0));
    uVar3 = RendererRD::ParticlesStorage::particles_collision_get_heightfield_framebuffer
                      (plVar2,param_2);
    (**(code **)(*(long *)this + 0x208))
              (this,uVar3,(Vector3 *)local_b8,(Projection *)&local_88,param_4);
    Projection::~Projection((Projection *)&local_88);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererSceneRenderRD::update() */

void RendererSceneRenderRD::update(void)

{
  RendererRD::SkyRD::update_dirty_skys();
  return;
}



/* RendererSceneRenderRD::is_vrs_supported() const */

void RendererSceneRenderRD::is_vrs_supported(void)

{
  undefined8 uVar1;
  
  uVar1 = RenderingDevice::get_singleton();
  RenderingDevice::has_feature(uVar1,2);
  return;
}



/* RendererSceneRenderRD::get_max_elements() const */

uint RendererSceneRenderRD::get_max_elements(void)

{
  uint uVar1;
  long in_FS_OFFSET;
  long local_40;
  int local_38 [6];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  ProjectSettings::get_singleton();
  StringName::StringName
            ((StringName *)&local_40,"rendering/limits/cluster_builder/max_clustered_elements",false
            );
  ProjectSettings::get_setting_with_override((StringName *)local_38);
  uVar1 = Variant::operator_cast_to_unsigned_int((Variant *)local_38);
  if (Variant::needs_deinit[local_38[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_40 != 0)) {
    StringName::unref();
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererSceneRenderRD::fog_volume_instance_set_transform(RID, Transform3D const&) */

void __thiscall
RendererSceneRenderRD::fog_volume_instance_set_transform
          (undefined8 param_1,ulong param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(RendererRD::Fog::singleton + 0x7c))) {
    lVar1 = *(long *)(*(long *)(RendererRD::Fog::singleton + 0x68) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(RendererRD::Fog::singleton + 0x78))
                     * 8) +
            ((param_2 & 0xffffffff) % (ulong)*(uint *)(RendererRD::Fog::singleton + 0x78)) * 0x48;
    if (*(int *)(lVar1 + 0x40) == (int)(param_2 >> 0x20)) {
      uVar2 = param_3[1];
      *(undefined8 *)(lVar1 + 8) = *param_3;
      *(undefined8 *)(lVar1 + 0x10) = uVar2;
      uVar2 = param_3[3];
      *(undefined8 *)(lVar1 + 0x18) = param_3[2];
      *(undefined8 *)(lVar1 + 0x20) = uVar2;
      uVar2 = param_3[5];
      *(undefined8 *)(lVar1 + 0x28) = param_3[4];
      *(undefined8 *)(lVar1 + 0x30) = uVar2;
      return;
    }
    if (*(int *)(lVar1 + 0x40) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("fog_volume_instance_set_transform",
                   "./servers/rendering/renderer_rd/environment/fog.h",0x104,
                   "Parameter \"fvi\" is null.",0,0);
  return;
}



/* RendererSceneRenderRD::fog_volume_instance_set_active(RID, bool) */

void __thiscall
RendererSceneRenderRD::fog_volume_instance_set_active
          (undefined8 param_1,ulong param_2,undefined1 param_3)

{
  long lVar1;
  int iVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(RendererRD::Fog::singleton + 0x7c))) {
    lVar1 = *(long *)(*(long *)(RendererRD::Fog::singleton + 0x68) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(RendererRD::Fog::singleton + 0x78))
                     * 8) +
            ((param_2 & 0xffffffff) % (ulong)*(uint *)(RendererRD::Fog::singleton + 0x78)) * 0x48;
    iVar2 = *(int *)(lVar1 + 0x40);
    if (iVar2 == (int)(param_2 >> 0x20)) {
      *(undefined1 *)(lVar1 + 0x38) = param_3;
      return;
    }
    if (iVar2 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("fog_volume_instance_set_active",
                   "./servers/rendering/renderer_rd/environment/fog.h",0x10a,
                   "Parameter \"fvi\" is null.",0,0);
  return;
}



/* RendererSceneRenderRD::fog_volume_instance_get_volume(RID) const */

undefined8 __thiscall
RendererSceneRenderRD::fog_volume_instance_get_volume(undefined8 param_1,ulong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(RendererRD::Fog::singleton + 0x7c))) {
    puVar1 = (undefined8 *)
             (*(long *)(*(long *)(RendererRD::Fog::singleton + 0x68) +
                       ((param_2 & 0xffffffff) / (ulong)*(uint *)(RendererRD::Fog::singleton + 0x78)
                       ) * 8) +
             ((param_2 & 0xffffffff) % (ulong)*(uint *)(RendererRD::Fog::singleton + 0x78)) * 0x48);
    iVar2 = *(int *)(puVar1 + 8);
    if (iVar2 == (int)(param_2 >> 0x20)) {
      return *puVar1;
    }
    if (iVar2 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("fog_volume_instance_get_volume",
                   "./servers/rendering/renderer_rd/environment/fog.h",0x110,
                   "Parameter \"fvi\" is null.",0,0);
  return 0;
}



/* RendererSceneRenderRD::fog_volume_instance_get_position(RID) const */

undefined1  [16] __thiscall
RendererSceneRenderRD::fog_volume_instance_get_position(undefined8 param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  long in_FS_OFFSET;
  undefined1 auVar3 [16];
  undefined8 local_28;
  undefined4 local_20;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(RendererRD::Fog::singleton + 0x7c))) {
    lVar1 = *(long *)(*(long *)(RendererRD::Fog::singleton + 0x68) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(RendererRD::Fog::singleton + 0x78))
                     * 8) +
            ((param_2 & 0xffffffff) % (ulong)*(uint *)(RendererRD::Fog::singleton + 0x78)) * 0x48;
    if (*(int *)(lVar1 + 0x40) == (int)(param_2 >> 0x20)) {
      local_28 = *(undefined8 *)(lVar1 + 0x2c);
      local_20 = *(undefined4 *)(lVar1 + 0x34);
      goto LAB_001008bd;
    }
    if (*(int *)(lVar1 + 0x40) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("fog_volume_instance_get_position",
                   "./servers/rendering/renderer_rd/environment/fog.h",0x116,
                   "Parameter \"fvi\" is null.",0,0);
  local_20 = 0;
  local_28 = 0;
LAB_001008bd:
  auVar3._8_4_ = local_20;
  auVar3._0_8_ = local_28;
  if (lVar2 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  auVar3._12_4_ = 0;
  return auVar3;
}



/* RendererSceneRenderRD::voxel_gi_update(RID, bool, Vector<RID> const&,
   PagedArray<RenderGeometryInstance*> const&) */

void __thiscall
RendererSceneRenderRD::voxel_gi_update
          (RendererSceneRenderRD *this,undefined8 param_2,undefined1 param_3,undefined8 param_4,
          undefined8 param_5)

{
  char cVar1;
  
  if (*(code **)(*(long *)this + 0x280) != is_dynamic_gi_supported) {
    cVar1 = (**(code **)(*(long *)this + 0x280))(this);
    if (cVar1 == '\0') {
      return;
    }
  }
  RendererRD::GI::voxel_gi_update(this + 0xb50,param_2,param_3,param_4,param_5);
  return;
}



/* RendererSceneRenderRD::lightmaps_set_bicubic_filter(bool) */

void __thiscall
RendererSceneRenderRD::lightmaps_set_bicubic_filter(RendererSceneRenderRD *this,bool param_1)

{
  if (this[0x2470] != (RendererSceneRenderRD)param_1) {
    this[0x2470] = (RendererSceneRenderRD)param_1;
    if (*(code **)(*(long *)this + 0x220) != _update_shader_quality_settings) {
                    /* WARNING: Could not recover jumptable at 0x00100a20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)this + 0x220))();
      return;
    }
  }
  return;
}



/* RendererSceneRenderRD::decals_set_filter(RenderingServer::DecalFilter) */

void __thiscall RendererSceneRenderRD::decals_set_filter(RendererSceneRenderRD *this,int param_2)

{
  if (*(int *)(this + 0x2484) != param_2) {
    *(int *)(this + 0x2484) = param_2;
    if (*(code **)(*(long *)this + 0x220) != _update_shader_quality_settings) {
                    /* WARNING: Could not recover jumptable at 0x00100a60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)this + 0x220))();
      return;
    }
  }
  return;
}



/* RendererSceneRenderRD::light_projectors_set_filter(RenderingServer::LightProjectorFilter) */

void __thiscall
RendererSceneRenderRD::light_projectors_set_filter(RendererSceneRenderRD *this,int param_2)

{
  if (*(int *)(this + 0x2488) != param_2) {
    *(int *)(this + 0x2488) = param_2;
    if (*(code **)(*(long *)this + 0x220) != _update_shader_quality_settings) {
                    /* WARNING: Could not recover jumptable at 0x00100aa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)this + 0x220))();
      return;
    }
  }
  return;
}



/* RendererSceneRenderRD::voxel_gi_instance_set_transform_to_data(RID, Transform3D const&) */

void __thiscall
RendererSceneRenderRD::voxel_gi_instance_set_transform_to_data
          (RendererSceneRenderRD *this,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  
  if (*(code **)(*(long *)this + 0x280) != is_dynamic_gi_supported) {
    cVar1 = (**(code **)(*(long *)this + 0x280))();
    if (cVar1 == '\0') {
      return;
    }
  }
  RendererRD::GI::voxel_gi_instance_set_transform_to_data(this + 0xb50,param_2,param_3);
  return;
}



/* RendererSceneRenderRD::voxel_gi_needs_update(RID) const */

void __thiscall
RendererSceneRenderRD::voxel_gi_needs_update(RendererSceneRenderRD *this,undefined8 param_2)

{
  char cVar1;
  
  if (*(code **)(*(long *)this + 0x280) != is_dynamic_gi_supported) {
    cVar1 = (**(code **)(*(long *)this + 0x280))();
    if (cVar1 == '\0') {
      return;
    }
  }
  RendererRD::GI::voxel_gi_needs_update(this + 0xb50,param_2);
  return;
}



/* RendererSceneRenderRD::free(RID) */

undefined4 __thiscall RendererSceneRenderRD::free(RendererSceneRenderRD *this,ulong param_2)

{
  pthread_mutex_t *ppVar1;
  long lVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  
  cVar3 = RendererSceneRender::is_environment();
  if (cVar3 != '\0') {
    RendererSceneRender::environment_free();
    return 1;
  }
  cVar3 = RendererSceneRender::is_compositor(this,param_2);
  if (cVar3 != '\0') {
    RendererSceneRender::compositor_free();
    return 1;
  }
  uVar4 = RendererSceneRender::is_compositor_effect(this,param_2);
  lVar2 = RenderingServerGlobals::camera_attributes;
  if ((char)uVar4 != '\0') {
    RendererSceneRender::compositor_effect_free(this,param_2);
    return 1;
  }
  ppVar1 = (pthread_mutex_t *)(RenderingServerGlobals::camera_attributes + 0x40);
  iVar5 = pthread_mutex_lock(ppVar1);
  if (iVar5 != 0) goto LAB_00100e3d;
  uVar6 = (uint)param_2;
  uVar7 = param_2 & 0xffffffff;
  uVar8 = (uint)(param_2 >> 0x20);
  if (uVar6 < *(uint *)(lVar2 + 0x2c)) {
    if (param_2 >> 0x20 == 0x7fffffff) {
      pthread_mutex_unlock(ppVar1);
    }
    else {
      if ((*(uint *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(lVar2 + 0x28)) * 0x50 +
                     *(long *)(*(long *)(lVar2 + 0x18) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(lVar2 + 0x28)) * 8) + 0x48)
          & 0x7fffffff) == uVar8) {
        pthread_mutex_unlock(ppVar1);
        RendererCameraAttributes::camera_attributes_free
                  (RenderingServerGlobals::camera_attributes,param_2);
        return 1;
      }
      pthread_mutex_unlock(ppVar1);
      if (uVar6 < *(uint *)(this + 0xbcc)) goto LAB_00100c4e;
    }
  }
  else {
    pthread_mutex_unlock(ppVar1);
    if ((uVar6 < *(uint *)(this + 0xbcc)) && (param_2 >> 0x20 != 0x7fffffff)) {
LAB_00100c4e:
      if ((*(uint *)((uVar7 % (ulong)*(uint *)(this + 0xbc8)) * 0x90 +
                     *(long *)(*(long *)(this + 3000) + (uVar7 / *(uint *)(this + 0xbc8)) * 8) +
                    0x88) & 0x7fffffff) == uVar8) {
        RendererRD::GI::voxel_gi_instance_free(this + 0xb50,param_2);
        return 1;
      }
    }
  }
  ppVar1 = (pthread_mutex_t *)(this + 0xb20);
  iVar5 = pthread_mutex_lock(ppVar1);
  if (iVar5 == 0) {
    if (uVar6 < *(uint *)(this + 0xb0c)) {
      if (param_2 >> 0x20 == 0x7fffffff) {
        pthread_mutex_unlock(ppVar1);
        return uVar4;
      }
      if ((*(uint *)((uVar7 % (ulong)*(uint *)(this + 0xb08)) * 0xb8 +
                     *(long *)(*(long *)(this + 0xaf8) + (uVar7 / *(uint *)(this + 0xb08)) * 8) +
                    0xb0) & 0x7fffffff) == uVar8) {
        pthread_mutex_unlock(ppVar1);
        RendererRD::SkyRD::update_dirty_skys();
        RendererRD::SkyRD::free_sky(this + 0x210,param_2);
        return 1;
      }
      pthread_mutex_unlock(ppVar1);
      if (*(uint *)(RendererRD::Fog::singleton + 0x7c) <= uVar6) {
        return uVar4;
      }
    }
    else {
      pthread_mutex_unlock(ppVar1);
      if (*(uint *)(RendererRD::Fog::singleton + 0x7c) <= uVar6) {
        return uVar4;
      }
      if (param_2 >> 0x20 == 0x7fffffff) {
        return uVar4;
      }
    }
    if ((*(uint *)(*(long *)(*(long *)(RendererRD::Fog::singleton + 0x68) +
                            (uVar7 / *(uint *)(RendererRD::Fog::singleton + 0x78)) * 8) +
                   (uVar7 % (ulong)*(uint *)(RendererRD::Fog::singleton + 0x78)) * 0x48 + 0x40) &
        0x7fffffff) == uVar8) {
      RendererRD::Fog::fog_instance_free(RendererRD::Fog::singleton,param_2);
      return 1;
    }
    return uVar4;
  }
LAB_00100e3d:
                    /* WARNING: Subroutine does not return */
  std::__throw_system_error(iVar5);
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



/* RendererSceneRenderRD::render_buffers_create() */

void RendererSceneRenderRD::render_buffers_create(void)

{
  long lVar1;
  code *pcVar2;
  char cVar3;
  Object OVar4;
  undefined4 uVar5;
  RenderSceneBuffersRD *this;
  long lVar6;
  RenderSceneBuffersRD *pRVar7;
  long *in_RSI;
  long *in_RDI;
  long in_FS_OFFSET;
  Object *local_38;
  
  pRVar7 = (RenderSceneBuffersRD *)0x0;
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  this = (RenderSceneBuffersRD *)operator_new(0x368,"");
  RenderSceneBuffersRD::RenderSceneBuffersRD(this);
  postinitialize_handler((Object *)this);
  cVar3 = RefCounted::init_ref();
  if (cVar3 != '\0') {
    cVar3 = RefCounted::reference();
    if (cVar3 != '\0') {
      pRVar7 = this;
    }
    cVar3 = RefCounted::unreference();
    if (cVar3 != '\0') {
      cVar3 = predelete_handler((Object *)this);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)this + 0x140))(this);
        Memory::free_static(this,false);
      }
    }
  }
  lVar6 = *in_RSI;
  OVar4 = (Object)0x1;
  if (*(code **)(lVar6 + 600) != is_dynamic_gi_supported) {
    OVar4 = (Object)(**(code **)(lVar6 + 600))();
    lVar6 = *in_RSI;
  }
  ((Object *)pRVar7)[0x17c] = OVar4;
  pcVar2 = *(code **)(lVar6 + 0x250);
  *(int *)((Object *)pRVar7 + 0x180) = (int)in_RSI[0x494];
  uVar5 = 0x60;
  if (pcVar2 != _render_buffers_get_color_format) {
    uVar5 = (*pcVar2)();
    lVar6 = *in_RSI;
  }
  *(undefined4 *)((Object *)pRVar7 + 0x184) = uVar5;
  pcVar2 = *(code **)(lVar6 + 0x1d8);
  if (in_RSI[0x2c] != 0) {
    *(long *)((Object *)pRVar7 + 0x188) = in_RSI[0x2c];
  }
  cVar3 = RefCounted::reference();
  local_38 = (Object *)pRVar7;
  if (cVar3 == '\0') {
    local_38 = (Object *)0x0;
  }
  (*pcVar2)();
  if (local_38 != (Object *)0x0) {
    cVar3 = RefCounted::unreference();
    if (cVar3 != '\0') {
      cVar3 = predelete_handler(local_38);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)local_38 + 0x140))(local_38);
        Memory::free_static(local_38,false);
        *in_RDI = 0;
        goto LAB_00100fef;
      }
    }
  }
  *in_RDI = 0;
LAB_00100fef:
  lVar6 = __dynamic_cast(pRVar7,&Object::typeinfo,&RenderSceneBuffers::typeinfo,0);
  if (lVar6 != 0) {
    *in_RDI = lVar6;
    cVar3 = RefCounted::reference();
    if (cVar3 == '\0') {
      *in_RDI = 0;
    }
  }
  cVar3 = RefCounted::unreference();
  if (cVar3 != '\0') {
    cVar3 = predelete_handler((Object *)pRVar7);
    if (cVar3 != '\0') {
      (**(code **)(*(long *)pRVar7 + 0x140))(pRVar7);
      Memory::free_static(pRVar7,false);
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RendererSceneRenderRD::environment_bake_panorama(RID, bool, Vector2i const&) */

long * RendererSceneRenderRD::environment_bake_panorama
                 (undefined8 param_1,undefined8 param_2,long *param_3,long *param_4,long param_5,
                 undefined1 param_6,int *param_7)

{
  long *plVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  Color *pCVar9;
  Object *pOVar10;
  long in_FS_OFFSET;
  bool bVar11;
  float fVar12;
  float fVar13;
  float extraout_XMM0_Da;
  float extraout_XMM0_Db;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float local_b8;
  float fStack_b4;
  undefined8 local_a8;
  undefined8 uStack_a0;
  Object *local_60;
  undefined1 local_58 [8];
  undefined8 uStack_50;
  long local_40;
  
  fVar14 = (float)((ulong)param_2 >> 0x20);
  fVar16 = (float)param_2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_5 == 0) {
    _err_print_error("environment_bake_panorama",
                     "servers/rendering/renderer_rd/renderer_scene_render_rd.cpp",0x69,
                     "Condition \"p_env.is_null()\" is true. Returning: Ref<Image>()",0,0);
    *param_3 = 0;
    goto LAB_0010121a;
  }
  uVar5 = RendererSceneRender::environment_get_background(param_4,param_5);
  if (uVar5 - 3 < 3) {
LAB_00101212:
    *param_3 = 0;
    goto LAB_0010121a;
  }
  iVar6 = RendererSceneRender::environment_get_ambient_source(param_4,param_5);
  if ((uVar5 < 2) && (iVar6 == 0)) {
LAB_00101271:
    bVar11 = false;
LAB_00101274:
    fVar12 = (float)RendererSceneRender::environment_get_ambient_sky_contribution(param_4,param_5);
    fVar13 = (float)RendererSceneRender::environment_get_ambient_light_energy(param_4,param_5);
    RendererSceneRender::environment_get_ambient_light(param_4,param_5);
    fVar17 = _LC31;
    if (_LC31 <= fVar16) {
      fVar16 = powf((float)(((double)fVar16 + __LC33) * __LC34),_LC35);
    }
    else {
      fVar16 = fVar16 * _LC32;
    }
    if (fVar17 <= extraout_XMM0_Db) {
      fVar15 = powf((float)(((double)extraout_XMM0_Db + __LC33) * __LC34),_LC35);
    }
    else {
      fVar15 = extraout_XMM0_Db * _LC32;
    }
    if (fVar17 <= extraout_XMM0_Da) {
      fVar17 = powf((float)(((double)extraout_XMM0_Da + __LC33) * __LC34),_LC35);
    }
    else {
      fVar17 = extraout_XMM0_Da * _LC32;
    }
    bVar3 = true;
    fVar16 = fVar13 * fVar16;
    local_a8 = CONCAT44(fVar15 * fVar13,fVar17 * fVar13);
    uStack_a0 = CONCAT44(fVar14,fVar16);
LAB_0010133d:
    if (!bVar11) goto LAB_00101546;
    pcVar2 = *(code **)(*param_4 + 0x70);
    RendererSceneRender::environment_get_bg_energy_multiplier(param_4,param_5);
    uVar7 = RendererSceneRender::environment_get_sky(param_4,param_5);
    if (pcVar2 == sky_bake_panorama) {
      RendererRD::SkyRD::sky_bake_panorama();
    }
    else {
      (*pcVar2)(&local_60,param_4,uVar7,param_6,param_7);
    }
    pOVar10 = local_60;
    if (bVar3) {
      if (local_60 == (Object *)0x0) goto LAB_00101212;
      if (0 < *param_7) {
        iVar6 = 0;
        do {
          pCVar9 = (Color *)0x0;
          if (0 < param_7[1]) {
            do {
              uVar7 = Image::get_pixel((int)pOVar10,iVar6);
              uVar5 = (int)pCVar9 + 1;
              local_b8 = (float)uVar7;
              fStack_b4 = (float)((ulong)uVar7 >> 0x20);
              local_58._4_4_ = (fStack_b4 - local_a8._4_4_) * fVar12 + local_a8._4_4_;
              local_58._0_4_ = (local_b8 - (float)local_a8) * fVar12 + (float)local_a8;
              uStack_50._0_4_ = (fVar16 - (float)uStack_a0) * fVar12 + (float)uStack_a0;
              uStack_50._4_4_ = (fVar14 - uStack_a0._4_4_) * fVar12 + uStack_a0._4_4_;
              Image::set_pixel((int)pOVar10,iVar6,pCVar9);
              pCVar9 = (Color *)(ulong)uVar5;
              pOVar10 = local_60;
            } while ((int)uVar5 < param_7[1]);
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < *param_7);
        goto LAB_00101446;
      }
    }
    else {
LAB_00101446:
      if (pOVar10 == (Object *)0x0) goto LAB_00101212;
    }
    *param_3 = (long)pOVar10;
    cVar4 = RefCounted::reference();
  }
  else {
    bVar3 = uVar5 == 2 && iVar6 == 0 || iVar6 == 3;
    bVar11 = bVar3;
    if (bVar3) goto LAB_00101274;
    if (uVar5 == 2) {
      lVar8 = RendererSceneRender::environment_get_sky(param_4,param_5);
      bVar11 = lVar8 != 0;
      if (iVar6 == 2) goto LAB_00101274;
      local_b8 = 0.0;
      local_a8 = __LC28;
      uStack_a0 = _UNK_00113478;
      fVar12 = local_b8;
      goto LAB_0010133d;
    }
    if (iVar6 == 2) goto LAB_00101271;
    fVar12 = 0.0;
    local_a8 = __LC28;
    uStack_a0 = _UNK_00113478;
LAB_00101546:
    fVar17 = (float)RendererSceneRender::environment_get_bg_energy_multiplier(param_4,param_5);
    if (uVar5 == 0) {
      _local_58 = *(undefined1 (*) [16])(RenderingServerGlobals::texture_storage + 8);
    }
    else {
      local_58 = (undefined1  [8])RendererSceneRender::environment_get_bg_color(param_4,param_5);
      uStack_50._4_4_ = fVar14;
      uStack_50._0_4_ = fVar16;
    }
    fVar16 = _LC31;
    fVar14 = uStack_50._4_4_;
    if (_LC31 <= (float)uStack_50) {
      fVar13 = powf((float)(((double)(float)uStack_50 + __LC33) * __LC34),_LC35);
    }
    else {
      fVar13 = (float)uStack_50 * _LC32;
    }
    if (fVar16 <= (float)local_58._4_4_) {
      fVar15 = powf((float)(((double)(float)local_58._4_4_ + __LC33) * __LC34),_LC35);
    }
    else {
      fVar15 = _LC32 * (float)local_58._4_4_;
    }
    if (fVar16 <= (float)local_58._0_4_) {
      local_58._0_4_ = powf((float)(((double)(float)local_58._0_4_ + __LC33) * __LC34),_LC35);
    }
    else {
      local_58._0_4_ = (float)local_58._0_4_ * _LC32;
    }
    local_58._0_4_ = (float)local_58._0_4_ * fVar17;
    local_58._4_4_ = fVar15 * fVar17;
    uStack_50._4_4_ = fVar14;
    uStack_50._0_4_ = fVar17 * fVar13;
    if (bVar3) {
      local_58._0_4_ = ((float)local_58._0_4_ - (float)local_a8) * fVar12 + (float)local_a8;
      local_58._4_4_ = (fVar15 * fVar17 - local_a8._4_4_) * fVar12 + local_a8._4_4_;
      uStack_50._0_4_ = (fVar17 * fVar13 - (float)uStack_a0) * fVar12 + (float)uStack_a0;
      uStack_50._4_4_ = (fVar14 - uStack_a0._4_4_) * fVar12 + uStack_a0._4_4_;
    }
    Image::create_empty(&local_60,*param_7,param_7[1],0,0xb);
    Image::fill((Color *)local_60);
    *param_3 = 0;
    if (local_60 == (Object *)0x0) goto LAB_0010121a;
    *param_3 = (long)local_60;
    cVar4 = RefCounted::reference();
  }
  if (cVar4 == '\0') {
    *param_3 = 0;
  }
  if (((local_60 != (Object *)0x0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) &&
     (cVar4 = predelete_handler(local_60), cVar4 != '\0')) {
    if (*(code **)(*(long *)local_60 + 0x140) == Image::~Image) {
      *(code **)local_60 = Memory::free_static;
      if (*(long *)(local_60 + 0x250) != 0) {
        LOCK();
        plVar1 = (long *)(*(long *)(local_60 + 0x250) + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar8 = *(long *)(local_60 + 0x250);
          *(undefined8 *)(local_60 + 0x250) = 0;
          Memory::free_static((void *)(lVar8 + -0x10),false);
        }
      }
      Resource::~Resource((Resource *)local_60);
    }
    else {
      (**(code **)(*(long *)local_60 + 0x140))(local_60);
    }
    Memory::free_static(local_60,false);
  }
LAB_0010121a:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<RID>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<RID>::_copy_on_write(CowData<RID> *this)

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



/* RendererSceneRenderRD::_render_buffers_debug_draw(RenderDataRD const*) */

void __thiscall
RendererSceneRenderRD::_render_buffers_debug_draw(RendererSceneRenderRD *this,RenderDataRD *param_1)

{
  StringName *pSVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  StringName *pSVar5;
  char cVar6;
  int iVar7;
  long *plVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  int iVar15;
  long lVar16;
  int *piVar17;
  long in_FS_OFFSET;
  undefined1 auVar18 [16];
  StringName *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  plVar8 = (long *)RendererRD::LightStorage::get_singleton();
  plVar9 = (long *)RendererRD::TextureStorage::get_singleton();
  pSVar1 = *(StringName **)(param_1 + 0x178);
  if (pSVar1 != (StringName *)0x0) {
    cVar6 = RefCounted::reference();
    if (cVar6 != '\0') {
      uVar14 = *(undefined8 *)(pSVar1 + 0x198);
      iVar7 = *(int *)(this + 0x2438);
      if (iVar7 == 9) {
        if (*(long *)(param_1 + 0x1d8) != 0) {
          lVar11 = RendererRD::LightStorage::get_singleton();
          uVar3 = *(ulong *)(param_1 + 0x1d8);
          if ((uVar3 == 0) || (*(uint *)(lVar11 + 0x34c) <= (uint)uVar3)) {
LAB_001027e8:
            _err_print_error("shadow_atlas_get_texture",
                             "./servers/rendering/renderer_rd/storage_rd/light_storage.h",0x446,
                             "Parameter \"atlas\" is null.",0,0);
LAB_0010280d:
            lVar11 = plVar9[4];
          }
          else {
            lVar11 = *(long *)(*(long *)(lVar11 + 0x338) +
                              ((uVar3 & 0xffffffff) / (ulong)*(uint *)(lVar11 + 0x348)) * 8) +
                     ((uVar3 & 0xffffffff) % (ulong)*(uint *)(lVar11 + 0x348)) * 200;
            iVar7 = *(int *)(lVar11 + 0xc0);
            if (iVar7 != (int)(uVar3 >> 0x20)) {
              if (iVar7 + 0x80000000U < 0x7fffffff) {
                _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                 "Method/function failed. Returning: nullptr",
                                 "Attempting to use an uninitialized RID",0,0);
              }
              goto LAB_001027e8;
            }
            lVar11 = *(long *)(lVar11 + 0x80);
            if (lVar11 == 0) goto LAB_0010280d;
          }
          local_58 = (**(code **)(*plVar9 + 0x210))(plVar9,uVar14);
          uVar13 = Vector2i::operator_cast_to_Vector2((Vector2i *)&local_58);
          local_58 = 0;
          uVar12 = *(undefined8 *)(this + 0x138);
          local_50 = 0;
          local_80 = CONCAT44(_LC44._4_4_ * (float)((ulong)uVar13 >> 0x20),
                              (float)_LC44 * (float)uVar13);
          uVar13 = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_80);
          local_78 = 0;
          local_68._0_8_ = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_78);
          local_68._8_8_ = uVar13;
          uVar13 = RendererRD::TextureStorage::render_target_get_rd_framebuffer(plVar9,uVar14);
          RendererRD::CopyEffects::copy_to_fb_rect
                    (uVar12,lVar11,uVar13,local_68,0,1,0,0,0,0,0,0,0,(Vector2i *)&local_58);
          iVar7 = *(int *)(this + 0x2438);
          goto joined_r0x001021d2;
        }
LAB_00101b22:
        cVar6 = RefCounted::unreference();
      }
      else {
joined_r0x001021d2:
        if (iVar7 == 10) {
          lVar11 = RendererRD::LightStorage::get_singleton();
          if (*(long *)(lVar11 + 0x388) != 0) {
            lVar11 = RendererRD::LightStorage::get_singleton();
            uVar12 = *(undefined8 *)(lVar11 + 0x388);
            local_88 = (**(code **)(*plVar9 + 0x210))(plVar9,uVar14);
            uVar13 = RendererRD::TextureStorage::render_target_get_rd_framebuffer(plVar9,uVar14);
            local_58 = Vector2i::operator*((Vector2i *)&local_88,2);
            local_80 = Vector2i::operator/((Vector2i *)&local_58,3);
            iVar7 = (int)local_80;
            iVar15 = (int)((ulong)local_80 >> 0x20);
            if (iVar7 < iVar15) {
              local_80 = CONCAT44(iVar7,iVar7);
            }
            else if (iVar15 < iVar7) {
              local_80 = CONCAT44(iVar15,iVar15);
            }
            uVar10 = *(undefined8 *)(this + 0x138);
            local_58 = 0;
            local_50 = 0;
            local_78 = 0;
            local_68._0_8_ = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_78);
            local_68._8_8_ = local_80;
            lVar11 = 0;
            RendererRD::CopyEffects::copy_to_fb_rect
                      (uVar10,uVar12,uVar13,local_68,0,1,0,0,0,0,0,0,0,(Vector2i *)&local_58);
            if (0 < *(int *)(param_1 + 0x240)) {
              do {
                uVar3 = *(ulong *)(lVar11 * 0x40 + *(long *)(param_1 + 0x238));
                if ((uVar3 == 0) || (*(uint *)((long)plVar8 + 0x84) <= (uint)uVar3)) {
LAB_0010f85c:
                    /* WARNING: Does not return */
                  pcVar2 = (code *)invalidInstructionException();
                  (*pcVar2)();
                }
                lVar16 = ((uVar3 & 0xffffffff) % (ulong)*(uint *)(plVar8 + 0x10)) * 0x498 +
                         *(long *)(plVar8[0xe] +
                                  ((uVar3 & 0xffffffff) / (ulong)*(uint *)(plVar8 + 0x10)) * 8);
                iVar7 = *(int *)(lVar16 + 0x490);
                if (iVar7 != (int)(uVar3 >> 0x20)) {
                  if (iVar7 + 0x80000000U < 0x7fffffff) {
                    _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                     "Method/function failed. Returning: nullptr",
                                     "Attempting to use an uninitialized RID",0,0,uVar3 >> 0x20);
                  }
                  goto LAB_0010f85c;
                }
                uVar4 = *(ulong *)(lVar16 + 0x3d0);
                if (*(code **)(*plVar8 + 0xf8) == RendererRD::LightStorage::light_get_type) {
                  if ((uVar4 != 0) && ((uint)uVar4 < *(uint *)((long)plVar8 + 0x2c))) {
                    piVar17 = (int *)(((uVar4 & 0xffffffff) % (ulong)*(uint *)(plVar8 + 5)) * 0xe8 +
                                     *(long *)(plVar8[3] +
                                              ((uVar4 & 0xffffffff) / (ulong)*(uint *)(plVar8 + 5))
                                              * 8));
                    iVar7 = piVar17[0x38];
                    if (iVar7 == (int)(uVar4 >> 0x20)) {
                      iVar7 = *piVar17;
                      goto LAB_0010271d;
                    }
                    if (iVar7 + 0x80000000U < 0x7fffffff) {
                      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                       "Method/function failed. Returning: nullptr",
                                       "Attempting to use an uninitialized RID",0,0);
                    }
                  }
                  _err_print_error("light_get_type",
                                   "./servers/rendering/renderer_rd/storage_rd/light_storage.h",
                                   0x1ff,"Parameter \"light\" is null.",0);
LAB_00102725:
                  uVar12 = *(undefined8 *)(this + 0x140);
                  uVar13 = Vector2i::operator_cast_to_Vector2((Vector2i *)&local_80);
                  RendererRD::DebugEffects::draw_shadow_frustum
                            (0,uVar13,uVar12,uVar3,*(long *)(param_1 + 0x180) + 0x1a4,
                             *(long *)(param_1 + 0x180) + 0x174);
                }
                else {
                  iVar7 = (**(code **)(*plVar8 + 0xf8))(plVar8);
LAB_0010271d:
                  if (iVar7 == 0) goto LAB_00102725;
                }
                lVar11 = lVar11 + 1;
              } while ((int)lVar11 < *(int *)(param_1 + 0x240));
            }
          }
          iVar7 = *(int *)(this + 0x2438);
        }
        if (iVar7 == 0xf) {
          RendererRD::TextureStorage::get_singleton();
          lVar11 = RendererRD::TextureStorage::decal_atlas_get_texture();
          if (lVar11 != 0) {
            local_80 = (**(code **)(*plVar9 + 0x210))(plVar9,uVar14);
            local_58 = 0;
            uVar12 = *(undefined8 *)(this + 0x138);
            local_50 = 0;
            uVar13 = Vector2i::operator/((Vector2i *)&local_80,2);
            local_78 = 0;
            local_68._0_8_ = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_78);
            local_68._8_8_ = uVar13;
            uVar13 = RendererRD::TextureStorage::render_target_get_rd_framebuffer(plVar9,uVar14);
            RendererRD::CopyEffects::copy_to_fb_rect
                      (uVar12,lVar11,uVar13,local_68,0,0,1,0,0,0,0,0,0,&local_58);
          }
          iVar7 = *(int *)(this + 0x2438);
        }
        if (iVar7 == 0xb) {
          uVar12 = *(undefined8 *)(this + 0x148);
          local_90 = pSVar1;
          cVar6 = RefCounted::reference();
          if (cVar6 == '\0') {
            local_90 = (StringName *)0x0;
          }
          lVar11 = RendererRD::Luminance::get_current_luminance_buffer(uVar12);
          if (((local_90 != (StringName *)0x0) &&
              (cVar6 = RefCounted::unreference(), pSVar5 = local_90, cVar6 != '\0')) &&
             (cVar6 = predelete_handler((Object *)local_90), cVar6 != '\0')) {
            (**(code **)(*(long *)pSVar5 + 0x140))(pSVar5);
            Memory::free_static(pSVar5,false);
          }
          if (lVar11 != 0) {
            local_88 = (**(code **)(*plVar9 + 0x210))(plVar9,uVar14);
            local_58 = 0;
            uVar12 = *(undefined8 *)(this + 0x138);
            local_50 = 0;
            local_80 = Vector2i::operator/((Vector2i *)&local_88,8);
            local_70 = Vector2i::operator_cast_to_Vector2((Vector2i *)&local_80);
            local_78 = 0;
            local_68 = Rect2::operator_cast_to_Rect2i((Rect2 *)&local_78);
            uVar13 = RendererRD::TextureStorage::render_target_get_rd_framebuffer(plVar9,uVar14);
            RendererRD::CopyEffects::copy_to_fb_rect
                      (uVar12,lVar11,uVar13,local_68,0,1,0,0,0,0,0,0,0,&local_58);
          }
          iVar7 = *(int *)(this + 0x2438);
        }
        if (iVar7 == 0x1a) {
          local_58 = (**(code **)(*plVar9 + 0x210))(plVar9,uVar14);
          local_70 = Vector2i::operator_cast_to_Vector2((Vector2i *)&local_58);
          local_58 = 0;
          uVar12 = *(undefined8 *)(this + 0x138);
          local_50 = 0;
          local_78 = 0;
          auVar18 = Rect2::operator_cast_to_Rect2i((Rect2 *)&local_78);
          local_68 = auVar18;
          uVar13 = RendererRD::TextureStorage::render_target_get_rd_framebuffer(plVar9,uVar14);
          if (const::{lambda()#2}::operator()()::sname == '\0') {
            iVar7 = __cxa_guard_acquire(&const::{lambda()#2}::operator()()::sname);
            if (iVar7 != 0) {
              _scs_create((char *)&const::{lambda()#2}::operator()()::sname,true);
              __cxa_atexit(StringName::~StringName,&const::{lambda()#2}::operator()()::sname,
                           &__dso_handle);
              __cxa_guard_release(&const::{lambda()#2}::operator()()::sname);
            }
          }
          if (const::{lambda()#1}::operator()()::sname == '\0') {
            iVar7 = __cxa_guard_acquire(&const::{lambda()#1}::operator()()::sname);
            if (iVar7 != 0) {
              _scs_create((char *)&const::{lambda()#1}::operator()()::sname,true);
              __cxa_atexit(StringName::~StringName,&const::{lambda()#1}::operator()()::sname,
                           &__dso_handle);
              __cxa_guard_release(&const::{lambda()#1}::operator()()::sname);
            }
          }
          uVar10 = RenderSceneBuffersRD::get_texture
                             (pSVar1,(StringName *)&const::{lambda()#1}::operator()()::sname);
          RendererRD::CopyEffects::copy_to_fb_rect
                    (uVar12,uVar10,uVar13,local_68,0,0,0,0,0,0,0,0,0,(Vector2i *)&local_58);
          iVar7 = *(int *)(this + 0x2438);
        }
        if (iVar7 == 5) {
          pcVar2 = *(code **)(*(long *)this + 0x210);
          local_90 = pSVar1;
          cVar6 = RefCounted::reference();
          if (cVar6 == '\0') {
            local_90 = (StringName *)0x0;
          }
          lVar11 = (*pcVar2)(this);
          if (lVar11 != 0) {
            if (local_90 != (StringName *)0x0) {
              cVar6 = RefCounted::unreference();
              pSVar5 = local_90;
              if (cVar6 != '\0') {
                cVar6 = predelete_handler((Object *)local_90);
                if (cVar6 != '\0') {
                  (**(code **)(*(long *)pSVar5 + 0x140))(pSVar5);
                  Memory::free_static(pSVar5,false);
                }
              }
            }
            local_58 = (**(code **)(*plVar9 + 0x210))(plVar9,uVar14);
            local_70 = Vector2i::operator_cast_to_Vector2((Vector2i *)&local_58);
            local_58 = 0;
            uVar12 = *(undefined8 *)(this + 0x138);
            local_50 = 0;
            local_78 = 0;
            auVar18 = Rect2::operator_cast_to_Rect2i((Rect2 *)&local_78);
            local_68 = auVar18;
            uVar13 = RendererRD::TextureStorage::render_target_get_rd_framebuffer(plVar9,uVar14);
            pcVar2 = *(code **)(*(long *)this + 0x210);
            local_90 = pSVar1;
            cVar6 = RefCounted::reference();
            if (cVar6 == '\0') {
              local_90 = (StringName *)0x0;
            }
            uVar10 = (*pcVar2)(this,&local_90);
            RendererRD::CopyEffects::copy_to_fb_rect
                      (uVar12,uVar10,uVar13,local_68,0,0,0,0,0,0,0,0,1,(Vector2i *)&local_58);
          }
          if (local_90 != (StringName *)0x0) {
            cVar6 = RefCounted::unreference();
            pSVar5 = local_90;
            if (cVar6 != '\0') {
              cVar6 = predelete_handler((Object *)local_90);
              if (cVar6 != '\0') {
                (**(code **)(*(long *)pSVar5 + 0x140))(pSVar5);
                Memory::free_static(pSVar5,false);
              }
            }
          }
          iVar7 = *(int *)(this + 0x2438);
        }
        if (iVar7 == 0x18) {
          if (*(long *)(param_1 + 0x1e0) == 0) goto LAB_00101b22;
          uVar13 = (**(code **)(*plVar9 + 0x210))(plVar9,uVar14);
          local_58 = 0;
          uVar12 = *(undefined8 *)(this + 0x138);
          local_50 = 0;
          local_78 = 0;
          uVar10 = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_78);
          local_68._0_8_ = uVar10;
          local_68._8_8_ = uVar13;
          uVar13 = RendererRD::TextureStorage::render_target_get_rd_framebuffer(plVar9,uVar14);
          uVar10 = (**(code **)(*plVar9 + 0x138))(plVar9,*(undefined8 *)(param_1 + 0x1e0),0);
          RendererRD::CopyEffects::copy_to_fb_rect
                    (uVar12,uVar10,uVar13,local_68,1,0,0,0,0,0,0,0,0,&local_58);
          iVar7 = *(int *)(this + 0x2438);
        }
        if (iVar7 != 0x19) goto LAB_00101b22;
        pcVar2 = *(code **)(*(long *)this + 0x218);
        local_90 = pSVar1;
        cVar6 = RefCounted::reference();
        if (cVar6 == '\0') {
          local_90 = (StringName *)0x0;
        }
        lVar11 = (*pcVar2)(this);
        if (lVar11 == 0) {
          if (local_90 != (StringName *)0x0) {
            cVar6 = RefCounted::unreference();
            pSVar5 = local_90;
            if (cVar6 != '\0') {
              cVar6 = predelete_handler((Object *)local_90);
              if (cVar6 != '\0') {
                (**(code **)(*(long *)pSVar5 + 0x140))(pSVar5);
                Memory::free_static(pSVar5,false);
              }
            }
          }
          goto LAB_00101b22;
        }
        if (local_90 != (StringName *)0x0) {
          cVar6 = RefCounted::unreference();
          pSVar5 = local_90;
          if (cVar6 != '\0') {
            cVar6 = predelete_handler((Object *)local_90);
            if (cVar6 != '\0') {
              (**(code **)(*(long *)pSVar5 + 0x140))(pSVar5);
              Memory::free_static(pSVar5,false);
            }
          }
        }
        pcVar2 = *(code **)(*(long *)this + 0x218);
        local_90 = pSVar1;
        cVar6 = RefCounted::reference();
        if (cVar6 == '\0') {
          local_90 = (StringName *)0x0;
        }
        uVar12 = (*pcVar2)(this);
        if (local_90 != (StringName *)0x0) {
          cVar6 = RefCounted::unreference();
          pSVar5 = local_90;
          if (cVar6 != '\0') {
            cVar6 = predelete_handler((Object *)local_90);
            if (cVar6 != '\0') {
              (**(code **)(*(long *)pSVar5 + 0x140))(pSVar5);
              Memory::free_static(pSVar5,false);
            }
          }
        }
        uVar13 = RenderSceneBuffersRD::get_depth_texture();
        uVar14 = RendererRD::TextureStorage::render_target_get_rd_framebuffer(plVar9,uVar14);
        lVar11 = *(long *)(param_1 + 0x180);
        RendererRD::DebugEffects::draw_motion_vectors
                  (*(undefined8 *)(this + 0x140),uVar12,uVar13,uVar14,lVar11 + 0x1a4,lVar11 + 0x174,
                   lVar11 + 0x2f4,lVar11 + 0x2c4,*(undefined8 *)(pSVar1 + 0x1ac));
        cVar6 = RefCounted::unreference();
      }
      if (cVar6 != '\0') {
        cVar6 = predelete_handler((Object *)pSVar1);
        if (cVar6 != '\0') {
          (**(code **)(*(long *)pSVar1 + 0x140))(pSVar1);
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            Memory::free_static(pSVar1,false);
            return;
          }
          goto LAB_00102829;
        }
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00102829;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    _err_print_error("_render_buffers_debug_draw",
                     "servers/rendering/renderer_rd/renderer_scene_render_rd.cpp",0x345,
                     "Condition \"rb.is_null()\" is true.",0,0);
    return;
  }
LAB_00102829:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* get_vogel_disk(float*, int) */

void get_vogel_disk(float *param_1,int param_2)

{
  int iVar1;
  double dVar2;
  float fVar3;
  float fVar4;
  float __x;
  float local_30;
  float local_2c;
  
  if (0 < param_2) {
    __x = (float)param_2;
    iVar1 = 0;
    do {
      fVar3 = (float)iVar1;
      dVar2 = (double)iVar1 + __LC62;
      if (dVar2 < 0.0) {
        dVar2 = sqrt(dVar2);
      }
      else {
        dVar2 = SQRT(dVar2);
      }
      if (__x < 0.0) {
        fVar4 = sqrtf(__x);
      }
      else {
        fVar4 = SQRT(__x);
      }
      iVar1 = iVar1 + 1;
      sincosf(_LC35 * fVar3,&local_2c,&local_30);
      *(ulong *)param_1 =
           CONCAT44(local_2c * (float)(dVar2 / (double)fVar4),
                    local_30 * (float)(dVar2 / (double)fVar4));
      param_1 = param_1 + 4;
    } while (param_2 != iVar1);
    return;
  }
  return;
}



/* RendererSceneRenderRD::positional_soft_shadow_filter_set_quality(RenderingServer::ShadowQuality)
    */

void __thiscall
RendererSceneRenderRD::positional_soft_shadow_filter_set_quality
          (RendererSceneRenderRD *this,uint param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (5 < param_2) {
    _err_print_index_error
              ("positional_soft_shadow_filter_set_quality",
               "servers/rendering/renderer_rd/renderer_scene_render_rd.cpp",0x3b5,(ulong)param_2,6,
               "p_quality","RenderingServer::SHADOW_QUALITY_MAX",
               "Shadow quality too high, please see RenderingServer\'s ShadowQuality enum",false,
               false);
    return;
  }
  if (*(uint *)(this + 0x243c) != param_2) {
    uVar3 = _LC66;
    switch(param_2) {
    case 0:
      iVar2 = 0;
      iVar1 = 4;
      uVar3 = _LC0;
      break;
    case 1:
      iVar2 = 1;
      iVar1 = 4;
      uVar3 = _LC65;
      break;
    case 2:
      iVar2 = 4;
      iVar1 = 8;
      break;
    case 3:
      iVar2 = 8;
      iVar1 = 0xc;
      break;
    case 4:
      iVar2 = 0x10;
      iVar1 = 0x18;
      uVar3 = _LC67;
      break;
    case 5:
      iVar2 = 0x20;
      iVar1 = 0x20;
      uVar3 = _LC64;
    }
    *(uint *)(this + 0x243c) = param_2;
    *(int *)(this + 0x247c) = iVar1;
    *(int *)(this + 0x2480) = iVar2;
    *(undefined4 *)(this + 0x2444) = uVar3;
    get_vogel_disk(*(float **)(this + 0x2460),iVar1);
    get_vogel_disk(*(float **)(this + 0x2468),iVar2);
  }
  if (*(code **)(*(long *)this + 0x220) == _update_shader_quality_settings) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00102b59. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x220))(this);
  return;
}



/* RendererSceneRenderRD::directional_soft_shadow_filter_set_quality(RenderingServer::ShadowQuality)
    */

void __thiscall
RendererSceneRenderRD::directional_soft_shadow_filter_set_quality
          (RendererSceneRenderRD *this,uint param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (5 < param_2) {
    _err_print_index_error
              ("directional_soft_shadow_filter_set_quality",
               "servers/rendering/renderer_rd/renderer_scene_render_rd.cpp",0x3e4,(ulong)param_2,6,
               "p_quality","RenderingServer::SHADOW_QUALITY_MAX",
               "Shadow quality too high, please see RenderingServer\'s ShadowQuality enum",false,
               false);
    return;
  }
  if (*(uint *)(this + 0x2440) != param_2) {
    uVar3 = _LC66;
    switch(param_2) {
    case 0:
      iVar2 = 0;
      iVar1 = 4;
      uVar3 = _LC0;
      break;
    case 1:
      iVar2 = 1;
      iVar1 = 4;
      uVar3 = _LC65;
      break;
    case 2:
      iVar2 = 4;
      iVar1 = 8;
      break;
    case 3:
      iVar2 = 8;
      iVar1 = 0xc;
      break;
    case 4:
      iVar2 = 0x10;
      iVar1 = 0x18;
      uVar3 = _LC67;
      break;
    case 5:
      iVar2 = 0x20;
      iVar1 = 0x20;
      uVar3 = _LC64;
    }
    *(uint *)(this + 0x2440) = param_2;
    *(int *)(this + 0x2474) = iVar1;
    *(int *)(this + 0x2478) = iVar2;
    *(undefined4 *)(this + 0x2448) = uVar3;
    get_vogel_disk(*(float **)(this + 0x2450),iVar1);
    get_vogel_disk(*(float **)(this + 0x2458),iVar2);
  }
  if (*(code **)(*(long *)this + 0x220) == _update_shader_quality_settings) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00102cd9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x220))(this);
  return;
}



/* RendererSceneRenderRD::_debug_sdfgi_probes(Ref<RenderSceneBuffersRD>, RID, unsigned int,
   Projection const*) */

void __thiscall
RendererSceneRenderRD::_debug_sdfgi_probes
          (undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4,
          undefined8 param_5)

{
  StringName *pSVar1;
  char cVar2;
  int iVar3;
  Object *pOVar4;
  long in_FS_OFFSET;
  Object *local_48;
  long local_40;
  
  pSVar1 = (StringName *)*param_2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (pSVar1 == (StringName *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("_debug_sdfgi_probes",
                       "servers/rendering/renderer_rd/renderer_scene_render_rd.cpp",0xe3,
                       "Condition \"p_render_buffers.is_null()\" is true.",0,0);
      return;
    }
    goto LAB_00102ff7;
  }
  if (_debug_sdfgi_probes(Ref<RenderSceneBuffersRD>,RID,unsigned_int,Projection_const*)::
      {lambda()#1}::operator()()::sname == '\0') {
    iVar3 = __cxa_guard_acquire(&_debug_sdfgi_probes(Ref<RenderSceneBuffersRD>,RID,unsigned_int,Projection_const*)
                                 ::{lambda()#1}::operator()()::sname,param_2,param_3,
                                &_debug_sdfgi_probes(Ref<RenderSceneBuffersRD>,RID,unsigned_int,Projection_const*)
                                 ::{lambda()#1}::operator()()::sname);
    if (iVar3 != 0) {
      _scs_create((char *)&_debug_sdfgi_probes(Ref<RenderSceneBuffersRD>,RID,unsigned_int,Projection_const*)
                           ::{lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &_debug_sdfgi_probes(Ref<RenderSceneBuffersRD>,RID,unsigned_int,Projection_const*)
                    ::{lambda()#1}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&_debug_sdfgi_probes(Ref<RenderSceneBuffersRD>,RID,unsigned_int,Projection_const*)
                           ::{lambda()#1}::operator()()::sname);
    }
  }
  cVar2 = RenderSceneBuffersRD::has_custom_data(pSVar1);
  if (cVar2 != '\0') {
    if (_debug_sdfgi_probes(Ref<RenderSceneBuffersRD>,RID,unsigned_int,Projection_const*)::
        {lambda()#2}::operator()()::sname == '\0') {
      iVar3 = __cxa_guard_acquire(&_debug_sdfgi_probes(Ref<RenderSceneBuffersRD>,RID,unsigned_int,Projection_const*)
                                   ::{lambda()#2}::operator()()::sname);
      if (iVar3 != 0) {
        _scs_create((char *)&_debug_sdfgi_probes(Ref<RenderSceneBuffersRD>,RID,unsigned_int,Projection_const*)
                             ::{lambda()#2}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &_debug_sdfgi_probes(Ref<RenderSceneBuffersRD>,RID,unsigned_int,Projection_const*)
                      ::{lambda()#2}::operator()()::sname,&__dso_handle);
        __cxa_guard_release(&_debug_sdfgi_probes(Ref<RenderSceneBuffersRD>,RID,unsigned_int,Projection_const*)
                             ::{lambda()#2}::operator()()::sname);
      }
    }
    RenderSceneBuffersRD::get_custom_data((StringName *)&local_48);
    if (local_48 == (Object *)0x0) {
      pOVar4 = (Object *)0x0;
    }
    else {
      pOVar4 = (Object *)
               __dynamic_cast(local_48,&Object::typeinfo,&RendererRD::GI::SDFGI::typeinfo,0);
      if (pOVar4 != (Object *)0x0) {
        cVar2 = RefCounted::reference();
        if (cVar2 == '\0') {
          pOVar4 = (Object *)0x0;
        }
        if (local_48 == (Object *)0x0) goto LAB_00102e4c;
      }
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
        cVar2 = predelete_handler(local_48);
        if (cVar2 != '\0') {
          (**(code **)(*(long *)local_48 + 0x140))(local_48);
          Memory::free_static(local_48,false);
        }
      }
    }
LAB_00102e4c:
    RendererRD::GI::SDFGI::debug_probes(pOVar4,param_3,param_4,param_5);
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      cVar2 = predelete_handler(pOVar4);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          Memory::free_static(pOVar4,false);
          return;
        }
        goto LAB_00102ff7;
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00102ff7:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererSceneRenderRD::_compositor_effects_has_flag(RenderDataRD const*,
   RenderingServer::CompositorEffectFlags, RenderingServer::CompositorEffectCallbackType) */

ulong __thiscall
RendererSceneRenderRD::_compositor_effects_has_flag
          (undefined8 param_1_00,long param_1,undefined4 param_3,undefined4 param_4)

{
  long *plVar1;
  pthread_mutex_t *__mutex;
  long lVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long in_FS_OFFSET;
  undefined1 local_58 [8];
  undefined8 *local_50 [2];
  long local_40;
  
  lVar2 = RendererCompositorStorage::singleton;
  uVar4 = *(ulong *)(param_1 + 0x1d0);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((uVar4 == 0) || (*(long *)(param_1 + 0x1f0) != 0)) {
    uVar4 = 0;
    goto LAB_0010316e;
  }
  __mutex = (pthread_mutex_t *)(RendererCompositorStorage::singleton + 0x98);
  iVar3 = pthread_mutex_lock(__mutex);
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar3);
  }
  if ((uint)uVar4 < *(uint *)(lVar2 + 0x84)) {
    if ((uVar4 >> 0x20 != 0x7fffffff) &&
       ((*(uint *)(*(long *)(*(long *)(lVar2 + 0x70) +
                            ((uVar4 & 0xffffffff) / (ulong)*(uint *)(lVar2 + 0x80)) * 8) +
                   ((uVar4 & 0xffffffff) % (ulong)*(uint *)(lVar2 + 0x80)) * 0x18 + 0x10) &
        0x7fffffff) == (uint)(uVar4 >> 0x20))) {
      pthread_mutex_unlock(__mutex);
      RendererCompositorStorage::compositor_get_compositor_effects
                (local_58,lVar2,*(undefined8 *)(param_1 + 0x1d0),param_4,1);
      CowData<RID>::_copy_on_write((CowData<RID> *)local_50);
      puVar5 = local_50[0];
      CowData<RID>::_copy_on_write((CowData<RID> *)local_50);
      if (local_50[0] == (undefined8 *)0x0) {
        puVar6 = (undefined8 *)0x0;
        if (puVar5 == (undefined8 *)0x0) {
          uVar4 = 0;
          goto LAB_0010316e;
        }
LAB_00103129:
        do {
          uVar4 = RendererCompositorStorage::compositor_effect_get_flag(lVar2,*puVar5,param_3);
          if ((char)uVar4 != '\0') break;
          puVar5 = puVar5 + 1;
        } while (puVar6 != puVar5);
        if (local_50[0] == (undefined8 *)0x0) goto LAB_0010316e;
      }
      else {
        puVar6 = local_50[0] + local_50[0][-1];
        uVar4 = 0;
        if (puVar5 != puVar6) goto LAB_00103129;
      }
      puVar5 = local_50[0];
      LOCK();
      plVar1 = local_50[0] + -2;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_50[0] = (undefined8 *)0x0;
        Memory::free_static(puVar5 + -2,false);
        uVar4 = uVar4 & 0xff;
      }
      goto LAB_0010316e;
    }
    pthread_mutex_unlock(__mutex);
  }
  else {
    pthread_mutex_unlock(__mutex);
  }
  _err_print_error("_compositor_effects_has_flag",
                   "servers/rendering/renderer_rd/renderer_scene_render_rd.cpp",0x10a,
                   "Condition \"!comp_storage->is_compositor(p_render_data->compositor)\" is true. Returning: false"
                   ,0,0);
  uVar4 = 0;
LAB_0010316e:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}



/* RendererSceneRenderRD::_has_compositor_effect(RenderingServer::CompositorEffectCallbackType,
   RenderDataRD const*) */

ulong __thiscall
RendererSceneRenderRD::_has_compositor_effect(undefined8 param_1,undefined4 param_2,long param_3)

{
  long *plVar1;
  pthread_mutex_t *__mutex;
  long lVar2;
  int iVar3;
  ulong uVar4;
  long in_FS_OFFSET;
  undefined1 auStack_48 [8];
  long local_40;
  long local_30;
  
  lVar2 = RendererCompositorStorage::singleton;
  uVar4 = *(ulong *)(param_3 + 0x1d0);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((uVar4 != 0) && (*(long *)(param_3 + 0x1f0) == 0)) {
    __mutex = (pthread_mutex_t *)(RendererCompositorStorage::singleton + 0x98);
    iVar3 = pthread_mutex_lock(__mutex);
    if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      std::__throw_system_error(iVar3);
    }
    if ((uint)uVar4 < *(uint *)(lVar2 + 0x84)) {
      if ((uVar4 >> 0x20 != 0x7fffffff) &&
         ((*(uint *)(*(long *)(*(long *)(lVar2 + 0x70) +
                              ((uVar4 & 0xffffffff) / (ulong)*(uint *)(lVar2 + 0x80)) * 8) +
                     ((uVar4 & 0xffffffff) % (ulong)*(uint *)(lVar2 + 0x80)) * 0x18 + 0x10) &
          0x7fffffff) == (uint)(uVar4 >> 0x20))) {
        pthread_mutex_unlock(__mutex);
        RendererCompositorStorage::compositor_get_compositor_effects
                  (auStack_48,lVar2,*(undefined8 *)(param_3 + 0x1d0),param_2,1);
        lVar2 = local_40;
        if (local_40 != 0) {
          uVar4 = CONCAT71((int7)((ulong)param_3 >> 8),0 < *(long *)(local_40 + -8));
          LOCK();
          plVar1 = (long *)(local_40 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_40 = 0;
            Memory::free_static((void *)(lVar2 + -0x10),false);
          }
          goto LAB_00103238;
        }
        goto LAB_00103230;
      }
      pthread_mutex_unlock(__mutex);
    }
    else {
      pthread_mutex_unlock(__mutex);
    }
    _err_print_error("_has_compositor_effect",
                     "servers/rendering/renderer_rd/renderer_scene_render_rd.cpp",0x121,
                     "Condition \"!comp_storage->is_compositor(p_render_data->compositor)\" is true. Returning: false"
                     ,0,0);
  }
LAB_00103230:
  uVar4 = 0;
LAB_00103238:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererSceneRenderRD::_process_compositor_effects(RenderingServer::CompositorEffectCallbackType,
   RenderDataRD const*) */

void __thiscall
RendererSceneRenderRD::_process_compositor_effects(undefined8 param_1,int param_2,Object *param_3)

{
  long *plVar1;
  pthread_mutex_t *__mutex;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  undefined8 *puVar6;
  long in_FS_OFFSET;
  undefined8 *local_90;
  Array local_80 [8];
  undefined1 local_78 [8];
  undefined8 *local_70;
  Callable local_68 [16];
  int local_58 [6];
  long local_40;
  
  lVar4 = RendererCompositorStorage::singleton;
  uVar2 = *(ulong *)(param_3 + 0x1d0);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((uVar2 == 0) || (*(long *)(param_3 + 0x1f0) != 0)) {
LAB_001033c9:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    __mutex = (pthread_mutex_t *)(RendererCompositorStorage::singleton + 0x98);
    iVar5 = pthread_mutex_lock(__mutex);
    if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
      std::__throw_system_error(iVar5);
    }
    if ((uint)uVar2 < *(uint *)(lVar4 + 0x84)) {
      if ((uVar2 >> 0x20 != 0x7fffffff) &&
         ((*(uint *)(*(long *)(*(long *)(lVar4 + 0x70) +
                              ((uVar2 & 0xffffffff) / (ulong)*(uint *)(lVar4 + 0x80)) * 8) +
                     ((uVar2 & 0xffffffff) % (ulong)*(uint *)(lVar4 + 0x80)) * 0x18 + 0x10) &
          0x7fffffff) == (uint)(uVar2 >> 0x20))) {
        pthread_mutex_unlock(__mutex);
        RendererCompositorStorage::compositor_get_compositor_effects
                  (local_78,lVar4,*(undefined8 *)(param_3 + 0x1d0),param_2,1);
        CowData<RID>::_copy_on_write((CowData<RID> *)&local_70);
        puVar6 = local_70;
        CowData<RID>::_copy_on_write((CowData<RID> *)&local_70);
        if (local_70 == (undefined8 *)0x0) {
          local_90 = (undefined8 *)0x0;
          if (puVar6 == (undefined8 *)0x0) goto LAB_001033c9;
LAB_001034c2:
          do {
            uVar3 = *puVar6;
            Array::Array(local_80);
            RendererCompositorStorage::compositor_effect_get_callback(local_68,lVar4,uVar3);
            Variant::Variant((Variant *)local_58,param_2);
            Array::push_back((Variant *)local_80);
            if (Variant::needs_deinit[local_58[0]] != '\0') {
              Variant::_clear_internal();
            }
            Variant::Variant((Variant *)local_58,param_3);
            Array::push_back((Variant *)local_80);
            if (Variant::needs_deinit[local_58[0]] != '\0') {
              Variant::_clear_internal();
            }
            Callable::callv((Array *)local_58);
            if (Variant::needs_deinit[local_58[0]] != '\0') {
              Variant::_clear_internal();
            }
            puVar6 = puVar6 + 1;
            Callable::~Callable(local_68);
            Array::~Array(local_80);
          } while (local_90 != puVar6);
          if (local_70 == (undefined8 *)0x0) goto LAB_001033c9;
        }
        else {
          local_90 = local_70 + local_70[-1];
          if (puVar6 != local_90) goto LAB_001034c2;
        }
        puVar6 = local_70;
        LOCK();
        plVar1 = local_70 + -2;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_70 = (undefined8 *)0x0;
          Memory::free_static(puVar6 + -2,false);
        }
        goto LAB_001033c9;
      }
      pthread_mutex_unlock(__mutex);
    }
    else {
      pthread_mutex_unlock(__mutex);
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("_process_compositor_effects",
                       "servers/rendering/renderer_rd/renderer_scene_render_rd.cpp",0x133,
                       "Condition \"!comp_storage->is_compositor(p_render_data->compositor)\" is true."
                       ,0,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RendererSceneRenderRD::_post_process_subpass(RID, RID, RenderDataRD const*) */

void __thiscall
RendererSceneRenderRD::_post_process_subpass
          (RendererSceneRenderRD *this,undefined8 param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  int iVar2;
  Object *pOVar3;
  ulong uVar4;
  code *pcVar5;
  char cVar6;
  undefined1 uVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long in_FS_OFFSET;
  bool bVar13;
  undefined4 uVar14;
  uint uVar15;
  long local_100;
  char *local_f8;
  undefined8 local_f0;
  uint local_e8;
  uint uStack_e4;
  undefined1 auStack_e0 [16];
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined4 local_c0;
  undefined8 local_bc;
  undefined1 local_b4;
  undefined1 local_b0 [16];
  undefined4 local_a0;
  undefined8 local_9c;
  undefined1 local_94;
  undefined4 local_90;
  long local_88;
  uint local_80;
  undefined1 local_7c;
  undefined8 local_78;
  uint local_70;
  undefined2 local_6c;
  long local_68;
  undefined2 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  byte local_50;
  long local_40;
  
  auStack_e0._8_8_ = auStack_e0._0_8_;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  plVar8 = (long *)RendererRD::TextureStorage::get_singleton();
  uVar9 = RenderingDevice::get_singleton();
  local_100 = 0;
  local_f8 = "Post Process Subpass";
  local_f0 = 0x14;
  local_e8 = _LC0;
  uStack_e4 = _LC0;
  auStack_e0._4_4_ = _LC0;
  auStack_e0._0_4_ = _LC0;
  String::parse_latin1((StrRange *)&local_100);
  RenderingDevice::draw_command_begin_label(uVar9,(StrRange *)&local_100,&local_e8);
  lVar12 = local_100;
  if (local_100 != 0) {
    LOCK();
    plVar1 = (long *)(local_100 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_100 = 0;
      Memory::free_static((void *)(lVar12 + -0x10),false);
    }
  }
  pOVar3 = *(Object **)(param_4 + 0x178);
  if ((pOVar3 == (Object *)0x0) || (cVar6 = RefCounted::reference(), cVar6 == '\0')) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("_post_process_subpass",
                       "servers/rendering/renderer_rd/renderer_scene_render_rd.cpp",0x2c8,
                       "Condition \"rb.is_null()\" is true.",0,0);
      return;
    }
    goto LAB_00103d68;
  }
  uVar9 = *(undefined8 *)(pOVar3 + 0x1a0);
  bVar13 = 7 < *(int *)(pOVar3 + 0x1a0) && 7 < *(int *)(pOVar3 + 0x1a4);
  if (bVar13) {
    bVar13 = *(int *)(this + 0x2438) == 0;
  }
  RenderingDevice::get_singleton();
  uVar10 = RenderingDevice::draw_list_switch_to_next_pass();
  auStack_e0 = ZEXT416(_LC0);
  local_9c = _LC16;
  local_78 = _LC16;
  local_d0 = __LC84;
  uStack_c8 = _UNK_00113488;
  local_e8 = local_e8 & 0xffffff00;
  uStack_e4 = 0;
  local_c0 = 0;
  local_bc = 0;
  local_b4 = 0;
  local_a0 = 0;
  local_94 = 0;
  local_90 = 0x3f000000;
  local_88 = 0;
  local_7c = 0;
  local_6c = 0;
  local_68 = 0;
  local_60 = 0;
  local_5c = 0;
  local_54 = 1;
  local_50 = 0;
  local_b0 = (undefined1  [16])0x0;
  local_80 = _LC0;
  local_70 = _LC0;
  if (*(long *)(param_4 + 0x1c0) == 0) {
    if (bVar13) {
LAB_00103ab0:
      uVar4 = *(ulong *)(param_4 + 0x1c8);
      if ((uVar4 != 0) &&
         ((uint)uVar4 < *(uint *)(RenderingServerGlobals::camera_attributes + 0x2c))) {
        lVar12 = ((uVar4 & 0xffffffff) %
                 (ulong)*(uint *)(RenderingServerGlobals::camera_attributes + 0x28)) * 0x50 +
                 *(long *)(*(long *)(RenderingServerGlobals::camera_attributes + 0x18) +
                          ((uVar4 & 0xffffffff) /
                          (ulong)*(uint *)(RenderingServerGlobals::camera_attributes + 0x28)) * 8);
        iVar2 = *(int *)(lVar12 + 0x48);
        if (iVar2 == (int)(uVar4 >> 0x20)) {
          if (*(char *)(lVar12 + 0xc) != '\0') {
            _err_print_error("_post_process_subpass",
                             "servers/rendering/renderer_rd/renderer_scene_render_rd.cpp",0x2e1,
                             "Method/function failed.",
                             "Auto Exposure is not supported when using subpasses.",0,0);
            goto LAB_00103b34;
          }
        }
        else if (iVar2 + 0x80000000U < 0x7fffffff) {
          _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                           "Method/function failed. Returning: nullptr",
                           "Attempting to use an uninitialized RID",0,0);
        }
      }
      local_e8 = local_e8 & 0xffffff00;
      local_88 = plVar8[3];
      local_94 = 0;
      local_b0._8_8_ = local_88;
      local_b0._0_8_ = plVar8[4];
      local_6c = 0;
      local_68 = plVar8[0xe];
      if (*(long *)(param_4 + 0x1c0) != 0) {
        local_7c = RendererSceneRender::environment_get_adjustments_enabled
                             (this,*(undefined8 *)(param_4 + 0x1c0));
        uVar14 = RendererSceneRender::environment_get_adjustments_brightness
                           (this,*(undefined8 *)(param_4 + 0x1c0));
        local_78 = CONCAT44(local_78._4_4_,uVar14);
        uVar14 = RendererSceneRender::environment_get_adjustments_contrast
                           (this,*(undefined8 *)(param_4 + 0x1c0));
        local_78 = CONCAT44(uVar14,(undefined4)local_78);
        local_70 = RendererSceneRender::environment_get_adjustments_saturation
                             (this,*(undefined8 *)(param_4 + 0x1c0));
        cVar6 = RendererSceneRender::environment_get_adjustments_enabled
                          (this,*(undefined8 *)(param_4 + 0x1c0));
        if ((cVar6 != '\0') &&
           (lVar12 = RendererSceneRender::environment_get_color_correction
                               (this,*(undefined8 *)(param_4 + 0x1c0)), lVar12 != 0)) {
          local_6c = CONCAT11(local_6c._1_1_,1);
          uVar7 = RendererSceneRender::environment_get_use_1d_color_correction
                            (this,*(undefined8 *)(param_4 + 0x1c0));
          local_6c = CONCAT11(uVar7,(undefined1)local_6c);
          pcVar5 = *(code **)(*plVar8 + 0x138);
          uVar11 = RendererSceneRender::environment_get_color_correction
                             (this,*(undefined8 *)(param_4 + 0x1c0));
          local_68 = (*pcVar5)(plVar8,uVar11,0);
        }
      }
    }
    else {
LAB_0010388f:
      local_e8 = local_e8 & 0xffffff00;
      local_88 = plVar8[3];
      local_94 = 0;
      local_b0._8_8_ = local_88;
      local_b0._0_8_ = plVar8[4];
      local_68 = plVar8[0xe];
      local_6c = 0;
    }
    local_60 = CONCAT11(pOVar3[0x1cd],(undefined1)local_60);
    uVar15 = _LC0;
    local_5c = uVar9;
    if (*(code **)(*(long *)this + 0x248) != _render_buffers_get_luminance_multiplier) {
      uVar15 = (**(code **)(*(long *)this + 0x248))(this);
    }
    local_54 = *(undefined4 *)(pOVar3 + 0x1a8);
    local_80 = uVar15;
    local_50 = (**(code **)(*plVar8 + 0x278))(plVar8,*(undefined8 *)(pOVar3 + 0x198));
    uVar9 = *(undefined8 *)(this + 0x150);
    local_50 = local_50 ^ 1;
    uVar11 = RenderingDevice::get_singleton();
    uVar11 = RenderingDevice::framebuffer_get_format(uVar11,param_3);
    RendererRD::ToneMapper::tonemapper(uVar9,uVar10,param_2,uVar11,&local_e8);
    RenderingDevice::get_singleton();
    RenderingDevice::draw_command_end_label();
    cVar6 = RefCounted::unreference();
  }
  else {
    local_a0 = RendererSceneRender::environment_get_tone_mapper
                         (this,*(undefined8 *)(param_4 + 0x1c0));
    uVar14 = RendererSceneRender::environment_get_exposure(this,*(undefined8 *)(param_4 + 0x1c0));
    local_9c = CONCAT44(local_9c._4_4_,uVar14);
    uVar14 = RendererSceneRender::environment_get_white(this,*(undefined8 *)(param_4 + 0x1c0));
    local_9c = CONCAT44(uVar14,(undefined4)local_9c);
    if (!bVar13) goto LAB_0010388f;
    if ((*(long *)(param_4 + 0x1c0) == 0) ||
       (cVar6 = RendererSceneRender::environment_get_glow_enabled
                          (this,*(undefined8 *)(param_4 + 0x1c0)), cVar6 == '\0'))
    goto LAB_00103ab0;
    _err_print_error("_post_process_subpass",
                     "servers/rendering/renderer_rd/renderer_scene_render_rd.cpp",0x2dd,
                     "Method/function failed.","Glow is not supported when using subpasses.",0,0);
LAB_00103b34:
    cVar6 = RefCounted::unreference();
  }
  if ((cVar6 != '\0') && (cVar6 = predelete_handler(pOVar3), cVar6 != '\0')) {
    (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
    Memory::free_static(pOVar3,false);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00103d68:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererSceneRenderRD::_disable_clear_request(RenderDataRD const*) */

void __thiscall
RendererSceneRenderRD::_disable_clear_request(RendererSceneRenderRD *this,RenderDataRD *param_1)

{
  long *plVar1;
  
  if (*(long *)(param_1 + 0x178) != 0) {
    plVar1 = (long *)RendererRD::TextureStorage::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x00103da3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x298))(plVar1,*(undefined8 *)(*(long *)(param_1 + 0x178) + 0x198));
    return;
  }
  _err_print_error("_disable_clear_request",
                   "servers/rendering/renderer_rd/renderer_scene_render_rd.cpp",0x308,
                   "Condition \"p_render_data->render_buffers.is_null()\" is true.",0,0);
  return;
}



/* RendererSceneRenderRD::_debug_draw_can_use_effects(RenderingServer::ViewportDebugDraw) */

uint RendererSceneRenderRD::_debug_draw_can_use_effects(uint param_1)

{
  uint uVar1;
  
  uVar1 = 1;
  if (param_1 < 0x1b) {
    uVar1 = (uint)CONCAT71(0x4f000,(0x4f0005aUL >> ((ulong)param_1 & 0x3f) & 1) != 0) ^ 1;
  }
  return uVar1;
}



/* RendererSceneRenderRD::render_buffers_get_default_voxel_gi_buffer() */

undefined8 __thiscall
RendererSceneRenderRD::render_buffers_get_default_voxel_gi_buffer(RendererSceneRenderRD *this)

{
  return *(undefined8 *)(this + 0x21e8);
}



/* RendererSceneRenderRD::get_roughness_layers() const */

undefined4 __thiscall RendererSceneRenderRD::get_roughness_layers(RendererSceneRenderRD *this)

{
  return *(undefined4 *)(this + 0xb48);
}



/* RendererSceneRenderRD::is_using_radiance_cubemap_array() const */

RendererSceneRenderRD __thiscall
RendererSceneRenderRD::is_using_radiance_cubemap_array(RendererSceneRenderRD *this)

{
  return this[0xae4];
}



/* RendererSceneRenderRD::_needs_post_prepass_render(RenderDataRD*, bool) */

undefined8 RendererSceneRenderRD::_needs_post_prepass_render(RenderDataRD *param_1,bool param_2)

{
  StringName *pSVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  undefined7 in_register_00000031;
  long in_FS_OFFSET;
  
  pSVar1 = *(StringName **)(CONCAT71(in_register_00000031,param_2) + 0x178);
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  if (pSVar1 == (StringName *)0x0) {
    if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 0;
    }
  }
  else {
    if (_needs_post_prepass_render(RenderDataRD*,bool)::{lambda()#1}::operator()()::sname == '\0') {
      iVar3 = __cxa_guard_acquire(&_needs_post_prepass_render(RenderDataRD*,bool)::{lambda()#1}::
                                   operator()()::sname);
      if (iVar3 != 0) {
        _scs_create((char *)&_needs_post_prepass_render(RenderDataRD*,bool)::{lambda()#1}::
                             operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &_needs_post_prepass_render(RenderDataRD*,bool)::{lambda()#1}::operator()()::
                      sname,&__dso_handle);
        __cxa_guard_release(&_needs_post_prepass_render(RenderDataRD*,bool)::{lambda()#1}::
                             operator()()::sname);
      }
    }
    if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar4 = RenderSceneBuffersRD::has_custom_data(pSVar1);
      return uVar4;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererSceneRenderRD::_post_prepass_render(RenderDataRD*, bool) */

void __thiscall
RendererSceneRenderRD::_post_prepass_render
          (RendererSceneRenderRD *this,RenderDataRD *param_1,bool param_2)

{
  StringName *pSVar1;
  char cVar2;
  int iVar3;
  Object *pOVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  Object *local_38;
  long local_30;
  
  pSVar1 = *(StringName **)(param_1 + 0x178);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((pSVar1 != (StringName *)0x0) && (param_2)) {
    if (_post_prepass_render(RenderDataRD*,bool)::{lambda()#1}::operator()()::sname == '\0') {
      iVar3 = __cxa_guard_acquire(&_post_prepass_render(RenderDataRD*,bool)::{lambda()#1}::
                                   operator()()::sname);
      if (iVar3 != 0) {
        _scs_create((char *)&_post_prepass_render(RenderDataRD*,bool)::{lambda()#1}::operator()()::
                             sname,true);
        __cxa_atexit(StringName::~StringName,
                     &_post_prepass_render(RenderDataRD*,bool)::{lambda()#1}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_post_prepass_render(RenderDataRD*,bool)::{lambda()#1}::operator()()::
                             sname);
      }
    }
    cVar2 = RenderSceneBuffersRD::has_custom_data(pSVar1);
    if (cVar2 != '\0') {
      if (_post_prepass_render(RenderDataRD*,bool)::{lambda()#2}::operator()()::sname == '\0') {
        iVar3 = __cxa_guard_acquire(&_post_prepass_render(RenderDataRD*,bool)::{lambda()#2}::
                                     operator()()::sname);
        if (iVar3 != 0) {
          _scs_create((char *)&_post_prepass_render(RenderDataRD*,bool)::{lambda()#2}::operator()()
                               ::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &_post_prepass_render(RenderDataRD*,bool)::{lambda()#2}::operator()()::sname,
                       &__dso_handle);
          __cxa_guard_release(&_post_prepass_render(RenderDataRD*,bool)::{lambda()#2}::operator()()
                               ::sname);
        }
      }
      RenderSceneBuffersRD::get_custom_data((StringName *)&local_38);
      if (local_38 == (Object *)0x0) {
        pOVar4 = (Object *)0x0;
      }
      else {
        pOVar4 = (Object *)
                 __dynamic_cast(local_38,&Object::typeinfo,&RendererRD::GI::SDFGI::typeinfo,0);
        if (pOVar4 != (Object *)0x0) {
          cVar2 = RefCounted::reference();
          if (cVar2 == '\0') {
            pOVar4 = (Object *)0x0;
          }
          if (local_38 == (Object *)0x0) goto LAB_00104007;
        }
        cVar2 = RefCounted::unreference();
        if (cVar2 != '\0') {
          cVar2 = predelete_handler(local_38);
          if (cVar2 != '\0') {
            (**(code **)(*(long *)local_38 + 0x140))(local_38);
            Memory::free_static(local_38,false);
          }
        }
      }
LAB_00104007:
      uVar5 = RendererSceneRender::environment_get_sky(this,*(undefined8 *)(param_1 + 0x1c0));
      if ((uVar5 == 0) || (*(uint *)(this + 0xb0c) <= (uint)uVar5)) {
LAB_00104160:
        RendererRD::GI::SDFGI::update_probes(pOVar4,*(undefined8 *)(param_1 + 0x1c0),0);
      }
      else {
        iVar3 = *(int *)(((uVar5 & 0xffffffff) % (ulong)*(uint *)(this + 0xb08)) * 0xb8 +
                         *(long *)(*(long *)(this + 0xaf8) +
                                  ((uVar5 & 0xffffffff) / (ulong)*(uint *)(this + 0xb08)) * 8) +
                        0xb0);
        if (iVar3 == (int)(uVar5 >> 0x20)) {
          RendererRD::GI::SDFGI::update_probes(pOVar4);
        }
        else {
          if (0x7ffffffe < iVar3 + 0x80000000U) goto LAB_00104160;
          _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                           "Method/function failed. Returning: nullptr",
                           "Attempting to use an uninitialized RID",0,0);
          RendererRD::GI::SDFGI::update_probes(pOVar4,*(undefined8 *)(param_1 + 0x1c0),0);
        }
      }
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
        cVar2 = predelete_handler(pOVar4);
        if (cVar2 != '\0') {
          (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
          if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
            Memory::free_static(pOVar4,false);
            return;
          }
          goto LAB_00104236;
        }
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00104236:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RendererSceneRenderRD::render_scene(Ref<RenderSceneBuffers> const&,
   RendererSceneRender::CameraData const*, RendererSceneRender::CameraData const*,
   PagedArray<RenderGeometryInstance*> const&, PagedArray<RID> const&, PagedArray<RID> const&,
   PagedArray<RID> const&, PagedArray<RID> const&, PagedArray<RID> const&, PagedArray<RID> const&,
   RID, RID, RID, RID, RID, RID, RID, int, float, RendererSceneRender::RenderShadowData const*, int,
   RendererSceneRender::RenderSDFGIData const*, int, RendererSceneRender::RenderSDFGIUpdateData
   const*, RenderingMethod::RenderInfo*) */

void __thiscall
RendererSceneRenderRD::render_scene
          (undefined4 param_1_00,RendererSceneRenderRD *this,long *param_1,uint *param_2,
          long param_3,undefined8 param_4,StringName *param_5,StringName *param_6,
          StringName *param_7,StringName *param_8,StringName *param_9,undefined8 param_10,
          undefined8 param_13,undefined8 param_14,undefined8 param_15,ulong param_16,
          undefined8 param_17,undefined8 param_18,long param_19,undefined4 param_20,
          undefined8 param_21,undefined4 param_22,undefined8 param_23,undefined4 param_24,
          undefined8 param_25,undefined8 param_26)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  StringName *pSVar4;
  StringName *pSVar5;
  StringName *pSVar6;
  StringName *pSVar7;
  char cVar8;
  long lVar9;
  long *plVar10;
  Object *pOVar11;
  ulong uVar12;
  char *pcVar13;
  undefined8 uVar14;
  long in_FS_OFFSET;
  bool bVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  double dVar19;
  undefined4 local_80c;
  undefined1 local_728 [16];
  undefined1 local_718 [16];
  undefined1 local_708 [16];
  undefined1 local_6f8 [16];
  undefined *local_6e8 [47];
  Object *local_570;
  Object *local_568;
  undefined8 local_560;
  StringName *local_558;
  StringName *pSStack_550;
  StringName *local_548;
  StringName *local_540;
  StringName *local_538;
  undefined8 local_530;
  undefined1 local_528 [16];
  undefined1 local_518 [16];
  undefined1 local_508 [16];
  long local_4f8;
  undefined4 local_4f0;
  undefined8 local_4e8;
  undefined8 local_4e0;
  undefined4 local_4d8;
  undefined2 local_4d4;
  undefined8 local_4d0;
  undefined1 local_4c8;
  undefined1 local_4c4 [16];
  undefined8 local_4b0;
  undefined4 local_4a8;
  undefined8 local_4a0;
  undefined8 local_498;
  undefined8 local_490;
  undefined8 local_488;
  undefined8 local_480;
  undefined1 local_478 [16];
  undefined4 local_468;
  undefined8 local_460;
  undefined4 local_458;
  undefined **local_448 [46];
  undefined1 local_2d7;
  undefined1 local_2d4 [16];
  undefined1 local_2c4 [16];
  undefined4 local_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined4 uStack_2a8;
  undefined8 local_2a4;
  undefined8 uStack_29c;
  undefined8 local_294;
  undefined8 uStack_28c;
  undefined8 local_284;
  undefined8 uStack_27c;
  undefined8 local_274;
  undefined8 uStack_26c;
  undefined8 local_264;
  uint local_25c;
  uint local_258;
  undefined2 local_254;
  undefined1 local_252;
  undefined1 local_250 [16];
  undefined1 local_240 [16];
  undefined4 local_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  uint local_220;
  undefined8 local_21c;
  uint local_214;
  undefined8 local_210;
  uint local_208;
  Projection local_204 [64];
  Projection local_1c4 [64];
  undefined1 local_184 [16];
  undefined1 local_174 [16];
  undefined4 local_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined8 local_154;
  undefined8 uStack_14c;
  undefined8 local_144;
  undefined8 uStack_13c;
  undefined8 local_134;
  undefined8 uStack_12c;
  undefined8 local_124;
  undefined8 uStack_11c;
  undefined8 local_114;
  Projection local_10c [64];
  Projection local_cc [64];
  undefined1 local_8c [12];
  undefined4 uStack_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined1 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar9 = RendererRD::LightStorage::get_singleton();
  plVar10 = (long *)RendererRD::TextureStorage::get_singleton();
  if (*param_1 == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar14 = 0x46f;
      pcVar13 = "Condition \"p_render_buffers.is_null()\" is true.";
      goto LAB_001043fc;
    }
    goto LAB_001050a7;
  }
  pOVar11 = (Object *)__dynamic_cast(*param_1,&Object::typeinfo,&RenderSceneBuffersRD::typeinfo,0);
  if (pOVar11 != (Object *)0x0) {
    cVar8 = RefCounted::reference();
    if (cVar8 != '\0') {
      Object::Object((Object *)local_448);
      local_2d4 = ZEXT416(_LC0);
      local_2d7 = 0;
      local_448[0] = (undefined **)Projection::get_z_far;
      local_2b4 = 0x3f800000;
      uStack_2b0 = 0;
      uStack_2ac = 0;
      uStack_2a8 = 0;
      local_2c4 = local_2d4;
      Projection::Projection((Projection *)&local_2a4);
      local_250 = ZEXT416(_LC0);
      local_254 = 0;
      local_264 = 0;
      local_25c = 0;
      local_252 = 0;
      local_230 = 0x3f800000;
      uStack_22c = 0;
      uStack_228 = 0;
      uStack_224 = 0;
      local_220 = 1;
      local_21c = 0;
      local_214 = 0;
      local_210 = 0;
      local_208 = 0;
      local_240 = local_250;
      Projection::Projection(local_204);
      Projection::Projection(local_1c4);
      local_184 = ZEXT416(_LC0);
      local_164 = 0x3f800000;
      uStack_160 = 0;
      uStack_15c = 0;
      uStack_158 = 0;
      local_174 = local_184;
      Projection::Projection((Projection *)&local_154);
      local_114 = 0;
      Projection::Projection(local_10c);
      Projection::Projection(local_cc);
      local_254 = (undefined2)param_2[1];
      local_250 = *(undefined1 (*) [16])(param_2 + 4);
      local_2d4 = *(undefined1 (*) [16])(param_2 + 4);
      local_240 = *(undefined1 (*) [16])(param_2 + 8);
      local_2c4 = *(undefined1 (*) [16])(param_2 + 8);
      local_2a4 = *(undefined8 *)(param_2 + 0x10);
      uStack_29c = *(undefined8 *)(param_2 + 0x12);
      _local_8c = (undefined1  [16])0x0;
      local_258 = param_2[2];
      local_294 = *(undefined8 *)(param_2 + 0x14);
      uStack_28c = *(undefined8 *)(param_2 + 0x16);
      local_7c = 0;
      local_284 = *(undefined8 *)(param_2 + 0x18);
      uStack_27c = *(undefined8 *)(param_2 + 0x1a);
      local_264 = *(undefined8 *)(param_2 + 0x58);
      local_274 = *(undefined8 *)(param_2 + 0x1c);
      uStack_26c = *(undefined8 *)(param_2 + 0x1e);
      local_78 = 0;
      local_25c = param_2[0x5a];
      local_70 = 0;
      local_6c = 0;
      local_68 = 0;
      local_60 = 0;
      local_50 = 0;
      local_2b4 = (undefined4)*(undefined8 *)(param_2 + 0xc);
      uStack_2b0 = (undefined4)((ulong)*(undefined8 *)(param_2 + 0xc) >> 0x20);
      uStack_2ac = (undefined4)*(undefined8 *)(param_2 + 0xe);
      uStack_2a8 = (undefined4)((ulong)*(undefined8 *)(param_2 + 0xe) >> 0x20);
      bVar15 = param_19 == 0;
      local_220 = *param_2;
      uVar12 = (ulong)local_220;
      local_252 = bVar15;
      local_230 = local_2b4;
      uStack_22c = uStack_2b0;
      uStack_228 = uStack_2ac;
      uStack_224 = uStack_2a8;
      if (local_220 == 0) {
        local_184 = *(undefined1 (*) [16])(param_3 + 0x10);
        local_174 = *(undefined1 (*) [16])(param_3 + 0x20);
        local_154 = *(undefined8 *)(param_3 + 0x40);
        uStack_14c = *(undefined8 *)(param_3 + 0x48);
        local_144 = *(undefined8 *)(param_3 + 0x50);
        uStack_13c = *(undefined8 *)(param_3 + 0x58);
        local_134 = *(undefined8 *)(param_3 + 0x60);
        uStack_12c = *(undefined8 *)(param_3 + 0x68);
        local_114 = *(undefined8 *)(param_3 + 0x160);
        local_124 = *(undefined8 *)(param_3 + 0x70);
        uStack_11c = *(undefined8 *)(param_3 + 0x78);
        local_164 = (undefined4)*(undefined8 *)(param_3 + 0x30);
        uStack_160 = (undefined4)((ulong)*(undefined8 *)(param_3 + 0x30) >> 0x20);
        uStack_15c = (undefined4)*(undefined8 *)(param_3 + 0x38);
        uStack_158 = (undefined4)((ulong)*(undefined8 *)(param_3 + 0x38) >> 0x20);
      }
      else {
        local_21c = *(undefined8 *)(param_2 + 0x29);
        local_214 = param_2[0x2b];
        if (local_220 != 1) {
          local_210 = *(undefined8 *)(param_2 + 0x35);
          local_208 = param_2[0x37];
        }
        memcpy(local_204,param_2 + 0x38,uVar12 << 6);
        local_184 = *(undefined1 (*) [16])(param_3 + 0x10);
        local_174 = *(undefined1 (*) [16])(param_3 + 0x20);
        local_154 = *(undefined8 *)(param_3 + 0x40);
        uStack_14c = *(undefined8 *)(param_3 + 0x48);
        local_144 = *(undefined8 *)(param_3 + 0x50);
        uStack_13c = *(undefined8 *)(param_3 + 0x58);
        local_134 = *(undefined8 *)(param_3 + 0x60);
        uStack_12c = *(undefined8 *)(param_3 + 0x68);
        local_114 = *(undefined8 *)(param_3 + 0x160);
        local_124 = *(undefined8 *)(param_3 + 0x70);
        uStack_11c = *(undefined8 *)(param_3 + 0x78);
        local_164 = (undefined4)*(undefined8 *)(param_3 + 0x30);
        uStack_160 = (undefined4)((ulong)*(undefined8 *)(param_3 + 0x30) >> 0x20);
        uStack_15c = (undefined4)*(undefined8 *)(param_3 + 0x38);
        uStack_158 = (undefined4)((ulong)*(undefined8 *)(param_3 + 0x38) >> 0x20);
        memcpy(local_10c,(void *)(param_3 + 0xe0),uVar12 << 6);
      }
      uVar16 = Projection::get_z_near();
      local_8c._0_4_ = uVar16;
      uVar16 = Projection::get_z_far();
      local_8c._4_4_ = uVar16;
      fVar17 = (float)Projection::get_lod_multiplier();
      ProjectSettings::get_singleton();
      StringName::StringName((StringName *)local_728,"rendering/scaling_3d/scale",false);
      ProjectSettings::get_setting_with_override((StringName *)local_6e8);
      fVar18 = Variant::operator_cast_to_float((Variant *)local_6e8);
      if (Variant::needs_deinit[(int)local_6e8[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_728._0_8_ != 0)) {
        StringName::unref();
      }
      local_8c._8_4_ = (float)((_LC94 / (double)fVar18) * (double)fVar17);
      local_80c = param_1_00;
      if (*(int *)(this + 0x2438) == 0x13) {
        local_80c = 0;
      }
      uStack_80 = local_80c;
      if (param_16 != 0) {
        if ((uint)param_16 < *(uint *)(lVar9 + 0x34c)) {
          lVar1 = *(long *)(*(long *)(lVar9 + 0x338) +
                           ((param_16 & 0xffffffff) / (ulong)*(uint *)(lVar9 + 0x348)) * 8) +
                  ((param_16 & 0xffffffff) % (ulong)*(uint *)(lVar9 + 0x348)) * 200;
          iVar2 = *(int *)(lVar1 + 0xc0);
          if (iVar2 != (int)(param_16 >> 0x20)) {
            if (iVar2 + 0x80000000U < 0x7fffffff) {
              _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                               "Method/function failed. Returning: nullptr",
                               "Attempting to use an uninitialized RID",0,0);
            }
            goto LAB_00105079;
          }
          dVar19 = (double)*(int *)(lVar1 + 0x74);
        }
        else {
LAB_00105079:
          _err_print_error("shadow_atlas_get_size",
                           "./servers/rendering/renderer_rd/storage_rd/light_storage.h",0x44c,
                           "Parameter \"atlas\" is null.",0,0);
          dVar19 = 0.0;
        }
        local_68 = CONCAT44((float)(_LC94 / dVar19),(float)(_LC94 / dVar19));
      }
      dVar19 = _LC94 / (double)*(int *)(lVar9 + 0x39c);
      uStack_58 = CONCAT44((float)*(double *)(this + 0x170),(float)*(double *)(this + 0x168));
      local_60 = CONCAT44((float)dVar19,(float)dVar19);
      Object::Object((Object *)local_6e8);
      local_6e8[0] = &RenderSceneBuffersRD::typeinfo;
      local_568 = (Object *)0x0;
      local_560 = 0;
      local_558 = (StringName *)0x0;
      pSStack_550 = (StringName *)0x0;
      local_548 = (StringName *)0x0;
      local_540 = (StringName *)0x0;
      local_538 = (StringName *)0x0;
      local_530 = 0;
      local_4f8 = 0;
      local_4f0 = 0;
      local_4e8 = 0;
      local_4e0 = 0;
      local_4d8 = 0;
      local_4d4 = 0;
      local_4d0 = 0;
      local_4c8 = 0;
      local_4c4._0_8_ = 0;
      local_4c4._8_8_ = 0;
      local_4b0 = 0;
      local_4a8 = 0;
      local_4a0 = 0;
      local_498 = 0;
      local_490 = 0;
      local_488 = 0;
      local_480 = 0;
      local_468 = 0;
      local_460 = 0;
      local_528 = (undefined1  [16])0x0;
      local_518 = (undefined1  [16])0x0;
      local_508 = (undefined1  [16])0x0;
      local_478 = (undefined1  [16])0x0;
      local_458 = 0;
      local_570 = pOVar11;
      cVar8 = RefCounted::reference();
      if (cVar8 == '\0') {
        local_570 = (Object *)0x0;
      }
      pSStack_550 = param_6;
      local_548 = param_7;
      local_540 = param_8;
      local_538 = param_9;
      local_530 = param_10;
      local_528._8_8_ = param_14;
      local_528._0_8_ = param_13;
      local_518._8_8_ = param_16;
      local_518._0_8_ = param_15;
      local_508._8_8_ = param_18;
      local_508._0_8_ = param_17;
      local_4f8 = param_19;
      local_4f0 = param_20;
      local_4b0 = param_21;
      local_4a8 = param_22;
      local_478._8_8_ = param_23;
      local_468 = param_24;
      local_460 = param_25;
      local_4d0 = param_26;
      bVar15 = *param_1 != 0 && bVar15;
      local_568 = (Object *)local_448;
      local_560 = param_4;
      local_558 = param_5;
      if (bVar15) {
        local_4c8 = (**(code **)(*plVar10 + 0x220))(plVar10,*(undefined8 *)(pOVar11 + 0x198));
        local_4c4 = (**(code **)(*plVar10 + 800))(plVar10,*(undefined8 *)(pOVar11 + 0x198));
        bVar15 = *param_1 != 0;
      }
      uVar3 = *(uint *)(this + 0x2438);
      local_728 = (undefined1  [16])0x0;
      local_718 = (undefined1  [16])0x0;
      local_708 = (undefined1  [16])0x0;
      pSVar4 = (StringName *)local_728;
      pSVar5 = (StringName *)local_728;
      pSVar6 = (StringName *)local_728;
      pSVar7 = (StringName *)local_728;
      if ((((uVar3 & 0xfffffffd) == 1) ||
          (pSVar4 = local_558, pSVar5 = pSStack_550, pSVar6 = local_548, pSVar7 = local_538,
          uVar3 == 0xe)) || (uVar3 == 2)) {
        local_538 = pSVar7;
        local_548 = pSVar6;
        pSStack_550 = pSVar5;
        local_558 = pSVar4;
        local_540 = (StringName *)local_728;
      }
      local_6f8._0_8_ = __LC28;
      local_6f8._8_8_ = _UNK_00113478;
      if (bVar15) {
        local_6f8 = (**(code **)(*plVar10 + 0x290))(plVar10,*(undefined8 *)(pOVar11 + 0x198));
      }
      else {
        local_6f8 = *(undefined1 (*) [16])(RenderingServerGlobals::texture_storage + 8);
      }
      (**(code **)(*(long *)this + 0x1e0))(this,(StringName *)local_6e8,local_6f8);
      if ((local_708._8_8_ != 0) &&
         (uVar12 = local_708._8_8_ - 1 >> (local_718[0xc] & 0x3f), (int)uVar12 != -1)) {
        lVar9 = 0;
        do {
          uVar16 = *(undefined4 *)(local_718._0_8_ + lVar9);
          pcVar13 = (char *)(local_728._0_8_ + 0x20);
          while( true ) {
            LOCK();
            cVar8 = *pcVar13;
            if (cVar8 == '\0') {
              *pcVar13 = '\x01';
            }
            UNLOCK();
            if (cVar8 == '\0') break;
            do {
            } while (*pcVar13 != '\0');
          }
          lVar9 = lVar9 + 4;
          *(undefined4 *)
           (*(long *)(local_728._0_8_ + 0x10) + (ulong)*(uint *)(local_728._0_8_ + 0x18) * 4) =
               uVar16;
          *(int *)(local_728._0_8_ + 0x18) = *(int *)(local_728._0_8_ + 0x18) + 1;
          *(undefined1 *)(local_728._0_8_ + 0x20) = 0;
        } while ((uVar12 & 0xffffffff) * 4 + 4 != lVar9);
      }
      local_708._8_8_ = 0;
      if ((void *)local_728._8_8_ != (void *)0x0) {
        Memory::free_static((void *)local_728._8_8_,false);
        Memory::free_static((void *)local_718._0_8_,false);
      }
      RenderDataRD::~RenderDataRD((RenderDataRD *)local_6e8);
      local_448[0] = (undefined **)Projection::get_z_far;
      Projection::~Projection(local_cc);
      Projection::~Projection(local_10c);
      Projection::~Projection((Projection *)&local_154);
      Projection::~Projection(local_1c4);
      Projection::~Projection(local_204);
      Projection::~Projection((Projection *)&local_2a4);
      local_448[0] = &PTR__initialize_classv_00112d20;
      Object::~Object((Object *)local_448);
      cVar8 = RefCounted::unreference();
      if (cVar8 != '\0') {
        cVar8 = predelete_handler(pOVar11);
        if (cVar8 != '\0') {
          (**(code **)(*(long *)pOVar11 + 0x140))(pOVar11);
          Memory::free_static(pOVar11,false);
        }
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_001050a7;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    uVar14 = 0x471;
    pcVar13 = "Condition \"rb.is_null()\" is true.";
LAB_001043fc:
    _err_print_error("render_scene","servers/rendering/renderer_rd/renderer_scene_render_rd.cpp",
                     uVar14,pcVar13,0,0);
    return;
  }
LAB_001050a7:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererSceneRenderRD::RendererSceneRenderRD() */

void __thiscall RendererSceneRenderRD::RendererSceneRenderRD(RendererSceneRenderRD *this)

{
  undefined8 uVar1;
  
  *(undefined ***)this = &PTR___cxa_pure_virtual_00112b40;
  RendererEnvironmentStorage::RendererEnvironmentStorage((RendererEnvironmentStorage *)(this + 8));
  RendererCompositorStorage::RendererCompositorStorage((RendererCompositorStorage *)(this + 0x68));
  this[0x1a0] = (RendererSceneRenderRD)0x0;
  *(undefined ***)this = &PTR___cxa_pure_virtual_00113030;
  *(undefined2 *)(this + 0x178) = 0;
  uVar1 = _LC97;
  *(undefined8 *)(this + 0x180) = 0;
  *(undefined8 *)(this + 0x198) = uVar1;
  *(undefined4 *)(this + 0x188) = 0;
  *(undefined8 *)(this + 400) = 0;
  *(undefined8 *)(this + 0x1f0) = 0;
  *(undefined8 *)(this + 0x1f8) = 0;
  *(undefined4 *)(this + 0x200) = 0;
  *(undefined8 *)(this + 0x208) = 0;
  *(undefined1 (*) [16])(this + 0x128) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x138) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x148) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x158) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x1e0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x168) = (undefined1  [16])0x0;
  RendererRD::SkyRD::SkyRD((SkyRD *)(this + 0x210));
  RendererRD::GI::GI((GI *)(this + 0xb50));
  uVar1 = _LC98;
  *(undefined4 *)(this + 0x2440) = 6;
  *(undefined1 (*) [16])(this + 0x2450) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x2438) = uVar1;
  uVar1 = _LC16;
  *(undefined1 (*) [16])(this + 0x2460) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x2444) = uVar1;
  uVar1 = _LC99;
  this[0x2470] = (RendererSceneRenderRD)0x0;
  *(undefined8 *)(this + 0x2484) = uVar1;
  uVar1 = _LC100;
  this[0x248c] = (RendererSceneRenderRD)0x0;
  *(undefined8 *)(this + 0x2490) = uVar1;
  uVar1 = _LC101;
  *(undefined8 *)(this + 0x2498) = 0;
  *(undefined8 *)(this + 0x24a0) = uVar1;
  *(undefined4 *)(this + 0x24a8) = 0x80;
  this[0x24ac] = (RendererSceneRenderRD)0x1;
  singleton = this;
  *(undefined1 (*) [16])(this + 0x2474) = (undefined1  [16])0x0;
  return;
}



/* RendererSceneRenderRD::init() */

void __thiscall RendererSceneRenderRD::init(RendererSceneRenderRD *this)

{
  long *plVar1;
  code *pcVar2;
  bool bVar3;
  RendererSceneRenderRD RVar4;
  char cVar5;
  byte bVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  ForwardIDStorage *this_00;
  undefined8 uVar12;
  BokehDOF *this_01;
  CopyEffects *this_02;
  DebugEffects *this_03;
  Luminance *this_04;
  ToneMapper *this_05;
  FSR *this_06;
  VRS *this_07;
  byte bVar13;
  long in_FS_OFFSET;
  float fVar14;
  long local_98;
  long local_90;
  char *local_88;
  undefined8 local_80;
  int local_78 [8];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar7 = (**(code **)(*(long *)this + 0x290))();
  *(undefined4 *)(this + 0x24a0) = uVar7;
  lVar11 = RendererRD::LightStorage::get_singleton();
  *(undefined4 *)(lVar11 + 8) = *(undefined4 *)(this + 0x24a0);
  RendererRD::LightStorage::set_max_reflection_probes((uint)lVar11);
  RendererRD::LightStorage::set_max_lights((uint)lVar11);
  if (*(code **)(*(long *)this + 0x1d0) == create_forward_id_storage) {
    this_00 = (ForwardIDStorage *)operator_new(8,"");
    RendererRD::ForwardIDStorage::ForwardIDStorage(this_00);
  }
  else {
    this_00 = (ForwardIDStorage *)(**(code **)(*(long *)this + 0x1d0))(this);
  }
  *(ForwardIDStorage **)(this + 0x128) = this_00;
  local_88 = 
  "struct DecalData {\n\thighp mat4 xform; //to decal transform\n\thighp vec3 inv_extents;\n\tmediump float albedo_mix;\n\thighp vec4 albedo_rect;\n\thighp vec4 normal_rect;\n\thighp vec4 orm_rect;\n\thighp vec4 emission_rect;\n\thighp vec4 modulate;\n\tmediump float emission_energy;\n\tuint mask;\n\tmediump float upper_fade;\n\tmediump float lower_fade;\n\tmediump mat3x4 normal_xform;\n\tmediump vec3 normal;\n\tmediump float normal_fade;\n};\n"
  ;
  local_90 = 0;
  local_80 = 0x19d;
  String::parse_latin1((StrRange *)&local_90);
  local_88 = "godot/decal_data_inc.glsl";
  local_98 = 0;
  local_80 = 0x19;
  String::parse_latin1((StrRange *)&local_98);
  ShaderIncludeDB::register_built_in_include_file((String *)&local_98,(String *)&local_90);
  lVar11 = local_98;
  if (local_98 != 0) {
    LOCK();
    plVar1 = (long *)(local_98 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_98 = 0;
      Memory::free_static((void *)(lVar11 + -0x10),false);
    }
  }
  lVar11 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar11 + -0x10),false);
    }
  }
  local_90 = 0;
  local_88 = 
  "#define LIGHT_BAKE_DISABLED 0\n#define LIGHT_BAKE_STATIC 1\n#define LIGHT_BAKE_DYNAMIC 2\n\nstruct LightData { //this structure needs to be as packed as possible\n\thighp vec3 position;\n\thighp float inv_radius;\n\n\tmediump vec3 direction;\n\thighp float size;\n\n\tmediump vec3 color;\n\tmediump float attenuation;\n\n\tmediump float cone_attenuation;\n\tmediump float cone_angle;\n\tmediump float specular_amount;\n\tmediump float shadow_opacity;\n\n\thighp vec4 atlas_rect; // rect in the shadow atlas\n\thighp mat4 shadow_matrix;\n\thighp float shadow_bias;\n\thighp float shadow_normal_bias;\n\thighp float transmittance_bias;\n\thighp float soft_shadow_size; // for spot, it\'s the size in uv coordinates of the light, for omni it\'s the span angle\n\thighp float soft_shadow_scale; // scales the shadow kernel for blurrier shadows\n\tuint mask;\n\tmediump float volumetric_fog_energy;\n\tuint bake_mode;\n\thighp vec4 projector_rect; //projector rect in srgb decal atlas\n};\n\n#define REFLECTION_AMBIENT_DISABLED 0\n#define REFLECTION_AMBIENT_ENVIRONMENT 1\n#define REFLECTION_AMBIENT_COLOR 2\n\nstruct ReflectionData {\n\thighp vec3 box_extents;\n\tmediump float index;\n\thighp vec3 box_offset;\n\tuint mask;\n\tmediump vec3 ambient; // ambient color\n\tmediump float intensity;\n\tmediump float blend_distance;\n\tbool exterior;\n\tbool box_project;\n\tuint ambient_mode;\n\tfloat exposure_normalization;\n\tfloat pad0;\n\tfloat pad1;\n\tfloat pad2;\n\t//0-8 is intensity,8-9 is ambient, mode\n\thighp mat4 local_matrix; // up to here for spot and omni, rest is for directional\n\t// notes: for ambientblend, use distance to edge to blend between already existing global environment\n};\n\nstruct DirectionalLightData {\n\tmediump vec3 direction;\n\thighp float energy; // needs to be highp to avoid NaNs being created with high energy values (i.e. when using physical light units and over-exposing the image)\n\tmediump vec3 color;\n\tmediump float size;\n\tmediump float specular;\n\tuint mask;\n\thighp float softshadow_angle;\n\thighp float soft_shadow_scale;\n\tbool blend_splits;\n\tmediump float shadow_opacity;\n\thighp float fade_from;\n\thighp f..." /* TRUNCATED STRING LITERAL */
  ;
  local_80 = 0x9de;
  String::parse_latin1((StrRange *)&local_90);
  local_88 = "godot/light_data_inc.glsl";
  local_98 = 0;
  local_80 = 0x19;
  String::parse_latin1((StrRange *)&local_98);
  ShaderIncludeDB::register_built_in_include_file((String *)&local_98,(String *)&local_90);
  lVar11 = local_98;
  if (local_98 != 0) {
    LOCK();
    plVar1 = (long *)(local_98 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_98 = 0;
      Memory::free_static((void *)(lVar11 + -0x10),false);
    }
  }
  lVar11 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar11 + -0x10),false);
    }
  }
  local_90 = 0;
  local_88 = 
  "// Scene data stores all our 3D rendering globals for a frame such as our matrices\n// where this information is independent of the different RD implementations.\n// This enables us to use this UBO in our main scene render shaders but also in\n// effects that need access to this data.\n\nstruct SceneData {\n\thighp mat4 projection_matrix;\n\thighp mat4 inv_projection_matrix;\n\thighp mat4 inv_view_matrix;\n\thighp mat4 view_matrix;\n\n\t// only used for multiview\n\thighp mat4 projection_matrix_view[MAX_VIEWS];\n\thighp mat4 inv_projection_matrix_view[MAX_VIEWS];\n\thighp vec4 eye_offset[MAX_VIEWS];\n\n\t// Used for billboards to cast correct shadows.\n\thighp mat4 main_cam_inv_view_matrix;\n\n\thighp vec2 viewport_size;\n\thighp vec2 screen_pixel_size;\n\n\t// Use vec4s because std140 doesn\'t play nice with vec2s, z and w are wasted.\n\thighp vec4 directional_penumbra_shadow_kernel[32];\n\thighp vec4 directional_soft_shadow_kernel[32];\n\thighp vec4 penumbra_shadow_kernel[32];\n\thighp vec4 soft_shadow_kernel[32];\n\n\tmediump mat3 radiance_inverse_xform;\n\n\tmediump vec4 ambient_light_color_energy;\n\n\tmediump float ambient_color_sky_mix;\n\tbool use_ambient_light;\n\tbool use_ambient_cubemap;\n\tbool use_reflection_cubemap;\n\n\thighp vec2 shadow_atlas_pixel_size;\n\thighp vec2 directional_shadow_pixel_size;\n\n\tuint directional_light_count;\n\tmediump float dual_paraboloid_side;\n\thighp float z_far;\n\thighp float z_near;\n\n\tbool roughness_limiter_enabled;\n\tmediump float roughness_limiter_amount;\n\tmediump float roughness_limiter_limit;\n\tmediump float opaque_prepass_threshold;\n\n\tbool fog_enabled;\n\tuint fog_mode;\n\thighp float fog_density;\n\thighp float fog_height;\n\n\thighp float fog_height_density;\n\thighp float fog_depth_curve;\n\thighp float fog_depth_begin;\n\thighp float taa_frame_count;\n\n\tmediump vec3 fog_light_color;\n\thighp float fog_depth_end;\n\n\tmediump float fog_sun_scatter;\n\tmediump float fog_aerial_perspective;\n\thighp float time;\n\tmediump float reflection_multiplier; // one normally, zero when rendering reflections\n\n\tvec2 taa_jitter;\n\tbool material_uv2_mode;\n\tfloat emissive_e..." /* TRUNCATED STRING LITERAL */
  ;
  local_80 = 0x890;
  String::parse_latin1((StrRange *)&local_90);
  local_88 = "godot/scene_data_inc.glsl";
  local_98 = 0;
  local_80 = 0x19;
  String::parse_latin1((StrRange *)&local_98);
  ShaderIncludeDB::register_built_in_include_file((String *)&local_98,(String *)&local_90);
  lVar11 = local_98;
  if (local_98 != 0) {
    LOCK();
    plVar1 = (long *)(local_98 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_98 = 0;
      Memory::free_static((void *)(lVar11 + -0x10),false);
    }
  }
  lVar11 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar11 + -0x10),false);
    }
  }
  RendererRD::SkyRD::init();
  if ((*(code **)(*(long *)this + 0x280) == is_dynamic_gi_supported) ||
     (cVar5 = (**(code **)(*(long *)this + 0x280))(this), cVar5 != '\0')) {
    RendererRD::GI::init((SkyRD *)(this + 0xb50));
  }
  uVar8 = RendererRD::TextureStorage::get_singleton();
  RendererRD::TextureStorage::set_max_decals(uVar8);
  if ((*(code **)(*(long *)this + 0x288) == is_dynamic_gi_supported) ||
     (cVar5 = (**(code **)(*(long *)this + 0x288))(this), cVar5 != '\0')) {
    uVar12 = RendererRD::Fog::singleton;
    uVar7 = *(undefined4 *)(this + 0xb48);
    lVar11 = RendererRD::LightStorage::get_singleton();
    RendererRD::Fog::init_fog_shader((uint)uVar12,*(int *)(lVar11 + 0x100),SUB41(uVar7,0));
  }
  uVar12 = RenderingServerGlobals::camera_attributes;
  ProjectSettings::get_singleton();
  StringName::StringName
            ((StringName *)&local_88,"rendering/camera/depth_of_field/depth_of_field_bokeh_shape",
             false);
  ProjectSettings::get_setting_with_override((StringName *)local_58);
  iVar9 = Variant::operator_cast_to_int((Variant *)local_58);
  RendererCameraAttributes::camera_attributes_set_dof_blur_bokeh_shape(uVar12,iVar9);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
    StringName::unref();
  }
  uVar12 = RenderingServerGlobals::camera_attributes;
  ProjectSettings::get_singleton();
  StringName::StringName
            ((StringName *)&local_88,"rendering/camera/depth_of_field/depth_of_field_use_jitter",
             false);
  ProjectSettings::get_setting_with_override((StringName *)local_58);
  bVar3 = Variant::operator_cast_to_bool((Variant *)local_58);
  ProjectSettings::get_singleton();
  StringName::StringName
            ((StringName *)&local_90,"rendering/camera/depth_of_field/depth_of_field_bokeh_quality",
             false);
  ProjectSettings::get_setting_with_override((StringName *)local_78);
  iVar9 = Variant::operator_cast_to_int((Variant *)local_78);
  RendererCameraAttributes::camera_attributes_set_dof_blur_quality(uVar12,iVar9,bVar3);
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_90 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
    StringName::unref();
  }
  ProjectSettings::get_singleton();
  StringName::StringName
            ((StringName *)&local_88,"rendering/lights_and_shadows/use_physical_light_units",false);
  ProjectSettings::get_setting_with_override((StringName *)local_58);
  RVar4 = (RendererSceneRenderRD)Variant::operator_cast_to_bool((Variant *)local_58);
  this[0x179] = RVar4;
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
    StringName::unref();
  }
  ProjectSettings::get_singleton();
  StringName::StringName
            ((StringName *)&local_88,
             "rendering/anti_aliasing/screen_space_roughness_limiter/enabled",false);
  ProjectSettings::get_setting_with_override((StringName *)local_58);
  RVar4 = (RendererSceneRenderRD)Variant::operator_cast_to_bool((Variant *)local_58);
  this[0x248c] = RVar4;
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
    StringName::unref();
  }
  ProjectSettings::get_singleton();
  StringName::StringName
            ((StringName *)&local_88,"rendering/anti_aliasing/screen_space_roughness_limiter/amount"
             ,false);
  ProjectSettings::get_setting_with_override((StringName *)local_58);
  fVar14 = Variant::operator_cast_to_float((Variant *)local_58);
  *(float *)(this + 0x2490) = fVar14;
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
    StringName::unref();
  }
  ProjectSettings::get_singleton();
  StringName::StringName
            ((StringName *)&local_88,"rendering/anti_aliasing/screen_space_roughness_limiter/limit",
             false);
  ProjectSettings::get_setting_with_override((StringName *)local_58);
  fVar14 = Variant::operator_cast_to_float((Variant *)local_58);
  *(float *)(this + 0x2494) = fVar14;
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
    StringName::unref();
  }
  ProjectSettings::get_singleton();
  StringName::StringName((StringName *)&local_88,"rendering/environment/glow/upscale_mode",false);
  ProjectSettings::get_setting_with_override((StringName *)local_58);
  iVar9 = Variant::operator_cast_to_int((Variant *)local_58);
  this[0x178] = (RendererSceneRenderRD)(0 < iVar9);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
    StringName::unref();
  }
  lVar11 = Memory::alloc_static(0x200,true);
  if (lVar11 == 0) {
    _err_print_error("memnew_arr_template","./core/os/memory.h",0xb6,"Parameter \"mem\" is null.",0,
                     0);
  }
  else {
    *(undefined8 *)(lVar11 + -8) = 0x80;
  }
  *(long *)(this + 0x2450) = lVar11;
  lVar11 = Memory::alloc_static(0x200,true);
  if (lVar11 == 0) {
    _err_print_error("memnew_arr_template","./core/os/memory.h",0xb6,"Parameter \"mem\" is null.",0,
                     0);
  }
  else {
    *(undefined8 *)(lVar11 + -8) = 0x80;
  }
  *(long *)(this + 0x2458) = lVar11;
  lVar11 = Memory::alloc_static(0x200,true);
  if (lVar11 == 0) {
    _err_print_error("memnew_arr_template","./core/os/memory.h",0xb6,"Parameter \"mem\" is null.",0,
                     0);
  }
  else {
    *(undefined8 *)(lVar11 + -8) = 0x80;
  }
  *(long *)(this + 0x2460) = lVar11;
  lVar11 = Memory::alloc_static(0x200,true);
  if (lVar11 == 0) {
    _err_print_error("memnew_arr_template","./core/os/memory.h",0xb6,"Parameter \"mem\" is null.",0,
                     0);
  }
  else {
    *(undefined8 *)(lVar11 + -8) = 0x80;
  }
  *(long *)(this + 0x2468) = lVar11;
  pcVar2 = *(code **)(*(long *)this + 200);
  ProjectSettings::get_singleton();
  StringName::StringName
            ((StringName *)&local_88,
             "rendering/lights_and_shadows/positional_shadow/soft_shadow_filter_quality",false);
  ProjectSettings::get_setting_with_override((StringName *)local_58);
  iVar9 = Variant::operator_cast_to_int((Variant *)local_58);
  (*pcVar2)(this,iVar9);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
    StringName::unref();
  }
  pcVar2 = *(code **)(*(long *)this + 0xd0);
  ProjectSettings::get_singleton();
  StringName::StringName
            ((StringName *)&local_88,
             "rendering/lights_and_shadows/directional_shadow/soft_shadow_filter_quality",false);
  ProjectSettings::get_setting_with_override((StringName *)local_58);
  iVar9 = Variant::operator_cast_to_int((Variant *)local_58);
  (*pcVar2)(this,iVar9);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
    StringName::unref();
  }
  pcVar2 = *(code **)(*(long *)this + 0x78);
  ProjectSettings::get_singleton();
  StringName::StringName
            ((StringName *)&local_88,"rendering/environment/volumetric_fog/volume_depth",false);
  ProjectSettings::get_setting_with_override((StringName *)local_58);
  iVar9 = Variant::operator_cast_to_int((Variant *)local_58);
  ProjectSettings::get_singleton();
  StringName::StringName
            ((StringName *)&local_90,"rendering/environment/volumetric_fog/volume_size",false);
  ProjectSettings::get_setting_with_override((StringName *)local_78);
  iVar10 = Variant::operator_cast_to_int((Variant *)local_78);
  if (pcVar2 == environment_set_volumetric_fog_volume_size) {
    *(int *)(this + 0x24a4) = iVar10;
    *(int *)(this + 0x24a8) = iVar9;
    cVar5 = Variant::needs_deinit[local_78[0]];
  }
  else {
    (*pcVar2)(this,iVar10,iVar9);
    cVar5 = Variant::needs_deinit[local_78[0]];
  }
  if (cVar5 != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_90 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
    StringName::unref();
  }
  pcVar2 = *(code **)(*(long *)this + 0x80);
  ProjectSettings::get_singleton();
  StringName::StringName
            ((StringName *)&local_88,"rendering/environment/volumetric_fog/use_filter",false);
  ProjectSettings::get_setting_with_override((StringName *)local_58);
  RVar4 = (RendererSceneRenderRD)Variant::operator_cast_to_bool((Variant *)local_58);
  if (pcVar2 == environment_set_volumetric_fog_filter_active) {
    this[0x24ac] = RVar4;
    cVar5 = Variant::needs_deinit[local_58[0]];
  }
  else {
    (*pcVar2)(this,RVar4);
    cVar5 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar5 != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
    StringName::unref();
  }
  pcVar2 = *(code **)(*(long *)this + 0x1a0);
  ProjectSettings::get_singleton();
  StringName::StringName((StringName *)&local_88,"rendering/textures/decals/filter",false);
  ProjectSettings::get_setting_with_override((StringName *)local_58);
  iVar9 = Variant::operator_cast_to_int((Variant *)local_58);
  if (pcVar2 == decals_set_filter) {
    if (iVar9 != *(int *)(this + 0x2484)) {
      *(int *)(this + 0x2484) = iVar9;
      if (*(code **)(*(long *)this + 0x220) != _update_shader_quality_settings) {
        (**(code **)(*(long *)this + 0x220))(this);
      }
    }
    cVar5 = Variant::needs_deinit[local_58[0]];
  }
  else {
    (*pcVar2)(this);
    cVar5 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar5 != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
    StringName::unref();
  }
  pcVar2 = *(code **)(*(long *)this + 0x1a8);
  ProjectSettings::get_singleton();
  StringName::StringName((StringName *)&local_88,"rendering/textures/light_projectors/filter",false)
  ;
  ProjectSettings::get_setting_with_override((StringName *)local_58);
  iVar9 = Variant::operator_cast_to_int((Variant *)local_58);
  if (pcVar2 == light_projectors_set_filter) {
    if (iVar9 != *(int *)(this + 0x2488)) {
      *(int *)(this + 0x2488) = iVar9;
      if (*(code **)(*(long *)this + 0x220) != _update_shader_quality_settings) {
        (**(code **)(*(long *)this + 0x220))(this);
      }
    }
    cVar5 = Variant::needs_deinit[local_58[0]];
  }
  else {
    (*pcVar2)(this);
    cVar5 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar5 != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
    StringName::unref();
  }
  pcVar2 = *(code **)(*(long *)this + 0x1b0);
  ProjectSettings::get_singleton();
  StringName::StringName
            ((StringName *)&local_88,"rendering/lightmapping/lightmap_gi/use_bicubic_filter",false);
  ProjectSettings::get_setting_with_override((StringName *)local_58);
  RVar4 = (RendererSceneRenderRD)Variant::operator_cast_to_bool((Variant *)local_58);
  if (pcVar2 == lightmaps_set_bicubic_filter) {
    if (RVar4 != this[0x2470]) {
      this[0x2470] = RVar4;
      if (*(code **)(*(long *)this + 0x220) != _update_shader_quality_settings) {
        (**(code **)(*(long *)this + 0x220))(this);
      }
    }
    cVar5 = Variant::needs_deinit[local_58[0]];
  }
  else {
    (*pcVar2)(this,RVar4);
    cVar5 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar5 != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
    StringName::unref();
  }
  if (*(int *)(this + 0x1f8) == 0) {
    iVar9 = *(int *)(this + 0x19c);
    *(RendererSceneRenderRD **)(this + 0x1e0) = this + 0x180;
    *(int *)(this + 0x200) = iVar9 + -1;
    iVar10 = 0;
    if (iVar9 != 1) {
      iVar10 = 0;
      do {
        iVar10 = iVar10 + 1;
        if (iVar10 == 0x20) {
          iVar10 = -1;
          break;
        }
      } while (iVar9 != 1 << ((byte)iVar10 & 0x1f));
    }
    *(int *)(this + 0x1fc) = iVar10;
  }
  else {
    _err_print_error("set_page_pool","./core/templates/paged_array.h",0x16c,
                     "Condition \"max_pages_used > 0\" is true.",0,0);
  }
  lVar11 = *(long *)this;
  bVar13 = false;
  bVar6 = 1;
  if (*(code **)(lVar11 + 600) != is_dynamic_gi_supported) {
    bVar6 = (**(code **)(lVar11 + 600))(this);
    lVar11 = *(long *)this;
    bVar13 = bVar6 ^ 1;
  }
  if (*(code **)(lVar11 + 0x278) == is_vrs_supported) {
    uVar12 = RenderingDevice::get_singleton();
    cVar5 = RenderingDevice::has_feature(uVar12,2);
  }
  else {
    cVar5 = (**(code **)(lVar11 + 0x278))(this);
  }
  this_01 = (BokehDOF *)operator_new(0xc20,"");
  RendererRD::BokehDOF::BokehDOF(this_01,(bool)bVar13);
  *(BokehDOF **)(this + 0x130) = this_01;
  this_02 = (CopyEffects *)operator_new(0x3310,"");
  RendererRD::CopyEffects::CopyEffects(this_02,(bool)bVar13);
  *(CopyEffects **)(this + 0x138) = this_02;
  this_03 = (DebugEffects *)operator_new(0x730,"");
  RendererRD::DebugEffects::DebugEffects(this_03);
  *(DebugEffects **)(this + 0x140) = this_03;
  this_04 = (Luminance *)operator_new(0x6c8,"");
  RendererRD::Luminance::Luminance(this_04,(bool)bVar13);
  *(Luminance **)(this + 0x148) = this_04;
  this_05 = (ToneMapper *)operator_new(0x1080,"");
  RendererRD::ToneMapper::ToneMapper(this_05);
  *(ToneMapper **)(this + 0x150) = this_05;
  if (cVar5 != '\0') {
    this_07 = (VRS *)operator_new(0x3f0,"");
    RendererRD::VRS::VRS(this_07);
    *(VRS **)(this + 0x160) = this_07;
  }
  if (bVar6 != 0) {
    this_06 = (FSR *)operator_new(0x198,"");
    RendererRD::FSR::FSR(this_06);
    *(FSR **)(this + 0x158) = this_06;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Vector<RID>::push_back(RID) [clone .isra.0] */

void __thiscall Vector<RID>::push_back(Vector<RID> *this,undefined8 param_2)

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
  iVar1 = CowData<RID>::resize<false>((CowData<RID> *)(this + 8),lVar2);
  if (iVar1 == 0) {
    if (*(long *)(this + 8) == 0) {
      lVar3 = -1;
      lVar2 = 0;
    }
    else {
      lVar2 = *(long *)(*(long *)(this + 8) + -8);
      lVar3 = lVar2 + -1;
      if (-1 < lVar3) {
        CowData<RID>::_copy_on_write((CowData<RID> *)(this + 8));
        *(undefined8 *)(*(long *)(this + 8) + lVar3 * 8) = param_2;
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



/* RendererSceneRenderRD::reflection_probe_create_framebuffer(RID, RID) */

undefined8 __thiscall
RendererSceneRenderRD::reflection_probe_create_framebuffer
          (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  Vector *pVVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  Vector<RID> local_38 [8];
  long local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_30 = 0;
  Vector<RID>::push_back(local_38);
  Vector<RID>::push_back(local_38,param_3);
  pVVar3 = (Vector *)RenderingDevice::get_singleton();
  uVar4 = RenderingDevice::framebuffer_create(pVVar3,(long)local_38,0xffffffff);
  lVar2 = local_30;
  if (local_30 != 0) {
    LOCK();
    plVar1 = (long *)(local_30 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_30 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RendererSceneRenderRD::bake_render_uv2(RID, TypedArray<RID> const&, Vector2i const&) */

Array * RendererSceneRenderRD::bake_render_uv2
                  (Array *param_1,long *param_2,undefined8 param_3,int param_4,int *param_5)

{
  StringName *pSVar1;
  Object *pOVar2;
  undefined8 *puVar3;
  code *pcVar4;
  Object *pOVar5;
  byte bVar6;
  StringName SVar7;
  char cVar8;
  uint uVar9;
  TextureFormat *pTVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  Vector *pVVar17;
  undefined8 uVar18;
  long *plVar19;
  Variant *this;
  undefined8 uVar20;
  long lVar21;
  int iVar22;
  uint *puVar23;
  char *pcVar24;
  ulong uVar25;
  long *plVar26;
  ulong uVar27;
  long in_FS_OFFSET;
  bool bVar28;
  char *pcVar29;
  Array local_e8 [8];
  Object *local_e0;
  Vector<RID> local_d8 [8];
  long local_d0;
  long local_c8;
  long local_c0;
  char *local_b8;
  long lStack_b0;
  undefined4 local_a8;
  int local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined8 local_84;
  undefined8 local_7c;
  long local_68;
  undefined2 local_60;
  int local_58 [2];
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_5 < 1) {
    pcVar29 = "Image width must be greater than 0.";
    uVar11 = 0x53c;
    pcVar24 = "Condition \"p_image_size.width <= 0\" is true. Returning: TypedArray<Image>()";
  }
  else {
    if (0 < param_5[1]) {
      uStack_94 = (undefined4)*(undefined8 *)param_5;
      uStack_90 = (undefined4)((ulong)*(undefined8 *)param_5 >> 0x20);
      local_60 = 0;
      uStack_8c = 1;
      uStack_88 = 1;
      local_84 = 0x100000001;
      local_68 = 0;
      local_98 = 0x24;
      local_7c = 0x8200000000;
      pTVar10 = (TextureFormat *)RenderingDevice::get_singleton();
      local_c0 = 0;
      local_b8 = (char *)__LC142;
      lStack_b0 = _UNK_00113498;
      local_a8 = 6;
      uVar11 = RenderingDevice::texture_create(pTVar10,(TextureView *)&local_98,(Vector *)&local_b8)
      ;
      CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>> *)&local_c0);
      pTVar10 = (TextureFormat *)RenderingDevice::get_singleton();
      local_c0 = 0;
      local_a8 = 6;
      local_b8 = (char *)__LC142;
      lStack_b0 = _UNK_00113498;
      uVar12 = RenderingDevice::texture_create(pTVar10,(TextureView *)&local_98,(Vector *)&local_b8)
      ;
      CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>> *)&local_c0);
      pTVar10 = (TextureFormat *)RenderingDevice::get_singleton();
      local_c0 = 0;
      local_a8 = 6;
      local_b8 = (char *)__LC142;
      lStack_b0 = _UNK_00113498;
      uVar13 = RenderingDevice::texture_create(pTVar10,(TextureView *)&local_98,(Vector *)&local_b8)
      ;
      CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>> *)&local_c0);
      local_98 = 0x60;
      pTVar10 = (TextureFormat *)RenderingDevice::get_singleton();
      local_c0 = 0;
      local_a8 = 6;
      local_b8 = (char *)__LC142;
      lStack_b0 = _UNK_00113498;
      uVar14 = RenderingDevice::texture_create(pTVar10,(TextureView *)&local_98,(Vector *)&local_b8)
      ;
      CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>> *)&local_c0);
      local_98 = 99;
      pTVar10 = (TextureFormat *)RenderingDevice::get_singleton();
      local_c0 = 0;
      local_a8 = 6;
      local_b8 = (char *)__LC142;
      lStack_b0 = _UNK_00113498;
      uVar15 = RenderingDevice::texture_create(pTVar10,(TextureView *)&local_98,(Vector *)&local_b8)
      ;
      CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>> *)&local_c0);
      local_7c = CONCAT44(0x84,(undefined4)local_7c);
      uVar16 = RenderingDevice::get_singleton();
      bVar6 = RenderingDevice::texture_is_format_supported_for_usage(uVar16,0x7d,4);
      local_98 = bVar6 + 0x7c;
      pTVar10 = (TextureFormat *)RenderingDevice::get_singleton();
      local_c0 = 0;
      local_a8 = 6;
      local_b8 = (char *)__LC142;
      lStack_b0 = _UNK_00113498;
      uVar16 = RenderingDevice::texture_create(pTVar10,(TextureView *)&local_98,(Vector *)&local_b8)
      ;
      CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>> *)&local_c0);
      local_d0 = 0;
      Vector<RID>::push_back(local_d8,uVar11);
      Vector<RID>::push_back(local_d8,uVar12);
      Vector<RID>::push_back(local_d8,uVar13);
      Vector<RID>::push_back(local_d8,uVar14);
      Vector<RID>::push_back(local_d8,uVar15);
      Vector<RID>::push_back(local_d8,uVar16);
      pVVar17 = (Vector *)RenderingDevice::get_singleton();
      uVar18 = RenderingDevice::framebuffer_create(pVVar17,(long)local_d8,0xffffffff);
      plVar19 = (long *)(**(code **)*param_2)(param_2,param_3);
      if (plVar19 == (long *)0x0) {
        _err_print_error("bake_render_uv2",
                         "servers/rendering/renderer_rd/renderer_scene_render_rd.cpp",0x55f,
                         "Parameter \"gi_inst\" is null.",0,0);
        Array::Array(param_1);
        local_50 = (undefined1  [16])0x0;
        local_b8 = "Image";
        local_58[0] = 0;
        local_58[1] = 0;
        local_c8 = 0;
        lStack_b0 = 5;
        String::parse_latin1((StrRange *)&local_c8);
        StringName::StringName((StringName *)&local_b8,(String *)&local_c8,false);
        Array::set_typed((uint)param_1,(StringName *)0x18,(Variant *)&local_b8);
        if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
          StringName::unref();
        }
        lVar21 = local_c8;
        if (local_c8 != 0) {
          LOCK();
          plVar19 = (long *)(local_c8 + -0x10);
          *plVar19 = *plVar19 + -1;
          UNLOCK();
          if (*plVar19 == 0) {
            local_c8 = 0;
            Memory::free_static((void *)(lVar21 + -0x10),false);
          }
        }
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
      }
      else {
        uVar25 = 0;
        uVar9 = (**(code **)(*RenderingServerGlobals::mesh_storage + 0x80))
                          (RenderingServerGlobals::mesh_storage,param_3);
        local_c0 = 0;
        uVar27 = (ulong)uVar9;
        CowData<RID>::resize<false>((CowData<RID> *)&local_c0,uVar27);
        if (uVar9 != 0) {
          do {
            while( true ) {
              uVar9 = Array::size();
              if ((uint)uVar25 < uVar9) break;
              uVar25 = uVar25 + 1;
              if (uVar25 == uVar27) goto LAB_0010692d;
            }
            this = (Variant *)Array::operator[](param_4);
            uVar20 = Variant::operator_cast_to_RID(this);
            if (local_c0 == 0) {
              lVar21 = 0;
LAB_00106e73:
              iVar22 = 0x38;
              pcVar24 = "./core/templates/vector.h";
              pcVar29 = "((Vector<T> *)(this))->_cowdata.size()";
              goto LAB_00106e9d;
            }
            lVar21 = *(long *)(local_c0 + -8);
            if (lVar21 <= (long)uVar25) goto LAB_00106e73;
            CowData<RID>::_copy_on_write((CowData<RID> *)&local_c0);
            *(undefined8 *)(local_c0 + uVar25 * 8) = uVar20;
            uVar25 = uVar25 + 1;
          } while (uVar25 != uVar27);
        }
LAB_0010692d:
        (**(code **)(*plVar19 + 0x30))(plVar19,(StrRange *)&local_c8);
        if (param_2[0x41] == 0) {
          plVar26 = (long *)param_2[0x3c];
          if ((int)param_2[0x3f] == 0) {
            if (plVar26 != (long *)0x0) {
              *(undefined4 *)(param_2 + 0x3f) = 1;
              lVar21 = Memory::realloc_static((void *)param_2[0x3d],8,false);
              param_2[0x3d] = lVar21;
              lVar21 = Memory::realloc_static
                                 ((void *)param_2[0x3e],(ulong)*(uint *)(param_2 + 0x3f) << 2,false)
              ;
              plVar26 = (long *)param_2[0x3c];
              param_2[0x3e] = lVar21;
              goto LAB_00106961;
            }
            _err_print_error("push_back","./core/templates/paged_array.h",0xbf,
                             "Parameter \"page_pool\" is null.",0,0);
            lVar21 = param_2[0x41];
          }
          else {
LAB_00106961:
            pSVar1 = (StringName *)(plVar26 + 4);
            while( true ) {
              local_b8 = (char *)((ulong)local_b8 & 0xffffffffffffff00);
              LOCK();
              SVar7 = *pSVar1;
              bVar28 = SVar7 == (StringName)0x0;
              if (bVar28) {
                *pSVar1 = (StringName)0x1;
                SVar7 = (StringName)0x0;
              }
              UNLOCK();
              if (bVar28) break;
                    /* WARNING: Ignoring partial resolution of indirect */
              local_b8._0_1_ = SVar7;
              do {
              } while (*pSVar1 != (StringName)0x0);
            }
            if ((int)plVar26[3] == 0) {
              uVar9 = *(uint *)(plVar26 + 1);
              *(uint *)(plVar26 + 1) = uVar9 + 1;
              lVar21 = Memory::realloc_static((void *)*plVar26,(ulong)(uVar9 + 1) * 8,false);
              *plVar26 = lVar21;
              lVar21 = Memory::realloc_static
                                 ((void *)plVar26[2],(ulong)*(uint *)(plVar26 + 1) << 2,false);
              plVar26[2] = lVar21;
              lVar21 = *plVar26;
              uVar20 = Memory::alloc_static((ulong)*(uint *)((long)plVar26 + 0x1c) << 3,false);
              puVar23 = (uint *)plVar26[2];
              *(undefined8 *)(lVar21 + (ulong)uVar9 * 8) = uVar20;
              *puVar23 = uVar9;
              uVar9 = *(uint *)(plVar26 + 3);
            }
            else {
              puVar23 = (uint *)plVar26[2];
              uVar9 = (int)plVar26[3] - 1;
            }
            *(uint *)(plVar26 + 3) = uVar9;
            uVar9 = puVar23[uVar9];
            uVar20 = *(undefined8 *)(*plVar26 + (ulong)uVar9 * 8);
            *(undefined1 *)(plVar26 + 4) = 0;
            puVar3 = (undefined8 *)param_2[0x3d];
            uVar25 = param_2[0x41];
            *puVar3 = uVar20;
            *(uint *)param_2[0x3e] = uVar9;
            lVar21 = uVar25 + 1;
            *(undefined8 *)
             (puVar3[uVar25 >> ((byte)*(undefined4 *)((long)param_2 + 0x1fc) & 0x3f) & 0xffffffff] +
             (ulong)((uint)uVar25 & *(uint *)(param_2 + 0x40)) * 8) = 0;
            param_2[0x41] = lVar21;
          }
          if (lVar21 == 0) {
            lVar21 = 0;
            uVar25 = 0;
            iVar22 = 0xb0;
            pcVar24 = "./core/templates/paged_array.h";
            pcVar29 = "count";
LAB_00106e9d:
            _err_print_index_error
                      ("operator[]",pcVar24,iVar22,uVar25,lVar21,"p_index",pcVar29,"",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
        }
        local_50._0_8_ = *(undefined8 *)param_5;
        **(undefined8 **)param_2[0x3d] = plVar19;
        local_58[0] = 0;
        local_58[1] = 0;
        (**(code **)(*param_2 + 0x1f8))(param_2,param_2 + 0x3c,uVar18,(Variant *)local_58);
        (**(code **)(*param_2 + 8))(param_2,plVar19);
        Array::Array(local_e8);
        local_50 = (undefined1  [16])0x0;
        local_b8 = "Image";
        local_58[0] = 0;
        local_58[1] = 0;
        local_e0 = (Object *)0x0;
        lStack_b0 = 5;
        String::parse_latin1((StrRange *)&local_e0);
        StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
        Array::set_typed((uint)local_e8,(StringName *)0x18,(Variant *)&local_b8);
        if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
          StringName::unref();
        }
        pOVar5 = local_e0;
        if (local_e0 != (Object *)0x0) {
          LOCK();
          pOVar2 = local_e0 + -0x10;
          *(long *)pOVar2 = *(long *)pOVar2 + -1;
          UNLOCK();
          if (*(long *)pOVar2 == 0) {
            local_e0 = (Object *)0x0;
            Memory::free_static(pOVar5 + -0x10,false);
          }
        }
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        uVar18 = RenderingDevice::get_singleton();
        RenderingDevice::texture_get_data((StringName *)&local_b8,uVar18,uVar11,0);
        Image::create_from_data
                  ((StrRange *)&local_e0,*param_5,param_5[1],0,5,(StringName *)&local_b8);
        uVar18 = RenderingDevice::get_singleton();
        RenderingDevice::free(uVar18,uVar11);
        Variant::Variant((Variant *)local_58,local_e0);
        Array::push_back((Variant *)local_e8);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (((local_e0 != (Object *)0x0) &&
            (cVar8 = RefCounted::unreference(), pOVar5 = local_e0, cVar8 != '\0')) &&
           (cVar8 = predelete_handler(local_e0), cVar8 != '\0')) {
          if (*(code **)(*(long *)pOVar5 + 0x140) == Image::~Image) {
            *(code **)pOVar5 = Memory::free_static;
            if (*(long *)(pOVar5 + 0x250) != 0) {
              LOCK();
              plVar19 = (long *)(*(long *)(pOVar5 + 0x250) + -0x10);
              *plVar19 = *plVar19 + -1;
              UNLOCK();
              if (*plVar19 == 0) {
                lVar21 = *(long *)(pOVar5 + 0x250);
                *(undefined8 *)(pOVar5 + 0x250) = 0;
                Memory::free_static((void *)(lVar21 + -0x10),false);
              }
            }
            Resource::~Resource((Resource *)pOVar5);
          }
          else {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
          }
          Memory::free_static(pOVar5,false);
        }
        lVar21 = lStack_b0;
        if (lStack_b0 != 0) {
          LOCK();
          plVar19 = (long *)(lStack_b0 + -0x10);
          *plVar19 = *plVar19 + -1;
          UNLOCK();
          if (*plVar19 == 0) {
            lStack_b0 = 0;
            Memory::free_static((void *)(lVar21 + -0x10),false);
          }
        }
        uVar11 = RenderingDevice::get_singleton();
        RenderingDevice::texture_get_data((StringName *)&local_b8,uVar11,uVar12,0);
        Image::create_from_data
                  ((StrRange *)&local_e0,*param_5,param_5[1],0,5,(StringName *)&local_b8);
        uVar11 = RenderingDevice::get_singleton();
        RenderingDevice::free(uVar11,uVar12);
        Variant::Variant((Variant *)local_58,local_e0);
        Array::push_back((Variant *)local_e8);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (((local_e0 != (Object *)0x0) &&
            (cVar8 = RefCounted::unreference(), pOVar5 = local_e0, cVar8 != '\0')) &&
           (cVar8 = predelete_handler(local_e0), cVar8 != '\0')) {
          if (*(code **)(*(long *)pOVar5 + 0x140) == Image::~Image) {
            *(code **)pOVar5 = Memory::free_static;
            if (*(long *)(pOVar5 + 0x250) != 0) {
              LOCK();
              plVar19 = (long *)(*(long *)(pOVar5 + 0x250) + -0x10);
              *plVar19 = *plVar19 + -1;
              UNLOCK();
              if (*plVar19 == 0) {
                lVar21 = *(long *)(pOVar5 + 0x250);
                *(undefined8 *)(pOVar5 + 0x250) = 0;
                Memory::free_static((void *)(lVar21 + -0x10),false);
              }
            }
            Resource::~Resource((Resource *)pOVar5);
          }
          else {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
          }
          Memory::free_static(pOVar5,false);
        }
        lVar21 = lStack_b0;
        if (lStack_b0 != 0) {
          LOCK();
          plVar19 = (long *)(lStack_b0 + -0x10);
          *plVar19 = *plVar19 + -1;
          UNLOCK();
          if (*plVar19 == 0) {
            lStack_b0 = 0;
            Memory::free_static((void *)(lVar21 + -0x10),false);
          }
        }
        uVar11 = RenderingDevice::get_singleton();
        RenderingDevice::texture_get_data((StringName *)&local_b8,uVar11,uVar13,0);
        Image::create_from_data
                  ((StrRange *)&local_e0,*param_5,param_5[1],0,5,(StringName *)&local_b8);
        uVar11 = RenderingDevice::get_singleton();
        RenderingDevice::free(uVar11,uVar13);
        Variant::Variant((Variant *)local_58,local_e0);
        Array::push_back((Variant *)local_e8);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (((local_e0 != (Object *)0x0) &&
            (cVar8 = RefCounted::unreference(), pOVar5 = local_e0, cVar8 != '\0')) &&
           (cVar8 = predelete_handler(local_e0), cVar8 != '\0')) {
          if (*(code **)(*(long *)pOVar5 + 0x140) == Image::~Image) {
            *(code **)pOVar5 = Memory::free_static;
            if (*(long *)(pOVar5 + 0x250) != 0) {
              LOCK();
              plVar19 = (long *)(*(long *)(pOVar5 + 0x250) + -0x10);
              *plVar19 = *plVar19 + -1;
              UNLOCK();
              if (*plVar19 == 0) {
                lVar21 = *(long *)(pOVar5 + 0x250);
                *(undefined8 *)(pOVar5 + 0x250) = 0;
                Memory::free_static((void *)(lVar21 + -0x10),false);
              }
            }
            Resource::~Resource((Resource *)pOVar5);
          }
          else {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
          }
          Memory::free_static(pOVar5,false);
        }
        lVar21 = lStack_b0;
        if (lStack_b0 != 0) {
          LOCK();
          plVar19 = (long *)(lStack_b0 + -0x10);
          *plVar19 = *plVar19 + -1;
          UNLOCK();
          if (*plVar19 == 0) {
            lStack_b0 = 0;
            Memory::free_static((void *)(lVar21 + -0x10),false);
          }
        }
        uVar11 = RenderingDevice::get_singleton();
        RenderingDevice::texture_get_data((StringName *)&local_b8,uVar11,uVar14,0);
        Image::create_from_data
                  ((StrRange *)&local_e0,*param_5,param_5[1],0,0xf,(StringName *)&local_b8);
        uVar11 = RenderingDevice::get_singleton();
        RenderingDevice::free(uVar11,uVar14);
        Variant::Variant((Variant *)local_58,local_e0);
        Array::push_back((Variant *)local_e8);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (((local_e0 != (Object *)0x0) &&
            (cVar8 = RefCounted::unreference(), pOVar5 = local_e0, cVar8 != '\0')) &&
           (cVar8 = predelete_handler(local_e0), cVar8 != '\0')) {
          if (*(code **)(*(long *)pOVar5 + 0x140) == Image::~Image) {
            *(code **)pOVar5 = Memory::free_static;
            if (*(long *)(pOVar5 + 0x250) != 0) {
              LOCK();
              plVar19 = (long *)(*(long *)(pOVar5 + 0x250) + -0x10);
              *plVar19 = *plVar19 + -1;
              UNLOCK();
              if (*plVar19 == 0) {
                lVar21 = *(long *)(pOVar5 + 0x250);
                *(undefined8 *)(pOVar5 + 0x250) = 0;
                Memory::free_static((void *)(lVar21 + -0x10),false);
              }
            }
            Resource::~Resource((Resource *)pOVar5);
          }
          else {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
          }
          Memory::free_static(pOVar5,false);
        }
        lVar21 = lStack_b0;
        if (lStack_b0 != 0) {
          LOCK();
          plVar19 = (long *)(lStack_b0 + -0x10);
          *plVar19 = *plVar19 + -1;
          UNLOCK();
          if (*plVar19 == 0) {
            lStack_b0 = 0;
            Memory::free_static((void *)(lVar21 + -0x10),false);
          }
        }
        uVar11 = RenderingDevice::get_singleton();
        RenderingDevice::free(uVar11,uVar15);
        uVar11 = RenderingDevice::get_singleton();
        RenderingDevice::free(uVar11,uVar16);
        Array::Array(param_1,local_e8);
        Array::~Array(local_e8);
        lVar21 = local_c0;
        if (local_c0 != 0) {
          LOCK();
          plVar19 = (long *)(local_c0 + -0x10);
          *plVar19 = *plVar19 + -1;
          UNLOCK();
          if (*plVar19 == 0) {
            local_c0 = 0;
            Memory::free_static((void *)(lVar21 + -0x10),false);
          }
        }
      }
      lVar21 = local_d0;
      if (local_d0 != 0) {
        LOCK();
        plVar19 = (long *)(local_d0 + -0x10);
        *plVar19 = *plVar19 + -1;
        UNLOCK();
        if (*plVar19 == 0) {
          local_d0 = 0;
          Memory::free_static((void *)(lVar21 + -0x10),false);
        }
      }
      lVar21 = local_68;
      if (local_68 != 0) {
        LOCK();
        plVar19 = (long *)(local_68 + -0x10);
        *plVar19 = *plVar19 + -1;
        UNLOCK();
        if (*plVar19 == 0) {
          local_68 = 0;
          Memory::free_static((void *)(lVar21 + -0x10),false);
        }
      }
      goto LAB_00106e1f;
    }
    pcVar29 = "Image height must be greater than 0.";
    uVar11 = 0x53d;
    pcVar24 = "Condition \"p_image_size.height <= 0\" is true. Returning: TypedArray<Image>()";
  }
  _err_print_error("bake_render_uv2","servers/rendering/renderer_rd/renderer_scene_render_rd.cpp",
                   uVar11,pcVar24,pcVar29,0,0);
  Array::Array(param_1);
  local_50 = (undefined1  [16])0x0;
  local_98 = 0x10e314;
  uStack_94 = 0;
  local_58[0] = 0;
  local_58[1] = 0;
  local_b8 = (char *)0x0;
  uStack_90 = 5;
  uStack_8c = 0;
  String::parse_latin1((StrRange *)&local_b8);
  StringName::StringName((StringName *)&local_98,(String *)&local_b8,false);
  Array::set_typed((uint)param_1,(StringName *)0x18,(Variant *)&local_98);
  if ((StringName::configured != '\0') && (CONCAT44(uStack_94,local_98) != 0)) {
    StringName::unref();
  }
  pcVar24 = local_b8;
  if (local_b8 != (char *)0x0) {
    LOCK();
    plVar19 = (long *)(local_b8 + -0x10);
    *plVar19 = *plVar19 + -1;
    UNLOCK();
    if (*plVar19 == 0) {
      local_b8 = (char *)0x0;
      Memory::free_static(pcVar24 + -0x10,false);
    }
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
LAB_00106e1f:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* RendererSceneRenderRD::_render_buffers_copy_screen_texture(RenderDataRD const*) */

void __thiscall
RendererSceneRenderRD::_render_buffers_copy_screen_texture
          (RendererSceneRenderRD *this,RenderDataRD *param_1)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  StringName *pSVar6;
  long lVar7;
  uint uVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  uint uVar17;
  undefined1 *puVar18;
  StringName *pSVar19;
  undefined1 uVar20;
  uint uVar21;
  long in_FS_OFFSET;
  char local_d1;
  long local_b0;
  char *local_a8;
  undefined8 local_a0;
  uint local_94;
  long local_78;
  undefined8 local_68;
  int local_60;
  int local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  pSVar6 = *(StringName **)(param_1 + 0x178);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((pSVar6 == (StringName *)0x0) || (cVar9 = RefCounted::reference(), cVar9 == '\0')) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("_render_buffers_copy_screen_texture",
                       "servers/rendering/renderer_rd/renderer_scene_render_rd.cpp",0x144,
                       "Condition \"rb.is_null()\" is true.",0,0);
      return;
    }
    goto LAB_00108198;
  }
  if ((const::{lambda()#2}::operator()()::sname == '\0') &&
     (iVar11 = __cxa_guard_acquire(&const::{lambda()#2}::operator()()::sname), iVar11 != 0)) {
    _scs_create((char *)&const::{lambda()#2}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&const::{lambda()#2}::operator()()::sname,&__dso_handle);
    __cxa_guard_release(&const::{lambda()#2}::operator()()::sname);
  }
  if ((const::{lambda()#1}::operator()()::sname == '\0') &&
     (iVar11 = __cxa_guard_acquire(&const::{lambda()#1}::operator()()::sname), iVar11 != 0)) {
    _scs_create((char *)&const::{lambda()#1}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&const::{lambda()#1}::operator()()::sname,&__dso_handle);
    __cxa_guard_release(&const::{lambda()#1}::operator()()::sname);
  }
  local_d1 = RenderSceneBuffersRD::has_texture
                       (pSVar6,(StringName *)&const::{lambda()#1}::operator()()::sname);
  if (local_d1 == '\0') {
LAB_001076d1:
    cVar9 = RefCounted::unreference();
  }
  else {
    uVar13 = RenderingDevice::get_singleton();
    local_b0 = 0;
    local_a0 = 0x13;
    local_a8 = "Copy screen texture";
    local_58 = CONCAT44(_LC0,_LC0);
    uStack_50 = CONCAT44(_LC0,_LC0);
    String::parse_latin1((StrRange *)&local_b0);
    RenderingDevice::draw_command_begin_label(uVar13,(StrRange *)&local_b0,&local_58);
    lVar7 = local_b0;
    if (local_b0 != 0) {
      LOCK();
      plVar1 = (long *)(local_b0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_b0 = 0;
        Memory::free_static((void *)(lVar7 + -0x10),false);
      }
    }
    local_b0 = 0;
    if (*(code **)(*(long *)this + 600) != is_dynamic_gi_supported) {
      local_d1 = (**(code **)(*(long *)this + 600))(this);
    }
    iVar11 = *(int *)(pSVar6 + 0x1ac);
    iVar3 = *(int *)(pSVar6 + 0x1b0);
    uVar13 = *(undefined8 *)(pSVar6 + 0x1ac);
    iVar10 = *(int *)(pSVar6 + 0x1a0);
    iVar4 = *(int *)(pSVar6 + 0x1a4);
    if ((const::{lambda()#2}::operator()()::sname == '\0') &&
       (iVar12 = __cxa_guard_acquire(&const::{lambda()#2}::operator()()::sname), iVar12 != 0)) {
      _scs_create((char *)&const::{lambda()#2}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&const::{lambda()#2}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&const::{lambda()#2}::operator()()::sname);
    }
    if ((const::{lambda()#1}::operator()()::sname == '\0') &&
       (iVar12 = __cxa_guard_acquire(&const::{lambda()#1}::operator()()::sname), iVar12 != 0)) {
      _scs_create((char *)&const::{lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&const::{lambda()#1}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&const::{lambda()#1}::operator()()::sname);
    }
    cVar9 = RenderSceneBuffersRD::has_texture
                      (pSVar6,(StringName *)&const::{lambda()#1}::operator()()::sname);
    if ((cVar9 == '\x01') && (iVar10 != iVar11 || iVar4 != iVar3)) {
      uVar5 = *(undefined4 *)(pSVar6 + 0x184);
      if ((_render_buffers_copy_screen_texture(RenderDataRD_const*)::{lambda()#3}::operator()()::
           sname == '\0') &&
         (iVar10 = __cxa_guard_acquire(&_render_buffers_copy_screen_texture(RenderDataRD_const*)::
                                        {lambda()#3}::operator()()::sname), iVar10 != 0)) {
        _scs_create((char *)&_render_buffers_copy_screen_texture(RenderDataRD_const*)::{lambda()#3}
                             ::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &_render_buffers_copy_screen_texture(RenderDataRD_const*)::{lambda()#3}::
                      operator()()::sname,&__dso_handle);
        __cxa_guard_release(&_render_buffers_copy_screen_texture(RenderDataRD_const*)::{lambda()#3}
                             ::operator()()::sname);
      }
      if ((_render_buffers_copy_screen_texture(RenderDataRD_const*)::{lambda()#2}::operator()()::
           sname == '\0') &&
         (iVar10 = __cxa_guard_acquire(&_render_buffers_copy_screen_texture(RenderDataRD_const*)::
                                        {lambda()#2}::operator()()::sname), iVar10 != 0)) {
        _scs_create((char *)&_render_buffers_copy_screen_texture(RenderDataRD_const*)::{lambda()#2}
                             ::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &_render_buffers_copy_screen_texture(RenderDataRD_const*)::{lambda()#2}::
                      operator()()::sname,&__dso_handle);
        __cxa_guard_release(&_render_buffers_copy_screen_texture(RenderDataRD_const*)::{lambda()#2}
                             ::operator()()::sname);
      }
      pSVar19 = (StringName *)
                &_render_buffers_copy_screen_texture(RenderDataRD_const*)::{lambda()#4}::
                 operator()()::sname;
      RenderSceneBuffersRD::create_texture
                (pSVar6,&_render_buffers_copy_screen_texture(RenderDataRD_const*)::{lambda()#2}::
                         operator()()::sname,
                 &_render_buffers_copy_screen_texture(RenderDataRD_const*)::{lambda()#3}::
                  operator()()::sname,uVar5,(-(uint)(local_d1 == '\0') & 0xfffffffa) + 0x109,0,0,0,1
                 ,1,0);
      if (_render_buffers_copy_screen_texture(RenderDataRD_const*)::{lambda()#4}::operator()()::
          sname == '\0') {
        puVar18 = &_render_buffers_copy_screen_texture(RenderDataRD_const*)::{lambda()#4}::
                   operator()()::sname;
        pSVar19 = (StringName *)
                  &_render_buffers_copy_screen_texture(RenderDataRD_const*)::{lambda()#4}::
                   operator()()::sname;
        iVar10 = __cxa_guard_acquire(&_render_buffers_copy_screen_texture(RenderDataRD_const*)::
                                      {lambda()#4}::operator()()::sname);
        if (iVar10 != 0) {
          uVar20 = 0x61;
LAB_001080a4:
          _scs_create((char *)pSVar19,(bool)uVar20);
          __cxa_atexit(StringName::~StringName,pSVar19,&__dso_handle);
          __cxa_guard_release(puVar18);
        }
      }
    }
    else {
      pSVar19 = (StringName *)
                &_render_buffers_copy_screen_texture(RenderDataRD_const*)::{lambda()#1}::
                 operator()()::sname;
      RenderSceneBuffersRD::allocate_blur_textures();
      if (_render_buffers_copy_screen_texture(RenderDataRD_const*)::{lambda()#1}::operator()()::
          sname == '\0') {
        puVar18 = &_render_buffers_copy_screen_texture(RenderDataRD_const*)::{lambda()#1}::
                   operator()()::sname;
        pSVar19 = (StringName *)
                  &_render_buffers_copy_screen_texture(RenderDataRD_const*)::{lambda()#1}::
                   operator()()::sname;
        iVar10 = __cxa_guard_acquire(&_render_buffers_copy_screen_texture(RenderDataRD_const*)::
                                      {lambda()#1}::operator()()::sname);
        uVar20 = 0x5a;
        if (iVar10 != 0) goto LAB_001080a4;
      }
    }
    StringName::operator=((StringName *)&local_b0,pSVar19);
    uVar2 = 0;
    if (*(int *)(pSVar6 + 0x1a8) != 0) {
      do {
        if ((RenderSceneBuffersRD::get_internal_texture(unsigned_int)::{lambda()#2}::operator()()::
             sname == '\0') &&
           (iVar10 = __cxa_guard_acquire(&RenderSceneBuffersRD::get_internal_texture(unsigned_int)::
                                          {lambda()#2}::operator()()::sname), iVar10 != 0)) {
          _scs_create((char *)&RenderSceneBuffersRD::get_internal_texture(unsigned_int)::
                               {lambda()#2}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &RenderSceneBuffersRD::get_internal_texture(unsigned_int)::{lambda()#2}::
                        operator()()::sname,&__dso_handle);
          __cxa_guard_release(&RenderSceneBuffersRD::get_internal_texture(unsigned_int)::
                               {lambda()#2}::operator()()::sname);
        }
        if ((RenderSceneBuffersRD::get_internal_texture(unsigned_int)::{lambda()#1}::operator()()::
             sname == '\0') &&
           (iVar10 = __cxa_guard_acquire(&RenderSceneBuffersRD::get_internal_texture(unsigned_int)::
                                          {lambda()#1}::operator()()::sname), iVar10 != 0)) {
          _scs_create((char *)&RenderSceneBuffersRD::get_internal_texture(unsigned_int)::
                               {lambda()#1}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &RenderSceneBuffersRD::get_internal_texture(unsigned_int)::{lambda()#1}::
                        operator()()::sname,&__dso_handle);
          __cxa_guard_release(&RenderSceneBuffersRD::get_internal_texture(unsigned_int)::
                               {lambda()#1}::operator()()::sname);
        }
        uVar14 = RenderSceneBuffersRD::get_texture_slice
                           (pSVar6,(StringName *)
                                   &RenderSceneBuffersRD::get_internal_texture(unsigned_int)::
                                    {lambda()#1}::operator()()::sname,0x113360,uVar2,0,1);
        if ((_render_buffers_copy_screen_texture(RenderDataRD_const*)::{lambda()#5}::operator()()::
             sname == '\0') &&
           (iVar10 = __cxa_guard_acquire(&_render_buffers_copy_screen_texture(RenderDataRD_const*)::
                                          {lambda()#5}::operator()()::sname), iVar10 != 0)) {
          _scs_create((char *)&_render_buffers_copy_screen_texture(RenderDataRD_const*)::
                               {lambda()#5}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &_render_buffers_copy_screen_texture(RenderDataRD_const*)::{lambda()#5}::
                        operator()()::sname,&__dso_handle);
          __cxa_guard_release(&_render_buffers_copy_screen_texture(RenderDataRD_const*)::
                               {lambda()#5}::operator()()::sname);
        }
        RenderSceneBuffersRD::get_texture_format((StringName *)&local_a8,pSVar6);
        lVar7 = local_78;
        uVar8 = local_94;
        if (local_78 != 0) {
          LOCK();
          plVar1 = (long *)(local_78 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_78 = 0;
            Memory::free_static((void *)(lVar7 + -0x10),false);
          }
        }
        if ((_render_buffers_copy_screen_texture(RenderDataRD_const*)::{lambda()#6}::operator()()::
             sname == '\0') &&
           (iVar10 = __cxa_guard_acquire(&_render_buffers_copy_screen_texture(RenderDataRD_const*)::
                                          {lambda()#6}::operator()()::sname), iVar10 != 0)) {
          _scs_create((char *)&_render_buffers_copy_screen_texture(RenderDataRD_const*)::
                               {lambda()#6}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &_render_buffers_copy_screen_texture(RenderDataRD_const*)::{lambda()#6}::
                        operator()()::sname,&__dso_handle);
          __cxa_guard_release(&_render_buffers_copy_screen_texture(RenderDataRD_const*)::
                               {lambda()#6}::operator()()::sname);
        }
        uVar17 = (uint)(StrRange *)&local_b0;
        uVar15 = RenderSceneBuffersRD::get_texture_slice
                           (pSVar6,(StringName *)
                                   &_render_buffers_copy_screen_texture(RenderDataRD_const*)::
                                    {lambda()#6}::operator()()::sname,uVar17,uVar2,0,1);
        if (local_d1 == '\0') {
          uVar16 = FramebufferCacheRD::get_cache<RID>(FramebufferCacheRD::singleton,uVar15);
          local_58 = 0;
          uStack_50 = 0;
          local_68 = 0;
          local_60 = iVar11;
          local_5c = iVar3;
          RendererRD::CopyEffects::copy_to_fb_rect
                    (*(undefined8 *)(this + 0x138),uVar14,uVar16,&local_68,0,0,0,0,0,0,0,0,0);
        }
        else {
          local_58 = 0;
          uStack_50 = uVar13;
          RendererRD::CopyEffects::copy_to_rect
                    (*(undefined8 *)(this + 0x138),uVar14,uVar15,&local_58,0,0,0,0,0);
        }
        uVar21 = 1;
        if (1 < (int)uVar8) {
          do {
            while( true ) {
              if ((_render_buffers_copy_screen_texture(RenderDataRD_const*)::{lambda()#7}::
                   operator()()::sname == '\0') &&
                 (iVar10 = __cxa_guard_acquire(&_render_buffers_copy_screen_texture(RenderDataRD_const*)
                                                ::{lambda()#7}::operator()()::sname), iVar10 != 0))
              {
                _scs_create((char *)&_render_buffers_copy_screen_texture(RenderDataRD_const*)::
                                     {lambda()#7}::operator()()::sname,true);
                __cxa_atexit(StringName::~StringName,
                             &_render_buffers_copy_screen_texture(RenderDataRD_const*)::{lambda()#7}
                              ::operator()()::sname,&__dso_handle);
                __cxa_guard_release(&_render_buffers_copy_screen_texture(RenderDataRD_const*)::
                                     {lambda()#7}::operator()()::sname);
              }
              uVar14 = RenderSceneBuffersRD::get_texture_slice
                                 (pSVar6,(StringName *)
                                         &_render_buffers_copy_screen_texture(RenderDataRD_const*)::
                                          {lambda()#7}::operator()()::sname,uVar17,uVar2,uVar21,1);
              if ((_render_buffers_copy_screen_texture(RenderDataRD_const*)::{lambda()#8}::
                   operator()()::sname == '\0') &&
                 (iVar10 = __cxa_guard_acquire(&_render_buffers_copy_screen_texture(RenderDataRD_const*)
                                                ::{lambda()#8}::operator()()::sname), iVar10 != 0))
              {
                _scs_create((char *)&_render_buffers_copy_screen_texture(RenderDataRD_const*)::
                                     {lambda()#8}::operator()()::sname,true);
                __cxa_atexit(StringName::~StringName,
                             &_render_buffers_copy_screen_texture(RenderDataRD_const*)::{lambda()#8}
                              ::operator()()::sname,&__dso_handle);
                __cxa_guard_release(&_render_buffers_copy_screen_texture(RenderDataRD_const*)::
                                     {lambda()#8}::operator()()::sname);
              }
              local_58 = RenderSceneBuffersRD::get_texture_slice_size
                                   (pSVar6,(StringName *)
                                           &_render_buffers_copy_screen_texture(RenderDataRD_const*)
                                            ::{lambda()#8}::operator()()::sname,uVar17);
              if (local_d1 != '\0') break;
              RendererRD::CopyEffects::make_mipmap_raster();
              uVar21 = uVar21 + 1;
              uVar15 = uVar14;
              if (uVar8 == uVar21) goto LAB_00107b25;
            }
            RendererRD::CopyEffects::make_mipmap
                      (*(undefined8 *)(this + 0x138),uVar15,uVar14,&local_58);
            uVar21 = uVar21 + 1;
            uVar15 = uVar14;
          } while (uVar8 != uVar21);
        }
LAB_00107b25:
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(uint *)(pSVar6 + 0x1a8));
    }
    RenderingDevice::get_singleton();
    RenderingDevice::draw_command_end_label();
    if ((StringName::configured == '\0') || (local_b0 == 0)) goto LAB_001076d1;
    StringName::unref();
    cVar9 = RefCounted::unreference();
  }
  if ((cVar9 == '\0') || (cVar9 = predelete_handler((Object *)pSVar6), cVar9 == '\0')) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    (**(code **)(*(long *)pSVar6 + 0x140))(pSVar6);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Memory::free_static(pSVar6,false);
      return;
    }
  }
LAB_00108198:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererSceneRenderRD::_render_buffers_copy_depth_texture(RenderDataRD const*) */

void __thiscall
RendererSceneRenderRD::_render_buffers_copy_depth_texture
          (RendererSceneRenderRD *this,RenderDataRD *param_1)

{
  long *plVar1;
  StringName *pSVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  long in_FS_OFFSET;
  undefined8 uVar10;
  undefined8 uVar11;
  long local_80;
  char *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  pSVar2 = *(StringName **)(param_1 + 0x178);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((pSVar2 == (StringName *)0x0) || (cVar4 = RefCounted::reference(), cVar4 == '\0')) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("_render_buffers_copy_depth_texture",
                       "servers/rendering/renderer_rd/renderer_scene_render_rd.cpp",0x17e,
                       "Condition \"rb.is_null()\" is true.",0,0);
      return;
    }
  }
  else {
    cVar4 = RenderSceneBuffersRD::has_depth_texture();
    if (cVar4 == '\0') {
      cVar4 = RefCounted::unreference();
    }
    else {
      uVar6 = RenderingDevice::get_singleton();
      local_80 = 0;
      local_78 = "Copy depth texture";
      local_58 = CONCAT44(_LC0,_LC0);
      uStack_50 = CONCAT44(_LC0,_LC0);
      local_70 = 0x12;
      String::parse_latin1((StrRange *)&local_80);
      RenderingDevice::draw_command_begin_label(uVar6,(StrRange *)&local_80,&local_58);
      lVar3 = local_80;
      if (local_80 != 0) {
        LOCK();
        plVar1 = (long *)(local_80 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_80 = 0;
          Memory::free_static((void *)(lVar3 + -0x10),false);
        }
      }
      if ((_render_buffers_copy_depth_texture(RenderDataRD_const*)::{lambda()#2}::operator()()::
           sname == '\0') &&
         (iVar5 = __cxa_guard_acquire(&_render_buffers_copy_depth_texture(RenderDataRD_const*)::
                                       {lambda()#2}::operator()()::sname), iVar5 != 0)) {
        _scs_create((char *)&_render_buffers_copy_depth_texture(RenderDataRD_const*)::{lambda()#2}::
                             operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &_render_buffers_copy_depth_texture(RenderDataRD_const*)::{lambda()#2}::
                      operator()()::sname,&__dso_handle);
        __cxa_guard_release(&_render_buffers_copy_depth_texture(RenderDataRD_const*)::{lambda()#2}::
                             operator()()::sname);
      }
      if ((_render_buffers_copy_depth_texture(RenderDataRD_const*)::{lambda()#1}::operator()()::
           sname == '\0') &&
         (iVar5 = __cxa_guard_acquire(&_render_buffers_copy_depth_texture(RenderDataRD_const*)::
                                       {lambda()#1}::operator()()::sname), iVar5 != 0)) {
        _scs_create((char *)&_render_buffers_copy_depth_texture(RenderDataRD_const*)::{lambda()#1}::
                             operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &_render_buffers_copy_depth_texture(RenderDataRD_const*)::{lambda()#1}::
                      operator()()::sname,&__dso_handle);
        __cxa_guard_release(&_render_buffers_copy_depth_texture(RenderDataRD_const*)::{lambda()#1}::
                             operator()()::sname);
      }
      RenderSceneBuffersRD::create_texture
                (pSVar2,&_render_buffers_copy_depth_texture(RenderDataRD_const*)::{lambda()#1}::
                         operator()()::sname,
                 &_render_buffers_copy_depth_texture(RenderDataRD_const*)::{lambda()#2}::
                  operator()()::sname,99,0x10b,0,0,0,1,1,0);
      if (*(code **)(*(long *)this + 600) != is_dynamic_gi_supported) {
        cVar4 = (**(code **)(*(long *)this + 600))(this);
      }
      uVar6 = *(undefined8 *)(pSVar2 + 0x1ac);
      if (*(int *)(*(long *)(param_1 + 0x180) + 0x228) != 0) {
        uVar9 = 0;
        do {
          uVar11 = 0x1083f9;
          uVar7 = RenderSceneBuffersRD::get_depth_texture((uint)pSVar2);
          if (_render_buffers_copy_depth_texture(RenderDataRD_const*)::{lambda()#4}::operator()()::
              sname == '\0') {
            uVar11 = 0x10851c;
            iVar5 = __cxa_guard_acquire(&_render_buffers_copy_depth_texture(RenderDataRD_const*)::
                                         {lambda()#4}::operator()()::sname);
            if (iVar5 != 0) {
              _scs_create((char *)&_render_buffers_copy_depth_texture(RenderDataRD_const*)::
                                   {lambda()#4}::operator()()::sname,true);
              __cxa_atexit(StringName::~StringName,
                           &_render_buffers_copy_depth_texture(RenderDataRD_const*)::{lambda()#4}::
                            operator()()::sname,&__dso_handle);
              uVar11 = 0x108562;
              __cxa_guard_release(&_render_buffers_copy_depth_texture(RenderDataRD_const*)::
                                   {lambda()#4}::operator()()::sname);
            }
          }
          if (_render_buffers_copy_depth_texture(RenderDataRD_const*)::{lambda()#3}::operator()()::
              sname == '\0') {
            uVar11 = 0x1084c4;
            iVar5 = __cxa_guard_acquire(&_render_buffers_copy_depth_texture(RenderDataRD_const*)::
                                         {lambda()#3}::operator()()::sname);
            if (iVar5 != 0) {
              _scs_create((char *)&_render_buffers_copy_depth_texture(RenderDataRD_const*)::
                                   {lambda()#3}::operator()()::sname,true);
              __cxa_atexit(StringName::~StringName,
                           &_render_buffers_copy_depth_texture(RenderDataRD_const*)::{lambda()#3}::
                            operator()()::sname,&__dso_handle);
              uVar11 = 0x10850a;
              __cxa_guard_release(&_render_buffers_copy_depth_texture(RenderDataRD_const*)::
                                   {lambda()#3}::operator()()::sname);
            }
          }
          uVar10 = 1;
          uVar8 = RenderSceneBuffersRD::get_texture_slice
                            (pSVar2,(StringName *)
                                    &_render_buffers_copy_depth_texture(RenderDataRD_const*)::
                                     {lambda()#3}::operator()()::sname,0x10d020,uVar9,0,1);
          if (cVar4 == '\0') {
            uVar11 = FramebufferCacheRD::get_cache<RID>
                               (FramebufferCacheRD::singleton,uVar8,uVar10,uVar11);
            uStack_50 = 0;
            local_58 = 0;
            local_68 = 0;
            local_60 = uVar6;
            RendererRD::CopyEffects::copy_to_fb_rect
                      (*(undefined8 *)(this + 0x138),uVar7,uVar11,&local_68,0,0,0,0,0,0,0,0,0,
                       &local_58);
          }
          else {
            local_58 = 0;
            uStack_50 = uVar6;
            RendererRD::CopyEffects::copy_to_rect
                      (*(undefined8 *)(this + 0x138),uVar7,uVar8,&local_58,0,0,0,0,0);
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 < *(uint *)(*(long *)(param_1 + 0x180) + 0x228));
      }
      RenderingDevice::get_singleton();
      RenderingDevice::draw_command_end_label();
      cVar4 = RefCounted::unreference();
    }
    if ((cVar4 == '\0') || (cVar4 = predelete_handler((Object *)pSVar2), cVar4 == '\0')) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
    }
    else {
      (**(code **)(*(long *)pSVar2 + 0x140))(pSVar2);
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        Memory::free_static(pSVar2,false);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RendererSceneRenderRD::_render_buffers_post_process_and_tonemap(RenderDataRD const*) */

void __thiscall
RendererSceneRenderRD::_render_buffers_post_process_and_tonemap
          (RendererSceneRenderRD *this,RenderDataRD *param_1)

{
  StringName *pSVar1;
  long *plVar2;
  float fVar3;
  StringName *pSVar4;
  ulong uVar5;
  code *pcVar6;
  undefined1 auVar7 [12];
  FramebufferCacheRD *pFVar8;
  StringName *pSVar9;
  long lVar10;
  char cVar11;
  undefined1 uVar12;
  int iVar13;
  undefined4 uVar14;
  int iVar15;
  long *plVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  uint uVar19;
  char *pcVar20;
  bool bVar21;
  undefined8 uVar22;
  ulong extraout_RDX;
  ulong uVar23;
  long lVar24;
  ulong extraout_RDX_00;
  ulong extraout_RDX_01;
  ulong extraout_RDX_02;
  ulong extraout_RDX_03;
  ulong extraout_RDX_04;
  ulong extraout_RDX_05;
  uint uVar25;
  long lVar26;
  uint uVar27;
  long in_FS_OFFSET;
  bool bVar28;
  undefined4 uVar29;
  undefined8 uVar30;
  undefined1 auVar31 [16];
  ulong uVar32;
  CowData<char32_t> *local_1e0;
  undefined8 *local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c0;
  long *local_1b8;
  StrRange *local_1a0;
  uint uStack_18c;
  char local_185;
  uint local_184;
  long local_180;
  undefined8 local_178;
  StringName *local_140;
  StringName *local_138;
  long local_130;
  int local_124;
  long local_108;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined1 auStack_e0 [16];
  undefined1 local_d0 [16];
  undefined1 local_c0 [16];
  undefined1 local_b0 [16];
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  uint local_70;
  undefined2 local_6c;
  long local_68;
  undefined2 local_60;
  long local_5c;
  undefined4 local_54;
  byte local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  plVar16 = (long *)RendererRD::TextureStorage::get_singleton();
  if (param_1 == (RenderDataRD *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar22 = 0x1a2;
      pcVar20 = "Parameter \"p_render_data\" is null.";
LAB_00108758:
      _err_print_error("_render_buffers_post_process_and_tonemap",
                       "servers/rendering/renderer_rd/renderer_scene_render_rd.cpp",uVar22,pcVar20,0
                       ,0);
      return;
    }
    goto LAB_0010c03c;
  }
  pSVar4 = *(StringName **)(param_1 + 0x178);
  if ((pSVar4 == (StringName *)0x0) || (local_185 = RefCounted::reference(), local_185 == '\0')) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar22 = 0x1a5;
      pcVar20 = "Condition \"rb.is_null()\" is true.";
      goto LAB_00108758;
    }
    goto LAB_0010c03c;
  }
  if (*(long *)(param_1 + 0x1f0) == 0) {
    local_180 = *(long *)(pSVar4 + 0x1a0);
    if ((0x1a < *(uint *)(this + 0x2438)) ||
       (bVar21 = false, (0x4f0005aUL >> ((ulong)*(uint *)(this + 0x2438) & 0x3f) & 1) == 0)) {
      bVar21 = 7 < *(int *)(pSVar4 + 0x1a0) && 7 < *(int *)(pSVar4 + 0x1a4);
    }
    if (*(code **)(*(long *)this + 600) != is_dynamic_gi_supported) {
      local_185 = (**(code **)(*(long *)this + 600))(this);
    }
    iVar13 = *(int *)(pSVar4 + 0x1b4);
    if ((const::{lambda()#2}::operator()()::sname == '\0') &&
       (iVar15 = __cxa_guard_acquire(&const::{lambda()#2}::operator()()::sname), iVar15 != 0)) {
      _scs_create((char *)&const::{lambda()#2}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&const::{lambda()#2}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&const::{lambda()#2}::operator()()::sname);
    }
    if ((const::{lambda()#1}::operator()()::sname == '\0') &&
       (iVar15 = __cxa_guard_acquire(&const::{lambda()#1}::operator()()::sname), iVar15 != 0)) {
      _scs_create((char *)&const::{lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&const::{lambda()#1}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&const::{lambda()#1}::operator()()::sname);
    }
    cVar11 = RenderSceneBuffersRD::has_texture
                       (pSVar4,(StringName *)&const::{lambda()#1}::operator()()::sname);
    if (cVar11 == '\0') {
      local_1d0 = *(undefined8 *)(pSVar4 + 0x198);
      if ((bVar21) && (iVar13 == 1)) {
        local_1b8 = *(long **)(this + 0x158);
      }
      else {
LAB_00108cb5:
        local_1b8 = (long *)0x0;
      }
LAB_00109b86:
      if ((const::{lambda()#2}::operator()()::sname == '\0') &&
         (iVar13 = __cxa_guard_acquire(&const::{lambda()#2}::operator()()::sname), iVar13 != 0)) {
        _scs_create((char *)&const::{lambda()#2}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&const::{lambda()#2}::operator()()::sname,&__dso_handle
                    );
        __cxa_guard_release(&const::{lambda()#2}::operator()()::sname);
      }
      if ((const::{lambda()#1}::operator()()::sname == '\0') &&
         (iVar13 = __cxa_guard_acquire(&const::{lambda()#1}::operator()()::sname), iVar13 != 0)) {
        _scs_create((char *)&const::{lambda()#1}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&const::{lambda()#1}::operator()()::sname,&__dso_handle
                    );
        __cxa_guard_release(&const::{lambda()#1}::operator()()::sname);
      }
      uVar32 = 0x109bc0;
      auVar31 = RenderSceneBuffersRD::get_texture
                          (pSVar4,(StringName *)&const::{lambda()#1}::operator()()::sname);
      cVar11 = '\0';
      local_180 = *(long *)(pSVar4 + 0x1ac);
    }
    else {
      local_1d0 = *(undefined8 *)(pSVar4 + 0x198);
      if ((iVar13 == 1) && (bVar21)) {
        local_1b8 = *(long **)(this + 0x158);
        goto LAB_00109b86;
      }
      if ((iVar13 - 2U & 0xfffffffd) != 0) goto LAB_00108cb5;
      if ((const::{lambda()#2}::operator()()::sname == '\0') &&
         (iVar13 = __cxa_guard_acquire(&const::{lambda()#2}::operator()()::sname), iVar13 != 0)) {
        _scs_create((char *)&const::{lambda()#2}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&const::{lambda()#2}::operator()()::sname,&__dso_handle
                    );
        __cxa_guard_release(&const::{lambda()#2}::operator()()::sname);
      }
      if ((const::{lambda()#1}::operator()()::sname == '\0') &&
         (iVar13 = __cxa_guard_acquire(&const::{lambda()#1}::operator()()::sname), iVar13 != 0)) {
        _scs_create((char *)&const::{lambda()#1}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&const::{lambda()#1}::operator()()::sname,&__dso_handle
                    );
        __cxa_guard_release(&const::{lambda()#1}::operator()()::sname);
      }
      uVar32 = 0x1088ae;
      auVar31 = RenderSceneBuffersRD::get_texture
                          (pSVar4,(StringName *)&const::{lambda()#1}::operator()()::sname);
      local_1b8 = (long *)0x0;
    }
    uVar23 = auVar31._8_8_;
    local_178 = auVar31._0_8_;
    bVar28 = false;
    if (*(int *)(pSVar4 + 0x1a8) == 1) {
      uVar32 = 0x1088e5;
      iVar13 = (**(code **)(*plVar16 + 0x250))(plVar16,local_1d0);
      bVar28 = iVar13 != 0;
      uVar23 = extraout_RDX;
    }
    plVar2 = RenderingServerGlobals::utilities;
    if (bVar21) {
      uVar5 = *(ulong *)(param_1 + 0x1c8);
      if (uVar5 == 0) {
        uStack_18c = _LC0;
LAB_00109c30:
        lVar24 = *(long *)(param_1 + 0x1c0);
        local_184 = _LC0;
      }
      else {
        uVar23 = (ulong)*(uint *)(RenderingServerGlobals::camera_attributes + 0x2c);
        if ((uint)uVar5 < *(uint *)(RenderingServerGlobals::camera_attributes + 0x2c)) {
          lVar24 = ((uVar5 & 0xffffffff) %
                   (ulong)*(uint *)(RenderingServerGlobals::camera_attributes + 0x28)) * 0x50 +
                   *(long *)(*(long *)(RenderingServerGlobals::camera_attributes + 0x18) +
                            ((uVar5 & 0xffffffff) /
                            (ulong)*(uint *)(RenderingServerGlobals::camera_attributes + 0x28)) * 8)
          ;
          uVar25 = *(uint *)(lVar24 + 0x48);
          uVar23 = (ulong)uVar25;
          if (uVar25 == (uint)(uVar5 >> 0x20)) {
            if ((*(char *)(lVar24 + 0x34) == '\0') && (*(char *)(lVar24 + 0x28) == '\0'))
            goto LAB_00108957;
            if (*(float *)(lVar24 + 0x40) <= 0.0) goto LAB_0010a7f8;
            if ((char)RenderingServerGlobals::utilities[1] != '\0') {
              pcVar6 = *(code **)(*RenderingServerGlobals::utilities + 0x68);
              local_140 = (StringName *)0x0;
              local_138 = (StringName *)0x10e38a;
              local_130 = 0xe;
              String::parse_latin1((StrRange *)&local_140);
              (*pcVar6)(plVar2);
              pSVar9 = local_140;
              if (local_140 != (StringName *)0x0) {
                LOCK();
                pSVar1 = local_140 + -0x10;
                *(long *)pSVar1 = *(long *)pSVar1 + -1;
                UNLOCK();
                if (*(long *)pSVar1 == 0) {
                  local_140 = (StringName *)0x0;
                  Memory::free_static(pSVar9 + -0x10,false);
                }
              }
            }
            local_1a0 = (StrRange *)&local_140;
            uVar22 = RenderingDevice::get_singleton();
            local_140 = (StringName *)0x0;
            local_130 = 3;
            local_138 = (StringName *)&_LC160;
            uStack_18c = _LC0;
            local_e8 = CONCAT44(_LC0,_LC0);
            auStack_e0._4_4_ = _LC0;
            auStack_e0._0_4_ = _LC0;
            String::parse_latin1(local_1a0);
            RenderingDevice::draw_command_begin_label(uVar22,local_1a0,&local_e8);
            pSVar9 = local_140;
            if (local_140 != (StringName *)0x0) {
              LOCK();
              pSVar1 = local_140 + -0x10;
              *(long *)pSVar1 = *(long *)pSVar1 + -1;
              UNLOCK();
              if (*(long *)pSVar1 == 0) {
                local_140 = (StringName *)0x0;
                Memory::free_static(pSVar9 + -0x10,false);
              }
            }
            local_1d8 = &local_e8;
            RenderSceneBuffersRD::allocate_blur_textures();
            auStack_e0 = (undefined1  [16])0x0;
            local_e8 = local_180;
            local_d0 = (undefined1  [16])0x0;
            local_c0 = (undefined1  [16])0x0;
            local_b0 = (undefined1  [16])0x0;
            local_a0 = (undefined1  [16])0x0;
            local_90 = (undefined1  [16])0x0;
            local_80 = (undefined1  [16])0x0;
            if ((_render_buffers_post_process_and_tonemap(RenderDataRD_const*)::{lambda()#2}::
                 operator()()::sname == '\0') &&
               (iVar13 = __cxa_guard_acquire(&_render_buffers_post_process_and_tonemap(RenderDataRD_const*)
                                              ::{lambda()#2}::operator()()::sname), iVar13 != 0)) {
              _scs_create((char *)&_render_buffers_post_process_and_tonemap(RenderDataRD_const*)::
                                   {lambda()#2}::operator()()::sname,true);
              __cxa_atexit(StringName::~StringName,
                           &_render_buffers_post_process_and_tonemap(RenderDataRD_const*)::
                            {lambda()#2}::operator()()::sname,&__dso_handle);
              __cxa_guard_release(&_render_buffers_post_process_and_tonemap(RenderDataRD_const*)::
                                   {lambda()#2}::operator()()::sname);
            }
            if ((_render_buffers_post_process_and_tonemap(RenderDataRD_const*)::{lambda()#1}::
                 operator()()::sname == '\0') &&
               (iVar13 = __cxa_guard_acquire(&_render_buffers_post_process_and_tonemap(RenderDataRD_const*)
                                              ::{lambda()#1}::operator()()::sname), iVar13 != 0)) {
              _scs_create((char *)&_render_buffers_post_process_and_tonemap(RenderDataRD_const*)::
                                   {lambda()#1}::operator()()::sname,true);
              __cxa_atexit(StringName::~StringName,
                           &_render_buffers_post_process_and_tonemap(RenderDataRD_const*)::
                            {lambda()#1}::operator()()::sname,&__dso_handle);
              __cxa_guard_release(&_render_buffers_post_process_and_tonemap(RenderDataRD_const*)::
                                   {lambda()#1}::operator()()::sname);
            }
            uVar22 = RenderSceneBuffersRD::get_texture_slice
                               (pSVar4,(StringName *)
                                       &_render_buffers_post_process_and_tonemap(RenderDataRD_const*)
                                        ::{lambda()#1}::operator()()::sname,0x10d000,0,0,1);
            local_d0._0_8_ = uVar22;
            if ((_render_buffers_post_process_and_tonemap(RenderDataRD_const*)::{lambda()#4}::
                 operator()()::sname == '\0') &&
               (iVar13 = __cxa_guard_acquire(&_render_buffers_post_process_and_tonemap(RenderDataRD_const*)
                                              ::{lambda()#4}::operator()()::sname), iVar13 != 0)) {
              _scs_create((char *)&_render_buffers_post_process_and_tonemap(RenderDataRD_const*)::
                                   {lambda()#4}::operator()()::sname,true);
              __cxa_atexit(StringName::~StringName,
                           &_render_buffers_post_process_and_tonemap(RenderDataRD_const*)::
                            {lambda()#4}::operator()()::sname,&__dso_handle);
              __cxa_guard_release(&_render_buffers_post_process_and_tonemap(RenderDataRD_const*)::
                                   {lambda()#4}::operator()()::sname);
            }
            if ((_render_buffers_post_process_and_tonemap(RenderDataRD_const*)::{lambda()#3}::
                 operator()()::sname == '\0') &&
               (iVar13 = __cxa_guard_acquire(&_render_buffers_post_process_and_tonemap(RenderDataRD_const*)
                                              ::{lambda()#3}::operator()()::sname), iVar13 != 0)) {
              _scs_create((char *)&_render_buffers_post_process_and_tonemap(RenderDataRD_const*)::
                                   {lambda()#3}::operator()()::sname,true);
              __cxa_atexit(StringName::~StringName,
                           &_render_buffers_post_process_and_tonemap(RenderDataRD_const*)::
                            {lambda()#3}::operator()()::sname,&__dso_handle);
              __cxa_guard_release(&_render_buffers_post_process_and_tonemap(RenderDataRD_const*)::
                                   {lambda()#3}::operator()()::sname);
            }
            uVar22 = RenderSceneBuffersRD::get_texture_slice
                               (pSVar4,(StringName *)
                                       &_render_buffers_post_process_and_tonemap(RenderDataRD_const*)
                                        ::{lambda()#3}::operator()()::sname,0x10cfe0,0,0,1);
            local_d0._8_8_ = uVar22;
            if ((_render_buffers_post_process_and_tonemap(RenderDataRD_const*)::{lambda()#6}::
                 operator()()::sname == '\0') &&
               (iVar13 = __cxa_guard_acquire(&_render_buffers_post_process_and_tonemap(RenderDataRD_const*)
                                              ::{lambda()#6}::operator()()::sname), iVar13 != 0)) {
              _scs_create((char *)&_render_buffers_post_process_and_tonemap(RenderDataRD_const*)::
                                   {lambda()#6}::operator()()::sname,true);
              __cxa_atexit(StringName::~StringName,
                           &_render_buffers_post_process_and_tonemap(RenderDataRD_const*)::
                            {lambda()#6}::operator()()::sname,&__dso_handle);
              __cxa_guard_release(&_render_buffers_post_process_and_tonemap(RenderDataRD_const*)::
                                   {lambda()#6}::operator()()::sname);
            }
            if ((_render_buffers_post_process_and_tonemap(RenderDataRD_const*)::{lambda()#5}::
                 operator()()::sname == '\0') &&
               (iVar13 = __cxa_guard_acquire(&_render_buffers_post_process_and_tonemap(RenderDataRD_const*)
                                              ::{lambda()#5}::operator()()::sname), iVar13 != 0)) {
              _scs_create((char *)&_render_buffers_post_process_and_tonemap(RenderDataRD_const*)::
                                   {lambda()#5}::operator()()::sname,true);
              __cxa_atexit(StringName::~StringName,
                           &_render_buffers_post_process_and_tonemap(RenderDataRD_const*)::
                            {lambda()#5}::operator()()::sname,&__dso_handle);
              __cxa_guard_release(&_render_buffers_post_process_and_tonemap(RenderDataRD_const*)::
                                   {lambda()#5}::operator()()::sname);
            }
            uVar22 = RenderSceneBuffersRD::get_texture_slice
                               (pSVar4,(StringName *)
                                       &_render_buffers_post_process_and_tonemap(RenderDataRD_const*)
                                        ::{lambda()#5}::operator()()::sname,0x10cfc0,0,1,1);
            local_c0._0_8_ = uVar22;
            if (local_185 == '\0') {
              local_b0._8_8_ = *(undefined8 *)(pSVar4 + 0x350);
              local_b0._0_8_ = *(undefined8 *)(pSVar4 + 0x340);
              local_90._8_8_ = *(undefined8 *)(pSVar4 + 0x338);
              local_90._0_8_ = *(undefined8 *)(pSVar4 + 0x328);
              local_80._8_8_ = *(undefined8 *)(pSVar4 + 0x358);
              local_80._0_8_ = *(undefined8 *)(pSVar4 + 0x348);
              local_a0._8_8_ = *(undefined8 *)(pSVar4 + 0x330);
              local_a0._0_8_ = *(undefined8 *)(pSVar4 + 0x360);
              if (*(int *)(pSVar4 + 0x1a8) != 0) {
                uVar25 = 0;
                do {
                  if (cVar11 == '\0') {
                    if ((RenderSceneBuffersRD::get_internal_texture(unsigned_int)::{lambda()#2}::
                         operator()()::sname == '\0') &&
                       (iVar13 = __cxa_guard_acquire(&RenderSceneBuffersRD::
                                                      get_internal_texture(unsigned_int)::
                                                      {lambda()#2}::operator()()::sname),
                       iVar13 != 0)) {
                      _scs_create((char *)&RenderSceneBuffersRD::get_internal_texture(unsigned_int)
                                           ::{lambda()#2}::operator()()::sname,true);
                      __cxa_atexit(StringName::~StringName,
                                   &RenderSceneBuffersRD::get_internal_texture(unsigned_int)::
                                    {lambda()#2}::operator()()::sname,&__dso_handle);
                      __cxa_guard_release(&RenderSceneBuffersRD::get_internal_texture(unsigned_int)
                                           ::{lambda()#2}::operator()()::sname);
                    }
                    if ((RenderSceneBuffersRD::get_internal_texture(unsigned_int)::{lambda()#1}::
                         operator()()::sname == '\0') &&
                       (iVar13 = __cxa_guard_acquire(&RenderSceneBuffersRD::
                                                      get_internal_texture(unsigned_int)::
                                                      {lambda()#1}::operator()()::sname),
                       iVar13 != 0)) {
                      _scs_create((char *)&RenderSceneBuffersRD::get_internal_texture(unsigned_int)
                                           ::{lambda()#1}::operator()()::sname,true);
                      __cxa_atexit(StringName::~StringName,
                                   &RenderSceneBuffersRD::get_internal_texture(unsigned_int)::
                                    {lambda()#1}::operator()()::sname,&__dso_handle);
                      __cxa_guard_release(&RenderSceneBuffersRD::get_internal_texture(unsigned_int)
                                           ::{lambda()#1}::operator()()::sname);
                    }
                    uVar22 = RenderSceneBuffersRD::get_texture_slice
                                       (pSVar4,(StringName *)
                                               &RenderSceneBuffersRD::
                                                get_internal_texture(unsigned_int)::{lambda()#1}::
                                                operator()()::sname,0x113360,uVar25,0,1);
                  }
                  else {
                    if ((RenderSceneBuffersRD::get_upscaled_texture(unsigned_int)::{lambda()#2}::
                         operator()()::sname == '\0') &&
                       (iVar13 = __cxa_guard_acquire(&RenderSceneBuffersRD::
                                                      get_upscaled_texture(unsigned_int)::
                                                      {lambda()#2}::operator()()::sname),
                       iVar13 != 0)) {
                      _scs_create((char *)&RenderSceneBuffersRD::get_upscaled_texture(unsigned_int)
                                           ::{lambda()#2}::operator()()::sname,true);
                      __cxa_atexit(StringName::~StringName,
                                   &RenderSceneBuffersRD::get_upscaled_texture(unsigned_int)::
                                    {lambda()#2}::operator()()::sname,&__dso_handle);
                      __cxa_guard_release(&RenderSceneBuffersRD::get_upscaled_texture(unsigned_int)
                                           ::{lambda()#2}::operator()()::sname);
                    }
                    if ((RenderSceneBuffersRD::get_upscaled_texture(unsigned_int)::{lambda()#1}::
                         operator()()::sname == '\0') &&
                       (iVar13 = __cxa_guard_acquire(&RenderSceneBuffersRD::
                                                      get_upscaled_texture(unsigned_int)::
                                                      {lambda()#1}::operator()()::sname),
                       iVar13 != 0)) {
                      _scs_create((char *)&RenderSceneBuffersRD::get_upscaled_texture(unsigned_int)
                                           ::{lambda()#1}::operator()()::sname,true);
                      __cxa_atexit(StringName::~StringName,
                                   &RenderSceneBuffersRD::get_upscaled_texture(unsigned_int)::
                                    {lambda()#1}::operator()()::sname,&__dso_handle);
                      __cxa_guard_release(&RenderSceneBuffersRD::get_upscaled_texture(unsigned_int)
                                           ::{lambda()#1}::operator()()::sname);
                    }
                    uVar22 = RenderSceneBuffersRD::get_texture_slice
                                       (pSVar4,(StringName *)
                                               &RenderSceneBuffersRD::
                                                get_upscaled_texture(unsigned_int)::{lambda()#1}::
                                                operator()()::sname,0x113300,uVar25,0,1);
                  }
                  auStack_e0._0_8_ = uVar22;
                  uVar22 = RenderSceneBuffersRD::get_depth_texture((uint)pSVar4);
                  auStack_e0._8_8_ = uVar22;
                  uVar25 = uVar25 + 1;
                  uVar22 = FramebufferCacheRD::get_cache<RID>
                                     (FramebufferCacheRD::singleton,auStack_e0._0_8_);
                  local_c0._8_8_ = uVar22;
                  uVar14 = Projection::get_z_near();
                  uVar29 = Projection::get_z_far();
                  RendererRD::BokehDOF::bokeh_dof_raster
                            (uVar14,uVar29,*(undefined8 *)(this + 0x130),local_1d8,
                             *(undefined8 *)(param_1 + 0x1c8),
                             *(undefined1 *)(*(long *)(param_1 + 0x180) + 500));
                } while (uVar25 < *(uint *)(pSVar4 + 0x1a8));
              }
            }
            else {
              uVar25 = 0;
              if (*(int *)(pSVar4 + 0x1a8) != 0) {
                do {
                  if (cVar11 == '\0') {
                    if ((RenderSceneBuffersRD::get_internal_texture(unsigned_int)::{lambda()#2}::
                         operator()()::sname == '\0') &&
                       (iVar13 = __cxa_guard_acquire(&RenderSceneBuffersRD::
                                                      get_internal_texture(unsigned_int)::
                                                      {lambda()#2}::operator()()::sname),
                       iVar13 != 0)) {
                      _scs_create((char *)&RenderSceneBuffersRD::get_internal_texture(unsigned_int)
                                           ::{lambda()#2}::operator()()::sname,true);
                      __cxa_atexit(StringName::~StringName,
                                   &RenderSceneBuffersRD::get_internal_texture(unsigned_int)::
                                    {lambda()#2}::operator()()::sname,&__dso_handle);
                      __cxa_guard_release(&RenderSceneBuffersRD::get_internal_texture(unsigned_int)
                                           ::{lambda()#2}::operator()()::sname);
                    }
                    if ((RenderSceneBuffersRD::get_internal_texture(unsigned_int)::{lambda()#1}::
                         operator()()::sname == '\0') &&
                       (iVar13 = __cxa_guard_acquire(&RenderSceneBuffersRD::
                                                      get_internal_texture(unsigned_int)::
                                                      {lambda()#1}::operator()()::sname),
                       iVar13 != 0)) {
                      _scs_create((char *)&RenderSceneBuffersRD::get_internal_texture(unsigned_int)
                                           ::{lambda()#1}::operator()()::sname,true);
                      __cxa_atexit(StringName::~StringName,
                                   &RenderSceneBuffersRD::get_internal_texture(unsigned_int)::
                                    {lambda()#1}::operator()()::sname,&__dso_handle);
                      __cxa_guard_release(&RenderSceneBuffersRD::get_internal_texture(unsigned_int)
                                           ::{lambda()#1}::operator()()::sname);
                    }
                    uVar22 = RenderSceneBuffersRD::get_texture_slice
                                       (pSVar4,(StringName *)
                                               &RenderSceneBuffersRD::
                                                get_internal_texture(unsigned_int)::{lambda()#1}::
                                                operator()()::sname,0x113360,uVar25,0,1);
                  }
                  else {
                    if ((RenderSceneBuffersRD::get_upscaled_texture(unsigned_int)::{lambda()#2}::
                         operator()()::sname == '\0') &&
                       (iVar13 = __cxa_guard_acquire(&RenderSceneBuffersRD::
                                                      get_upscaled_texture(unsigned_int)::
                                                      {lambda()#2}::operator()()::sname),
                       iVar13 != 0)) {
                      _scs_create((char *)&RenderSceneBuffersRD::get_upscaled_texture(unsigned_int)
                                           ::{lambda()#2}::operator()()::sname,true);
                      __cxa_atexit(StringName::~StringName,
                                   &RenderSceneBuffersRD::get_upscaled_texture(unsigned_int)::
                                    {lambda()#2}::operator()()::sname,&__dso_handle);
                      __cxa_guard_release(&RenderSceneBuffersRD::get_upscaled_texture(unsigned_int)
                                           ::{lambda()#2}::operator()()::sname);
                    }
                    if ((RenderSceneBuffersRD::get_upscaled_texture(unsigned_int)::{lambda()#1}::
                         operator()()::sname == '\0') &&
                       (iVar13 = __cxa_guard_acquire(&RenderSceneBuffersRD::
                                                      get_upscaled_texture(unsigned_int)::
                                                      {lambda()#1}::operator()()::sname),
                       iVar13 != 0)) {
                      _scs_create((char *)&RenderSceneBuffersRD::get_upscaled_texture(unsigned_int)
                                           ::{lambda()#1}::operator()()::sname,true);
                      __cxa_atexit(StringName::~StringName,
                                   &RenderSceneBuffersRD::get_upscaled_texture(unsigned_int)::
                                    {lambda()#1}::operator()()::sname,&__dso_handle);
                      __cxa_guard_release(&RenderSceneBuffersRD::get_upscaled_texture(unsigned_int)
                                           ::{lambda()#1}::operator()()::sname);
                    }
                    uVar22 = RenderSceneBuffersRD::get_texture_slice
                                       (pSVar4,(StringName *)
                                               &RenderSceneBuffersRD::
                                                get_upscaled_texture(unsigned_int)::{lambda()#1}::
                                                operator()()::sname,0x113300,uVar25,0,1);
                  }
                  auStack_e0._0_8_ = uVar22;
                  uVar22 = RenderSceneBuffersRD::get_depth_texture((uint)pSVar4);
                  uVar25 = uVar25 + 1;
                  auStack_e0._8_8_ = uVar22;
                  uVar14 = Projection::get_z_near();
                  uVar29 = Projection::get_z_far();
                  RendererRD::BokehDOF::bokeh_dof_compute
                            (uVar14,uVar29,*(undefined8 *)(this + 0x130),local_1d8,
                             *(undefined8 *)(param_1 + 0x1c8),
                             *(undefined1 *)(*(long *)(param_1 + 0x180) + 500));
                } while (uVar25 < *(uint *)(pSVar4 + 0x1a8));
              }
            }
            RenderingDevice::get_singleton();
            uVar32 = 0x10b32d;
            RenderingDevice::draw_command_end_label();
            uVar23 = extraout_RDX_05;
          }
          else {
            uVar23 = (ulong)(uVar25 + 0x80000000);
            if (0x7ffffffe < uVar25 + 0x80000000) goto LAB_00108957;
            _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                             "Method/function failed. Returning: nullptr",
                             "Attempting to use an uninitialized RID",0,0);
            uVar23 = extraout_RDX_02;
LAB_0010a7f8:
            uStack_18c = _LC0;
          }
        }
        else {
LAB_00108957:
          uStack_18c = _LC0;
        }
        plVar2 = RenderingServerGlobals::utilities;
        local_1a0 = (StrRange *)&local_140;
        local_1e0 = (CowData<char32_t> *)&local_138;
        local_1d8 = &local_e8;
        uVar5 = *(ulong *)(param_1 + 0x1c8);
        if (uVar5 == 0) goto LAB_00109c30;
        uVar23 = (ulong)*(uint *)(RenderingServerGlobals::camera_attributes + 0x2c);
        if (*(uint *)(RenderingServerGlobals::camera_attributes + 0x2c) <= (uint)uVar5)
        goto LAB_00109c30;
        lVar24 = ((uVar5 & 0xffffffff) %
                 (ulong)*(uint *)(RenderingServerGlobals::camera_attributes + 0x28)) * 0x50 +
                 *(long *)(*(long *)(RenderingServerGlobals::camera_attributes + 0x18) +
                          ((uVar5 & 0xffffffff) /
                          (ulong)*(uint *)(RenderingServerGlobals::camera_attributes + 0x28)) * 8);
        uVar25 = *(uint *)(lVar24 + 0x48);
        uVar23 = (ulong)uVar25;
        if (uVar25 != (uint)(uVar5 >> 0x20)) {
          uVar23 = (ulong)(uVar25 + 0x80000000);
          if (uVar25 + 0x80000000 < 0x7fffffff) {
            uVar23 = uVar32;
            _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                             "Method/function failed. Returning: nullptr",
                             "Attempting to use an uninitialized RID",0,0);
          }
          goto LAB_00109c30;
        }
        if (*(char *)(lVar24 + 0xc) == '\0') goto LAB_00109c30;
        if ((char)RenderingServerGlobals::utilities[1] != '\0') {
          pcVar6 = *(code **)(*RenderingServerGlobals::utilities + 0x68);
          local_138 = (StringName *)0x10e3a4;
          local_140 = (StringName *)0x0;
          local_130 = 0xd;
          String::parse_latin1(local_1a0);
          (*pcVar6)(plVar2);
          pSVar9 = local_140;
          if (local_140 != (StringName *)0x0) {
            LOCK();
            pSVar1 = local_140 + -0x10;
            *(long *)pSVar1 = *(long *)pSVar1 + -1;
            UNLOCK();
            if (*(long *)pSVar1 == 0) {
              local_140 = (StringName *)0x0;
              Memory::free_static(pSVar9 + -0x10,false);
            }
          }
        }
        uVar22 = RenderingDevice::get_singleton();
        auVar31 = auStack_e0;
        local_e8 = CONCAT44(uStack_18c,uStack_18c);
        auStack_e0._4_4_ = uStack_18c;
        auStack_e0._0_4_ = uStack_18c;
        local_140 = (StringName *)0x0;
        local_138 = (StringName *)0x10e3a4;
        auStack_e0._8_8_ = auVar31._8_8_;
        local_130 = 0xd;
        String::parse_latin1(local_1a0);
        RenderingDevice::draw_command_begin_label(uVar22,local_1a0,local_1d8);
        pSVar9 = local_140;
        if (local_140 == (StringName *)0x0) {
LAB_00108a6e:
          uVar22 = *(undefined8 *)(this + 0x148);
        }
        else {
          LOCK();
          pSVar1 = local_140 + -0x10;
          *(long *)pSVar1 = *(long *)pSVar1 + -1;
          UNLOCK();
          if (*(long *)pSVar1 != 0) goto LAB_00108a6e;
          local_140 = (StringName *)0x0;
          Memory::free_static(pSVar9 + -0x10,false);
          uVar22 = *(undefined8 *)(this + 0x148);
        }
        local_138 = pSVar4;
        cVar11 = RefCounted::reference();
        if (cVar11 == '\0') {
          local_138 = (StringName *)0x0;
        }
        RendererRD::Luminance::get_luminance_buffers(local_1a0,uVar22,local_1e0);
        if (((local_138 != (StringName *)0x0) &&
            (cVar11 = RefCounted::unreference(), pSVar9 = local_138, cVar11 != '\0')) &&
           (cVar11 = predelete_handler((Object *)local_138), cVar11 != '\0')) {
          (**(code **)(*(long *)pSVar9 + 0x140))(pSVar9);
          Memory::free_static(pSVar9,false);
        }
        uVar22 = RendererCameraAttributes::camera_attributes_get_auto_exposure_version
                           (RenderingServerGlobals::camera_attributes,
                            *(undefined8 *)(param_1 + 0x1c8));
        lVar24 = RenderingServerGlobals::camera_attributes;
        *(undefined8 *)(pSVar4 + 400) = uVar22;
        RendererCameraAttributes::camera_attributes_get_auto_exposure_adjust_speed
                  (lVar24,*(undefined8 *)(param_1 + 0x1c8));
        RendererCameraAttributes::camera_attributes_get_auto_exposure_min_sensitivity
                  (RenderingServerGlobals::camera_attributes,*(undefined8 *)(param_1 + 0x1c8));
        RendererCameraAttributes::camera_attributes_get_auto_exposure_max_sensitivity
                  (RenderingServerGlobals::camera_attributes,*(undefined8 *)(param_1 + 0x1c8));
        local_138 = (StringName *)0x0;
        uVar22 = *(undefined8 *)(this + 0x148);
        if (local_140 != (StringName *)0x0) {
          local_138 = local_140;
          cVar11 = RefCounted::reference();
          if (cVar11 == '\0') {
            local_138 = (StringName *)0x0;
          }
        }
        uVar18 = *(undefined8 *)(pSVar4 + 0x1ac);
        if ((const::{lambda()#2}::operator()()::sname == '\0') &&
           (iVar13 = __cxa_guard_acquire(&const::{lambda()#2}::operator()()::sname), iVar13 != 0)) {
          _scs_create((char *)&const::{lambda()#2}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,&const::{lambda()#2}::operator()()::sname,
                       &__dso_handle);
          __cxa_guard_release(&const::{lambda()#2}::operator()()::sname);
        }
        if ((const::{lambda()#1}::operator()()::sname == '\0') &&
           (iVar13 = __cxa_guard_acquire(&const::{lambda()#1}::operator()()::sname), iVar13 != 0)) {
          _scs_create((char *)&const::{lambda()#1}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,&const::{lambda()#1}::operator()()::sname,
                       &__dso_handle);
          __cxa_guard_release(&const::{lambda()#1}::operator()()::sname);
        }
        uVar17 = RenderSceneBuffersRD::get_texture
                           (pSVar4,(StringName *)&const::{lambda()#1}::operator()()::sname);
        RendererRD::Luminance::luminance_reduction(uVar22,uVar17,uVar18);
        if (((local_138 != (StringName *)0x0) &&
            (cVar11 = RefCounted::unreference(), pSVar9 = local_138, cVar11 != '\0')) &&
           (cVar11 = predelete_handler((Object *)local_138), cVar11 != '\0')) {
          (**(code **)(*(long *)pSVar9 + 0x140))(pSVar9);
          Memory::free_static(pSVar9,false);
        }
        local_184 = RendererCameraAttributes::camera_attributes_get_auto_exposure_scale
                              (RenderingServerGlobals::camera_attributes);
        RenderingServerDefault::changes._0_4_ = (int)RenderingServerDefault::changes + 1;
        RenderingDevice::get_singleton();
        RenderingDevice::draw_command_end_label();
        uVar23 = extraout_RDX_00;
        if (((local_140 != (StringName *)0x0) &&
            (cVar11 = RefCounted::unreference(), pSVar9 = local_140, uVar23 = extraout_RDX_01,
            cVar11 != '\0')) &&
           (cVar11 = predelete_handler((Object *)local_140), uVar23 = extraout_RDX_03,
           cVar11 != '\0')) {
          (**(code **)(*(long *)pSVar9 + 0x140))(pSVar9);
          Memory::free_static(pSVar9,false);
          uVar23 = extraout_RDX_04;
        }
        lVar24 = *(long *)(param_1 + 0x1c0);
      }
      uVar25 = _LC0;
      if (lVar24 != 0) {
        local_1a0 = (StrRange *)&local_140;
        local_1e0 = (CowData<char32_t> *)&local_138;
        local_1d8 = &local_e8;
        cVar11 = RendererSceneRender::environment_get_glow_enabled
                           (this,*(undefined8 *)(param_1 + 0x1c0),uVar23);
        plVar2 = RenderingServerGlobals::utilities;
        uVar25 = _LC0;
        if (cVar11 != '\0') {
          if ((char)RenderingServerGlobals::utilities[1] != '\0') {
            pcVar6 = *(code **)(*RenderingServerGlobals::utilities + 0x68);
            local_140 = (StringName *)0x0;
            local_138 = (StringName *)&_LC163;
            local_130 = 4;
            String::parse_latin1(local_1a0);
            (*pcVar6)(plVar2);
            pSVar9 = local_140;
            if (local_140 != (StringName *)0x0) {
              LOCK();
              pSVar1 = local_140 + -0x10;
              *(long *)pSVar1 = *(long *)pSVar1 + -1;
              UNLOCK();
              if (*(long *)pSVar1 == 0) {
                local_140 = (StringName *)0x0;
                Memory::free_static(pSVar9 + -0x10,false);
              }
            }
          }
          uVar22 = RenderingDevice::get_singleton();
          auVar31 = auStack_e0;
          local_e8 = CONCAT44(uStack_18c,uStack_18c);
          auStack_e0._4_4_ = uStack_18c;
          auStack_e0._0_4_ = uStack_18c;
          local_140 = (StringName *)0x0;
          local_130 = 0xd;
          local_138 = (StringName *)0x10e3b7;
          auStack_e0._8_8_ = auVar31._8_8_;
          String::parse_latin1(local_1a0);
          RenderingDevice::draw_command_begin_label(uVar22,local_1a0,local_1d8);
          pSVar9 = local_140;
          if (local_140 != (StringName *)0x0) {
            LOCK();
            pSVar1 = local_140 + -0x10;
            *(long *)pSVar1 = *(long *)pSVar1 + -1;
            UNLOCK();
            if (*(long *)pSVar1 == 0) {
              local_140 = (StringName *)0x0;
              Memory::free_static(pSVar9 + -0x10,false);
            }
          }
          lVar24 = 0;
          iVar13 = -1;
          RenderSceneBuffersRD::allocate_blur_textures();
          do {
            RendererSceneRender::environment_get_glow_levels
                      (local_1e0,this,*(undefined8 *)(param_1 + 0x1c0));
            lVar10 = local_130;
            if (local_130 == 0) {
              lVar26 = 0;
              goto LAB_0010be15;
            }
            lVar26 = *(long *)(local_130 + -8);
            if (lVar26 <= lVar24) goto LAB_0010be15;
            fVar3 = *(float *)(local_130 + lVar24 * 4);
            LOCK();
            plVar2 = (long *)(local_130 + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              local_130 = 0;
              Memory::free_static((void *)(lVar10 + -0x10),false);
            }
            if (0.0 < fVar3) {
              if ((_render_buffers_post_process_and_tonemap(RenderDataRD_const*)::{lambda()#8}::
                   operator()()::sname == '\0') &&
                 (iVar13 = __cxa_guard_acquire(&_render_buffers_post_process_and_tonemap(RenderDataRD_const*)
                                                ::{lambda()#8}::operator()()::sname), iVar13 != 0))
              {
                _scs_create((char *)&_render_buffers_post_process_and_tonemap(RenderDataRD_const*)::
                                     {lambda()#8}::operator()()::sname,true);
                __cxa_atexit(StringName::~StringName,
                             &_render_buffers_post_process_and_tonemap(RenderDataRD_const*)::
                              {lambda()#8}::operator()()::sname,&__dso_handle);
                __cxa_guard_release(&_render_buffers_post_process_and_tonemap(RenderDataRD_const*)::
                                     {lambda()#8}::operator()()::sname);
              }
              if ((_render_buffers_post_process_and_tonemap(RenderDataRD_const*)::{lambda()#7}::
                   operator()()::sname == '\0') &&
                 (iVar13 = __cxa_guard_acquire(&_render_buffers_post_process_and_tonemap(RenderDataRD_const*)
                                                ::{lambda()#7}::operator()()::sname), iVar13 != 0))
              {
                _scs_create((char *)&_render_buffers_post_process_and_tonemap(RenderDataRD_const*)::
                                     {lambda()#7}::operator()()::sname,true);
                __cxa_atexit(StringName::~StringName,
                             &_render_buffers_post_process_and_tonemap(RenderDataRD_const*)::
                              {lambda()#7}::operator()()::sname,&__dso_handle);
                __cxa_guard_release(&_render_buffers_post_process_and_tonemap(RenderDataRD_const*)::
                                     {lambda()#7}::operator()()::sname);
              }
              RenderSceneBuffersRD::get_texture_format((StringName *)local_1e0,pSVar4);
              lVar10 = local_108;
              iVar15 = local_124;
              if (local_108 != 0) {
                LOCK();
                plVar2 = (long *)(local_108 + -0x10);
                *plVar2 = *plVar2 + -1;
                UNLOCK();
                if (*plVar2 == 0) {
                  local_108 = 0;
                  Memory::free_static((void *)(lVar10 + -0x10),false);
                }
              }
              iVar13 = iVar15 + -1;
              if ((int)lVar24 < iVar15) {
                iVar13 = (int)lVar24;
              }
            }
            uVar25 = _LC0;
            lVar24 = lVar24 + 1;
          } while (lVar24 != 7);
          if (*(code **)(*(long *)this + 0x248) != _render_buffers_get_luminance_multiplier) {
            (**(code **)(*(long *)this + 0x248))(this);
          }
          uVar19 = 0;
          if (*(int *)(pSVar4 + 0x1a8) != 0) {
            do {
              if (-1 < iVar13) goto LAB_00109e20;
              uVar19 = uVar19 + 1;
            } while (uVar19 < *(uint *)(pSVar4 + 0x1a8));
          }
          goto LAB_0010a211;
        }
      }
    }
    else {
      local_184 = _LC0;
      uStack_18c = _LC0;
      uVar25 = _LC0;
    }
    goto LAB_00108dd1;
  }
  _err_print_error("_render_buffers_post_process_and_tonemap",
                   "servers/rendering/renderer_rd/renderer_scene_render_rd.cpp",0x1a7,
                   "Condition \"p_render_data->reflection_probe.is_valid()\" is true.",
                   "Post processes should not be applied on reflection probes.",0,0);
  cVar11 = RefCounted::unreference();
  goto joined_r0x001094f8;
LAB_00109e20:
  do {
    uVar27 = 0;
    do {
      while( true ) {
        if ((_render_buffers_post_process_and_tonemap(RenderDataRD_const*)::{lambda()#10}::
             operator()()::sname == '\0') &&
           (iVar15 = __cxa_guard_acquire(&_render_buffers_post_process_and_tonemap(RenderDataRD_const*)
                                          ::{lambda()#10}::operator()()::sname), iVar15 != 0)) {
          _scs_create((char *)&_render_buffers_post_process_and_tonemap(RenderDataRD_const*)::
                               {lambda()#10}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &_render_buffers_post_process_and_tonemap(RenderDataRD_const*)::{lambda()#10}
                        ::operator()()::sname,&__dso_handle);
          __cxa_guard_release(&_render_buffers_post_process_and_tonemap(RenderDataRD_const*)::
                               {lambda()#10}::operator()()::sname);
        }
        if ((_render_buffers_post_process_and_tonemap(RenderDataRD_const*)::{lambda()#9}::
             operator()()::sname == '\0') &&
           (iVar15 = __cxa_guard_acquire(&_render_buffers_post_process_and_tonemap(RenderDataRD_const*)
                                          ::{lambda()#9}::operator()()::sname), iVar15 != 0)) {
          _scs_create((char *)&_render_buffers_post_process_and_tonemap(RenderDataRD_const*)::
                               {lambda()#9}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &_render_buffers_post_process_and_tonemap(RenderDataRD_const*)::{lambda()#9}
                        ::operator()()::sname,&__dso_handle);
          __cxa_guard_release(&_render_buffers_post_process_and_tonemap(RenderDataRD_const*)::
                               {lambda()#9}::operator()()::sname);
        }
        uVar22 = 0x10a0c8;
        local_e8 = RenderSceneBuffersRD::get_texture_slice_size
                             (pSVar4,(StringName *)
                                     &_render_buffers_post_process_and_tonemap(RenderDataRD_const*)
                                      ::{lambda()#9}::operator()()::sname,0x10cf80);
        if (uVar27 != 0) break;
        uVar32 = *(ulong *)(param_1 + 0x1c8);
        local_1c0 = 0;
        if ((uVar32 != 0) &&
           ((uint)uVar32 < *(uint *)(RenderingServerGlobals::camera_attributes + 0x2c))) {
          lVar24 = ((uVar32 & 0xffffffff) %
                   (ulong)*(uint *)(RenderingServerGlobals::camera_attributes + 0x28)) * 0x50 +
                   *(long *)(*(long *)(RenderingServerGlobals::camera_attributes + 0x18) +
                            ((uVar32 & 0xffffffff) /
                            (ulong)*(uint *)(RenderingServerGlobals::camera_attributes + 0x28)) * 8)
          ;
          iVar15 = *(int *)(lVar24 + 0x48);
          if (iVar15 == (int)(uVar32 >> 0x20)) {
            if (*(char *)(lVar24 + 0xc) != '\0') {
              uVar22 = *(undefined8 *)(this + 0x148);
              local_138 = pSVar4;
              cVar11 = RefCounted::reference();
              if (cVar11 == '\0') {
                local_138 = (StringName *)0x0;
              }
              local_1c0 = RendererRD::Luminance::get_current_luminance_buffer(uVar22);
              if (((local_138 != (StringName *)0x0) &&
                  (cVar11 = RefCounted::unreference(), pSVar9 = local_138, cVar11 != '\0')) &&
                 (cVar11 = predelete_handler((Object *)local_138), cVar11 != '\0')) {
                (**(code **)(*(long *)pSVar9 + 0x140))(pSVar9);
                Memory::free_static(pSVar9,false);
              }
            }
          }
          else if (iVar15 + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                             "Method/function failed. Returning: nullptr",
                             "Attempting to use an uninitialized RID",0,0);
          }
        }
        if ((RenderSceneBuffersRD::get_internal_texture(unsigned_int)::{lambda()#2}::operator()()::
             sname == '\0') &&
           (iVar15 = __cxa_guard_acquire(&RenderSceneBuffersRD::get_internal_texture(unsigned_int)::
                                          {lambda()#2}::operator()()::sname), iVar15 != 0)) {
          _scs_create((char *)&RenderSceneBuffersRD::get_internal_texture(unsigned_int)::
                               {lambda()#2}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &RenderSceneBuffersRD::get_internal_texture(unsigned_int)::{lambda()#2}::
                        operator()()::sname,&__dso_handle);
          __cxa_guard_release(&RenderSceneBuffersRD::get_internal_texture(unsigned_int)::
                               {lambda()#2}::operator()()::sname);
        }
        if ((RenderSceneBuffersRD::get_internal_texture(unsigned_int)::{lambda()#1}::operator()()::
             sname == '\0') &&
           (iVar15 = __cxa_guard_acquire(&RenderSceneBuffersRD::get_internal_texture(unsigned_int)::
                                          {lambda()#1}::operator()()::sname), iVar15 != 0)) {
          _scs_create((char *)&RenderSceneBuffersRD::get_internal_texture(unsigned_int)::
                               {lambda()#1}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &RenderSceneBuffersRD::get_internal_texture(unsigned_int)::{lambda()#1}::
                        operator()()::sname,&__dso_handle);
          __cxa_guard_release(&RenderSceneBuffersRD::get_internal_texture(unsigned_int)::
                               {lambda()#1}::operator()()::sname);
        }
        uVar22 = RenderSceneBuffersRD::get_texture_slice
                           (pSVar4,(StringName *)
                                   &RenderSceneBuffersRD::get_internal_texture(unsigned_int)::
                                    {lambda()#1}::operator()()::sname,0x113360,uVar19,0,1);
        if ((_render_buffers_post_process_and_tonemap(RenderDataRD_const*)::{lambda()#12}::
             operator()()::sname == '\0') &&
           (iVar15 = __cxa_guard_acquire(&_render_buffers_post_process_and_tonemap(RenderDataRD_const*)
                                          ::{lambda()#12}::operator()()::sname), iVar15 != 0)) {
          _scs_create((char *)&_render_buffers_post_process_and_tonemap(RenderDataRD_const*)::
                               {lambda()#12}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &_render_buffers_post_process_and_tonemap(RenderDataRD_const*)::{lambda()#12}
                        ::operator()()::sname,&__dso_handle);
          __cxa_guard_release(&_render_buffers_post_process_and_tonemap(RenderDataRD_const*)::
                               {lambda()#12}::operator()()::sname);
        }
        if ((_render_buffers_post_process_and_tonemap(RenderDataRD_const*)::{lambda()#11}::
             operator()()::sname == '\0') &&
           (iVar15 = __cxa_guard_acquire(&_render_buffers_post_process_and_tonemap(RenderDataRD_const*)
                                          ::{lambda()#11}::operator()()::sname), iVar15 != 0)) {
          _scs_create((char *)&_render_buffers_post_process_and_tonemap(RenderDataRD_const*)::
                               {lambda()#11}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &_render_buffers_post_process_and_tonemap(RenderDataRD_const*)::{lambda()#11}
                        ::operator()()::sname,&__dso_handle);
          __cxa_guard_release(&_render_buffers_post_process_and_tonemap(RenderDataRD_const*)::
                               {lambda()#11}::operator()()::sname);
        }
        uVar18 = RenderSceneBuffersRD::get_texture_slice
                           (pSVar4,(StringName *)
                                   &_render_buffers_post_process_and_tonemap(RenderDataRD_const*)::
                                    {lambda()#11}::operator()()::sname,0x10cf60,uVar19,0,1);
        if (local_185 == '\0') {
          if ((_render_buffers_post_process_and_tonemap(RenderDataRD_const*)::{lambda()#14}::
               operator()()::sname == '\0') &&
             (iVar15 = __cxa_guard_acquire(&_render_buffers_post_process_and_tonemap(RenderDataRD_const*)
                                            ::{lambda()#14}::operator()()::sname), iVar15 != 0)) {
            _scs_create((char *)&_render_buffers_post_process_and_tonemap(RenderDataRD_const*)::
                                 {lambda()#14}::operator()()::sname,true);
            __cxa_atexit(StringName::~StringName,
                         &_render_buffers_post_process_and_tonemap(RenderDataRD_const*)::
                          {lambda()#14}::operator()()::sname,&__dso_handle);
            __cxa_guard_release(&_render_buffers_post_process_and_tonemap(RenderDataRD_const*)::
                                 {lambda()#14}::operator()()::sname);
          }
          if ((_render_buffers_post_process_and_tonemap(RenderDataRD_const*)::{lambda()#13}::
               operator()()::sname == '\0') &&
             (iVar15 = __cxa_guard_acquire(&_render_buffers_post_process_and_tonemap(RenderDataRD_const*)
                                            ::{lambda()#13}::operator()()::sname), iVar15 != 0)) {
            _scs_create((char *)&_render_buffers_post_process_and_tonemap(RenderDataRD_const*)::
                                 {lambda()#13}::operator()()::sname,true);
            __cxa_atexit(StringName::~StringName,
                         &_render_buffers_post_process_and_tonemap(RenderDataRD_const*)::
                          {lambda()#13}::operator()()::sname,&__dso_handle);
            __cxa_guard_release(&_render_buffers_post_process_and_tonemap(RenderDataRD_const*)::
                                 {lambda()#13}::operator()()::sname);
          }
          uVar30 = RenderSceneBuffersRD::get_texture_slice
                             (pSVar4,(StringName *)
                                     &_render_buffers_post_process_and_tonemap(RenderDataRD_const*)
                                      ::{lambda()#13}::operator()()::sname,0x10cf40,0,0,1);
          uVar17 = *(undefined8 *)(this + 0x138);
          RendererSceneRender::environment_get_glow_hdr_bleed_scale
                    (this,*(undefined8 *)(param_1 + 0x1c0));
          RendererSceneRender::environment_get_glow_hdr_bleed_threshold
                    (this,*(undefined8 *)(param_1 + 0x1c0));
          RendererSceneRender::environment_get_glow_bloom(this,*(undefined8 *)(param_1 + 0x1c0));
          RendererSceneRender::environment_get_exposure(this,*(undefined8 *)(param_1 + 0x1c0));
          RendererSceneRender::environment_get_glow_hdr_luminance_cap
                    (this,*(undefined8 *)(param_1 + 0x1c0));
          RendererSceneRender::environment_get_glow_strength(this,*(undefined8 *)(param_1 + 0x1c0));
          RendererRD::CopyEffects::gaussian_glow_raster
                    (uVar17,uVar22,uVar30,uVar18,local_1d8,1,local_1c0);
        }
        else {
          uVar17 = *(undefined8 *)(this + 0x138);
          RendererSceneRender::environment_get_glow_hdr_bleed_scale
                    (this,*(undefined8 *)(param_1 + 0x1c0));
          RendererSceneRender::environment_get_glow_hdr_bleed_threshold
                    (this,*(undefined8 *)(param_1 + 0x1c0));
          RendererSceneRender::environment_get_glow_bloom(this,*(undefined8 *)(param_1 + 0x1c0));
          RendererSceneRender::environment_get_exposure(this,*(undefined8 *)(param_1 + 0x1c0));
          uVar14 = RendererSceneRender::environment_get_glow_hdr_luminance_cap
                             (this,*(undefined8 *)(param_1 + 0x1c0));
          uVar30 = RendererSceneRender::environment_get_glow_strength
                             (this,*(undefined8 *)(param_1 + 0x1c0));
          RendererRD::CopyEffects::gaussian_glow(uVar30,uVar14,uVar17,uVar22,uVar18,local_1d8);
        }
LAB_0010a081:
        uVar27 = uVar27 + 1;
        if (iVar13 < (int)uVar27) goto LAB_0010a1e9;
      }
      if (_render_buffers_post_process_and_tonemap(RenderDataRD_const*)::{lambda()#16}::operator()()
          ::sname == '\0') {
        uVar22 = 0x10b15b;
        iVar15 = __cxa_guard_acquire(&_render_buffers_post_process_and_tonemap(RenderDataRD_const*)
                                      ::{lambda()#16}::operator()()::sname);
        if (iVar15 != 0) {
          _scs_create((char *)&_render_buffers_post_process_and_tonemap(RenderDataRD_const*)::
                               {lambda()#16}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &_render_buffers_post_process_and_tonemap(RenderDataRD_const*)::{lambda()#16}
                        ::operator()()::sname,&__dso_handle);
          uVar22 = 0x10b19a;
          __cxa_guard_release(&_render_buffers_post_process_and_tonemap(RenderDataRD_const*)::
                               {lambda()#16}::operator()()::sname);
        }
      }
      if (_render_buffers_post_process_and_tonemap(RenderDataRD_const*)::{lambda()#15}::operator()()
          ::sname == '\0') {
        uVar22 = 0x10b0f3;
        iVar15 = __cxa_guard_acquire(&_render_buffers_post_process_and_tonemap(RenderDataRD_const*)
                                      ::{lambda()#15}::operator()()::sname);
        if (iVar15 != 0) {
          _scs_create((char *)&_render_buffers_post_process_and_tonemap(RenderDataRD_const*)::
                               {lambda()#15}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &_render_buffers_post_process_and_tonemap(RenderDataRD_const*)::{lambda()#15}
                        ::operator()()::sname,&__dso_handle);
          uVar22 = 0x10b132;
          __cxa_guard_release(&_render_buffers_post_process_and_tonemap(RenderDataRD_const*)::
                               {lambda()#15}::operator()()::sname);
        }
      }
      uVar18 = 1;
      auVar31 = RenderSceneBuffersRD::get_texture_slice
                          (pSVar4,(StringName *)
                                  &_render_buffers_post_process_and_tonemap(RenderDataRD_const*)::
                                   {lambda()#15}::operator()()::sname,0x10cf20,uVar19,uVar27 - 1,1);
      if ((_render_buffers_post_process_and_tonemap(RenderDataRD_const*)::{lambda()#18}::
           operator()()::sname == '\0') &&
         (iVar15 = __cxa_guard_acquire(&_render_buffers_post_process_and_tonemap(RenderDataRD_const*)
                                        ::{lambda()#18}::operator()()::sname,uVar22,auVar31._8_8_,
                                       uVar18), iVar15 != 0)) {
        _scs_create((char *)&_render_buffers_post_process_and_tonemap(RenderDataRD_const*)::
                             {lambda()#18}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &_render_buffers_post_process_and_tonemap(RenderDataRD_const*)::{lambda()#18}::
                      operator()()::sname,&__dso_handle);
        __cxa_guard_release(&_render_buffers_post_process_and_tonemap(RenderDataRD_const*)::
                             {lambda()#18}::operator()()::sname);
      }
      if ((_render_buffers_post_process_and_tonemap(RenderDataRD_const*)::{lambda()#17}::
           operator()()::sname == '\0') &&
         (iVar15 = __cxa_guard_acquire(&_render_buffers_post_process_and_tonemap(RenderDataRD_const*)
                                        ::{lambda()#17}::operator()()::sname), iVar15 != 0)) {
        _scs_create((char *)&_render_buffers_post_process_and_tonemap(RenderDataRD_const*)::
                             {lambda()#17}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &_render_buffers_post_process_and_tonemap(RenderDataRD_const*)::{lambda()#17}::
                      operator()()::sname,&__dso_handle);
        __cxa_guard_release(&_render_buffers_post_process_and_tonemap(RenderDataRD_const*)::
                             {lambda()#17}::operator()()::sname);
      }
      uVar22 = RenderSceneBuffersRD::get_texture_slice
                         (pSVar4,(StringName *)
                                 &_render_buffers_post_process_and_tonemap(RenderDataRD_const*)::
                                  {lambda()#17}::operator()()::sname,0x10cf00,uVar19,uVar27,1);
      if (local_185 == '\0') {
        if ((_render_buffers_post_process_and_tonemap(RenderDataRD_const*)::{lambda()#20}::
             operator()()::sname == '\0') &&
           (iVar15 = __cxa_guard_acquire(&_render_buffers_post_process_and_tonemap(RenderDataRD_const*)
                                          ::{lambda()#20}::operator()()::sname), iVar15 != 0)) {
          _scs_create((char *)&_render_buffers_post_process_and_tonemap(RenderDataRD_const*)::
                               {lambda()#20}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &_render_buffers_post_process_and_tonemap(RenderDataRD_const*)::{lambda()#20}
                        ::operator()()::sname,&__dso_handle);
          __cxa_guard_release(&_render_buffers_post_process_and_tonemap(RenderDataRD_const*)::
                               {lambda()#20}::operator()()::sname);
        }
        if ((_render_buffers_post_process_and_tonemap(RenderDataRD_const*)::{lambda()#19}::
             operator()()::sname == '\0') &&
           (iVar15 = __cxa_guard_acquire(&_render_buffers_post_process_and_tonemap(RenderDataRD_const*)
                                          ::{lambda()#19}::operator()()::sname), iVar15 != 0)) {
          _scs_create((char *)&_render_buffers_post_process_and_tonemap(RenderDataRD_const*)::
                               {lambda()#19}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &_render_buffers_post_process_and_tonemap(RenderDataRD_const*)::{lambda()#19}
                        ::operator()()::sname,&__dso_handle);
          __cxa_guard_release(&_render_buffers_post_process_and_tonemap(RenderDataRD_const*)::
                               {lambda()#19}::operator()()::sname);
        }
        uVar17 = RenderSceneBuffersRD::get_texture_slice
                           (pSVar4,(StringName *)
                                   &_render_buffers_post_process_and_tonemap(RenderDataRD_const*)::
                                    {lambda()#19}::operator()()::sname,0x10cee0,0,uVar27,1);
        uVar18 = *(undefined8 *)(this + 0x138);
        RendererSceneRender::environment_get_glow_strength(this,*(undefined8 *)(param_1 + 0x1c0));
        RendererRD::CopyEffects::gaussian_glow_raster
                  (uVar18,auVar31._0_8_,uVar17,uVar22,local_1d8,0,0);
        goto LAB_0010a081;
      }
      uVar18 = *(undefined8 *)(this + 0x138);
      uVar27 = uVar27 + 1;
      uVar17 = RendererSceneRender::environment_get_glow_strength
                         (this,*(undefined8 *)(param_1 + 0x1c0));
      RendererRD::CopyEffects::gaussian_glow(uVar17,_LC166,uVar18,auVar31._0_8_,uVar22,local_1d8);
    } while ((int)uVar27 <= iVar13);
LAB_0010a1e9:
    uVar19 = uVar19 + 1;
  } while (uVar19 < *(uint *)(pSVar4 + 0x1a8));
LAB_0010a211:
  RenderingDevice::get_singleton();
  RenderingDevice::draw_command_end_label();
LAB_00108dd1:
  plVar2 = RenderingServerGlobals::utilities;
  local_1a0 = (StrRange *)&local_140;
  local_1e0 = (CowData<char32_t> *)&local_138;
  local_1d8 = &local_e8;
  if ((char)RenderingServerGlobals::utilities[1] != '\0') {
    pcVar6 = *(code **)(*RenderingServerGlobals::utilities + 0x68);
    local_138 = (StringName *)0x10e3cf;
    local_140 = (StringName *)0x0;
    local_130 = 7;
    String::parse_latin1(local_1a0);
    (*pcVar6)(plVar2);
    pSVar9 = local_140;
    if (local_140 != (StringName *)0x0) {
      LOCK();
      pSVar1 = local_140 + -0x10;
      *(long *)pSVar1 = *(long *)pSVar1 + -1;
      UNLOCK();
      if (*(long *)pSVar1 == 0) {
        local_140 = (StringName *)0x0;
        Memory::free_static(pSVar9 + -0x10,false);
      }
    }
  }
  uVar22 = RenderingDevice::get_singleton();
  auVar31 = auStack_e0;
  local_e8 = CONCAT44(uStack_18c,uStack_18c);
  auStack_e0._4_4_ = uStack_18c;
  auStack_e0._0_4_ = uStack_18c;
  local_140 = (StringName *)0x0;
  local_138 = (StringName *)0x10e3cf;
  auStack_e0._8_8_ = auVar31._8_8_;
  local_130 = 7;
  String::parse_latin1(local_1a0);
  RenderingDevice::draw_command_begin_label(uVar22,local_1a0,local_1d8);
  pSVar9 = local_140;
  if (local_140 != (StringName *)0x0) {
    LOCK();
    pSVar1 = local_140 + -0x10;
    *(long *)pSVar1 = *(long *)pSVar1 + -1;
    UNLOCK();
    if (*(long *)pSVar1 == 0) {
      local_140 = (StringName *)0x0;
      Memory::free_static(pSVar9 + -0x10,false);
    }
  }
  auVar31 = local_a0;
  auStack_e0 = ZEXT416(_LC0);
  auVar7._8_4_ = local_a0._12_4_;
  auVar7._0_8_ = _LC16;
  local_80._8_8_ = _LC16;
  local_d0._8_8_ = _UNK_00113488;
  local_d0._0_8_ = __LC84;
  local_c0[0xc] = 0;
  uVar22 = *(undefined8 *)(this + 0x148);
  local_e8 = (local_e8 >> 8 & 0xffffff) << 8;
  local_c0._0_12_ = ZEXT412(0);
  local_a0._0_12_ = auVar7 << 0x20;
  local_a0._13_3_ = auVar31._13_3_;
  local_a0[0xc] = 0;
  local_90._0_4_ = 0x3f000000;
  local_90._8_8_ = 0;
  local_80[4] = 0;
  local_80._0_4_ = uVar25;
  local_6c = 0;
  local_68 = 0;
  local_60 = 0;
  local_5c = 0;
  local_54 = 1;
  local_50 = 0;
  local_b0 = (undefined1  [16])0x0;
  local_138 = pSVar4;
  local_70 = uVar25;
  cVar11 = RefCounted::reference();
  if (cVar11 == '\0') {
    local_138 = (StringName *)0x0;
  }
  uVar22 = RendererRD::Luminance::get_current_luminance_buffer(uVar22);
  local_90._8_8_ = uVar22;
  if (((local_138 != (StringName *)0x0) &&
      (cVar11 = RefCounted::unreference(), pSVar9 = local_138, cVar11 != '\0')) &&
     (cVar11 = predelete_handler((Object *)local_138), cVar11 != '\0')) {
    (**(code **)(*(long *)pSVar9 + 0x140))(pSVar9);
    Memory::free_static(pSVar9,false);
  }
  if (bVar21) {
    uVar32 = *(ulong *)(param_1 + 0x1c8);
    if ((uVar32 == 0) ||
       (*(uint *)(RenderingServerGlobals::camera_attributes + 0x2c) <= (uint)uVar32)) {
LAB_00109030:
      local_90._8_8_ = plVar16[3];
    }
    else {
      lVar24 = ((uVar32 & 0xffffffff) %
               (ulong)*(uint *)(RenderingServerGlobals::camera_attributes + 0x28)) * 0x50 +
               *(long *)(*(long *)(RenderingServerGlobals::camera_attributes + 0x18) +
                        ((uVar32 & 0xffffffff) /
                        (ulong)*(uint *)(RenderingServerGlobals::camera_attributes + 0x28)) * 8);
      iVar13 = *(int *)(lVar24 + 0x48);
      if (iVar13 == (int)(uVar32 >> 0x20)) {
        if ((*(char *)(lVar24 + 0xc) == '\0') || (local_90._8_8_ == 0)) goto LAB_00109030;
        local_a0[0xc] = 1;
        local_90._0_4_ = local_184;
      }
      else {
        if (0x7ffffffe < iVar13 + 0x80000000U) goto LAB_00109030;
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
        local_90._8_8_ = plVar16[3];
      }
    }
    lVar24 = *(long *)(param_1 + 0x1c0);
    if (lVar24 == 0) goto LAB_00109088;
    cVar11 = RendererSceneRender::environment_get_glow_enabled();
    if (cVar11 == '\0') {
      lVar24 = *(long *)(param_1 + 0x1c0);
      goto LAB_00109088;
    }
    local_e8 = CONCAT71(local_e8._1_7_,1);
    uVar14 = RendererSceneRender::environment_get_glow_blend_mode
                       (this,*(undefined8 *)(param_1 + 0x1c0));
    local_e8 = CONCAT44(uVar14,(undefined4)local_e8);
    iVar13 = RendererSceneRender::environment_get_glow_blend_mode
                       (this,*(undefined8 *)(param_1 + 0x1c0));
    if (iVar13 == 4) {
      uVar14 = RendererSceneRender::environment_get_glow_mix(this,*(undefined8 *)(param_1 + 0x1c0));
    }
    else {
      uVar14 = RendererSceneRender::environment_get_glow_intensity();
    }
    auStack_e0._0_4_ = uVar14;
    lVar24 = 0;
    do {
      RendererSceneRender::environment_get_glow_levels
                (local_1e0,this,*(undefined8 *)(param_1 + 0x1c0));
      lVar10 = local_130;
      if (local_130 == 0) {
        lVar26 = 0;
LAB_0010be15:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar24,lVar26,"p_index","size()","",false
                   ,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar6 = (code *)invalidInstructionException();
        (*pcVar6)();
      }
      lVar26 = *(long *)(local_130 + -8);
      if (lVar26 <= lVar24) goto LAB_0010be15;
      *(undefined4 *)(auStack_e0 + lVar24 * 4 + 8) = *(undefined4 *)(local_130 + lVar24 * 4);
      LOCK();
      plVar2 = (long *)(local_130 + -0x10);
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        local_130 = 0;
        Memory::free_static((void *)(lVar10 + -0x10),false);
      }
      lVar24 = lVar24 + 1;
    } while (lVar24 != 7);
    if ((_render_buffers_post_process_and_tonemap(RenderDataRD_const*)::{lambda()#22}::operator()()
         ::sname == '\0') &&
       (iVar13 = __cxa_guard_acquire(&_render_buffers_post_process_and_tonemap(RenderDataRD_const*)
                                      ::{lambda()#22}::operator()()::sname), iVar13 != 0)) {
      _scs_create((char *)&_render_buffers_post_process_and_tonemap(RenderDataRD_const*)::
                           {lambda()#22}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &_render_buffers_post_process_and_tonemap(RenderDataRD_const*)::{lambda()#22}::
                    operator()()::sname,&__dso_handle);
      __cxa_guard_release(&_render_buffers_post_process_and_tonemap(RenderDataRD_const*)::
                           {lambda()#22}::operator()()::sname);
    }
    if ((_render_buffers_post_process_and_tonemap(RenderDataRD_const*)::{lambda()#21}::operator()()
         ::sname == '\0') &&
       (iVar13 = __cxa_guard_acquire(&_render_buffers_post_process_and_tonemap(RenderDataRD_const*)
                                      ::{lambda()#21}::operator()()::sname), iVar13 != 0)) {
      _scs_create((char *)&_render_buffers_post_process_and_tonemap(RenderDataRD_const*)::
                           {lambda()#21}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &_render_buffers_post_process_and_tonemap(RenderDataRD_const*)::{lambda()#21}::
                    operator()()::sname,&__dso_handle);
      __cxa_guard_release(&_render_buffers_post_process_and_tonemap(RenderDataRD_const*)::
                           {lambda()#21}::operator()()::sname);
    }
    uVar22 = RenderSceneBuffersRD::get_texture_slice_size
                       (pSVar4,(StringName *)
                               &_render_buffers_post_process_and_tonemap(RenderDataRD_const*)::
                                {lambda()#21}::operator()()::sname,0x10cec0);
    auVar31 = local_c0;
    local_c0._4_8_ = uVar22;
    local_c0._13_3_ = auVar31._13_3_;
    local_c0[0xc] = this[0x178];
    if ((_render_buffers_post_process_and_tonemap(RenderDataRD_const*)::{lambda()#24}::operator()()
         ::sname == '\0') &&
       (iVar13 = __cxa_guard_acquire(&_render_buffers_post_process_and_tonemap(RenderDataRD_const*)
                                      ::{lambda()#24}::operator()()::sname), iVar13 != 0)) {
      _scs_create((char *)&_render_buffers_post_process_and_tonemap(RenderDataRD_const*)::
                           {lambda()#24}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &_render_buffers_post_process_and_tonemap(RenderDataRD_const*)::{lambda()#24}::
                    operator()()::sname,&__dso_handle);
      __cxa_guard_release(&_render_buffers_post_process_and_tonemap(RenderDataRD_const*)::
                           {lambda()#24}::operator()()::sname);
    }
    if ((_render_buffers_post_process_and_tonemap(RenderDataRD_const*)::{lambda()#23}::operator()()
         ::sname == '\0') &&
       (iVar13 = __cxa_guard_acquire(&_render_buffers_post_process_and_tonemap(RenderDataRD_const*)
                                      ::{lambda()#23}::operator()()::sname), iVar13 != 0)) {
      _scs_create((char *)&_render_buffers_post_process_and_tonemap(RenderDataRD_const*)::
                           {lambda()#23}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &_render_buffers_post_process_and_tonemap(RenderDataRD_const*)::{lambda()#23}::
                    operator()()::sname,&__dso_handle);
      __cxa_guard_release(&_render_buffers_post_process_and_tonemap(RenderDataRD_const*)::
                           {lambda()#23}::operator()()::sname);
    }
    uVar22 = RenderSceneBuffersRD::get_texture
                       (pSVar4,(StringName *)
                               &_render_buffers_post_process_and_tonemap(RenderDataRD_const*)::
                                {lambda()#23}::operator()()::sname);
    local_b0._0_8_ = uVar22;
    lVar24 = RendererSceneRender::environment_get_glow_map(this,*(undefined8 *)(param_1 + 0x1c0));
    if (lVar24 == 0) {
      auStack_e0._4_4_ = 0;
      local_b0._8_8_ = plVar16[3];
    }
    else {
      uVar14 = RendererSceneRender::environment_get_glow_map_strength
                         (this,*(undefined8 *)(param_1 + 0x1c0));
      auStack_e0._4_4_ = uVar14;
      pcVar6 = *(code **)(*plVar16 + 0x138);
      uVar22 = RendererSceneRender::environment_get_glow_map(this,*(undefined8 *)(param_1 + 0x1c0));
      uVar22 = (*pcVar6)(plVar16,uVar22,0);
      local_b0._8_8_ = uVar22;
    }
    lVar24 = *(long *)(param_1 + 0x1c0);
  }
  else {
    lVar24 = *(long *)(param_1 + 0x1c0);
    local_90._8_8_ = plVar16[3];
LAB_00109088:
    local_b0._8_8_ = plVar16[3];
    local_b0._0_8_ = plVar16[4];
  }
  if (*(int *)(pSVar4 + 0x1c8) == 1) {
    local_60._0_1_ = 1;
  }
  local_60 = CONCAT11(pSVar4[0x1cd],(undefined1)local_60);
  local_5c = local_180;
  if (lVar24 != 0) {
    uVar14 = RendererSceneRender::environment_get_tone_mapper(this,*(undefined8 *)(param_1 + 0x1c0))
    ;
    local_a0._0_4_ = uVar14;
    uVar14 = RendererSceneRender::environment_get_white(this,*(undefined8 *)(param_1 + 0x1c0));
    local_a0._8_4_ = uVar14;
    uVar14 = RendererSceneRender::environment_get_exposure(this,*(undefined8 *)(param_1 + 0x1c0));
    local_a0._4_4_ = uVar14;
  }
  local_6c = 0;
  local_68 = plVar16[0xe];
  if ((bVar21) && (*(long *)(param_1 + 0x1c0) != 0)) {
    uVar12 = RendererSceneRender::environment_get_adjustments_enabled
                       (this,*(undefined8 *)(param_1 + 0x1c0));
    local_80[4] = uVar12;
    uVar14 = RendererSceneRender::environment_get_adjustments_brightness
                       (this,*(undefined8 *)(param_1 + 0x1c0));
    local_80._8_4_ = uVar14;
    uVar14 = RendererSceneRender::environment_get_adjustments_contrast
                       (this,*(undefined8 *)(param_1 + 0x1c0));
    local_80._12_4_ = uVar14;
    local_70 = RendererSceneRender::environment_get_adjustments_saturation
                         (this,*(undefined8 *)(param_1 + 0x1c0));
    cVar11 = RendererSceneRender::environment_get_adjustments_enabled
                       (this,*(undefined8 *)(param_1 + 0x1c0));
    if ((cVar11 != '\0') &&
       (lVar24 = RendererSceneRender::environment_get_color_correction
                           (this,*(undefined8 *)(param_1 + 0x1c0)), lVar24 != 0)) {
      local_6c = CONCAT11(local_6c._1_1_,1);
      uVar12 = RendererSceneRender::environment_get_use_1d_color_correction
                         (this,*(undefined8 *)(param_1 + 0x1c0));
      local_6c = CONCAT11(uVar12,(undefined1)local_6c);
      pcVar6 = *(code **)(*plVar16 + 0x138);
      uVar22 = RendererSceneRender::environment_get_color_correction
                         (this,*(undefined8 *)(param_1 + 0x1c0));
      local_68 = (*pcVar6)(plVar16,uVar22,0);
    }
  }
  if (*(code **)(*(long *)this + 0x248) != _render_buffers_get_luminance_multiplier) {
    uVar25 = (**(code **)(*(long *)this + 0x248))(this);
  }
  local_54 = *(undefined4 *)(pSVar4 + 0x1a8);
  local_80._0_4_ = uVar25;
  local_50 = (**(code **)(*plVar16 + 0x278))(plVar16,local_1d0);
  pFVar8 = FramebufferCacheRD::singleton;
  local_50 = local_50 ^ 1;
  if (local_1b8 == (long *)0x0) {
    if (bVar28) {
      uVar22 = RendererRD::TextureStorage::render_target_get_rd_texture_msaa(plVar16,local_1d0);
      uVar22 = FramebufferCacheRD::get_cache<RID>(pFVar8,uVar22);
      (**(code **)(*plVar16 + 600))(plVar16,local_1d0,1);
    }
    else {
      uVar22 = RendererRD::TextureStorage::render_target_get_rd_framebuffer(plVar16,local_1d0);
    }
    RendererRD::ToneMapper::tonemapper(*(undefined8 *)(this + 0x150),local_178,uVar22,local_1d8);
    RenderingDevice::get_singleton();
    RenderingDevice::draw_command_end_label();
  }
  else {
    uVar14 = 0x60;
    if (*(code **)(*(long *)this + 0x250) != _render_buffers_get_color_format) {
      uVar14 = (**(code **)(*(long *)this + 0x250))(this);
    }
    if ((_render_buffers_post_process_and_tonemap(RenderDataRD_const*)::{lambda()#26}::operator()()
         ::sname == '\0') &&
       (iVar13 = __cxa_guard_acquire(&_render_buffers_post_process_and_tonemap(RenderDataRD_const*)
                                      ::{lambda()#26}::operator()()::sname), iVar13 != 0)) {
      _scs_create((char *)&_render_buffers_post_process_and_tonemap(RenderDataRD_const*)::
                           {lambda()#26}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &_render_buffers_post_process_and_tonemap(RenderDataRD_const*)::{lambda()#26}::
                    operator()()::sname,&__dso_handle);
      __cxa_guard_release(&_render_buffers_post_process_and_tonemap(RenderDataRD_const*)::
                           {lambda()#26}::operator()()::sname);
    }
    if ((_render_buffers_post_process_and_tonemap(RenderDataRD_const*)::{lambda()#25}::operator()()
         ::sname == '\0') &&
       (iVar13 = __cxa_guard_acquire(&_render_buffers_post_process_and_tonemap(RenderDataRD_const*)
                                      ::{lambda()#25}::operator()()::sname), iVar13 != 0)) {
      _scs_create((char *)&_render_buffers_post_process_and_tonemap(RenderDataRD_const*)::
                           {lambda()#25}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &_render_buffers_post_process_and_tonemap(RenderDataRD_const*)::{lambda()#25}::
                    operator()()::sname,&__dso_handle);
      __cxa_guard_release(&_render_buffers_post_process_and_tonemap(RenderDataRD_const*)::
                           {lambda()#25}::operator()()::sname);
    }
    uVar22 = RenderSceneBuffersRD::create_texture
                       (pSVar4,&_render_buffers_post_process_and_tonemap(RenderDataRD_const*)::
                                {lambda()#25}::operator()()::sname,
                        &_render_buffers_post_process_and_tonemap(RenderDataRD_const*)::
                         {lambda()#26}::operator()()::sname,uVar14,0xb,0,0,0,1,1,1);
    uVar22 = FramebufferCacheRD::get_cache<RID>(FramebufferCacheRD::singleton,uVar22);
    RendererRD::ToneMapper::tonemapper(*(undefined8 *)(this + 0x150),local_178,uVar22,local_1d8);
    RenderingDevice::get_singleton();
    RenderingDevice::draw_command_end_label();
    pcVar6 = *(code **)(*local_1b8 + 8);
    local_138 = pSVar4;
    cVar11 = RefCounted::reference();
    if (cVar11 == '\0') {
      local_138 = (StringName *)0x0;
      if (pcVar6 != RendererRD::FSR::ensure_context) {
LAB_00109be0:
        (*pcVar6)(local_1b8);
        goto LAB_00109540;
      }
    }
    else {
      if (pcVar6 != RendererRD::FSR::ensure_context) goto LAB_00109be0;
LAB_00109540:
      if (((local_138 != (StringName *)0x0) &&
          (cVar11 = RefCounted::unreference(), pSVar9 = local_138, cVar11 != '\0')) &&
         (cVar11 = predelete_handler((Object *)local_138), cVar11 != '\0')) {
        (**(code **)(*(long *)pSVar9 + 0x140))(pSVar9);
        Memory::free_static(pSVar9,false);
      }
    }
    uVar22 = RenderingDevice::get_singleton();
    auVar31 = auStack_e0;
    local_e8 = CONCAT44(uStack_18c,uStack_18c);
    auStack_e0._4_4_ = uStack_18c;
    auStack_e0._0_4_ = uStack_18c;
    auStack_e0._8_8_ = auVar31._8_8_;
    if (*(code **)*local_1b8 == RendererRD::FSR::get_label) {
      local_138 = (StringName *)0x0;
      if (local_1b8[1] != 0) {
        CowData<char32_t>::_ref(local_1e0,(CowData *)(local_1b8 + 1));
      }
    }
    else {
      (**(code **)*local_1b8)(local_1e0,local_1b8);
    }
    RenderingDevice::draw_command_begin_label(uVar22,local_1e0,local_1d8);
    pSVar9 = local_138;
    if (local_138 != (StringName *)0x0) {
      LOCK();
      pSVar1 = local_138 + -0x10;
      *(long *)pSVar1 = *(long *)pSVar1 + -1;
      UNLOCK();
      if (*(long *)pSVar1 == 0) {
        local_138 = (StringName *)0x0;
        Memory::free_static(pSVar9 + -0x10,false);
      }
    }
    uVar25 = 0;
    if (*(int *)(pSVar4 + 0x1a8) != 0) {
      do {
        while( true ) {
          if ((_render_buffers_post_process_and_tonemap(RenderDataRD_const*)::{lambda()#28}::
               operator()()::sname == '\0') &&
             (iVar13 = __cxa_guard_acquire(&_render_buffers_post_process_and_tonemap(RenderDataRD_const*)
                                            ::{lambda()#28}::operator()()::sname), iVar13 != 0)) {
            _scs_create((char *)&_render_buffers_post_process_and_tonemap(RenderDataRD_const*)::
                                 {lambda()#28}::operator()()::sname,true);
            __cxa_atexit(StringName::~StringName,
                         &_render_buffers_post_process_and_tonemap(RenderDataRD_const*)::
                          {lambda()#28}::operator()()::sname,&__dso_handle);
            __cxa_guard_release(&_render_buffers_post_process_and_tonemap(RenderDataRD_const*)::
                                 {lambda()#28}::operator()()::sname);
          }
          if ((_render_buffers_post_process_and_tonemap(RenderDataRD_const*)::{lambda()#27}::
               operator()()::sname == '\0') &&
             (iVar13 = __cxa_guard_acquire(&_render_buffers_post_process_and_tonemap(RenderDataRD_const*)
                                            ::{lambda()#27}::operator()()::sname), iVar13 != 0)) {
            _scs_create((char *)&_render_buffers_post_process_and_tonemap(RenderDataRD_const*)::
                                 {lambda()#27}::operator()()::sname,true);
            __cxa_atexit(StringName::~StringName,
                         &_render_buffers_post_process_and_tonemap(RenderDataRD_const*)::
                          {lambda()#27}::operator()()::sname,&__dso_handle);
            __cxa_guard_release(&_render_buffers_post_process_and_tonemap(RenderDataRD_const*)::
                                 {lambda()#27}::operator()()::sname);
          }
          uVar22 = RenderSceneBuffersRD::get_texture_slice
                             (pSVar4,(StringName *)
                                     &_render_buffers_post_process_and_tonemap(RenderDataRD_const*)
                                      ::{lambda()#27}::operator()()::sname,0x10ce60,uVar25,0,1);
          uVar18 = RendererRD::TextureStorage::render_target_get_rd_texture_slice
                             (plVar16,local_1d0,uVar25);
          pcVar6 = *(code **)(*local_1b8 + 0x10);
          local_138 = pSVar4;
          cVar11 = RefCounted::reference();
          if (cVar11 == '\0') {
            local_138 = (StringName *)0x0;
          }
          (*pcVar6)(local_1b8,local_1e0,uVar22,uVar18);
          if (((local_138 != (StringName *)0x0) &&
              (cVar11 = RefCounted::unreference(), pSVar9 = local_138, cVar11 != '\0')) &&
             (cVar11 = predelete_handler((Object *)local_138), cVar11 != '\0')) break;
          uVar25 = uVar25 + 1;
          if (*(uint *)(pSVar4 + 0x1a8) <= uVar25) goto LAB_001094c0;
        }
        uVar25 = uVar25 + 1;
        (**(code **)(*(long *)pSVar9 + 0x140))(pSVar9);
        Memory::free_static(pSVar9,false);
      } while (uVar25 < *(uint *)(pSVar4 + 0x1a8));
    }
LAB_001094c0:
    if (bVar28) {
      uVar22 = RendererRD::TextureStorage::render_target_get_rd_texture(plVar16,local_1d0);
      pFVar8 = FramebufferCacheRD::singleton;
      uVar18 = RendererRD::TextureStorage::render_target_get_rd_texture_msaa(plVar16,local_1d0);
      uVar18 = FramebufferCacheRD::get_cache<RID>(pFVar8,uVar18);
      local_e8 = 0;
      auVar31._8_8_ = 0;
      auVar31._0_8_ = auStack_e0._8_8_;
      auStack_e0 = auVar31 << 0x40;
      local_f0 = *(undefined8 *)(pSVar4 + 0x1a0);
      local_f8 = 0;
      RendererRD::CopyEffects::copy_to_fb_rect
                (*(undefined8 *)(this + 0x138),uVar22,uVar18,&local_f8,0,0,0,0,0,0,0,0,0,local_1d8);
      (**(code **)(*plVar16 + 600))(plVar16,local_1d0,1);
    }
    RenderingDevice::get_singleton();
    RenderingDevice::draw_command_end_label();
  }
  (**(code **)(*plVar16 + 0x298))();
  cVar11 = RefCounted::unreference();
joined_r0x001094f8:
  if ((cVar11 == '\0') || (cVar11 = predelete_handler((Object *)pSVar4), cVar11 == '\0')) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    (**(code **)(*(long *)pSVar4 + 0x140))(pSVar4);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Memory::free_static(pSVar4,false);
      return;
    }
  }
LAB_0010c03c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<RenderingDevice::FramebufferPass>::_copy_on_write() [clone .isra.0] */

void __thiscall
CowData<RenderingDevice::FramebufferPass>::_copy_on_write
          (CowData<RenderingDevice::FramebufferPass> *this)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  undefined8 *puVar4;
  CowData<int> *this_00;
  ulong uVar5;
  long lVar6;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  lVar1 = *(long *)(*(long *)this + -8);
  uVar5 = 0x10;
  if (lVar1 * 0x48 != 0) {
    uVar5 = lVar1 * 0x48 - 1;
    uVar5 = uVar5 | uVar5 >> 1;
    uVar5 = uVar5 | uVar5 >> 2;
    uVar5 = uVar5 | uVar5 >> 4;
    uVar5 = uVar5 | uVar5 >> 8;
    uVar5 = uVar5 | uVar5 >> 0x10;
    uVar5 = (uVar5 | uVar5 >> 0x20) + 0x11;
  }
  puVar4 = (undefined8 *)Memory::alloc_static(uVar5,false);
  if (puVar4 == (undefined8 *)0x0) {
    _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                     "Parameter \"mem_new\" is null.",0,0);
    return;
  }
  this_00 = (CowData<int> *)(puVar4 + 3);
  lVar6 = 0;
  *puVar4 = 1;
  puVar4[1] = lVar1;
  if (lVar1 != 0) {
    do {
      lVar3 = *(long *)this + (-0x18 - (long)puVar4);
      *(undefined8 *)this_00 = 0;
      if (*(long *)(this_00 + lVar3 + 8) != 0) {
        CowData<int>::_ref(this_00,(CowData *)(this_00 + lVar3 + 8));
      }
      *(undefined8 *)(this_00 + 0x10) = 0;
      if (*(long *)(this_00 + lVar3 + 0x18) != 0) {
        CowData<int>::_ref(this_00 + 0x10,(CowData *)(this_00 + lVar3 + 0x18));
      }
      *(undefined8 *)(this_00 + 0x20) = 0;
      if (*(long *)(this_00 + lVar3 + 0x28) != 0) {
        CowData<int>::_ref(this_00 + 0x20,(CowData *)(this_00 + lVar3 + 0x28));
      }
      *(undefined8 *)(this_00 + 0x30) = 0;
      if (*(long *)(this_00 + lVar3 + 0x38) != 0) {
        CowData<int>::_ref(this_00 + 0x30,(CowData *)(this_00 + lVar3 + 0x38));
      }
      lVar6 = lVar6 + 1;
      *(undefined8 *)(this_00 + 0x38) = *(undefined8 *)(this_00 + lVar3 + 0x40);
      this_00 = this_00 + 0x48;
    } while (lVar1 != lVar6);
  }
  _unref(this);
  *(undefined8 **)this = puVar4 + 2;
  return;
}



/* RendererSceneRenderRD::_update_vrs(Ref<RenderSceneBuffersRD>) */

void __thiscall RendererSceneRenderRD::_update_vrs(RendererSceneRenderRD *this,long *param_2)

{
  StringName *pSVar1;
  ulong uVar2;
  code *pcVar3;
  ulong *puVar4;
  int iVar5;
  long *plVar6;
  ulong *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong *__dest;
  long lVar13;
  size_t __n;
  long in_FS_OFFSET;
  Vector local_f8 [8];
  long local_f0;
  Vector local_e8 [8];
  long local_e0 [2];
  ulong *local_d0 [2];
  long local_c0 [2];
  long local_b0 [2];
  long local_a0;
  undefined8 local_98;
  long local_80 [2];
  long local_70 [2];
  long local_60 [2];
  long local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((*param_2 == 0) || (lVar13 = *(long *)(*param_2 + 0x198), lVar13 == 0)) ||
     (*(long *)(this + 0x160) == 0)) goto LAB_0010c278;
  plVar6 = (long *)RendererRD::TextureStorage::get_singleton();
  iVar5 = (**(code **)(*plVar6 + 0x2c8))(plVar6,lVar13);
  if (iVar5 == 0) goto LAB_0010c278;
  pSVar1 = (StringName *)*param_2;
  if ((_update_vrs(Ref<RenderSceneBuffersRD>)::{lambda()#2}::operator()()::sname == '\0') &&
     (iVar5 = __cxa_guard_acquire(&_update_vrs(Ref<RenderSceneBuffersRD>)::{lambda()#2}::
                                   operator()()::sname), iVar5 != 0)) {
    _scs_create((char *)&_update_vrs(Ref<RenderSceneBuffersRD>)::{lambda()#2}::operator()()::sname,
                true);
    __cxa_atexit(StringName::~StringName,
                 &_update_vrs(Ref<RenderSceneBuffersRD>)::{lambda()#2}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_update_vrs(Ref<RenderSceneBuffersRD>)::{lambda()#2}::operator()()::sname);
  }
  if ((_update_vrs(Ref<RenderSceneBuffersRD>)::{lambda()#1}::operator()()::sname == '\0') &&
     (iVar5 = __cxa_guard_acquire(&_update_vrs(Ref<RenderSceneBuffersRD>)::{lambda()#1}::
                                   operator()()::sname), iVar5 != 0)) {
    _scs_create((char *)&_update_vrs(Ref<RenderSceneBuffersRD>)::{lambda()#1}::operator()()::sname,
                true);
    __cxa_atexit(StringName::~StringName,
                 &_update_vrs(Ref<RenderSceneBuffersRD>)::{lambda()#1}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_update_vrs(Ref<RenderSceneBuffersRD>)::{lambda()#1}::operator()()::sname);
  }
  RenderSceneBuffersRD::get_texture
            (pSVar1,(StringName *)
                    &_update_vrs(Ref<RenderSceneBuffersRD>)::{lambda()#1}::operator()()::sname);
  local_f0 = 0;
  Vector<RID>::push_back();
  uVar8 = _LC58;
  local_e0[0] = 0;
  local_d0[0] = (ulong *)0x0;
  local_c0[0] = 0;
  local_b0[0] = 0;
  local_a0 = 0;
  local_98 = _LC58;
  puVar7 = (ulong *)Memory::alloc_static(0x14,false);
  if (puVar7 == (ulong *)0x0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",0,
                     0);
    _err_print_error("push_back","./core/templates/vector.h",0x142,
                     "Condition \"err\" is true. Returning: true",0,0);
    local_80[0] = 0;
    local_70[0] = 0;
    local_60[0] = 0;
    lVar13 = 0;
  }
  else {
    __dest = puVar7 + 2;
    *puVar7 = 1;
    puVar7[1] = 1;
    puVar4 = __dest;
    if (1 < *puVar7) {
      local_d0[0] = __dest;
      if (__dest == (ulong *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      uVar2 = puVar7[1];
      uVar12 = 0x10;
      __n = uVar2 * 4;
      if (__n != 0) {
        uVar12 = __n - 1 | __n - 1 >> 1;
        uVar12 = uVar12 | uVar12 >> 2;
        uVar12 = uVar12 | uVar12 >> 4;
        uVar12 = uVar12 | uVar12 >> 8;
        uVar12 = uVar12 | uVar12 >> 0x10;
        uVar12 = (uVar12 | uVar12 >> 0x20) + 0x11;
      }
      puVar9 = (undefined8 *)Memory::alloc_static(uVar12,false);
      puVar7 = local_d0[0];
      if (puVar9 == (undefined8 *)0x0) {
        _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                         "Parameter \"mem_new\" is null.",0,0);
        puVar4 = local_d0[0];
      }
      else {
        __dest = puVar9 + 2;
        *puVar9 = 1;
        puVar9[1] = uVar2;
        memcpy(__dest,local_d0[0],__n);
        LOCK();
        puVar7 = puVar7 + -2;
        *puVar7 = *puVar7 - 1;
        UNLOCK();
        puVar4 = __dest;
        if (*puVar7 == 0) {
          Memory::free_static(local_d0[0] + -2,false);
        }
      }
    }
    local_d0[0] = puVar4;
    uVar8 = local_98;
    lVar13 = local_a0;
    lVar10 = local_b0[0];
    lVar11 = local_c0[0];
    *(undefined4 *)__dest = 0;
    local_80[0] = 0;
    CowData<int>::_ref((CowData<int> *)local_80,(CowData *)local_d0);
    local_70[0] = 0;
    if (lVar11 != 0) {
      CowData<int>::_ref((CowData<int> *)local_70,(CowData *)local_c0);
    }
    local_60[0] = 0;
    if (lVar10 != 0) {
      CowData<int>::_ref((CowData<int> *)local_60,(CowData *)local_b0);
    }
  }
  local_50 = 0;
  if (lVar13 != 0) {
    CowData<int>::_ref((CowData<int> *)&local_50,(CowData *)&local_a0);
    lVar13 = local_50;
  }
  if (local_e0[0] == 0) {
    lVar11 = 1;
  }
  else {
    lVar11 = *(long *)(local_e0[0] + -8) + 1;
  }
  local_48 = uVar8;
  iVar5 = CowData<RenderingDevice::FramebufferPass>::resize<false>
                    ((CowData<RenderingDevice::FramebufferPass> *)local_e0,lVar11);
  if (iVar5 == 0) {
    if (local_e0[0] == 0) {
      lVar10 = -1;
      lVar11 = 0;
    }
    else {
      lVar11 = *(long *)(local_e0[0] + -8);
      lVar10 = lVar11 + -1;
      if (-1 < lVar10) {
        CowData<RenderingDevice::FramebufferPass>::_copy_on_write
                  ((CowData<RenderingDevice::FramebufferPass> *)local_e0);
        lVar11 = local_e0[0] + lVar10 * 0x48;
        if (*(long *)(lVar11 + 8) != local_80[0]) {
          CowData<int>::_ref((CowData<int> *)(lVar11 + 8),(CowData *)local_80);
        }
        if (*(long *)(lVar11 + 0x18) != local_70[0]) {
          CowData<int>::_ref((CowData<int> *)(lVar11 + 0x18),(CowData *)local_70);
        }
        if (*(long *)(lVar11 + 0x28) != local_60[0]) {
          CowData<int>::_ref((CowData<int> *)(lVar11 + 0x28),(CowData *)local_60);
        }
        if (*(long *)(lVar11 + 0x38) != lVar13) {
          CowData<int>::_ref((CowData<int> *)(lVar11 + 0x38),(CowData *)&local_50);
        }
        *(undefined8 *)(lVar11 + 0x40) = uVar8;
        goto LAB_0010c511;
      }
    }
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar10,lVar11,"p_index","size()","",false,
               false);
  }
  else {
    _err_print_error("push_back","./core/templates/vector.h",0x142,
                     "Condition \"err\" is true. Returning: true",0,0);
  }
LAB_0010c511:
  if (lVar13 != 0) {
    LOCK();
    plVar6 = (long *)(lVar13 + -0x10);
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (*plVar6 == 0) {
      Memory::free_static((void *)(local_50 + -0x10),false);
    }
  }
  if (local_60[0] != 0) {
    LOCK();
    plVar6 = (long *)(local_60[0] + -0x10);
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (*plVar6 == 0) {
      Memory::free_static((void *)(local_60[0] + -0x10),false);
    }
  }
  if (local_70[0] != 0) {
    LOCK();
    plVar6 = (long *)(local_70[0] + -0x10);
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (*plVar6 == 0) {
      Memory::free_static((void *)(local_70[0] + -0x10),false);
    }
  }
  if (local_80[0] != 0) {
    LOCK();
    plVar6 = (long *)(local_80[0] + -0x10);
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (*plVar6 == 0) {
      Memory::free_static((void *)(local_80[0] + -0x10),false);
    }
  }
  uVar8 = FramebufferCacheRD::get_cache_multipass
                    (FramebufferCacheRD::singleton,local_f8,local_e8,*(uint *)(*param_2 + 0x1a8));
  RendererRD::VRS::update_vrs_texture
            (*(undefined8 *)(this + 0x160),uVar8,*(undefined8 *)(*param_2 + 0x198));
  if (local_a0 != 0) {
    LOCK();
    plVar6 = (long *)(local_a0 + -0x10);
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (*plVar6 == 0) {
      Memory::free_static((void *)(local_a0 + -0x10),false);
    }
  }
  if (local_b0[0] != 0) {
    LOCK();
    plVar6 = (long *)(local_b0[0] + -0x10);
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (*plVar6 == 0) {
      Memory::free_static((void *)(local_b0[0] + -0x10),false);
    }
  }
  if (local_c0[0] != 0) {
    LOCK();
    plVar6 = (long *)(local_c0[0] + -0x10);
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (*plVar6 == 0) {
      Memory::free_static((void *)(local_c0[0] + -0x10),false);
    }
  }
  if (local_d0[0] != (ulong *)0x0) {
    LOCK();
    puVar7 = local_d0[0] + -2;
    *puVar7 = *puVar7 - 1;
    UNLOCK();
    if (*puVar7 == 0) {
      Memory::free_static(local_d0[0] + -2,false);
    }
  }
  CowData<RenderingDevice::FramebufferPass>::_unref
            ((CowData<RenderingDevice::FramebufferPass> *)local_e0);
  lVar13 = local_f0;
  if (local_f0 != 0) {
    LOCK();
    plVar6 = (long *)(local_f0 + -0x10);
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (*plVar6 == 0) {
      local_f0 = 0;
      Memory::free_static((void *)(lVar13 + -0x10),false);
    }
  }
LAB_0010c278:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* RendererSceneRenderRD::~RendererSceneRenderRD() */

void __thiscall RendererSceneRenderRD::~RendererSceneRenderRD(RendererSceneRenderRD *this)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  long lVar4;
  BokehDOF *this_00;
  CopyEffects *this_01;
  DebugEffects *this_02;
  Luminance *this_03;
  ToneMapper *this_04;
  VRS *this_05;
  long *plVar5;
  long lVar6;
  char cVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  long in_FS_OFFSET;
  
  puVar3 = *(undefined8 **)(this + 0x128);
  lVar4 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined ***)this = &PTR___cxa_pure_virtual_00113030;
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3);
    Memory::free_static(puVar3,false);
  }
  this_00 = *(BokehDOF **)(this + 0x130);
  if (this_00 != (BokehDOF *)0x0) {
    RendererRD::BokehDOF::~BokehDOF(this_00);
    Memory::free_static(this_00,false);
  }
  this_01 = *(CopyEffects **)(this + 0x138);
  if (this_01 != (CopyEffects *)0x0) {
    RendererRD::CopyEffects::~CopyEffects(this_01);
    Memory::free_static(this_01,false);
  }
  this_02 = *(DebugEffects **)(this + 0x140);
  if (this_02 != (DebugEffects *)0x0) {
    RendererRD::DebugEffects::~DebugEffects(this_02);
    Memory::free_static(this_02,false);
  }
  this_03 = *(Luminance **)(this + 0x148);
  if (this_03 != (Luminance *)0x0) {
    RendererRD::Luminance::~Luminance(this_03);
    Memory::free_static(this_03,false);
  }
  this_04 = *(ToneMapper **)(this + 0x150);
  if (this_04 != (ToneMapper *)0x0) {
    RendererRD::ToneMapper::~ToneMapper(this_04);
    Memory::free_static(this_04,false);
  }
  this_05 = *(VRS **)(this + 0x160);
  if (this_05 != (VRS *)0x0) {
    RendererRD::VRS::~VRS(this_05);
    Memory::free_static(this_05,false);
  }
  plVar5 = *(long **)(this + 0x158);
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x18))(plVar5);
    Memory::free_static(plVar5,false);
  }
  if (*(long *)(this + 0x410) != 0) {
    uVar9 = RenderingDevice::get_singleton();
    cVar7 = RenderingDevice::uniform_set_is_valid(uVar9,*(undefined8 *)(this + 0x410));
    if (cVar7 != '\0') {
      uVar9 = RenderingDevice::get_singleton();
      RenderingDevice::free(uVar9,*(undefined8 *)(this + 0x410));
    }
  }
  RendererRD::GI::free();
  RendererRD::Fog::free_fog_shader();
  Memory::free_static(*(void **)(this + 0x2450),true);
  Memory::free_static(*(void **)(this + 0x2458),true);
  Memory::free_static(*(void **)(this + 0x2460),true);
  Memory::free_static(*(void **)(this + 0x2468),true);
  (**(code **)(*RenderingServerGlobals::light_storage + 0x3b8))
            (RenderingServerGlobals::light_storage,0,1);
  if ((*(long *)(this + 0x208) != 0) &&
     (uVar8 = *(long *)(this + 0x208) - 1U >> ((byte)*(undefined4 *)(this + 0x1fc) & 0x3f),
     (int)uVar8 != -1)) {
    lVar10 = 0;
    do {
      lVar6 = *(long *)(this + 0x1e0);
      uVar2 = *(undefined4 *)(*(long *)(this + 0x1f0) + lVar10);
      pcVar1 = (char *)(lVar6 + 0x20);
      while( true ) {
        LOCK();
        cVar7 = *pcVar1;
        if (cVar7 == '\0') {
          *pcVar1 = '\x01';
        }
        UNLOCK();
        if (cVar7 == '\0') break;
        do {
        } while (*pcVar1 != '\0');
      }
      lVar10 = lVar10 + 4;
      *(undefined4 *)(*(long *)(lVar6 + 0x10) + (ulong)*(uint *)(lVar6 + 0x18) * 4) = uVar2;
      *(int *)(lVar6 + 0x18) = *(int *)(lVar6 + 0x18) + 1;
      *(undefined1 *)(lVar6 + 0x20) = 0;
    } while (lVar10 != (uVar8 & 0xffffffff) * 4 + 4);
  }
  *(undefined8 *)(this + 0x208) = 0;
  if (*(void **)(this + 0x1e8) != (void *)0x0) {
    Memory::free_static(*(void **)(this + 0x1e8),false);
    Memory::free_static(*(void **)(this + 0x1f0),false);
    *(undefined4 *)(this + 0x1f8) = 0;
    *(undefined1 (*) [16])(this + 0x1e8) = (undefined1  [16])0x0;
  }
  RendererRD::GI::~GI((GI *)(this + 0xb50));
  RendererRD::SkyRD::~SkyRD((SkyRD *)(this + 0x210));
  if ((*(long *)(this + 0x208) != 0) &&
     (uVar8 = *(long *)(this + 0x208) - 1U >> ((byte)*(undefined4 *)(this + 0x1fc) & 0x3f),
     (int)uVar8 != -1)) {
    lVar10 = 0;
    do {
      lVar6 = *(long *)(this + 0x1e0);
      uVar2 = *(undefined4 *)(*(long *)(this + 0x1f0) + lVar10);
      pcVar1 = (char *)(lVar6 + 0x20);
      while( true ) {
        LOCK();
        cVar7 = *pcVar1;
        if (cVar7 == '\0') {
          *pcVar1 = '\x01';
        }
        UNLOCK();
        if (cVar7 == '\0') break;
        do {
        } while (*pcVar1 != '\0');
      }
      lVar10 = lVar10 + 4;
      *(undefined4 *)(*(long *)(lVar6 + 0x10) + (ulong)*(uint *)(lVar6 + 0x18) * 4) = uVar2;
      *(int *)(lVar6 + 0x18) = *(int *)(lVar6 + 0x18) + 1;
      *(undefined1 *)(lVar6 + 0x20) = 0;
    } while (lVar10 != (uVar8 & 0xffffffff) * 4 + 4);
  }
  *(undefined8 *)(this + 0x208) = 0;
  if (*(void **)(this + 0x1e8) != (void *)0x0) {
    Memory::free_static(*(void **)(this + 0x1e8),false);
    Memory::free_static(*(void **)(this + 0x1f0),false);
  }
  if (*(uint *)(this + 0x198) < *(uint *)(this + 0x188)) {
    _err_print_error("~PagedArrayPool","./core/templates/paged_array.h",0x80,
                     "Condition \"pages_available < pages_allocated\" is true.",
                     "Pages in use exist at exit in PagedArrayPool",0,0);
  }
  else if (*(uint *)(this + 0x188) != 0) {
    lVar10 = 0;
    do {
      lVar6 = lVar10 * 8;
      lVar10 = lVar10 + 1;
      Memory::free_static(*(void **)(*(long *)(this + 0x180) + lVar6),false);
    } while ((uint)lVar10 < *(uint *)(this + 0x188));
    Memory::free_static(*(void **)(this + 0x180),false);
    Memory::free_static(*(void **)(this + 400),false);
  }
  *(undefined ***)this = &PTR___cxa_pure_virtual_00112b40;
  RendererCompositorStorage::~RendererCompositorStorage((RendererCompositorStorage *)(this + 0x68));
  if (lVar4 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  RendererEnvironmentStorage::~RendererEnvironmentStorage((RendererEnvironmentStorage *)(this + 8));
  return;
}



/* RendererSceneRenderRD::~RendererSceneRenderRD() */

void __thiscall RendererSceneRenderRD::~RendererSceneRenderRD(RendererSceneRenderRD *this)

{
  ~RendererSceneRenderRD(this);
  operator_delete(this,0x24b0);
  return;
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



/* RendererRD::FSR::ensure_context(Ref<RenderSceneBuffersRD>) */

void RendererRD::FSR::ensure_context(void)

{
  return;
}



/* RenderSceneData::is_class_ptr(void*) const */

uint __thiscall RenderSceneData::is_class_ptr(RenderSceneData *this,void *param_1)

{
  return (uint)CONCAT71(0x1133,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1132,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
}



/* RenderSceneData::_getv(StringName const&, Variant&) const */

undefined8 RenderSceneData::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* RenderSceneData::_setv(StringName const&, Variant const&) */

undefined8 RenderSceneData::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* RenderSceneData::_validate_propertyv(PropertyInfo&) const */

void RenderSceneData::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* RenderSceneData::_property_can_revertv(StringName const&) const */

undefined8 RenderSceneData::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* RenderSceneData::_property_get_revertv(StringName const&, Variant&) const */

undefined8 RenderSceneData::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* RenderSceneData::_notificationv(int, bool) */

void RenderSceneData::_notificationv(int param_1,bool param_2)

{
  return;
}



/* RenderData::is_class_ptr(void*) const */

uint __thiscall RenderData::is_class_ptr(RenderData *this,void *param_1)

{
  return (uint)CONCAT71(0x1133,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1132,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
}



/* RenderData::_getv(StringName const&, Variant&) const */

undefined8 RenderData::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* RenderData::_setv(StringName const&, Variant const&) */

undefined8 RenderData::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* RenderData::_validate_propertyv(PropertyInfo&) const */

void RenderData::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* RenderData::_property_can_revertv(StringName const&) const */

undefined8 RenderData::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* RenderData::_property_get_revertv(StringName const&, Variant&) const */

undefined8 RenderData::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* RenderData::_notificationv(int, bool) */

void RenderData::_notificationv(int param_1,bool param_2)

{
  return;
}



/* RendererSceneRenderRD::_update_shader_quality_settings() */

void RendererSceneRenderRD::_update_shader_quality_settings(void)

{
  return;
}



/* RendererSceneRenderRD::setup_added_reflection_probe(Transform3D const&, Vector3 const&) */

void RendererSceneRenderRD::setup_added_reflection_probe(Transform3D *param_1,Vector3 *param_2)

{
  return;
}



/* RendererSceneRenderRD::setup_added_light(RenderingServer::LightType, Transform3D const&, float,
   float) */

void RendererSceneRenderRD::setup_added_light(void)

{
  return;
}



/* RendererSceneRenderRD::setup_added_decal(Transform3D const&, Vector3 const&) */

void RendererSceneRenderRD::setup_added_decal(Transform3D *param_1,Vector3 *param_2)

{
  return;
}



/* RendererSceneRenderRD::voxel_gi_set_quality(RenderingServer::VoxelGIQuality) */

void __thiscall
RendererSceneRenderRD::voxel_gi_set_quality(RendererSceneRenderRD *this,undefined4 param_2)

{
  *(undefined4 *)(this + 0x21a0) = param_2;
  return;
}



/* RendererSceneRenderRD::set_scene_pass(unsigned long) */

void __thiscall RendererSceneRenderRD::set_scene_pass(RendererSceneRenderRD *this,ulong param_1)

{
  *(ulong *)(this + 0x2498) = param_1;
  return;
}



/* RendererRD::LightStorage::light_get_type(RID) const */

undefined4 __thiscall RendererRD::LightStorage::light_get_type(LightStorage *this,ulong param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x2c))) {
    puVar2 = (undefined4 *)
             (((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x28)) * 0xe8 +
             *(long *)(*(long *)(this + 0x18) +
                      ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x28)) * 8));
    iVar1 = puVar2[0x38];
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *puVar2;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("light_get_type","./servers/rendering/renderer_rd/storage_rd/light_storage.h",
                   0x1ff,"Parameter \"light\" is null.",0,0);
  return 0;
}



/* RendererSceneRenderRD::create_forward_id_storage() */

ForwardIDStorage * RendererSceneRenderRD::create_forward_id_storage(void)

{
  ForwardIDStorage *this;
  
  this = (ForwardIDStorage *)operator_new(8,"");
  RendererRD::ForwardIDStorage::ForwardIDStorage(this);
  return this;
}



/* RenderSceneData::_get_class_namev() const */

undefined8 * RenderSceneData::_get_class_namev(void)

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
LAB_0010e453:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010e453;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"RenderSceneData");
      goto LAB_0010e4be;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"RenderSceneData");
LAB_0010e4be:
  return &_get_class_namev()::_class_name_static;
}



/* RenderData::_get_class_namev() const */

undefined8 * RenderData::_get_class_namev(void)

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
LAB_0010e533:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010e533;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"RenderData");
      goto LAB_0010e59e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"RenderData");
LAB_0010e59e:
  return &_get_class_namev()::_class_name_static;
}



/* Image::~Image() */

void __thiscall Image::~Image(Image *this)

{
  long *plVar1;
  long lVar2;
  
  *(code **)this = Memory::free_static;
  if (*(long *)(this + 0x250) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x250) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x250);
      *(undefined8 *)(this + 0x250) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      Resource::~Resource((Resource *)this);
      return;
    }
  }
  Resource::~Resource((Resource *)this);
  return;
}



/* RendererRD::FSR::get_label() const */

void RendererRD::FSR::get_label(void)

{
  long in_RSI;
  CowData<char32_t> *in_RDI;
  
  *(undefined8 *)in_RDI = 0;
  if (*(long *)(in_RSI + 8) != 0) {
    CowData<char32_t>::_ref(in_RDI,(CowData *)(in_RSI + 8));
  }
  return;
}



/* RenderData::is_class(String const&) const */

undefined8 __thiscall RenderData::is_class(RenderData *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_0010e6df;
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
LAB_0010e6df:
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
    if (cVar6 != '\0') goto LAB_0010e793;
  }
  cVar6 = String::operator==(param_1,"RenderData");
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
              if (lVar5 == 0) goto LAB_0010e843;
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
LAB_0010e843:
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
      if (cVar6 != '\0') goto LAB_0010e793;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = String::operator==(param_1,"Object");
      return uVar7;
    }
  }
  else {
LAB_0010e793:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RenderSceneData::is_class(String const&) const */

undefined8 __thiscall RenderSceneData::is_class(RenderSceneData *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_0010e96f;
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
LAB_0010e96f:
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
    if (cVar6 != '\0') goto LAB_0010ea23;
  }
  cVar6 = String::operator==(param_1,"RenderSceneData");
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
              if (lVar5 == 0) goto LAB_0010ead3;
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
LAB_0010ead3:
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
      if (cVar6 != '\0') goto LAB_0010ea23;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = String::operator==(param_1,"Object");
      return uVar7;
    }
  }
  else {
LAB_0010ea23:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RenderData::get_class() const */

void RenderData::get_class(void)

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



/* RenderSceneData::get_class() const */

void RenderSceneData::get_class(void)

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



/* RenderSceneData::_initialize_classv() */

void RenderSceneData::_initialize_classv(void)

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
    Object::initialize_class();
    local_48 = 0;
    local_38 = "Object";
    local_30 = 6;
    String::parse_latin1((StrRange *)&local_48);
    StringName::StringName((StringName *)&local_40,(String *)&local_48,false);
    local_38 = "RenderSceneData";
    local_50 = 0;
    local_30 = 0xf;
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
    if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_bind_methods) {
      RenderSceneData::_bind_methods();
    }
    initialize_class()::initialized = '\x01';
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RenderData::_initialize_classv() */

void RenderData::_initialize_classv(void)

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
    Object::initialize_class();
    local_48 = 0;
    local_38 = "Object";
    local_30 = 6;
    String::parse_latin1((StrRange *)&local_48);
    StringName::StringName((StringName *)&local_40,(String *)&local_48,false);
    local_38 = "RenderData";
    local_50 = 0;
    local_30 = 10;
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
    if ((code *)PTR__bind_methods_00117008 != Object::_bind_methods) {
      RenderData::_bind_methods();
    }
    initialize_class()::initialized = '\x01';
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RenderData::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void RenderData::_get_property_listv(List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
  undefined4 *puVar5;
  undefined7 in_register_00000031;
  List *pLVar6;
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
  
  pLVar6 = (List *)CONCAT71(in_register_00000031,param_2);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = 0;
  local_90 = 0;
  local_78 = "RenderData";
  local_70 = 10;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "RenderData";
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
LAB_0010f1d8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0010f1d8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x0010f1f6;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x0010f1f6:
  if (lVar2 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])pLVar6 = pauVar4;
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
  StringName::StringName((StringName *)&local_78,"RenderData",false);
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



/* RenderSceneData::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void RenderSceneData::_get_property_listv(List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
  undefined4 *puVar5;
  undefined7 in_register_00000031;
  List *pLVar6;
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
  
  pLVar6 = (List *)CONCAT71(in_register_00000031,param_2);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = 0;
  local_90 = 0;
  local_78 = "RenderSceneData";
  local_70 = 0xf;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "RenderSceneData";
  local_98 = 0;
  local_70 = 0xf;
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
LAB_0010f5c8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0010f5c8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x0010f5e6;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x0010f5e6:
  if (lVar2 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])pLVar6 = pauVar4;
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
  StringName::StringName((StringName *)&local_78,"RenderSceneData",false);
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



/* CowData<RID>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<RID>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* RendererSceneRenderRD::_render_buffers_debug_draw(RenderDataRD const*) [clone .cold] */

void RendererSceneRenderRD::_render_buffers_debug_draw(RenderDataRD *param_1)

{
  code *pcVar1;
  int in_EAX;
  
  if (in_EAX + 0x80000000U < 0x7fffffff) {
    _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                     "Method/function failed. Returning: nullptr",
                     "Attempting to use an uninitialized RID",0,0);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<RenderingDevice::FramebufferPass>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<RenderingDevice::FramebufferPass>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* RendererSceneRenderRD::_update_vrs(Ref<RenderSceneBuffersRD>) [clone .cold] */

void RendererSceneRenderRD::_update_vrs(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* Image::~Image() */

void __thiscall Image::~Image(Image *this)

{
  long *plVar1;
  long lVar2;
  
  *(code **)this = Memory::free_static;
  if (*(long *)(this + 0x250) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x250) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x250);
      *(undefined8 *)(this + 0x250) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  Resource::~Resource((Resource *)this);
  operator_delete(this,0x268);
  return;
}



/* FramebufferCacheRD::_allocate_from_data(unsigned int, unsigned int, unsigned int, Vector<RID>
   const&, Vector<RenderingDevice::FramebufferPass> const&) */

long __thiscall
FramebufferCacheRD::_allocate_from_data
          (FramebufferCacheRD *this,uint param_1,uint param_2,uint param_3,Vector *param_4,
          Vector *param_5)

{
  undefined1 (*pauVar1) [16];
  undefined8 *puVar2;
  long *plVar3;
  void *pvVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  Vector *pVVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  uint uVar19;
  long lVar20;
  ulong uVar21;
  uint local_48;
  
  if ((*(long *)(param_5 + 8) == 0) || (*(long *)(*(long *)(param_5 + 8) + -8) == 0)) {
    pVVar9 = (Vector *)RenderingDevice::get_singleton();
    lVar10 = RenderingDevice::framebuffer_create(pVVar9,(long)param_4,0xffffffff);
  }
  else {
    pVVar9 = (Vector *)RenderingDevice::get_singleton();
    lVar10 = RenderingDevice::framebuffer_create_multipass(pVVar9,param_4,(long)param_5,0xffffffff);
  }
  if (lVar10 == 0) {
    _err_print_error("_allocate_from_data","./servers/rendering/renderer_rd/framebuffer_cache_rd.h",
                     0xab,"Condition \"rid.is_null()\" is true. Returning: rid",0,0);
    return 0;
  }
  iVar8 = *(int *)(this + 0x18c);
  if (iVar8 == 0) {
    uVar7 = *(uint *)(this + 0x188);
    uVar6 = uVar7 + 1;
    *(uint *)(this + 0x188) = uVar6;
    uVar14 = Memory::realloc_static(*(void **)(this + 0x178),(ulong)uVar6 * 8,false);
    *(undefined8 *)(this + 0x178) = uVar14;
    uVar14 = Memory::realloc_static
                       (*(void **)(this + 0x180),(ulong)*(uint *)(this + 0x188) << 3,false);
    lVar20 = *(long *)(this + 0x178);
    *(undefined8 *)(this + 0x180) = uVar14;
    lVar11 = (ulong)uVar7 * 8;
    uVar14 = Memory::alloc_static((ulong)*(uint *)(this + 0x198) * 0x48,false);
    uVar6 = *(uint *)(this + 0x198);
    *(undefined8 *)(lVar20 + lVar11) = uVar14;
    lVar20 = *(long *)(this + 0x180);
    uVar14 = Memory::alloc_static((ulong)uVar6 << 3,false);
    *(undefined8 *)(lVar20 + lVar11) = uVar14;
    uVar6 = *(uint *)(this + 0x198);
    if (uVar6 == 0) {
      plVar18 = *(long **)(this + 0x180);
    }
    else {
      plVar18 = *(long **)(this + 0x180);
      lVar20 = *(long *)(this + 0x178);
      plVar3 = (long *)*plVar18;
      lVar15 = 0;
      plVar16 = plVar3;
      do {
        plVar17 = plVar16 + 1;
        lVar13 = *(long *)(lVar20 + lVar11) + lVar15;
        lVar15 = lVar15 + 0x48;
        *plVar16 = lVar13;
        plVar16 = plVar17;
      } while (plVar3 + uVar6 != plVar17);
    }
    iVar8 = uVar6 + *(int *)(this + 0x18c);
  }
  else {
    plVar18 = *(long **)(this + 0x180);
  }
  uVar6 = iVar8 - 1;
  *(uint *)(this + 0x18c) = uVar6;
  pauVar1 = *(undefined1 (**) [16])
             (plVar18[uVar6 >> ((byte)*(undefined4 *)(this + 400) & 0x1f)] +
             (ulong)(uVar6 & *(uint *)(this + 0x194)) * 8);
  pauVar1[1] = (undefined1  [16])0x0;
  *(long *)(pauVar1[1] + 8) = lVar10;
  lVar11 = *(long *)(param_4 + 8);
  *(undefined8 *)pauVar1[4] = 0;
  *(uint *)pauVar1[1] = param_2;
  *(uint *)pauVar1[4] = param_1;
  *pauVar1 = (undefined1  [16])0x0;
  pauVar1[2] = (undefined1  [16])0x0;
  pauVar1[3] = (undefined1  [16])0x0;
  if (lVar11 == 0) {
LAB_0010fcd8:
    lVar11 = *(long *)(param_5 + 8);
    if ((lVar11 == 0) || (local_48 = (uint)*(undefined8 *)(lVar11 + -8), local_48 == 0)) {
LAB_0010fec0:
      *(undefined8 *)*pauVar1 = 0;
      puVar2 = *(undefined8 **)(this + (ulong)param_3 * 8 + 0x1e0);
      *(undefined8 **)(*pauVar1 + 8) = puVar2;
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = pauVar1;
      }
      *(undefined1 (**) [16])(this + (ulong)param_3 * 8 + 0x1e0) = pauVar1;
      uVar14 = RenderingDevice::get_singleton();
      RenderingDevice::framebuffer_set_invalidation_callback
                (uVar14,lVar10,FramebufferCacheRD::_framebuffer_invalidation_callback,pauVar1);
      *(int *)(this + 0x201c8) = *(int *)(this + 0x201c8) + 1;
      return lVar10;
    }
    uVar6 = 0;
LAB_0010fcfd:
    uVar7 = local_48 - 1;
    if (*(uint *)(pauVar1[3] + 4) < local_48) {
      pvVar4 = *(void **)(pauVar1[3] + 8);
      uVar6 = uVar7 >> 1 | uVar7;
      uVar6 = uVar6 | uVar6 >> 2;
      uVar6 = uVar6 | uVar6 >> 4;
      uVar6 = uVar6 | uVar6 >> 8;
      uVar6 = (uVar6 | uVar6 >> 0x10) + 1;
      *(uint *)(pauVar1[3] + 4) = uVar6;
      lVar11 = Memory::realloc_static(pvVar4,(ulong)uVar6 * 0x48,false);
      *(long *)(pauVar1[3] + 8) = lVar11;
      if (lVar11 == 0) {
LAB_001100c1:
        _err_print_error("resize","./core/templates/local_vector.h",0xa3,
                         "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      uVar6 = *(uint *)pauVar1[3];
      lVar11 = *(long *)(param_5 + 8);
      if (uVar6 < local_48) goto LAB_0010fd0b;
    }
    else {
LAB_0010fd0b:
      uVar14 = _LC58;
      lVar20 = *(long *)(pauVar1[3] + 8);
      lVar15 = lVar20 + (ulong)uVar6 * 0x48;
      do {
        *(undefined8 *)(lVar15 + 8) = 0;
        lVar13 = lVar15 + 0x48;
        *(undefined8 *)(lVar15 + 0x18) = 0;
        *(undefined8 *)(lVar15 + 0x28) = 0;
        *(undefined8 *)(lVar15 + 0x38) = 0;
        *(undefined8 *)(lVar15 + 0x40) = uVar14;
        lVar15 = lVar13;
      } while (lVar20 + 0x48 + ((ulong)uVar6 + (ulong)(uVar7 - uVar6)) * 0x48 != lVar13);
    }
    *(uint *)pauVar1[3] = local_48;
  }
  else {
    uVar21 = *(ulong *)(lVar11 + -8);
    uVar6 = (uint)uVar21;
    if (uVar6 == 0) goto LAB_0010fcd8;
    uVar19 = uVar6 - 1;
    uVar7 = uVar19 >> 1 | uVar19;
    uVar7 = uVar7 | uVar7 >> 2;
    uVar7 = uVar7 | uVar7 >> 4;
    uVar7 = uVar7 | uVar7 >> 8;
    uVar7 = (uVar7 | uVar7 >> 0x10) + 1;
    *(uint *)(pauVar1[2] + 4) = uVar7;
    lVar11 = Memory::realloc_static((void *)0x0,(ulong)uVar7 * 8,false);
    *(long *)(pauVar1[2] + 8) = lVar11;
    if (lVar11 == 0) goto LAB_001100c1;
    uVar7 = *(uint *)pauVar1[2];
    if (uVar7 < uVar6) {
      memset((void *)(lVar11 + (ulong)uVar7 * 8),0,(ulong)(uVar19 - uVar7) * 8 + 8);
    }
    lVar20 = *(long *)(param_4 + 8);
    *(uint *)pauVar1[2] = uVar6;
    if (lVar20 == 0) {
      uVar12 = 0;
      lVar15 = 0;
      goto LAB_0010fe3e;
    }
    uVar12 = 0;
    do {
      lVar15 = *(long *)(lVar20 + -8);
      if (lVar15 <= (long)uVar12) goto LAB_0010fe3e;
      *(undefined8 *)(lVar11 + uVar12 * 8) = *(undefined8 *)(lVar20 + uVar12 * 8);
      uVar12 = uVar12 + 1;
    } while (uVar12 != (uVar21 & 0xffffffff));
    uVar6 = *(uint *)pauVar1[3];
    lVar11 = *(long *)(param_5 + 8);
    if (lVar11 != 0) {
      local_48 = (uint)*(undefined8 *)(lVar11 + -8);
      if (local_48 < uVar6) goto LAB_0010fbde;
      if (local_48 <= uVar6) goto LAB_0010fcbd;
      goto LAB_0010fcfd;
    }
    if (uVar6 == 0) goto LAB_0010fec0;
    local_48 = 0;
LAB_0010fbde:
    uVar21 = (ulong)local_48;
    lVar11 = uVar21 * 0x48;
    do {
      lVar20 = *(long *)(pauVar1[3] + 8) + lVar11;
      if (*(long *)(lVar20 + 0x38) != 0) {
        LOCK();
        plVar18 = (long *)(*(long *)(lVar20 + 0x38) + -0x10);
        *plVar18 = *plVar18 + -1;
        UNLOCK();
        if (*plVar18 == 0) {
          lVar15 = *(long *)(lVar20 + 0x38);
          *(undefined8 *)(lVar20 + 0x38) = 0;
          Memory::free_static((void *)(lVar15 + -0x10),false);
        }
      }
      if (*(long *)(lVar20 + 0x28) != 0) {
        LOCK();
        plVar18 = (long *)(*(long *)(lVar20 + 0x28) + -0x10);
        *plVar18 = *plVar18 + -1;
        UNLOCK();
        if (*plVar18 == 0) {
          lVar15 = *(long *)(lVar20 + 0x28);
          *(undefined8 *)(lVar20 + 0x28) = 0;
          Memory::free_static((void *)(lVar15 + -0x10),false);
        }
      }
      if (*(long *)(lVar20 + 0x18) != 0) {
        LOCK();
        plVar18 = (long *)(*(long *)(lVar20 + 0x18) + -0x10);
        *plVar18 = *plVar18 + -1;
        UNLOCK();
        if (*plVar18 == 0) {
          lVar15 = *(long *)(lVar20 + 0x18);
          *(undefined8 *)(lVar20 + 0x18) = 0;
          Memory::free_static((void *)(lVar15 + -0x10),false);
        }
      }
      if (*(long *)(lVar20 + 8) != 0) {
        LOCK();
        plVar18 = (long *)(*(long *)(lVar20 + 8) + -0x10);
        *plVar18 = *plVar18 + -1;
        UNLOCK();
        if (*plVar18 == 0) {
          lVar15 = *(long *)(lVar20 + 8);
          *(undefined8 *)(lVar20 + 8) = 0;
          Memory::free_static((void *)(lVar15 + -0x10),false);
        }
      }
      uVar6 = (int)uVar21 + 1;
      uVar21 = (ulong)uVar6;
      lVar11 = lVar11 + 0x48;
    } while (uVar6 < *(uint *)pauVar1[3]);
    *(uint *)pauVar1[3] = local_48;
    uVar6 = local_48;
LAB_0010fcbd:
    if (uVar6 == 0) goto LAB_0010fec0;
    lVar11 = *(long *)(param_5 + 8);
  }
  uVar12 = 0;
  while (lVar11 != 0) {
    lVar15 = *(long *)(lVar11 + -8);
    if (lVar15 <= (long)uVar12) goto LAB_0010fe3e;
    lVar11 = lVar11 + uVar12 * 0x48;
    lVar20 = uVar12 * 0x48 + *(long *)(pauVar1[3] + 8);
    if (*(long *)(lVar20 + 8) != *(long *)(lVar11 + 8)) {
      CowData<int>::_ref((CowData<int> *)(lVar20 + 8),(CowData *)(lVar11 + 8));
    }
    if (*(long *)(lVar20 + 0x18) != *(long *)(lVar11 + 0x18)) {
      CowData<int>::_ref((CowData<int> *)(lVar20 + 0x18),(CowData *)(lVar11 + 0x18));
    }
    if (*(long *)(lVar20 + 0x28) != *(long *)(lVar11 + 0x28)) {
      CowData<int>::_ref((CowData<int> *)(lVar20 + 0x28),(CowData *)(lVar11 + 0x28));
    }
    if (*(long *)(lVar20 + 0x38) != *(long *)(lVar11 + 0x38)) {
      CowData<int>::_ref((CowData<int> *)(lVar20 + 0x38),(CowData *)(lVar11 + 0x38));
    }
    uVar12 = uVar12 + 1;
    *(undefined8 *)(lVar20 + 0x40) = *(undefined8 *)(lVar11 + 0x40);
    if (*(uint *)pauVar1[3] <= (uint)uVar12) goto LAB_0010fec0;
    lVar11 = *(long *)(param_5 + 8);
  }
  lVar15 = 0;
LAB_0010fe3e:
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,uVar12,lVar15,"p_index","size()","",false,true)
  ;
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
}



/* FramebufferCacheRD::get_cache_multipass(Vector<RID> const&,
   Vector<RenderingDevice::FramebufferPass> const&, unsigned int) */

undefined8 __thiscall
FramebufferCacheRD::get_cache_multipass
          (FramebufferCacheRD *this,Vector *param_1,Vector *param_2,uint param_3)

{
  undefined8 *puVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long *plVar18;
  long lVar19;
  long *plVar20;
  undefined8 *puVar21;
  ulong uVar22;
  long lVar23;
  int *piVar24;
  bool bVar25;
  uint local_50;
  uint local_48;
  
  uVar10 = (param_3 * 0x16a88000 | param_3 * -0x3361d2af >> 0x11) * 0x1b873593 ^ 0x7f07c65;
  puVar5 = *(undefined8 **)(param_1 + 8);
  uVar10 = (uVar10 << 0xd | uVar10 >> 0x13) * 5 + 0xe6546b64;
  if (puVar5 == (undefined8 *)0x0) {
    uVar16 = 0;
    uVar17 = 0;
    uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x13) * 5 + 0xe6546b64;
  }
  else {
    uVar16 = puVar5[-1];
    uVar17 = uVar16 & 0xffffffff;
    uVar10 = ((int)uVar16 * 0x16a88000 | (uint)((int)uVar16 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
             uVar10;
    uVar10 = (uVar10 << 0xd | uVar10 >> 0x13) * 5 + 0xe6546b64;
    if (0 < (long)uVar16) {
      puVar21 = puVar5;
      do {
        uVar13 = *puVar21;
        puVar21 = puVar21 + 1;
        iVar11 = (int)uVar13;
        iVar12 = (int)((ulong)uVar13 >> 0x20);
        uVar10 = (iVar11 * 0x16a88000 | (uint)(iVar11 * -0x3361d2af) >> 0x11) * 0x1b873593 ^ uVar10;
        uVar10 = (iVar12 * 0x16a88000 | (uint)(iVar12 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
                 (uVar10 << 0xd | uVar10 >> 0x13) * 5 + 0xe6546b64;
        uVar10 = (uVar10 << 0xd | uVar10 >> 0x13) * 5 + 0xe6546b64;
      } while (puVar5 + uVar16 != puVar21);
    }
  }
  lVar6 = *(long *)(param_2 + 8);
  if (lVar6 == 0) {
    local_50 = 0;
    lVar23 = 0;
    uVar10 = (uVar10 << 0xd | uVar10 >> 0x13) * 5 + 0xe6546b64;
  }
  else {
    lVar23 = *(long *)(lVar6 + -8);
    local_50 = (uint)lVar23;
    uVar10 = (local_50 * 0x16a88000 | local_50 * -0x3361d2af >> 0x11) * 0x1b873593 ^ uVar10;
    uVar10 = (uVar10 << 0xd | uVar10 >> 0x13) * 5 + 0xe6546b64;
    if (0 < lVar23) {
      puVar21 = (undefined8 *)(lVar6 + 8);
      puVar1 = puVar21 + lVar23 * 9;
      do {
        piVar24 = (int *)*puVar21;
        uVar10 = (*(int *)(puVar21 + 7) * 0x16a88000 |
                 (uint)(*(int *)(puVar21 + 7) * -0x3361d2af) >> 0x11) * 0x1b873593 ^ uVar10;
        uVar10 = (uVar10 << 0xd | uVar10 >> 0x13) * 5 + 0xe6546b64 ^
                 (*(int *)((long)puVar21 + 0x3c) * 0x16a88000 |
                 (uint)(*(int *)((long)puVar21 + 0x3c) * -0x3361d2af) >> 0x11) * 0x1b873593;
        uVar10 = (uVar10 << 0xd | uVar10 >> 0x13) * 5 + 0xe6546b64;
        if (piVar24 == (int *)0x0) {
          piVar24 = (int *)puVar21[4];
          uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x13) * 5 + 0xe6546b64;
          if (piVar24 != (int *)0x0) goto LAB_001102fd;
LAB_0011054a:
          piVar24 = (int *)puVar21[6];
          uVar10 = (uVar10 << 0xd | uVar10 >> 0x13) * 5 + 0xe6546b64;
          if (piVar24 != (int *)0x0) goto LAB_00110365;
LAB_00110561:
          uVar10 = (uVar10 << 0xd | uVar10 >> 0x13) * 5 + 0xe6546b64;
        }
        else {
          lVar7 = *(long *)(piVar24 + -2);
          uVar10 = ((int)lVar7 * 0x16a88000 | (uint)((int)lVar7 * -0x3361d2af) >> 0x11) * 0x1b873593
                   ^ uVar10;
          uVar10 = (uVar10 << 0xd | uVar10 >> 0x13) * 5 + 0xe6546b64;
          if (0 < lVar7) {
            piVar2 = piVar24 + lVar7;
            do {
              iVar11 = *piVar24;
              piVar24 = piVar24 + 1;
              uVar10 = (iVar11 * 0x16a88000 | (uint)(iVar11 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
                       uVar10;
              uVar10 = (uVar10 << 0xd | uVar10 >> 0x13) * 5 + 0xe6546b64;
            } while (piVar2 != piVar24);
          }
          piVar24 = (int *)puVar21[4];
          if (piVar24 == (int *)0x0) goto LAB_0011054a;
LAB_001102fd:
          lVar7 = *(long *)(piVar24 + -2);
          uVar10 = uVar10 ^ ((int)lVar7 * 0x16a88000 | (uint)((int)lVar7 * -0x3361d2af) >> 0x11) *
                            0x1b873593;
          uVar10 = (uVar10 << 0xd | uVar10 >> 0x13) * 5 + 0xe6546b64;
          if (0 < lVar7) {
            piVar2 = piVar24 + lVar7;
            do {
              iVar11 = *piVar24;
              piVar24 = piVar24 + 1;
              uVar10 = (iVar11 * 0x16a88000 | (uint)(iVar11 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
                       uVar10;
              uVar10 = (uVar10 << 0xd | uVar10 >> 0x13) * 5 + 0xe6546b64;
            } while (piVar2 != piVar24);
          }
          piVar24 = (int *)puVar21[6];
          if (piVar24 == (int *)0x0) goto LAB_00110561;
LAB_00110365:
          lVar7 = *(long *)(piVar24 + -2);
          uVar10 = uVar10 ^ ((int)lVar7 * 0x16a88000 | (uint)((int)lVar7 * -0x3361d2af) >> 0x11) *
                            0x1b873593;
          uVar10 = (uVar10 << 0xd | uVar10 >> 0x13) * 5 + 0xe6546b64;
          if (0 < lVar7) {
            piVar2 = piVar24 + lVar7;
            do {
              iVar11 = *piVar24;
              piVar24 = piVar24 + 1;
              uVar10 = (iVar11 * 0x16a88000 | (uint)(iVar11 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
                       uVar10;
              uVar10 = (uVar10 << 0xd | uVar10 >> 0x13) * 5 + 0xe6546b64;
            } while (piVar2 != piVar24);
          }
        }
        puVar21 = puVar21 + 9;
      } while (puVar1 != puVar21);
    }
  }
  uVar10 = (uVar10 >> 0x10 ^ uVar10) * -0x7a143595;
  uVar10 = (uVar10 ^ uVar10 >> 0xd) * -0x3d4d51cb;
  uVar10 = uVar10 ^ uVar10 >> 0x10;
  lVar7 = *(long *)(this + (ulong)(uVar10 % 0x3ffd) * 8 + 0x1e0);
  do {
    if (lVar7 == 0) {
      uVar13 = _allocate_from_data(this,param_3,uVar10,uVar10 % 0x3ffd,param_1,param_2);
      return uVar13;
    }
    if ((*(uint *)(lVar7 + 0x10) == uVar10) && (*(uint *)(lVar7 + 0x40) == param_3)) {
      uVar3 = *(uint *)(lVar7 + 0x20);
      if ((uVar3 == (uint)uVar17) && (uVar4 = *(uint *)(lVar7 + 0x30), uVar4 == local_50)) {
        if ((long)uVar16 < 1) {
LAB_001105b0:
          if (lVar23 < 1) {
LAB_001107a7:
            return *(undefined8 *)(lVar7 + 0x18);
          }
          uVar3 = uVar4;
          if (uVar4 == 0) {
            uVar17 = 0;
LAB_001104eb:
            _err_print_index_error
                      ("operator[]","./core/templates/local_vector.h",0xae,uVar17,(ulong)uVar3,
                       "p_index","count","",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar9 = (code *)invalidInstructionException();
            (*pcVar9)();
          }
          plVar20 = (long *)(lVar6 + 8);
          local_48 = 0;
          plVar18 = (long *)(*(long *)(lVar7 + 0x38) + 8);
          while (((int)plVar20[7] == (int)plVar18[7] &&
                 (*(int *)((long)plVar20 + 0x3c) == *(int *)((long)plVar18 + 0x3c)))) {
            lVar8 = *plVar20;
            lVar19 = *plVar18;
            if (lVar8 == 0) {
              if (lVar19 != 0) {
                lVar15 = *(long *)(lVar19 + -8);
                goto joined_r0x0011078f;
              }
            }
            else {
              lVar15 = *(long *)(lVar8 + -8);
              if (lVar19 == 0) {
joined_r0x0011078f:
                if (lVar15 != 0) break;
              }
              else {
                if (lVar15 != *(long *)(lVar19 + -8)) break;
                if (0 < lVar15) {
                  lVar14 = 0;
                  do {
                    if (*(int *)(lVar8 + lVar14 * 4) != *(int *)(lVar19 + lVar14 * 4))
                    goto LAB_00110440;
                    lVar14 = lVar14 + 1;
                  } while (lVar15 != lVar14);
                }
              }
            }
            lVar8 = plVar20[4];
            lVar19 = plVar18[4];
            if (lVar8 == 0) {
              if (lVar19 != 0) {
                lVar15 = *(long *)(lVar19 + -8);
                goto joined_r0x00110715;
              }
            }
            else {
              lVar15 = *(long *)(lVar8 + -8);
              if (lVar19 == 0) {
joined_r0x00110715:
                if (lVar15 != 0) break;
              }
              else {
                if (lVar15 != *(long *)(lVar19 + -8)) break;
                if (0 < lVar15) {
                  lVar14 = 0;
                  do {
                    if (*(int *)(lVar8 + lVar14 * 4) != *(int *)(lVar19 + lVar14 * 4))
                    goto LAB_00110440;
                    lVar14 = lVar14 + 1;
                  } while (lVar15 != lVar14);
                }
              }
            }
            lVar8 = plVar20[6];
            if (lVar8 == 0) {
              lVar19 = plVar18[6];
              if (lVar19 != 0) {
                lVar15 = 0;
                goto LAB_001106ca;
              }
            }
            else {
              lVar19 = plVar18[6];
              lVar15 = *(long *)(lVar8 + -8);
              if (lVar19 == 0) {
                if (lVar15 != 0) break;
              }
              else {
LAB_001106ca:
                if (*(long *)(lVar19 + -8) != lVar15) break;
                if (0 < lVar15) {
                  lVar14 = 0;
                  do {
                    if (*(int *)(lVar8 + lVar14 * 4) != *(int *)(lVar19 + lVar14 * 4))
                    goto LAB_00110440;
                    lVar14 = lVar14 + 1;
                  } while (lVar14 != lVar15);
                }
              }
            }
            local_48 = local_48 + 1;
            if (local_48 == (uint)lVar23) goto LAB_001107a7;
            plVar20 = plVar20 + 9;
            plVar18 = plVar18 + 9;
            if (local_48 == uVar4) {
              uVar17 = (ulong)uVar4;
              goto LAB_001104eb;
            }
          }
        }
        else {
          if ((uint)uVar17 == 0) {
            uVar17 = 0;
            goto LAB_001104eb;
          }
          uVar22 = 1;
          while (puVar5[uVar22 - 1] == *(long *)(*(long *)(lVar7 + 0x28) + -8 + uVar22 * 8)) {
            if (uVar16 == uVar22) goto LAB_001105b0;
            bVar25 = uVar17 == uVar22;
            uVar22 = uVar22 + 1;
            if (bVar25) goto LAB_001104eb;
          }
        }
      }
    }
LAB_00110440:
    lVar7 = *(long *)(lVar7 + 8);
  } while( true );
}



/* RenderDataRD::~RenderDataRD() */

void __thiscall RenderDataRD::~RenderDataRD(RenderDataRD *this)

{
  Object *pOVar1;
  char cVar2;
  
  *(undefined **)this = &RenderSceneBuffersRD::typeinfo;
  if (*(void **)(this + 0x270) != (void *)0x0) {
    if (*(int *)(this + 0x268) != 0) {
      *(undefined4 *)(this + 0x268) = 0;
    }
    Memory::free_static(*(void **)(this + 0x270),false);
  }
  if (*(void **)(this + 0x260) != (void *)0x0) {
    if (*(int *)(this + 600) != 0) {
      *(undefined4 *)(this + 600) = 0;
    }
    Memory::free_static(*(void **)(this + 0x260),false);
  }
  if (*(void **)(this + 0x250) != (void *)0x0) {
    if (*(int *)(this + 0x248) != 0) {
      *(undefined4 *)(this + 0x248) = 0;
    }
    Memory::free_static(*(void **)(this + 0x250),false);
  }
  if (*(long *)(this + 0x178) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0x178);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  *(undefined ***)this = &PTR__initialize_classv_00112eb0;
  Object::~Object((Object *)this);
  return;
}



/* RenderDataRD::~RenderDataRD() */

void __thiscall RenderDataRD::~RenderDataRD(RenderDataRD *this)

{
  Object *pOVar1;
  char cVar2;
  
  *(undefined **)this = &RenderSceneBuffersRD::typeinfo;
  if (*(void **)(this + 0x270) != (void *)0x0) {
    if (*(int *)(this + 0x268) != 0) {
      *(undefined4 *)(this + 0x268) = 0;
    }
    Memory::free_static(*(void **)(this + 0x270),false);
  }
  if (*(void **)(this + 0x260) != (void *)0x0) {
    if (*(int *)(this + 600) != 0) {
      *(undefined4 *)(this + 600) = 0;
    }
    Memory::free_static(*(void **)(this + 0x260),false);
  }
  if (*(void **)(this + 0x250) != (void *)0x0) {
    if (*(int *)(this + 0x248) != 0) {
      *(undefined4 *)(this + 0x248) = 0;
    }
    Memory::free_static(*(void **)(this + 0x250),false);
  }
  if (*(long *)(this + 0x178) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0x178);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  *(undefined ***)this = &PTR__initialize_classv_00112eb0;
  Object::~Object((Object *)this);
  operator_delete(this,0x298);
  return;
}



/* CowData<RID>::_realloc(long) */

undefined8 __thiscall CowData<RID>::_realloc(CowData<RID> *this,long param_1)

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
/* Error CowData<RID>::resize<false>(long) */

undefined8 __thiscall CowData<RID>::resize<false>(CowData<RID> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  
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
    lVar8 = 0;
    lVar3 = 0;
  }
  else {
    lVar8 = *(long *)(lVar3 + -8);
    if (param_1 == lVar8) {
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
    lVar3 = lVar8 * 8;
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
LAB_00112190:
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
  lVar7 = uVar4 + 1;
  if (lVar7 == 0) goto LAB_00112190;
  if (param_1 <= lVar8) {
    if ((lVar7 != lVar3) && (uVar6 = _realloc(this,lVar7), (int)uVar6 != 0)) {
      return uVar6;
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
  if (lVar7 == lVar3) {
LAB_001120fc:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar3 = puVar9[-1];
    if (param_1 <= lVar3) goto LAB_00112091;
  }
  else {
    if (lVar8 != 0) {
      uVar6 = _realloc(this,lVar7);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
      goto LAB_001120fc;
    }
    puVar5 = (undefined8 *)Memory::alloc_static(uVar4 + 0x11,false);
    if (puVar5 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar9 = puVar5 + 2;
    *puVar5 = 1;
    puVar5[1] = 0;
    *(undefined8 **)this = puVar9;
    lVar3 = 0;
  }
  memset(puVar9 + lVar3,0,(param_1 - lVar3) * 8);
LAB_00112091:
  puVar9[-1] = param_1;
  return 0;
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



/* CowData<Vector<unsigned char> >::_unref() */

void __thiscall CowData<Vector<unsigned_char>>::_unref(CowData<Vector<unsigned_char>> *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    lVar2 = *(long *)this;
    if (lVar2 != 0) {
      lVar3 = *(long *)(lVar2 + -8);
      *(undefined8 *)this = 0;
      if (lVar3 != 0) {
        lVar7 = 0;
        lVar6 = lVar2;
        do {
          if (*(long *)(lVar6 + 8) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)(lVar6 + 8) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar4 = *(long *)(lVar6 + 8);
              *(undefined8 *)(lVar6 + 8) = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          lVar7 = lVar7 + 1;
          lVar6 = lVar6 + 0x10;
        } while (lVar3 != lVar7);
      }
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  *(undefined8 *)this = 0;
  return;
}



/* CowData<RenderingDevice::FramebufferPass>::_unref() */

void __thiscall
CowData<RenderingDevice::FramebufferPass>::_unref(CowData<RenderingDevice::FramebufferPass> *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    lVar2 = *(long *)this;
    if (lVar2 != 0) {
      lVar3 = *(long *)(lVar2 + -8);
      *(undefined8 *)this = 0;
      if (lVar3 != 0) {
        lVar7 = 0;
        lVar6 = lVar2;
        do {
          if (*(long *)(lVar6 + 0x38) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)(lVar6 + 0x38) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar4 = *(long *)(lVar6 + 0x38);
              *(undefined8 *)(lVar6 + 0x38) = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          if (*(long *)(lVar6 + 0x28) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)(lVar6 + 0x28) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar4 = *(long *)(lVar6 + 0x28);
              *(undefined8 *)(lVar6 + 0x28) = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          if (*(long *)(lVar6 + 0x18) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)(lVar6 + 0x18) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar4 = *(long *)(lVar6 + 0x18);
              *(undefined8 *)(lVar6 + 0x18) = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          if (*(long *)(lVar6 + 8) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)(lVar6 + 8) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar4 = *(long *)(lVar6 + 8);
              *(undefined8 *)(lVar6 + 8) = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          lVar7 = lVar7 + 1;
          lVar6 = lVar6 + 0x48;
        } while (lVar3 != lVar7);
      }
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  *(undefined8 *)this = 0;
  return;
}



/* RID FramebufferCacheRD::get_cache<RID>(RID) */

undefined8 __thiscall FramebufferCacheRD::get_cache<RID>(FramebufferCacheRD *this,long param_2)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  long in_FS_OFFSET;
  Vector aVStack_58 [8];
  long local_50;
  Vector local_48 [8];
  undefined8 local_40 [2];
  long local_30;
  
  iVar5 = (int)((ulong)param_2 >> 0x20);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = ((int)param_2 * 0x16a88000 | (uint)((int)param_2 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
          0xb3e1e8c0;
  uVar3 = (iVar5 * 0x16a88000 | (uint)(iVar5 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
          (uVar3 << 0xd | uVar3 >> 0x13) * 5 + 0xe6546b64;
  uVar3 = (uVar3 << 0xd | uVar3 >> 0x13) * 5 + 0xe6546b64;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x13) * 5 + 0xe6546b64;
  uVar3 = (uVar3 >> 0x10 ^ uVar3) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  lVar2 = *(long *)(this + (ulong)(uVar3 % 0x3ffd) * 8 + 0x1e0);
  do {
    if (lVar2 == 0) {
      local_50 = 0;
      Vector<RID>::push_back((Vector<RID> *)aVStack_58);
      local_40[0] = 0;
      uVar4 = _allocate_from_data(this,1,uVar3,uVar3 % 0x3ffd,aVStack_58,local_48);
      CowData<RenderingDevice::FramebufferPass>::_unref
                ((CowData<RenderingDevice::FramebufferPass> *)local_40);
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
LAB_00112560:
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return uVar4;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    if ((((*(uint *)(lVar2 + 0x10) == uVar3) && (*(int *)(lVar2 + 0x30) == 0)) &&
        (*(int *)(lVar2 + 0x20) == 1)) &&
       ((*(int *)(lVar2 + 0x40) == 1 && (param_2 == **(long **)(lVar2 + 0x28))))) {
      uVar4 = *(undefined8 *)(lVar2 + 0x18);
      goto LAB_00112560;
    }
    lVar2 = *(long *)(lVar2 + 8);
  } while( true );
}



/* CowData<RenderingDevice::FramebufferPass>::_realloc(long) */

undefined8 __thiscall
CowData<RenderingDevice::FramebufferPass>::_realloc
          (CowData<RenderingDevice::FramebufferPass> *this,long param_1)

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
/* Error CowData<RenderingDevice::FramebufferPass>::resize<false>(long) */

undefined8 __thiscall
CowData<RenderingDevice::FramebufferPass>::resize<false>
          (CowData<RenderingDevice::FramebufferPass> *this,long param_1)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
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
    lVar7 = 0;
    lVar9 = 0;
  }
  else {
    lVar7 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar7) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    lVar9 = lVar7 * 0x48;
    if (lVar9 != 0) {
      uVar10 = lVar9 - 1U | lVar9 - 1U >> 1;
      uVar10 = uVar10 | uVar10 >> 2;
      uVar10 = uVar10 | uVar10 >> 4;
      uVar10 = uVar10 | uVar10 >> 8;
      uVar10 = uVar10 | uVar10 >> 0x10;
      lVar9 = (uVar10 | uVar10 >> 0x20) + 1;
    }
  }
  if (param_1 * 0x48 == 0) {
LAB_001129b0:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar10 = param_1 * 0x48 - 1;
  uVar10 = uVar10 >> 1 | uVar10;
  uVar10 = uVar10 | uVar10 >> 2;
  uVar10 = uVar10 | uVar10 >> 4;
  uVar10 = uVar10 | uVar10 >> 8;
  uVar10 = uVar10 | uVar10 >> 0x10;
  uVar10 = uVar10 | uVar10 >> 0x20;
  lVar12 = uVar10 + 1;
  if (lVar12 == 0) goto LAB_001129b0;
  uVar11 = param_1;
  if (param_1 <= lVar7) {
    while (lVar7 = *(long *)this, lVar7 != 0) {
      if (*(ulong *)(lVar7 + -8) <= uVar11) {
        if (lVar12 != lVar9) {
          uVar6 = _realloc(this,lVar12);
          if ((int)uVar6 != 0) {
            return uVar6;
          }
          lVar7 = *(long *)this;
          if (lVar7 == 0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
        }
        *(long *)(lVar7 + -8) = param_1;
        return 0;
      }
      lVar7 = lVar7 + uVar11 * 0x48;
      if (*(long *)(lVar7 + 0x38) != 0) {
        LOCK();
        plVar1 = (long *)(*(long *)(lVar7 + 0x38) + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar2 = *(long *)(lVar7 + 0x38);
          *(undefined8 *)(lVar7 + 0x38) = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if (*(long *)(lVar7 + 0x28) != 0) {
        LOCK();
        plVar1 = (long *)(*(long *)(lVar7 + 0x28) + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar2 = *(long *)(lVar7 + 0x28);
          *(undefined8 *)(lVar7 + 0x28) = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if (*(long *)(lVar7 + 0x18) != 0) {
        LOCK();
        plVar1 = (long *)(*(long *)(lVar7 + 0x18) + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar2 = *(long *)(lVar7 + 0x18);
          *(undefined8 *)(lVar7 + 0x18) = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if (*(long *)(lVar7 + 8) != 0) {
        LOCK();
        plVar1 = (long *)(*(long *)(lVar7 + 8) + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar2 = *(long *)(lVar7 + 8);
          *(undefined8 *)(lVar7 + 8) = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      uVar11 = uVar11 + 1;
    }
    goto LAB_00112a06;
  }
  if (lVar12 == lVar9) {
LAB_00112923:
    puVar8 = *(undefined8 **)this;
    if (puVar8 == (undefined8 *)0x0) {
LAB_00112a06:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar7 = puVar8[-1];
    if (param_1 <= lVar7) goto LAB_001127ed;
  }
  else {
    if (lVar7 != 0) {
      uVar6 = _realloc(this,lVar12);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
      goto LAB_00112923;
    }
    puVar4 = (undefined8 *)Memory::alloc_static(uVar10 + 0x11,false);
    if (puVar4 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar8 = puVar4 + 2;
    *puVar4 = 1;
    puVar4[1] = 0;
    *(undefined8 **)this = puVar8;
    lVar7 = 0;
  }
  uVar6 = _LC58;
  puVar4 = puVar8 + lVar7 * 9;
  do {
    puVar4[1] = 0;
    puVar5 = puVar4 + 9;
    puVar4[3] = 0;
    puVar4[5] = 0;
    puVar4[7] = 0;
    puVar4[8] = uVar6;
    puVar4 = puVar5;
  } while (puVar5 != puVar8 + param_1 * 9);
LAB_001127ed:
  puVar8[-1] = param_1;
  return 0;
}



/* WARNING: Control flow encountered bad instruction data */
/* RenderDataRD::~RenderDataRD() */

void __thiscall RenderDataRD::~RenderDataRD(RenderDataRD *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* Image::~Image() */

void __thiscall Image::~Image(Image *this)

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


// This is taking way too long.
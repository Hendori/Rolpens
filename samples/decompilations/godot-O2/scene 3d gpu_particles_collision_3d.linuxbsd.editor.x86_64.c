
/* GPUParticlesCollision3D::get_cull_mask() const */

undefined4 __thiscall GPUParticlesCollision3D::get_cull_mask(GPUParticlesCollision3D *this)

{
  return *(undefined4 *)(this + 0x560);
}



/* GPUParticlesCollisionSphere3D::get_radius() const */

undefined4 __thiscall GPUParticlesCollisionSphere3D::get_radius(GPUParticlesCollisionSphere3D *this)

{
  return *(undefined4 *)(this + 0x570);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GPUParticlesCollisionSphere3D::get_aabb() const */

void GPUParticlesCollisionSphere3D::get_aabb(void)

{
  float fVar1;
  long in_RSI;
  uint *in_RDI;
  uint uVar2;
  float fVar3;
  
  fVar1 = *(float *)(in_RSI + 0x570);
  fVar3 = fVar1 + fVar1;
  uVar2 = (uint)fVar1 ^ __LC0;
  *(ulong *)(in_RDI + 4) = CONCAT44(fVar3,fVar3);
  *in_RDI = uVar2;
  in_RDI[1] = uVar2;
  in_RDI[2] = uVar2;
  in_RDI[3] = (uint)fVar3;
  return;
}



/* GPUParticlesCollisionBox3D::get_size() const */

undefined1  [16] __thiscall GPUParticlesCollisionBox3D::get_size(GPUParticlesCollisionBox3D *this)

{
  long in_FS_OFFSET;
  undefined1 auVar1 [16];
  
  if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar1._12_4_ = 0;
    auVar1._0_12_ = *(undefined1 (*) [12])(this + 0x570);
    return auVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GPUParticlesCollisionSDF3D::get_aabb() const */

void GPUParticlesCollisionSDF3D::get_aabb(void)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  long in_RSI;
  undefined8 *in_RDI;
  float fVar4;
  
  fVar3 = _UNK_00125fd4;
  fVar2 = _LC3;
  uVar1 = *(undefined8 *)(in_RSI + 0x570);
  *(undefined8 *)((long)in_RDI + 0xc) = *(undefined8 *)(in_RSI + 0x570);
  fVar4 = _LC3 * *(float *)(in_RSI + 0x578);
  *(undefined4 *)((long)in_RDI + 0x14) = *(undefined4 *)(in_RSI + 0x578);
  *in_RDI = CONCAT44(fVar3 * (float)((ulong)uVar1 >> 0x20),fVar2 * (float)uVar1);
  *(float *)(in_RDI + 1) = fVar4;
  return;
}



/* GPUParticlesCollisionSDF3D::set_thickness(float) */

void __thiscall
GPUParticlesCollisionSDF3D::set_thickness(GPUParticlesCollisionSDF3D *this,float param_1)

{
  *(float *)(this + 0x590) = param_1;
  return;
}



/* GPUParticlesCollisionSDF3D::get_thickness() const */

undefined4 __thiscall GPUParticlesCollisionSDF3D::get_thickness(GPUParticlesCollisionSDF3D *this)

{
  return *(undefined4 *)(this + 0x590);
}



/* GPUParticlesCollisionSDF3D::get_resolution() const */

undefined4 __thiscall GPUParticlesCollisionSDF3D::get_resolution(GPUParticlesCollisionSDF3D *this)

{
  return *(undefined4 *)(this + 0x57c);
}



/* GPUParticlesCollisionSDF3D::get_bake_mask() const */

undefined4 __thiscall GPUParticlesCollisionSDF3D::get_bake_mask(GPUParticlesCollisionSDF3D *this)

{
  return *(undefined4 *)(this + 0x580);
}



/* GPUParticlesCollisionHeightField3D::get_size() const */

undefined1  [16] __thiscall
GPUParticlesCollisionHeightField3D::get_size(GPUParticlesCollisionHeightField3D *this)

{
  long in_FS_OFFSET;
  undefined1 auVar1 [16];
  
  if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar1._12_4_ = 0;
    auVar1._0_12_ = *(undefined1 (*) [12])(this + 0x574);
    return auVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GPUParticlesCollisionHeightField3D::get_resolution() const */

undefined4 __thiscall
GPUParticlesCollisionHeightField3D::get_resolution(GPUParticlesCollisionHeightField3D *this)

{
  return *(undefined4 *)(this + 0x580);
}



/* GPUParticlesCollisionHeightField3D::get_update_mode() const */

undefined4 __thiscall
GPUParticlesCollisionHeightField3D::get_update_mode(GPUParticlesCollisionHeightField3D *this)

{
  return *(undefined4 *)(this + 0x588);
}



/* GPUParticlesCollisionHeightField3D::get_heightfield_mask() const */

undefined4 __thiscall
GPUParticlesCollisionHeightField3D::get_heightfield_mask(GPUParticlesCollisionHeightField3D *this)

{
  return *(undefined4 *)(this + 0x570);
}



/* GPUParticlesCollisionHeightField3D::is_follow_camera_enabled() const */

GPUParticlesCollisionHeightField3D __thiscall
GPUParticlesCollisionHeightField3D::is_follow_camera_enabled
          (GPUParticlesCollisionHeightField3D *this)

{
  return this[0x584];
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GPUParticlesCollisionHeightField3D::get_aabb() const */

void GPUParticlesCollisionHeightField3D::get_aabb(void)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  long in_RSI;
  undefined8 *in_RDI;
  float fVar4;
  
  fVar3 = _UNK_00125fd4;
  fVar2 = _LC3;
  uVar1 = *(undefined8 *)(in_RSI + 0x574);
  *(undefined8 *)((long)in_RDI + 0xc) = *(undefined8 *)(in_RSI + 0x574);
  fVar4 = _LC3 * *(float *)(in_RSI + 0x57c);
  *(undefined4 *)((long)in_RDI + 0x14) = *(undefined4 *)(in_RSI + 0x57c);
  *in_RDI = CONCAT44(fVar3 * (float)((ulong)uVar1 >> 0x20),fVar2 * (float)uVar1);
  *(float *)(in_RDI + 1) = fVar4;
  return;
}



/* GPUParticlesAttractor3D::get_attenuation() const */

undefined4 __thiscall GPUParticlesAttractor3D::get_attenuation(GPUParticlesAttractor3D *this)

{
  return *(undefined4 *)(this + 0x574);
}



/* GPUParticlesAttractor3D::get_directionality() const */

undefined4 __thiscall GPUParticlesAttractor3D::get_directionality(GPUParticlesAttractor3D *this)

{
  return *(undefined4 *)(this + 0x578);
}



/* GPUParticlesAttractorSphere3D::get_radius() const */

undefined4 __thiscall GPUParticlesAttractorSphere3D::get_radius(GPUParticlesAttractorSphere3D *this)

{
  return *(undefined4 *)(this + 0x57c);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GPUParticlesAttractorSphere3D::get_aabb() const */

void GPUParticlesAttractorSphere3D::get_aabb(void)

{
  float fVar1;
  long in_RSI;
  uint *in_RDI;
  uint uVar2;
  float fVar3;
  
  fVar1 = *(float *)(in_RSI + 0x57c);
  fVar3 = fVar1 + fVar1;
  uVar2 = (uint)fVar1 ^ __LC0;
  *(ulong *)(in_RDI + 4) = CONCAT44(fVar3,fVar3);
  *in_RDI = uVar2;
  in_RDI[1] = uVar2;
  in_RDI[2] = uVar2;
  in_RDI[3] = (uint)fVar3;
  return;
}



/* GPUParticlesAttractorBox3D::get_size() const */

undefined1  [16] __thiscall GPUParticlesAttractorBox3D::get_size(GPUParticlesAttractorBox3D *this)

{
  long in_FS_OFFSET;
  undefined1 auVar1 [16];
  
  if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar1._12_4_ = 0;
    auVar1._0_12_ = *(undefined1 (*) [12])(this + 0x57c);
    return auVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GPUParticlesAttractorVectorField3D::get_aabb() const */

void GPUParticlesAttractorVectorField3D::get_aabb(void)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  long in_RSI;
  undefined8 *in_RDI;
  float fVar4;
  
  fVar3 = _UNK_00125fd4;
  fVar2 = _LC3;
  uVar1 = *(undefined8 *)(in_RSI + 0x57c);
  *(undefined8 *)((long)in_RDI + 0xc) = *(undefined8 *)(in_RSI + 0x57c);
  fVar4 = _LC3 * *(float *)(in_RSI + 0x584);
  *(undefined4 *)((long)in_RDI + 0x14) = *(undefined4 *)(in_RSI + 0x584);
  *in_RDI = CONCAT44(fVar3 * (float)((ulong)uVar1 >> 0x20),fVar2 * (float)uVar1);
  *(float *)(in_RDI + 1) = fVar4;
  return;
}



/* GPUParticlesCollision3D::set_cull_mask(unsigned int) */

void __thiscall GPUParticlesCollision3D::set_cull_mask(GPUParticlesCollision3D *this,uint param_1)

{
  long *plVar1;
  
  *(uint *)(this + 0x560) = param_1;
  plVar1 = (long *)RenderingServer::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x00100366. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x8a8))(plVar1,*(undefined8 *)(this + 0x568),param_1);
  return;
}



/* GPUParticlesAttractor3D::set_cull_mask(unsigned int) */

void __thiscall GPUParticlesAttractor3D::set_cull_mask(GPUParticlesAttractor3D *this,uint param_1)

{
  long *plVar1;
  
  *(uint *)(this + 0x560) = param_1;
  plVar1 = (long *)RenderingServer::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x001003a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x8a8))(plVar1,*(undefined8 *)(this + 0x568),param_1);
  return;
}



/* GPUParticlesAttractor3D::set_strength(float) */

void __thiscall GPUParticlesAttractor3D::set_strength(GPUParticlesAttractor3D *this,float param_1)

{
  long *plVar1;
  
  *(float *)(this + 0x570) = param_1;
  plVar1 = (long *)RenderingServer::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x001003ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x8c0))(param_1,plVar1,*(undefined8 *)(this + 0x568));
  return;
}



/* GPUParticlesAttractor3D::set_attenuation(float) */

void __thiscall
GPUParticlesAttractor3D::set_attenuation(GPUParticlesAttractor3D *this,float param_1)

{
  long *plVar1;
  
  *(float *)(this + 0x574) = param_1;
  plVar1 = (long *)RenderingServer::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x0010042e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x8d0))(param_1,plVar1,*(undefined8 *)(this + 0x568));
  return;
}



/* GPUParticlesCollisionHeightField3D::set_heightfield_mask(unsigned int) */

void __thiscall
GPUParticlesCollisionHeightField3D::set_heightfield_mask
          (GPUParticlesCollisionHeightField3D *this,uint param_1)

{
  long *plVar1;
  
  *(uint *)(this + 0x570) = param_1;
  plVar1 = (long *)RenderingServer::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x00100466. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x8f0))(plVar1,*(undefined8 *)(this + 0x568),param_1);
  return;
}



/* GPUParticlesCollisionSDF3D::set_resolution(GPUParticlesCollisionSDF3D::Resolution) */

void __thiscall
GPUParticlesCollisionSDF3D::set_resolution(GPUParticlesCollisionSDF3D *this,undefined4 param_2)

{
  *(undefined4 *)(this + 0x57c) = param_2;
  Node3D::update_gizmos();
  return;
}



/* GPUParticlesAttractor3D::set_directionality(float) */

void __thiscall
GPUParticlesAttractor3D::set_directionality(GPUParticlesAttractor3D *this,float param_1)

{
  long *plVar1;
  
  *(float *)(this + 0x578) = param_1;
  plVar1 = (long *)RenderingServer::get_singleton();
  (**(code **)(*plVar1 + 0x8c8))(param_1,plVar1,*(undefined8 *)(this + 0x568));
  Node3D::update_gizmos();
  return;
}



/* GPUParticlesCollisionSphere3D::set_radius(float) */

void __thiscall
GPUParticlesCollisionSphere3D::set_radius(GPUParticlesCollisionSphere3D *this,float param_1)

{
  long *plVar1;
  
  *(float *)(this + 0x570) = param_1;
  plVar1 = (long *)RenderingServer::get_singleton();
  (**(code **)(*plVar1 + 0x8b0))(*(undefined4 *)(this + 0x570),plVar1,*(undefined8 *)(this + 0x568))
  ;
  Node3D::update_gizmos();
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GPUParticlesCollisionBox3D::set_size(Vector3 const&) */

void __thiscall
GPUParticlesCollisionBox3D::set_size(GPUParticlesCollisionBox3D *this,Vector3 *param_1)

{
  long *plVar1;
  long in_FS_OFFSET;
  undefined8 local_20;
  float local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(this + 0x570) = *(undefined8 *)param_1;
  *(undefined4 *)(this + 0x578) = *(undefined4 *)(param_1 + 8);
  plVar1 = (long *)RenderingServer::get_singleton();
  local_18 = _LC2 * *(float *)(this + 0x578);
  local_20 = CONCAT44((float)((ulong)*(undefined8 *)(this + 0x570) >> 0x20) * _UNK_00125fdc,
                      (float)*(undefined8 *)(this + 0x570) * _LC2);
  (**(code **)(*plVar1 + 0x8b8))(plVar1,*(undefined8 *)(this + 0x568),&local_20);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    Node3D::update_gizmos();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GPUParticlesCollisionSDF3D::set_size(Vector3 const&) */

void __thiscall
GPUParticlesCollisionSDF3D::set_size(GPUParticlesCollisionSDF3D *this,Vector3 *param_1)

{
  long *plVar1;
  long in_FS_OFFSET;
  undefined8 local_20;
  float local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(this + 0x570) = *(undefined8 *)param_1;
  *(undefined4 *)(this + 0x578) = *(undefined4 *)(param_1 + 8);
  plVar1 = (long *)RenderingServer::get_singleton();
  local_18 = _LC2 * *(float *)(this + 0x578);
  local_20 = CONCAT44((float)((ulong)*(undefined8 *)(this + 0x570) >> 0x20) * _UNK_00125fdc,
                      (float)*(undefined8 *)(this + 0x570) * _LC2);
  (**(code **)(*plVar1 + 0x8b8))(plVar1,*(undefined8 *)(this + 0x568),&local_20);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    Node3D::update_gizmos();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GPUParticlesCollisionHeightField3D::set_size(Vector3 const&) */

void __thiscall
GPUParticlesCollisionHeightField3D::set_size
          (GPUParticlesCollisionHeightField3D *this,Vector3 *param_1)

{
  long *plVar1;
  long in_FS_OFFSET;
  undefined8 local_20;
  float local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(this + 0x574) = *(undefined8 *)param_1;
  *(undefined4 *)(this + 0x57c) = *(undefined4 *)(param_1 + 8);
  plVar1 = (long *)RenderingServer::get_singleton();
  local_18 = _LC2 * *(float *)(this + 0x57c);
  local_20 = CONCAT44((float)((ulong)*(undefined8 *)(this + 0x574) >> 0x20) * _UNK_00125fdc,
                      (float)*(undefined8 *)(this + 0x574) * _LC2);
  (**(code **)(*plVar1 + 0x8b8))(plVar1,*(undefined8 *)(this + 0x568),&local_20);
  Node3D::update_gizmos();
  plVar1 = (long *)RenderingServer::get_singleton();
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001006fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x8e0))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(plVar1,*(undefined8 *)(this + 0x568));
}



/* GPUParticlesCollisionHeightField3D::set_resolution(GPUParticlesCollisionHeightField3D::Resolution)
    */

void __thiscall
GPUParticlesCollisionHeightField3D::set_resolution
          (GPUParticlesCollisionHeightField3D *this,undefined4 param_2)

{
  long *plVar1;
  
  *(undefined4 *)(this + 0x580) = param_2;
  plVar1 = (long *)RenderingServer::get_singleton();
  (**(code **)(*plVar1 + 0x8e8))(plVar1,*(undefined8 *)(this + 0x568),*(undefined4 *)(this + 0x580))
  ;
  Node3D::update_gizmos();
  plVar1 = (long *)RenderingServer::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x0010075e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x8e0))(plVar1,*(undefined8 *)(this + 0x568));
  return;
}



/* GPUParticlesAttractorSphere3D::set_radius(float) */

void __thiscall
GPUParticlesAttractorSphere3D::set_radius(GPUParticlesAttractorSphere3D *this,float param_1)

{
  long *plVar1;
  
  *(float *)(this + 0x57c) = param_1;
  plVar1 = (long *)RenderingServer::get_singleton();
  (**(code **)(*plVar1 + 0x8b0))(*(undefined4 *)(this + 0x57c),plVar1,*(undefined8 *)(this + 0x568))
  ;
  Node3D::update_gizmos();
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GPUParticlesAttractorBox3D::set_size(Vector3 const&) */

void __thiscall
GPUParticlesAttractorBox3D::set_size(GPUParticlesAttractorBox3D *this,Vector3 *param_1)

{
  long *plVar1;
  long in_FS_OFFSET;
  undefined8 local_20;
  float local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(this + 0x57c) = *(undefined8 *)param_1;
  *(undefined4 *)(this + 0x584) = *(undefined4 *)(param_1 + 8);
  plVar1 = (long *)RenderingServer::get_singleton();
  local_18 = _LC2 * *(float *)(this + 0x584);
  local_20 = CONCAT44((float)((ulong)*(undefined8 *)(this + 0x57c) >> 0x20) * _UNK_00125fdc,
                      (float)*(undefined8 *)(this + 0x57c) * _LC2);
  (**(code **)(*plVar1 + 0x8b8))(plVar1,*(undefined8 *)(this + 0x568),&local_20);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    Node3D::update_gizmos();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GPUParticlesAttractorVectorField3D::set_size(Vector3 const&) */

void __thiscall
GPUParticlesAttractorVectorField3D::set_size
          (GPUParticlesAttractorVectorField3D *this,Vector3 *param_1)

{
  long *plVar1;
  long in_FS_OFFSET;
  undefined8 local_20;
  float local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(this + 0x57c) = *(undefined8 *)param_1;
  *(undefined4 *)(this + 0x584) = *(undefined4 *)(param_1 + 8);
  plVar1 = (long *)RenderingServer::get_singleton();
  local_18 = _LC2 * *(float *)(this + 0x584);
  local_20 = CONCAT44((float)((ulong)*(undefined8 *)(this + 0x57c) >> 0x20) * _UNK_00125fdc,
                      (float)*(undefined8 *)(this + 0x57c) * _LC2);
  (**(code **)(*plVar1 + 0x8b8))(plVar1,*(undefined8 *)(this + 0x568),&local_20);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    Node3D::update_gizmos();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GPUParticlesCollisionHeightField3D::get_heightfield_mask_value(int) const */

undefined4 __thiscall
GPUParticlesCollisionHeightField3D::get_heightfield_mask_value
          (GPUParticlesCollisionHeightField3D *this,int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  if (param_1 < 1) {
    _err_print_error("get_heightfield_mask_value","scene/3d/gpu_particles_collision_3d.cpp",0x336,
                     "Condition \"p_layer_number < 1\" is true. Returning: false",
                     "Render layer number must be between 1 and 20 inclusive.",0,0);
    uVar2 = 0;
  }
  else if (param_1 < 0x15) {
    uVar1 = 1 << ((char)param_1 - 1U & 0x1f) & *(uint *)(this + 0x570);
    uVar2 = CONCAT31((int3)(uVar1 >> 8),uVar1 != 0);
  }
  else {
    _err_print_error("get_heightfield_mask_value","scene/3d/gpu_particles_collision_3d.cpp",0x337,
                     "Condition \"p_layer_number > 20\" is true. Returning: false",
                     "Render layer number must be between 1 and 20 inclusive.",0,0);
    uVar2 = 0;
  }
  return uVar2;
}



/* GPUParticlesCollisionSDF3D::set_bake_mask(unsigned int) */

void __thiscall
GPUParticlesCollisionSDF3D::set_bake_mask(GPUParticlesCollisionSDF3D *this,uint param_1)

{
  *(uint *)(this + 0x580) = param_1;
  Node::update_configuration_warnings();
  return;
}



/* GPUParticlesCollisionHeightField3D::set_update_mode(GPUParticlesCollisionHeightField3D::UpdateMode)
    */

void __thiscall
GPUParticlesCollisionHeightField3D::set_update_mode
          (GPUParticlesCollisionHeightField3D *this,undefined4 param_2)

{
  *(undefined4 *)(this + 0x588) = param_2;
  Node::set_process_internal(SUB81(this,0));
  return;
}



/* GPUParticlesCollisionHeightField3D::set_follow_camera_enabled(bool) */

void __thiscall
GPUParticlesCollisionHeightField3D::set_follow_camera_enabled
          (GPUParticlesCollisionHeightField3D *this,bool param_1)

{
  this[0x584] = (GPUParticlesCollisionHeightField3D)param_1;
  Node::set_process_internal(SUB81(this,0));
  return;
}



/* GPUParticlesCollision3D::~GPUParticlesCollision3D() */

void __thiscall GPUParticlesCollision3D::~GPUParticlesCollision3D(GPUParticlesCollision3D *this)

{
  long lVar1;
  long *plVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_00124610;
  lVar1 = RenderingServer::get_singleton();
  if (lVar1 != 0) {
    plVar2 = (long *)RenderingServer::get_singleton();
    (**(code **)(*plVar2 + 0x11b0))(plVar2,*(undefined8 *)(this + 0x568));
    VisualInstance3D::~VisualInstance3D((VisualInstance3D *)this);
    return;
  }
  _err_print_error("~GPUParticlesCollision3D","scene/3d/gpu_particles_collision_3d.cpp",0x3d,
                   "Parameter \"RenderingServer::get_singleton()\" is null.",0,0);
  VisualInstance3D::~VisualInstance3D((VisualInstance3D *)this);
  return;
}



/* GPUParticlesCollision3D::~GPUParticlesCollision3D() */

void __thiscall GPUParticlesCollision3D::~GPUParticlesCollision3D(GPUParticlesCollision3D *this)

{
  ~GPUParticlesCollision3D(this);
  operator_delete(this,0x570);
  return;
}



/* GPUParticlesCollisionSphere3D::~GPUParticlesCollisionSphere3D() */

void __thiscall
GPUParticlesCollisionSphere3D::~GPUParticlesCollisionSphere3D(GPUParticlesCollisionSphere3D *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00124800;
  GPUParticlesCollision3D::~GPUParticlesCollision3D((GPUParticlesCollision3D *)this);
  return;
}



/* GPUParticlesCollisionSphere3D::~GPUParticlesCollisionSphere3D() */

void __thiscall
GPUParticlesCollisionSphere3D::~GPUParticlesCollisionSphere3D(GPUParticlesCollisionSphere3D *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00124800;
  GPUParticlesCollision3D::~GPUParticlesCollision3D((GPUParticlesCollision3D *)this);
  operator_delete(this,0x578);
  return;
}



/* GPUParticlesCollisionBox3D::~GPUParticlesCollisionBox3D() */

void __thiscall
GPUParticlesCollisionBox3D::~GPUParticlesCollisionBox3D(GPUParticlesCollisionBox3D *this)

{
  *(undefined ***)this = &PTR__initialize_classv_001249f0;
  GPUParticlesCollision3D::~GPUParticlesCollision3D((GPUParticlesCollision3D *)this);
  return;
}



/* GPUParticlesCollisionBox3D::~GPUParticlesCollisionBox3D() */

void __thiscall
GPUParticlesCollisionBox3D::~GPUParticlesCollisionBox3D(GPUParticlesCollisionBox3D *this)

{
  *(undefined ***)this = &PTR__initialize_classv_001249f0;
  GPUParticlesCollision3D::~GPUParticlesCollision3D((GPUParticlesCollision3D *)this);
  operator_delete(this,0x580);
  return;
}



/* GPUParticlesCollisionHeightField3D::~GPUParticlesCollisionHeightField3D() */

void __thiscall
GPUParticlesCollisionHeightField3D::~GPUParticlesCollisionHeightField3D
          (GPUParticlesCollisionHeightField3D *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00124dd0;
  GPUParticlesCollision3D::~GPUParticlesCollision3D((GPUParticlesCollision3D *)this);
  return;
}



/* GPUParticlesCollisionHeightField3D::~GPUParticlesCollisionHeightField3D() */

void __thiscall
GPUParticlesCollisionHeightField3D::~GPUParticlesCollisionHeightField3D
          (GPUParticlesCollisionHeightField3D *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00124dd0;
  GPUParticlesCollision3D::~GPUParticlesCollision3D((GPUParticlesCollision3D *)this);
  operator_delete(this,0x590);
  return;
}



/* GPUParticlesAttractor3D::~GPUParticlesAttractor3D() */

void __thiscall GPUParticlesAttractor3D::~GPUParticlesAttractor3D(GPUParticlesAttractor3D *this)

{
  long lVar1;
  long *plVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_00124fc0;
  lVar1 = RenderingServer::get_singleton();
  if (lVar1 != 0) {
    plVar2 = (long *)RenderingServer::get_singleton();
    (**(code **)(*plVar2 + 0x11b0))(plVar2,*(undefined8 *)(this + 0x568));
    VisualInstance3D::~VisualInstance3D((VisualInstance3D *)this);
    return;
  }
  _err_print_error("~GPUParticlesAttractor3D","scene/3d/gpu_particles_collision_3d.cpp",0x390,
                   "Parameter \"RenderingServer::get_singleton()\" is null.",0,0);
  VisualInstance3D::~VisualInstance3D((VisualInstance3D *)this);
  return;
}



/* GPUParticlesAttractor3D::~GPUParticlesAttractor3D() */

void __thiscall GPUParticlesAttractor3D::~GPUParticlesAttractor3D(GPUParticlesAttractor3D *this)

{
  ~GPUParticlesAttractor3D(this);
  operator_delete(this,0x580);
  return;
}



/* GPUParticlesAttractorSphere3D::~GPUParticlesAttractorSphere3D() */

void __thiscall
GPUParticlesAttractorSphere3D::~GPUParticlesAttractorSphere3D(GPUParticlesAttractorSphere3D *this)

{
  *(undefined ***)this = &PTR__initialize_classv_001251b0;
  GPUParticlesAttractor3D::~GPUParticlesAttractor3D((GPUParticlesAttractor3D *)this);
  return;
}



/* GPUParticlesAttractorSphere3D::~GPUParticlesAttractorSphere3D() */

void __thiscall
GPUParticlesAttractorSphere3D::~GPUParticlesAttractorSphere3D(GPUParticlesAttractorSphere3D *this)

{
  *(undefined ***)this = &PTR__initialize_classv_001251b0;
  GPUParticlesAttractor3D::~GPUParticlesAttractor3D((GPUParticlesAttractor3D *)this);
  operator_delete(this,0x580);
  return;
}



/* GPUParticlesAttractorBox3D::~GPUParticlesAttractorBox3D() */

void __thiscall
GPUParticlesAttractorBox3D::~GPUParticlesAttractorBox3D(GPUParticlesAttractorBox3D *this)

{
  *(undefined ***)this = &PTR__initialize_classv_001253a0;
  GPUParticlesAttractor3D::~GPUParticlesAttractor3D((GPUParticlesAttractor3D *)this);
  return;
}



/* GPUParticlesAttractorBox3D::~GPUParticlesAttractorBox3D() */

void __thiscall
GPUParticlesAttractorBox3D::~GPUParticlesAttractorBox3D(GPUParticlesAttractorBox3D *this)

{
  *(undefined ***)this = &PTR__initialize_classv_001253a0;
  GPUParticlesAttractor3D::~GPUParticlesAttractor3D((GPUParticlesAttractor3D *)this);
  operator_delete(this,0x588);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GPUParticlesCollisionHeightField3D::_notification(int) [clone .part.0] */

void GPUParticlesCollisionHeightField3D::_notification(int param_1)

{
  char cVar1;
  long lVar2;
  long *plVar3;
  undefined4 in_register_0000003c;
  Transform3D *pTVar4;
  long in_FS_OFFSET;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float extraout_XMM1_Da;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar20 [16];
  float fVar21;
  undefined8 uVar22;
  float fVar23;
  float fVar24;
  undefined8 local_f8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  float fStack_80;
  float local_78;
  float fStack_74;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  float local_48;
  float fStack_44;
  undefined8 uStack_40;
  long local_30;
  
  pTVar4 = (Transform3D *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(pTVar4 + 0x588) == 1) {
    plVar3 = (long *)RenderingServer::get_singleton();
    (**(code **)(*plVar3 + 0x8e0))(plVar3,*(undefined8 *)(pTVar4 + 0x568));
  }
  if (((pTVar4[0x584] != (Transform3D)0x0) && (*(long *)(pTVar4 + 600) != 0)) &&
     (lVar2 = Viewport::get_camera_3d(), lVar2 != 0)) {
    Node3D::get_global_transform();
    fVar8 = (float)uStack_90;
    fVar19 = (float)((ulong)uStack_90 >> 0x20);
    fVar17 = (float)local_98;
    fVar5 = fVar17 * fVar17 + fVar19 * fVar19 + fStack_80 * fStack_80;
    uVar22 = 0;
    fVar10 = 0.0;
    if (fVar5 != 0.0) {
      fVar5 = SQRT(fVar5);
      auVar16._4_4_ = fVar19;
      auVar16._0_4_ = fVar17;
      auVar16._8_8_ = 0;
      fVar10 = fStack_80 / fVar5;
      auVar20._4_4_ = fVar5;
      auVar20._0_4_ = fVar5;
      auVar20._8_8_ = _LC14;
      auVar16 = divps(auVar16,auVar20);
      uVar22 = auVar16._0_8_;
    }
    fVar17 = (float)uVar22;
    fVar24 = (float)((ulong)uVar22 >> 0x20);
    fVar12 = (float)((ulong)local_88 >> 0x20);
    fVar5 = fVar8 * fVar8 + fVar12 * fVar12 + local_78 * local_78;
    local_f8 = 0;
    fVar19 = 0.0;
    if (fVar5 != 0.0) {
      fVar5 = SQRT(fVar5);
      auVar15._4_4_ = fVar12;
      auVar15._0_4_ = fVar8;
      auVar15._8_8_ = 0;
      fVar19 = local_78 / fVar5;
      auVar11._4_4_ = fVar5;
      auVar11._0_4_ = fVar5;
      auVar11._8_8_ = _LC14;
      auVar16 = divps(auVar15,auVar11);
      local_f8 = auVar16._0_8_;
    }
    fVar23 = (float)local_f8;
    fVar13 = (float)((ulong)local_f8 >> 0x20);
    fVar6 = (float)Basis::get_scale();
    Basis::get_scale();
    Node3D::get_global_transform();
    local_68 = local_98;
    uStack_60 = uStack_90;
    fVar5 = (float)uStack_40;
    local_58 = local_88;
    fVar8 = uStack_40._4_4_;
    uStack_40 = uStack_70;
    uVar22 = uStack_40;
    uStack_40._0_4_ = (float)uStack_70;
    fVar21 = fVar5 - (float)uStack_40;
    uStack_40._4_4_ = (float)((ulong)uStack_70 >> 0x20);
    fVar9 = fStack_44 - fStack_74;
    fVar18 = fVar8 - uStack_40._4_4_;
    fVar14 = fVar21 * fVar24 + fVar9 * fVar17 + fVar10 * fVar18;
    fVar12 = uStack_40._4_4_;
    fVar7 = (float)uStack_40;
    if (fVar6 < fVar14) {
      do {
        fStack_74 = fStack_74 + fVar6 * fVar17;
        fVar7 = fVar7 + fVar6 * fVar24;
        uStack_40._4_4_ = uStack_40._4_4_ + fVar6 * fVar10;
        fVar18 = fVar8 - uStack_40._4_4_;
        fVar21 = fVar5 - fVar7;
        fVar9 = fStack_44 - fStack_74;
        fVar14 = fVar21 * fVar24 + fVar9 * fVar17 + fVar10 * fVar18;
      } while (fVar6 < fVar14);
      uStack_40 = CONCAT44(uStack_40._4_4_,fVar7);
      fVar12 = uStack_40._4_4_;
      uVar22 = uStack_40;
    }
    uStack_40 = uVar22;
    if (fVar14 < (float)((uint)fVar6 ^ __LC0)) {
      do {
        fStack_74 = fStack_74 - fVar6 * fVar17;
        fVar7 = fVar7 - fVar6 * fVar24;
        fVar12 = fVar12 - fVar6 * fVar10;
        fVar9 = fStack_44 - fStack_74;
        fVar18 = fVar8 - fVar12;
        fVar21 = fVar5 - fVar7;
      } while (fVar9 * fVar17 + fVar21 * fVar24 + fVar10 * fVar18 < (float)((uint)fVar6 ^ __LC0));
      uStack_40 = CONCAT44(fVar12,fVar7);
    }
    fVar10 = fVar9 * fVar23 + fVar21 * fVar13 + fVar18 * fVar19;
    if (extraout_XMM1_Da < fVar10) {
      do {
        fStack_74 = fStack_74 + extraout_XMM1_Da * fVar23;
        fVar7 = fVar7 + extraout_XMM1_Da * fVar13;
        fVar12 = fVar12 + extraout_XMM1_Da * fVar19;
        fVar10 = (fVar5 - fVar7) * fVar13 + (fStack_44 - fStack_74) * fVar23 +
                 (fVar8 - fVar12) * fVar19;
      } while (extraout_XMM1_Da < fVar10);
      uStack_40 = CONCAT44(fVar12,fVar7);
    }
    if (fVar10 < (float)((uint)extraout_XMM1_Da ^ __LC0)) {
      do {
        fStack_74 = fStack_74 - extraout_XMM1_Da * fVar23;
        fVar7 = fVar7 - extraout_XMM1_Da * fVar13;
        fVar12 = fVar12 - extraout_XMM1_Da * fVar19;
      } while ((fStack_44 - fStack_74) * fVar23 + (fVar5 - fVar7) * fVar13 +
               (fVar8 - fVar12) * fVar19 < (float)((uint)extraout_XMM1_Da ^ __LC0));
      uStack_40 = CONCAT44(fVar12,fVar7);
    }
    _local_48 = CONCAT44(fStack_74,local_78);
    cVar1 = Transform3D::operator!=((Transform3D *)&local_68,(Transform3D *)&local_98);
    if (cVar1 != '\0') {
      Node3D::set_global_transform(pTVar4);
      plVar3 = (long *)RenderingServer::get_singleton();
      (**(code **)(*plVar3 + 0x8e0))(plVar3,*(undefined8 *)(pTVar4 + 0x568));
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* LocalVector<Face3, unsigned int, false, false>::resize(unsigned int) [clone .part.0] */

void LocalVector<Face3,unsigned_int,false,false>::resize(uint param_1)

{
  code *pcVar1;
  
  _err_print_error("resize","./core/templates/local_vector.h",0xa3,
                   "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* GPUParticlesAttractor3D::get_cull_mask() const */

undefined4 __thiscall GPUParticlesAttractor3D::get_cull_mask(GPUParticlesAttractor3D *this)

{
  return *(undefined4 *)(this + 0x560);
}



/* GPUParticlesAttractor3D::get_strength() const */

undefined4 __thiscall GPUParticlesAttractor3D::get_strength(GPUParticlesAttractor3D *this)

{
  return *(undefined4 *)(this + 0x570);
}



/* GPUParticlesAttractorVectorField3D::get_size() const */

undefined1  [16] __thiscall
GPUParticlesAttractorVectorField3D::get_size(GPUParticlesAttractorVectorField3D *this)

{
  long in_FS_OFFSET;
  undefined1 auVar1 [16];
  
  if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar1._12_4_ = 0;
    auVar1._0_12_ = *(undefined1 (*) [12])(this + 0x57c);
    return auVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GPUParticlesCollisionSDF3D::get_size() const */

undefined1  [16] __thiscall GPUParticlesCollisionSDF3D::get_size(GPUParticlesCollisionSDF3D *this)

{
  long in_FS_OFFSET;
  undefined1 auVar1 [16];
  
  if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar1._12_4_ = 0;
    auVar1._0_12_ = *(undefined1 (*) [12])(this + 0x570);
    return auVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GPUParticlesCollisionHeightField3D::set_heightfield_mask_value(int, bool) */

undefined8 __thiscall
GPUParticlesCollisionHeightField3D::set_heightfield_mask_value
          (GPUParticlesCollisionHeightField3D *this,int param_1,bool param_2)

{
  long *plVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_1 < 1) {
    uVar2 = _err_print_error("set_heightfield_mask_value","scene/3d/gpu_particles_collision_3d.cpp",
                             0x32a,"Condition \"p_layer_number < 1\" is true.",
                             "Render layer number must be between 1 and 20 inclusive.",0,0);
  }
  else {
    if (param_1 < 0x15) {
      uVar3 = 1 << ((char)param_1 - 1U & 0x1f);
      uVar4 = ~uVar3 & *(uint *)(this + 0x570);
      if (param_2) {
        uVar4 = uVar3 | *(uint *)(this + 0x570);
      }
      *(uint *)(this + 0x570) = uVar4;
      plVar1 = (long *)RenderingServer::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x001013ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*plVar1 + 0x8f0))(plVar1,*(undefined8 *)(this + 0x568),uVar4);
      return uVar2;
    }
    uVar2 = 0;
    _err_print_error("set_heightfield_mask_value","scene/3d/gpu_particles_collision_3d.cpp",0x32b,
                     "Condition \"p_layer_number > 20\" is true.",
                     "Render layer number must be between 1 and 20 inclusive.",0);
  }
  return uVar2;
}



/* GPUParticlesCollisionSDF3D::~GPUParticlesCollisionSDF3D() */

void __thiscall
GPUParticlesCollisionSDF3D::~GPUParticlesCollisionSDF3D(GPUParticlesCollisionSDF3D *this)

{
  Object *pOVar1;
  char cVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_00124be0;
  if (*(long *)(this + 0x588) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0x588);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
        GPUParticlesCollision3D::~GPUParticlesCollision3D((GPUParticlesCollision3D *)this);
        return;
      }
    }
  }
  GPUParticlesCollision3D::~GPUParticlesCollision3D((GPUParticlesCollision3D *)this);
  return;
}



/* GPUParticlesAttractorVectorField3D::~GPUParticlesAttractorVectorField3D() */

void __thiscall
GPUParticlesAttractorVectorField3D::~GPUParticlesAttractorVectorField3D
          (GPUParticlesAttractorVectorField3D *this)

{
  Object *pOVar1;
  char cVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_00125590;
  if (*(long *)(this + 0x588) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0x588);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
        GPUParticlesAttractor3D::~GPUParticlesAttractor3D((GPUParticlesAttractor3D *)this);
        return;
      }
    }
  }
  GPUParticlesAttractor3D::~GPUParticlesAttractor3D((GPUParticlesAttractor3D *)this);
  return;
}



/* GPUParticlesCollisionSDF3D::~GPUParticlesCollisionSDF3D() */

void __thiscall
GPUParticlesCollisionSDF3D::~GPUParticlesCollisionSDF3D(GPUParticlesCollisionSDF3D *this)

{
  Object *pOVar1;
  char cVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_00124be0;
  if (*(long *)(this + 0x588) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0x588);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  GPUParticlesCollision3D::~GPUParticlesCollision3D((GPUParticlesCollision3D *)this);
  operator_delete(this,0x598);
  return;
}



/* GPUParticlesAttractorVectorField3D::~GPUParticlesAttractorVectorField3D() */

void __thiscall
GPUParticlesAttractorVectorField3D::~GPUParticlesAttractorVectorField3D
          (GPUParticlesAttractorVectorField3D *this)

{
  Object *pOVar1;
  char cVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_00125590;
  if (*(long *)(this + 0x588) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0x588);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  GPUParticlesAttractor3D::~GPUParticlesAttractor3D((GPUParticlesAttractor3D *)this);
  operator_delete(this,0x590);
  return;
}



/* GPUParticlesAttractorVectorField3D::get_texture() const */

void GPUParticlesAttractorVectorField3D::get_texture(void)

{
  char cVar1;
  long in_RSI;
  long *in_RDI;
  
  *in_RDI = 0;
  if (*(long *)(in_RSI + 0x588) != 0) {
    *in_RDI = *(long *)(in_RSI + 0x588);
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *in_RDI = 0;
    }
  }
  return;
}



/* GPUParticlesCollisionSDF3D::get_texture() const */

void GPUParticlesCollisionSDF3D::get_texture(void)

{
  char cVar1;
  long in_RSI;
  long *in_RDI;
  
  *in_RDI = 0;
  if (*(long *)(in_RSI + 0x588) != 0) {
    *in_RDI = *(long *)(in_RSI + 0x588);
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *in_RDI = 0;
    }
  }
  return;
}



/* List<GPUParticlesCollisionSDF3D::PlotMesh,
   DefaultAllocator>::push_back(GPUParticlesCollisionSDF3D::PlotMesh const&) [clone .isra.0] */

void __thiscall
List<GPUParticlesCollisionSDF3D::PlotMesh,DefaultAllocator>::push_back
          (List<GPUParticlesCollisionSDF3D::PlotMesh,DefaultAllocator> *this,PlotMesh *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  long *plVar6;
  undefined1 (*pauVar7) [16];
  undefined1 auVar8 [16];
  
  if (*(long *)this == 0) {
    pauVar7 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])this = pauVar7;
    *(undefined4 *)pauVar7[1] = 0;
    *pauVar7 = (undefined1  [16])0x0;
  }
  plVar6 = (long *)operator_new(0x50,DefaultAllocator::alloc);
  auVar8 = ZEXT416(_LC25);
  *plVar6 = 0;
  lVar1 = *(long *)param_1;
  *(undefined1 (*) [16])(plVar6 + 1) = auVar8;
  *(undefined1 (*) [16])(plVar6 + 3) = auVar8;
  *(undefined4 *)(plVar6 + 5) = 0x3f800000;
  *(undefined8 *)((long)plVar6 + 0x2c) = 0;
  *(undefined4 *)((long)plVar6 + 0x34) = 0;
  plVar6[9] = 0;
  *(undefined1 (*) [16])(plVar6 + 7) = (undefined1  [16])0x0;
  if (lVar1 != 0) {
    *plVar6 = lVar1;
    cVar5 = RefCounted::reference();
    if (cVar5 == '\0') {
      *plVar6 = 0;
    }
  }
  lVar1 = *(long *)(param_1 + 0x10);
  plVar2 = *(long **)this;
  plVar6[1] = *(long *)(param_1 + 8);
  plVar6[2] = lVar1;
  lVar3 = *(long *)(param_1 + 0x20);
  lVar1 = plVar2[1];
  plVar6[3] = *(long *)(param_1 + 0x18);
  plVar6[4] = lVar3;
  lVar3 = *(long *)(param_1 + 0x28);
  lVar4 = *(long *)(param_1 + 0x30);
  plVar6[8] = lVar1;
  plVar6[7] = 0;
  plVar6[9] = (long)plVar2;
  plVar6[5] = lVar3;
  plVar6[6] = lVar4;
  if (lVar1 != 0) {
    *(long **)(lVar1 + 0x38) = plVar6;
  }
  plVar2[1] = (long)plVar6;
  if (*plVar2 != 0) {
    *(int *)(plVar2 + 2) = (int)plVar2[2] + 1;
    return;
  }
  *(int *)(plVar2 + 2) = (int)plVar2[2] + 1;
  *plVar2 = (long)plVar6;
  return;
}



/* GPUParticlesCollisionSDF3D::set_texture(Ref<Texture3D> const&) */

void __thiscall
GPUParticlesCollisionSDF3D::set_texture(GPUParticlesCollisionSDF3D *this,Ref *param_1)

{
  Object *pOVar1;
  char cVar2;
  undefined8 uVar3;
  long *plVar4;
  Object *pOVar5;
  
  pOVar1 = *(Object **)param_1;
  pOVar5 = *(Object **)(this + 0x588);
  if (pOVar1 == pOVar5) {
LAB_00101864:
    if (pOVar5 != (Object *)0x0) {
      uVar3 = (**(code **)(*(long *)pOVar5 + 0x1c0))(pOVar5);
      goto LAB_00101879;
    }
  }
  else {
    *(Object **)(this + 0x588) = pOVar1;
    if (pOVar1 != (Object *)0x0) {
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
        *(undefined8 *)(this + 0x588) = 0;
        goto LAB_0010184c;
      }
      if (pOVar5 != (Object *)0x0) {
        cVar2 = RefCounted::unreference();
        if (cVar2 == '\0') goto LAB_0010185d;
        goto LAB_001018b9;
      }
LAB_0010185d:
      pOVar5 = *(Object **)(this + 0x588);
      goto LAB_00101864;
    }
LAB_0010184c:
    if (pOVar5 != (Object *)0x0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
LAB_001018b9:
        cVar2 = predelete_handler(pOVar5);
        if (cVar2 != '\0') {
          (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
          Memory::free_static(pOVar5,false);
        }
      }
      goto LAB_0010185d;
    }
  }
  uVar3 = 0;
LAB_00101879:
  plVar4 = (long *)RenderingServer::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x0010189b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x8d8))(plVar4,*(undefined8 *)(this + 0x568),uVar3);
  return;
}



/* GPUParticlesAttractorVectorField3D::set_texture(Ref<Texture3D> const&) */

void __thiscall
GPUParticlesAttractorVectorField3D::set_texture
          (GPUParticlesAttractorVectorField3D *this,Ref *param_1)

{
  Object *pOVar1;
  char cVar2;
  undefined8 uVar3;
  long *plVar4;
  Object *pOVar5;
  
  pOVar1 = *(Object **)param_1;
  pOVar5 = *(Object **)(this + 0x588);
  if (pOVar1 == pOVar5) {
LAB_00101944:
    if (pOVar5 != (Object *)0x0) {
      uVar3 = (**(code **)(*(long *)pOVar5 + 0x1c0))(pOVar5);
      goto LAB_00101959;
    }
  }
  else {
    *(Object **)(this + 0x588) = pOVar1;
    if (pOVar1 != (Object *)0x0) {
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
        *(undefined8 *)(this + 0x588) = 0;
        goto LAB_0010192c;
      }
      if (pOVar5 != (Object *)0x0) {
        cVar2 = RefCounted::unreference();
        if (cVar2 == '\0') goto LAB_0010193d;
        goto LAB_00101999;
      }
LAB_0010193d:
      pOVar5 = *(Object **)(this + 0x588);
      goto LAB_00101944;
    }
LAB_0010192c:
    if (pOVar5 != (Object *)0x0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
LAB_00101999:
        cVar2 = predelete_handler(pOVar5);
        if (cVar2 != '\0') {
          (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
          Memory::free_static(pOVar5,false);
        }
      }
      goto LAB_0010193d;
    }
  }
  uVar3 = 0;
LAB_00101959:
  plVar4 = (long *)RenderingServer::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x0010197b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x8d8))(plVar4,*(undefined8 *)(this + 0x568),uVar3);
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



/* GPUParticlesCollision3D::GPUParticlesCollision3D(RenderingServer::ParticlesCollisionType) */

void __thiscall
GPUParticlesCollision3D::GPUParticlesCollision3D(GPUParticlesCollision3D *this,undefined4 param_2)

{
  long *plVar1;
  undefined8 uVar2;
  
  VisualInstance3D::VisualInstance3D((VisualInstance3D *)this);
  *(undefined4 *)(this + 0x560) = 0xffffffff;
  *(undefined ***)this = &PTR__initialize_classv_00124610;
  *(undefined8 *)(this + 0x568) = 0;
  plVar1 = (long *)RenderingServer::get_singleton();
  uVar2 = (**(code **)(*plVar1 + 0x898))(plVar1);
  *(undefined8 *)(this + 0x568) = uVar2;
  plVar1 = (long *)RenderingServer::get_singleton();
  (**(code **)(*plVar1 + 0x8a0))(plVar1,*(undefined8 *)(this + 0x568),param_2);
  VisualInstance3D::set_base((RID *)this);
  return;
}



/* GPUParticlesCollisionSphere3D::GPUParticlesCollisionSphere3D() */

void __thiscall
GPUParticlesCollisionSphere3D::GPUParticlesCollisionSphere3D(GPUParticlesCollisionSphere3D *this)

{
  GPUParticlesCollision3D::GPUParticlesCollision3D((GPUParticlesCollision3D *)this,3);
  *(undefined4 *)(this + 0x570) = 0x3f800000;
  *(undefined ***)this = &PTR__initialize_classv_00124800;
  return;
}



/* GPUParticlesCollisionBox3D::_set(StringName const&, Variant const&) */

ulong GPUParticlesCollisionBox3D::_set(StringName *param_1,Variant *param_2)

{
  ulong uVar1;
  Variant *in_RDX;
  long in_FS_OFFSET;
  undefined8 uVar2;
  float in_XMM1_Da;
  undefined8 local_40;
  float local_38;
  long local_20;
  float fVar3;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = StringName::operator==((StringName *)param_2,"extents");
  if ((char)uVar1 != '\0') {
    uVar2 = Variant::operator_cast_to_Vector3(in_RDX);
    fVar3 = (float)((ulong)uVar2 >> 0x20);
    local_38 = in_XMM1_Da + in_XMM1_Da;
    local_40 = CONCAT44(fVar3 + fVar3,(float)uVar2 + (float)uVar2);
    set_size((GPUParticlesCollisionBox3D *)param_1,(Vector3 *)&local_40);
    uVar1 = uVar1 & 0xff;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GPUParticlesCollisionBox3D::_get(StringName const&, Variant&) const */

ulong __thiscall
GPUParticlesCollisionBox3D::_get
          (GPUParticlesCollisionBox3D *this,StringName *param_1,Variant *param_2)

{
  ulong uVar1;
  long in_FS_OFFSET;
  undefined8 local_48;
  float local_40;
  undefined4 local_38 [2];
  undefined8 local_30;
  undefined8 uStack_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = StringName::operator==(param_1,"extents");
  if ((char)uVar1 != '\0') {
    local_40 = _LC2 * *(float *)(this + 0x578);
    local_48 = CONCAT44((float)((ulong)*(undefined8 *)(this + 0x570) >> 0x20) * _UNK_00125fdc,
                        (float)*(undefined8 *)(this + 0x570) * _LC2);
    Variant::Variant((Variant *)local_38,(Vector3 *)&local_48);
    if (Variant::needs_deinit[*(int *)param_2] != '\0') {
      Variant::_clear_internal();
    }
    uVar1 = uVar1 & 0xff;
    *(undefined4 *)param_2 = local_38[0];
    *(undefined8 *)(param_2 + 8) = local_30;
    *(undefined8 *)(param_2 + 0x10) = uStack_28;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GPUParticlesCollisionBox3D::GPUParticlesCollisionBox3D() */

void __thiscall
GPUParticlesCollisionBox3D::GPUParticlesCollisionBox3D(GPUParticlesCollisionBox3D *this)

{
  GPUParticlesCollision3D::GPUParticlesCollision3D((GPUParticlesCollision3D *)this,4);
  *(undefined4 *)(this + 0x578) = 0x40000000;
  *(undefined ***)this = &PTR__initialize_classv_001249f0;
  *(undefined8 *)(this + 0x570) = __LC36;
  return;
}



/* GPUParticlesCollisionSDF3D::_find_meshes(AABB const&, Node*,
   List<GPUParticlesCollisionSDF3D::PlotMesh, DefaultAllocator>&) */

void __thiscall
GPUParticlesCollisionSDF3D::_find_meshes
          (GPUParticlesCollisionSDF3D *this,AABB *param_1,Node *param_2,List *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  Node *pNVar8;
  Object *pOVar9;
  long lVar10;
  Transform3D *pTVar11;
  int iVar12;
  long in_FS_OFFSET;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  long local_1a0;
  int local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  ulong local_188;
  float local_180;
  undefined8 local_17c;
  float local_174;
  undefined8 local_168;
  float local_160;
  ulong local_138;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  ulong local_108;
  float fStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  ulong local_d8;
  undefined1 local_d0 [16];
  float local_a8 [2];
  undefined1 local_a0 [40];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 != (Node *)0x0) {
    lVar7 = __dynamic_cast(param_2,&Object::typeinfo,&MeshInstance3D::typeinfo);
    if ((lVar7 != 0) && (cVar4 = Node3D::is_visible_in_tree(), cVar4 != '\0')) {
      uVar6 = VisualInstance3D::get_layer_mask();
      if ((uVar6 & *(uint *)(this + 0x580)) == 0) goto LAB_00101da0;
      MeshInstance3D::get_mesh();
      if ((long *)CONCAT44(uStack_194,local_198) != (long *)0x0) {
        pTVar11 = (Transform3D *)&local_108;
        (**(code **)(*(long *)CONCAT44(uStack_194,local_198) + 0x230))(&local_138);
        Node3D::get_global_transform();
        Node3D::get_global_transform();
        Transform3D::affine_inverse();
        Transform3D::operator*(pTVar11,(Transform3D *)local_a8);
        lVar7 = 0;
        local_a8[0] = 0.0;
        local_a8[1] = 0.0;
        local_d8 = local_138;
        auVar2._12_4_ = 0;
        auVar2._0_12_ = local_a0._4_12_;
        local_a0._0_16_ = auVar2 << 0x20;
        local_d0._0_4_ = fStack_130;
        local_78 = (Object *)0x0;
        local_70 = (ulong)local_70._4_4_ << 0x20;
        local_168 = CONCAT44((float)(local_138 >> 0x20) + fStack_128,(float)local_138 + fStack_12c);
        local_160 = fStack_130 + fStack_124;
        do {
          fVar16 = *(float *)((long)&local_e8 + lVar7 + 4);
          lVar10 = 0;
          fVar14 = fVar16;
          do {
            fVar15 = *(float *)(local_d0 + lVar10 + -8) * *(float *)(pTVar11 + lVar10);
            fVar13 = *(float *)(pTVar11 + lVar10) * *(float *)((long)&local_168 + lVar10);
            fVar17 = fVar15;
            if (fVar15 < fVar13) {
              fVar17 = fVar13;
              fVar13 = fVar15;
            }
            fVar14 = fVar14 + fVar13;
            fVar16 = fVar16 + fVar17;
            lVar10 = lVar10 + 4;
          } while (lVar10 != 0xc);
          *(float *)((PlotMesh *)&local_78 + lVar7) = fVar16;
          pTVar11 = pTVar11 + 0xc;
          *(float *)((Transform3D *)local_a8 + lVar7) = fVar14;
          lVar7 = lVar7 + 4;
        } while (lVar7 != 0xc);
        fVar16 = local_a8[0];
        fVar14 = local_a8[1];
        uVar3 = local_a0._0_4_;
        fVar15 = (float)local_70 - (float)local_a0._0_4_;
        fVar13 = local_78._4_4_ - local_a8[1];
        fVar17 = (float)local_78 - local_a8[0];
        if (((((*(float *)(param_1 + 0xc) <= 0.0 && *(float *)(param_1 + 0xc) != 0.0) ||
              (*(float *)(param_1 + 0x10) <= 0.0 && *(float *)(param_1 + 0x10) != 0.0)) ||
             (*(float *)(param_1 + 0x14) <= 0.0 && *(float *)(param_1 + 0x14) != 0.0)) ||
            ((fVar17 < 0.0 || (fVar13 < 0.0)))) || (fVar15 < 0.0)) {
          _err_print_error("intersects","./core/math/aabb.h",0x8e,
                           "AABB size is negative, this is not supported. Use AABB.abs() to get an AABB with a positive size."
                           ,0,0);
        }
        if (((*(float *)param_1 < fVar17 + fVar16) &&
            (fVar16 < *(float *)param_1 + *(float *)(param_1 + 0xc))) &&
           ((*(float *)(param_1 + 4) < fVar13 + fVar14 &&
            (((fVar14 < *(float *)(param_1 + 4) + *(float *)(param_1 + 0x10) &&
              (*(float *)(param_1 + 8) < fVar15 + (float)uVar3)) &&
             ((float)uVar3 < *(float *)(param_1 + 8) + *(float *)(param_1 + 0x14))))))) {
          pOVar9 = (Object *)CONCAT44(uStack_194,local_198);
          local_70 = local_108;
          local_60 = local_f8;
          uStack_58 = uStack_f0;
          local_50 = local_e8;
          uStack_48 = uStack_e0;
          if ((pOVar9 == (Object *)0x0) ||
             (local_78 = pOVar9, cVar4 = RefCounted::reference(), cVar4 == '\0')) {
            local_78 = (Object *)0x0;
            List<GPUParticlesCollisionSDF3D::PlotMesh,DefaultAllocator>::push_back
                      ((List<GPUParticlesCollisionSDF3D::PlotMesh,DefaultAllocator> *)param_3,
                       (PlotMesh *)&local_78);
          }
          else {
            List<GPUParticlesCollisionSDF3D::PlotMesh,DefaultAllocator>::push_back
                      ((List<GPUParticlesCollisionSDF3D::PlotMesh,DefaultAllocator> *)param_3,
                       (PlotMesh *)&local_78);
            cVar4 = RefCounted::unreference();
            if ((cVar4 != '\0') && (cVar4 = predelete_handler(pOVar9), cVar4 != '\0')) {
              (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
              Memory::free_static(pOVar9,false);
            }
          }
        }
        if ((CONCAT44(uStack_194,local_198) != 0) &&
           (cVar4 = RefCounted::unreference(), cVar4 != '\0')) {
          pOVar9 = (Object *)CONCAT44(uStack_194,local_198);
          cVar4 = predelete_handler(pOVar9);
          if (cVar4 != '\0') {
            (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
            Memory::free_static(pOVar9,false);
          }
        }
      }
    }
    lVar7 = __dynamic_cast(param_2,&Object::typeinfo,&Node3D::typeinfo,0);
    if ((lVar7 != 0) && (cVar4 = Node3D::is_visible_in_tree(), cVar4 != '\0')) {
      StringName::StringName((StringName *)&local_1a0,"get_meshes",false);
      local_a0._0_16_ = (undefined1  [16])0x0;
      local_a8[0] = 0.0;
      local_a8[1] = 0.0;
      local_198 = 0;
      uStack_194 = 0;
      uStack_190 = 0;
      (**(code **)(*(long *)param_2 + 0x68))
                ((Transform3D *)&local_78,param_2,(StringName *)&local_1a0,0,0,(Variant *)&local_198
                );
      if (local_198 == 0) {
        Variant::Variant((Variant *)&local_d8,(Variant *)&local_78);
      }
      else {
        local_d0 = (undefined1  [16])0x0;
        local_d8 = local_d8 & 0xffffffff00000000;
      }
      if (Variant::needs_deinit[(int)(float)local_78] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[(int)local_a8[0]] != '\0') {
        Variant::_clear_internal();
      }
      Variant::operator_cast_to_Array((Variant *)&local_198);
      if (Variant::needs_deinit[(int)local_d8] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_1a0 != 0)) {
        StringName::unref();
      }
      iVar5 = 0;
      iVar12 = Array::size();
      if (0 < iVar12) {
        do {
          iVar12 = (int)(Variant *)&local_198;
          Array::operator[](iVar12);
          Variant::operator_cast_to_Transform3D((Variant *)&local_168);
          Array::operator[](iVar12);
          lVar7 = Variant::get_validated_object();
          if (((lVar7 != 0) &&
              (pOVar9 = (Object *)__dynamic_cast(lVar7,&Object::typeinfo,&Mesh::typeinfo,0),
              pOVar9 != (Object *)0x0)) && (cVar4 = RefCounted::reference(), cVar4 != '\0')) {
            (**(code **)(*(long *)pOVar9 + 0x230))(&local_188,pOVar9);
            Node3D::get_global_transform();
            Transform3D::operator*((Transform3D *)&local_78,(Transform3D *)local_a8);
            Node3D::get_global_transform();
            Transform3D::affine_inverse();
            pTVar11 = (Transform3D *)&local_138;
            Transform3D::operator*(pTVar11,(Transform3D *)&local_d8);
            lVar7 = 0;
            local_a8[0] = 0.0;
            local_a8[1] = 0.0;
            local_d8 = local_188;
            auVar1._12_4_ = 0;
            auVar1._0_12_ = local_a0._4_12_;
            local_a0._0_16_ = auVar1 << 0x20;
            local_d0._0_4_ = local_180;
            local_78 = (Object *)0x0;
            local_70 = local_70 & 0xffffffff00000000;
            local_108 = CONCAT44((float)((ulong)local_17c >> 0x20) + (float)(local_188 >> 0x20),
                                 (float)local_17c + (float)local_188);
            fStack_100 = local_180 + local_174;
            do {
              fVar16 = *(float *)((long)&local_118 + lVar7 + 4);
              lVar10 = 0;
              fVar14 = fVar16;
              do {
                fVar15 = *(float *)((Transform3D *)&local_d8 + lVar10) *
                         *(float *)(pTVar11 + lVar10);
                fVar13 = *(float *)(pTVar11 + lVar10) * *(float *)((long)&local_108 + lVar10);
                fVar17 = fVar15;
                if (fVar15 < fVar13) {
                  fVar17 = fVar13;
                  fVar13 = fVar15;
                }
                fVar14 = fVar14 + fVar13;
                fVar16 = fVar16 + fVar17;
                lVar10 = lVar10 + 4;
              } while (lVar10 != 0xc);
              *(float *)((Transform3D *)&local_78 + lVar7) = fVar16;
              pTVar11 = pTVar11 + 0xc;
              *(float *)((Transform3D *)local_a8 + lVar7) = fVar14;
              lVar7 = lVar7 + 4;
            } while (lVar7 != 0xc);
            fVar17 = (float)local_70 - 0.0;
            fVar14 = local_78._4_4_ - 0.0;
            fVar16 = (float)local_78 - 0.0;
            if ((((*(float *)(param_1 + 0xc) <= 0.0 && *(float *)(param_1 + 0xc) != 0.0) ||
                 (*(float *)(param_1 + 0x10) <= 0.0 && *(float *)(param_1 + 0x10) != 0.0)) ||
                ((*(float *)(param_1 + 0x14) <= 0.0 && *(float *)(param_1 + 0x14) != 0.0 ||
                 ((fVar16 < 0.0 || (fVar14 < 0.0)))))) || (fVar17 < 0.0)) {
              _err_print_error("intersects","./core/math/aabb.h",0x8e,
                               "AABB size is negative, this is not supported. Use AABB.abs() to get an AABB with a positive size."
                               ,0,0);
            }
            if (((((*(float *)param_1 < fVar16 + 0.0) &&
                  (0.0 < *(float *)param_1 + *(float *)(param_1 + 0xc))) &&
                 (*(float *)(param_1 + 4) < fVar14 + 0.0)) &&
                ((0.0 < *(float *)(param_1 + 4) + *(float *)(param_1 + 0x10) &&
                 (*(float *)(param_1 + 8) < fVar17 + 0.0)))) &&
               (0.0 < *(float *)(param_1 + 8) + *(float *)(param_1 + 0x14))) {
              local_70 = local_138;
              local_60 = CONCAT44(fStack_124,fStack_128);
              uStack_58 = uStack_120;
              local_50 = local_118;
              uStack_48 = uStack_110;
              local_78 = pOVar9;
              cVar4 = RefCounted::reference();
              if (cVar4 == '\0') {
                local_78 = (Object *)0x0;
                List<GPUParticlesCollisionSDF3D::PlotMesh,DefaultAllocator>::push_back
                          ((List<GPUParticlesCollisionSDF3D::PlotMesh,DefaultAllocator> *)param_3,
                           (PlotMesh *)&local_78);
              }
              else {
                List<GPUParticlesCollisionSDF3D::PlotMesh,DefaultAllocator>::push_back
                          ((List<GPUParticlesCollisionSDF3D::PlotMesh,DefaultAllocator> *)param_3,
                           (PlotMesh *)&local_78);
                cVar4 = RefCounted::unreference();
                if ((cVar4 != '\0') && (cVar4 = predelete_handler(pOVar9), cVar4 != '\0')) {
                  (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
                  Memory::free_static(pOVar9,false);
                }
              }
            }
            cVar4 = RefCounted::unreference();
            if ((cVar4 != '\0') && (cVar4 = predelete_handler(pOVar9), cVar4 != '\0')) {
              (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
              Memory::free_static(pOVar9,false);
            }
          }
          iVar5 = iVar5 + 2;
          iVar12 = Array::size();
        } while (iVar5 < iVar12);
      }
      Array::~Array((Array *)&local_198);
    }
  }
  for (iVar12 = 0; iVar5 = Node::get_child_count(SUB81(param_2,0)), iVar12 < iVar5;
      iVar12 = iVar12 + 1) {
    pNVar8 = (Node *)Node::get_child((int)param_2,SUB41(iVar12,0));
    _find_meshes(this,param_1,pNVar8,param_3);
  }
LAB_00101da0:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GPUParticlesCollisionSDF3D::_find_closest_distance(Vector3 const&,
   GPUParticlesCollisionSDF3D::BVH const*, unsigned int, Face3 const*, float, float&) */

void GPUParticlesCollisionSDF3D::_find_closest_distance
               (Vector3 *param_1,BVH *param_2,uint param_3,Face3 *param_4,float param_5,
               float *param_6)

{
  float *pfVar1;
  float *pfVar2;
  long *plVar3;
  undefined4 in_register_00000014;
  float *pfVar4;
  float *in_R9;
  long in_FS_OFFSET;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  float in_XMM1_Da;
  float fVar10;
  float in_XMM1_Db;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float local_e0;
  float local_dc;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  long local_58 [5];
  
  fVar7 = SUB84(param_4,0);
  local_58[3] = *(long *)(in_FS_OFFSET + 0x28);
  if (((ulong)param_4 & 0x40000000) == 0) {
    do {
      pfVar4 = (float *)(CONCAT44(in_register_00000014,param_3) +
                        ((ulong)param_4 & 0xffffffff) * 0x20);
      if (((pfVar4[3] <= 0.0 && pfVar4[3] != 0.0) || (pfVar4[4] <= 0.0 && pfVar4[4] != 0.0)) ||
         (pfVar4[5] <= 0.0 && pfVar4[5] != 0.0)) {
        _err_print_error("has_point","./core/math/aabb.h",0x13c,
                         "AABB size is negative, this is not supported. Use AABB.abs() to get an AABB with a positive size."
                         ,0,0);
      }
      fVar7 = *(float *)param_2;
      fVar5 = *pfVar4;
      fVar6 = *(float *)(param_2 + 4);
      fVar10 = *(float *)(param_2 + 8);
      if ((((fVar7 < fVar5) || (fVar6 < pfVar4[1])) ||
          ((fVar10 < pfVar4[2] || ((pfVar4[3] + fVar5 < fVar7 || (pfVar4[1] + pfVar4[4] < fVar6)))))
          ) || (in_XMM1_Da = pfVar4[2] + pfVar4[5], in_XMM1_Da < fVar10)) {
        fVar27 = pfVar4[5] * _LC2;
        fVar20 = pfVar4[4] * _LC2;
        fVar8 = pfVar4[3] * _LC2;
        fVar11 = ABS(fVar10 - (pfVar4[2] + fVar27));
        fVar10 = fVar11;
        if (fVar27 <= fVar11) {
          fVar10 = fVar27;
        }
        fVar6 = ABS(fVar6 - (pfVar4[1] + fVar20));
        fVar5 = ABS(fVar7 - (fVar5 + fVar8));
        fVar7 = fVar6;
        if (fVar20 <= fVar6) {
          fVar7 = fVar20;
        }
        fVar27 = fVar5;
        if (fVar8 <= fVar5) {
          fVar27 = fVar8;
        }
        in_XMM1_Da = (fVar27 - fVar5) * (fVar27 - fVar5) + (fVar7 - fVar6) * (fVar7 - fVar6);
        if (*in_R9 <= SQRT((fVar10 - fVar11) * (fVar10 - fVar11) + in_XMM1_Da)) goto LAB_00102cbd;
      }
      in_XMM1_Db = 0.0;
      _find_closest_distance
                (param_1,param_2,param_3,(Face3 *)(ulong)(uint)pfVar4[6],param_5,param_6);
      fVar7 = pfVar4[7];
      param_4 = (Face3 *)(ulong)(uint)fVar7;
    } while (((uint)fVar7 & 0x40000000) == 0);
  }
  fVar5 = *(float *)(param_2 + 8);
  pfVar4 = param_6 + (ulong)((uint)fVar7 & 0x3fffffff) * 9;
  fVar7 = (float)*(undefined8 *)param_2;
  fVar6 = (float)((ulong)*(undefined8 *)param_2 >> 0x20);
  uVar9 = Face3::get_plane(pfVar4,0);
  local_68._0_4_ = (float)uVar9;
  local_68._4_4_ = (float)((ulong)uVar9 >> 0x20);
  local_60 = CONCAT44(in_XMM1_Db,in_XMM1_Da);
  in_XMM1_Db = ((float)local_68 * fVar7 + local_68._4_4_ * fVar6 + fVar5 * in_XMM1_Da) - in_XMM1_Db;
  local_68 = uVar9;
  if (in_XMM1_Db < 0.0) {
    if ((float)((uint)param_5 ^ __LC0) < in_XMM1_Db) {
      fVar27 = pfVar4[1] - pfVar4[4];
      fVar11 = *pfVar4 - pfVar4[3];
      fVar10 = pfVar4[2] - pfVar4[5];
      fVar8 = fVar11 * fVar11 + fVar27 * fVar27 + fVar10 * fVar10;
      if (fVar8 == 0.0) {
        fVar10 = 0.0;
        fVar27 = 0.0;
        fVar11 = 0.0;
        fVar21 = 0.0;
        fVar22 = 0.0;
        fVar8 = 0.0;
      }
      else {
        fVar8 = SQRT(fVar8);
        fVar27 = fVar27 / fVar8;
        fVar11 = fVar11 / fVar8;
        fVar10 = fVar10 / fVar8;
        fVar21 = fVar27 * (float)local_68 - local_68._4_4_ * fVar11;
        fVar22 = in_XMM1_Da * fVar11 - (float)local_68 * fVar10;
        fVar8 = local_68._4_4_ * fVar10 - in_XMM1_Da * fVar27;
        fVar20 = fVar22 * fVar22 + fVar8 * fVar8 + fVar21 * fVar21;
        if (fVar20 == 0.0) {
          fVar21 = 0.0;
          fVar22 = 0.0;
          fVar8 = 0.0;
        }
        else {
          fVar20 = SQRT(fVar20);
          fVar8 = fVar8 / fVar20;
          fVar22 = fVar22 / fVar20;
          fVar21 = fVar21 / fVar20;
        }
      }
      local_58[0] = 0;
      local_58[1] = 0;
      pfVar1 = pfVar4 + 9;
      local_58[2] = 0;
      plVar3 = local_58;
      do {
        uVar9 = *(undefined8 *)pfVar4;
        pfVar2 = pfVar4 + 2;
        pfVar4 = pfVar4 + 3;
        fVar20 = (float)uVar9;
        fVar19 = (float)((ulong)uVar9 >> 0x20);
        *plVar3 = CONCAT44(fVar20 * fVar8 + fVar19 * fVar22 + *pfVar2 * fVar21,
                           fVar20 * fVar11 + fVar19 * fVar27 + *pfVar2 * fVar10);
        plVar3 = plVar3 + 1;
      } while (pfVar1 != pfVar4);
      fVar20 = fVar5 * fVar10 + fVar6 * fVar27 + fVar7 * fVar11;
      fVar8 = fVar5 * fVar21 + fVar6 * fVar22 + fVar7 * fVar8;
      fVar6 = (float)local_58[1];
      fVar10 = (float)((ulong)local_58[1] >> 0x20);
      fVar11 = (float)local_58[0];
      fVar27 = (float)((ulong)local_58[0] >> 0x20);
      local_b0 = CONCAT44(fVar10 - fVar27,fVar6 - fVar11);
      fVar7 = (float)local_58[2];
      fVar5 = (float)((ulong)local_58[2] >> 0x20);
      local_a8 = CONCAT44(fVar5 - fVar10,fVar7 - fVar6);
      local_a0 = CONCAT44(fVar27 - fVar5,fVar11 - fVar7);
      local_98 = CONCAT44(fVar8 - fVar27,fVar20 - fVar11);
      local_90 = CONCAT44(fVar8 - fVar10,fVar20 - fVar6);
      local_88 = CONCAT44(fVar8 - fVar5,fVar20 - fVar7);
      fVar5 = (float)Vector2::dot((Vector2 *)&local_98);
      fVar7 = (float)Vector2::dot((Vector2 *)&local_b0);
      fVar5 = fVar5 / fVar7;
      if (fVar5 < 0.0) {
        fVar7 = 0.0;
      }
      else {
        fVar7 = _LC25;
        if (fVar5 <= _LC25) {
          fVar7 = fVar5;
        }
      }
      local_80 = CONCAT44((float)((ulong)local_98 >> 0x20) -
                          fVar7 * (float)((ulong)local_b0 >> 0x20),
                          (float)local_98 - fVar7 * (float)local_b0);
      fVar5 = (float)Vector2::dot((Vector2 *)&local_90);
      fVar7 = (float)Vector2::dot((Vector2 *)&local_a8);
      fVar5 = fVar5 / fVar7;
      if (fVar5 < 0.0) {
        fVar7 = 0.0;
      }
      else {
        fVar7 = _LC25;
        if (fVar5 <= _LC25) {
          fVar7 = fVar5;
        }
      }
      local_78 = CONCAT44((float)((ulong)local_90 >> 0x20) -
                          fVar7 * (float)((ulong)local_a8 >> 0x20),
                          (float)local_90 - fVar7 * (float)local_a8);
      fVar5 = (float)Vector2::dot((Vector2 *)&local_88);
      fVar7 = (float)Vector2::dot((Vector2 *)&local_a0);
      fVar5 = fVar5 / fVar7;
      if (fVar5 < 0.0) {
        fVar7 = 0.0;
      }
      else {
        fVar7 = _LC25;
        if (fVar5 <= _LC25) {
          fVar7 = fVar5;
        }
      }
      fVar5 = (float)((ulong)local_a0 >> 0x20);
      local_70 = CONCAT44((float)((ulong)local_88 >> 0x20) - fVar7 * fVar5,
                          (float)local_88 - fVar7 * (float)local_a0);
      fVar5 = fVar5 * (float)local_b0 - (float)local_a0 * local_b0._4_4_;
      fVar7 = _LC25;
      if (fVar5 <= 0.0) {
        fVar7 = (float)(_LC42 & -(uint)(fVar5 < 0.0));
      }
      fVar5 = (local_b0._4_4_ * (float)local_98 - (float)local_b0 * local_98._4_4_) * fVar7;
      fVar6 = (float)Vector2::dot((Vector2 *)&local_80);
      fVar10 = ((float)local_90 * local_a8._4_4_ - local_90._4_4_ * (float)local_a8) * fVar7;
      fVar11 = (float)Vector2::dot((Vector2 *)&local_78);
      if (fVar11 <= fVar6) {
        fVar6 = fVar11;
      }
      if (fVar10 <= fVar5) {
        fVar5 = fVar10;
      }
      fVar7 = ((float)local_88 * local_a0._4_4_ - local_88._4_4_ * (float)local_a0) * fVar7;
      fVar10 = (float)Vector2::dot((Vector2 *)&local_70);
      if (fVar10 <= fVar6) {
        fVar6 = fVar10;
      }
      if (fVar7 <= fVar5) {
        fVar5 = fVar7;
      }
      if (fVar6 < 0.0) {
        fVar6 = sqrtf(fVar6);
      }
      else {
        fVar6 = SQRT(fVar6);
      }
      fVar7 = (float)((uint)fVar6 ^ __LC0);
      if ((0.0 < fVar5) || (fVar7 = fVar6, fVar5 < 0.0)) {
        if (fVar7 < 0.0) {
          if (fVar7 <= in_XMM1_Db) {
            fVar7 = in_XMM1_Db;
          }
          fVar5 = (float)((uint)(in_XMM1_Db + param_5) ^ __LC0);
          if (fVar7 <= fVar5) {
            fVar7 = fVar5;
          }
        }
      }
      else {
        fVar7 = (float)((uint)fVar6 ^ __LC0) * 0.0;
      }
      fVar5 = *in_R9;
      if (fVar7 <= *in_R9) {
        fVar5 = fVar7;
      }
      *in_R9 = fVar5;
      goto LAB_00102cbd;
    }
    fVar7 = fVar7 - (float)local_68 * param_5;
    fVar6 = fVar6 - local_68._4_4_ * param_5;
    fVar5 = fVar5 - param_5 * in_XMM1_Da;
  }
  fVar10 = pfVar4[2];
  fVar11 = pfVar4[1];
  fVar27 = pfVar4[3];
  fVar8 = *pfVar4;
  fVar15 = fVar5 - fVar10;
  fVar20 = pfVar4[6];
  fVar21 = pfVar4[5];
  fVar22 = pfVar4[4];
  fVar19 = pfVar4[8];
  fVar12 = fVar27 - fVar8;
  fVar18 = pfVar4[7];
  fVar13 = fVar21 - fVar10;
  fVar16 = fVar6 - fVar11;
  fVar14 = fVar22 - fVar11;
  fVar11 = fVar11 - fVar18;
  fVar10 = fVar10 - fVar19;
  fVar17 = fVar7 - fVar8;
  local_e0 = fVar20 - fVar27;
  local_dc = fVar19 - fVar21;
  fVar19 = fVar5 - fVar19;
  fVar5 = fVar5 - fVar21;
  fVar28 = fVar6 - fVar18;
  fVar18 = fVar18 - fVar22;
  fVar6 = fVar6 - fVar22;
  fVar21 = fVar7 - fVar20;
  fVar7 = fVar7 - fVar27;
  fVar8 = fVar8 - fVar20;
  fVar25 = fVar11 * fVar12 - fVar8 * fVar14;
  fVar26 = fVar8 * fVar13 - fVar10 * fVar12;
  fVar20 = fVar10 * fVar14 - fVar11 * fVar13;
  fVar22 = (fVar25 * fVar14 - fVar26 * fVar13) * fVar17 +
           (fVar20 * fVar13 - fVar25 * fVar12) * fVar16 +
           (fVar26 * fVar12 - fVar20 * fVar14) * fVar15;
  fVar27 = _LC25;
  if (fVar22 <= 0.0) {
    fVar27 = (float)(_LC42 & -(uint)(fVar22 < 0.0));
  }
  fVar23 = (fVar25 * fVar18 - local_dc * fVar26) * fVar7 +
           (local_dc * fVar20 - local_e0 * fVar25) * fVar6 +
           (local_e0 * fVar26 - fVar20 * fVar18) * fVar5;
  fVar22 = _LC25;
  if (fVar23 <= 0.0) {
    fVar22 = (float)(_LC42 & -(uint)(fVar23 < 0.0));
  }
  fVar24 = (fVar25 * fVar11 - fVar26 * fVar10) * fVar21 +
           (fVar20 * fVar10 - fVar25 * fVar8) * fVar28 + (fVar26 * fVar8 - fVar20 * fVar11) * fVar19
  ;
  fVar23 = _LC25;
  if (fVar24 <= 0.0) {
    if (0.0 <= fVar24) {
      fVar23 = 0.0;
      goto LAB_00102c3a;
    }
LAB_00103240:
    fVar27 = (fVar21 * fVar8 + fVar28 * fVar11 + fVar19 * fVar10) /
             (fVar8 * fVar8 + fVar11 * fVar11 + fVar10 * fVar10);
    if (fVar27 < 0.0) {
      fVar8 = fVar8 * 0.0;
      fVar11 = fVar11 * 0.0;
      fVar10 = fVar10 * 0.0;
    }
    else if (fVar27 <= _LC25) {
      fVar8 = fVar8 * fVar27;
      fVar11 = fVar11 * fVar27;
      fVar10 = fVar10 * fVar27;
    }
    fVar11 = (fVar10 - fVar19) * (fVar10 - fVar19) +
             (fVar8 - fVar21) * (fVar8 - fVar21) + (fVar11 - fVar28) * (fVar11 - fVar28);
    fVar10 = (fVar7 * local_e0 + fVar6 * fVar18 + fVar5 * local_dc) /
             (local_e0 * local_e0 + fVar18 * fVar18 + local_dc * local_dc);
    if (0.0 <= fVar10) {
      if (fVar10 <= _LC25) {
        fVar18 = fVar18 * fVar10;
        local_e0 = local_e0 * fVar10;
        local_dc = fVar10 * local_dc;
      }
    }
    else {
      local_e0 = local_e0 * 0.0;
      fVar18 = fVar18 * 0.0;
      local_dc = local_dc * 0.0;
    }
    fVar5 = (fVar18 - fVar6) * (fVar18 - fVar6) + (local_e0 - fVar7) * (local_e0 - fVar7) +
            (local_dc - fVar5) * (local_dc - fVar5);
    fVar7 = (fVar17 * fVar12 + fVar16 * fVar14 + fVar15 * fVar13) /
            (fVar12 * fVar12 + fVar14 * fVar14 + fVar13 * fVar13);
    if (0.0 <= fVar7) {
      if (fVar7 <= _LC25) {
        fVar12 = fVar12 * fVar7;
        fVar14 = fVar14 * fVar7;
        fVar13 = fVar13 * fVar7;
      }
    }
    else {
      fVar12 = fVar12 * 0.0;
      fVar14 = fVar14 * 0.0;
      fVar13 = fVar13 * 0.0;
    }
    fVar7 = (fVar12 - fVar17) * (fVar12 - fVar17) + (fVar14 - fVar16) * (fVar14 - fVar16) +
            (fVar13 - fVar15) * (fVar13 - fVar15);
    if (fVar5 <= fVar7) {
      fVar7 = fVar5;
    }
    if (fVar11 <= fVar7) {
      fVar7 = fVar11;
    }
LAB_00102cab:
    fVar7 = SQRT(fVar7);
  }
  else {
LAB_00102c3a:
    if (fVar27 + fVar22 + fVar23 < _LC36) goto LAB_00103240;
    fVar7 = fVar17 * fVar20 + fVar16 * fVar26 + fVar15 * fVar25;
    fVar7 = (fVar7 * fVar7) / (fVar25 * fVar25 + fVar20 * fVar20 + fVar26 * fVar26);
    if (0.0 <= fVar7) goto LAB_00102cab;
    fVar7 = sqrtf(fVar7);
  }
  fVar5 = *in_R9;
  if (fVar7 <= *in_R9) {
    fVar5 = fVar7;
  }
  *in_R9 = fVar5;
LAB_00102cbd:
  if (local_58[3] == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GPUParticlesCollisionSDF3D::_compute_sdf_z(unsigned int,
   GPUParticlesCollisionSDF3D::ComputeSDFParams*) */

void __thiscall
GPUParticlesCollisionSDF3D::_compute_sdf_z
          (GPUParticlesCollisionSDF3D *this,uint param_1,ComputeSDFParams *param_2)

{
  undefined8 uVar1;
  float *pfVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  long in_FS_OFFSET;
  float fVar8;
  float fVar9;
  undefined8 local_50;
  float local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar7 = *(int *)(param_2 + 8);
  iVar5 = *(int *)(param_2 + 0xc) * iVar7;
  if (0 < *(int *)(param_2 + 0xc)) {
    iVar4 = 0;
    while( true ) {
      if (0 < iVar7) {
        lVar6 = (long)(int)(iVar4 * iVar7 + iVar5 * param_1) * 4;
        iVar7 = 0;
        do {
          fVar8 = (float)iVar7;
          puVar3 = (undefined4 *)(*(long *)param_2 + lVar6);
          uVar1 = *(undefined8 *)(param_2 + 0x28);
          pfVar2 = *(float **)(param_2 + 0x30);
          iVar7 = iVar7 + 1;
          lVar6 = lVar6 + 4;
          fVar9 = (float)*(undefined8 *)(param_2 + 0x14);
          local_48 = (float)param_1 * fVar9 + *(float *)(param_2 + 0x20);
          local_50 = CONCAT44((float)iVar4 * fVar9 +
                              (float)((ulong)*(undefined8 *)(param_2 + 0x18) >> 0x20),
                              fVar8 * fVar9 + (float)*(undefined8 *)(param_2 + 0x18));
          *puVar3 = 0x60ad78ec;
          _find_closest_distance
                    ((Vector3 *)this,(BVH *)&local_50,(uint)uVar1,(Face3 *)0x0,
                     *(float *)(param_2 + 0x38),pfVar2);
        } while (iVar7 < *(int *)(param_2 + 8));
      }
      iVar4 = iVar4 + 1;
      if (*(int *)(param_2 + 0xc) <= iVar4) break;
      iVar7 = *(int *)(param_2 + 8);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GPUParticlesCollisionSDF3D::get_estimated_cell_size() const */

undefined1  [16] __thiscall
GPUParticlesCollisionSDF3D::get_estimated_cell_size(GPUParticlesCollisionSDF3D *this)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  long in_FS_OFFSET;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [12];
  undefined8 local_20;
  float local_18;
  long local_10;
  
  local_18 = *(float *)(this + 0x578);
  uVar1 = *(ulong *)(this + 0x570);
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar1;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  fVar4 = (float)(uVar1 >> 0x20);
  if (fVar4 <= (float)uVar1) {
    fVar4 = (float)uVar1;
  }
  fVar5 = local_18;
  if (local_18 <= fVar4) {
    fVar5 = fVar4;
  }
  fVar5 = fVar5 / (float)*(int *)(bake()::subdivs + (long)*(int *)(this + 0x57c) * 4);
  local_18 = local_18 / fVar5;
  auVar7._4_4_ = fVar5;
  auVar7._0_4_ = fVar5;
  auVar7._8_8_ = _LC14;
  auVar6 = divps(auVar6,auVar7);
  local_20 = auVar6._0_8_;
  auVar9 = Vector3::operator_cast_to_Vector3i((Vector3 *)&local_20);
  iVar2 = auVar9._0_4_;
  iVar3 = auVar9._4_4_;
  if (iVar2 < 1) {
    iVar2 = 1;
  }
  if (iVar3 == 0 || auVar9._0_8_ < 0) {
    iVar3 = 1;
  }
  local_18 = (float)auVar9._8_4_;
  if (auVar9._8_4_ < 1) {
    local_18 = (float)1;
  }
  local_20 = CONCAT44(iVar3,iVar2);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar8._8_4_ = local_18;
    auVar8._0_8_ = local_20;
    auVar8._12_4_ = 0;
    return auVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GPUParticlesCollisionSDF3D::_set(StringName const&, Variant const&) */

ulong GPUParticlesCollisionSDF3D::_set(StringName *param_1,Variant *param_2)

{
  ulong uVar1;
  Variant *in_RDX;
  long in_FS_OFFSET;
  undefined8 uVar2;
  float in_XMM1_Da;
  undefined8 local_40;
  float local_38;
  long local_20;
  float fVar3;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = StringName::operator==((StringName *)param_2,"extents");
  if ((char)uVar1 != '\0') {
    uVar2 = Variant::operator_cast_to_Vector3(in_RDX);
    fVar3 = (float)((ulong)uVar2 >> 0x20);
    local_38 = in_XMM1_Da + in_XMM1_Da;
    local_40 = CONCAT44(fVar3 + fVar3,(float)uVar2 + (float)uVar2);
    set_size((GPUParticlesCollisionSDF3D *)param_1,(Vector3 *)&local_40);
    uVar1 = uVar1 & 0xff;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GPUParticlesCollisionSDF3D::_get(StringName const&, Variant&) const */

ulong __thiscall
GPUParticlesCollisionSDF3D::_get
          (GPUParticlesCollisionSDF3D *this,StringName *param_1,Variant *param_2)

{
  ulong uVar1;
  long in_FS_OFFSET;
  undefined8 local_48;
  float local_40;
  undefined4 local_38 [2];
  undefined8 local_30;
  undefined8 uStack_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = StringName::operator==(param_1,"extents");
  if ((char)uVar1 != '\0') {
    local_40 = _LC2 * *(float *)(this + 0x578);
    local_48 = CONCAT44((float)((ulong)*(undefined8 *)(this + 0x570) >> 0x20) * _UNK_00125fdc,
                        (float)*(undefined8 *)(this + 0x570) * _LC2);
    Variant::Variant((Variant *)local_38,(Vector3 *)&local_48);
    if (Variant::needs_deinit[*(int *)param_2] != '\0') {
      Variant::_clear_internal();
    }
    uVar1 = uVar1 & 0xff;
    *(undefined4 *)param_2 = local_38[0];
    *(undefined8 *)(param_2 + 8) = local_30;
    *(undefined8 *)(param_2 + 0x10) = uStack_28;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GPUParticlesCollisionSDF3D::GPUParticlesCollisionSDF3D() */

void __thiscall
GPUParticlesCollisionSDF3D::GPUParticlesCollisionSDF3D(GPUParticlesCollisionSDF3D *this)

{
  undefined8 uVar1;
  
  GPUParticlesCollision3D::GPUParticlesCollision3D((GPUParticlesCollision3D *)this,5);
  *(undefined4 *)(this + 0x578) = 0x40000000;
  *(undefined ***)this = &PTR__initialize_classv_00124be0;
  uVar1 = __LC36;
  *(undefined8 *)(this + 0x588) = 0;
  *(undefined8 *)(this + 0x570) = uVar1;
  uVar1 = _LC45;
  *(undefined4 *)(this + 0x590) = 0x3f800000;
  *(undefined8 *)(this + 0x57c) = uVar1;
  return;
}



/* GPUParticlesCollisionHeightField3D::_notification(int) */

void __thiscall
GPUParticlesCollisionHeightField3D::_notification
          (GPUParticlesCollisionHeightField3D *this,int param_1)

{
  long *plVar1;
  
  if (param_1 == 0x19) {
    _notification((int)this);
    return;
  }
  if (param_1 != 2000) {
    return;
  }
  plVar1 = (long *)RenderingServer::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x00103a6a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x8e0))(plVar1,*(undefined8 *)(this + 0x568));
  return;
}



/* GPUParticlesCollisionHeightField3D::_set(StringName const&, Variant const&) */

ulong GPUParticlesCollisionHeightField3D::_set(StringName *param_1,Variant *param_2)

{
  ulong uVar1;
  Variant *in_RDX;
  long in_FS_OFFSET;
  undefined8 uVar2;
  float in_XMM1_Da;
  undefined8 local_40;
  float local_38;
  long local_20;
  float fVar3;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = StringName::operator==((StringName *)param_2,"extents");
  if ((char)uVar1 != '\0') {
    uVar2 = Variant::operator_cast_to_Vector3(in_RDX);
    fVar3 = (float)((ulong)uVar2 >> 0x20);
    local_38 = in_XMM1_Da + in_XMM1_Da;
    local_40 = CONCAT44(fVar3 + fVar3,(float)uVar2 + (float)uVar2);
    set_size((GPUParticlesCollisionHeightField3D *)param_1,(Vector3 *)&local_40);
    uVar1 = uVar1 & 0xff;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GPUParticlesCollisionHeightField3D::_get(StringName const&, Variant&) const */

ulong __thiscall
GPUParticlesCollisionHeightField3D::_get
          (GPUParticlesCollisionHeightField3D *this,StringName *param_1,Variant *param_2)

{
  ulong uVar1;
  long in_FS_OFFSET;
  undefined8 local_48;
  float local_40;
  undefined4 local_38 [2];
  undefined8 local_30;
  undefined8 uStack_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = StringName::operator==(param_1,"extents");
  if ((char)uVar1 != '\0') {
    local_40 = _LC2 * *(float *)(this + 0x57c);
    local_48 = CONCAT44((float)((ulong)*(undefined8 *)(this + 0x574) >> 0x20) * _UNK_00125fdc,
                        (float)*(undefined8 *)(this + 0x574) * _LC2);
    Variant::Variant((Variant *)local_38,(Vector3 *)&local_48);
    if (Variant::needs_deinit[*(int *)param_2] != '\0') {
      Variant::_clear_internal();
    }
    uVar1 = uVar1 & 0xff;
    *(undefined4 *)param_2 = local_38[0];
    *(undefined8 *)(param_2 + 8) = local_30;
    *(undefined8 *)(param_2 + 0x10) = uStack_28;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GPUParticlesCollisionHeightField3D::GPUParticlesCollisionHeightField3D() */

void __thiscall
GPUParticlesCollisionHeightField3D::GPUParticlesCollisionHeightField3D
          (GPUParticlesCollisionHeightField3D *this)

{
  GPUParticlesCollision3D::GPUParticlesCollision3D((GPUParticlesCollision3D *)this,6);
  *(undefined4 *)(this + 0x580) = 2;
  *(undefined ***)this = &PTR__initialize_classv_00124dd0;
  *(undefined8 *)(this + 0x570) = 0x40000000000fffff;
  *(undefined8 *)(this + 0x578) = 0x4000000040000000;
  this[0x584] = (GPUParticlesCollisionHeightField3D)0x0;
  *(undefined4 *)(this + 0x588) = 0;
  return;
}



/* GPUParticlesAttractor3D::GPUParticlesAttractor3D(RenderingServer::ParticlesCollisionType) */

void __thiscall
GPUParticlesAttractor3D::GPUParticlesAttractor3D(GPUParticlesAttractor3D *this,undefined4 param_2)

{
  long *plVar1;
  undefined8 uVar2;
  
  VisualInstance3D::VisualInstance3D((VisualInstance3D *)this);
  *(undefined4 *)(this + 0x560) = 0xffffffff;
  *(undefined ***)this = &PTR__initialize_classv_00124fc0;
  uVar2 = _LC14;
  *(undefined8 *)(this + 0x568) = 0;
  *(undefined8 *)(this + 0x570) = uVar2;
  *(undefined4 *)(this + 0x578) = 0;
  plVar1 = (long *)RenderingServer::get_singleton();
  uVar2 = (**(code **)(*plVar1 + 0x898))(plVar1);
  *(undefined8 *)(this + 0x568) = uVar2;
  plVar1 = (long *)RenderingServer::get_singleton();
  (**(code **)(*plVar1 + 0x8a0))(plVar1,*(undefined8 *)(this + 0x568),param_2);
  VisualInstance3D::set_base((RID *)this);
  return;
}



/* GPUParticlesAttractorSphere3D::GPUParticlesAttractorSphere3D() */

void __thiscall
GPUParticlesAttractorSphere3D::GPUParticlesAttractorSphere3D(GPUParticlesAttractorSphere3D *this)

{
  GPUParticlesAttractor3D::GPUParticlesAttractor3D((GPUParticlesAttractor3D *)this,0);
  *(undefined4 *)(this + 0x57c) = 0x3f800000;
  *(undefined ***)this = &PTR__initialize_classv_001251b0;
  return;
}



/* GPUParticlesAttractorBox3D::_set(StringName const&, Variant const&) */

ulong GPUParticlesAttractorBox3D::_set(StringName *param_1,Variant *param_2)

{
  ulong uVar1;
  Variant *in_RDX;
  long in_FS_OFFSET;
  undefined8 uVar2;
  float in_XMM1_Da;
  undefined8 local_40;
  float local_38;
  long local_20;
  float fVar3;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = StringName::operator==((StringName *)param_2,"extents");
  if ((char)uVar1 != '\0') {
    uVar2 = Variant::operator_cast_to_Vector3(in_RDX);
    fVar3 = (float)((ulong)uVar2 >> 0x20);
    local_38 = in_XMM1_Da + in_XMM1_Da;
    local_40 = CONCAT44(fVar3 + fVar3,(float)uVar2 + (float)uVar2);
    set_size((GPUParticlesAttractorBox3D *)param_1,(Vector3 *)&local_40);
    uVar1 = uVar1 & 0xff;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GPUParticlesAttractorBox3D::_get(StringName const&, Variant&) const */

ulong __thiscall
GPUParticlesAttractorBox3D::_get
          (GPUParticlesAttractorBox3D *this,StringName *param_1,Variant *param_2)

{
  ulong uVar1;
  long in_FS_OFFSET;
  undefined8 local_48;
  float local_40;
  undefined4 local_38 [2];
  undefined8 local_30;
  undefined8 uStack_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = StringName::operator==(param_1,"extents");
  if ((char)uVar1 != '\0') {
    local_40 = _LC2 * *(float *)(this + 0x584);
    local_48 = CONCAT44((float)((ulong)*(undefined8 *)(this + 0x57c) >> 0x20) * _UNK_00125fdc,
                        (float)*(undefined8 *)(this + 0x57c) * _LC2);
    Variant::Variant((Variant *)local_38,(Vector3 *)&local_48);
    if (Variant::needs_deinit[*(int *)param_2] != '\0') {
      Variant::_clear_internal();
    }
    uVar1 = uVar1 & 0xff;
    *(undefined4 *)param_2 = local_38[0];
    *(undefined8 *)(param_2 + 8) = local_30;
    *(undefined8 *)(param_2 + 0x10) = uStack_28;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GPUParticlesAttractorBox3D::GPUParticlesAttractorBox3D() */

void __thiscall
GPUParticlesAttractorBox3D::GPUParticlesAttractorBox3D(GPUParticlesAttractorBox3D *this)

{
  GPUParticlesAttractor3D::GPUParticlesAttractor3D((GPUParticlesAttractor3D *)this,1);
  *(undefined4 *)(this + 0x584) = 0x40000000;
  *(undefined ***)this = &PTR__initialize_classv_001253a0;
  *(undefined8 *)(this + 0x57c) = __LC36;
  return;
}



/* GPUParticlesAttractorVectorField3D::_set(StringName const&, Variant const&) */

ulong GPUParticlesAttractorVectorField3D::_set(StringName *param_1,Variant *param_2)

{
  ulong uVar1;
  Variant *in_RDX;
  long in_FS_OFFSET;
  undefined8 uVar2;
  float in_XMM1_Da;
  undefined8 local_40;
  float local_38;
  long local_20;
  float fVar3;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = StringName::operator==((StringName *)param_2,"extents");
  if ((char)uVar1 != '\0') {
    uVar2 = Variant::operator_cast_to_Vector3(in_RDX);
    fVar3 = (float)((ulong)uVar2 >> 0x20);
    local_38 = in_XMM1_Da + in_XMM1_Da;
    local_40 = CONCAT44(fVar3 + fVar3,(float)uVar2 + (float)uVar2);
    set_size((GPUParticlesAttractorVectorField3D *)param_1,(Vector3 *)&local_40);
    uVar1 = uVar1 & 0xff;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GPUParticlesAttractorVectorField3D::_get(StringName const&, Variant&) const */

ulong __thiscall
GPUParticlesAttractorVectorField3D::_get
          (GPUParticlesAttractorVectorField3D *this,StringName *param_1,Variant *param_2)

{
  ulong uVar1;
  long in_FS_OFFSET;
  undefined8 local_48;
  float local_40;
  undefined4 local_38 [2];
  undefined8 local_30;
  undefined8 uStack_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = StringName::operator==(param_1,"extents");
  if ((char)uVar1 != '\0') {
    local_40 = _LC2 * *(float *)(this + 0x584);
    local_48 = CONCAT44((float)((ulong)*(undefined8 *)(this + 0x57c) >> 0x20) * _UNK_00125fdc,
                        (float)*(undefined8 *)(this + 0x57c) * _LC2);
    Variant::Variant((Variant *)local_38,(Vector3 *)&local_48);
    if (Variant::needs_deinit[*(int *)param_2] != '\0') {
      Variant::_clear_internal();
    }
    uVar1 = uVar1 & 0xff;
    *(undefined4 *)param_2 = local_38[0];
    *(undefined8 *)(param_2 + 8) = local_30;
    *(undefined8 *)(param_2 + 0x10) = uStack_28;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GPUParticlesAttractorVectorField3D::GPUParticlesAttractorVectorField3D() */

void __thiscall
GPUParticlesAttractorVectorField3D::GPUParticlesAttractorVectorField3D
          (GPUParticlesAttractorVectorField3D *this)

{
  undefined8 uVar1;
  
  GPUParticlesAttractor3D::GPUParticlesAttractor3D((GPUParticlesAttractor3D *)this,2);
  *(undefined4 *)(this + 0x584) = 0x40000000;
  *(undefined ***)this = &PTR__initialize_classv_00125590;
  uVar1 = __LC36;
  *(undefined8 *)(this + 0x588) = 0;
  *(undefined8 *)(this + 0x57c) = uVar1;
  return;
}



/* GPUParticlesCollisionSDF3D::set_bake_mask_value(int, bool) */

void __thiscall
GPUParticlesCollisionSDF3D::set_bake_mask_value
          (GPUParticlesCollisionSDF3D *this,int param_1,bool param_2)

{
  uint uVar1;
  uint uVar2;
  long in_FS_OFFSET;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 - 1U < 0x14) {
    uVar1 = 1 << ((byte)(param_1 - 1U) & 0x1f);
    uVar2 = ~uVar1 & *(uint *)(this + 0x580);
    if (param_2) {
      uVar2 = uVar1 | *(uint *)(this + 0x580);
    }
    *(uint *)(this + 0x580) = uVar2;
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      Node::update_configuration_warnings();
      return;
    }
  }
  else {
    local_40 = 0;
    local_30 = 0x42;
    local_38 = "The render layer number (%d) must be between 1 and 20 (inclusive).";
    String::parse_latin1((StrRange *)&local_40);
    vformat<int>((String *)&local_38,(int)(StrRange *)&local_40);
    _err_print_error("set_bake_mask_value","scene/3d/gpu_particles_collision_3d.cpp",0x270,
                     "Condition \"p_layer_number < 1 || p_layer_number > 20\" is true.",
                     (String *)&local_38,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GPUParticlesCollisionSDF3D::get_bake_mask_value(int) const */

undefined4 __thiscall
GPUParticlesCollisionSDF3D::get_bake_mask_value(GPUParticlesCollisionSDF3D *this,int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  long in_FS_OFFSET;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 - 1U < 0x14) {
    uVar1 = 1 << ((byte)(param_1 - 1U) & 0x1f) & *(uint *)(this + 0x580);
    uVar2 = CONCAT31((int3)(uVar1 >> 8),uVar1 != 0);
  }
  else {
    local_40 = 0;
    local_30 = 0x42;
    local_38 = "The render layer number (%d) must be between 1 and 20 (inclusive).";
    String::parse_latin1((StrRange *)&local_40);
    vformat<int>((String *)&local_38,(int)(StrRange *)&local_40);
    _err_print_error("get_bake_mask_value","scene/3d/gpu_particles_collision_3d.cpp",0x27b,
                     "Condition \"p_layer_number < 1 || p_layer_number > 20\" is true. Returning: false"
                     ,(String *)&local_38,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
    uVar2 = 0;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GPUParticlesCollisionSDF3D::_compute_sdf(GPUParticlesCollisionSDF3D::ComputeSDFParams*) */

void __thiscall
GPUParticlesCollisionSDF3D::_compute_sdf(GPUParticlesCollisionSDF3D *this,ComputeSDFParams *param_1)

{
  code *pcVar1;
  Callable *pCVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  long *plVar6;
  long in_FS_OFFSET;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  pCVar2 = WorkerThreadPool::singleton;
  iVar4 = *(int *)(param_1 + 0x10);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  puVar5 = (undefined8 *)operator_new(0x28,"");
  *puVar5 = &PTR_callback_00125780;
  puVar5[1] = this;
  puVar5[2] = _compute_sdf_z;
  puVar5[3] = 0;
  puVar5[4] = param_1;
  local_48 = (char *)0x0;
  local_40 = 0;
  WorkerThreadPool::_add_group_task
            (pCVar2,(_func_void_void_ptr_uint *)&local_48,(void *)0x0,(BaseTemplateUserdata *)0x0,
             (int)puVar5,iVar4,true,(String *)0x0);
  Callable::~Callable((Callable *)&local_48);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  while( true ) {
    cVar3 = WorkerThreadPool::is_group_task_completed((long)WorkerThreadPool::singleton);
    if (cVar3 != '\0') break;
    plVar6 = (long *)OS::get_singleton();
    (**(code **)(*plVar6 + 0x1f8))(plVar6,10000);
    pcVar1 = bake_step_function;
    if (bake_step_function != (code *)0x0) {
      local_50 = 0;
      local_48 = "Baking SDF";
      local_40 = 10;
      String::parse_latin1((StrRange *)&local_50);
      iVar4 = WorkerThreadPool::get_group_processed_element_count((long)WorkerThreadPool::singleton)
      ;
      (*pcVar1)((ulong)(uint)(iVar4 * 100) / (ulong)*(uint *)(param_1 + 0x10),
                (CowData<char32_t> *)&local_50,
                (ulong)(uint)(iVar4 * 100) % (ulong)*(uint *)(param_1 + 0x10));
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    WorkerThreadPool::wait_for_group_task_completion((long)WorkerThreadPool::singleton);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GPUParticlesAttractorBox3D::_bind_methods() */

void GPUParticlesAttractorBox3D::_bind_methods(void)

{
  MethodBind *pMVar1;
  long in_FS_OFFSET;
  CowData<char32_t> *local_e8;
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
  undefined *local_68;
  undefined8 local_60;
  undefined **local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = 0;
  local_68 = &_LC69;
  local_58 = &local_68;
  D_METHODP((char *)&local_98,(char ***)"set_size",(uint)&local_58);
  local_50 = (undefined1  [16])0x0;
  local_58 = (undefined **)0x0;
  pMVar1 = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(pMVar1);
  *(undefined ***)pMVar1 = &PTR__gen_argument_type_00125930;
  *(code **)(pMVar1 + 0x58) = set_size;
  *(undefined8 *)(pMVar1 + 0x60) = 0;
  MethodBind::_generate_argument_types((int)pMVar1);
  *(undefined4 *)(pMVar1 + 0x34) = 1;
  local_b0 = 0;
  local_a8 = "GPUParticlesAttractorBox3D";
  local_a0 = 0x1a;
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
  D_METHODP((char *)&local_98,(char ***)"get_size",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (undefined **)0x0;
  pMVar1 = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(pMVar1);
  *(undefined ***)pMVar1 = &PTR__gen_argument_type_00125990;
  *(code **)(pMVar1 + 0x58) = get_size;
  *(undefined8 *)(pMVar1 + 0x60) = 0;
  MethodBind::_set_returns(SUB81(pMVar1,0));
  MethodBind::_set_const(SUB81(pMVar1,0));
  MethodBind::_generate_argument_types((int)pMVar1);
  *(undefined4 *)(pMVar1 + 0x34) = 0;
  local_b0 = 0;
  local_a8 = "GPUParticlesAttractorBox3D";
  local_a0 = 0x1a;
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
  local_c0 = 0;
  local_98 = "0.01,1024,0.01,or_greater,suffix:m";
  local_c8 = 0;
  local_90 = 0x22;
  String::parse_latin1((StrRange *)&local_c8);
  local_98 = "size";
  local_d0 = 0;
  local_90 = 4;
  String::parse_latin1((StrRange *)&local_d0);
  local_98 = (char *)CONCAT44(local_98._4_4_,9);
  local_90 = 0;
  if (local_d0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_90,(CowData *)&local_d0);
  }
  local_88 = (char *)0x0;
  local_80 = 1;
  local_78 = 0;
  if (local_c8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_78,(CowData *)&local_c8);
    local_70 = 6;
    if (local_80 == 0x11) {
      StringName::StringName((StringName *)&local_a8,(String *)&local_78,false);
      if (local_88 == local_a8) {
        if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_88 = local_a8;
      }
      goto LAB_00104867;
    }
  }
  local_70 = 6;
  StringName::operator=((StringName *)&local_88,(StringName *)&local_c0);
LAB_00104867:
  local_e8 = (CowData<char32_t> *)&local_78;
  local_a8 = "GPUParticlesAttractorBox3D";
  local_d8 = 0;
  local_a0 = 0x1a;
  String::parse_latin1((StrRange *)&local_d8);
  StringName::StringName((StringName *)&local_a8,(String *)&local_d8,false);
  ClassDB::add_property
            ((StringName *)&local_a8,(PropertyInfo *)&local_98,(StringName *)&local_b8,
             (StringName *)&local_b0,-1);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  CowData<char32_t>::_unref(local_e8);
  if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
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



/* GPUParticlesCollisionBox3D::_bind_methods() */

void GPUParticlesCollisionBox3D::_bind_methods(void)

{
  MethodBind *pMVar1;
  long in_FS_OFFSET;
  CowData<char32_t> *local_e8;
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
  undefined *local_68;
  undefined8 local_60;
  undefined **local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = 0;
  local_68 = &_LC69;
  local_58 = &local_68;
  D_METHODP((char *)&local_98,(char ***)"set_size",(uint)&local_58);
  local_50 = (undefined1  [16])0x0;
  local_58 = (undefined **)0x0;
  pMVar1 = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(pMVar1);
  *(undefined ***)pMVar1 = &PTR__gen_argument_type_00125930;
  *(code **)(pMVar1 + 0x58) = set_size;
  *(undefined8 *)(pMVar1 + 0x60) = 0;
  MethodBind::_generate_argument_types((int)pMVar1);
  *(undefined4 *)(pMVar1 + 0x34) = 1;
  local_b0 = 0;
  local_a8 = "GPUParticlesCollisionBox3D";
  local_a0 = 0x1a;
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
  D_METHODP((char *)&local_98,(char ***)"get_size",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (undefined **)0x0;
  pMVar1 = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(pMVar1);
  *(undefined ***)pMVar1 = &PTR__gen_argument_type_00125990;
  *(code **)(pMVar1 + 0x58) = get_size;
  *(undefined8 *)(pMVar1 + 0x60) = 0;
  MethodBind::_set_returns(SUB81(pMVar1,0));
  MethodBind::_set_const(SUB81(pMVar1,0));
  MethodBind::_generate_argument_types((int)pMVar1);
  *(undefined4 *)(pMVar1 + 0x34) = 0;
  local_b0 = 0;
  local_a8 = "GPUParticlesCollisionBox3D";
  local_a0 = 0x1a;
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
  local_c0 = 0;
  local_98 = "0.01,1024,0.01,or_greater,suffix:m";
  local_c8 = 0;
  local_90 = 0x22;
  String::parse_latin1((StrRange *)&local_c8);
  local_98 = "size";
  local_d0 = 0;
  local_90 = 4;
  String::parse_latin1((StrRange *)&local_d0);
  local_98 = (char *)CONCAT44(local_98._4_4_,9);
  local_90 = 0;
  if (local_d0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_90,(CowData *)&local_d0);
  }
  local_88 = (char *)0x0;
  local_80 = 1;
  local_78 = 0;
  if (local_c8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_78,(CowData *)&local_c8);
    local_70 = 6;
    if (local_80 == 0x11) {
      StringName::StringName((StringName *)&local_a8,(String *)&local_78,false);
      if (local_88 == local_a8) {
        if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_88 = local_a8;
      }
      goto LAB_00104e07;
    }
  }
  local_70 = 6;
  StringName::operator=((StringName *)&local_88,(StringName *)&local_c0);
LAB_00104e07:
  local_e8 = (CowData<char32_t> *)&local_78;
  local_a8 = "GPUParticlesCollisionBox3D";
  local_d8 = 0;
  local_a0 = 0x1a;
  String::parse_latin1((StrRange *)&local_d8);
  StringName::StringName((StringName *)&local_a8,(String *)&local_d8,false);
  ClassDB::add_property
            ((StringName *)&local_a8,(PropertyInfo *)&local_98,(StringName *)&local_b8,
             (StringName *)&local_b0,-1);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  CowData<char32_t>::_unref(local_e8);
  if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
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



/* GPUParticlesCollision3D::_bind_methods() */

void GPUParticlesCollision3D::_bind_methods(void)

{
  MethodBind *pMVar1;
  long in_FS_OFFSET;
  CowData<char32_t> *local_e8;
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
  undefined *local_68;
  undefined8 local_60;
  undefined **local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = 0;
  local_68 = &_LC73;
  local_58 = &local_68;
  D_METHODP((char *)&local_98,(char ***)"set_cull_mask",(uint)&local_58);
  local_50 = (undefined1  [16])0x0;
  local_58 = (undefined **)0x0;
  pMVar1 = create_method_bind<GPUParticlesCollision3D,unsigned_int>(set_cull_mask);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_98);
  D_METHODP((char *)&local_98,(char ***)"get_cull_mask",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (undefined **)0x0;
  pMVar1 = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(pMVar1);
  *(undefined ***)pMVar1 = &PTR__gen_argument_type_00125810;
  *(undefined8 *)(pMVar1 + 0x58) = 0x100000;
  *(undefined8 *)(pMVar1 + 0x60) = 0;
  MethodBind::_set_returns(SUB81(pMVar1,0));
  MethodBind::_set_const(SUB81(pMVar1,0));
  MethodBind::_generate_argument_types((int)pMVar1);
  *(undefined4 *)(pMVar1 + 0x34) = 0;
  local_b0 = 0;
  local_a8 = "GPUParticlesCollision3D";
  local_a0 = 0x17;
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
  local_c0 = 0;
  local_98 = "";
  local_c8 = 0;
  local_90 = 0;
  String::parse_latin1((StrRange *)&local_c8);
  local_98 = "cull_mask";
  local_d0 = 0;
  local_90 = 9;
  String::parse_latin1((StrRange *)&local_d0);
  local_98 = (char *)CONCAT44(local_98._4_4_,2);
  local_90 = 0;
  if (local_d0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_90,(CowData *)&local_d0);
  }
  local_88 = (char *)0x0;
  local_80 = 10;
  local_78 = 0;
  if (local_c8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_78,(CowData *)&local_c8);
    local_70 = 6;
    if (local_80 == 0x11) {
      StringName::StringName((StringName *)&local_a8,(String *)&local_78,false);
      if (local_88 == local_a8) {
        if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_88 = local_a8;
      }
      goto LAB_0010530f;
    }
  }
  local_70 = 6;
  StringName::operator=((StringName *)&local_88,(StringName *)&local_c0);
LAB_0010530f:
  local_e8 = (CowData<char32_t> *)&local_78;
  local_a8 = "GPUParticlesCollision3D";
  local_d8 = 0;
  local_a0 = 0x17;
  String::parse_latin1((StrRange *)&local_d8);
  StringName::StringName((StringName *)&local_a8,(String *)&local_d8,false);
  ClassDB::add_property
            ((StringName *)&local_a8,(PropertyInfo *)&local_98,(StringName *)&local_b8,
             (StringName *)&local_b0,-1);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  CowData<char32_t>::_unref(local_e8);
  if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
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



/* GPUParticlesCollision3D::initialize_class() [clone .part.0] */

void GPUParticlesCollision3D::initialize_class(void)

{
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (VisualInstance3D::initialize_class()::initialized == '\0') {
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
        if ((code *)PTR__bind_methods_0012d008 != Node::_bind_methods) {
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
    local_58 = "VisualInstance3D";
    local_70 = 0;
    local_50 = 0x10;
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
    if ((code *)_GLOBAL_OFFSET_TABLE_ != Node3D::_bind_methods) {
      VisualInstance3D::_bind_methods();
    }
    VisualInstance3D::initialize_class()::initialized = '\x01';
  }
  local_58 = "VisualInstance3D";
  local_68 = 0;
  local_50 = 0x10;
  String::parse_latin1((StrRange *)&local_68);
  StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
  local_58 = "GPUParticlesCollision3D";
  local_70 = 0;
  local_50 = 0x17;
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
  initialize_class()::initialized = 1;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GPUParticlesCollisionSphere3D::_bind_methods() */

void GPUParticlesCollisionSphere3D::_bind_methods(void)

{
  MethodBind *pMVar1;
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
  local_58 = &local_68;
  local_60 = 0;
  local_68 = "radius";
  D_METHODP((char *)&local_98,(char ***)"set_radius",(uint)&local_58);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar1 = create_method_bind<GPUParticlesCollisionSphere3D,float>(set_radius);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_98);
  D_METHODP((char *)&local_98,(char ***)"get_radius",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar1 = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(pMVar1);
  *(undefined ***)pMVar1 = &PTR__gen_argument_type_001258d0;
  *(code **)(pMVar1 + 0x58) = get_radius;
  *(undefined8 *)(pMVar1 + 0x60) = 0;
  MethodBind::_set_returns(SUB81(pMVar1,0));
  MethodBind::_set_const(SUB81(pMVar1,0));
  MethodBind::_generate_argument_types((int)pMVar1);
  *(undefined4 *)(pMVar1 + 0x34) = 0;
  local_b0 = 0;
  local_a8 = "GPUParticlesCollisionSphere3D";
  local_a0 = 0x1d;
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
  local_c0 = 0;
  local_98 = "0.01,1024,0.01,or_greater,suffix:m";
  local_c8 = 0;
  local_90 = 0x22;
  String::parse_latin1((StrRange *)&local_c8);
  local_98 = "radius";
  local_d0 = 0;
  local_90 = 6;
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
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_78,(CowData *)&local_c8);
    local_70 = 6;
    if (local_80 == 0x11) {
      StringName::StringName((StringName *)&local_a8,(String *)&local_78,false);
      if (local_88 == local_a8) {
        if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_88 = local_a8;
      }
      goto LAB_00105c37;
    }
  }
  local_70 = 6;
  StringName::operator=((StringName *)&local_88,(StringName *)&local_c0);
LAB_00105c37:
  local_e0 = (CowData<char32_t> *)&local_78;
  local_d8 = 0;
  local_a8 = "GPUParticlesCollisionSphere3D";
  local_a0 = 0x1d;
  String::parse_latin1((StrRange *)&local_d8);
  StringName::StringName((StringName *)&local_a8,(String *)&local_d8,false);
  ClassDB::add_property
            ((StringName *)&local_a8,(PropertyInfo *)&local_98,(StringName *)&local_b8,
             (StringName *)&local_b0,-1);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  CowData<char32_t>::_unref(local_e0);
  if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
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



/* GPUParticlesAttractor3D::_bind_methods() */

void GPUParticlesAttractor3D::_bind_methods(void)

{
  MethodBind *pMVar1;
  long in_FS_OFFSET;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  char *local_a8;
  undefined8 local_a0;
  char *local_98;
  undefined8 local_90;
  char *local_68;
  undefined8 local_60;
  char **local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  D_METHOD<char_const*>((char *)&local_98,"set_cull_mask");
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar1 = create_method_bind<GPUParticlesAttractor3D,unsigned_int>(set_cull_mask);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_98);
  D_METHODP((char *)&local_98,(char ***)"get_cull_mask",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar1 = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(pMVar1);
  *(undefined ***)pMVar1 = &PTR__gen_argument_type_00125810;
  *(code **)(pMVar1 + 0x58) = get_cull_mask;
  *(undefined8 *)(pMVar1 + 0x60) = 0;
  MethodBind::_set_returns(SUB81(pMVar1,0));
  MethodBind::_set_const(SUB81(pMVar1,0));
  MethodBind::_generate_argument_types((int)pMVar1);
  *(undefined4 *)(pMVar1 + 0x34) = 0;
  local_b0 = 0;
  local_a8 = "GPUParticlesAttractor3D";
  local_a0 = 0x17;
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
  local_68 = "strength";
  local_60 = 0;
  local_58 = &local_68;
  D_METHODP((char *)&local_98,(char ***)"set_strength",(uint)&local_58);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar1 = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(pMVar1);
  *(undefined ***)pMVar1 = &PTR__gen_argument_type_00125870;
  *(code **)(pMVar1 + 0x58) = set_strength;
  *(undefined8 *)(pMVar1 + 0x60) = 0;
  MethodBind::_generate_argument_types((int)pMVar1);
  *(undefined4 *)(pMVar1 + 0x34) = 1;
  local_b0 = 0;
  local_a8 = "GPUParticlesAttractor3D";
  local_a0 = 0x17;
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
  D_METHODP((char *)&local_98,(char ***)"get_strength",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar1 = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(pMVar1);
  *(undefined ***)pMVar1 = &PTR__gen_argument_type_001258d0;
  *(code **)(pMVar1 + 0x58) = get_strength;
  *(undefined8 *)(pMVar1 + 0x60) = 0;
  MethodBind::_set_returns(SUB81(pMVar1,0));
  MethodBind::_set_const(SUB81(pMVar1,0));
  MethodBind::_generate_argument_types((int)pMVar1);
  *(undefined4 *)(pMVar1 + 0x34) = 0;
  local_b0 = 0;
  local_a8 = "GPUParticlesAttractor3D";
  local_a0 = 0x17;
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
  D_METHOD<char_const*>((char *)&local_98,"set_attenuation");
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar1 = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(pMVar1);
  *(undefined ***)pMVar1 = &PTR__gen_argument_type_00125870;
  *(code **)(pMVar1 + 0x58) = set_attenuation;
  *(undefined8 *)(pMVar1 + 0x60) = 0;
  MethodBind::_generate_argument_types((int)pMVar1);
  *(undefined4 *)(pMVar1 + 0x34) = 1;
  local_b0 = 0;
  local_a8 = "GPUParticlesAttractor3D";
  local_a0 = 0x17;
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
  D_METHODP((char *)&local_98,(char ***)"get_attenuation",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar1 = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(pMVar1);
  *(undefined ***)pMVar1 = &PTR__gen_argument_type_001258d0;
  *(code **)(pMVar1 + 0x58) = get_attenuation;
  *(undefined8 *)(pMVar1 + 0x60) = 0;
  MethodBind::_set_returns(SUB81(pMVar1,0));
  MethodBind::_set_const(SUB81(pMVar1,0));
  MethodBind::_generate_argument_types((int)pMVar1);
  *(undefined4 *)(pMVar1 + 0x34) = 0;
  local_b0 = 0;
  local_a8 = "GPUParticlesAttractor3D";
  local_a0 = 0x17;
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
  local_68 = "amount";
  local_60 = 0;
  local_58 = &local_68;
  D_METHODP((char *)&local_98,(char ***)"set_directionality",(uint)&local_58);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar1 = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(pMVar1);
  *(undefined ***)pMVar1 = &PTR__gen_argument_type_00125870;
  *(code **)(pMVar1 + 0x58) = set_directionality;
  *(undefined8 *)(pMVar1 + 0x60) = 0;
  MethodBind::_generate_argument_types((int)pMVar1);
  *(undefined4 *)(pMVar1 + 0x34) = 1;
  local_b0 = 0;
  local_a8 = "GPUParticlesAttractor3D";
  local_a0 = 0x17;
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
  D_METHODP((char *)&local_98,(char ***)"get_directionality",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar1 = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(pMVar1);
  *(undefined ***)pMVar1 = &PTR__gen_argument_type_001258d0;
  *(code **)(pMVar1 + 0x58) = get_directionality;
  *(undefined8 *)(pMVar1 + 0x60) = 0;
  MethodBind::_set_returns(SUB81(pMVar1,0));
  MethodBind::_set_const(SUB81(pMVar1,0));
  MethodBind::_generate_argument_types((int)pMVar1);
  *(undefined4 *)(pMVar1 + 0x34) = 0;
  local_b0 = 0;
  local_a8 = "GPUParticlesAttractor3D";
  local_a0 = 0x17;
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
  local_98 = "-128,128,0.01,or_greater,or_less";
  local_c0 = 0;
  local_c8 = 0;
  local_90 = 0x20;
  String::parse_latin1((StrRange *)&local_c8);
  local_d0 = 0;
  local_98 = "strength";
  local_90 = 8;
  String::parse_latin1((StrRange *)&local_d0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_98,3,(StrRange *)&local_d0,1,(StrRange *)&local_c8,6,&local_c0);
  local_a8 = "GPUParticlesAttractor3D";
  local_d8 = 0;
  local_a0 = 0x17;
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
  if (StringName::configured != '\0') {
    if (local_c0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00106831;
    }
    if (local_b8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00106831;
    }
    if (local_b0 != 0) {
      StringName::unref();
    }
  }
LAB_00106831:
  _scs_create((char *)&local_b0,true);
  _scs_create((char *)&local_b8,true);
  local_98 = "0,8,0.01";
  local_c0 = 0;
  local_c8 = 0;
  local_90 = 8;
  String::parse_latin1((StrRange *)&local_c8);
  local_98 = "attenuation";
  local_d0 = 0;
  local_90 = 0xb;
  String::parse_latin1((StrRange *)&local_d0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_98,3,(StrRange *)&local_d0,4,(StrRange *)&local_c8,6,&local_c0);
  local_a8 = "GPUParticlesAttractor3D";
  local_d8 = 0;
  local_a0 = 0x17;
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
  if (StringName::configured != '\0') {
    if (local_c0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001069ae;
    }
    if (local_b8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001069ae;
    }
    if (local_b0 != 0) {
      StringName::unref();
    }
  }
LAB_001069ae:
  _scs_create((char *)&local_b0,true);
  _scs_create((char *)&local_b8,true);
  local_98 = "0,1,0.01";
  local_c0 = 0;
  local_c8 = 0;
  local_90 = 8;
  String::parse_latin1((StrRange *)&local_c8);
  local_98 = "directionality";
  local_d0 = 0;
  local_90 = 0xe;
  String::parse_latin1((StrRange *)&local_d0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_98,3,(StrRange *)&local_d0,1,(StrRange *)&local_c8,6,&local_c0);
  local_a8 = "GPUParticlesAttractor3D";
  local_d8 = 0;
  local_a0 = 0x17;
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
  if (StringName::configured != '\0') {
    if (local_c0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00106b2a;
    }
    if (local_b8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00106b2a;
    }
    if (local_b0 != 0) {
      StringName::unref();
    }
  }
LAB_00106b2a:
  _scs_create((char *)&local_b0,true);
  _scs_create((char *)&local_b8,true);
  local_98 = "";
  local_c0 = 0;
  local_c8 = 0;
  local_90 = 0;
  String::parse_latin1((StrRange *)&local_c8);
  local_98 = "cull_mask";
  local_d0 = 0;
  local_90 = 9;
  String::parse_latin1((StrRange *)&local_d0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_98,2,(StrRange *)&local_d0,10,(StrRange *)&local_c8,6,&local_c0)
  ;
  local_a8 = "GPUParticlesAttractor3D";
  local_d8 = 0;
  local_a0 = 0x17;
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
  if (StringName::configured != '\0') {
    if (local_c0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00106ca6;
    }
    if (local_b8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00106ca6;
    }
    if (local_b0 != 0) {
      StringName::unref();
    }
  }
LAB_00106ca6:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GPUParticlesAttractor3D::initialize_class() [clone .part.0] */

void GPUParticlesAttractor3D::initialize_class(void)

{
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (VisualInstance3D::initialize_class()::initialized == '\0') {
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
        if ((code *)PTR__bind_methods_0012d008 != Node::_bind_methods) {
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
    local_58 = "VisualInstance3D";
    local_70 = 0;
    local_50 = 0x10;
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
    if ((code *)_GLOBAL_OFFSET_TABLE_ != Node3D::_bind_methods) {
      VisualInstance3D::_bind_methods();
    }
    VisualInstance3D::initialize_class()::initialized = '\x01';
  }
  local_58 = "VisualInstance3D";
  local_68 = 0;
  local_50 = 0x10;
  String::parse_latin1((StrRange *)&local_68);
  StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
  local_58 = "GPUParticlesAttractor3D";
  local_70 = 0;
  local_50 = 0x17;
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
  initialize_class()::initialized = 1;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GPUParticlesAttractorSphere3D::_bind_methods() */

void GPUParticlesAttractorSphere3D::_bind_methods(void)

{
  MethodBind *pMVar1;
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
  local_58 = &local_68;
  local_60 = 0;
  local_68 = "radius";
  D_METHODP((char *)&local_98,(char ***)"set_radius",(uint)&local_58);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar1 = create_method_bind<GPUParticlesAttractorSphere3D,float>(set_radius);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_98);
  D_METHODP((char *)&local_98,(char ***)"get_radius",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar1 = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(pMVar1);
  *(undefined ***)pMVar1 = &PTR__gen_argument_type_001258d0;
  *(code **)(pMVar1 + 0x58) = get_radius;
  *(undefined8 *)(pMVar1 + 0x60) = 0;
  MethodBind::_set_returns(SUB81(pMVar1,0));
  MethodBind::_set_const(SUB81(pMVar1,0));
  MethodBind::_generate_argument_types((int)pMVar1);
  *(undefined4 *)(pMVar1 + 0x34) = 0;
  local_b0 = 0;
  local_a8 = "GPUParticlesAttractorSphere3D";
  local_a0 = 0x1d;
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
  local_c0 = 0;
  local_98 = "0.01,1024,0.01,or_greater,suffix:m";
  local_c8 = 0;
  local_90 = 0x22;
  String::parse_latin1((StrRange *)&local_c8);
  local_98 = "radius";
  local_d0 = 0;
  local_90 = 6;
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
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_78,(CowData *)&local_c8);
    local_70 = 6;
    if (local_80 == 0x11) {
      StringName::StringName((StringName *)&local_a8,(String *)&local_78,false);
      if (local_88 == local_a8) {
        if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_88 = local_a8;
      }
      goto LAB_00107507;
    }
  }
  local_70 = 6;
  StringName::operator=((StringName *)&local_88,(StringName *)&local_c0);
LAB_00107507:
  local_e0 = (CowData<char32_t> *)&local_78;
  local_d8 = 0;
  local_a8 = "GPUParticlesAttractorSphere3D";
  local_a0 = 0x1d;
  String::parse_latin1((StrRange *)&local_d8);
  StringName::StringName((StringName *)&local_a8,(String *)&local_d8,false);
  ClassDB::add_property
            ((StringName *)&local_a8,(PropertyInfo *)&local_98,(StringName *)&local_b8,
             (StringName *)&local_b0,-1);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  CowData<char32_t>::_unref(local_e0);
  if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
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



/* GPUParticlesAttractorVectorField3D::_bind_methods() */

void GPUParticlesAttractorVectorField3D::_bind_methods(void)

{
  MethodBind *pMVar1;
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
  local_68 = "size";
  local_58 = &local_68;
  D_METHODP((char *)&local_98,(char ***)"set_size",(uint)&local_58);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar1 = create_method_bind<GPUParticlesAttractorVectorField3D,Vector3_const&>(set_size);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_98);
  D_METHODP((char *)&local_98,(char ***)"get_size",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar1 = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(pMVar1);
  *(undefined ***)pMVar1 = &PTR__gen_argument_type_00125990;
  *(code **)(pMVar1 + 0x58) = get_size;
  *(undefined8 *)(pMVar1 + 0x60) = 0;
  MethodBind::_set_returns(SUB81(pMVar1,0));
  MethodBind::_set_const(SUB81(pMVar1,0));
  MethodBind::_generate_argument_types((int)pMVar1);
  *(undefined4 *)(pMVar1 + 0x34) = 0;
  local_a8 = "GPUParticlesAttractorVectorField3D";
  local_b0 = 0;
  local_a0 = 0x22;
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
  local_68 = "texture";
  local_60 = 0;
  local_58 = &local_68;
  D_METHODP((char *)&local_98,(char ***)"set_texture",(uint)&local_58);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar1 = create_method_bind<GPUParticlesAttractorVectorField3D,Ref<Texture3D>const&>(set_texture);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_98);
  D_METHODP((char *)&local_98,(char ***)"get_texture",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar1 = create_method_bind<GPUParticlesAttractorVectorField3D,Ref<Texture3D>>(get_texture);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_98);
  _scs_create((char *)&local_b0,true);
  _scs_create((char *)&local_b8,true);
  local_98 = "0.01,1024,0.01,or_greater,suffix:m";
  local_c0 = 0;
  local_c8 = 0;
  local_90 = 0x22;
  String::parse_latin1((StrRange *)&local_c8);
  local_98 = "size";
  local_d0 = 0;
  local_90 = 4;
  String::parse_latin1((StrRange *)&local_d0);
  local_98 = (char *)CONCAT44(local_98._4_4_,9);
  local_90 = 0;
  if (local_d0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_90,(CowData *)&local_d0);
  }
  local_88 = (char *)0x0;
  local_80 = 1;
  local_78 = 0;
  if (local_c8 == 0) {
LAB_00107ae2:
    local_70 = 6;
    StringName::operator=((StringName *)&local_88,(StringName *)&local_c0);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_78,(CowData *)&local_c8);
    local_70 = 6;
    if (local_80 != 0x11) goto LAB_00107ae2;
    StringName::StringName((StringName *)&local_a8,(String *)&local_78,false);
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
  local_e0 = (CowData<char32_t> *)&local_78;
  local_d8 = 0;
  local_a8 = "GPUParticlesAttractorVectorField3D";
  local_a0 = 0x22;
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
  local_98 = "Texture3D";
  local_c0 = 0;
  local_c8 = 0;
  local_90 = 9;
  String::parse_latin1((StrRange *)&local_c8);
  local_d0 = 0;
  local_98 = "texture";
  local_90 = 7;
  String::parse_latin1((StrRange *)&local_d0);
  local_98 = (char *)CONCAT44(local_98._4_4_,0x18);
  local_90 = 0;
  if (local_d0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_90,(CowData *)&local_d0);
  }
  local_88 = (char *)0x0;
  local_80 = 0x11;
  local_78 = 0;
  if (local_c8 != 0) {
    CowData<char32_t>::_ref(local_e0,(CowData *)&local_c8);
    local_70 = 6;
    if (local_80 != 0x11) {
      StringName::operator=((StringName *)&local_88,(StringName *)&local_c0);
      goto LAB_00107cc4;
    }
  }
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
LAB_00107cc4:
  local_d8 = 0;
  local_a8 = "GPUParticlesAttractorVectorField3D";
  local_a0 = 0x22;
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
  if (((StringName::configured != '\0') &&
      ((local_c0 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (((local_b8 == 0 || (StringName::unref(), StringName::configured != '\0')) && (local_b0 != 0)))
     ) {
    StringName::unref();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* GPUParticlesCollisionSDF3D::_bind_methods() */

void GPUParticlesCollisionSDF3D::_bind_methods(void)

{
  undefined *puVar1;
  MethodBind *pMVar2;
  long in_FS_OFFSET;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  char *local_b8;
  undefined8 local_b0;
  char *local_a8;
  undefined8 local_a0;
  long local_98;
  undefined *local_78;
  char *pcStack_70;
  undefined8 local_68;
  undefined **local_58;
  undefined1 auStack_50 [16];
  long local_40;
  
  puVar1 = PTR__LC102_00126030;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  D_METHOD<char_const*>((char *)&local_a8,"set_size");
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (undefined **)0x0;
  pMVar2 = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(pMVar2);
  *(undefined ***)pMVar2 = &PTR__gen_argument_type_00125930;
  *(code **)(pMVar2 + 0x58) = set_size;
  *(undefined8 *)(pMVar2 + 0x60) = 0;
  MethodBind::_generate_argument_types((int)pMVar2);
  *(undefined4 *)(pMVar2 + 0x34) = 1;
  local_b8 = "GPUParticlesCollisionSDF3D";
  local_c0 = 0;
  local_b0 = 0x1a;
  String::parse_latin1((StrRange *)&local_c0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_c0,false);
  StringName::operator=((StringName *)(pMVar2 + 0x18),(StringName *)&local_b8);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  ClassDB::bind_methodfi(1,pMVar2,false,(MethodDefinition *)&local_a8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_a8);
  D_METHODP((char *)&local_a8,(char ***)"get_size",0);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (undefined **)0x0;
  pMVar2 = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(pMVar2);
  *(undefined ***)pMVar2 = &PTR__gen_argument_type_00125990;
  *(code **)(pMVar2 + 0x58) = get_size;
  *(undefined8 *)(pMVar2 + 0x60) = 0;
  MethodBind::_set_returns(SUB81(pMVar2,0));
  MethodBind::_set_const(SUB81(pMVar2,0));
  MethodBind::_generate_argument_types((int)pMVar2);
  *(undefined4 *)(pMVar2 + 0x34) = 0;
  local_c0 = 0;
  local_b8 = "GPUParticlesCollisionSDF3D";
  local_b0 = 0x1a;
  String::parse_latin1((StrRange *)&local_c0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_c0,false);
  StringName::operator=((StringName *)(pMVar2 + 0x18),(StringName *)&local_b8);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  ClassDB::bind_methodfi(1,pMVar2,false,(MethodDefinition *)&local_a8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_a8);
  D_METHOD<char_const*>((char *)&local_a8,"set_resolution");
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (undefined **)0x0;
  pMVar2 = create_method_bind<GPUParticlesCollisionSDF3D,GPUParticlesCollisionSDF3D::Resolution>
                     (set_resolution);
  ClassDB::bind_methodfi(1,pMVar2,false,(MethodDefinition *)&local_a8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_a8);
  D_METHODP((char *)&local_a8,(char ***)"get_resolution",0);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (undefined **)0x0;
  pMVar2 = create_method_bind<GPUParticlesCollisionSDF3D,GPUParticlesCollisionSDF3D::Resolution>
                     (get_resolution);
  ClassDB::bind_methodfi(1,pMVar2,false,(MethodDefinition *)&local_a8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_a8);
  D_METHOD<char_const*>((char *)&local_a8,"set_texture");
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (undefined **)0x0;
  pMVar2 = create_method_bind<GPUParticlesCollisionSDF3D,Ref<Texture3D>const&>(set_texture);
  ClassDB::bind_methodfi(1,pMVar2,false,(MethodDefinition *)&local_a8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_a8);
  D_METHODP((char *)&local_a8,(char ***)"get_texture",0);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (undefined **)0x0;
  pMVar2 = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(pMVar2);
  *(undefined ***)pMVar2 = &PTR__gen_argument_type_00125b10;
  *(code **)(pMVar2 + 0x58) = get_texture;
  *(undefined8 *)(pMVar2 + 0x60) = 0;
  MethodBind::_set_returns(SUB81(pMVar2,0));
  MethodBind::_set_const(SUB81(pMVar2,0));
  MethodBind::_generate_argument_types((int)pMVar2);
  *(undefined4 *)(pMVar2 + 0x34) = 0;
  local_c0 = 0;
  local_b8 = "GPUParticlesCollisionSDF3D";
  local_b0 = 0x1a;
  String::parse_latin1((StrRange *)&local_c0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_c0,false);
  StringName::operator=((StringName *)(pMVar2 + 0x18),(StringName *)&local_b8);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  ClassDB::bind_methodfi(1,pMVar2,false,(MethodDefinition *)&local_a8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_a8);
  D_METHOD<char_const*>((char *)&local_a8,"set_thickness");
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (undefined **)0x0;
  pMVar2 = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(pMVar2);
  *(undefined ***)pMVar2 = &PTR__gen_argument_type_00125870;
  *(code **)(pMVar2 + 0x58) = set_thickness;
  *(undefined8 *)(pMVar2 + 0x60) = 0;
  MethodBind::_generate_argument_types((int)pMVar2);
  *(undefined4 *)(pMVar2 + 0x34) = 1;
  local_c0 = 0;
  local_b8 = "GPUParticlesCollisionSDF3D";
  local_b0 = 0x1a;
  String::parse_latin1((StrRange *)&local_c0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_c0,false);
  StringName::operator=((StringName *)(pMVar2 + 0x18),(StringName *)&local_b8);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  ClassDB::bind_methodfi(1,pMVar2,false,(MethodDefinition *)&local_a8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_a8);
  D_METHODP((char *)&local_a8,(char ***)"get_thickness",0);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (undefined **)0x0;
  pMVar2 = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(pMVar2);
  *(undefined ***)pMVar2 = &PTR__gen_argument_type_001258d0;
  *(code **)(pMVar2 + 0x58) = get_thickness;
  *(undefined8 *)(pMVar2 + 0x60) = 0;
  MethodBind::_set_returns(SUB81(pMVar2,0));
  MethodBind::_set_const(SUB81(pMVar2,0));
  MethodBind::_generate_argument_types((int)pMVar2);
  *(undefined4 *)(pMVar2 + 0x34) = 0;
  local_c0 = 0;
  local_b8 = "GPUParticlesCollisionSDF3D";
  local_b0 = 0x1a;
  String::parse_latin1((StrRange *)&local_c0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_c0,false);
  StringName::operator=((StringName *)(pMVar2 + 0x18),(StringName *)&local_b8);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  ClassDB::bind_methodfi(1,pMVar2,false,(MethodDefinition *)&local_a8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_a8);
  D_METHOD<char_const*>((char *)&local_a8,"set_bake_mask");
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (undefined **)0x0;
  pMVar2 = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(pMVar2);
  *(undefined ***)pMVar2 = &PTR__gen_argument_type_001257b0;
  *(code **)(pMVar2 + 0x58) = set_bake_mask;
  *(undefined8 *)(pMVar2 + 0x60) = 0;
  MethodBind::_generate_argument_types((int)pMVar2);
  *(undefined4 *)(pMVar2 + 0x34) = 1;
  local_c0 = 0;
  local_b8 = "GPUParticlesCollisionSDF3D";
  local_b0 = 0x1a;
  String::parse_latin1((StrRange *)&local_c0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_c0,false);
  StringName::operator=((StringName *)(pMVar2 + 0x18),(StringName *)&local_b8);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  ClassDB::bind_methodfi(1,pMVar2,false,(MethodDefinition *)&local_a8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_a8);
  D_METHODP((char *)&local_a8,(char ***)"get_bake_mask",0);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (undefined **)0x0;
  pMVar2 = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(pMVar2);
  *(undefined ***)pMVar2 = &PTR__gen_argument_type_00125810;
  *(code **)(pMVar2 + 0x58) = get_bake_mask;
  *(undefined8 *)(pMVar2 + 0x60) = 0;
  MethodBind::_set_returns(SUB81(pMVar2,0));
  MethodBind::_set_const(SUB81(pMVar2,0));
  MethodBind::_generate_argument_types((int)pMVar2);
  *(undefined4 *)(pMVar2 + 0x34) = 0;
  local_c0 = 0;
  local_b8 = "GPUParticlesCollisionSDF3D";
  local_b0 = 0x1a;
  String::parse_latin1((StrRange *)&local_c0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_c0,false);
  StringName::operator=((StringName *)(pMVar2 + 0x18),(StringName *)&local_b8);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  ClassDB::bind_methodfi(1,pMVar2,false,(MethodDefinition *)&local_a8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_a8);
  local_68 = 0;
  local_78 = puVar1;
  pcStack_70 = "value";
  auStack_50._0_8_ = &pcStack_70;
  local_58 = &local_78;
  D_METHODP((char *)&local_a8,(char ***)"set_bake_mask_value",(uint)&local_58);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (undefined **)0x0;
  pMVar2 = create_method_bind<GPUParticlesCollisionSDF3D,int,bool>(set_bake_mask_value);
  ClassDB::bind_methodfi(1,pMVar2,false,(MethodDefinition *)&local_a8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_a8);
  D_METHOD<char_const*>((char *)&local_a8,"get_bake_mask_value");
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (undefined **)0x0;
  pMVar2 = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(pMVar2);
  *(undefined ***)pMVar2 = &PTR__gen_argument_type_00125bd0;
  *(code **)(pMVar2 + 0x58) = get_bake_mask_value;
  *(undefined8 *)(pMVar2 + 0x60) = 0;
  MethodBind::_set_returns(SUB81(pMVar2,0));
  MethodBind::_set_const(SUB81(pMVar2,0));
  MethodBind::_generate_argument_types((int)pMVar2);
  *(undefined4 *)(pMVar2 + 0x34) = 1;
  local_c0 = 0;
  local_b8 = "GPUParticlesCollisionSDF3D";
  local_b0 = 0x1a;
  String::parse_latin1((StrRange *)&local_c0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_c0,false);
  StringName::operator=((StringName *)(pMVar2 + 0x18),(StringName *)&local_b8);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  ClassDB::bind_methodfi(1,pMVar2,false,(MethodDefinition *)&local_a8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_a8);
  _scs_create((char *)&local_c0,true);
  _scs_create((char *)&local_c8,true);
  local_d0 = 0;
  local_a8 = "0.01,1024,0.01,or_greater,suffix:m";
  local_d8 = 0;
  local_a0 = 0x22;
  String::parse_latin1((StrRange *)&local_d8);
  local_a8 = "size";
  local_e0 = 0;
  local_a0 = 4;
  String::parse_latin1((StrRange *)&local_e0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_a8,9,(StrRange *)&local_e0,1,(StrRange *)&local_d8,6,
             (StrRange *)&local_d0);
  local_e8 = 0;
  local_b8 = "GPUParticlesCollisionSDF3D";
  local_b0 = 0x1a;
  String::parse_latin1((StrRange *)&local_e8);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e8,false);
  ClassDB::add_property
            ((StringName *)&local_b8,(PropertyInfo *)&local_a8,(StringName *)&local_c8,
             (StringName *)&local_c0,-1);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if (StringName::configured != '\0') {
    if (local_d0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00108bc1;
    }
    if (local_c8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00108bc1;
    }
    if (local_c0 != 0) {
      StringName::unref();
    }
  }
LAB_00108bc1:
  _scs_create((char *)&local_c0,true);
  _scs_create((char *)&local_c8,true);
  local_a8 = "16,32,64,128,256,512";
  local_d0 = 0;
  local_d8 = 0;
  local_a0 = 0x14;
  String::parse_latin1((StrRange *)&local_d8);
  local_a8 = "resolution";
  local_e0 = 0;
  local_a0 = 10;
  String::parse_latin1((StrRange *)&local_e0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_a8,2,(StrRange *)&local_e0,2,(StrRange *)&local_d8,6,
             (StrRange *)&local_d0);
  local_b8 = "GPUParticlesCollisionSDF3D";
  local_e8 = 0;
  local_b0 = 0x1a;
  String::parse_latin1((StrRange *)&local_e8);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e8,false);
  ClassDB::add_property
            ((StringName *)&local_b8,(PropertyInfo *)&local_a8,(StringName *)&local_c8,
             (StringName *)&local_c0,-1);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if (StringName::configured != '\0') {
    if (local_d0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00108d43;
    }
    if (local_c8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00108d43;
    }
    if (local_c0 != 0) {
      StringName::unref();
    }
  }
LAB_00108d43:
  _scs_create((char *)&local_c0,true);
  _scs_create((char *)&local_c8,true);
  local_a8 = "0.0,2.0,0.01,suffix:m";
  local_d0 = 0;
  local_d8 = 0;
  local_a0 = 0x15;
  String::parse_latin1((StrRange *)&local_d8);
  local_a8 = "thickness";
  local_e0 = 0;
  local_a0 = 9;
  String::parse_latin1((StrRange *)&local_e0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_a8,3,(StrRange *)&local_e0,1,(StrRange *)&local_d8,6,
             (StrRange *)&local_d0);
  local_b8 = "GPUParticlesCollisionSDF3D";
  local_e8 = 0;
  local_b0 = 0x1a;
  String::parse_latin1((StrRange *)&local_e8);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e8,false);
  ClassDB::add_property
            ((StringName *)&local_b8,(PropertyInfo *)&local_a8,(StringName *)&local_c8,
             (StringName *)&local_c0,-1);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if (StringName::configured != '\0') {
    if (local_d0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00108ec4;
    }
    if (local_c8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00108ec4;
    }
    if (local_c0 != 0) {
      StringName::unref();
    }
  }
LAB_00108ec4:
  _scs_create((char *)&local_c0,true);
  _scs_create((char *)&local_c8,true);
  local_a8 = "";
  local_d0 = 0;
  local_d8 = 0;
  local_a0 = 0;
  String::parse_latin1((StrRange *)&local_d8);
  local_a8 = "bake_mask";
  local_e0 = 0;
  local_a0 = 9;
  String::parse_latin1((StrRange *)&local_e0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_a8,2,(StrRange *)&local_e0,10,(StrRange *)&local_d8,6,
             (StrRange *)&local_d0);
  local_b8 = "GPUParticlesCollisionSDF3D";
  local_e8 = 0;
  local_b0 = 0x1a;
  String::parse_latin1((StrRange *)&local_e8);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e8,false);
  ClassDB::add_property
            ((StringName *)&local_b8,(PropertyInfo *)&local_a8,(StringName *)&local_c8,
             (StringName *)&local_c0,-1);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if (StringName::configured != '\0') {
    if (local_d0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00109044;
    }
    if (local_c8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00109044;
    }
    if (local_c0 != 0) {
      StringName::unref();
    }
  }
LAB_00109044:
  _scs_create((char *)&local_c0,true);
  _scs_create((char *)&local_c8,true);
  local_a8 = "Texture3D";
  local_d0 = 0;
  local_d8 = 0;
  local_a0 = 9;
  String::parse_latin1((StrRange *)&local_d8);
  local_a8 = "texture";
  local_e0 = 0;
  local_a0 = 7;
  String::parse_latin1((StrRange *)&local_e0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_a8,0x18,(StrRange *)&local_e0,0x11,(StrRange *)&local_d8,6,
             (StrRange *)&local_d0);
  local_b8 = "GPUParticlesCollisionSDF3D";
  local_e8 = 0;
  local_b0 = 0x1a;
  String::parse_latin1((StrRange *)&local_e8);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e8,false);
  ClassDB::add_property
            ((StringName *)&local_b8,(PropertyInfo *)&local_a8,(StringName *)&local_c8,
             (StringName *)&local_c0,-1);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if (StringName::configured != '\0') {
    if (local_d0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001091c4;
    }
    if (local_c8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001091c4;
    }
    if (local_c0 != 0) {
      StringName::unref();
    }
  }
LAB_001091c4:
  StringName::StringName((StringName *)&local_b8,"RESOLUTION_16",false);
  local_a8 = "RESOLUTION_16";
  local_c8 = 0;
  local_a0 = 0xd;
  String::parse_latin1((StrRange *)&local_c8);
  GetTypeInfo<GPUParticlesCollisionSDF3D::Resolution,void>::get_class_info
            ((GetTypeInfo<GPUParticlesCollisionSDF3D::Resolution,void> *)&local_a8);
  local_c0 = local_98;
  local_98 = 0;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_a8);
  local_a8 = "GPUParticlesCollisionSDF3D";
  local_d0 = 0;
  local_a0 = 0x1a;
  String::parse_latin1((StrRange *)&local_d0);
  StringName::StringName((StringName *)&local_a8,(String *)&local_d0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_a8,(StringName *)&local_c0,(StringName *)&local_b8,0,false);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  if ((StringName::configured != '\0') && (local_c0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_b8,"RESOLUTION_32",false);
  local_a8 = "RESOLUTION_32";
  local_c8 = 0;
  local_a0 = 0xd;
  String::parse_latin1((StrRange *)&local_c8);
  GetTypeInfo<GPUParticlesCollisionSDF3D::Resolution,void>::get_class_info
            ((GetTypeInfo<GPUParticlesCollisionSDF3D::Resolution,void> *)&local_a8);
  local_c0 = local_98;
  local_98 = 0;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_a8);
  local_a8 = "GPUParticlesCollisionSDF3D";
  local_d0 = 0;
  local_a0 = 0x1a;
  String::parse_latin1((StrRange *)&local_d0);
  StringName::StringName((StringName *)&local_a8,(String *)&local_d0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_a8,(StringName *)&local_c0,(StringName *)&local_b8,1,false);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  if ((StringName::configured != '\0') && (local_c0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_b8,"RESOLUTION_64",false);
  local_a8 = "RESOLUTION_64";
  local_c8 = 0;
  local_a0 = 0xd;
  String::parse_latin1((StrRange *)&local_c8);
  GetTypeInfo<GPUParticlesCollisionSDF3D::Resolution,void>::get_class_info
            ((GetTypeInfo<GPUParticlesCollisionSDF3D::Resolution,void> *)&local_a8);
  local_c0 = local_98;
  local_98 = 0;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_a8);
  local_a8 = "GPUParticlesCollisionSDF3D";
  local_d0 = 0;
  local_a0 = 0x1a;
  String::parse_latin1((StrRange *)&local_d0);
  StringName::StringName((StringName *)&local_a8,(String *)&local_d0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_a8,(StringName *)&local_c0,(StringName *)&local_b8,2,false);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  if ((StringName::configured != '\0') && (local_c0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_b8,"RESOLUTION_128",false);
  local_a8 = "RESOLUTION_128";
  local_c8 = 0;
  local_a0 = 0xe;
  String::parse_latin1((StrRange *)&local_c8);
  GetTypeInfo<GPUParticlesCollisionSDF3D::Resolution,void>::get_class_info
            ((GetTypeInfo<GPUParticlesCollisionSDF3D::Resolution,void> *)&local_a8);
  local_c0 = local_98;
  local_98 = 0;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_a8);
  local_a8 = "GPUParticlesCollisionSDF3D";
  local_d0 = 0;
  local_a0 = 0x1a;
  String::parse_latin1((StrRange *)&local_d0);
  StringName::StringName((StringName *)&local_a8,(String *)&local_d0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_a8,(StringName *)&local_c0,(StringName *)&local_b8,3,false);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  if ((StringName::configured != '\0') && (local_c0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_b8,"RESOLUTION_256",false);
  local_a8 = "RESOLUTION_256";
  local_c8 = 0;
  local_a0 = 0xe;
  String::parse_latin1((StrRange *)&local_c8);
  GetTypeInfo<GPUParticlesCollisionSDF3D::Resolution,void>::get_class_info
            ((GetTypeInfo<GPUParticlesCollisionSDF3D::Resolution,void> *)&local_a8);
  local_c0 = local_98;
  local_98 = 0;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_a8);
  local_a8 = "GPUParticlesCollisionSDF3D";
  local_d0 = 0;
  local_a0 = 0x1a;
  String::parse_latin1((StrRange *)&local_d0);
  StringName::StringName((StringName *)&local_a8,(String *)&local_d0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_a8,(StringName *)&local_c0,(StringName *)&local_b8,4,false);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  if ((StringName::configured != '\0') && (local_c0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_b8,"RESOLUTION_512",false);
  local_a8 = "RESOLUTION_512";
  local_c8 = 0;
  local_a0 = 0xe;
  String::parse_latin1((StrRange *)&local_c8);
  GetTypeInfo<GPUParticlesCollisionSDF3D::Resolution,void>::get_class_info
            ((GetTypeInfo<GPUParticlesCollisionSDF3D::Resolution,void> *)&local_a8);
  local_c0 = local_98;
  local_98 = 0;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_a8);
  local_a8 = "GPUParticlesCollisionSDF3D";
  local_d0 = 0;
  local_a0 = 0x1a;
  String::parse_latin1((StrRange *)&local_d0);
  StringName::StringName((StringName *)&local_a8,(String *)&local_d0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_a8,(StringName *)&local_c0,(StringName *)&local_b8,5,false);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  if ((StringName::configured != '\0') && (local_c0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_b8,"RESOLUTION_MAX",false);
  local_a8 = "RESOLUTION_MAX";
  local_c8 = 0;
  local_a0 = 0xe;
  String::parse_latin1((StrRange *)&local_c8);
  GetTypeInfo<GPUParticlesCollisionSDF3D::Resolution,void>::get_class_info
            ((GetTypeInfo<GPUParticlesCollisionSDF3D::Resolution,void> *)&local_a8);
  local_c0 = local_98;
  local_98 = 0;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_a8);
  local_a8 = "GPUParticlesCollisionSDF3D";
  local_d0 = 0;
  local_a0 = 0x1a;
  String::parse_latin1((StrRange *)&local_d0);
  StringName::StringName((StringName *)&local_a8,(String *)&local_d0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_a8,(StringName *)&local_c0,(StringName *)&local_b8,6,false);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  if ((StringName::configured != '\0') && (local_c0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GPUParticlesCollisionHeightField3D::_bind_methods() */

void GPUParticlesCollisionHeightField3D::_bind_methods(void)

{
  undefined *puVar1;
  MethodBind *pMVar2;
  long in_FS_OFFSET;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  char *local_b8;
  undefined8 local_b0;
  char *local_a8;
  undefined8 local_a0;
  long local_98;
  undefined *local_78;
  char *pcStack_70;
  undefined8 local_68;
  undefined **local_58;
  undefined1 auStack_50 [16];
  long local_40;
  
  puVar1 = PTR__LC102_00126030;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  D_METHOD<char_const*>((char *)&local_a8,"set_size");
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (undefined **)0x0;
  pMVar2 = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(pMVar2);
  *(undefined ***)pMVar2 = &PTR__gen_argument_type_00125930;
  *(code **)(pMVar2 + 0x58) = set_size;
  *(undefined8 *)(pMVar2 + 0x60) = 0;
  MethodBind::_generate_argument_types((int)pMVar2);
  *(undefined4 *)(pMVar2 + 0x34) = 1;
  local_b8 = "GPUParticlesCollisionHeightField3D";
  local_c0 = 0;
  local_b0 = 0x22;
  String::parse_latin1((StrRange *)&local_c0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_c0,false);
  StringName::operator=((StringName *)(pMVar2 + 0x18),(StringName *)&local_b8);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  ClassDB::bind_methodfi(1,pMVar2,false,(MethodDefinition *)&local_a8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_a8);
  D_METHODP((char *)&local_a8,(char ***)"get_size",0);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (undefined **)0x0;
  pMVar2 = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(pMVar2);
  *(undefined ***)pMVar2 = &PTR__gen_argument_type_00125990;
  *(code **)(pMVar2 + 0x58) = get_size;
  *(undefined8 *)(pMVar2 + 0x60) = 0;
  MethodBind::_set_returns(SUB81(pMVar2,0));
  MethodBind::_set_const(SUB81(pMVar2,0));
  MethodBind::_generate_argument_types((int)pMVar2);
  *(undefined4 *)(pMVar2 + 0x34) = 0;
  local_c0 = 0;
  local_b8 = "GPUParticlesCollisionHeightField3D";
  local_b0 = 0x22;
  String::parse_latin1((StrRange *)&local_c0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_c0,false);
  StringName::operator=((StringName *)(pMVar2 + 0x18),(StringName *)&local_b8);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  ClassDB::bind_methodfi(1,pMVar2,false,(MethodDefinition *)&local_a8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_a8);
  D_METHOD<char_const*>((char *)&local_a8,"set_resolution");
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (undefined **)0x0;
  pMVar2 = create_method_bind<GPUParticlesCollisionHeightField3D,GPUParticlesCollisionHeightField3D::Resolution>
                     (set_resolution);
  ClassDB::bind_methodfi(1,pMVar2,false,(MethodDefinition *)&local_a8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_a8);
  D_METHODP((char *)&local_a8,(char ***)"get_resolution",0);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (undefined **)0x0;
  pMVar2 = create_method_bind<GPUParticlesCollisionHeightField3D,GPUParticlesCollisionHeightField3D::Resolution>
                     (get_resolution);
  ClassDB::bind_methodfi(1,pMVar2,false,(MethodDefinition *)&local_a8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_a8);
  D_METHOD<char_const*>((char *)&local_a8,"set_update_mode");
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (undefined **)0x0;
  pMVar2 = create_method_bind<GPUParticlesCollisionHeightField3D,GPUParticlesCollisionHeightField3D::UpdateMode>
                     (set_update_mode);
  ClassDB::bind_methodfi(1,pMVar2,false,(MethodDefinition *)&local_a8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_a8);
  D_METHODP((char *)&local_a8,(char ***)"get_update_mode",0);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (undefined **)0x0;
  pMVar2 = create_method_bind<GPUParticlesCollisionHeightField3D,GPUParticlesCollisionHeightField3D::UpdateMode>
                     (get_update_mode);
  ClassDB::bind_methodfi(1,pMVar2,false,(MethodDefinition *)&local_a8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_a8);
  D_METHOD<char_const*>((char *)&local_a8,"set_heightfield_mask");
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (undefined **)0x0;
  pMVar2 = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(pMVar2);
  *(undefined ***)pMVar2 = &PTR__gen_argument_type_001257b0;
  *(code **)(pMVar2 + 0x58) = set_heightfield_mask;
  *(undefined8 *)(pMVar2 + 0x60) = 0;
  MethodBind::_generate_argument_types((int)pMVar2);
  *(undefined4 *)(pMVar2 + 0x34) = 1;
  local_c0 = 0;
  local_b8 = "GPUParticlesCollisionHeightField3D";
  local_b0 = 0x22;
  String::parse_latin1((StrRange *)&local_c0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_c0,false);
  StringName::operator=((StringName *)(pMVar2 + 0x18),(StringName *)&local_b8);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  ClassDB::bind_methodfi(1,pMVar2,false,(MethodDefinition *)&local_a8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_a8);
  D_METHODP((char *)&local_a8,(char ***)"get_heightfield_mask",0);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (undefined **)0x0;
  pMVar2 = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(pMVar2);
  *(undefined ***)pMVar2 = &PTR__gen_argument_type_00125810;
  *(code **)(pMVar2 + 0x58) = get_heightfield_mask;
  *(undefined8 *)(pMVar2 + 0x60) = 0;
  MethodBind::_set_returns(SUB81(pMVar2,0));
  MethodBind::_set_const(SUB81(pMVar2,0));
  MethodBind::_generate_argument_types((int)pMVar2);
  *(undefined4 *)(pMVar2 + 0x34) = 0;
  local_c0 = 0;
  local_b8 = "GPUParticlesCollisionHeightField3D";
  local_b0 = 0x22;
  String::parse_latin1((StrRange *)&local_c0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_c0,false);
  StringName::operator=((StringName *)(pMVar2 + 0x18),(StringName *)&local_b8);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  ClassDB::bind_methodfi(1,pMVar2,false,(MethodDefinition *)&local_a8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_a8);
  local_68 = 0;
  local_78 = puVar1;
  pcStack_70 = "value";
  auStack_50._0_8_ = &pcStack_70;
  local_58 = &local_78;
  D_METHODP((char *)&local_a8,(char ***)"set_heightfield_mask_value",(uint)&local_58);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (undefined **)0x0;
  pMVar2 = create_method_bind<GPUParticlesCollisionHeightField3D,int,bool>
                     (set_heightfield_mask_value);
  ClassDB::bind_methodfi(1,pMVar2,false,(MethodDefinition *)&local_a8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_a8);
  D_METHOD<char_const*>((char *)&local_a8,"get_heightfield_mask_value");
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (undefined **)0x0;
  pMVar2 = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(pMVar2);
  *(undefined ***)pMVar2 = &PTR__gen_argument_type_00125bd0;
  *(code **)(pMVar2 + 0x58) = get_heightfield_mask_value;
  *(undefined8 *)(pMVar2 + 0x60) = 0;
  MethodBind::_set_returns(SUB81(pMVar2,0));
  MethodBind::_set_const(SUB81(pMVar2,0));
  MethodBind::_generate_argument_types((int)pMVar2);
  *(undefined4 *)(pMVar2 + 0x34) = 1;
  local_c0 = 0;
  local_b8 = "GPUParticlesCollisionHeightField3D";
  local_b0 = 0x22;
  String::parse_latin1((StrRange *)&local_c0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_c0,false);
  StringName::operator=((StringName *)(pMVar2 + 0x18),(StringName *)&local_b8);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  ClassDB::bind_methodfi(1,pMVar2,false,(MethodDefinition *)&local_a8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_a8);
  D_METHOD<char_const*>((char *)&local_a8,"set_follow_camera_enabled");
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (undefined **)0x0;
  pMVar2 = create_method_bind<GPUParticlesCollisionHeightField3D,bool>(set_follow_camera_enabled);
  ClassDB::bind_methodfi(1,pMVar2,false,(MethodDefinition *)&local_a8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_a8);
  D_METHODP((char *)&local_a8,(char ***)"is_follow_camera_enabled",0);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (undefined **)0x0;
  pMVar2 = create_method_bind<GPUParticlesCollisionHeightField3D,bool>(is_follow_camera_enabled);
  ClassDB::bind_methodfi(1,pMVar2,false,(MethodDefinition *)&local_a8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_a8);
  _scs_create((char *)&local_c0,true);
  _scs_create((char *)&local_c8,true);
  local_d0 = 0;
  local_a8 = "0.01,1024,0.01,or_greater,suffix:m";
  local_d8 = 0;
  local_a0 = 0x22;
  String::parse_latin1((StrRange *)&local_d8);
  local_a8 = "size";
  local_e0 = 0;
  local_a0 = 4;
  String::parse_latin1((StrRange *)&local_e0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_a8,9,(StrRange *)&local_e0,1,(StrRange *)&local_d8,6,
             (StrRange *)&local_d0);
  local_e8 = 0;
  local_b8 = "GPUParticlesCollisionHeightField3D";
  local_b0 = 0x22;
  String::parse_latin1((StrRange *)&local_e8);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e8,false);
  ClassDB::add_property
            ((StringName *)&local_b8,(PropertyInfo *)&local_a8,(StringName *)&local_c8,
             (StringName *)&local_c0,-1);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if (StringName::configured != '\0') {
    if (local_d0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010a4e7;
    }
    if (local_c8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010a4e7;
    }
    if (local_c0 != 0) {
      StringName::unref();
    }
  }
LAB_0010a4e7:
  _scs_create((char *)&local_c0,true);
  _scs_create((char *)&local_c8,true);
  local_a8 = "256 (Fastest),512 (Fast),1024 (Average),2048 (Slow),4096 (Slower),8192 (Slowest)";
  local_d0 = 0;
  local_d8 = 0;
  local_a0 = 0x50;
  String::parse_latin1((StrRange *)&local_d8);
  local_a8 = "resolution";
  local_e0 = 0;
  local_a0 = 10;
  String::parse_latin1((StrRange *)&local_e0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_a8,2,(StrRange *)&local_e0,2,(StrRange *)&local_d8,6,
             (StrRange *)&local_d0);
  local_b8 = "GPUParticlesCollisionHeightField3D";
  local_e8 = 0;
  local_b0 = 0x22;
  String::parse_latin1((StrRange *)&local_e8);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e8,false);
  ClassDB::add_property
            ((StringName *)&local_b8,(PropertyInfo *)&local_a8,(StringName *)&local_c8,
             (StringName *)&local_c0,-1);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if (StringName::configured != '\0') {
    if (local_d0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010a669;
    }
    if (local_c8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010a669;
    }
    if (local_c0 != 0) {
      StringName::unref();
    }
  }
LAB_0010a669:
  _scs_create((char *)&local_c0,true);
  _scs_create((char *)&local_c8,true);
  local_a8 = "When Moved (Fast),Always (Slow)";
  local_d0 = 0;
  local_d8 = 0;
  local_a0 = 0x1f;
  String::parse_latin1((StrRange *)&local_d8);
  local_a8 = "update_mode";
  local_e0 = 0;
  local_a0 = 0xb;
  String::parse_latin1((StrRange *)&local_e0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_a8,2,(StrRange *)&local_e0,2,(StrRange *)&local_d8,6,
             (StrRange *)&local_d0);
  local_b8 = "GPUParticlesCollisionHeightField3D";
  local_e8 = 0;
  local_b0 = 0x22;
  String::parse_latin1((StrRange *)&local_e8);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e8,false);
  ClassDB::add_property
            ((StringName *)&local_b8,(PropertyInfo *)&local_a8,(StringName *)&local_c8,
             (StringName *)&local_c0,-1);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if (StringName::configured != '\0') {
    if (local_d0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010a7ea;
    }
    if (local_c8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010a7ea;
    }
    if (local_c0 != 0) {
      StringName::unref();
    }
  }
LAB_0010a7ea:
  _scs_create((char *)&local_c0,true);
  _scs_create((char *)&local_c8,true);
  local_a8 = "";
  local_d0 = 0;
  local_d8 = 0;
  local_a0 = 0;
  String::parse_latin1((StrRange *)&local_d8);
  local_a8 = "follow_camera_enabled";
  local_e0 = 0;
  local_a0 = 0x15;
  String::parse_latin1((StrRange *)&local_e0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_a8,1,(StrRange *)&local_e0,0,(StrRange *)&local_d8,6,
             (StrRange *)&local_d0);
  local_b8 = "GPUParticlesCollisionHeightField3D";
  local_e8 = 0;
  local_b0 = 0x22;
  String::parse_latin1((StrRange *)&local_e8);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e8,false);
  ClassDB::add_property
            ((StringName *)&local_b8,(PropertyInfo *)&local_a8,(StringName *)&local_c8,
             (StringName *)&local_c0,-1);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if (StringName::configured != '\0') {
    if (local_d0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010a967;
    }
    if (local_c8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010a967;
    }
    if (local_c0 != 0) {
      StringName::unref();
    }
  }
LAB_0010a967:
  _scs_create((char *)&local_c0,true);
  _scs_create((char *)&local_c8,true);
  local_a8 = "";
  local_d0 = 0;
  local_d8 = 0;
  local_a0 = 0;
  String::parse_latin1((StrRange *)&local_d8);
  local_a8 = "heightfield_mask";
  local_e0 = 0;
  local_a0 = 0x10;
  String::parse_latin1((StrRange *)&local_e0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_a8,2,(StrRange *)&local_e0,10,(StrRange *)&local_d8,6,
             (StrRange *)&local_d0);
  local_b8 = "GPUParticlesCollisionHeightField3D";
  local_e8 = 0;
  local_b0 = 0x22;
  String::parse_latin1((StrRange *)&local_e8);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e8,false);
  ClassDB::add_property
            ((StringName *)&local_b8,(PropertyInfo *)&local_a8,(StringName *)&local_c8,
             (StringName *)&local_c0,-1);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if (StringName::configured != '\0') {
    if (local_d0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010aae7;
    }
    if (local_c8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010aae7;
    }
    if (local_c0 != 0) {
      StringName::unref();
    }
  }
LAB_0010aae7:
  StringName::StringName((StringName *)&local_b8,"RESOLUTION_256",false);
  local_a8 = "RESOLUTION_256";
  local_c8 = 0;
  local_a0 = 0xe;
  String::parse_latin1((StrRange *)&local_c8);
  GetTypeInfo<GPUParticlesCollisionHeightField3D::Resolution,void>::get_class_info
            ((GetTypeInfo<GPUParticlesCollisionHeightField3D::Resolution,void> *)&local_a8);
  local_c0 = local_98;
  local_98 = 0;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_a8);
  local_a8 = "GPUParticlesCollisionHeightField3D";
  local_d0 = 0;
  local_a0 = 0x22;
  String::parse_latin1((StrRange *)&local_d0);
  StringName::StringName((StringName *)&local_a8,(String *)&local_d0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_a8,(StringName *)&local_c0,(StringName *)&local_b8,0,false);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  if ((StringName::configured != '\0') && (local_c0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_b8,"RESOLUTION_512",false);
  local_a8 = "RESOLUTION_512";
  local_c8 = 0;
  local_a0 = 0xe;
  String::parse_latin1((StrRange *)&local_c8);
  GetTypeInfo<GPUParticlesCollisionHeightField3D::Resolution,void>::get_class_info
            ((GetTypeInfo<GPUParticlesCollisionHeightField3D::Resolution,void> *)&local_a8);
  local_c0 = local_98;
  local_98 = 0;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_a8);
  local_a8 = "GPUParticlesCollisionHeightField3D";
  local_d0 = 0;
  local_a0 = 0x22;
  String::parse_latin1((StrRange *)&local_d0);
  StringName::StringName((StringName *)&local_a8,(String *)&local_d0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_a8,(StringName *)&local_c0,(StringName *)&local_b8,1,false);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  if ((StringName::configured != '\0') && (local_c0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_b8,"RESOLUTION_1024",false);
  local_a8 = "RESOLUTION_1024";
  local_c8 = 0;
  local_a0 = 0xf;
  String::parse_latin1((StrRange *)&local_c8);
  GetTypeInfo<GPUParticlesCollisionHeightField3D::Resolution,void>::get_class_info
            ((GetTypeInfo<GPUParticlesCollisionHeightField3D::Resolution,void> *)&local_a8);
  local_c0 = local_98;
  local_98 = 0;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_a8);
  local_a8 = "GPUParticlesCollisionHeightField3D";
  local_d0 = 0;
  local_a0 = 0x22;
  String::parse_latin1((StrRange *)&local_d0);
  StringName::StringName((StringName *)&local_a8,(String *)&local_d0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_a8,(StringName *)&local_c0,(StringName *)&local_b8,2,false);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  if ((StringName::configured != '\0') && (local_c0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_b8,"RESOLUTION_2048",false);
  local_a8 = "RESOLUTION_2048";
  local_c8 = 0;
  local_a0 = 0xf;
  String::parse_latin1((StrRange *)&local_c8);
  GetTypeInfo<GPUParticlesCollisionHeightField3D::Resolution,void>::get_class_info
            ((GetTypeInfo<GPUParticlesCollisionHeightField3D::Resolution,void> *)&local_a8);
  local_c0 = local_98;
  local_98 = 0;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_a8);
  local_a8 = "GPUParticlesCollisionHeightField3D";
  local_d0 = 0;
  local_a0 = 0x22;
  String::parse_latin1((StrRange *)&local_d0);
  StringName::StringName((StringName *)&local_a8,(String *)&local_d0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_a8,(StringName *)&local_c0,(StringName *)&local_b8,3,false);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  if ((StringName::configured != '\0') && (local_c0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_b8,"RESOLUTION_4096",false);
  local_a8 = "RESOLUTION_4096";
  local_c8 = 0;
  local_a0 = 0xf;
  String::parse_latin1((StrRange *)&local_c8);
  GetTypeInfo<GPUParticlesCollisionHeightField3D::Resolution,void>::get_class_info
            ((GetTypeInfo<GPUParticlesCollisionHeightField3D::Resolution,void> *)&local_a8);
  local_c0 = local_98;
  local_98 = 0;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_a8);
  local_a8 = "GPUParticlesCollisionHeightField3D";
  local_d0 = 0;
  local_a0 = 0x22;
  String::parse_latin1((StrRange *)&local_d0);
  StringName::StringName((StringName *)&local_a8,(String *)&local_d0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_a8,(StringName *)&local_c0,(StringName *)&local_b8,4,false);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  if ((StringName::configured != '\0') && (local_c0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_b8,"RESOLUTION_8192",false);
  local_a8 = "RESOLUTION_8192";
  local_c8 = 0;
  local_a0 = 0xf;
  String::parse_latin1((StrRange *)&local_c8);
  GetTypeInfo<GPUParticlesCollisionHeightField3D::Resolution,void>::get_class_info
            ((GetTypeInfo<GPUParticlesCollisionHeightField3D::Resolution,void> *)&local_a8);
  local_c0 = local_98;
  local_98 = 0;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_a8);
  local_a8 = "GPUParticlesCollisionHeightField3D";
  local_d0 = 0;
  local_a0 = 0x22;
  String::parse_latin1((StrRange *)&local_d0);
  StringName::StringName((StringName *)&local_a8,(String *)&local_d0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_a8,(StringName *)&local_c0,(StringName *)&local_b8,5,false);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  if ((StringName::configured != '\0') && (local_c0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_b8,"RESOLUTION_MAX",false);
  local_a8 = "RESOLUTION_MAX";
  local_c8 = 0;
  local_a0 = 0xe;
  String::parse_latin1((StrRange *)&local_c8);
  GetTypeInfo<GPUParticlesCollisionHeightField3D::Resolution,void>::get_class_info
            ((GetTypeInfo<GPUParticlesCollisionHeightField3D::Resolution,void> *)&local_a8);
  local_c0 = local_98;
  local_98 = 0;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_a8);
  local_a8 = "GPUParticlesCollisionHeightField3D";
  local_d0 = 0;
  local_a0 = 0x22;
  String::parse_latin1((StrRange *)&local_d0);
  StringName::StringName((StringName *)&local_a8,(String *)&local_d0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_a8,(StringName *)&local_c0,(StringName *)&local_b8,6,false);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  if ((StringName::configured != '\0') && (local_c0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_b8,"UPDATE_MODE_WHEN_MOVED",false);
  local_a8 = "UPDATE_MODE_WHEN_MOVED";
  local_c8 = 0;
  local_a0 = 0x16;
  String::parse_latin1((StrRange *)&local_c8);
  GetTypeInfo<GPUParticlesCollisionHeightField3D::UpdateMode,void>::get_class_info
            ((GetTypeInfo<GPUParticlesCollisionHeightField3D::UpdateMode,void> *)&local_a8);
  local_c0 = local_98;
  local_98 = 0;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_a8);
  local_a8 = "GPUParticlesCollisionHeightField3D";
  local_d0 = 0;
  local_a0 = 0x22;
  String::parse_latin1((StrRange *)&local_d0);
  StringName::StringName((StringName *)&local_a8,(String *)&local_d0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_a8,(StringName *)&local_c0,(StringName *)&local_b8,0,false);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  if ((StringName::configured != '\0') && (local_c0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_b8,"UPDATE_MODE_ALWAYS",false);
  local_a8 = "UPDATE_MODE_ALWAYS";
  local_c8 = 0;
  local_a0 = 0x12;
  String::parse_latin1((StrRange *)&local_c8);
  GetTypeInfo<GPUParticlesCollisionHeightField3D::UpdateMode,void>::get_class_info
            ((GetTypeInfo<GPUParticlesCollisionHeightField3D::UpdateMode,void> *)&local_a8);
  local_c0 = local_98;
  local_98 = 0;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_a8);
  local_a8 = "GPUParticlesCollisionHeightField3D";
  local_d0 = 0;
  local_a0 = 0x22;
  String::parse_latin1((StrRange *)&local_d0);
  StringName::StringName((StringName *)&local_a8,(String *)&local_d0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_a8,(StringName *)&local_c0,(StringName *)&local_b8,1,false);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  if ((StringName::configured != '\0') && (local_c0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
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



/* GPUParticlesCollisionSDF3D::get_configuration_warnings() const */

void GPUParticlesCollisionSDF3D::get_configuration_warnings(void)

{
  CowData<char32_t> *this;
  int iVar1;
  long lVar2;
  long in_RSI;
  long lVar3;
  long in_RDI;
  long in_FS_OFFSET;
  undefined8 local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Node::get_configuration_warnings();
  if (*(int *)(in_RSI + 0x580) != 0) goto LAB_0010b667;
  local_60 = 0;
  local_50 = 0;
  local_58 = "";
  String::parse_latin1((StrRange *)&local_60);
  local_58 = 
  "The Bake Mask has no bits enabled, which means baking will not produce any collision for this GPUParticlesCollisionSDF3D.\nTo resolve this, enable at least one bit in the Bake Mask property."
  ;
  local_68 = 0;
  local_50 = 0xbd;
  String::parse_latin1((StrRange *)&local_68);
  RTR((String *)&local_58,(String *)&local_68);
  if (*(long *)(in_RDI + 8) == 0) {
    lVar3 = 1;
  }
  else {
    lVar3 = *(long *)(*(long *)(in_RDI + 8) + -8) + 1;
  }
  iVar1 = CowData<String>::resize<false>((CowData<String> *)(in_RDI + 8),lVar3);
  if (iVar1 == 0) {
    if (*(long *)(in_RDI + 8) == 0) {
      lVar2 = -1;
      lVar3 = 0;
    }
    else {
      lVar3 = *(long *)(*(long *)(in_RDI + 8) + -8);
      lVar2 = lVar3 + -1;
      if (-1 < lVar2) {
        CowData<String>::_copy_on_write((CowData<String> *)(in_RDI + 8));
        this = (CowData<char32_t> *)(*(long *)(in_RDI + 8) + lVar2 * 8);
        if (*(char **)this != local_58) {
          CowData<char32_t>::_ref(this,(CowData *)&local_58);
        }
        goto LAB_0010b76e;
      }
    }
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar2,lVar3,"p_index","size()","",false,false
              );
  }
  else {
    _err_print_error("push_back","./core/templates/vector.h",0x142,
                     "Condition \"err\" is true. Returning: true",0,0);
  }
LAB_0010b76e:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
LAB_0010b667:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GPUParticlesCollisionSDF3D::_create_bvh(LocalVector<GPUParticlesCollisionSDF3D::BVH, unsigned
   int, false, false>&, GPUParticlesCollisionSDF3D::FacePos*, unsigned int, Face3 const*, float) */

uint __thiscall
GPUParticlesCollisionSDF3D::_create_bvh
          (GPUParticlesCollisionSDF3D *this,LocalVector *param_1,FacePos *param_2,uint param_3,
          Face3 *param_4,float param_5)

{
  Face3 *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  FacePos *pFVar11;
  void *pvVar12;
  long lVar13;
  long lVar14;
  FacePos *pFVar15;
  uint uVar16;
  uint uVar17;
  ulong uVar18;
  ulong uVar19;
  FacePos *pFVar20;
  ulong uVar21;
  long in_FS_OFFSET;
  undefined8 extraout_XMM1_Qa;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  uint local_f4;
  ulong uVar31;
  AABB *pAVar32;
  int local_9c;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 == 1) {
    local_f4 = *(uint *)(param_2 + 0xc) | 0x40000000;
LAB_0010be06:
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return local_f4;
  }
  local_f4 = *(uint *)param_1;
  fStack_80 = 0.0;
  local_88 = 0;
  fStack_7c = 0.0;
  fStack_78 = 0.0;
  fStack_74 = 0.0;
  uStack_70 = 0;
  uVar16 = local_f4;
  if (param_3 != 0) {
    pFVar20 = param_2 + 0xc;
    puVar6 = &local_68;
    uVar16 = 0;
    pAVar32 = (AABB *)&local_88;
    do {
      while( true ) {
        pFVar1 = param_4 + (ulong)*(uint *)pFVar20 * 0x24;
        uStack_60._4_4_ = *(float *)(pFVar1 + 0xc);
        local_58._0_4_ = *(float *)(pFVar1 + 0x10);
        fVar22 = *(float *)(pFVar1 + 8);
        local_68._0_4_ = (float)*(undefined8 *)pFVar1;
        local_68._4_4_ = (float)((ulong)*(undefined8 *)pFVar1 >> 0x20);
        fVar25 = uStack_60._4_4_;
        if ((float)local_68 <= uStack_60._4_4_) {
          fVar25 = (float)local_68;
        }
        fVar23 = (float)local_58;
        if (local_68._4_4_ <= (float)local_58) {
          fVar23 = local_68._4_4_;
        }
        if (uStack_60._4_4_ <= (float)local_68 + 0.0) {
          uStack_60._4_4_ = (float)local_68 + 0.0;
        }
        if ((float)local_58 <= local_68._4_4_ + 0.0) {
          local_58._0_4_ = local_68._4_4_ + 0.0;
        }
        uStack_60._0_4_ = *(float *)(pFVar1 + 0x14);
        uStack_60._4_4_ = uStack_60._4_4_ - fVar25;
        local_58._0_4_ = (float)local_58 - fVar23;
        local_58._4_4_ = (float)uStack_60;
        if ((float)uStack_60 <= fVar22 + 0.0) {
          local_58._4_4_ = fVar22 + 0.0;
        }
        if (fVar22 <= (float)uStack_60) {
          uStack_60._0_4_ = fVar22;
        }
        local_58._4_4_ = local_58._4_4_ - (float)uStack_60;
        local_68._0_4_ = fVar25;
        local_68._4_4_ = fVar23;
        if (((uStack_60._4_4_ < 0.0) || ((float)local_58 < 0.0)) || (local_58._4_4_ < 0.0)) {
          _err_print_error("expand_to","./core/math/aabb.h",0x158,
                           "AABB size is negative, this is not supported. Use AABB.abs() to get an AABB with a positive size."
                           ,0,0,param_5,pAVar32,puVar6);
        }
        fVar22 = *(float *)(pFVar1 + 0x18);
        fVar25 = *(float *)(pFVar1 + 0x20);
        fVar23 = fVar22;
        if ((float)local_68 <= fVar22) {
          fVar23 = (float)local_68;
        }
        if (fVar22 <= uStack_60._4_4_ + (float)local_68) {
          fVar22 = uStack_60._4_4_ + (float)local_68;
        }
        fVar24 = fVar25;
        if ((float)uStack_60 <= fVar25) {
          fVar24 = (float)uStack_60;
        }
        if (fVar25 <= local_58._4_4_ + (float)uStack_60) {
          fVar25 = local_58._4_4_ + (float)uStack_60;
        }
        fVar27 = *(float *)(pFVar1 + 0x1c);
        uStack_60._4_4_ = fVar22 - fVar23;
        local_58._4_4_ = fVar25 - fVar24;
        fVar22 = fVar27;
        if (fVar27 <= (float)local_58 + local_68._4_4_) {
          fVar22 = (float)local_58 + local_68._4_4_;
        }
        if (local_68._4_4_ <= fVar27) {
          fVar27 = local_68._4_4_;
        }
        local_58._0_4_ = fVar22 - fVar27;
        local_68 = CONCAT44(fVar27,fVar23);
        uStack_60._0_4_ = fVar24;
        if (0.0 < param_5) {
          local_98 = Face3::get_plane(param_4 + (ulong)*(uint *)pFVar20 * 0x24,0);
          local_90._0_4_ = (float)extraout_XMM1_Qa;
          fVar27 = (float)local_90 * param_5;
          fVar26 = (float)((ulong)local_98 >> 0x20) * param_5;
          fVar25 = param_5 * (float)local_98;
          fVar24 = *(float *)(pFVar1 + 8) - fVar27;
          fVar23 = *(float *)(pFVar1 + 4) - fVar26;
          fVar22 = *(float *)pFVar1 - fVar25;
          local_90 = extraout_XMM1_Qa;
          if (((uStack_60._4_4_ < 0.0) || ((float)local_58 < 0.0)) || (local_58._4_4_ < 0.0)) {
            _err_print_error("expand_to","./core/math/aabb.h",0x158,
                             "AABB size is negative, this is not supported. Use AABB.abs() to get an AABB with a positive size."
                             ,0,0,param_5,pAVar32,puVar6);
          }
          fVar30 = fVar24;
          if ((float)uStack_60 <= fVar24) {
            fVar30 = (float)uStack_60;
          }
          uStack_60._4_4_ = uStack_60._4_4_ + (float)local_68;
          fVar29 = fVar22;
          if ((float)local_68 <= fVar22) {
            fVar29 = (float)local_68;
          }
          local_68._0_4_ = fVar29;
          fVar29 = fVar23;
          if (local_68._4_4_ <= fVar23) {
            fVar29 = local_68._4_4_;
          }
          if (fVar24 <= local_58._4_4_ + (float)uStack_60) {
            fVar24 = local_58._4_4_ + (float)uStack_60;
          }
          if (fVar22 <= uStack_60._4_4_) {
            fVar22 = uStack_60._4_4_;
          }
          if (fVar23 <= (float)local_58 + local_68._4_4_) {
            fVar23 = (float)local_58 + local_68._4_4_;
          }
          fVar28 = *(float *)(pFVar1 + 0x10) - fVar26;
          local_58._4_4_ = fVar24 - fVar30;
          uStack_60._4_4_ = fVar22 - (float)local_68;
          local_58._0_4_ = fVar23 - fVar29;
          fVar23 = *(float *)(pFVar1 + 0x14) - fVar27;
          fVar22 = *(float *)(pFVar1 + 0xc) - fVar25;
          uStack_60._0_4_ = fVar30;
          local_68._4_4_ = fVar29;
          if (((uStack_60._4_4_ < 0.0) || ((float)local_58 < 0.0)) || (local_58._4_4_ < 0.0)) {
            _err_print_error("expand_to","./core/math/aabb.h",0x158,
                             "AABB size is negative, this is not supported. Use AABB.abs() to get an AABB with a positive size."
                             ,0,0,param_5,pAVar32,puVar6);
          }
          uStack_60._4_4_ = uStack_60._4_4_ + (float)local_68;
          fVar24 = fVar22;
          if ((float)local_68 <= fVar22) {
            fVar24 = (float)local_68;
          }
          local_68._0_4_ = fVar24;
          fVar24 = fVar28;
          if (local_68._4_4_ <= fVar28) {
            fVar24 = local_68._4_4_;
          }
          if (fVar22 <= uStack_60._4_4_) {
            fVar22 = uStack_60._4_4_;
          }
          fVar30 = fVar23;
          if ((float)uStack_60 <= fVar23) {
            fVar30 = (float)uStack_60;
          }
          if (fVar28 <= (float)local_58 + local_68._4_4_) {
            fVar28 = (float)local_58 + local_68._4_4_;
          }
          if (fVar23 <= local_58._4_4_ + (float)uStack_60) {
            fVar23 = local_58._4_4_ + (float)uStack_60;
          }
          fVar26 = *(float *)(pFVar1 + 0x1c) - fVar26;
          uStack_60._4_4_ = fVar22 - (float)local_68;
          local_58._0_4_ = fVar28 - fVar24;
          local_58._4_4_ = fVar23 - fVar30;
          fVar27 = *(float *)(pFVar1 + 0x20) - fVar27;
          fVar25 = *(float *)(pFVar1 + 0x18) - fVar25;
          uStack_60._0_4_ = fVar30;
          local_68._4_4_ = fVar24;
          if (((uStack_60._4_4_ < 0.0) || ((float)local_58 < 0.0)) || (local_58._4_4_ < 0.0)) {
            _err_print_error("expand_to","./core/math/aabb.h",0x158,
                             "AABB size is negative, this is not supported. Use AABB.abs() to get an AABB with a positive size."
                             ,0,0);
          }
          fVar22 = fVar25;
          if ((float)local_68 <= fVar25) {
            fVar22 = (float)local_68;
          }
          fVar23 = fVar26;
          if (local_68._4_4_ <= fVar26) {
            fVar23 = local_68._4_4_;
          }
          if (fVar25 <= uStack_60._4_4_ + (float)local_68) {
            fVar25 = uStack_60._4_4_ + (float)local_68;
          }
          if (fVar26 <= (float)local_58 + local_68._4_4_) {
            fVar26 = (float)local_58 + local_68._4_4_;
          }
          fVar24 = fVar27;
          if ((float)uStack_60 <= fVar27) {
            fVar24 = (float)uStack_60;
          }
          if (fVar27 <= local_58._4_4_ + (float)uStack_60) {
            fVar27 = local_58._4_4_ + (float)uStack_60;
          }
          uStack_60._4_4_ = fVar25 - fVar22;
          local_58._0_4_ = fVar26 - fVar23;
          local_58._4_4_ = fVar27 - fVar24;
          local_68 = CONCAT44(fVar23,fVar22);
          uStack_60._0_4_ = fVar24;
        }
        if (uVar16 != 0) break;
        local_88 = local_68;
        pFVar20 = pFVar20 + 0x10;
        uVar16 = 1;
        fStack_80 = (float)uStack_60;
        fStack_7c = uStack_60._4_4_;
        fStack_78 = (float)local_58;
        fStack_74 = local_58._4_4_;
      }
      uVar16 = uVar16 + 1;
      pFVar20 = pFVar20 + 0x10;
      AABB::merge_with(pAVar32);
    } while (param_3 != uVar16);
    uVar16 = *(uint *)param_1;
  }
  uStack_60 = CONCAT44(fStack_7c,fStack_80);
  pvVar12 = *(void **)(param_1 + 8);
  local_58 = CONCAT44(fStack_74,fStack_78);
  local_68 = local_88;
  uStack_50 = uStack_70;
  if (*(uint *)(param_1 + 4) == uVar16) {
    uVar16 = uVar16 * 2;
    if (uVar16 == 0) {
      uVar16 = 1;
    }
    *(uint *)(param_1 + 4) = uVar16;
    pvVar12 = (void *)Memory::realloc_static(pvVar12,(ulong)uVar16 << 5,false);
    *(void **)(param_1 + 8) = pvVar12;
    if (pvVar12 == (void *)0x0) {
      _err_print_error("push_back","./core/templates/local_vector.h",0x41,
                       "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    uVar16 = *(uint *)param_1;
  }
  uVar17 = uVar16 + 1;
  local_9c = 0;
  puVar6 = (undefined8 *)((ulong)uVar16 * 0x20 + (long)pvVar12);
  *(uint *)param_1 = uVar17;
  *puVar6 = local_68;
  puVar6[1] = uStack_60;
  puVar6[2] = local_58;
  puVar6[3] = uStack_50;
  uVar31 = (ulong)(param_3 >> 1);
  if (local_f4 < uVar17) {
    lVar7 = (ulong)local_f4 << 5;
    local_9c = AABB::get_longest_axis_index();
    uVar18 = (ulong)param_3;
    lVar8 = 0;
    uVar21 = uVar18;
    if (uVar18 != 0) {
      do {
        uVar21 = (long)uVar21 >> 1;
        lVar8 = lVar8 + 1;
      } while (uVar21 != 1);
      SortArray<GPUParticlesCollisionSDF3D::FacePos,GPUParticlesCollisionSDF3D::FaceSort,true>::
      introsort((SortArray<GPUParticlesCollisionSDF3D::FacePos,GPUParticlesCollisionSDF3D::FaceSort,true>
                 *)&local_9c,0,uVar18,param_2,lVar8 * 2);
      if (0x10 < uVar18) {
        lVar13 = (long)local_9c;
        pFVar20 = param_2 + 0x10;
        pFVar15 = pFVar20;
        lVar8 = 1;
        do {
          while( true ) {
            lVar10 = lVar8;
            uVar3 = *(undefined8 *)(pFVar15 + 8);
            local_88 = *(undefined8 *)pFVar15;
            fStack_80 = (float)uVar3;
            fStack_7c = (float)((ulong)uVar3 >> 0x20);
            fVar22 = *(float *)((long)&local_88 + lVar13 * 4);
            if (fVar22 < *(float *)(param_2 + lVar13 * 4)) break;
            local_68 = *(undefined8 *)pFVar15;
            uStack_60 = uVar3;
            pFVar11 = pFVar15;
            if (fVar22 < *(float *)(pFVar15 + lVar13 * 4 + -0x10)) {
              if (lVar10 + -1 != 0) {
                lVar9 = 0;
                lVar8 = lVar10 + -1;
                do {
                  uVar3 = *(undefined8 *)(pFVar15 + lVar9 + -0x10 + 8);
                  lVar14 = lVar8 + -1;
                  *(undefined8 *)(pFVar15 + lVar9) = *(undefined8 *)(pFVar15 + lVar9 + -0x10);
                  *(undefined8 *)(pFVar15 + lVar9 + 8) = uVar3;
                  if (*(float *)(param_2 + lVar9 + (lVar13 + lVar10 * 4) * 4 + -0x20) <= fVar22) {
                    pFVar11 = param_2 + lVar8 * 0x10;
                    goto LAB_0010bc66;
                  }
                  lVar9 = lVar9 + -0x10;
                  lVar8 = lVar14;
                } while (lVar14 != 0);
              }
              _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                               "bad comparison function; sorting will be broken",0,0);
              lVar13 = (long)local_9c;
              pFVar11 = pFVar20;
            }
LAB_0010bc66:
            pFVar15 = pFVar15 + 0x10;
            *(undefined8 *)pFVar11 = local_68;
            *(undefined8 *)(pFVar11 + 8) = uStack_60;
            lVar8 = lVar10 + 1;
            if (lVar10 + 1 == 0x10) goto LAB_0010bc84;
          }
          pFVar15 = pFVar15 + 0x10;
          memmove(pFVar20,param_2,lVar10 << 4);
          *(undefined8 *)param_2 = local_88;
          *(ulong *)(param_2 + 8) = CONCAT44(fStack_7c,fStack_80);
          lVar8 = lVar10 + 1;
        } while (lVar10 + 1 != 0x10);
LAB_0010bc84:
        uVar21 = lVar10 + 1;
        pFVar15 = param_2 + 0x100;
        lVar8 = 0x40;
        do {
          local_68 = *(undefined8 *)pFVar15;
          uStack_60 = *(undefined8 *)(pFVar15 + 8);
          fVar22 = *(float *)((long)&local_68 + lVar13 * 4);
          pFVar11 = pFVar15;
          if (fVar22 < *(float *)(pFVar15 + lVar13 * 4 + -0x10)) {
            lVar9 = 0;
            lVar10 = uVar21 - 1;
            do {
              uVar3 = *(undefined8 *)(pFVar15 + lVar9 + -0x10 + 8);
              lVar14 = lVar10 + -1;
              *(undefined8 *)(pFVar15 + lVar9) = *(undefined8 *)(pFVar15 + lVar9 + -0x10);
              *(undefined8 *)(pFVar15 + lVar9 + 8) = uVar3;
              if (*(float *)(param_2 + lVar9 + (lVar13 + lVar8) * 4 + -0x20) <= fVar22) {
                pFVar11 = param_2 + lVar10 * 0x10;
                goto LAB_0010bd61;
              }
              lVar9 = lVar9 + -0x10;
              lVar10 = lVar14;
            } while (lVar14 != 0);
            _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                             "bad comparison function; sorting will be broken",0,0);
            pFVar11 = pFVar20;
          }
LAB_0010bd61:
          uVar21 = uVar21 + 1;
          pFVar15 = pFVar15 + 0x10;
          lVar8 = lVar8 + 4;
          *(undefined8 *)pFVar11 = local_68;
          *(undefined8 *)(pFVar11 + 8) = uStack_60;
          if (uVar18 == uVar21) goto LAB_0010bda2;
          lVar13 = (long)local_9c;
        } while( true );
      }
      pFVar20 = param_2 + 0x10;
      pFVar15 = pFVar20;
      uVar21 = 1;
      do {
        while( true ) {
          lVar8 = (long)local_9c;
          uVar3 = *(undefined8 *)(pFVar15 + 8);
          local_88 = *(undefined8 *)pFVar15;
          fStack_80 = (float)uVar3;
          fStack_7c = (float)((ulong)uVar3 >> 0x20);
          fVar22 = *(float *)((long)&local_88 + lVar8 * 4);
          if (fVar22 < *(float *)(param_2 + lVar8 * 4)) break;
          local_68 = *(undefined8 *)pFVar15;
          uStack_60 = uVar3;
          pFVar11 = pFVar15;
          if (fVar22 < *(float *)(pFVar15 + lVar8 * 4 + -0x10)) {
            if (uVar21 - 1 != 0) {
              lVar10 = 0;
              lVar13 = uVar21 - 1;
              do {
                uVar3 = *(undefined8 *)(pFVar15 + lVar10 + -0x10 + 8);
                lVar9 = lVar13 + -1;
                *(undefined8 *)(pFVar15 + lVar10) = *(undefined8 *)(pFVar15 + lVar10 + -0x10);
                *(undefined8 *)(pFVar15 + lVar10 + 8) = uVar3;
                if (*(float *)(param_2 + lVar10 + (lVar8 + uVar21 * 4) * 4 + -0x20) <= fVar22) {
                  pFVar11 = param_2 + lVar13 * 0x10;
                  goto LAB_0010c420;
                }
                lVar10 = lVar10 + -0x10;
                lVar13 = lVar9;
              } while (lVar9 != 0);
            }
            _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                             "bad comparison function; sorting will be broken",0,0);
            pFVar11 = pFVar20;
          }
LAB_0010c420:
          uVar21 = uVar21 + 1;
          pFVar15 = pFVar15 + 0x10;
          *(undefined8 *)pFVar11 = local_68;
          *(undefined8 *)(pFVar11 + 8) = uStack_60;
          if (uVar18 == uVar21) goto LAB_0010bda2;
        }
        uVar19 = uVar21 + 1;
        pFVar15 = pFVar15 + 0x10;
        memmove(pFVar20,param_2,uVar21 << 4);
        *(undefined8 *)param_2 = local_88;
        *(ulong *)(param_2 + 8) = CONCAT44(fStack_7c,fStack_80);
        uVar21 = uVar19;
      } while (uVar18 != uVar19);
    }
LAB_0010bda2:
    uVar4 = _create_bvh(this,param_1,param_2,(uint)uVar31,param_4,param_5);
    uVar5 = _create_bvh(this,param_1,param_2 + (uVar31 & 0xffffffff) * 0x10,param_3 - (uint)uVar31,
                        param_4,param_5);
    uVar17 = *(uint *)param_1;
    if (local_f4 < uVar17) {
      lVar8 = *(long *)(param_1 + 8);
      *(undefined4 *)(lVar7 + lVar8 + 0x18) = uVar4;
      *(undefined4 *)(lVar7 + lVar8 + 0x1c) = uVar5;
      goto LAB_0010be06;
    }
  }
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xb2,(ulong)local_f4,(ulong)uVar17,
             "p_index","count","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GPUParticlesCollisionSDF3D::bake() */

undefined8 * GPUParticlesCollisionSDF3D::bake(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  size_t __n;
  code *pcVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  Image *pIVar10;
  int *piVar11;
  char cVar12;
  int iVar13;
  Node *pNVar14;
  float *pfVar15;
  float *pfVar16;
  FacePos *pFVar17;
  ulong uVar18;
  undefined8 *puVar19;
  uint uVar20;
  int *piVar21;
  undefined8 *puVar22;
  FacePos *pFVar23;
  undefined8 uVar24;
  undefined8 *puVar25;
  FacePos *pFVar26;
  GPUParticlesCollisionSDF3D *in_RSI;
  uint uVar27;
  undefined8 *in_RDI;
  float fVar28;
  int iVar29;
  Face3 *pFVar30;
  long lVar31;
  int *piVar32;
  long in_FS_OFFSET;
  float fVar34;
  undefined1 auVar33 [16];
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar40;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  undefined1 auVar61 [16];
  undefined1 auVar62 [12];
  float local_208;
  Face3 *local_1e8;
  float local_1e0;
  uint local_1dc;
  uint local_1d8;
  long *local_1a0;
  Image *local_198;
  long local_190;
  ulong local_188;
  undefined8 *local_180;
  undefined8 local_178;
  int *local_170;
  undefined8 local_160;
  float local_158;
  undefined8 local_14c;
  int local_144;
  int iStack_140;
  float local_13c;
  float local_138;
  float fStack_134;
  float local_130;
  float local_12c;
  float fStack_128;
  float local_124;
  float local_118 [6];
  undefined8 uStack_100;
  float local_f8;
  float local_f4 [3];
  float local_e8 [6];
  undefined8 uStack_d0;
  float local_c8;
  float local_c4 [3];
  undefined8 local_b8;
  ulong uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  float local_98;
  undefined1 local_88 [8];
  ulong uStack_80;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float local_68;
  undefined1 local_60 [16];
  float local_50;
  long local_40;
  
  fVar28 = *(float *)(in_RSI + 0x578);
  uVar24 = *(undefined8 *)(in_RSI + 0x570);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar18 = *(ulong *)(in_RSI + 0x570);
  fVar48 = (float)((ulong)uVar24 >> 0x20);
  local_138 = (float)uVar24 * (float)__LC3;
  fStack_134 = fVar48 * (float)((ulong)__LC3 >> 0x20);
  uVar2 = CONCAT44(fVar48,fVar48);
  if (fVar48 <= (float)uVar24) {
    uVar2 = uVar24;
  }
  local_12c = (float)uVar18;
  fStack_128 = (float)(uVar18 >> 0x20);
  fVar48 = fVar28;
  if (fVar28 <= (float)uVar2) {
    fVar48 = (float)uVar2;
  }
  local_130 = (float)((uint)fVar28 ^ __LC0) * _LC2;
  auVar33._8_8_ = 0;
  auVar33._0_8_ = uVar18;
  local_124 = *(float *)(in_RSI + 0x578);
  fVar48 = fVar48 / (float)*(int *)(bake()::subdivs + (long)*(int *)(in_RSI + 0x57c) * 4);
  auVar38._4_4_ = fVar48;
  auVar38._0_4_ = fVar48;
  auVar38._8_8_ = _LC14;
  auVar33 = divps(auVar33,auVar38);
  local_88 = auVar33._0_8_;
  uStack_80 = CONCAT44(uStack_80._4_4_,local_124 / fVar48);
  auVar62 = Vector3::operator_cast_to_Vector3i((Vector3 *)local_88);
  local_13c = auVar62._8_4_;
  iStack_140 = auVar62._4_4_;
  if ((int)local_13c < 1) {
    local_13c = 1.4013e-45;
  }
  if (iStack_140 == 0 || auVar62._0_8_ < 0) {
    iStack_140 = 1;
  }
  local_144 = auVar62._0_4_;
  if (local_144 < 1) {
    local_144 = 1;
  }
  if (bake_begin_function != (code *)0x0) {
    (*bake_begin_function)(100);
  }
  auVar62 = Vector3i::operator_cast_to_Vector3((Vector3i *)&local_144);
  local_88 = auVar62._0_8_;
  local_1a0 = (long *)0x0;
  uStack_80 = CONCAT44(uStack_80._4_4_,auVar62._8_4_);
  local_12c = fVar48 * auVar62._0_4_;
  fStack_128 = fVar48 * auVar62._4_4_;
  local_124 = fVar48 * auVar62._8_4_;
  pNVar14 = (Node *)Node::get_parent();
  _find_meshes(in_RSI,(AABB *)&local_138,pNVar14,(List *)&local_1a0);
  pcVar7 = bake_step_function;
  if (bake_step_function != (code *)0x0) {
    local_178 = 0;
    String::parse_latin1((String *)&local_178,"Finding Meshes");
    (*pcVar7)(0,(String *)&local_178);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
  }
  if ((local_1a0 == (long *)0x0) ||
     (puVar19 = (undefined8 *)*local_1a0, puVar19 == (undefined8 *)0x0)) {
    _err_print_error(&_LC163,"scene/3d/gpu_particles_collision_3d.cpp",0x1d5,
                     "No faces detected during GPUParticlesCollisionSDF3D bake. Check whether there are visible meshes matching the bake mask within its extents."
                     ,0,0);
    if (bake_end_function != (code *)0x0) {
      (*bake_end_function)();
    }
    *in_RDI = 0;
    goto LAB_0010e357;
  }
  local_1e8 = (Face3 *)0x0;
  local_1d8 = 0;
  local_1dc = 0;
  do {
    for (iVar29 = 0; iVar13 = (**(code **)(*(long *)*puVar19 + 0x1c8))(), iVar29 < iVar13;
        iVar29 = iVar29 + 1) {
      iVar13 = (**(code **)(*(long *)*puVar19 + 0x200))((long *)*puVar19,iVar29);
      if (iVar13 == 3) {
        (**(code **)(*(long *)*puVar19 + 0x1e0))((Array *)&local_190,(long *)*puVar19,iVar29);
        iVar13 = (int)(Array *)&local_190;
        Array::operator[](iVar13);
        Variant::operator_cast_to_Vector((Variant *)&local_188);
        puVar25 = local_180;
        Array::operator[](iVar13);
        Variant::operator_cast_to_Vector((Variant *)&local_178);
        if (local_170 == (int *)0x0) {
          if (local_180 != (undefined8 *)0x0) {
LAB_0010d335:
            iVar13 = (int)((long)local_180[-1] / 3);
            if (0 < iVar13) {
              fVar28 = (float)(iVar13 * 3);
              fVar40 = 0.0;
              do {
                uVar24 = puVar19[2];
                uVar2 = puVar19[3];
                local_e8[0] = 0.0;
                local_e8[1] = 0.0;
                uVar3 = puVar19[1];
                fVar44 = *(float *)((long)puVar19 + 0xc);
                local_e8[2] = 0.0;
                local_e8[3] = 0.0;
                local_e8[4] = 0.0;
                fVar37 = *(float *)(puVar19 + 3);
                local_e8[5] = 0.0;
                fVar52 = *(float *)(puVar19 + 4);
                fVar34 = *(float *)((long)puVar19 + 0x24);
                fVar35 = *(float *)(puVar19 + 5);
                uStack_d0 = 0;
                fVar36 = *(float *)((long)puVar19 + 0x34);
                uVar4 = *(undefined8 *)((long)puVar19 + 0x2c);
                local_c8 = 0.0;
                pfVar15 = local_e8;
                puVar22 = puVar25;
                do {
                  uVar5 = *puVar22;
                  fVar41 = *(float *)(puVar22 + 1);
                  pfVar16 = pfVar15 + 3;
                  puVar22 = (undefined8 *)((long)puVar22 + 0xc);
                  fVar43 = (float)uVar5;
                  fVar45 = (float)((ulong)uVar5 >> 0x20);
                  *(ulong *)pfVar15 =
                       CONCAT44(fVar45 * fVar37 + fVar43 * (float)((ulong)uVar24 >> 0x20) +
                                fVar41 * (float)((ulong)uVar2 >> 0x20) +
                                (float)((ulong)uVar4 >> 0x20),
                                fVar45 * fVar44 + fVar43 * (float)uVar3 + fVar41 * (float)uVar24 +
                                (float)uVar4);
                  pfVar15[2] = fVar43 * fVar52 + fVar45 * fVar34 + fVar41 * fVar35 + fVar36;
                  pfVar15 = pfVar16;
                } while (local_c4 != pfVar16);
                local_208 = fStack_128 * _LC2;
                fVar35 = local_124 * _UNK_00125fdc;
                fVar52 = fStack_134 + local_208;
                fVar44 = local_130 + fVar35;
                fVar43 = local_e8[4] - fVar52;
                fVar45 = local_e8[5] - fVar44;
                fVar36 = local_e8[1] - fVar52;
                fVar41 = local_e8[2] - fVar44;
                fVar46 = fVar43 - fVar36;
                fVar49 = fVar45 - fVar41;
                fVar44 = local_c8 - fVar44;
                fVar52 = uStack_d0._4_4_ - fVar52;
                fVar34 = fVar36 * fVar49 - fVar41 * fVar46;
                fVar56 = fVar52 * fVar49 - fVar44 * fVar46;
                fVar37 = fVar56;
                if (fVar34 < fVar56) {
                  fVar37 = fVar34;
                  fVar34 = fVar56;
                }
                fVar56 = ABS(fVar49) * local_208 + ABS(fVar46) * fVar35;
                if ((fVar37 <= fVar56) && ((float)((uint)fVar56 ^ __LC0) <= fVar34)) {
                  fVar37 = local_12c * _LC2;
                  fVar34 = local_138 + fVar37;
                  fVar50 = local_e8[0] - fVar34;
                  fVar53 = local_e8[3] - fVar34;
                  fVar34 = (float)uStack_d0 - fVar34;
                  fVar51 = fVar53 - fVar50;
                  fVar47 = (float)((uint)fVar49 ^ __LC0) * fVar34 + fVar44 * fVar51;
                  fVar42 = fVar51 * fVar41 + fVar50 * (float)((uint)fVar49 ^ __LC0);
                  fVar56 = fVar42;
                  if (fVar42 < fVar47) {
                    fVar56 = fVar47;
                    fVar47 = fVar42;
                  }
                  fVar42 = ABS(fVar49) * fVar37 + ABS(fVar51) * fVar35;
                  if ((fVar47 <= fVar42) && ((float)((uint)fVar42 ^ __LC0) <= fVar56)) {
                    fVar47 = fVar53 * fVar46 - fVar43 * fVar51;
                    fVar42 = fVar34 * fVar46 - fVar52 * fVar51;
                    fVar56 = fVar42;
                    if (fVar42 < fVar47) {
                      fVar56 = fVar47;
                      fVar47 = fVar42;
                    }
                    fVar42 = ABS(fVar51) * local_208 + ABS(fVar46) * fVar37;
                    if ((fVar47 <= fVar42) && ((float)((uint)fVar42 ^ __LC0) <= fVar56)) {
                      fVar42 = fVar44 - fVar45;
                      fVar54 = fVar52 - fVar43;
                      fVar57 = fVar42 * fVar36 - fVar54 * fVar41;
                      fVar47 = fVar42 * fVar52 - fVar54 * fVar44;
                      fVar56 = fVar57;
                      if (fVar57 < fVar47) {
                        fVar56 = fVar47;
                        fVar47 = fVar57;
                      }
                      fVar57 = ABS(fVar42) * local_208 + ABS(fVar54) * fVar35;
                      if ((fVar47 <= fVar57) && ((float)((uint)fVar57 ^ __LC0) <= fVar56)) {
                        fVar57 = fVar34 - fVar53;
                        fVar58 = fVar50 * (float)((uint)fVar42 ^ __LC0) + fVar57 * fVar41;
                        fVar47 = (float)((uint)fVar42 ^ __LC0) * fVar34 + fVar57 * fVar44;
                        fVar56 = fVar58;
                        if (fVar58 < fVar47) {
                          fVar56 = fVar47;
                          fVar47 = fVar58;
                        }
                        fVar58 = ABS(fVar57) * fVar35 + ABS(fVar42) * fVar37;
                        if ((fVar47 <= fVar58) && ((float)((uint)fVar58 ^ __LC0) <= fVar56)) {
                          fVar58 = fVar54 * fVar50 - fVar57 * fVar36;
                          fVar47 = fVar54 * fVar53 - fVar57 * fVar43;
                          fVar56 = fVar58;
                          if (fVar58 < fVar47) {
                            fVar56 = fVar47;
                            fVar47 = fVar58;
                          }
                          fVar58 = ABS(fVar57) * local_208 + ABS(fVar54) * fVar37;
                          if ((fVar47 <= fVar58) && ((float)((uint)fVar58 ^ __LC0) <= fVar56)) {
                            fVar58 = fVar41 - fVar44;
                            fVar60 = fVar36 - fVar52;
                            fVar59 = fVar58 * fVar36 - fVar60 * fVar41;
                            fVar47 = fVar58 * fVar43 - fVar45 * fVar60;
                            fVar56 = fVar59;
                            if (fVar59 < fVar47) {
                              fVar56 = fVar47;
                              fVar47 = fVar59;
                            }
                            fVar59 = ABS(fVar58) * local_208 + ABS(fVar60) * fVar35;
                            if ((fVar47 <= fVar59) && ((float)((uint)fVar59 ^ __LC0) <= fVar56)) {
                              fVar59 = fVar50 - fVar34;
                              fVar47 = fVar50 * (float)((uint)fVar58 ^ __LC0) + fVar59 * fVar41;
                              fVar55 = fVar59 * fVar45 + (float)((uint)fVar58 ^ __LC0) * fVar53;
                              fVar56 = fVar55;
                              if (fVar47 < fVar55) {
                                fVar56 = fVar47;
                                fVar47 = fVar55;
                              }
                              fVar58 = ABS(fVar59) * fVar35 + ABS(fVar58) * fVar37;
                              if ((fVar56 <= fVar58) && ((float)((uint)fVar58 ^ __LC0) <= fVar47)) {
                                fVar47 = fVar60 * fVar53 - fVar59 * fVar43;
                                fVar58 = fVar60 * fVar34 - fVar59 * fVar52;
                                fVar56 = fVar58;
                                if (fVar58 < fVar47) {
                                  fVar56 = fVar47;
                                  fVar47 = fVar58;
                                }
                                fVar58 = ABS(fVar59) * local_208 + ABS(fVar60) * fVar37;
                                if ((fVar47 <= fVar58) && ((float)((uint)fVar58 ^ __LC0) <= fVar56))
                                {
                                  fVar56 = fVar50;
                                  fVar47 = fVar53;
                                  if ((fVar50 <= fVar53) &&
                                     (fVar56 = fVar53, fVar47 = fVar50, fVar53 <= fVar50)) {
                                    fVar56 = fVar50;
                                  }
                                  fVar53 = fVar34;
                                  if (fVar34 <= fVar56) {
                                    fVar53 = fVar56;
                                  }
                                  if (fVar47 <= fVar34) {
                                    fVar34 = fVar47;
                                  }
                                  if ((fVar34 <= fVar37) &&
                                     ((float)((uint)fVar37 ^ __LC0) <= fVar53)) {
                                    fVar34 = fVar36;
                                    local_1e0 = fVar43;
                                    if ((fVar36 <= fVar43) && (local_1e0 = fVar36, fVar36 < fVar43))
                                    {
                                      fVar34 = fVar43;
                                    }
                                    fVar43 = fVar52;
                                    if (local_1e0 <= fVar52) {
                                      fVar43 = local_1e0;
                                    }
                                    if (fVar52 <= fVar34) {
                                      fVar52 = fVar34;
                                    }
                                    if ((fVar43 <= local_208) &&
                                       ((float)((uint)local_208 ^ __LC0) <= fVar52)) {
                                      fVar52 = fVar41;
                                      if ((fVar41 <= fVar45) && (fVar41 < fVar45)) {
                                        fVar52 = fVar45;
                                      }
                                      fVar34 = fVar44;
                                      if (fVar45 <= fVar44) {
                                        fVar34 = fVar45;
                                      }
                                      if (fVar44 <= fVar52) {
                                        fVar44 = fVar52;
                                      }
                                      if ((fVar34 <= fVar35) &&
                                         ((float)((uint)fVar35 ^ __LC0) <= fVar44)) {
                                        local_b8 = 0;
                                        uStack_b0 = uStack_b0 & 0xffffffff00000000;
                                        local_14c = CONCAT44(fVar35,local_208);
                                        local_88 = (undefined1  [8])0x0;
                                        uStack_80 = uStack_80 & 0xffffffff00000000;
                                        local_158 = fVar54 * fVar51 - fVar57 * fVar46;
                                        local_118[2] = local_158;
                                        local_118[0] = fVar46 * fVar42 - fVar54 * fVar49;
                                        local_118[1] = fVar49 * fVar57 - fVar42 * fVar51;
                                        local_160 = CONCAT44(local_118[1],local_118[0]);
                                        fVar44 = fVar50 * local_118[0] + fVar36 * local_118[1] +
                                                 fVar41 * local_158;
                                        lVar31 = 0;
                                        while( true ) {
                                          fVar52 = (float)((uint)fVar37 ^ __LC0);
                                          if (*(float *)((long)local_118 + lVar31) <= 0.0) {
                                            fVar52 = fVar37;
                                            fVar37 = (float)((uint)fVar37 ^ __LC0);
                                          }
                                          *(float *)((long)&local_b8 + lVar31) = fVar52;
                                          *(float *)((Vector3 *)local_88 + lVar31) = fVar37;
                                          if (lVar31 + 4 == 0xc) break;
                                          fVar37 = *(float *)((long)&local_14c + lVar31);
                                          lVar31 = lVar31 + 4;
                                        }
                                        if ((((float)local_b8 * local_118[0] +
                                              local_b8._4_4_ * local_118[1] +
                                             (float)uStack_b0 * local_158) - fVar44 <= 0.0) &&
                                           (0.0 <= (local_118[0] * 0.0 + local_118[1] * 0.0 +
                                                   local_158 * 0.0) - fVar44)) {
                                          local_88 = (undefined1  [8])
                                                     CONCAT44(local_e8[1],local_e8[0]);
                                          uStack_80 = CONCAT44(local_e8[3],local_e8[2]);
                                          local_68 = local_c8;
                                          local_78 = local_e8[4];
                                          fStack_74 = local_e8[5];
                                          fStack_70 = (float)uStack_d0;
                                          fStack_6c = uStack_d0._4_4_;
                                          if (local_1d8 == local_1dc) {
                                            uVar18 = 1;
                                            if (local_1d8 << 1 != 0) {
                                              uVar18 = (ulong)(local_1d8 << 1);
                                            }
                                            local_1d8 = (uint)uVar18;
                                            auVar33 = Memory::realloc_static
                                                                (local_1e8,uVar18 * 0x24,false);
                                            uVar24 = auVar33._8_8_;
                                            local_1e8 = auVar33._0_8_;
                                            local_208 = fVar28;
                                            if (local_1e8 == (Face3 *)0x0) goto LAB_0010e696;
                                          }
                                          pFVar30 = local_1e8 + (ulong)local_1dc * 0x24;
                                          *(undefined1 (*) [8])pFVar30 = local_88;
                                          *(ulong *)(pFVar30 + 8) = uStack_80;
                                          auVar9._4_4_ = fStack_74;
                                          auVar9._0_4_ = local_78;
                                          auVar9._8_4_ = fStack_70;
                                          auVar9._12_4_ = fStack_6c;
                                          *(undefined1 (*) [16])(pFVar30 + 0x10) = auVar9;
                                          *(float *)(pFVar30 + 0x20) = local_68;
                                          local_1dc = local_1dc + 1;
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                fVar40 = (float)((int)fVar40 + 3);
                puVar25 = (undefined8 *)((long)puVar25 + 0x24);
              } while (fVar28 != fVar40);
            }
LAB_0010d2b1:
            if (local_170 != (int *)0x0) goto LAB_0010d2b6;
            goto LAB_0010d2dd;
          }
        }
        else {
          if (*(long *)(local_170 + -2) == 0) {
            if (local_180 != (undefined8 *)0x0) goto LAB_0010d335;
          }
          else {
            iVar13 = (int)(*(long *)(local_170 + -2) / 3);
            if (0 < iVar13) {
              fVar28 = 0.0;
              piVar32 = local_170;
              do {
                uVar24 = puVar19[2];
                uVar2 = puVar19[1];
                local_118[0] = 0.0;
                local_118[1] = 0.0;
                fVar40 = *(float *)((long)puVar19 + 0xc);
                local_118[2] = 0.0;
                local_118[3] = 0.0;
                local_118[4] = 0.0;
                fVar44 = *(float *)(puVar19 + 4);
                uVar3 = puVar19[3];
                local_118[5] = 0.0;
                fVar37 = *(float *)((long)puVar19 + 0x24);
                fVar52 = *(float *)(puVar19 + 5);
                uStack_100 = 0;
                fVar34 = *(float *)(puVar19 + 3);
                local_f8 = 0.0;
                fVar35 = *(float *)((long)puVar19 + 0x34);
                uVar4 = *(undefined8 *)((long)puVar19 + 0x2c);
                pfVar15 = local_118;
                piVar21 = piVar32;
                do {
                  iVar6 = *piVar21;
                  pfVar16 = pfVar15 + 3;
                  piVar21 = piVar21 + 1;
                  puVar22 = (undefined8 *)((long)puVar25 + (long)iVar6 * 0xc);
                  uVar5 = *puVar22;
                  fVar36 = *(float *)(puVar22 + 1);
                  fVar41 = (float)uVar5;
                  fVar43 = (float)((ulong)uVar5 >> 0x20);
                  *(ulong *)pfVar15 =
                       CONCAT44(fVar43 * fVar34 + fVar41 * (float)((ulong)uVar24 >> 0x20) +
                                fVar36 * (float)((ulong)uVar3 >> 0x20) +
                                (float)((ulong)uVar4 >> 0x20),
                                fVar43 * fVar40 + fVar41 * (float)uVar2 + fVar36 * (float)uVar24 +
                                (float)uVar4);
                  pfVar15[2] = fVar41 * fVar44 + fVar43 * fVar37 + fVar36 * fVar52 + fVar35;
                  pfVar15 = pfVar16;
                } while (local_f4 != pfVar16);
                local_208 = fStack_128 * _LC2;
                fVar34 = local_124 * _UNK_00125fdc;
                fVar37 = fStack_134 + local_208;
                fVar40 = local_130 + fVar34;
                fVar41 = local_118[4] - fVar37;
                fVar43 = local_118[5] - fVar40;
                fVar35 = local_118[1] - fVar37;
                fVar36 = local_118[2] - fVar40;
                fVar45 = fVar41 - fVar35;
                fVar46 = fVar43 - fVar36;
                fVar40 = local_f8 - fVar40;
                fVar37 = uStack_100._4_4_ - fVar37;
                fVar52 = fVar35 * fVar46 - fVar45 * fVar36;
                fVar49 = fVar37 * fVar46 - fVar40 * fVar45;
                fVar44 = fVar49;
                if (fVar52 < fVar49) {
                  fVar44 = fVar52;
                  fVar52 = fVar49;
                }
                fVar49 = ABS(fVar46) * local_208 + ABS(fVar45) * fVar34;
                if ((fVar44 <= fVar49) && ((float)((uint)fVar49 ^ __LC0) <= fVar52)) {
                  fVar44 = local_12c * _LC2;
                  fVar49 = local_138 + fVar44;
                  fVar47 = local_118[0] - fVar49;
                  fVar51 = local_118[3] - fVar49;
                  fVar49 = (float)uStack_100 - fVar49;
                  fVar50 = fVar51 - fVar47;
                  fVar56 = (float)((uint)fVar46 ^ __LC0) * fVar49 + fVar40 * fVar50;
                  fVar53 = fVar50 * fVar36 + fVar47 * (float)((uint)fVar46 ^ __LC0);
                  fVar52 = fVar53;
                  if (fVar53 < fVar56) {
                    fVar52 = fVar56;
                    fVar56 = fVar53;
                  }
                  fVar53 = ABS(fVar46) * fVar44 + ABS(fVar50) * fVar34;
                  if ((fVar56 <= fVar53) && ((float)((uint)fVar53 ^ __LC0) <= fVar52)) {
                    fVar56 = fVar51 * fVar45 - fVar41 * fVar50;
                    fVar53 = fVar49 * fVar45 - fVar37 * fVar50;
                    fVar52 = fVar53;
                    if (fVar53 < fVar56) {
                      fVar52 = fVar56;
                      fVar56 = fVar53;
                    }
                    fVar53 = ABS(fVar50) * local_208 + ABS(fVar45) * fVar44;
                    if ((fVar56 <= fVar53) && ((float)((uint)fVar53 ^ __LC0) <= fVar52)) {
                      fVar53 = fVar40 - fVar43;
                      fVar42 = fVar37 - fVar41;
                      fVar54 = fVar53 * fVar35 - fVar42 * fVar36;
                      fVar56 = fVar53 * fVar37 - fVar42 * fVar40;
                      fVar52 = fVar54;
                      if (fVar54 < fVar56) {
                        fVar52 = fVar56;
                        fVar56 = fVar54;
                      }
                      fVar54 = ABS(fVar53) * local_208 + ABS(fVar42) * fVar34;
                      if ((fVar56 <= fVar54) && ((float)((uint)fVar54 ^ __LC0) <= fVar52)) {
                        fVar54 = fVar49 - fVar51;
                        fVar57 = fVar47 * (float)((uint)fVar53 ^ __LC0) + fVar54 * fVar36;
                        fVar56 = (float)((uint)fVar53 ^ __LC0) * fVar49 + fVar54 * fVar40;
                        fVar52 = fVar57;
                        if (fVar57 < fVar56) {
                          fVar52 = fVar56;
                          fVar56 = fVar57;
                        }
                        fVar57 = ABS(fVar54) * fVar34 + ABS(fVar53) * fVar44;
                        if ((fVar56 <= fVar57) && ((float)((uint)fVar57 ^ __LC0) <= fVar52)) {
                          fVar56 = fVar42 * fVar47 - fVar54 * fVar35;
                          fVar57 = fVar42 * fVar51 - fVar54 * fVar41;
                          fVar52 = fVar57;
                          if (fVar56 < fVar57) {
                            fVar52 = fVar56;
                            fVar56 = fVar57;
                          }
                          fVar57 = ABS(fVar54) * local_208 + ABS(fVar42) * fVar44;
                          if ((fVar52 <= fVar57) && ((float)((uint)fVar57 ^ __LC0) <= fVar56)) {
                            fVar57 = fVar36 - fVar40;
                            fVar59 = fVar35 - fVar37;
                            fVar56 = fVar57 * fVar35 - fVar59 * fVar36;
                            fVar58 = fVar57 * fVar41 - fVar43 * fVar59;
                            fVar52 = fVar58;
                            if (fVar56 < fVar58) {
                              fVar52 = fVar56;
                              fVar56 = fVar58;
                            }
                            fVar58 = ABS(fVar57) * local_208 + ABS(fVar59) * fVar34;
                            if ((fVar52 <= fVar58) && ((float)((uint)fVar58 ^ __LC0) <= fVar56)) {
                              fVar60 = fVar47 - fVar49;
                              fVar58 = fVar47 * (float)((uint)fVar57 ^ __LC0) + fVar60 * fVar36;
                              fVar56 = (float)((uint)fVar57 ^ __LC0) * fVar51 + fVar60 * fVar43;
                              fVar52 = fVar58;
                              if (fVar58 < fVar56) {
                                fVar52 = fVar56;
                                fVar56 = fVar58;
                              }
                              fVar57 = ABS(fVar60) * fVar34 + ABS(fVar57) * fVar44;
                              if ((fVar56 <= fVar57) && ((float)((uint)fVar57 ^ __LC0) <= fVar52)) {
                                fVar57 = fVar59 * fVar51 - fVar41 * fVar60;
                                fVar56 = fVar59 * fVar49 - fVar60 * fVar37;
                                fVar52 = fVar57;
                                if (fVar56 < fVar57) {
                                  fVar52 = fVar56;
                                  fVar56 = fVar57;
                                }
                                fVar57 = ABS(fVar60) * local_208 + ABS(fVar59) * fVar44;
                                if ((fVar52 <= fVar57) && ((float)((uint)fVar57 ^ __LC0) <= fVar56))
                                {
                                  fVar52 = fVar47;
                                  fVar56 = fVar51;
                                  if ((fVar47 <= fVar51) &&
                                     (fVar52 = fVar51, fVar56 = fVar47, fVar51 <= fVar47)) {
                                    fVar52 = fVar47;
                                  }
                                  fVar51 = fVar49;
                                  if (fVar49 <= fVar52) {
                                    fVar51 = fVar52;
                                  }
                                  if (fVar56 <= fVar49) {
                                    fVar49 = fVar56;
                                  }
                                  if ((fVar49 <= fVar44) &&
                                     ((float)((uint)fVar44 ^ __LC0) <= fVar51)) {
                                    fVar52 = fVar35;
                                    local_1e0 = fVar41;
                                    if ((fVar35 <= fVar41) && (local_1e0 = fVar35, fVar35 < fVar41))
                                    {
                                      fVar52 = fVar41;
                                    }
                                    fVar41 = fVar37;
                                    if (local_1e0 <= fVar37) {
                                      fVar41 = local_1e0;
                                    }
                                    if (fVar37 <= fVar52) {
                                      fVar37 = fVar52;
                                    }
                                    if ((fVar41 <= local_208) &&
                                       ((float)((uint)local_208 ^ __LC0) <= fVar37)) {
                                      fVar37 = fVar36;
                                      if ((fVar36 <= fVar43) && (fVar36 < fVar43)) {
                                        fVar37 = fVar43;
                                      }
                                      fVar52 = fVar40;
                                      if (fVar43 <= fVar40) {
                                        fVar52 = fVar43;
                                      }
                                      if (fVar40 <= fVar37) {
                                        fVar40 = fVar37;
                                      }
                                      if ((fVar52 <= fVar34) &&
                                         ((float)((uint)fVar34 ^ __LC0) <= fVar40)) {
                                        local_b8 = 0;
                                        uStack_b0 = uStack_b0 & 0xffffffff00000000;
                                        local_14c = CONCAT44(fVar34,local_208);
                                        local_88 = (undefined1  [8])0x0;
                                        uStack_80 = uStack_80 & 0xffffffff00000000;
                                        local_158 = fVar42 * fVar50 - fVar54 * fVar45;
                                        local_e8[2] = local_158;
                                        local_e8[0] = fVar45 * fVar53 - fVar42 * fVar46;
                                        local_e8[1] = fVar46 * fVar54 - fVar53 * fVar50;
                                        local_160 = CONCAT44(local_e8[1],local_e8[0]);
                                        fVar40 = fVar47 * local_e8[0] + fVar35 * local_e8[1] +
                                                 fVar36 * local_158;
                                        lVar31 = 0;
                                        while( true ) {
                                          fVar37 = (float)((uint)fVar44 ^ __LC0);
                                          if (*(float *)((long)local_e8 + lVar31) <= 0.0) {
                                            fVar37 = fVar44;
                                            fVar44 = (float)((uint)fVar44 ^ __LC0);
                                          }
                                          *(float *)((long)&local_b8 + lVar31) = fVar37;
                                          *(float *)((Vector3 *)local_88 + lVar31) = fVar44;
                                          if (lVar31 + 4 == 0xc) break;
                                          fVar44 = *(float *)((long)&local_14c + lVar31);
                                          lVar31 = lVar31 + 4;
                                        }
                                        if ((((float)local_b8 * local_e8[0] +
                                              local_b8._4_4_ * local_e8[1] +
                                             (float)uStack_b0 * local_158) - fVar40 <= 0.0) &&
                                           (0.0 <= (local_e8[0] * 0.0 + local_e8[1] * 0.0 +
                                                   local_158 * 0.0) - fVar40)) {
                                          local_b8 = CONCAT44(local_118[1],local_118[0]);
                                          uStack_b0 = CONCAT44(local_118[3],local_118[2]);
                                          local_a8 = CONCAT44(local_118[5],local_118[4]);
                                          local_98 = local_f8;
                                          uStack_a0 = uStack_100;
                                          if (local_1d8 == local_1dc) {
                                            uVar18 = 1;
                                            if (local_1d8 << 1 != 0) {
                                              uVar18 = (ulong)(local_1d8 << 1);
                                            }
                                            local_1d8 = (uint)uVar18;
                                            auVar33 = Memory::realloc_static
                                                                (local_1e8,uVar18 * 0x24,false);
                                            uVar24 = auVar33._8_8_;
                                            local_1e8 = auVar33._0_8_;
                                            local_208 = fVar28;
                                            if (local_1e8 == (Face3 *)0x0) {
LAB_0010e696:
                                              _err_print_error("push_back",
                                                               "./core/templates/local_vector.h",
                                                               0x41,
                                                  "FATAL: Condition \"!data\" is true.",
                                                  "Out of memory",0,0,uVar24);
                                              _err_flush_stdout();
                    /* WARNING: Does not return */
                                              pcVar7 = (code *)invalidInstructionException();
                                              (*pcVar7)();
                                            }
                                          }
                                          pFVar30 = local_1e8 + (ulong)local_1dc * 0x24;
                                          *(undefined8 *)pFVar30 = local_b8;
                                          *(ulong *)(pFVar30 + 8) = uStack_b0;
                                          auVar8._8_8_ = uStack_a0;
                                          auVar8._0_8_ = local_a8;
                                          *(undefined1 (*) [16])(pFVar30 + 0x10) = auVar8;
                                          *(float *)(pFVar30 + 0x20) = local_98;
                                          local_1dc = local_1dc + 1;
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                fVar28 = (float)((int)fVar28 + 3);
                piVar32 = piVar32 + 3;
              } while (fVar28 != (float)(iVar13 * 3));
              goto LAB_0010d2b1;
            }
          }
LAB_0010d2b6:
          piVar32 = local_170;
          LOCK();
          plVar1 = (long *)(local_170 + -4);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_170 = (int *)0x0;
            Memory::free_static(piVar32 + -4,false);
          }
LAB_0010d2dd:
          puVar25 = local_180;
          if (local_180 != (undefined8 *)0x0) {
            LOCK();
            plVar1 = local_180 + -2;
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_180 = (undefined8 *)0x0;
              Memory::free_static(puVar25 + -2,false);
            }
          }
        }
        Array::~Array((Array *)&local_190);
      }
    }
    puVar19 = (undefined8 *)puVar19[7];
  } while (puVar19 != (undefined8 *)0x0);
  if (local_1dc < 2) {
    _err_print_error(&_LC163,"scene/3d/gpu_particles_collision_3d.cpp",0x1d5,
                     "No faces detected during GPUParticlesCollisionSDF3D bake. Check whether there are visible meshes matching the bake mask within its extents."
                     ,0,0);
    if (bake_end_function != (code *)0x0) {
      (*bake_end_function)();
    }
    *in_RDI = 0;
  }
  else {
    uVar27 = 0;
    uVar20 = local_1dc - 1 >> 1 | local_1dc - 1;
    uVar20 = uVar20 >> 2 | uVar20;
    uVar20 = uVar20 | uVar20 >> 4;
    uVar20 = uVar20 | uVar20 >> 8;
    pFVar17 = (FacePos *)
              Memory::realloc_static((void *)0x0,(ulong)((uVar20 | uVar20 >> 0x10) + 1) << 4,false);
    auVar61._8_8_ = uStack_80;
    auVar61._0_8_ = local_88;
    if (pFVar17 == (FacePos *)0x0) {
      LocalVector<Face3,unsigned_int,false,false>::resize(uVar27);
LAB_0010e617:
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
    }
    else {
      pFVar26 = pFVar17;
      do {
        *(undefined8 *)pFVar26 = 0;
        pFVar23 = pFVar26 + 0x10;
        *(undefined4 *)(pFVar26 + 8) = 0;
        *(undefined4 *)(pFVar26 + 0xc) = 0;
        pFVar26 = pFVar23;
      } while (pFVar23 != pFVar17 + (ulong)local_1dc * 0x10);
      local_208 = fVar48 * *(float *)(in_RSI + 0x590);
      uVar20 = 0;
      auVar39._4_4_ = _UNK_00125fdc;
      auVar39._0_4_ = _LC2;
      auVar39._8_8_ = 0;
      pFVar26 = pFVar17;
      pFVar30 = local_1e8;
      do {
        uVar24 = *(undefined8 *)pFVar30;
        uVar2 = *(undefined8 *)(pFVar30 + 0xc);
        *(uint *)(pFVar26 + 0xc) = uVar20;
        uVar3 = *(undefined8 *)(pFVar30 + 0x18);
        *(float *)(pFVar26 + 8) =
             (*(float *)(pFVar30 + 8) + *(float *)(pFVar30 + 0x14) + *(float *)(pFVar30 + 0x20)) *
             _LC2;
        *(ulong *)pFVar26 =
             CONCAT44(((float)((ulong)uVar2 >> 0x20) + (float)((ulong)uVar24 >> 0x20) +
                      (float)((ulong)uVar3 >> 0x20)) * auVar39._4_4_,
                      ((float)uVar2 + (float)uVar24 + (float)uVar3) * auVar39._0_4_);
        if (0.0 < local_208) {
          _local_88 = auVar61;
          auVar61 = Face3::get_plane(pFVar30,0);
          auVar39._4_4_ = _UNK_00125fdc;
          auVar39._0_4_ = _LC2;
          auVar39._8_8_ = 0;
          uStack_80._0_4_ = auVar61._8_4_;
          fVar28 = _LC2 * local_208 * (float)uStack_80;
          *(ulong *)pFVar26 =
               CONCAT44((float)((ulong)*(undefined8 *)pFVar26 >> 0x20) -
                        auVar61._4_4_ * local_208 * _UNK_00125fdc,
                        (float)*(undefined8 *)pFVar26 - auVar61._0_4_ * local_208 * _LC2);
          *(float *)(pFVar26 + 8) = *(float *)(pFVar26 + 8) - fVar28;
        }
        pcVar7 = bake_step_function;
        uVar20 = uVar20 + 1;
        pFVar26 = pFVar26 + 0x10;
        pFVar30 = pFVar30 + 0x24;
      } while (uVar20 != local_1dc);
      _local_88 = auVar61;
      if (bake_step_function != (code *)0x0) {
        local_178 = 0;
        String::parse_latin1((String *)&local_178,"Creating BVH");
        (*pcVar7)(0,(String *)&local_178);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
      }
      local_188 = 0;
      local_180 = (undefined8 *)0x0;
      _create_bvh(in_RSI,(LocalVector *)&local_188,pFVar17,local_1dc,local_1e8,local_208);
      local_170 = (int *)0x0;
      lVar31 = (long)((int)local_13c * iStack_140 * local_144 * 4);
      if (lVar31 < 0) {
        _err_print_error("resize","./core/templates/cowdata.h",0x157,
                         "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
      }
      else if (lVar31 != 0) {
        uVar18 = lVar31 - 1U | lVar31 - 1U >> 1;
        uVar18 = uVar18 | uVar18 >> 2;
        uVar18 = uVar18 | uVar18 >> 4;
        uVar18 = uVar18 | uVar18 >> 8;
        puVar19 = (undefined8 *)Memory::alloc_static((uVar18 | uVar18 >> 0x10) + 0x11,false);
        if (puVar19 == (undefined8 *)0x0) goto LAB_0010e617;
        local_170 = (int *)(puVar19 + 2);
        *puVar19 = 1;
        puVar19[1] = lVar31;
      }
    }
    pcVar7 = bake_step_function;
    if (bake_step_function != (code *)0x0) {
      local_190 = 0;
      String::parse_latin1((String *)&local_190,"Baking SDF");
      (*pcVar7)(0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_190);
    }
    local_88 = (undefined1  [8])0x0;
    uStack_80 = 0;
    local_78 = 0.0;
    fStack_74 = 0.0;
    fStack_70 = 0.0;
    fStack_6c = 0.0;
    local_68 = 0.0;
    local_50 = 0.0;
    local_60 = (undefined1  [16])0x0;
    if ((local_170 != (int *)0x0) && (1 < *(ulong *)(local_170 + -4))) {
      if (local_170 == (int *)0x0) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)invalidInstructionException();
        (*pcVar7)();
      }
      __n = *(size_t *)(local_170 + -2);
      uVar18 = 0x10;
      if (__n != 0) {
        uVar18 = __n - 1 | __n - 1 >> 1;
        uVar18 = uVar18 | uVar18 >> 2;
        uVar18 = uVar18 | uVar18 >> 4;
        uVar18 = uVar18 | uVar18 >> 8;
        uVar18 = uVar18 | uVar18 >> 0x10;
        uVar18 = (uVar18 | uVar18 >> 0x20) + 0x11;
      }
      puVar19 = (undefined8 *)Memory::alloc_static(uVar18,false);
      piVar32 = local_170;
      if (puVar19 == (undefined8 *)0x0) {
        _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                         "Parameter \"mem_new\" is null.",0,0);
      }
      else {
        piVar21 = (int *)(puVar19 + 2);
        *puVar19 = 1;
        puVar19[1] = __n;
        memcpy(piVar21,local_170,__n);
        piVar11 = local_170;
        LOCK();
        plVar1 = (long *)(piVar32 + -4);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        local_170 = piVar21;
        if (*plVar1 == 0) {
          local_170 = (int *)0x0;
          Memory::free_static(piVar11 + -4,false);
          local_170 = piVar21;
        }
      }
    }
    uStack_80 = CONCAT44(iStack_140,local_144);
    local_68 = _LC2 * fVar48;
    local_78 = local_13c;
    fStack_70 = local_138 + local_68;
    fStack_6c = fStack_134 + local_68;
    local_68 = local_68 + local_130;
    local_60._8_8_ = local_1e8;
    local_60._0_8_ = local_180;
    local_88 = (undefined1  [8])local_170;
    fStack_74 = fVar48;
    local_50 = local_208;
    _compute_sdf(in_RSI,(ComputeSDFParams *)local_88);
    Image::create_from_data(&local_198,local_144,iStack_140 * (int)local_13c,0,8,&local_178);
    Image::convert(local_198,0xc);
    pIVar10 = local_198;
    pcVar7 = *(code **)(*(long *)local_198 + 0xa8);
    Variant::Variant((Variant *)&local_b8,(int)local_13c);
    StringName::StringName((StringName *)&local_190,"depth",false);
    (*pcVar7)(pIVar10,(StringName *)&local_190,(Variant *)&local_b8);
    if ((StringName::configured != '\0') && (local_190 != 0)) {
      StringName::unref();
    }
    if (Variant::needs_deinit[(int)(float)local_b8] != '\0') {
      Variant::_clear_internal();
    }
    if (bake_end_function != (code *)0x0) {
      (*bake_end_function)();
    }
    *in_RDI = 0;
    if (local_198 != (Image *)0x0) {
      *in_RDI = local_198;
      cVar12 = RefCounted::reference();
      if (cVar12 == '\0') {
        *in_RDI = 0;
      }
      if ((local_198 != (Image *)0x0) && (cVar12 = RefCounted::unreference(), cVar12 != '\0')) {
        memdelete<Image>(local_198);
      }
    }
    piVar32 = local_170;
    if (local_170 != (int *)0x0) {
      LOCK();
      plVar1 = (long *)(local_170 + -4);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_170 = (int *)0x0;
        Memory::free_static(piVar32 + -4,false);
      }
    }
    if (local_180 != (undefined8 *)0x0) {
      if ((int)local_188 != 0) {
        local_188 = local_188 & 0xffffffff00000000;
      }
      Memory::free_static(local_180,false);
    }
    Memory::free_static(pFVar17,false);
  }
  if (local_1e8 != (Face3 *)0x0) {
    Memory::free_static(local_1e8,false);
  }
LAB_0010e357:
  List<GPUParticlesCollisionSDF3D::PlotMesh,DefaultAllocator>::~List
            ((List<GPUParticlesCollisionSDF3D::PlotMesh,DefaultAllocator> *)&local_1a0);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return in_RDI;
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



/* WorkerThreadPool::BaseTemplateUserdata::callback() */

void WorkerThreadPool::BaseTemplateUserdata::callback(void)

{
  return;
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



/* GPUParticlesCollision3D::is_class_ptr(void*) const */

uint __thiscall GPUParticlesCollision3D::is_class_ptr(GPUParticlesCollision3D *this,void *param_1)

{
  return (uint)CONCAT71(0x125f,(undefined4 *)param_1 ==
                               &VisualInstance3D::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x125f,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x125f,(undefined4 *)param_1 == &Node3D::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x125f,(undefined4 *)param_1 == &Node::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x125f,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* GPUParticlesCollision3D::_getv(StringName const&, Variant&) const */

undefined8 GPUParticlesCollision3D::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* GPUParticlesCollision3D::_setv(StringName const&, Variant const&) */

undefined8 GPUParticlesCollision3D::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* GPUParticlesCollisionSphere3D::is_class_ptr(void*) const */

uint GPUParticlesCollisionSphere3D::is_class_ptr(void *param_1)

{
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  return (uint)CONCAT71(0x125f,in_RSI == &GPUParticlesCollision3D::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x125f,in_RSI == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x125f,in_RSI == &VisualInstance3D::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x125f,in_RSI == &Node3D::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x125f,in_RSI == &Node::get_class_ptr_static()::ptr) |
         CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
}



/* GPUParticlesCollisionSphere3D::_getv(StringName const&, Variant&) const */

undefined8 GPUParticlesCollisionSphere3D::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* GPUParticlesCollisionSphere3D::_setv(StringName const&, Variant const&) */

undefined8 GPUParticlesCollisionSphere3D::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* GPUParticlesCollisionBox3D::is_class_ptr(void*) const */

uint GPUParticlesCollisionBox3D::is_class_ptr(void *param_1)

{
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  return (uint)CONCAT71(0x125f,in_RSI == &GPUParticlesCollision3D::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x125f,in_RSI == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x125f,in_RSI == &VisualInstance3D::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x125f,in_RSI == &Node3D::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x125f,in_RSI == &Node::get_class_ptr_static()::ptr) |
         CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
}



/* GPUParticlesCollisionSDF3D::is_class_ptr(void*) const */

uint GPUParticlesCollisionSDF3D::is_class_ptr(void *param_1)

{
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  return (uint)CONCAT71(0x125f,in_RSI == &GPUParticlesCollision3D::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x125e,in_RSI == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x125f,in_RSI == &VisualInstance3D::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x125f,in_RSI == &Node3D::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x125f,in_RSI == &Node::get_class_ptr_static()::ptr) |
         CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
}



/* GPUParticlesCollisionHeightField3D::is_class_ptr(void*) const */

uint GPUParticlesCollisionHeightField3D::is_class_ptr(void *param_1)

{
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  return (uint)CONCAT71(0x125f,in_RSI == &GPUParticlesCollision3D::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x125e,in_RSI == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x125f,in_RSI == &VisualInstance3D::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x125f,in_RSI == &Node3D::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x125f,in_RSI == &Node::get_class_ptr_static()::ptr) |
         CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
}



/* GPUParticlesAttractor3D::is_class_ptr(void*) const */

uint __thiscall GPUParticlesAttractor3D::is_class_ptr(GPUParticlesAttractor3D *this,void *param_1)

{
  return (uint)CONCAT71(0x125f,(undefined4 *)param_1 ==
                               &VisualInstance3D::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x125e,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x125f,(undefined4 *)param_1 == &Node3D::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x125f,(undefined4 *)param_1 == &Node::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x125f,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* GPUParticlesAttractor3D::_getv(StringName const&, Variant&) const */

undefined8 GPUParticlesAttractor3D::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* GPUParticlesAttractor3D::_setv(StringName const&, Variant const&) */

undefined8 GPUParticlesAttractor3D::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* GPUParticlesAttractorSphere3D::is_class_ptr(void*) const */

uint GPUParticlesAttractorSphere3D::is_class_ptr(void *param_1)

{
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  return (uint)CONCAT71(0x125e,in_RSI == &GPUParticlesAttractor3D::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x125e,in_RSI == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x125f,in_RSI == &VisualInstance3D::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x125f,in_RSI == &Node3D::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x125f,in_RSI == &Node::get_class_ptr_static()::ptr) |
         CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
}



/* GPUParticlesAttractorSphere3D::_getv(StringName const&, Variant&) const */

undefined8 GPUParticlesAttractorSphere3D::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* GPUParticlesAttractorSphere3D::_setv(StringName const&, Variant const&) */

undefined8 GPUParticlesAttractorSphere3D::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* GPUParticlesAttractorBox3D::is_class_ptr(void*) const */

uint GPUParticlesAttractorBox3D::is_class_ptr(void *param_1)

{
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  return (uint)CONCAT71(0x125e,in_RSI == &GPUParticlesAttractor3D::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x125e,in_RSI == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x125f,in_RSI == &VisualInstance3D::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x125f,in_RSI == &Node3D::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x125f,in_RSI == &Node::get_class_ptr_static()::ptr) |
         CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
}



/* GPUParticlesAttractorVectorField3D::is_class_ptr(void*) const */

uint GPUParticlesAttractorVectorField3D::is_class_ptr(void *param_1)

{
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  return (uint)CONCAT71(0x125e,in_RSI == &GPUParticlesAttractor3D::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x125e,in_RSI == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x125f,in_RSI == &VisualInstance3D::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x125f,in_RSI == &Node3D::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x125f,in_RSI == &Node::get_class_ptr_static()::ptr) |
         CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
}



/* WorkerThreadPool::GroupUserData<GPUParticlesCollisionSDF3D, void
   (GPUParticlesCollisionSDF3D::*)(unsigned int, GPUParticlesCollisionSDF3D::ComputeSDFParams*),
   GPUParticlesCollisionSDF3D::ComputeSDFParams*>::~GroupUserData() */

void __thiscall
WorkerThreadPool::
GroupUserData<GPUParticlesCollisionSDF3D,void(GPUParticlesCollisionSDF3D::*)(unsigned_int,GPUParticlesCollisionSDF3D::ComputeSDFParams*),GPUParticlesCollisionSDF3D::ComputeSDFParams*>
::~GroupUserData(GroupUserData<GPUParticlesCollisionSDF3D,void(GPUParticlesCollisionSDF3D::*)(unsigned_int,GPUParticlesCollisionSDF3D::ComputeSDFParams*),GPUParticlesCollisionSDF3D::ComputeSDFParams*>
                 *this)

{
  return;
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



/* MethodBindTRC<GPUParticlesCollisionHeightField3D::UpdateMode>::_gen_argument_type(int) const */

undefined8
MethodBindTRC<GPUParticlesCollisionHeightField3D::UpdateMode>::_gen_argument_type(int param_1)

{
  return 2;
}



/* MethodBindTRC<GPUParticlesCollisionHeightField3D::UpdateMode>::get_argument_meta(int) const */

undefined8
MethodBindTRC<GPUParticlesCollisionHeightField3D::UpdateMode>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<GPUParticlesCollisionHeightField3D::UpdateMode>::_gen_argument_type(int) const */

char __thiscall
MethodBindT<GPUParticlesCollisionHeightField3D::UpdateMode>::_gen_argument_type
          (MethodBindT<GPUParticlesCollisionHeightField3D::UpdateMode> *this,int param_1)

{
  return (param_1 == 0) * '\x02';
}



/* MethodBindT<GPUParticlesCollisionHeightField3D::UpdateMode>::get_argument_meta(int) const */

undefined8
MethodBindT<GPUParticlesCollisionHeightField3D::UpdateMode>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<GPUParticlesCollisionHeightField3D::Resolution>::_gen_argument_type(int) const */

undefined8
MethodBindTRC<GPUParticlesCollisionHeightField3D::Resolution>::_gen_argument_type(int param_1)

{
  return 2;
}



/* MethodBindTRC<GPUParticlesCollisionHeightField3D::Resolution>::get_argument_meta(int) const */

undefined8
MethodBindTRC<GPUParticlesCollisionHeightField3D::Resolution>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<GPUParticlesCollisionHeightField3D::Resolution>::_gen_argument_type(int) const */

char __thiscall
MethodBindT<GPUParticlesCollisionHeightField3D::Resolution>::_gen_argument_type
          (MethodBindT<GPUParticlesCollisionHeightField3D::Resolution> *this,int param_1)

{
  return (param_1 == 0) * '\x02';
}



/* MethodBindT<GPUParticlesCollisionHeightField3D::Resolution>::get_argument_meta(int) const */

undefined8
MethodBindT<GPUParticlesCollisionHeightField3D::Resolution>::get_argument_meta(int param_1)

{
  return 0;
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



/* MethodBindTRC<Ref<Texture3D>>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<Ref<Texture3D>>::_gen_argument_type(int param_1)

{
  return 0x18;
}



/* MethodBindTRC<Ref<Texture3D>>::get_argument_meta(int) const */

undefined8 MethodBindTRC<Ref<Texture3D>>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<Ref<Texture3D> const&>::_gen_argument_type(int) const */

byte __thiscall
MethodBindT<Ref<Texture3D>const&>::_gen_argument_type
          (MethodBindT<Ref<Texture3D>const&> *this,int param_1)

{
  return -(param_1 == 0) & 0x18;
}



/* MethodBindT<Ref<Texture3D> const&>::get_argument_meta(int) const */

undefined8 MethodBindT<Ref<Texture3D>const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<GPUParticlesCollisionSDF3D::Resolution>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<GPUParticlesCollisionSDF3D::Resolution>::_gen_argument_type(int param_1)

{
  return 2;
}



/* MethodBindTRC<GPUParticlesCollisionSDF3D::Resolution>::get_argument_meta(int) const */

undefined8 MethodBindTRC<GPUParticlesCollisionSDF3D::Resolution>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<GPUParticlesCollisionSDF3D::Resolution>::_gen_argument_type(int) const */

char __thiscall
MethodBindT<GPUParticlesCollisionSDF3D::Resolution>::_gen_argument_type
          (MethodBindT<GPUParticlesCollisionSDF3D::Resolution> *this,int param_1)

{
  return (param_1 == 0) * '\x02';
}



/* MethodBindT<GPUParticlesCollisionSDF3D::Resolution>::get_argument_meta(int) const */

undefined8 MethodBindT<GPUParticlesCollisionSDF3D::Resolution>::get_argument_meta(int param_1)

{
  return 0;
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



/* WorkerThreadPool::GroupUserData<GPUParticlesCollisionSDF3D, void
   (GPUParticlesCollisionSDF3D::*)(unsigned int, GPUParticlesCollisionSDF3D::ComputeSDFParams*),
   GPUParticlesCollisionSDF3D::ComputeSDFParams*>::callback_indexed(unsigned int) */

void __thiscall
WorkerThreadPool::
GroupUserData<GPUParticlesCollisionSDF3D,void(GPUParticlesCollisionSDF3D::*)(unsigned_int,GPUParticlesCollisionSDF3D::ComputeSDFParams*),GPUParticlesCollisionSDF3D::ComputeSDFParams*>
::callback_indexed(GroupUserData<GPUParticlesCollisionSDF3D,void(GPUParticlesCollisionSDF3D::*)(unsigned_int,GPUParticlesCollisionSDF3D::ComputeSDFParams*),GPUParticlesCollisionSDF3D::ComputeSDFParams*>
                   *this,uint param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(this + 0x10);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)(*(long *)(this + 0x18) + *(long *)(this + 8)) + -1);
  }
                    /* WARNING: Could not recover jumptable at 0x0010eec4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            ((long *)(*(long *)(this + 0x18) + *(long *)(this + 8)),param_1,
             *(undefined8 *)(this + 0x20),UNRECOVERED_JUMPTABLE);
  return;
}



/* WorkerThreadPool::GroupUserData<GPUParticlesCollisionSDF3D, void
   (GPUParticlesCollisionSDF3D::*)(unsigned int, GPUParticlesCollisionSDF3D::ComputeSDFParams*),
   GPUParticlesCollisionSDF3D::ComputeSDFParams*>::~GroupUserData() */

void __thiscall
WorkerThreadPool::
GroupUserData<GPUParticlesCollisionSDF3D,void(GPUParticlesCollisionSDF3D::*)(unsigned_int,GPUParticlesCollisionSDF3D::ComputeSDFParams*),GPUParticlesCollisionSDF3D::ComputeSDFParams*>
::~GroupUserData(GroupUserData<GPUParticlesCollisionSDF3D,void(GPUParticlesCollisionSDF3D::*)(unsigned_int,GPUParticlesCollisionSDF3D::ComputeSDFParams*),GPUParticlesCollisionSDF3D::ComputeSDFParams*>
                 *this)

{
  operator_delete(this,0x28);
  return;
}



/* MethodBindT<unsigned int>::~MethodBindT() */

void __thiscall MethodBindT<unsigned_int>::~MethodBindT(MethodBindT<unsigned_int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001257b0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<unsigned int>::~MethodBindT() */

void __thiscall MethodBindT<unsigned_int>::~MethodBindT(MethodBindT<unsigned_int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001257b0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<unsigned int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<unsigned_int>::~MethodBindTRC(MethodBindTRC<unsigned_int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00125810;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<unsigned int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<unsigned_int>::~MethodBindTRC(MethodBindTRC<unsigned_int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00125810;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<float>::~MethodBindT() */

void __thiscall MethodBindT<float>::~MethodBindT(MethodBindT<float> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00125870;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<float>::~MethodBindT() */

void __thiscall MethodBindT<float>::~MethodBindT(MethodBindT<float> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00125870;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<float>::~MethodBindTRC() */

void __thiscall MethodBindTRC<float>::~MethodBindTRC(MethodBindTRC<float> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001258d0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<float>::~MethodBindTRC() */

void __thiscall MethodBindTRC<float>::~MethodBindTRC(MethodBindTRC<float> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001258d0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Vector3 const&>::~MethodBindT() */

void __thiscall MethodBindT<Vector3_const&>::~MethodBindT(MethodBindT<Vector3_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00125930;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Vector3 const&>::~MethodBindT() */

void __thiscall MethodBindT<Vector3_const&>::~MethodBindT(MethodBindT<Vector3_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00125930;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Vector3>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Vector3>::~MethodBindTRC(MethodBindTRC<Vector3> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00125990;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Vector3>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Vector3>::~MethodBindTRC(MethodBindTRC<Vector3> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00125990;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<GPUParticlesCollisionSDF3D::Resolution>::~MethodBindT() */

void __thiscall
MethodBindT<GPUParticlesCollisionSDF3D::Resolution>::~MethodBindT
          (MethodBindT<GPUParticlesCollisionSDF3D::Resolution> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001259f0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<GPUParticlesCollisionSDF3D::Resolution>::~MethodBindT() */

void __thiscall
MethodBindT<GPUParticlesCollisionSDF3D::Resolution>::~MethodBindT
          (MethodBindT<GPUParticlesCollisionSDF3D::Resolution> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001259f0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<GPUParticlesCollisionSDF3D::Resolution>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<GPUParticlesCollisionSDF3D::Resolution>::~MethodBindTRC
          (MethodBindTRC<GPUParticlesCollisionSDF3D::Resolution> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00125a50;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<GPUParticlesCollisionSDF3D::Resolution>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<GPUParticlesCollisionSDF3D::Resolution>::~MethodBindTRC
          (MethodBindTRC<GPUParticlesCollisionSDF3D::Resolution> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00125a50;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Ref<Texture3D> const&>::~MethodBindT() */

void __thiscall
MethodBindT<Ref<Texture3D>const&>::~MethodBindT(MethodBindT<Ref<Texture3D>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00125ab0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Ref<Texture3D> const&>::~MethodBindT() */

void __thiscall
MethodBindT<Ref<Texture3D>const&>::~MethodBindT(MethodBindT<Ref<Texture3D>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00125ab0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Ref<Texture3D>>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Ref<Texture3D>>::~MethodBindTRC(MethodBindTRC<Ref<Texture3D>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00125b10;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Ref<Texture3D>>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Ref<Texture3D>>::~MethodBindTRC(MethodBindTRC<Ref<Texture3D>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00125b10;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<int, bool>::~MethodBindT() */

void __thiscall MethodBindT<int,bool>::~MethodBindT(MethodBindT<int,bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00125b70;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<int, bool>::~MethodBindT() */

void __thiscall MethodBindT<int,bool>::~MethodBindT(MethodBindT<int,bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00125b70;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<bool, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool,int>::~MethodBindTRC(MethodBindTRC<bool,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00125bd0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<bool, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool,int>::~MethodBindTRC(MethodBindTRC<bool,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00125bd0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<GPUParticlesCollisionHeightField3D::Resolution>::~MethodBindT() */

void __thiscall
MethodBindT<GPUParticlesCollisionHeightField3D::Resolution>::~MethodBindT
          (MethodBindT<GPUParticlesCollisionHeightField3D::Resolution> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00125c30;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<GPUParticlesCollisionHeightField3D::Resolution>::~MethodBindT() */

void __thiscall
MethodBindT<GPUParticlesCollisionHeightField3D::Resolution>::~MethodBindT
          (MethodBindT<GPUParticlesCollisionHeightField3D::Resolution> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00125c30;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<GPUParticlesCollisionHeightField3D::Resolution>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<GPUParticlesCollisionHeightField3D::Resolution>::~MethodBindTRC
          (MethodBindTRC<GPUParticlesCollisionHeightField3D::Resolution> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00125c90;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<GPUParticlesCollisionHeightField3D::Resolution>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<GPUParticlesCollisionHeightField3D::Resolution>::~MethodBindTRC
          (MethodBindTRC<GPUParticlesCollisionHeightField3D::Resolution> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00125c90;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<GPUParticlesCollisionHeightField3D::UpdateMode>::~MethodBindT() */

void __thiscall
MethodBindT<GPUParticlesCollisionHeightField3D::UpdateMode>::~MethodBindT
          (MethodBindT<GPUParticlesCollisionHeightField3D::UpdateMode> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00125cf0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<GPUParticlesCollisionHeightField3D::UpdateMode>::~MethodBindT() */

void __thiscall
MethodBindT<GPUParticlesCollisionHeightField3D::UpdateMode>::~MethodBindT
          (MethodBindT<GPUParticlesCollisionHeightField3D::UpdateMode> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00125cf0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<GPUParticlesCollisionHeightField3D::UpdateMode>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<GPUParticlesCollisionHeightField3D::UpdateMode>::~MethodBindTRC
          (MethodBindTRC<GPUParticlesCollisionHeightField3D::UpdateMode> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00125d50;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<GPUParticlesCollisionHeightField3D::UpdateMode>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<GPUParticlesCollisionHeightField3D::UpdateMode>::~MethodBindTRC
          (MethodBindTRC<GPUParticlesCollisionHeightField3D::UpdateMode> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00125d50;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<bool>::~MethodBindT() */

void __thiscall MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00125db0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<bool>::~MethodBindT() */

void __thiscall MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00125db0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<bool>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00125e10;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<bool>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00125e10;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* GPUParticlesCollision3D::_property_get_revertv(StringName const&, Variant&) const */

undefined8 GPUParticlesCollision3D::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_0012d010 != Object::_property_get_revert) {
    uVar1 = Node3D::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* GPUParticlesCollisionSphere3D::_property_get_revertv(StringName const&, Variant&) const */

undefined8
GPUParticlesCollisionSphere3D::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_0012d010 != Object::_property_get_revert) {
    uVar1 = Node3D::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* GPUParticlesCollisionBox3D::_property_get_revertv(StringName const&, Variant&) const */

undefined8 GPUParticlesCollisionBox3D::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_0012d010 != Object::_property_get_revert) {
    uVar1 = Node3D::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* GPUParticlesCollisionSDF3D::_property_get_revertv(StringName const&, Variant&) const */

undefined8 GPUParticlesCollisionSDF3D::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_0012d010 != Object::_property_get_revert) {
    uVar1 = Node3D::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* GPUParticlesCollisionHeightField3D::_property_get_revertv(StringName const&, Variant&) const */

undefined8
GPUParticlesCollisionHeightField3D::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_0012d010 != Object::_property_get_revert) {
    uVar1 = Node3D::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* GPUParticlesAttractor3D::_property_get_revertv(StringName const&, Variant&) const */

undefined8 GPUParticlesAttractor3D::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_0012d010 != Object::_property_get_revert) {
    uVar1 = Node3D::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* GPUParticlesAttractorSphere3D::_property_get_revertv(StringName const&, Variant&) const */

undefined8
GPUParticlesAttractorSphere3D::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_0012d010 != Object::_property_get_revert) {
    uVar1 = Node3D::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* GPUParticlesAttractorBox3D::_property_get_revertv(StringName const&, Variant&) const */

undefined8 GPUParticlesAttractorBox3D::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_0012d010 != Object::_property_get_revert) {
    uVar1 = Node3D::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* GPUParticlesAttractorVectorField3D::_property_get_revertv(StringName const&, Variant&) const */

undefined8
GPUParticlesAttractorVectorField3D::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_0012d010 != Object::_property_get_revert) {
    uVar1 = Node3D::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* GPUParticlesCollision3D::_property_can_revertv(StringName const&) const */

undefined8 GPUParticlesCollision3D::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_0012d018 != Object::_property_can_revert) {
    uVar1 = Node3D::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* GPUParticlesCollisionSphere3D::_property_can_revertv(StringName const&) const */

undefined8 GPUParticlesCollisionSphere3D::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_0012d018 != Object::_property_can_revert) {
    uVar1 = Node3D::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* GPUParticlesCollisionBox3D::_property_can_revertv(StringName const&) const */

undefined8 GPUParticlesCollisionBox3D::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_0012d018 != Object::_property_can_revert) {
    uVar1 = Node3D::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* GPUParticlesCollisionSDF3D::_property_can_revertv(StringName const&) const */

undefined8 GPUParticlesCollisionSDF3D::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_0012d018 != Object::_property_can_revert) {
    uVar1 = Node3D::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* GPUParticlesCollisionHeightField3D::_property_can_revertv(StringName const&) const */

undefined8 GPUParticlesCollisionHeightField3D::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_0012d018 != Object::_property_can_revert) {
    uVar1 = Node3D::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* GPUParticlesAttractor3D::_property_can_revertv(StringName const&) const */

undefined8 GPUParticlesAttractor3D::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_0012d018 != Object::_property_can_revert) {
    uVar1 = Node3D::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* GPUParticlesAttractorSphere3D::_property_can_revertv(StringName const&) const */

undefined8 GPUParticlesAttractorSphere3D::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_0012d018 != Object::_property_can_revert) {
    uVar1 = Node3D::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* GPUParticlesAttractorBox3D::_property_can_revertv(StringName const&) const */

undefined8 GPUParticlesAttractorBox3D::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_0012d018 != Object::_property_can_revert) {
    uVar1 = Node3D::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* GPUParticlesAttractorVectorField3D::_property_can_revertv(StringName const&) const */

undefined8 GPUParticlesAttractorVectorField3D::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_0012d018 != Object::_property_can_revert) {
    uVar1 = Node3D::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* GPUParticlesAttractorBox3D::_get_class_namev() const */

undefined8 * GPUParticlesAttractorBox3D::_get_class_namev(void)

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
LAB_00110243:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00110243;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"GPUParticlesAttractorBox3D")
      ;
      goto LAB_001102ae;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"GPUParticlesAttractorBox3D");
LAB_001102ae:
  return &_get_class_namev()::_class_name_static;
}



/* GPUParticlesAttractorVectorField3D::_validate_propertyv(PropertyInfo&) const */

void GPUParticlesAttractorVectorField3D::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  Node3D::_validate_property(param_1);
  if ((code *)PTR__validate_property_0012d020 == Node3D::_validate_property) {
    return;
  }
  VisualInstance3D::_validate_property(param_1);
  return;
}



/* GPUParticlesAttractor3D::_validate_propertyv(PropertyInfo&) const */

void GPUParticlesAttractor3D::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  Node3D::_validate_property(param_1);
  if ((code *)PTR__validate_property_0012d020 == Node3D::_validate_property) {
    return;
  }
  VisualInstance3D::_validate_property(param_1);
  return;
}



/* GPUParticlesCollisionBox3D::_validate_propertyv(PropertyInfo&) const */

void GPUParticlesCollisionBox3D::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  Node3D::_validate_property(param_1);
  if ((code *)PTR__validate_property_0012d020 == Node3D::_validate_property) {
    return;
  }
  VisualInstance3D::_validate_property(param_1);
  return;
}



/* GPUParticlesCollisionSDF3D::_validate_propertyv(PropertyInfo&) const */

void GPUParticlesCollisionSDF3D::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  Node3D::_validate_property(param_1);
  if ((code *)PTR__validate_property_0012d020 == Node3D::_validate_property) {
    return;
  }
  VisualInstance3D::_validate_property(param_1);
  return;
}



/* GPUParticlesCollision3D::_validate_propertyv(PropertyInfo&) const */

void GPUParticlesCollision3D::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  Node3D::_validate_property(param_1);
  if ((code *)PTR__validate_property_0012d020 == Node3D::_validate_property) {
    return;
  }
  VisualInstance3D::_validate_property(param_1);
  return;
}



/* GPUParticlesAttractorSphere3D::_validate_propertyv(PropertyInfo&) const */

void GPUParticlesAttractorSphere3D::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  Node3D::_validate_property(param_1);
  if ((code *)PTR__validate_property_0012d020 == Node3D::_validate_property) {
    return;
  }
  VisualInstance3D::_validate_property(param_1);
  return;
}



/* GPUParticlesCollisionSphere3D::_validate_propertyv(PropertyInfo&) const */

void GPUParticlesCollisionSphere3D::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  Node3D::_validate_property(param_1);
  if ((code *)PTR__validate_property_0012d020 == Node3D::_validate_property) {
    return;
  }
  VisualInstance3D::_validate_property(param_1);
  return;
}



/* GPUParticlesCollisionHeightField3D::_validate_propertyv(PropertyInfo&) const */

void GPUParticlesCollisionHeightField3D::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  Node3D::_validate_property(param_1);
  if ((code *)PTR__validate_property_0012d020 == Node3D::_validate_property) {
    return;
  }
  VisualInstance3D::_validate_property(param_1);
  return;
}



/* GPUParticlesAttractorBox3D::_validate_propertyv(PropertyInfo&) const */

void GPUParticlesAttractorBox3D::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  Node3D::_validate_property(param_1);
  if ((code *)PTR__validate_property_0012d020 == Node3D::_validate_property) {
    return;
  }
  VisualInstance3D::_validate_property(param_1);
  return;
}



/* GPUParticlesAttractorBox3D::_setv(StringName const&, Variant const&) */

ulong GPUParticlesAttractorBox3D::_setv(StringName *param_1,Variant *param_2)

{
  ulong uVar1;
  Variant *in_RDX;
  long in_FS_OFFSET;
  undefined8 uVar2;
  float in_XMM1_Da;
  undefined8 local_40;
  float local_38;
  long local_20;
  float fVar3;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = StringName::operator==((StringName *)param_2,"extents");
  if ((char)uVar1 != '\0') {
    uVar2 = Variant::operator_cast_to_Vector3(in_RDX);
    fVar3 = (float)((ulong)uVar2 >> 0x20);
    local_38 = in_XMM1_Da + in_XMM1_Da;
    local_40 = CONCAT44(fVar3 + fVar3,(float)uVar2 + (float)uVar2);
    set_size((GPUParticlesAttractorBox3D *)param_1,(Vector3 *)&local_40);
    uVar1 = uVar1 & 0xff;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GPUParticlesCollisionSDF3D::_setv(StringName const&, Variant const&) */

ulong GPUParticlesCollisionSDF3D::_setv(StringName *param_1,Variant *param_2)

{
  ulong uVar1;
  Variant *in_RDX;
  long in_FS_OFFSET;
  undefined8 uVar2;
  float in_XMM1_Da;
  undefined8 local_40;
  float local_38;
  long local_20;
  float fVar3;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = StringName::operator==((StringName *)param_2,"extents");
  if ((char)uVar1 != '\0') {
    uVar2 = Variant::operator_cast_to_Vector3(in_RDX);
    fVar3 = (float)((ulong)uVar2 >> 0x20);
    local_38 = in_XMM1_Da + in_XMM1_Da;
    local_40 = CONCAT44(fVar3 + fVar3,(float)uVar2 + (float)uVar2);
    set_size((GPUParticlesCollisionSDF3D *)param_1,(Vector3 *)&local_40);
    uVar1 = uVar1 & 0xff;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GPUParticlesCollisionBox3D::_setv(StringName const&, Variant const&) */

ulong GPUParticlesCollisionBox3D::_setv(StringName *param_1,Variant *param_2)

{
  ulong uVar1;
  Variant *in_RDX;
  long in_FS_OFFSET;
  undefined8 uVar2;
  float in_XMM1_Da;
  undefined8 local_40;
  float local_38;
  long local_20;
  float fVar3;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = StringName::operator==((StringName *)param_2,"extents");
  if ((char)uVar1 != '\0') {
    uVar2 = Variant::operator_cast_to_Vector3(in_RDX);
    fVar3 = (float)((ulong)uVar2 >> 0x20);
    local_38 = in_XMM1_Da + in_XMM1_Da;
    local_40 = CONCAT44(fVar3 + fVar3,(float)uVar2 + (float)uVar2);
    set_size((GPUParticlesCollisionBox3D *)param_1,(Vector3 *)&local_40);
    uVar1 = uVar1 & 0xff;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GPUParticlesCollisionHeightField3D::_setv(StringName const&, Variant const&) */

ulong GPUParticlesCollisionHeightField3D::_setv(StringName *param_1,Variant *param_2)

{
  ulong uVar1;
  Variant *in_RDX;
  long in_FS_OFFSET;
  undefined8 uVar2;
  float in_XMM1_Da;
  undefined8 local_40;
  float local_38;
  long local_20;
  float fVar3;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = StringName::operator==((StringName *)param_2,"extents");
  if ((char)uVar1 != '\0') {
    uVar2 = Variant::operator_cast_to_Vector3(in_RDX);
    fVar3 = (float)((ulong)uVar2 >> 0x20);
    local_38 = in_XMM1_Da + in_XMM1_Da;
    local_40 = CONCAT44(fVar3 + fVar3,(float)uVar2 + (float)uVar2);
    set_size((GPUParticlesCollisionHeightField3D *)param_1,(Vector3 *)&local_40);
    uVar1 = uVar1 & 0xff;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GPUParticlesAttractorVectorField3D::_setv(StringName const&, Variant const&) */

ulong GPUParticlesAttractorVectorField3D::_setv(StringName *param_1,Variant *param_2)

{
  ulong uVar1;
  Variant *in_RDX;
  long in_FS_OFFSET;
  undefined8 uVar2;
  float in_XMM1_Da;
  undefined8 local_40;
  float local_38;
  long local_20;
  float fVar3;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = StringName::operator==((StringName *)param_2,"extents");
  if ((char)uVar1 != '\0') {
    uVar2 = Variant::operator_cast_to_Vector3(in_RDX);
    fVar3 = (float)((ulong)uVar2 >> 0x20);
    local_38 = in_XMM1_Da + in_XMM1_Da;
    local_40 = CONCAT44(fVar3 + fVar3,(float)uVar2 + (float)uVar2);
    set_size((GPUParticlesAttractorVectorField3D *)param_1,(Vector3 *)&local_40);
    uVar1 = uVar1 & 0xff;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GPUParticlesAttractor3D::_notificationv(int, bool) */

void __thiscall
GPUParticlesAttractor3D::_notificationv(GPUParticlesAttractor3D *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_0012d028 != Node3D::_notification) {
      VisualInstance3D::_notification(iVar1);
    }
    Node3D::_notification(iVar1);
    Node::_notification(iVar1);
    return;
  }
  Node::_notification(iVar1);
  Node3D::_notification(iVar1);
  if ((code *)PTR__notification_0012d028 == Node3D::_notification) {
    return;
  }
  VisualInstance3D::_notification(iVar1);
  return;
}



/* GPUParticlesCollision3D::_notificationv(int, bool) */

void __thiscall
GPUParticlesCollision3D::_notificationv(GPUParticlesCollision3D *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_0012d028 != Node3D::_notification) {
      VisualInstance3D::_notification(iVar1);
    }
    Node3D::_notification(iVar1);
    Node::_notification(iVar1);
    return;
  }
  Node::_notification(iVar1);
  Node3D::_notification(iVar1);
  if ((code *)PTR__notification_0012d028 == Node3D::_notification) {
    return;
  }
  VisualInstance3D::_notification(iVar1);
  return;
}



/* GPUParticlesAttractorBox3D::_notificationv(int, bool) */

void __thiscall
GPUParticlesAttractorBox3D::_notificationv
          (GPUParticlesAttractorBox3D *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_0012d028 != Node3D::_notification) {
      VisualInstance3D::_notification(iVar1);
    }
    Node3D::_notification(iVar1);
    Node::_notification(iVar1);
    return;
  }
  Node::_notification(iVar1);
  Node3D::_notification(iVar1);
  if ((code *)PTR__notification_0012d028 == Node3D::_notification) {
    return;
  }
  VisualInstance3D::_notification(iVar1);
  return;
}



/* GPUParticlesCollisionSDF3D::_notificationv(int, bool) */

void __thiscall
GPUParticlesCollisionSDF3D::_notificationv
          (GPUParticlesCollisionSDF3D *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_0012d028 != Node3D::_notification) {
      VisualInstance3D::_notification(iVar1);
    }
    Node3D::_notification(iVar1);
    Node::_notification(iVar1);
    return;
  }
  Node::_notification(iVar1);
  Node3D::_notification(iVar1);
  if ((code *)PTR__notification_0012d028 == Node3D::_notification) {
    return;
  }
  VisualInstance3D::_notification(iVar1);
  return;
}



/* GPUParticlesAttractorSphere3D::_notificationv(int, bool) */

void __thiscall
GPUParticlesAttractorSphere3D::_notificationv
          (GPUParticlesAttractorSphere3D *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_0012d028 != Node3D::_notification) {
      VisualInstance3D::_notification(iVar1);
    }
    Node3D::_notification(iVar1);
    Node::_notification(iVar1);
    return;
  }
  Node::_notification(iVar1);
  Node3D::_notification(iVar1);
  if ((code *)PTR__notification_0012d028 == Node3D::_notification) {
    return;
  }
  VisualInstance3D::_notification(iVar1);
  return;
}



/* GPUParticlesCollisionSphere3D::_notificationv(int, bool) */

void __thiscall
GPUParticlesCollisionSphere3D::_notificationv
          (GPUParticlesCollisionSphere3D *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_0012d028 != Node3D::_notification) {
      VisualInstance3D::_notification(iVar1);
    }
    Node3D::_notification(iVar1);
    Node::_notification(iVar1);
    return;
  }
  Node::_notification(iVar1);
  Node3D::_notification(iVar1);
  if ((code *)PTR__notification_0012d028 == Node3D::_notification) {
    return;
  }
  VisualInstance3D::_notification(iVar1);
  return;
}



/* GPUParticlesCollisionBox3D::_notificationv(int, bool) */

void __thiscall
GPUParticlesCollisionBox3D::_notificationv
          (GPUParticlesCollisionBox3D *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_0012d028 != Node3D::_notification) {
      VisualInstance3D::_notification(iVar1);
    }
    Node3D::_notification(iVar1);
    Node::_notification(iVar1);
    return;
  }
  Node::_notification(iVar1);
  Node3D::_notification(iVar1);
  if ((code *)PTR__notification_0012d028 == Node3D::_notification) {
    return;
  }
  VisualInstance3D::_notification(iVar1);
  return;
}



/* GPUParticlesAttractorVectorField3D::_notificationv(int, bool) */

void __thiscall
GPUParticlesAttractorVectorField3D::_notificationv
          (GPUParticlesAttractorVectorField3D *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_0012d028 != Node3D::_notification) {
      VisualInstance3D::_notification(iVar1);
    }
    Node3D::_notification(iVar1);
    Node::_notification(iVar1);
    return;
  }
  Node::_notification(iVar1);
  Node3D::_notification(iVar1);
  if ((code *)PTR__notification_0012d028 == Node3D::_notification) {
    return;
  }
  VisualInstance3D::_notification(iVar1);
  return;
}



/* Image::~Image() */

void __thiscall Image::~Image(Image *this)

{
  long *plVar1;
  long lVar2;
  
  *(code **)this = operator_new;
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



/* GPUParticlesCollisionHeightField3D::_notificationv(int, bool) */

void __thiscall
GPUParticlesCollisionHeightField3D::_notificationv
          (GPUParticlesCollisionHeightField3D *this,int param_1,bool param_2)

{
  long *plVar1;
  int iVar2;
  
  iVar2 = (int)this;
  if (param_2) {
    if (param_1 == 0x19) {
      _notification(iVar2);
      goto LAB_00111199;
    }
    if (param_1 != 2000) goto LAB_00111199;
  }
  else {
    Node::_notification(iVar2);
    Node3D::_notification(iVar2);
    if ((code *)PTR__notification_0012d028 != Node3D::_notification) {
      VisualInstance3D::_notification(iVar2);
    }
    if (param_1 == 0x19) {
      _notification(iVar2);
      return;
    }
    if (param_1 != 2000) {
      return;
    }
  }
  plVar1 = (long *)RenderingServer::get_singleton();
  (**(code **)(*plVar1 + 0x8e0))(plVar1,*(undefined8 *)(this + 0x568));
  if (!param_2) {
    return;
  }
LAB_00111199:
  if ((code *)PTR__notification_0012d028 != Node3D::_notification) {
    VisualInstance3D::_notification(iVar2);
  }
  Node3D::_notification(iVar2);
  Node::_notification(iVar2);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GPUParticlesCollisionBox3D::_getv(StringName const&, Variant&) const */

ulong __thiscall
GPUParticlesCollisionBox3D::_getv
          (GPUParticlesCollisionBox3D *this,StringName *param_1,Variant *param_2)

{
  ulong uVar1;
  long in_FS_OFFSET;
  undefined8 local_48;
  float local_40;
  undefined4 local_38 [2];
  undefined8 local_30;
  undefined8 uStack_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = StringName::operator==(param_1,"extents");
  if ((char)uVar1 != '\0') {
    local_40 = _LC2 * *(float *)(this + 0x578);
    local_48 = CONCAT44((float)((ulong)*(undefined8 *)(this + 0x570) >> 0x20) * _UNK_00125fdc,
                        (float)*(undefined8 *)(this + 0x570) * _LC2);
    Variant::Variant((Variant *)local_38,(Vector3 *)&local_48);
    if (Variant::needs_deinit[*(int *)param_2] != '\0') {
      Variant::_clear_internal();
    }
    uVar1 = uVar1 & 0xff;
    *(undefined4 *)param_2 = local_38[0];
    *(undefined8 *)(param_2 + 8) = local_30;
    *(undefined8 *)(param_2 + 0x10) = uStack_28;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GPUParticlesAttractorBox3D::_getv(StringName const&, Variant&) const */

ulong __thiscall
GPUParticlesAttractorBox3D::_getv
          (GPUParticlesAttractorBox3D *this,StringName *param_1,Variant *param_2)

{
  ulong uVar1;
  long in_FS_OFFSET;
  undefined8 local_48;
  float local_40;
  undefined4 local_38 [2];
  undefined8 local_30;
  undefined8 uStack_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = StringName::operator==(param_1,"extents");
  if ((char)uVar1 != '\0') {
    local_40 = _LC2 * *(float *)(this + 0x584);
    local_48 = CONCAT44((float)((ulong)*(undefined8 *)(this + 0x57c) >> 0x20) * _UNK_00125fdc,
                        (float)*(undefined8 *)(this + 0x57c) * _LC2);
    Variant::Variant((Variant *)local_38,(Vector3 *)&local_48);
    if (Variant::needs_deinit[*(int *)param_2] != '\0') {
      Variant::_clear_internal();
    }
    uVar1 = uVar1 & 0xff;
    *(undefined4 *)param_2 = local_38[0];
    *(undefined8 *)(param_2 + 8) = local_30;
    *(undefined8 *)(param_2 + 0x10) = uStack_28;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GPUParticlesCollisionSDF3D::_getv(StringName const&, Variant&) const */

ulong __thiscall
GPUParticlesCollisionSDF3D::_getv
          (GPUParticlesCollisionSDF3D *this,StringName *param_1,Variant *param_2)

{
  ulong uVar1;
  long in_FS_OFFSET;
  undefined8 local_48;
  float local_40;
  undefined4 local_38 [2];
  undefined8 local_30;
  undefined8 uStack_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = StringName::operator==(param_1,"extents");
  if ((char)uVar1 != '\0') {
    local_40 = _LC2 * *(float *)(this + 0x578);
    local_48 = CONCAT44((float)((ulong)*(undefined8 *)(this + 0x570) >> 0x20) * _UNK_00125fdc,
                        (float)*(undefined8 *)(this + 0x570) * _LC2);
    Variant::Variant((Variant *)local_38,(Vector3 *)&local_48);
    if (Variant::needs_deinit[*(int *)param_2] != '\0') {
      Variant::_clear_internal();
    }
    uVar1 = uVar1 & 0xff;
    *(undefined4 *)param_2 = local_38[0];
    *(undefined8 *)(param_2 + 8) = local_30;
    *(undefined8 *)(param_2 + 0x10) = uStack_28;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GPUParticlesCollisionHeightField3D::_getv(StringName const&, Variant&) const */

ulong __thiscall
GPUParticlesCollisionHeightField3D::_getv
          (GPUParticlesCollisionHeightField3D *this,StringName *param_1,Variant *param_2)

{
  ulong uVar1;
  long in_FS_OFFSET;
  undefined8 local_48;
  float local_40;
  undefined4 local_38 [2];
  undefined8 local_30;
  undefined8 uStack_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = StringName::operator==(param_1,"extents");
  if ((char)uVar1 != '\0') {
    local_40 = _LC2 * *(float *)(this + 0x57c);
    local_48 = CONCAT44((float)((ulong)*(undefined8 *)(this + 0x574) >> 0x20) * _UNK_00125fdc,
                        (float)*(undefined8 *)(this + 0x574) * _LC2);
    Variant::Variant((Variant *)local_38,(Vector3 *)&local_48);
    if (Variant::needs_deinit[*(int *)param_2] != '\0') {
      Variant::_clear_internal();
    }
    uVar1 = uVar1 & 0xff;
    *(undefined4 *)param_2 = local_38[0];
    *(undefined8 *)(param_2 + 8) = local_30;
    *(undefined8 *)(param_2 + 0x10) = uStack_28;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GPUParticlesAttractorVectorField3D::_getv(StringName const&, Variant&) const */

ulong __thiscall
GPUParticlesAttractorVectorField3D::_getv
          (GPUParticlesAttractorVectorField3D *this,StringName *param_1,Variant *param_2)

{
  ulong uVar1;
  long in_FS_OFFSET;
  undefined8 local_48;
  float local_40;
  undefined4 local_38 [2];
  undefined8 local_30;
  undefined8 uStack_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = StringName::operator==(param_1,"extents");
  if ((char)uVar1 != '\0') {
    local_40 = _LC2 * *(float *)(this + 0x584);
    local_48 = CONCAT44((float)((ulong)*(undefined8 *)(this + 0x57c) >> 0x20) * _UNK_00125fdc,
                        (float)*(undefined8 *)(this + 0x57c) * _LC2);
    Variant::Variant((Variant *)local_38,(Vector3 *)&local_48);
    if (Variant::needs_deinit[*(int *)param_2] != '\0') {
      Variant::_clear_internal();
    }
    uVar1 = uVar1 & 0xff;
    *(undefined4 *)param_2 = local_38[0];
    *(undefined8 *)(param_2 + 8) = local_30;
    *(undefined8 *)(param_2 + 0x10) = uStack_28;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GPUParticlesAttractorSphere3D::_get_class_namev() const */

undefined8 * GPUParticlesAttractorSphere3D::_get_class_namev(void)

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
LAB_00111743:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00111743;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,
                 "GPUParticlesAttractorSphere3D");
      goto LAB_001117ae;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"GPUParticlesAttractorSphere3D");
LAB_001117ae:
  return &_get_class_namev()::_class_name_static;
}



/* GPUParticlesAttractorVectorField3D::_get_class_namev() const */

undefined8 * GPUParticlesAttractorVectorField3D::_get_class_namev(void)

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
LAB_00111843:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00111843;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,
                 "GPUParticlesAttractorVectorField3D");
      goto LAB_001118ae;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,
             "GPUParticlesAttractorVectorField3D");
LAB_001118ae:
  return &_get_class_namev()::_class_name_static;
}



/* GPUParticlesCollision3D::_get_class_namev() const */

undefined8 * GPUParticlesCollision3D::_get_class_namev(void)

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
LAB_00111933:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00111933;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"GPUParticlesCollision3D");
      goto LAB_0011199e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"GPUParticlesCollision3D");
LAB_0011199e:
  return &_get_class_namev()::_class_name_static;
}



/* GPUParticlesCollisionBox3D::_get_class_namev() const */

undefined8 * GPUParticlesCollisionBox3D::_get_class_namev(void)

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
LAB_00111a23:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00111a23;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"GPUParticlesCollisionBox3D")
      ;
      goto LAB_00111a8e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"GPUParticlesCollisionBox3D");
LAB_00111a8e:
  return &_get_class_namev()::_class_name_static;
}



/* GPUParticlesAttractor3D::_get_class_namev() const */

undefined8 * GPUParticlesAttractor3D::_get_class_namev(void)

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
LAB_00111b13:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00111b13;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"GPUParticlesAttractor3D");
      goto LAB_00111b7e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"GPUParticlesAttractor3D");
LAB_00111b7e:
  return &_get_class_namev()::_class_name_static;
}



/* GPUParticlesCollisionSphere3D::_get_class_namev() const */

undefined8 * GPUParticlesCollisionSphere3D::_get_class_namev(void)

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
LAB_00111c13:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00111c13;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,
                 "GPUParticlesCollisionSphere3D");
      goto LAB_00111c7e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"GPUParticlesCollisionSphere3D");
LAB_00111c7e:
  return &_get_class_namev()::_class_name_static;
}



/* GPUParticlesCollisionSDF3D::_get_class_namev() const */

undefined8 * GPUParticlesCollisionSDF3D::_get_class_namev(void)

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
LAB_00111d03:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00111d03;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"GPUParticlesCollisionSDF3D")
      ;
      goto LAB_00111d6e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"GPUParticlesCollisionSDF3D");
LAB_00111d6e:
  return &_get_class_namev()::_class_name_static;
}



/* GPUParticlesCollisionHeightField3D::_get_class_namev() const */

undefined8 * GPUParticlesCollisionHeightField3D::_get_class_namev(void)

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
LAB_00111e03:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00111e03;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,
                 "GPUParticlesCollisionHeightField3D");
      goto LAB_00111e6e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,
             "GPUParticlesCollisionHeightField3D");
LAB_00111e6e:
  return &_get_class_namev()::_class_name_static;
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



/* GPUParticlesCollisionBox3D::get_class() const */

void GPUParticlesCollisionBox3D::get_class(void)

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



/* GPUParticlesAttractorBox3D::get_class() const */

void GPUParticlesAttractorBox3D::get_class(void)

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



/* GPUParticlesCollisionHeightField3D::get_class() const */

void GPUParticlesCollisionHeightField3D::get_class(void)

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



/* GPUParticlesCollisionSphere3D::get_class() const */

void GPUParticlesCollisionSphere3D::get_class(void)

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



/* GPUParticlesCollisionSDF3D::get_class() const */

void GPUParticlesCollisionSDF3D::get_class(void)

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



/* GPUParticlesAttractor3D::get_class() const */

void GPUParticlesAttractor3D::get_class(void)

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



/* GPUParticlesAttractorSphere3D::get_class() const */

void GPUParticlesAttractorSphere3D::get_class(void)

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



/* GPUParticlesAttractorVectorField3D::get_class() const */

void GPUParticlesAttractorVectorField3D::get_class(void)

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



/* GPUParticlesCollision3D::get_class() const */

void GPUParticlesCollision3D::get_class(void)

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



/* Image::~Image() */

void __thiscall Image::~Image(Image *this)

{
  long *plVar1;
  long lVar2;
  
  *(code **)this = operator_new;
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



/* List<GPUParticlesCollisionSDF3D::PlotMesh, DefaultAllocator>::~List() */

undefined8 __thiscall
List<GPUParticlesCollisionSDF3D::PlotMesh,DefaultAllocator>::~List
          (List<GPUParticlesCollisionSDF3D::PlotMesh,DefaultAllocator> *this)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
  char cVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 uStack_28;
  
  plVar7 = *(long **)this;
  if (plVar7 == (long *)0x0) {
    return uStack_28;
  }
  do {
    plVar1 = (long *)*plVar7;
    if (plVar1 == (long *)0x0) {
      if ((int)plVar7[2] != 0) {
        uVar6 = _err_print_error("~List","./core/templates/list.h",0x316,
                                 "Condition \"_data->size_cache\" is true.",0,0);
        return uVar6;
      }
      break;
    }
    if ((long *)plVar1[9] == plVar7) {
      lVar5 = plVar1[7];
      lVar2 = plVar1[8];
      *plVar7 = lVar5;
      if (plVar1 == (long *)plVar7[1]) {
        plVar7[1] = lVar2;
      }
      if (lVar2 != 0) {
        *(long *)(lVar2 + 0x38) = lVar5;
        lVar5 = plVar1[7];
      }
      if (lVar5 != 0) {
        *(long *)(lVar5 + 0x40) = lVar2;
      }
      if (*plVar1 != 0) {
        cVar4 = RefCounted::unreference();
        if (cVar4 != '\0') {
          pOVar3 = (Object *)*plVar1;
          cVar4 = predelete_handler(pOVar3);
          if (cVar4 != '\0') {
            (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
            Memory::free_static(pOVar3,false);
          }
        }
      }
      Memory::free_static(plVar1,false);
      *(int *)(plVar7 + 2) = (int)plVar7[2] + -1;
    }
    else {
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    }
    plVar7 = *(long **)this;
  } while ((int)plVar7[2] != 0);
  uVar6 = Memory::free_static(plVar7,false);
  return uVar6;
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



/* MethodBindTRC<Vector3>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Vector3>::_gen_argument_type_info(int param_1)

{
  undefined4 in_register_0000003c;
  undefined4 *puVar1;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar1 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC51;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar1 = 9;
  puVar1[6] = 0;
  *(undefined8 *)(puVar1 + 8) = 0;
  *(undefined1 (*) [16])(puVar1 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar1[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar1 + 8),(CowData *)&local_58);
    puVar1[10] = 6;
    if (puVar1[6] == 0x11) {
      StringName::StringName((StringName *)&local_48,(String *)(puVar1 + 8),false);
      if (*(undefined **)(puVar1 + 4) == local_48) {
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        *(undefined **)(puVar1 + 4) = local_48;
      }
      goto LAB_00112da5;
    }
  }
  StringName::operator=((StringName *)(puVar1 + 4),(StringName *)&local_50);
LAB_00112da5:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x00112fb8) */
/* String vformat<int>(String const&, int const) */

String * vformat<int>(String *param_1,int param_2)

{
  char cVar1;
  Variant *this;
  int in_EDX;
  undefined4 in_register_00000034;
  int iVar2;
  long in_FS_OFFSET;
  Array local_c8 [8];
  undefined8 local_c0 [9];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_78,in_EDX);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  Array::Array(local_c8);
  iVar2 = (int)local_c8;
  Array::resize(iVar2);
  this = (Variant *)Array::operator[](iVar2);
  Variant::operator=(this,(Variant *)local_78);
  String::sprintf((Array *)local_c0,(bool *)CONCAT44(in_register_00000034,param_2));
  *(undefined8 *)param_1 = local_c0[0];
  local_c0[0] = 0;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_c0);
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



/* MethodBindTRC<Ref<Texture3D>>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Ref<Texture3D>>::_gen_argument_type_info(int param_1)

{
  undefined4 in_register_0000003c;
  undefined4 *puVar1;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar1 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = "Texture3D";
  local_40 = 9;
  String::parse_latin1((StrRange *)&local_58);
  *puVar1 = 0x18;
  puVar1[6] = 0x11;
  *(undefined8 *)(puVar1 + 8) = 0;
  *(undefined1 (*) [16])(puVar1 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar1[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar1 + 8),(CowData *)&local_58);
    puVar1[10] = 6;
    if (puVar1[6] != 0x11) {
      StringName::operator=((StringName *)(puVar1 + 4),(StringName *)&local_50);
      goto LAB_00113238;
    }
  }
  StringName::StringName((StringName *)&local_48,(String *)(puVar1 + 8),false);
  if (*(char **)(puVar1 + 4) == local_48) {
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  else {
    StringName::unref();
    *(char **)(puVar1 + 4) = local_48;
  }
LAB_00113238:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Node3D::is_class(String const&) const */

undefined8 __thiscall Node3D::is_class(Node3D *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_0011336f;
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
LAB_0011336f:
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
    if (cVar6 != '\0') goto LAB_00113423;
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
      if (cVar6 != '\0') goto LAB_00113423;
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
            plVar1 = (long *)(*(long *)(lVar4 + 0x10) + -0x10);
            if (*(long *)(lVar4 + 0x10) != 0) {
              do {
                lVar5 = *plVar1;
                if (lVar5 == 0) goto LAB_0011358b;
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
LAB_0011358b:
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
        if (cVar6 != '\0') goto LAB_00113423;
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = String::operator==(param_1,"Object");
        return uVar7;
      }
      goto LAB_00113634;
    }
  }
LAB_00113423:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00113634:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GPUParticlesCollision3D::is_class(String const&) const */

undefined8 __thiscall
GPUParticlesCollision3D::is_class(GPUParticlesCollision3D *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_001136bf;
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
LAB_001136bf:
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
    if (cVar6 != '\0') goto LAB_00113773;
  }
  cVar6 = String::operator==(param_1,"GPUParticlesCollision3D");
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
              if (lVar5 == 0) goto LAB_00113833;
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
LAB_00113833:
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
      if (cVar6 != '\0') goto LAB_00113773;
    }
    cVar6 = String::operator==(param_1,"VisualInstance3D");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = Node3D::is_class((Node3D *)this,param_1);
        return uVar7;
      }
      goto LAB_001138dc;
    }
  }
LAB_00113773:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_001138dc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GPUParticlesCollisionHeightField3D::is_class(String const&) const */

undefined8 __thiscall
GPUParticlesCollisionHeightField3D::is_class
          (GPUParticlesCollisionHeightField3D *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_0011395f;
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
LAB_0011395f:
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
    if (cVar5 != '\0') goto LAB_00113a13;
  }
  cVar5 = String::operator==(param_1,"GPUParticlesCollisionHeightField3D");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = GPUParticlesCollision3D::is_class((GPUParticlesCollision3D *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_00113a13:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GPUParticlesCollisionSDF3D::is_class(String const&) const */

undefined8 __thiscall
GPUParticlesCollisionSDF3D::is_class(GPUParticlesCollisionSDF3D *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_00113adf;
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
LAB_00113adf:
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
    if (cVar5 != '\0') goto LAB_00113b93;
  }
  cVar5 = String::operator==(param_1,"GPUParticlesCollisionSDF3D");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = GPUParticlesCollision3D::is_class((GPUParticlesCollision3D *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_00113b93:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GPUParticlesCollisionBox3D::is_class(String const&) const */

undefined8 __thiscall
GPUParticlesCollisionBox3D::is_class(GPUParticlesCollisionBox3D *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_00113c5f;
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
LAB_00113c5f:
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
    if (cVar5 != '\0') goto LAB_00113d13;
  }
  cVar5 = String::operator==(param_1,"GPUParticlesCollisionBox3D");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = GPUParticlesCollision3D::is_class((GPUParticlesCollision3D *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_00113d13:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GPUParticlesCollisionSphere3D::is_class(String const&) const */

undefined8 __thiscall
GPUParticlesCollisionSphere3D::is_class(GPUParticlesCollisionSphere3D *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_00113ddf;
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
LAB_00113ddf:
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
    if (cVar5 != '\0') goto LAB_00113e93;
  }
  cVar5 = String::operator==(param_1,"GPUParticlesCollisionSphere3D");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = GPUParticlesCollision3D::is_class((GPUParticlesCollision3D *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_00113e93:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
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
  undefined8 local_60;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC51;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  local_60 = 0;
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
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        *(undefined **)(puVar3 + 4) = local_48;
      }
      goto LAB_00113fe5;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
LAB_00113fe5:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
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



/* MethodBindTRC<unsigned int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<unsigned_int>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  undefined8 local_60;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC51;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  local_60 = 0;
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
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        *(undefined **)(puVar3 + 4) = local_48;
      }
      goto LAB_00114185;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
LAB_00114185:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
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



/* MethodBindTRC<bool>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<bool>::_gen_argument_type_info(int param_1)

{
  undefined4 in_register_0000003c;
  undefined4 *puVar1;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar1 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC51;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar1 = 1;
  puVar1[6] = 0;
  *(undefined8 *)(puVar1 + 8) = 0;
  *(undefined1 (*) [16])(puVar1 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar1[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar1 + 8),(CowData *)&local_58);
    puVar1[10] = 6;
    if (puVar1[6] == 0x11) {
      StringName::StringName((StringName *)&local_48,(String *)(puVar1 + 8),false);
      if (*(undefined **)(puVar1 + 4) == local_48) {
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        *(undefined **)(puVar1 + 4) = local_48;
      }
      goto LAB_00114315;
    }
  }
  StringName::operator=((StringName *)(puVar1 + 4),(StringName *)&local_50);
LAB_00114315:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GPUParticlesAttractor3D::is_class(String const&) const */

undefined8 __thiscall
GPUParticlesAttractor3D::is_class(GPUParticlesAttractor3D *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_001143ef;
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
LAB_001143ef:
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
    if (cVar6 != '\0') goto LAB_001144a3;
  }
  cVar6 = String::operator==(param_1,"GPUParticlesAttractor3D");
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
              if (lVar5 == 0) goto LAB_0011455f;
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
LAB_0011455f:
      cVar6 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar6 != '\0') goto LAB_001144a3;
    }
    cVar6 = String::operator==(param_1,"VisualInstance3D");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = Node3D::is_class((Node3D *)this,param_1);
        return uVar7;
      }
      goto LAB_001145d1;
    }
  }
LAB_001144a3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_001145d1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GPUParticlesAttractorVectorField3D::is_class(String const&) const */

undefined8 __thiscall
GPUParticlesAttractorVectorField3D::is_class
          (GPUParticlesAttractorVectorField3D *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_0011464f;
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
LAB_0011464f:
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
    if (cVar5 != '\0') goto LAB_00114703;
  }
  cVar5 = String::operator==(param_1,"GPUParticlesAttractorVectorField3D");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = GPUParticlesAttractor3D::is_class((GPUParticlesAttractor3D *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_00114703:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GPUParticlesAttractorBox3D::is_class(String const&) const */

undefined8 __thiscall
GPUParticlesAttractorBox3D::is_class(GPUParticlesAttractorBox3D *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_001147cf;
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
LAB_001147cf:
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
    if (cVar5 != '\0') goto LAB_00114883;
  }
  cVar5 = String::operator==(param_1,"GPUParticlesAttractorBox3D");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = GPUParticlesAttractor3D::is_class((GPUParticlesAttractor3D *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_00114883:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GPUParticlesAttractorSphere3D::is_class(String const&) const */

undefined8 __thiscall
GPUParticlesAttractorSphere3D::is_class(GPUParticlesAttractorSphere3D *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_0011494f;
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
LAB_0011494f:
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
    if (cVar5 != '\0') goto LAB_00114a03;
  }
  cVar5 = String::operator==(param_1,"GPUParticlesAttractorSphere3D");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = GPUParticlesAttractor3D::is_class((GPUParticlesAttractor3D *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_00114a03:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<Texture3D> const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<Ref<Texture3D>const&>::_gen_argument_type_info(int param_1)

{
  long lVar1;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar2;
  long in_FS_OFFSET;
  undefined8 local_80;
  undefined8 local_78;
  long local_70;
  char *local_68;
  long local_60;
  long local_58;
  undefined4 local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar2 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar2 = 0;
  puVar2[6] = 0;
  *(undefined8 *)(puVar2 + 8) = 0;
  puVar2[10] = 6;
  *(undefined1 (*) [16])(puVar2 + 2) = (undefined1  [16])0x0;
  if (in_EDX == 0) {
    local_70 = 0;
    local_78 = 0;
    local_68 = "Texture3D";
    local_60 = 9;
    String::parse_latin1((StrRange *)&local_78);
    local_80 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_68,0x18,(CowData<char32_t> *)&local_80,0x11,
               (StrRange *)&local_78,6,&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    if ((StringName::configured != '\0') && (local_70 != 0)) {
      StringName::unref();
    }
    *puVar2 = local_68._0_4_;
    if (*(long *)(puVar2 + 2) != local_60) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar2 + 2));
      lVar1 = local_60;
      local_60 = 0;
      *(long *)(puVar2 + 2) = lVar1;
    }
    if (*(long *)(puVar2 + 4) != local_58) {
      StringName::unref();
      lVar1 = local_58;
      local_58 = 0;
      *(long *)(puVar2 + 4) = lVar1;
    }
    puVar2[6] = local_50;
    if (*(long *)(puVar2 + 8) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar2 + 8));
      lVar1 = local_48;
      local_48 = 0;
      *(long *)(puVar2 + 8) = lVar1;
    }
    puVar2[10] = local_40;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<bool>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<bool>::_gen_argument_type_info(int param_1)

{
  long lVar1;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar2;
  long in_FS_OFFSET;
  undefined8 local_80;
  undefined8 local_78;
  long local_70;
  undefined *local_68;
  long local_60;
  long local_58;
  undefined4 local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar2 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar2 = 0;
  puVar2[6] = 0;
  *(undefined8 *)(puVar2 + 8) = 0;
  puVar2[10] = 6;
  *(undefined1 (*) [16])(puVar2 + 2) = (undefined1  [16])0x0;
  if (in_EDX == 0) {
    local_70 = 0;
    local_78 = 0;
    local_68 = &_LC51;
    local_60 = 0;
    String::parse_latin1((StrRange *)&local_78);
    local_80 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_68,1,(CowData<char32_t> *)&local_80,0,(StrRange *)&local_78,6,
               &local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    if ((StringName::configured != '\0') && (local_70 != 0)) {
      StringName::unref();
    }
    *puVar2 = local_68._0_4_;
    if (*(long *)(puVar2 + 2) != local_60) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar2 + 2));
      lVar1 = local_60;
      local_60 = 0;
      *(long *)(puVar2 + 2) = lVar1;
    }
    if (*(long *)(puVar2 + 4) != local_58) {
      StringName::unref();
      lVar1 = local_58;
      local_58 = 0;
      *(long *)(puVar2 + 4) = lVar1;
    }
    puVar2[6] = local_50;
    if (*(long *)(puVar2 + 8) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar2 + 8));
      lVar1 = local_48;
      local_48 = 0;
      *(long *)(puVar2 + 8) = lVar1;
    }
    puVar2[10] = local_40;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<unsigned int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<unsigned_int>::_gen_argument_type_info(int param_1)

{
  long lVar1;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar2;
  long in_FS_OFFSET;
  undefined8 local_80;
  undefined8 local_78;
  long local_70;
  undefined *local_68;
  long local_60;
  long local_58;
  undefined4 local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar2 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar2 = 0;
  puVar2[6] = 0;
  *(undefined8 *)(puVar2 + 8) = 0;
  puVar2[10] = 6;
  *(undefined1 (*) [16])(puVar2 + 2) = (undefined1  [16])0x0;
  if (in_EDX == 0) {
    local_70 = 0;
    local_78 = 0;
    local_68 = &_LC51;
    local_60 = 0;
    String::parse_latin1((StrRange *)&local_78);
    local_80 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_68,2,(CowData<char32_t> *)&local_80,0,(StrRange *)&local_78,6,
               &local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    if ((StringName::configured != '\0') && (local_70 != 0)) {
      StringName::unref();
    }
    *puVar2 = local_68._0_4_;
    if (*(long *)(puVar2 + 2) != local_60) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar2 + 2));
      lVar1 = local_60;
      local_60 = 0;
      *(long *)(puVar2 + 2) = lVar1;
    }
    if (*(long *)(puVar2 + 4) != local_58) {
      StringName::unref();
      lVar1 = local_58;
      local_58 = 0;
      *(long *)(puVar2 + 4) = lVar1;
    }
    puVar2[6] = local_50;
    if (*(long *)(puVar2 + 8) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar2 + 8));
      lVar1 = local_48;
      local_48 = 0;
      *(long *)(puVar2 + 8) = lVar1;
    }
    puVar2[10] = local_40;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Vector3 const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<Vector3_const&>::_gen_argument_type_info(int param_1)

{
  long lVar1;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar2;
  long in_FS_OFFSET;
  undefined8 local_80;
  undefined8 local_78;
  long local_70;
  undefined *local_68;
  long local_60;
  long local_58;
  undefined4 local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar2 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar2 = 0;
  puVar2[6] = 0;
  *(undefined8 *)(puVar2 + 8) = 0;
  puVar2[10] = 6;
  *(undefined1 (*) [16])(puVar2 + 2) = (undefined1  [16])0x0;
  if (in_EDX == 0) {
    local_70 = 0;
    local_78 = 0;
    local_68 = &_LC51;
    local_60 = 0;
    String::parse_latin1((StrRange *)&local_78);
    local_80 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_68,9,(CowData<char32_t> *)&local_80,0,(StrRange *)&local_78,6,
               &local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    if ((StringName::configured != '\0') && (local_70 != 0)) {
      StringName::unref();
    }
    *puVar2 = local_68._0_4_;
    if (*(long *)(puVar2 + 2) != local_60) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar2 + 2));
      lVar1 = local_60;
      local_60 = 0;
      *(long *)(puVar2 + 2) = lVar1;
    }
    if (*(long *)(puVar2 + 4) != local_58) {
      StringName::unref();
      lVar1 = local_58;
      local_58 = 0;
      *(long *)(puVar2 + 4) = lVar1;
    }
    puVar2[6] = local_50;
    if (*(long *)(puVar2 + 8) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar2 + 8));
      lVar1 = local_48;
      local_48 = 0;
      *(long *)(puVar2 + 8) = lVar1;
    }
    puVar2[10] = local_40;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<float>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<float>::_gen_argument_type_info(int param_1)

{
  long lVar1;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar2;
  long in_FS_OFFSET;
  undefined8 local_80;
  undefined8 local_78;
  long local_70;
  undefined *local_68;
  long local_60;
  long local_58;
  undefined4 local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar2 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar2 = 0;
  puVar2[6] = 0;
  *(undefined8 *)(puVar2 + 8) = 0;
  puVar2[10] = 6;
  *(undefined1 (*) [16])(puVar2 + 2) = (undefined1  [16])0x0;
  if (in_EDX == 0) {
    local_70 = 0;
    local_78 = 0;
    local_68 = &_LC51;
    local_60 = 0;
    String::parse_latin1((StrRange *)&local_78);
    local_80 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_68,3,(CowData<char32_t> *)&local_80,0,(StrRange *)&local_78,6,
               &local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    if ((StringName::configured != '\0') && (local_70 != 0)) {
      StringName::unref();
    }
    *puVar2 = local_68._0_4_;
    if (*(long *)(puVar2 + 2) != local_60) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar2 + 2));
      lVar1 = local_60;
      local_60 = 0;
      *(long *)(puVar2 + 2) = lVar1;
    }
    if (*(long *)(puVar2 + 4) != local_58) {
      StringName::unref();
      lVar1 = local_58;
      local_58 = 0;
      *(long *)(puVar2 + 4) = lVar1;
    }
    puVar2[6] = local_50;
    if (*(long *)(puVar2 + 8) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar2 + 8));
      lVar1 = local_48;
      local_48 = 0;
      *(long *)(puVar2 + 8) = lVar1;
    }
    puVar2[10] = local_40;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Node3D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Node3D::_get_property_listv(Node3D *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  CowData<char32_t> *local_b8;
  CowData<char32_t> *local_b0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  int local_60;
  undefined8 local_58;
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
  local_b0 = (CowData<char32_t> *)&local_70;
  local_b8 = (CowData<char32_t> *)&local_58;
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
    CowData<char32_t>::_ref(local_b0,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 != 0) {
    CowData<char32_t>::_ref(local_b8,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 == 0x11) {
      StringName::StringName((StringName *)&local_80,(String *)local_b8,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_0011543f;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011543f:
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b8);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref(local_b0);
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
    CowData<char32_t>::_unref(local_b8);
    if ((StringName::configured != '\0') && (local_68 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref(local_b0);
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
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* VisualInstance3D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
VisualInstance3D::_get_property_listv(VisualInstance3D *this,List *param_1,bool param_2)

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
  local_78 = "VisualInstance3D";
  local_70 = 0x10;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "VisualInstance3D";
  local_98 = 0;
  local_70 = 0x10;
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
LAB_0011595d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0011595d;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0011597f;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0011597f:
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
  StringName::StringName((StringName *)&local_78,"VisualInstance3D",false);
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



/* GPUParticlesAttractor3D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const
    */

void __thiscall
GPUParticlesAttractor3D::_get_property_listv
          (GPUParticlesAttractor3D *this,List *param_1,bool param_2)

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
    VisualInstance3D::_get_property_listv((VisualInstance3D *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "GPUParticlesAttractor3D";
  local_70 = 0x17;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "GPUParticlesAttractor3D";
  local_98 = 0;
  local_70 = 0x17;
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
LAB_00115d3d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00115d3d;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00115d5f;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00115d5f:
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
  StringName::StringName((StringName *)&local_78,"GPUParticlesAttractor3D",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      VisualInstance3D::_get_property_listv((VisualInstance3D *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GPUParticlesAttractorVectorField3D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*,
   bool) const */

void __thiscall
GPUParticlesAttractorVectorField3D::_get_property_listv
          (GPUParticlesAttractorVectorField3D *this,List *param_1,bool param_2)

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
    GPUParticlesAttractor3D::_get_property_listv((GPUParticlesAttractor3D *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "GPUParticlesAttractorVectorField3D";
  local_70 = 0x22;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "GPUParticlesAttractorVectorField3D";
  local_98 = 0;
  local_70 = 0x22;
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
LAB_0011611d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0011611d;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0011613f;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0011613f:
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
  StringName::StringName((StringName *)&local_78,"GPUParticlesAttractorVectorField3D",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      GPUParticlesAttractor3D::_get_property_listv((GPUParticlesAttractor3D *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GPUParticlesAttractorBox3D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool)
   const */

void __thiscall
GPUParticlesAttractorBox3D::_get_property_listv
          (GPUParticlesAttractorBox3D *this,List *param_1,bool param_2)

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
    GPUParticlesAttractor3D::_get_property_listv((GPUParticlesAttractor3D *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "GPUParticlesAttractorBox3D";
  local_70 = 0x1a;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "GPUParticlesAttractorBox3D";
  local_98 = 0;
  local_70 = 0x1a;
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
LAB_001164fd:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_001164fd;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0011651f;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0011651f:
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
  StringName::StringName((StringName *)&local_78,"GPUParticlesAttractorBox3D",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      GPUParticlesAttractor3D::_get_property_listv((GPUParticlesAttractor3D *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GPUParticlesAttractorSphere3D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool)
   const */

void __thiscall
GPUParticlesAttractorSphere3D::_get_property_listv
          (GPUParticlesAttractorSphere3D *this,List *param_1,bool param_2)

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
    GPUParticlesAttractor3D::_get_property_listv((GPUParticlesAttractor3D *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "GPUParticlesAttractorSphere3D";
  local_70 = 0x1d;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "GPUParticlesAttractorSphere3D";
  local_98 = 0;
  local_70 = 0x1d;
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
LAB_001168dd:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_001168dd;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x001168ff;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x001168ff:
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
  StringName::StringName((StringName *)&local_78,"GPUParticlesAttractorSphere3D",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      GPUParticlesAttractor3D::_get_property_listv((GPUParticlesAttractor3D *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GPUParticlesCollision3D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const
    */

void __thiscall
GPUParticlesCollision3D::_get_property_listv
          (GPUParticlesCollision3D *this,List *param_1,bool param_2)

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
    VisualInstance3D::_get_property_listv((VisualInstance3D *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "GPUParticlesCollision3D";
  local_70 = 0x17;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "GPUParticlesCollision3D";
  local_98 = 0;
  local_70 = 0x17;
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
LAB_00116cbd:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00116cbd;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00116cdf;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00116cdf:
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
  StringName::StringName((StringName *)&local_78,"GPUParticlesCollision3D",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      VisualInstance3D::_get_property_listv((VisualInstance3D *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GPUParticlesCollisionHeightField3D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*,
   bool) const */

void __thiscall
GPUParticlesCollisionHeightField3D::_get_property_listv
          (GPUParticlesCollisionHeightField3D *this,List *param_1,bool param_2)

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
    GPUParticlesCollision3D::_get_property_listv((GPUParticlesCollision3D *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "GPUParticlesCollisionHeightField3D";
  local_70 = 0x22;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "GPUParticlesCollisionHeightField3D";
  local_98 = 0;
  local_70 = 0x22;
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
LAB_0011709d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0011709d;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x001170bf;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x001170bf:
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
  StringName::StringName((StringName *)&local_78,"GPUParticlesCollisionHeightField3D",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      GPUParticlesCollision3D::_get_property_listv((GPUParticlesCollision3D *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GPUParticlesCollisionSDF3D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool)
   const */

void __thiscall
GPUParticlesCollisionSDF3D::_get_property_listv
          (GPUParticlesCollisionSDF3D *this,List *param_1,bool param_2)

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
    GPUParticlesCollision3D::_get_property_listv((GPUParticlesCollision3D *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "GPUParticlesCollisionSDF3D";
  local_70 = 0x1a;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "GPUParticlesCollisionSDF3D";
  local_98 = 0;
  local_70 = 0x1a;
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
LAB_0011747d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0011747d;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0011749f;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0011749f:
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
  StringName::StringName((StringName *)&local_78,"GPUParticlesCollisionSDF3D",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      GPUParticlesCollision3D::_get_property_listv((GPUParticlesCollision3D *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GPUParticlesCollisionBox3D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool)
   const */

void __thiscall
GPUParticlesCollisionBox3D::_get_property_listv
          (GPUParticlesCollisionBox3D *this,List *param_1,bool param_2)

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
    GPUParticlesCollision3D::_get_property_listv((GPUParticlesCollision3D *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "GPUParticlesCollisionBox3D";
  local_70 = 0x1a;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "GPUParticlesCollisionBox3D";
  local_98 = 0;
  local_70 = 0x1a;
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
LAB_0011785d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0011785d;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0011787f;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0011787f:
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
  StringName::StringName((StringName *)&local_78,"GPUParticlesCollisionBox3D",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      GPUParticlesCollision3D::_get_property_listv((GPUParticlesCollision3D *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GPUParticlesCollisionSphere3D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool)
   const */

void __thiscall
GPUParticlesCollisionSphere3D::_get_property_listv
          (GPUParticlesCollisionSphere3D *this,List *param_1,bool param_2)

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
    GPUParticlesCollision3D::_get_property_listv((GPUParticlesCollision3D *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "GPUParticlesCollisionSphere3D";
  local_70 = 0x1d;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "GPUParticlesCollisionSphere3D";
  local_98 = 0;
  local_70 = 0x1d;
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
LAB_00117c3d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00117c3d;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00117c5f;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00117c5f:
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
  StringName::StringName((StringName *)&local_78,"GPUParticlesCollisionSphere3D",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      GPUParticlesCollision3D::_get_property_listv((GPUParticlesCollision3D *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<GPUParticlesCollision3D, unsigned int>(void
   (GPUParticlesCollision3D::*)(unsigned int)) */

MethodBind * create_method_bind<GPUParticlesCollision3D,unsigned_int>(_func_void_uint *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_001257b0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "GPUParticlesCollision3D";
  local_30 = 0x17;
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



/* GPUParticlesCollision3D::_initialize_classv() */

void GPUParticlesCollision3D::_initialize_classv(void)

{
  if (initialize_class()::initialized == '\0') {
    initialize_class();
    return;
  }
  return;
}



/* GPUParticlesCollisionBox3D::_initialize_classv() */

void GPUParticlesCollisionBox3D::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_60;
  undefined8 local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (GPUParticlesCollision3D::initialize_class()::initialized == '\0') {
      GPUParticlesCollision3D::initialize_class();
    }
    local_58 = 0;
    local_40 = 0x17;
    local_48 = "GPUParticlesCollision3D";
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "GPUParticlesCollisionBox3D";
    local_60 = 0;
    local_40 = 0x1a;
    String::parse_latin1((StrRange *)&local_60);
    StringName::StringName((StringName *)&local_48,(String *)&local_60,false);
    ClassDB::_add_class2((StringName *)&local_48,(StringName *)&local_50);
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if ((StringName::configured != '\0') && (local_50 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    _bind_methods();
    initialize_class()::initialized = '\x01';
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<GPUParticlesCollisionSphere3D, float>(void
   (GPUParticlesCollisionSphere3D::*)(float)) */

MethodBind * create_method_bind<GPUParticlesCollisionSphere3D,float>(_func_void_float *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_00125870;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "GPUParticlesCollisionSphere3D";
  local_30 = 0x1d;
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



/* GPUParticlesCollisionSphere3D::_initialize_classv() */

void GPUParticlesCollisionSphere3D::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_60;
  undefined8 local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (GPUParticlesCollision3D::initialize_class()::initialized == '\0') {
      GPUParticlesCollision3D::initialize_class();
    }
    local_58 = 0;
    local_40 = 0x17;
    local_48 = "GPUParticlesCollision3D";
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "GPUParticlesCollisionSphere3D";
    local_60 = 0;
    local_40 = 0x1d;
    String::parse_latin1((StrRange *)&local_60);
    StringName::StringName((StringName *)&local_48,(String *)&local_60,false);
    ClassDB::_add_class2((StringName *)&local_48,(StringName *)&local_50);
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if ((StringName::configured != '\0') && (local_50 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    _bind_methods();
    initialize_class()::initialized = '\x01';
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<GPUParticlesCollisionSDF3D,
   GPUParticlesCollisionSDF3D::Resolution>(void
   (GPUParticlesCollisionSDF3D::*)(GPUParticlesCollisionSDF3D::Resolution)) */

MethodBind *
create_method_bind<GPUParticlesCollisionSDF3D,GPUParticlesCollisionSDF3D::Resolution>
          (_func_void_Resolution *param_1)

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
  *(_func_void_Resolution **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_001259f0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "GPUParticlesCollisionSDF3D";
  local_30 = 0x1a;
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



/* MethodBind* create_method_bind<GPUParticlesCollisionSDF3D,
   GPUParticlesCollisionSDF3D::Resolution>(GPUParticlesCollisionSDF3D::Resolution
   (GPUParticlesCollisionSDF3D::*)() const) */

MethodBind *
create_method_bind<GPUParticlesCollisionSDF3D,GPUParticlesCollisionSDF3D::Resolution>
          (_func_Resolution *param_1)

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
  *(_func_Resolution **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00125a50;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "GPUParticlesCollisionSDF3D";
  local_30 = 0x1a;
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



/* MethodBind* create_method_bind<GPUParticlesCollisionSDF3D, Ref<Texture3D> const&>(void
   (GPUParticlesCollisionSDF3D::*)(Ref<Texture3D> const&)) */

MethodBind *
create_method_bind<GPUParticlesCollisionSDF3D,Ref<Texture3D>const&>(_func_void_Ref_ptr *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_00125ab0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "GPUParticlesCollisionSDF3D";
  local_30 = 0x1a;
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



/* MethodBind* create_method_bind<GPUParticlesCollisionSDF3D, int, bool>(void
   (GPUParticlesCollisionSDF3D::*)(int, bool)) */

MethodBind * create_method_bind<GPUParticlesCollisionSDF3D,int,bool>(_func_void_int_bool *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_00125b70;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "GPUParticlesCollisionSDF3D";
  local_30 = 0x1a;
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



/* MethodBind* create_method_bind<GPUParticlesCollisionHeightField3D,
   GPUParticlesCollisionHeightField3D::Resolution>(void
   (GPUParticlesCollisionHeightField3D::*)(GPUParticlesCollisionHeightField3D::Resolution)) */

MethodBind *
create_method_bind<GPUParticlesCollisionHeightField3D,GPUParticlesCollisionHeightField3D::Resolution>
          (_func_void_Resolution *param_1)

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
  *(_func_void_Resolution **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00125c30;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "GPUParticlesCollisionHeightField3D";
  local_30 = 0x22;
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



/* MethodBind* create_method_bind<GPUParticlesCollisionHeightField3D,
   GPUParticlesCollisionHeightField3D::Resolution>(GPUParticlesCollisionHeightField3D::Resolution
   (GPUParticlesCollisionHeightField3D::*)() const) */

MethodBind *
create_method_bind<GPUParticlesCollisionHeightField3D,GPUParticlesCollisionHeightField3D::Resolution>
          (_func_Resolution *param_1)

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
  *(_func_Resolution **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00125c90;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "GPUParticlesCollisionHeightField3D";
  local_30 = 0x22;
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



/* MethodBind* create_method_bind<GPUParticlesCollisionHeightField3D,
   GPUParticlesCollisionHeightField3D::UpdateMode>(void
   (GPUParticlesCollisionHeightField3D::*)(GPUParticlesCollisionHeightField3D::UpdateMode)) */

MethodBind *
create_method_bind<GPUParticlesCollisionHeightField3D,GPUParticlesCollisionHeightField3D::UpdateMode>
          (_func_void_UpdateMode *param_1)

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
  *(_func_void_UpdateMode **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00125cf0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "GPUParticlesCollisionHeightField3D";
  local_30 = 0x22;
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



/* MethodBind* create_method_bind<GPUParticlesCollisionHeightField3D,
   GPUParticlesCollisionHeightField3D::UpdateMode>(GPUParticlesCollisionHeightField3D::UpdateMode
   (GPUParticlesCollisionHeightField3D::*)() const) */

MethodBind *
create_method_bind<GPUParticlesCollisionHeightField3D,GPUParticlesCollisionHeightField3D::UpdateMode>
          (_func_UpdateMode *param_1)

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
  *(_func_UpdateMode **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00125d50;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "GPUParticlesCollisionHeightField3D";
  local_30 = 0x22;
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



/* MethodBind* create_method_bind<GPUParticlesCollisionHeightField3D, int, bool>(void
   (GPUParticlesCollisionHeightField3D::*)(int, bool)) */

MethodBind *
create_method_bind<GPUParticlesCollisionHeightField3D,int,bool>(_func_void_int_bool *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_00125b70;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "GPUParticlesCollisionHeightField3D";
  local_30 = 0x22;
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



/* MethodBind* create_method_bind<GPUParticlesCollisionHeightField3D, bool>(void
   (GPUParticlesCollisionHeightField3D::*)(bool)) */

MethodBind * create_method_bind<GPUParticlesCollisionHeightField3D,bool>(_func_void_bool *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_00125db0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "GPUParticlesCollisionHeightField3D";
  local_30 = 0x22;
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



/* MethodBind* create_method_bind<GPUParticlesCollisionHeightField3D, bool>(bool
   (GPUParticlesCollisionHeightField3D::*)() const) */

MethodBind * create_method_bind<GPUParticlesCollisionHeightField3D,bool>(_func_bool *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_00125e10;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "GPUParticlesCollisionHeightField3D";
  local_30 = 0x22;
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



/* MethodBind* create_method_bind<GPUParticlesAttractor3D, unsigned int>(void
   (GPUParticlesAttractor3D::*)(unsigned int)) */

MethodBind * create_method_bind<GPUParticlesAttractor3D,unsigned_int>(_func_void_uint *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_001257b0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "GPUParticlesAttractor3D";
  local_30 = 0x17;
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



/* GPUParticlesAttractor3D::_initialize_classv() */

void GPUParticlesAttractor3D::_initialize_classv(void)

{
  if (initialize_class()::initialized == '\0') {
    initialize_class();
    return;
  }
  return;
}



/* GPUParticlesAttractorBox3D::_initialize_classv() */

void GPUParticlesAttractorBox3D::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_60;
  undefined8 local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (GPUParticlesAttractor3D::initialize_class()::initialized == '\0') {
      GPUParticlesAttractor3D::initialize_class();
    }
    local_58 = 0;
    local_40 = 0x17;
    local_48 = "GPUParticlesAttractor3D";
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "GPUParticlesAttractorBox3D";
    local_60 = 0;
    local_40 = 0x1a;
    String::parse_latin1((StrRange *)&local_60);
    StringName::StringName((StringName *)&local_48,(String *)&local_60,false);
    ClassDB::_add_class2((StringName *)&local_48,(StringName *)&local_50);
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if ((StringName::configured != '\0') && (local_50 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    _bind_methods();
    initialize_class()::initialized = '\x01';
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<GPUParticlesAttractorSphere3D, float>(void
   (GPUParticlesAttractorSphere3D::*)(float)) */

MethodBind * create_method_bind<GPUParticlesAttractorSphere3D,float>(_func_void_float *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_00125870;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "GPUParticlesAttractorSphere3D";
  local_30 = 0x1d;
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



/* GPUParticlesAttractorSphere3D::_initialize_classv() */

void GPUParticlesAttractorSphere3D::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_60;
  undefined8 local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (GPUParticlesAttractor3D::initialize_class()::initialized == '\0') {
      GPUParticlesAttractor3D::initialize_class();
    }
    local_58 = 0;
    local_40 = 0x17;
    local_48 = "GPUParticlesAttractor3D";
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "GPUParticlesAttractorSphere3D";
    local_60 = 0;
    local_40 = 0x1d;
    String::parse_latin1((StrRange *)&local_60);
    StringName::StringName((StringName *)&local_48,(String *)&local_60,false);
    ClassDB::_add_class2((StringName *)&local_48,(StringName *)&local_50);
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if ((StringName::configured != '\0') && (local_50 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    _bind_methods();
    initialize_class()::initialized = '\x01';
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<GPUParticlesAttractorVectorField3D, Vector3 const&>(void
   (GPUParticlesAttractorVectorField3D::*)(Vector3 const&)) */

MethodBind *
create_method_bind<GPUParticlesAttractorVectorField3D,Vector3_const&>
          (_func_void_Vector3_ptr *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_00125930;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "GPUParticlesAttractorVectorField3D";
  local_30 = 0x22;
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



/* MethodBind* create_method_bind<GPUParticlesAttractorVectorField3D, Ref<Texture3D> const&>(void
   (GPUParticlesAttractorVectorField3D::*)(Ref<Texture3D> const&)) */

MethodBind *
create_method_bind<GPUParticlesAttractorVectorField3D,Ref<Texture3D>const&>
          (_func_void_Ref_ptr *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_00125ab0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "GPUParticlesAttractorVectorField3D";
  local_30 = 0x22;
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



/* MethodBind* create_method_bind<GPUParticlesAttractorVectorField3D, Ref<Texture3D>>(Ref<Texture3D>
   (GPUParticlesAttractorVectorField3D::*)() const) */

MethodBind *
create_method_bind<GPUParticlesAttractorVectorField3D,Ref<Texture3D>>(_func_Ref *param_1)

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
  *(_func_Ref **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00125b10;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "GPUParticlesAttractorVectorField3D";
  local_30 = 0x22;
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



/* GPUParticlesAttractorVectorField3D::_initialize_classv() */

void GPUParticlesAttractorVectorField3D::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_60;
  undefined8 local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (GPUParticlesAttractor3D::initialize_class()::initialized == '\0') {
      GPUParticlesAttractor3D::initialize_class();
    }
    local_58 = 0;
    local_40 = 0x17;
    local_48 = "GPUParticlesAttractor3D";
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "GPUParticlesAttractorVectorField3D";
    local_60 = 0;
    local_40 = 0x22;
    String::parse_latin1((StrRange *)&local_60);
    StringName::StringName((StringName *)&local_48,(String *)&local_60,false);
    ClassDB::_add_class2((StringName *)&local_48,(StringName *)&local_50);
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if ((StringName::configured != '\0') && (local_50 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    _bind_methods();
    initialize_class()::initialized = '\x01';
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
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



/* godot::details::enum_qualified_name_to_class_info_name(String const&) */

details * __thiscall
godot::details::enum_qualified_name_to_class_info_name(details *this,String *param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long in_FS_OFFSET;
  undefined8 local_60;
  char local_58 [8];
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  String::split(local_58,SUB81(param_1,0),0x119a3a);
  if ((local_50 != 0) && (2 < *(long *)(local_50 + -8))) {
    local_60 = 0;
    local_48 = &_LC52;
    local_40 = 1;
    String::parse_latin1((StrRange *)&local_60);
    if (local_50 == 0) {
      lVar3 = 0;
      lVar2 = -2;
    }
    else {
      lVar3 = *(long *)(local_50 + -8);
      lVar2 = lVar3 + -2;
      if (-1 < lVar2) {
        String::operator+((String *)&local_48,(String *)(local_50 + lVar2 * 8));
        String::operator+((String *)this,(String *)&local_48);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        goto LAB_00119b04;
      }
    }
    _err_print_index_error
              ("get","./core/templates/cowdata.h",0xdb,lVar2,lVar3,"p_index","size()","",false,true)
    ;
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  local_60 = 0;
  local_48 = &_LC52;
  local_40 = 1;
  String::parse_latin1((StrRange *)&local_60);
  String::join((Vector *)this);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
LAB_00119b04:
  CowData<String>::_unref((CowData<String> *)&local_50);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GetTypeInfo<GPUParticlesCollisionSDF3D::Resolution, void>::get_class_info() */

GetTypeInfo<GPUParticlesCollisionSDF3D::Resolution,void> * __thiscall
GetTypeInfo<GPUParticlesCollisionSDF3D::Resolution,void>::get_class_info
          (GetTypeInfo<GPUParticlesCollisionSDF3D::Resolution,void> *this)

{
  long in_FS_OFFSET;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  details local_50 [8];
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = 0;
  local_48 = "GPUParticlesCollisionSDF3D::Resolution";
  local_40 = 0x26;
  String::parse_latin1((StrRange *)&local_58);
  godot::details::enum_qualified_name_to_class_info_name(local_50,(String *)&local_58);
  StringName::StringName((StringName *)&local_48,(String *)local_50,false);
  *(undefined4 *)this = 2;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x28) = 0x10006;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  local_60 = 0;
  local_68 = 0;
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_48);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_50);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GPUParticlesCollisionSDF3D::_initialize_classv() */

void GPUParticlesCollisionSDF3D::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_60;
  undefined8 local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (GPUParticlesCollision3D::initialize_class()::initialized == '\0') {
      GPUParticlesCollision3D::initialize_class();
    }
    local_58 = 0;
    local_40 = 0x17;
    local_48 = "GPUParticlesCollision3D";
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "GPUParticlesCollisionSDF3D";
    local_60 = 0;
    local_40 = 0x1a;
    String::parse_latin1((StrRange *)&local_60);
    StringName::StringName((StringName *)&local_48,(String *)&local_60,false);
    ClassDB::_add_class2((StringName *)&local_48,(StringName *)&local_50);
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if ((StringName::configured != '\0') && (local_50 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    _bind_methods();
    initialize_class()::initialized = '\x01';
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GetTypeInfo<GPUParticlesCollisionHeightField3D::Resolution, void>::get_class_info() */

GetTypeInfo<GPUParticlesCollisionHeightField3D::Resolution,void> * __thiscall
GetTypeInfo<GPUParticlesCollisionHeightField3D::Resolution,void>::get_class_info
          (GetTypeInfo<GPUParticlesCollisionHeightField3D::Resolution,void> *this)

{
  long in_FS_OFFSET;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  details local_50 [8];
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = 0;
  local_48 = "GPUParticlesCollisionHeightField3D::Resolution";
  local_40 = 0x2e;
  String::parse_latin1((StrRange *)&local_58);
  godot::details::enum_qualified_name_to_class_info_name(local_50,(String *)&local_58);
  StringName::StringName((StringName *)&local_48,(String *)local_50,false);
  *(undefined4 *)this = 2;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x28) = 0x10006;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  local_60 = 0;
  local_68 = 0;
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_48);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_50);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GetTypeInfo<GPUParticlesCollisionHeightField3D::UpdateMode, void>::get_class_info() */

GetTypeInfo<GPUParticlesCollisionHeightField3D::UpdateMode,void> * __thiscall
GetTypeInfo<GPUParticlesCollisionHeightField3D::UpdateMode,void>::get_class_info
          (GetTypeInfo<GPUParticlesCollisionHeightField3D::UpdateMode,void> *this)

{
  long in_FS_OFFSET;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  details local_50 [8];
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = 0;
  local_48 = "GPUParticlesCollisionHeightField3D::UpdateMode";
  local_40 = 0x2e;
  String::parse_latin1((StrRange *)&local_58);
  godot::details::enum_qualified_name_to_class_info_name(local_50,(String *)&local_58);
  StringName::StringName((StringName *)&local_48,(String *)local_50,false);
  *(undefined4 *)this = 2;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x28) = 0x10006;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  local_60 = 0;
  local_68 = 0;
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_48);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_50);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GPUParticlesCollisionHeightField3D::_initialize_classv() */

void GPUParticlesCollisionHeightField3D::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_60;
  undefined8 local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (GPUParticlesCollision3D::initialize_class()::initialized == '\0') {
      GPUParticlesCollision3D::initialize_class();
    }
    local_58 = 0;
    local_40 = 0x17;
    local_48 = "GPUParticlesCollision3D";
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "GPUParticlesCollisionHeightField3D";
    local_60 = 0;
    local_40 = 0x22;
    String::parse_latin1((StrRange *)&local_60);
    StringName::StringName((StringName *)&local_48,(String *)&local_60,false);
    ClassDB::_add_class2((StringName *)&local_48,(StringName *)&local_50);
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if ((StringName::configured != '\0') && (local_50 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    _bind_methods();
    initialize_class()::initialized = '\x01';
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<GPUParticlesCollisionSDF3D::Resolution>::_gen_argument_type_info(int) const */

undefined4 *
MethodBindTRC<GPUParticlesCollisionSDF3D::Resolution>::_gen_argument_type_info(int param_1)

{
  undefined4 in_register_0000003c;
  undefined4 *puVar1;
  long in_FS_OFFSET;
  long local_68;
  details local_60 [8];
  undefined8 local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar1 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = "GPUParticlesCollisionSDF3D::Resolution";
  local_58 = 0;
  local_40 = 0x26;
  String::parse_latin1((StrRange *)&local_58);
  godot::details::enum_qualified_name_to_class_info_name(local_60,(String *)&local_58);
  StringName::StringName((StringName *)&local_68,(String *)local_60,false);
  *puVar1 = 2;
  puVar1[6] = 0;
  *(undefined8 *)(puVar1 + 8) = 0;
  puVar1[10] = 0x10006;
  *(undefined1 (*) [16])(puVar1 + 2) = (undefined1  [16])0x0;
  local_50 = 0;
  local_48 = (char *)0x0;
  StringName::operator=((StringName *)(puVar1 + 4),(StringName *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<GPUParticlesCollisionHeightField3D::UpdateMode>::_gen_argument_type_info(int) const
    */

undefined4 *
MethodBindTRC<GPUParticlesCollisionHeightField3D::UpdateMode>::_gen_argument_type_info(int param_1)

{
  undefined4 in_register_0000003c;
  undefined4 *puVar1;
  long in_FS_OFFSET;
  long local_68;
  details local_60 [8];
  undefined8 local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar1 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = "GPUParticlesCollisionHeightField3D::UpdateMode";
  local_58 = 0;
  local_40 = 0x2e;
  String::parse_latin1((StrRange *)&local_58);
  godot::details::enum_qualified_name_to_class_info_name(local_60,(String *)&local_58);
  StringName::StringName((StringName *)&local_68,(String *)local_60,false);
  *puVar1 = 2;
  puVar1[6] = 0;
  *(undefined8 *)(puVar1 + 8) = 0;
  puVar1[10] = 0x10006;
  *(undefined1 (*) [16])(puVar1 + 2) = (undefined1  [16])0x0;
  local_50 = 0;
  local_48 = (char *)0x0;
  StringName::operator=((StringName *)(puVar1 + 4),(StringName *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<GPUParticlesCollisionHeightField3D::Resolution>::_gen_argument_type_info(int) const
    */

undefined4 *
MethodBindTRC<GPUParticlesCollisionHeightField3D::Resolution>::_gen_argument_type_info(int param_1)

{
  undefined4 in_register_0000003c;
  undefined4 *puVar1;
  long in_FS_OFFSET;
  long local_68;
  details local_60 [8];
  undefined8 local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar1 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = "GPUParticlesCollisionHeightField3D::Resolution";
  local_58 = 0;
  local_40 = 0x2e;
  String::parse_latin1((StrRange *)&local_58);
  godot::details::enum_qualified_name_to_class_info_name(local_60,(String *)&local_58);
  StringName::StringName((StringName *)&local_68,(String *)local_60,false);
  *puVar1 = 2;
  puVar1[6] = 0;
  *(undefined8 *)(puVar1 + 8) = 0;
  puVar1[10] = 0x10006;
  *(undefined1 (*) [16])(puVar1 + 2) = (undefined1  [16])0x0;
  local_50 = 0;
  local_48 = (char *)0x0;
  StringName::operator=((StringName *)(puVar1 + 4),(StringName *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<GPUParticlesCollisionSDF3D::Resolution>::_gen_argument_type_info(int) const */

undefined4 *
MethodBindT<GPUParticlesCollisionSDF3D::Resolution>::_gen_argument_type_info(int param_1)

{
  long lVar1;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar2;
  long in_FS_OFFSET;
  long local_a0;
  details local_98 [8];
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  char *local_78;
  long local_70;
  long local_68;
  undefined4 local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  puVar2 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar2 = 0;
  puVar2[6] = 0;
  *(undefined8 *)(puVar2 + 8) = 0;
  puVar2[10] = 6;
  *(undefined1 (*) [16])(puVar2 + 2) = (undefined1  [16])0x0;
  if (in_EDX == 0) {
    local_90 = 0;
    local_70 = 0x26;
    local_78 = "GPUParticlesCollisionSDF3D::Resolution";
    String::parse_latin1((StrRange *)&local_90);
    godot::details::enum_qualified_name_to_class_info_name(local_98,(String *)&local_90);
    StringName::StringName((StringName *)&local_a0,(String *)local_98,false);
    local_88 = 0;
    local_80 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_78,2,(CowData<char32_t> *)&local_80,0,
               (CowData<char32_t> *)&local_88,0x10006,(StringName *)&local_a0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if ((StringName::configured != '\0') && (local_a0 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    *puVar2 = local_78._0_4_;
    if (*(long *)(puVar2 + 2) != local_70) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar2 + 2));
      lVar1 = local_70;
      local_70 = 0;
      *(long *)(puVar2 + 2) = lVar1;
    }
    if (*(long *)(puVar2 + 4) != local_68) {
      StringName::unref();
      lVar1 = local_68;
      local_68 = 0;
      *(long *)(puVar2 + 4) = lVar1;
    }
    puVar2[6] = local_60;
    if (*(long *)(puVar2 + 8) != local_58) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar2 + 8));
      lVar1 = local_58;
      local_58 = 0;
      *(long *)(puVar2 + 8) = lVar1;
    }
    puVar2[10] = local_50;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<GPUParticlesCollisionHeightField3D::UpdateMode>::_gen_argument_type_info(int) const
    */

undefined4 *
MethodBindT<GPUParticlesCollisionHeightField3D::UpdateMode>::_gen_argument_type_info(int param_1)

{
  long lVar1;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar2;
  long in_FS_OFFSET;
  long local_a0;
  details local_98 [8];
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  char *local_78;
  long local_70;
  long local_68;
  undefined4 local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  puVar2 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar2 = 0;
  puVar2[6] = 0;
  *(undefined8 *)(puVar2 + 8) = 0;
  puVar2[10] = 6;
  *(undefined1 (*) [16])(puVar2 + 2) = (undefined1  [16])0x0;
  if (in_EDX == 0) {
    local_90 = 0;
    local_70 = 0x2e;
    local_78 = "GPUParticlesCollisionHeightField3D::UpdateMode";
    String::parse_latin1((StrRange *)&local_90);
    godot::details::enum_qualified_name_to_class_info_name(local_98,(String *)&local_90);
    StringName::StringName((StringName *)&local_a0,(String *)local_98,false);
    local_88 = 0;
    local_80 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_78,2,(CowData<char32_t> *)&local_80,0,
               (CowData<char32_t> *)&local_88,0x10006,(StringName *)&local_a0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if ((StringName::configured != '\0') && (local_a0 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    *puVar2 = local_78._0_4_;
    if (*(long *)(puVar2 + 2) != local_70) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar2 + 2));
      lVar1 = local_70;
      local_70 = 0;
      *(long *)(puVar2 + 2) = lVar1;
    }
    if (*(long *)(puVar2 + 4) != local_68) {
      StringName::unref();
      lVar1 = local_68;
      local_68 = 0;
      *(long *)(puVar2 + 4) = lVar1;
    }
    puVar2[6] = local_60;
    if (*(long *)(puVar2 + 8) != local_58) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar2 + 8));
      lVar1 = local_58;
      local_58 = 0;
      *(long *)(puVar2 + 8) = lVar1;
    }
    puVar2[10] = local_50;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<GPUParticlesCollisionHeightField3D::Resolution>::_gen_argument_type_info(int) const
    */

undefined4 *
MethodBindT<GPUParticlesCollisionHeightField3D::Resolution>::_gen_argument_type_info(int param_1)

{
  long lVar1;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar2;
  long in_FS_OFFSET;
  long local_a0;
  details local_98 [8];
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  char *local_78;
  long local_70;
  long local_68;
  undefined4 local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  puVar2 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar2 = 0;
  puVar2[6] = 0;
  *(undefined8 *)(puVar2 + 8) = 0;
  puVar2[10] = 6;
  *(undefined1 (*) [16])(puVar2 + 2) = (undefined1  [16])0x0;
  if (in_EDX == 0) {
    local_90 = 0;
    local_70 = 0x2e;
    local_78 = "GPUParticlesCollisionHeightField3D::Resolution";
    String::parse_latin1((StrRange *)&local_90);
    godot::details::enum_qualified_name_to_class_info_name(local_98,(String *)&local_90);
    StringName::StringName((StringName *)&local_a0,(String *)local_98,false);
    local_88 = 0;
    local_80 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_78,2,(CowData<char32_t> *)&local_80,0,
               (CowData<char32_t> *)&local_88,0x10006,(StringName *)&local_a0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if ((StringName::configured != '\0') && (local_a0 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    *puVar2 = local_78._0_4_;
    if (*(long *)(puVar2 + 2) != local_70) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar2 + 2));
      lVar1 = local_70;
      local_70 = 0;
      *(long *)(puVar2 + 2) = lVar1;
    }
    if (*(long *)(puVar2 + 4) != local_68) {
      StringName::unref();
      lVar1 = local_68;
      local_68 = 0;
      *(long *)(puVar2 + 4) = lVar1;
    }
    puVar2[6] = local_60;
    if (*(long *)(puVar2 + 8) != local_58) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar2 + 8));
      lVar1 = local_58;
      local_58 = 0;
      *(long *)(puVar2 + 8) = lVar1;
    }
    puVar2[10] = local_50;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<String>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<String>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* GPUParticlesCollisionSDF3D::bake() [clone .cold] */

void GPUParticlesCollisionSDF3D::bake(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
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
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  
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
    lVar4 = 0;
    lVar5 = 0;
  }
  else {
    lVar4 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar4) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    lVar5 = lVar4 * 8;
    if (lVar5 != 0) {
      uVar6 = lVar5 - 1U | lVar5 - 1U >> 1;
      uVar6 = uVar6 | uVar6 >> 2;
      uVar6 = uVar6 | uVar6 >> 4;
      uVar6 = uVar6 | uVar6 >> 8;
      uVar6 = uVar6 | uVar6 >> 0x10;
      lVar5 = (uVar6 | uVar6 >> 0x20) + 1;
    }
  }
  if (param_1 * 8 == 0) {
LAB_0011aef0:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar6 = param_1 * 8 - 1;
  uVar6 = uVar6 >> 1 | uVar6;
  uVar6 = uVar6 | uVar6 >> 2;
  uVar6 = uVar6 | uVar6 >> 4;
  uVar6 = uVar6 | uVar6 >> 8;
  uVar6 = uVar6 | uVar6 >> 0x10;
  uVar6 = uVar6 | uVar6 >> 0x20;
  lVar9 = uVar6 + 1;
  if (lVar9 == 0) goto LAB_0011aef0;
  uVar8 = param_1;
  if (param_1 <= lVar4) {
    while (lVar4 = *(long *)this, lVar4 != 0) {
      if (*(ulong *)(lVar4 + -8) <= uVar8) {
        if (lVar9 != lVar5) {
          uVar3 = _realloc(this,lVar9);
          if ((int)uVar3 != 0) {
            return uVar3;
          }
          lVar4 = *(long *)this;
          if (lVar4 == 0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
        }
        *(long *)(lVar4 + -8) = param_1;
        return 0;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)(lVar4 + uVar8 * 8));
      uVar8 = uVar8 + 1;
    }
    goto LAB_0011af46;
  }
  if (lVar9 == lVar5) {
LAB_0011ae6b:
    puVar7 = *(undefined8 **)this;
    if (puVar7 == (undefined8 *)0x0) {
LAB_0011af46:
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    lVar4 = puVar7[-1];
    if (param_1 <= lVar4) goto LAB_0011addf;
  }
  else {
    if (lVar4 != 0) {
      uVar3 = _realloc(this,lVar9);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      goto LAB_0011ae6b;
    }
    puVar2 = (undefined8 *)Memory::alloc_static(uVar6 + 0x11,false);
    if (puVar2 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar7 = puVar2 + 2;
    *puVar2 = 1;
    puVar2[1] = 0;
    *(undefined8 **)this = puVar7;
    lVar4 = 0;
  }
  memset(puVar7 + lVar4,0,(param_1 - lVar4) * 8);
LAB_0011addf:
  puVar7[-1] = param_1;
  return 0;
}



/* void memdelete<Image>(Image*) */

void memdelete<Image>(Image *param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  
  cVar3 = predelete_handler((Object *)param_1);
  if (cVar3 == '\0') {
    return;
  }
  if (*(code **)(*(long *)param_1 + 0x140) == Image::~Image) {
    *(code **)param_1 = operator_new;
    if (*(long *)(param_1 + 0x250) != 0) {
      LOCK();
      plVar1 = (long *)(*(long *)(param_1 + 0x250) + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar2 = *(long *)(param_1 + 0x250);
        *(undefined8 *)(param_1 + 0x250) = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    Resource::~Resource((Resource *)param_1);
    Memory::free_static(param_1,false);
    return;
  }
  (**(code **)(*(long *)param_1 + 0x140))(param_1);
  Memory::free_static(param_1,false);
  return;
}



/* SortArray<GPUParticlesCollisionSDF3D::FacePos, GPUParticlesCollisionSDF3D::FaceSort,
   true>::introsort(long, long, GPUParticlesCollisionSDF3D::FacePos*, long) const */

void __thiscall
SortArray<GPUParticlesCollisionSDF3D::FacePos,GPUParticlesCollisionSDF3D::FaceSort,true>::introsort
          (SortArray<GPUParticlesCollisionSDF3D::FacePos,GPUParticlesCollisionSDF3D::FaceSort,true>
           *this,long param_1,long param_2,FacePos *param_3,long param_4)

{
  float fVar1;
  float fVar2;
  int iVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  FacePos *pFVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  FacePos *pFVar15;
  long lVar16;
  long lVar17;
  FacePos *pFVar18;
  FacePos *pFVar19;
  long in_FS_OFFSET;
  float fVar20;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58 [16];
  long local_40;
  
  lVar11 = param_2 - param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (0x10 < lVar11) {
    if (param_4 != 0) {
      pFVar8 = param_3 + param_1 * 0x10;
      lVar14 = param_2;
LAB_0011b0b1:
      param_4 = param_4 + -1;
      lVar12 = (long)*(int *)this;
      pFVar19 = param_3 + lVar14 * 0x10 + -0x10;
      pFVar15 = param_3 + ((lVar11 >> 1) + param_1) * 0x10;
      fVar20 = *(float *)(pFVar8 + lVar12 * 4);
      fVar1 = *(float *)(pFVar15 + lVar12 * 4);
      fVar2 = *(float *)(pFVar19 + lVar12 * 4);
      if (fVar1 <= fVar20) {
        pFVar18 = pFVar8;
        if ((fVar2 <= fVar20) && (pFVar18 = pFVar19, fVar2 <= fVar1)) {
          pFVar18 = pFVar15;
        }
      }
      else {
        pFVar18 = pFVar15;
        if ((fVar2 <= fVar1) && (pFVar18 = pFVar19, fVar2 <= fVar20)) {
          pFVar18 = pFVar8;
        }
      }
      local_68 = *(undefined8 *)pFVar18;
      uStack_60 = *(undefined8 *)(pFVar18 + 8);
      fVar20 = *(float *)((long)&local_68 + lVar12 * 4);
      lVar13 = lVar12;
      lVar11 = lVar14;
      param_2 = param_1;
      pFVar19 = pFVar8;
      do {
        if (*(float *)(pFVar19 + lVar13 * 4) <= fVar20 && fVar20 != *(float *)(pFVar19 + lVar13 * 4)
           ) {
          if (lVar14 + -1 == param_2) {
            _err_print_error("partitioner","./core/templates/sort_array.h",0xb2,
                             "bad comparison function; sorting will be broken",0,0);
            lVar12 = (long)*(int *)this;
            fVar20 = *(float *)((long)&local_68 + lVar12 * 4);
            goto LAB_0011b15e;
          }
        }
        else {
LAB_0011b15e:
          lVar11 = lVar11 + -1;
          pFVar15 = param_3 + lVar11 * 0x10;
          if (fVar20 < *(float *)(pFVar15 + lVar12 * 4)) {
            pFVar18 = param_3 + lVar11 * 0x10 + -0x10;
            while (param_1 != lVar11) {
              lVar11 = lVar11 + -1;
              pFVar15 = pFVar18;
              if (*(float *)(pFVar18 + lVar12 * 4) <= fVar20) goto LAB_0011b1cf;
              pFVar18 = pFVar18 + -0x10;
            }
            _err_print_error("partitioner","./core/templates/sort_array.h",0xb9,
                             "bad comparison function; sorting will be broken",0,0);
          }
LAB_0011b1cf:
          if (lVar11 <= param_2) goto LAB_0011b208;
          local_58 = *(undefined1 (*) [16])pFVar19;
          uVar5 = *(undefined8 *)(pFVar15 + 8);
          iVar3 = *(int *)this;
          lVar12 = (long)iVar3;
          *(undefined8 *)pFVar19 = *(undefined8 *)pFVar15;
          *(undefined8 *)(pFVar19 + 8) = uVar5;
          lVar13 = (long)iVar3;
          *(undefined1 (*) [16])pFVar15 = local_58;
          fVar20 = *(float *)((long)&local_68 + lVar13 * 4);
        }
        pFVar19 = pFVar19 + 0x10;
        param_2 = param_2 + 1;
      } while( true );
    }
LAB_0011b2f1:
    lVar13 = lVar11 + -2 >> 1;
    lVar12 = (long)*(int *)this;
    lVar14 = lVar13 * 2 + 2;
    pFVar8 = param_3 + (param_1 + lVar13) * 0x10;
    do {
      local_58 = *(undefined1 (*) [16])pFVar8;
      auVar6 = *(undefined1 (*) [16])pFVar8;
      local_68 = *(undefined8 *)pFVar8;
      uStack_60 = *(undefined8 *)(pFVar8 + 8);
      lVar9 = lVar14;
      lVar17 = lVar13;
      if (lVar14 < lVar11) {
        do {
          pFVar15 = param_3 + (param_1 + lVar9) * 0x10;
          fVar20 = *(float *)(param_3 + (param_1 + lVar9 + -1) * 0x10 + lVar12 * 4);
          lVar10 = lVar9 + -1;
          pFVar19 = param_3 + (param_1 + lVar9 + -1) * 0x10;
          lVar16 = lVar9;
          if (fVar20 < *(float *)(pFVar15 + lVar12 * 4) ||
              fVar20 == *(float *)(pFVar15 + lVar12 * 4)) {
            lVar16 = lVar9 + 1;
            lVar10 = lVar9;
            pFVar19 = pFVar15;
          }
          uVar5 = *(undefined8 *)(pFVar19 + 8);
          lVar9 = lVar16 * 2;
          *(undefined8 *)(param_3 + (param_1 + lVar17) * 0x10) = *(undefined8 *)pFVar19;
          *(undefined8 *)(param_3 + (param_1 + lVar17) * 0x10 + 8) = uVar5;
          lVar17 = lVar10;
        } while (lVar11 != lVar9 && SBORROW8(lVar11,lVar9) == lVar11 + lVar16 * -2 < 0);
        pFVar15 = pFVar19;
        if (lVar11 == lVar9) {
LAB_0011b562:
          lVar10 = lVar9 + -1;
          pFVar19 = param_3 + (param_1 + lVar10) * 0x10;
          uVar5 = *(undefined8 *)(pFVar19 + 8);
          *(undefined8 *)pFVar15 = *(undefined8 *)pFVar19;
          *(undefined8 *)(pFVar15 + 8) = uVar5;
        }
        lVar9 = lVar10 + -1;
        local_58 = auVar6;
        if (lVar10 <= lVar13) goto LAB_0011b5bc;
        fVar20 = *(float *)(local_58 + lVar12 * 4);
        do {
          lVar17 = lVar9 >> 1;
          pFVar15 = param_3 + (param_1 + lVar17) * 0x10;
          pFVar19 = param_3 + (lVar10 + param_1) * 0x10;
          local_58._0_8_ = auVar6._0_8_;
          local_58._8_8_ = auVar6._8_8_;
          if (fVar20 < *(float *)(pFVar15 + lVar12 * 4) ||
              fVar20 == *(float *)(pFVar15 + lVar12 * 4)) {
            *(undefined8 *)pFVar19 = local_58._0_8_;
            *(undefined8 *)(pFVar19 + 8) = local_58._8_8_;
            goto joined_r0x0011b417;
          }
          uVar5 = *(undefined8 *)(pFVar15 + 8);
          *(undefined8 *)pFVar19 = *(undefined8 *)pFVar15;
          *(undefined8 *)(pFVar19 + 8) = uVar5;
          lVar9 = (lVar17 + -1) - (lVar17 + -1 >> 0x3f);
          lVar10 = lVar17;
        } while (lVar13 < lVar17);
        *(undefined8 *)pFVar15 = local_58._0_8_;
        *(undefined8 *)(pFVar15 + 8) = local_58._8_8_;
joined_r0x0011b417:
        if (lVar13 == 0) goto LAB_0011b419;
      }
      else {
        pFVar15 = pFVar8;
        pFVar19 = pFVar8;
        if (lVar14 == lVar11) goto LAB_0011b562;
LAB_0011b5bc:
        *(undefined8 *)pFVar19 = local_58._0_8_;
        *(undefined8 *)(pFVar19 + 8) = local_58._8_8_;
      }
      lVar13 = lVar13 + -1;
      pFVar8 = pFVar8 + -0x10;
      lVar14 = lVar14 + -2;
    } while( true );
  }
  goto LAB_0011b2b0;
LAB_0011b208:
  introsort(this,param_2,lVar14,param_3,param_4);
  lVar11 = param_2 - param_1;
  if (lVar11 < 0x11) goto LAB_0011b2b0;
  lVar14 = param_2;
  if (param_4 == 0) goto LAB_0011b2f1;
  goto LAB_0011b0b1;
LAB_0011b419:
  pFVar19 = param_3 + param_1 * 0x10;
  pFVar8 = param_3 + param_2 * 0x10;
  lVar11 = (param_2 + -1) - param_1;
LAB_0011b440:
  do {
    pFVar15 = pFVar8 + -0x10;
    local_68 = *(undefined8 *)pFVar15;
    uStack_60 = *(undefined8 *)(pFVar8 + -8);
    auVar7 = *(undefined1 (*) [16])pFVar15;
    auVar6 = *(undefined1 (*) [16])pFVar15;
    local_58 = *(undefined1 (*) [16])pFVar15;
    uVar5 = *(undefined8 *)(pFVar19 + 8);
    *(undefined8 *)(pFVar8 + -0x10) = *(undefined8 *)pFVar19;
    *(undefined8 *)(pFVar8 + -8) = uVar5;
    if (lVar11 < 3) {
      if (lVar11 != 2) {
        *(undefined8 *)pFVar19 = local_68;
        *(undefined8 *)(pFVar19 + 8) = uStack_60;
        break;
      }
      lVar13 = 0;
      lVar14 = 1;
      pFVar15 = pFVar19;
LAB_0011b593:
      lVar17 = param_1 + lVar14;
      local_58 = auVar7;
      uVar5 = *(undefined8 *)(param_3 + lVar17 * 0x10 + 8);
      *(undefined8 *)pFVar15 = *(undefined8 *)(param_3 + lVar17 * 0x10);
      *(undefined8 *)(pFVar15 + 8) = uVar5;
    }
    else {
      lVar14 = 2;
      lVar13 = 0;
      do {
        pFVar18 = param_3 + (param_1 + lVar14) * 0x10;
        fVar20 = *(float *)(param_3 + (param_1 + lVar14 + -1) * 0x10 + lVar12 * 4);
        lVar9 = lVar14 + -1;
        pFVar15 = param_3 + (param_1 + lVar14 + -1) * 0x10;
        lVar17 = lVar14;
        if (fVar20 < *(float *)(pFVar18 + lVar12 * 4) || fVar20 == *(float *)(pFVar18 + lVar12 * 4))
        {
          lVar17 = lVar14 + 1;
          lVar9 = lVar14;
          pFVar15 = pFVar18;
        }
        uVar5 = *(undefined8 *)(pFVar15 + 8);
        lVar14 = lVar17 * 2;
        *(undefined8 *)(param_3 + (param_1 + lVar13) * 0x10) = *(undefined8 *)pFVar15;
        *(undefined8 *)(param_3 + (param_1 + lVar13) * 0x10 + 8) = uVar5;
        lVar13 = lVar9;
      } while (lVar11 != lVar14 && SBORROW8(lVar11,lVar14) == lVar11 + lVar17 * -2 < 0);
      if (lVar11 == lVar14) {
        lVar14 = lVar11 + -1;
        lVar13 = lVar11 + -2 >> 1;
        goto LAB_0011b593;
      }
      lVar14 = lVar11 + -1;
      local_58 = auVar6;
      lVar17 = param_1 + lVar9;
      lVar13 = (lVar9 + -1) / 2;
      if (lVar9 < 1) {
        *(undefined8 *)pFVar15 = local_68;
        *(undefined8 *)(pFVar15 + 8) = uStack_60;
        pFVar8 = pFVar8 + -0x10;
        lVar11 = lVar14;
        goto LAB_0011b440;
      }
    }
    fVar20 = *(float *)(local_58 + lVar12 * 4);
    while( true ) {
      pFVar15 = param_3 + lVar17 * 0x10;
      pFVar18 = param_3 + (param_1 + lVar13) * 0x10;
      if (fVar20 < *(float *)(pFVar18 + lVar12 * 4) || fVar20 == *(float *)(pFVar18 + lVar12 * 4))
      break;
      uVar5 = *(undefined8 *)(pFVar18 + 8);
      *(undefined8 *)pFVar15 = *(undefined8 *)pFVar18;
      *(undefined8 *)(pFVar15 + 8) = uVar5;
      pFVar15 = pFVar18;
      if (lVar13 == 0) break;
      lVar17 = param_1 + lVar13;
      lVar13 = (lVar13 + -1) / 2;
    }
    pFVar8 = pFVar8 + -0x10;
    *(undefined8 *)pFVar15 = local_58._0_8_;
    *(undefined8 *)(pFVar15 + 8) = local_58._8_8_;
    bVar4 = 1 < lVar11;
    lVar11 = lVar14;
  } while (bVar4);
LAB_0011b2b0:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CowData<unsigned char>::_realloc(long) */

undefined8 __thiscall CowData<unsigned_char>::_realloc(CowData<unsigned_char> *this,long param_1)

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



/* WARNING: Removing unreachable block (ram,0x0011b798) */
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
  local_c0[0] = 0;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_c0);
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
      _err_print_error(&_LC170,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0011bb10;
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
LAB_0011bb10:
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
      goto LAB_0011bdb2;
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
LAB_0011bdb2:
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
      goto LAB_0011bf71;
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
LAB_0011bf71:
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
      goto LAB_0011c2b1;
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
                    /* WARNING: Could not recover jumptable at 0x0011c13d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined1 *)(*(long *)param_3 + 8));
    return;
  }
LAB_0011c2b1:
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
      goto LAB_0011c499;
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
                    /* WARNING: Could not recover jumptable at 0x0011c322. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3 != '\0');
    return;
  }
LAB_0011c499:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<GPUParticlesCollisionHeightField3D::UpdateMode>::call(Object*, Variant const**,
   int, Callable::CallError&) const */

Object * MethodBindTRC<GPUParticlesCollisionHeightField3D::UpdateMode>::call
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
      _err_print_error(&_LC170,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0011c560;
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
LAB_0011c560:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<GPUParticlesCollisionHeightField3D::UpdateMode>::validated_call(Object*, Variant
   const**, Variant*) const */

void __thiscall
MethodBindTRC<GPUParticlesCollisionHeightField3D::UpdateMode>::validated_call
          (MethodBindTRC<GPUParticlesCollisionHeightField3D::UpdateMode> *this,Object *param_1,
          Variant **param_2,Variant *param_3)

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
      goto LAB_0011c774;
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
LAB_0011c774:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<GPUParticlesCollisionHeightField3D::UpdateMode>::ptrcall(Object*, void const**,
   void*) const */

void __thiscall
MethodBindTRC<GPUParticlesCollisionHeightField3D::UpdateMode>::ptrcall
          (MethodBindTRC<GPUParticlesCollisionHeightField3D::UpdateMode> *this,Object *param_1,
          void **param_2,void *param_3)

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
      goto LAB_0011c923;
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
LAB_0011c923:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<GPUParticlesCollisionHeightField3D::UpdateMode>::validated_call(Object*, Variant
   const**, Variant*) const */

void MethodBindT<GPUParticlesCollisionHeightField3D::UpdateMode>::validated_call
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
      goto LAB_0011cc61;
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
                    /* WARNING: Could not recover jumptable at 0x0011caec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8));
    return;
  }
LAB_0011cc61:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<GPUParticlesCollisionHeightField3D::UpdateMode>::ptrcall(Object*, void const**,
   void*) const */

void MethodBindT<GPUParticlesCollisionHeightField3D::UpdateMode>::ptrcall
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
      goto LAB_0011ce41;
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
                    /* WARNING: Could not recover jumptable at 0x0011cccb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_0011ce41:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<GPUParticlesCollisionHeightField3D::Resolution>::call(Object*, Variant const**,
   int, Callable::CallError&) const */

Object * MethodBindTRC<GPUParticlesCollisionHeightField3D::Resolution>::call
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
      _err_print_error(&_LC170,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0011cf10;
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
LAB_0011cf10:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<GPUParticlesCollisionHeightField3D::Resolution>::validated_call(Object*, Variant
   const**, Variant*) const */

void __thiscall
MethodBindTRC<GPUParticlesCollisionHeightField3D::Resolution>::validated_call
          (MethodBindTRC<GPUParticlesCollisionHeightField3D::Resolution> *this,Object *param_1,
          Variant **param_2,Variant *param_3)

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
      goto LAB_0011d124;
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
LAB_0011d124:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<GPUParticlesCollisionHeightField3D::Resolution>::ptrcall(Object*, void const**,
   void*) const */

void __thiscall
MethodBindTRC<GPUParticlesCollisionHeightField3D::Resolution>::ptrcall
          (MethodBindTRC<GPUParticlesCollisionHeightField3D::Resolution> *this,Object *param_1,
          void **param_2,void *param_3)

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
      goto LAB_0011d2d3;
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
LAB_0011d2d3:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<GPUParticlesCollisionHeightField3D::Resolution>::validated_call(Object*, Variant
   const**, Variant*) const */

void MethodBindT<GPUParticlesCollisionHeightField3D::Resolution>::validated_call
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
      goto LAB_0011d611;
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
                    /* WARNING: Could not recover jumptable at 0x0011d49c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8));
    return;
  }
LAB_0011d611:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<GPUParticlesCollisionHeightField3D::Resolution>::ptrcall(Object*, void const**,
   void*) const */

void MethodBindT<GPUParticlesCollisionHeightField3D::Resolution>::ptrcall
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
      goto LAB_0011d7f1;
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
                    /* WARNING: Could not recover jumptable at 0x0011d67b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_0011d7f1:
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
      goto LAB_0011d848;
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
LAB_0011d848:
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
      goto LAB_0011da27;
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
LAB_0011da27:
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
      goto LAB_0011dda1;
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
                    /* WARNING: Could not recover jumptable at 0x0011dc26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8),*(undefined1 *)(*(long *)(param_3 + 8) + 8));
    return;
  }
LAB_0011dda1:
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
      goto LAB_0011df91;
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
                    /* WARNING: Could not recover jumptable at 0x0011de1a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3,
               **(char **)((long)param_3 + 8) != '\0');
    return;
  }
LAB_0011df91:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<GPUParticlesCollisionSDF3D::Resolution>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTRC<GPUParticlesCollisionSDF3D::Resolution>::call
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
      _err_print_error(&_LC170,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0011e060;
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
LAB_0011e060:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<GPUParticlesCollisionSDF3D::Resolution>::validated_call(Object*, Variant const**,
   Variant*) const */

void __thiscall
MethodBindTRC<GPUParticlesCollisionSDF3D::Resolution>::validated_call
          (MethodBindTRC<GPUParticlesCollisionSDF3D::Resolution> *this,Object *param_1,
          Variant **param_2,Variant *param_3)

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
      goto LAB_0011e274;
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
LAB_0011e274:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<GPUParticlesCollisionSDF3D::Resolution>::ptrcall(Object*, void const**, void*)
   const */

void __thiscall
MethodBindTRC<GPUParticlesCollisionSDF3D::Resolution>::ptrcall
          (MethodBindTRC<GPUParticlesCollisionSDF3D::Resolution> *this,Object *param_1,
          void **param_2,void *param_3)

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
      goto LAB_0011e423;
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
LAB_0011e423:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<GPUParticlesCollisionSDF3D::Resolution>::validated_call(Object*, Variant const**,
   Variant*) const */

void MethodBindT<GPUParticlesCollisionSDF3D::Resolution>::validated_call
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
      goto LAB_0011e761;
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
                    /* WARNING: Could not recover jumptable at 0x0011e5ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8));
    return;
  }
LAB_0011e761:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<GPUParticlesCollisionSDF3D::Resolution>::ptrcall(Object*, void const**, void*) const
    */

void MethodBindT<GPUParticlesCollisionSDF3D::Resolution>::ptrcall
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
      goto LAB_0011e941;
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
                    /* WARNING: Could not recover jumptable at 0x0011e7cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_0011e941:
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
  Variant *pVVar4;
  long *plVar5;
  undefined4 in_register_00000014;
  long *plVar6;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  undefined1 local_54 [12];
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar6 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar6 != (long *)0x0) && (plVar6[1] != 0)) && (*(char *)(plVar6[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar6[1] == 0) {
      plVar5 = (long *)plVar6[0x23];
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*plVar6 + 0x40))(plVar6);
      }
    }
    else {
      plVar5 = (long *)(plVar6[1] + 0x20);
    }
    if (local_68 == (char *)*plVar5) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC170,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      auVar3._8_4_ = local_54._8_4_;
      auVar3._0_8_ = local_54._0_8_;
      if ((StringName::configured != '\0') && (local_54 = auVar3, local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_0011ea20;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  auVar2._8_4_ = local_54._8_4_;
  auVar2._0_8_ = local_54._0_8_;
  pVVar4 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar4 & 1) != 0) {
        pVVar4 = *(Variant **)(pVVar4 + *(long *)((long)plVar6 + (long)pVVar1) + -1);
      }
      local_54 = (*(code *)pVVar4)();
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
LAB_0011ea20:
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
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  undefined1 auVar3 [12];
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar2 = *(long **)(param_1 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_58 == (char *)*plVar2) {
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
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0011ec3b;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  auVar3 = (*pcVar1)(param_1 + *(long *)(this + 0x60));
  *(undefined1 (*) [12])(param_3 + 8) = auVar3;
LAB_0011ec3b:
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
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  undefined1 auVar3 [12];
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar2 = *(long **)(param_1 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_58 == (char *)*plVar2) {
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
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0011edfa;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  auVar3 = (*pcVar1)(param_1 + *(long *)(this + 0x60));
  *(undefined1 (*) [12])param_3 = auVar3;
LAB_0011edfa:
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
      goto LAB_0011f141;
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
                    /* WARNING: Could not recover jumptable at 0x0011efcd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*(long *)param_3 + 8);
    return;
  }
LAB_0011f141:
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
      goto LAB_0011f321;
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
                    /* WARNING: Could not recover jumptable at 0x0011f1a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3);
    return;
  }
LAB_0011f321:
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
      _err_print_error(&_LC170,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0011f3f0;
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
LAB_0011f3f0:
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
      goto LAB_0011f608;
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
LAB_0011f608:
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
      goto LAB_0011f7c7;
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
LAB_0011f7c7:
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
      goto LAB_0011fb19;
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
                    /* WARNING: Could not recover jumptable at 0x0011f9a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(auVar2._0_8_,(long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_0011fb19:
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
      goto LAB_0011fcf9;
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
                    /* WARNING: Could not recover jumptable at 0x0011fb81. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(auVar2._0_8_,(long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_0011fcf9:
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
      _err_print_error(&_LC170,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0011fdc0;
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
LAB_0011fdc0:
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
      goto LAB_0011ffd4;
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
LAB_0011ffd4:
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
      goto LAB_00120183;
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
LAB_00120183:
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
      goto LAB_001204c1;
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
                    /* WARNING: Could not recover jumptable at 0x0012034c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8));
    return;
  }
LAB_001204c1:
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
      goto LAB_001206a1;
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
                    /* WARNING: Could not recover jumptable at 0x0012052b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_001206a1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<Texture3D>>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<Ref<Texture3D>>::call
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
      local_58 = (Object *)0x11b968;
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC170,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_001207c0;
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
LAB_001207c0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<Texture3D>>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Ref<Texture3D>>::ptrcall
          (MethodBindTRC<Ref<Texture3D>> *this,Object *param_1,void **param_2,void *param_3)

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
      local_48 = (Object *)0x11b968;
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
      goto LAB_00120a46;
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
    if (pOVar5 == (Object *)0x0) goto LAB_00120a46;
    *(undefined8 *)param_3 = 0;
    goto LAB_00120a89;
  }
  pOVar3 = (Object *)__dynamic_cast(local_48,&Object::typeinfo,&RefCounted::typeinfo,0);
                    /* WARNING: Load size is inaccurate */
  pOVar5 = *param_3;
  if (pOVar5 != pOVar3) {
    *(Object **)param_3 = pOVar3;
    if (pOVar3 == (Object *)0x0) {
      if (pOVar5 != (Object *)0x0) goto LAB_00120a89;
    }
    else {
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        *(undefined8 *)param_3 = 0;
      }
      if (pOVar5 != (Object *)0x0) {
LAB_00120a89:
        cVar1 = RefCounted::unreference();
        if (cVar1 != '\0') {
          cVar1 = predelete_handler(pOVar5);
          if (cVar1 != '\0') {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
        }
      }
      if (local_48 == (Object *)0x0) goto LAB_00120a46;
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
LAB_00120a46:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<Texture3D> const&>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<Ref<Texture3D>const&>::validated_call
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
      local_58 = (Object *)0x11b968;
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
      goto LAB_00120d48;
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
LAB_00120d06:
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
      pOVar4 = (Object *)__dynamic_cast(pOVar4,&Object::typeinfo,&Texture3D::typeinfo,0);
      if (pOVar2 != pOVar4) {
        local_58 = pOVar4;
        if (pOVar4 != (Object *)0x0) {
          cVar3 = RefCounted::reference();
          if (cVar3 == '\0') {
            local_58 = (Object *)0x0;
          }
        }
        if (pOVar2 != (Object *)0x0) goto LAB_00120d06;
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
LAB_00120d48:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<Texture3D> const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Ref<Texture3D>const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      local_48 = (Object *)0x11b968;
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
      goto LAB_0012100c;
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
LAB_00120fe8:
    local_48 = (Object *)0x0;
  }
  else {
    cVar3 = RefCounted::init_ref();
    if (cVar3 == '\0') goto LAB_00120fe8;
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
LAB_0012100c:
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
      _err_print_error(&_LC170,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_001212f0;
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
      if (in_R8D != 1) goto LAB_00121330;
LAB_00121320:
      pVVar12 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar12 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00121330:
        uVar8 = 4;
        goto LAB_001212e5;
      }
      if (in_R8D == 1) goto LAB_00121320;
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
    uVar4 = _LC174;
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
LAB_001212e5:
    *in_R9 = uVar8;
    in_R9[2] = 1;
  }
LAB_001212f0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<Texture3D> const&>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindT<Ref<Texture3D>const&>::call
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
      local_48 = (Object *)0x11b968;
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC170,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00121760;
    }
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pVVar13 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (1 < in_R8D) {
    uVar7 = 3;
LAB_00121755:
    *in_R9 = uVar7;
    in_R9[2] = 1;
    goto LAB_00121760;
  }
  pVVar12 = param_2[5];
  if (pVVar12 == (Variant *)0x0) {
    if (in_R8D != 1) goto LAB_001217b0;
LAB_001217a0:
    pVVar12 = *(Variant **)param_4;
  }
  else {
    lVar2 = *(long *)(pVVar12 + -8);
    if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_001217b0:
      uVar7 = 4;
      goto LAB_00121755;
    }
    if (in_R8D == 1) goto LAB_001217a0;
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
  uVar4 = _LC176;
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
LAB_001218cd:
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
      pOVar8 = (Object *)__dynamic_cast(pOVar8,&Object::typeinfo,&Texture3D::typeinfo,0);
      if (pOVar5 != pOVar8) {
        local_48 = pOVar8;
        if (pOVar8 != (Object *)0x0) {
          cVar6 = RefCounted::reference();
          if (cVar6 == '\0') {
            local_48 = (Object *)0x0;
          }
        }
        if (pOVar5 != (Object *)0x0) goto LAB_001218cd;
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
LAB_00121760:
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
      _err_print_error(&_LC170,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_78,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      auVar4._8_4_ = local_60[0]._8_4_;
      auVar4._0_8_ = local_60[0]._0_8_;
      if ((StringName::configured != '\0') && (local_60[0] = auVar4, local_88 != 0)) {
        StringName::unref();
      }
      goto LAB_00121b08;
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
      if (in_R8D != 1) goto LAB_00121b60;
LAB_00121b50:
      pVVar11 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar11 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00121b60:
        uVar7 = 4;
        goto LAB_00121afd;
      }
      if (in_R8D == 1) goto LAB_00121b50;
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
    uVar5 = _LC177;
    if (cVar6 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar5;
    }
    local_60[0] = Variant::operator_cast_to_Vector3(pVVar11);
    (*(code *)pVVar12)((Variant *)((long)plVar10 + (long)pVVar1),local_60);
  }
  else {
    uVar7 = 3;
LAB_00121afd:
    *in_R9 = uVar7;
    in_R9[2] = 1;
  }
LAB_00121b08:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindTRC<Ref<Texture3D>>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<Ref<Texture3D>>::validated_call
          (MethodBindTRC<Ref<Texture3D>> *this,Object *param_1,Variant **param_2,Variant *param_3)

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
      local_48 = (Variant **)0x11b968;
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
      goto LAB_00121da6;
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
LAB_00121da6:
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
    goto LAB_0012204d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_001220b0;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_001220b0:
      uVar6 = 4;
LAB_0012204d:
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
      goto LAB_00121fcb;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_00121fcb:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_bool **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,1);
  uVar4 = _LC178;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_bool(this);
                    /* WARNING: Could not recover jumptable at 0x00122027. Too many branches */
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
      _err_print_error(&_LC170,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_00122116;
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
LAB_00122116:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass,
   GPUParticlesCollisionHeightField3D::UpdateMode>(__UnexistingClass*, void
   (__UnexistingClass::*)(GPUParticlesCollisionHeightField3D::UpdateMode), Variant const**, int,
   Callable::CallError&, Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,GPUParticlesCollisionHeightField3D::UpdateMode>
               (__UnexistingClass *param_1,_func_void_UpdateMode *param_2,Variant **param_3,
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
    goto LAB_001223dd;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_00122440;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_00122440:
      uVar6 = 4;
LAB_001223dd:
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
      goto LAB_0012235b;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0012235b:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_UpdateMode **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
  uVar4 = _LC174;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_long(this);
                    /* WARNING: Could not recover jumptable at 0x001223b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)((char)(param_1 + (long)param_3));
  return;
}



/* MethodBindT<GPUParticlesCollisionHeightField3D::UpdateMode>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindT<GPUParticlesCollisionHeightField3D::UpdateMode>::call
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
      _err_print_error(&_LC170,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_001224a6;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,GPUParticlesCollisionHeightField3D::UpdateMode>
            (p_Var2,(_func_void_UpdateMode *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,
             in_R8,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_001224a6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass,
   GPUParticlesCollisionHeightField3D::Resolution>(__UnexistingClass*, void
   (__UnexistingClass::*)(GPUParticlesCollisionHeightField3D::Resolution), Variant const**, int,
   Callable::CallError&, Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,GPUParticlesCollisionHeightField3D::Resolution>
               (__UnexistingClass *param_1,_func_void_Resolution *param_2,Variant **param_3,
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
    goto LAB_0012276d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_001227d0;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_001227d0:
      uVar6 = 4;
LAB_0012276d:
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
      goto LAB_001226eb;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_001226eb:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_Resolution **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
  uVar4 = _LC174;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_long(this);
                    /* WARNING: Could not recover jumptable at 0x00122746. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)((char)(param_1 + (long)param_3));
  return;
}



/* MethodBindT<GPUParticlesCollisionHeightField3D::Resolution>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindT<GPUParticlesCollisionHeightField3D::Resolution>::call
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
      _err_print_error(&_LC170,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_00122836;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,GPUParticlesCollisionHeightField3D::Resolution>
            (p_Var2,(_func_void_Resolution *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,
             in_R8,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_00122836:
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
    goto LAB_00122b2d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  iVar6 = 2 - uVar10;
  if (lVar1 == 0) {
    if (iVar6 == 0) {
      this = (Variant *)*plVar8;
LAB_00122b5d:
      this_00 = (Variant *)plVar8[1];
      goto LAB_00122a95;
    }
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    iVar11 = (int)lVar2;
    if (iVar6 <= iVar11) {
      if (uVar10 == 0) {
        lVar9 = (long)(iVar11 + -2);
        if (lVar2 <= lVar9) goto LAB_00122b78;
        this = (Variant *)(lVar1 + lVar9 * 0x18);
      }
      else {
        this = (Variant *)*plVar8;
        if (uVar10 == 2) goto LAB_00122b5d;
      }
      lVar9 = (long)(int)((uVar10 ^ 1) + (iVar11 - iVar6));
      if (lVar2 <= lVar9) {
LAB_00122b78:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      this_00 = (Variant *)(lVar1 + lVar9 * 0x18);
LAB_00122a95:
      *(undefined4 *)param_6 = 0;
      if (((ulong)param_2 & 1) != 0) {
        param_2 = *(_func_void_int_bool **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
      }
      cVar5 = Variant::can_convert_strict(*(undefined4 *)this_00,1);
      uVar4 = _LC179;
      if (cVar5 == '\0') {
        *(undefined4 *)param_6 = 2;
        *(undefined8 *)(param_6 + 4) = uVar4;
      }
      Variant::operator_cast_to_bool(this_00);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
      uVar4 = _LC174;
      if (cVar5 == '\0') {
        *(undefined4 *)param_6 = 2;
        *(undefined8 *)(param_6 + 4) = uVar4;
      }
      iVar6 = Variant::operator_cast_to_int(this);
                    /* WARNING: Could not recover jumptable at 0x00122b1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*param_2)((int)(param_1 + (long)param_3),SUB41(iVar6,0));
      return;
    }
  }
  uVar7 = 4;
LAB_00122b2d:
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
      _err_print_error(&_LC170,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_00122c16;
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
LAB_00122c16:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass,
   GPUParticlesCollisionSDF3D::Resolution>(__UnexistingClass*, void
   (__UnexistingClass::*)(GPUParticlesCollisionSDF3D::Resolution), Variant const**, int,
   Callable::CallError&, Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,GPUParticlesCollisionSDF3D::Resolution>
               (__UnexistingClass *param_1,_func_void_Resolution *param_2,Variant **param_3,
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
    goto LAB_00122edd;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_00122f40;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_00122f40:
      uVar6 = 4;
LAB_00122edd:
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
      goto LAB_00122e5b;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_00122e5b:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_Resolution **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
  uVar4 = _LC174;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_long(this);
                    /* WARNING: Could not recover jumptable at 0x00122eb6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)((char)(param_1 + (long)param_3));
  return;
}



/* MethodBindT<GPUParticlesCollisionSDF3D::Resolution>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindT<GPUParticlesCollisionSDF3D::Resolution>::call
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
      _err_print_error(&_LC170,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_00122fa6;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,GPUParticlesCollisionSDF3D::Resolution>
            (p_Var2,(_func_void_Resolution *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,
             in_R8,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_00122fa6:
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
    goto LAB_0012326d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_001232d0;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_001232d0:
      uVar6 = 4;
LAB_0012326d:
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
      goto LAB_001231eb;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_001231eb:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_float **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,3);
  uVar4 = _LC180;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  fVar9 = Variant::operator_cast_to_float(this);
                    /* WARNING: Could not recover jumptable at 0x00123244. Too many branches */
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
      _err_print_error(&_LC170,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_00123336;
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
LAB_00123336:
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
    goto LAB_001235fd;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_00123660;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_00123660:
      uVar6 = 4;
LAB_001235fd:
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
      goto LAB_0012357b;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0012357b:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_uint **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
  uVar4 = _LC174;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_unsigned_int(this);
                    /* WARNING: Could not recover jumptable at 0x001235d6. Too many branches */
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
      _err_print_error(&_LC170,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_001236c6;
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
LAB_001236c6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info_helper<int>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<int>(int param_1,int *param_2,PropertyInfo *param_3)

{
  long lVar1;
  int iVar2;
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  undefined *local_78;
  long local_70;
  long local_68;
  undefined4 local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = *param_2;
  if (iVar2 == param_1) {
    local_80 = 0;
    local_88 = 0;
    local_78 = &_LC51;
    local_70 = 0;
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
    *(undefined4 *)param_3 = local_78._0_4_;
    if (*(long *)(param_3 + 8) != local_70) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 8));
      lVar1 = local_70;
      local_70 = 0;
      *(long *)(param_3 + 8) = lVar1;
    }
    if (*(long *)(param_3 + 0x10) != local_68) {
      StringName::unref();
      lVar1 = local_68;
      local_68 = 0;
      *(long *)(param_3 + 0x10) = lVar1;
    }
    *(undefined4 *)(param_3 + 0x18) = local_60;
    if (*(long *)(param_3 + 0x20) != local_58) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 0x20));
      lVar1 = local_58;
      local_58 = 0;
      *(long *)(param_3 + 0x20) = lVar1;
    }
    *(undefined4 *)(param_3 + 0x28) = local_50;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
    iVar2 = *param_2;
  }
  *param_2 = iVar2 + 1;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, bool>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindT<int,bool>::_gen_argument_type_info(int param_1)

{
  long lVar1;
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar2;
  long in_FS_OFFSET;
  int local_84;
  undefined8 local_80;
  undefined8 local_78;
  long local_70;
  undefined *local_68;
  long local_60;
  long local_58;
  undefined4 local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  pPVar2 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)pPVar2 = 0;
  *(undefined4 *)(pPVar2 + 0x18) = 0;
  *(undefined8 *)(pPVar2 + 0x20) = 0;
  *(undefined4 *)(pPVar2 + 0x28) = 6;
  *(undefined1 (*) [16])(pPVar2 + 8) = (undefined1  [16])0x0;
  local_84 = 0;
  call_get_argument_type_info_helper<int>(in_EDX,&local_84,pPVar2);
  if (in_EDX == local_84) {
    local_70 = 0;
    local_78 = 0;
    local_68 = &_LC51;
    local_60 = 0;
    String::parse_latin1((StrRange *)&local_78);
    local_80 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_68,1,(CowData<char32_t> *)&local_80,0,(StrRange *)&local_78,6,
               &local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    if ((StringName::configured != '\0') && (local_70 != 0)) {
      StringName::unref();
    }
    *(undefined4 *)pPVar2 = local_68._0_4_;
    if (*(long *)(pPVar2 + 8) != local_60) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(pPVar2 + 8));
      lVar1 = local_60;
      local_60 = 0;
      *(long *)(pPVar2 + 8) = lVar1;
    }
    if (*(long *)(pPVar2 + 0x10) != local_58) {
      StringName::unref();
      lVar1 = local_58;
      local_58 = 0;
      *(long *)(pPVar2 + 0x10) = lVar1;
    }
    *(undefined4 *)(pPVar2 + 0x18) = local_50;
    if (*(long *)(pPVar2 + 0x20) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(pPVar2 + 0x20));
      lVar1 = local_48;
      local_48 = 0;
      *(long *)(pPVar2 + 0x20) = lVar1;
    }
    *(undefined4 *)(pPVar2 + 0x28) = local_40;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pPVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool, int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<bool,int>::_gen_argument_type_info(int param_1)

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
    call_get_argument_type_info_helper<int>(0,(int *)&local_70,(PropertyInfo *)&local_68);
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
    goto LAB_00123cb8;
  }
  local_70 = 0;
  local_78 = 0;
  local_68 = &_LC51;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._0_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_78);
  local_80 = 0;
  *puVar5 = 1;
  puVar5[6] = 0;
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar5[10] = 6;
LAB_00123d9f:
    StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_70);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_78);
    puVar5[10] = 6;
    if (puVar5[6] != 0x11) goto LAB_00123d9f;
    StringName::StringName((StringName *)&local_68,(String *)(puVar5 + 8),false);
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
LAB_00123cb8:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Control flow encountered bad instruction data */
/* List<GPUParticlesCollisionSDF3D::PlotMesh, DefaultAllocator>::~List() */

void __thiscall
List<GPUParticlesCollisionSDF3D::PlotMesh,DefaultAllocator>::~List
          (List<GPUParticlesCollisionSDF3D::PlotMesh,DefaultAllocator> *this)

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
/* Image::~Image() */

void __thiscall Image::~Image(Image *this)

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
/* MethodBindTRC<GPUParticlesCollisionHeightField3D::UpdateMode>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<GPUParticlesCollisionHeightField3D::UpdateMode>::~MethodBindTRC
          (MethodBindTRC<GPUParticlesCollisionHeightField3D::UpdateMode> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<GPUParticlesCollisionHeightField3D::UpdateMode>::~MethodBindT() */

void __thiscall
MethodBindT<GPUParticlesCollisionHeightField3D::UpdateMode>::~MethodBindT
          (MethodBindT<GPUParticlesCollisionHeightField3D::UpdateMode> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<GPUParticlesCollisionHeightField3D::Resolution>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<GPUParticlesCollisionHeightField3D::Resolution>::~MethodBindTRC
          (MethodBindTRC<GPUParticlesCollisionHeightField3D::Resolution> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<GPUParticlesCollisionHeightField3D::Resolution>::~MethodBindT() */

void __thiscall
MethodBindT<GPUParticlesCollisionHeightField3D::Resolution>::~MethodBindT
          (MethodBindT<GPUParticlesCollisionHeightField3D::Resolution> *this)

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
/* MethodBindTRC<Ref<Texture3D>>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Ref<Texture3D>>::~MethodBindTRC(MethodBindTRC<Ref<Texture3D>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Ref<Texture3D> const&>::~MethodBindT() */

void __thiscall
MethodBindT<Ref<Texture3D>const&>::~MethodBindT(MethodBindT<Ref<Texture3D>const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<GPUParticlesCollisionSDF3D::Resolution>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<GPUParticlesCollisionSDF3D::Resolution>::~MethodBindTRC
          (MethodBindTRC<GPUParticlesCollisionSDF3D::Resolution> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<GPUParticlesCollisionSDF3D::Resolution>::~MethodBindT() */

void __thiscall
MethodBindT<GPUParticlesCollisionSDF3D::Resolution>::~MethodBindT
          (MethodBindT<GPUParticlesCollisionSDF3D::Resolution> *this)

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



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Vector3 const&>::~MethodBindT() */

void __thiscall MethodBindT<Vector3_const&>::~MethodBindT(MethodBindT<Vector3_const&> *this)

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
/* MethodBindTRC<unsigned int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<unsigned_int>::~MethodBindTRC(MethodBindTRC<unsigned_int> *this)

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
/* WorkerThreadPool::GroupUserData<GPUParticlesCollisionSDF3D, void
   (GPUParticlesCollisionSDF3D::*)(unsigned int, GPUParticlesCollisionSDF3D::ComputeSDFParams*),
   GPUParticlesCollisionSDF3D::ComputeSDFParams*>::~GroupUserData() */

void __thiscall
WorkerThreadPool::
GroupUserData<GPUParticlesCollisionSDF3D,void(GPUParticlesCollisionSDF3D::*)(unsigned_int,GPUParticlesCollisionSDF3D::ComputeSDFParams*),GPUParticlesCollisionSDF3D::ComputeSDFParams*>
::~GroupUserData(GroupUserData<GPUParticlesCollisionSDF3D,void(GPUParticlesCollisionSDF3D::*)(unsigned_int,GPUParticlesCollisionSDF3D::ComputeSDFParams*),GPUParticlesCollisionSDF3D::ComputeSDFParams*>
                 *this)

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



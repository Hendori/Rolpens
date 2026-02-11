
/* GPUParticles3D::get_aabb() const */

GPUParticles3D * __thiscall GPUParticles3D::get_aabb(GPUParticles3D *this)

{
  *(undefined8 *)this = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined8 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  return this;
}



/* GPUParticles3D::get_use_fixed_seed() const */

GPUParticles3D __thiscall GPUParticles3D::get_use_fixed_seed(GPUParticles3D *this)

{
  return this[0x690];
}



/* GPUParticles3D::get_seed() const */

undefined4 __thiscall GPUParticles3D::get_seed(GPUParticles3D *this)

{
  return *(undefined4 *)(this + 0x68c);
}



/* GPUParticles3D::is_emitting() const */

GPUParticles3D __thiscall GPUParticles3D::is_emitting(GPUParticles3D *this)

{
  return this[0x628];
}



/* GPUParticles3D::get_amount() const */

undefined4 __thiscall GPUParticles3D::get_amount(GPUParticles3D *this)

{
  return *(undefined4 *)(this + 0x62c);
}



/* GPUParticles3D::get_lifetime() const */

undefined8 __thiscall GPUParticles3D::get_lifetime(GPUParticles3D *this)

{
  return *(undefined8 *)(this + 0x638);
}



/* GPUParticles3D::get_interp_to_end() const */

undefined4 __thiscall GPUParticles3D::get_interp_to_end(GPUParticles3D *this)

{
  return *(undefined4 *)(this + 0x6e8);
}



/* GPUParticles3D::get_one_shot() const */

GPUParticles3D __thiscall GPUParticles3D::get_one_shot(GPUParticles3D *this)

{
  return this[0x62b];
}



/* GPUParticles3D::get_pre_process_time() const */

undefined8 __thiscall GPUParticles3D::get_pre_process_time(GPUParticles3D *this)

{
  return *(undefined8 *)(this + 0x640);
}



/* GPUParticles3D::get_explosiveness_ratio() const */

undefined4 __thiscall GPUParticles3D::get_explosiveness_ratio(GPUParticles3D *this)

{
  return *(undefined4 *)(this + 0x648);
}



/* GPUParticles3D::get_randomness_ratio() const */

undefined4 __thiscall GPUParticles3D::get_randomness_ratio(GPUParticles3D *this)

{
  return *(undefined4 *)(this + 0x64c);
}



/* GPUParticles3D::get_visibility_aabb() const */

void GPUParticles3D::get_visibility_aabb(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_RSI;
  undefined8 *in_RDI;
  
  uVar1 = *(undefined8 *)(in_RSI + 0x658);
  uVar2 = *(undefined8 *)(in_RSI + 0x660);
  in_RDI[2] = *(undefined8 *)(in_RSI + 0x668);
  *in_RDI = uVar1;
  in_RDI[1] = uVar2;
  return;
}



/* GPUParticles3D::get_use_local_coordinates() const */

GPUParticles3D __thiscall GPUParticles3D::get_use_local_coordinates(GPUParticles3D *this)

{
  return this[0x670];
}



/* GPUParticles3D::get_speed_scale() const */

undefined8 __thiscall GPUParticles3D::get_speed_scale(GPUParticles3D *this)

{
  return *(undefined8 *)(this + 0x650);
}



/* GPUParticles3D::get_collision_base_size() const */

undefined4 __thiscall GPUParticles3D::get_collision_base_size(GPUParticles3D *this)

{
  return *(undefined4 *)(this + 0x688);
}



/* GPUParticles3D::is_trail_enabled() const */

GPUParticles3D __thiscall GPUParticles3D::is_trail_enabled(GPUParticles3D *this)

{
  return this[0x691];
}



/* GPUParticles3D::get_trail_lifetime() const */

undefined8 __thiscall GPUParticles3D::get_trail_lifetime(GPUParticles3D *this)

{
  return *(undefined8 *)(this + 0x698);
}



/* GPUParticles3D::get_draw_order() const */

undefined4 __thiscall GPUParticles3D::get_draw_order(GPUParticles3D *this)

{
  return *(undefined4 *)(this + 0x6b0);
}



/* GPUParticles3D::get_draw_passes() const */

undefined4 __thiscall GPUParticles3D::get_draw_passes(GPUParticles3D *this)

{
  if (*(long *)(this + 0x6c0) != 0) {
    return *(undefined4 *)(*(long *)(this + 0x6c0) + -8);
  }
  return 0;
}



/* GPUParticles3D::get_fixed_fps() const */

undefined4 __thiscall GPUParticles3D::get_fixed_fps(GPUParticles3D *this)

{
  return *(undefined4 *)(this + 0x674);
}



/* GPUParticles3D::get_fractional_delta() const */

GPUParticles3D __thiscall GPUParticles3D::get_fractional_delta(GPUParticles3D *this)

{
  return this[0x678];
}



/* GPUParticles3D::get_interpolate() const */

GPUParticles3D __thiscall GPUParticles3D::get_interpolate(GPUParticles3D *this)

{
  return this[0x679];
}



/* GPUParticles3D::get_transform_align() const */

undefined4 __thiscall GPUParticles3D::get_transform_align(GPUParticles3D *this)

{
  return *(undefined4 *)(this + 0x6a0);
}



/* GPUParticles3D::get_amount_ratio() const */

undefined4 __thiscall GPUParticles3D::get_amount_ratio(GPUParticles3D *this)

{
  return *(undefined4 *)(this + 0x630);
}



/* GPUParticles3D::set_seed(unsigned int) */

void __thiscall GPUParticles3D::set_seed(GPUParticles3D *this,uint param_1)

{
  long *plVar1;
  
  *(uint *)(this + 0x68c) = param_1;
  plVar1 = (long *)RenderingServer::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x001001f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x818))(plVar1,*(undefined8 *)(this + 0x620),param_1);
  return;
}



/* GPUParticles3D::set_pre_process_time(double) */

void __thiscall GPUParticles3D::set_pre_process_time(GPUParticles3D *this,double param_1)

{
  long *plVar1;
  
  *(double *)(this + 0x640) = param_1;
  plVar1 = (long *)RenderingServer::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x00100232. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x7b8))(*(undefined8 *)(this + 0x640),plVar1,*(undefined8 *)(this + 0x620))
  ;
  return;
}



/* GPUParticles3D::set_explosiveness_ratio(float) */

void __thiscall GPUParticles3D::set_explosiveness_ratio(GPUParticles3D *this,float param_1)

{
  long *plVar1;
  
  *(float *)(this + 0x648) = param_1;
  plVar1 = (long *)RenderingServer::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x00100272. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x7c8))(*(undefined4 *)(this + 0x648),plVar1,*(undefined8 *)(this + 0x620))
  ;
  return;
}



/* GPUParticles3D::set_randomness_ratio(float) */

void __thiscall GPUParticles3D::set_randomness_ratio(GPUParticles3D *this,float param_1)

{
  long *plVar1;
  
  *(float *)(this + 0x64c) = param_1;
  plVar1 = (long *)RenderingServer::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x001002b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 2000))(*(undefined4 *)(this + 0x64c),plVar1,*(undefined8 *)(this + 0x620));
  return;
}



/* GPUParticles3D::set_use_local_coordinates(bool) */

void __thiscall GPUParticles3D::set_use_local_coordinates(GPUParticles3D *this,bool param_1)

{
  long *plVar1;
  
  this[0x670] = (GPUParticles3D)param_1;
  plVar1 = (long *)RenderingServer::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x001002f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x7e8))(plVar1,*(undefined8 *)(this + 0x620),this[0x670]);
  return;
}



/* GPUParticles3D::set_speed_scale(double) */

void __thiscall GPUParticles3D::set_speed_scale(GPUParticles3D *this,double param_1)

{
  long *plVar1;
  
  *(double *)(this + 0x650) = param_1;
  plVar1 = (long *)RenderingServer::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x0010033e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x7e0))(param_1,plVar1,*(undefined8 *)(this + 0x620));
  return;
}



/* GPUParticles3D::set_collision_base_size(float) */

void __thiscall GPUParticles3D::set_collision_base_size(GPUParticles3D *this,float param_1)

{
  long *plVar1;
  
  *(float *)(this + 0x688) = param_1;
  plVar1 = (long *)RenderingServer::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x0010037e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x810))(param_1,plVar1,*(undefined8 *)(this + 0x620));
  return;
}



/* GPUParticles3D::set_draw_order(GPUParticles3D::DrawOrder) */

void __thiscall GPUParticles3D::set_draw_order(GPUParticles3D *this,undefined4 param_2)

{
  long *plVar1;
  
  *(undefined4 *)(this + 0x6b0) = param_2;
  plVar1 = (long *)RenderingServer::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x001003b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x860))(plVar1,*(undefined8 *)(this + 0x620),param_2);
  return;
}



/* GPUParticles3D::set_fixed_fps(int) */

void __thiscall GPUParticles3D::set_fixed_fps(GPUParticles3D *this,int param_1)

{
  long *plVar1;
  
  *(int *)(this + 0x674) = param_1;
  plVar1 = (long *)RenderingServer::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x001003f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x7f8))(plVar1,*(undefined8 *)(this + 0x620),param_1);
  return;
}



/* GPUParticles3D::set_fractional_delta(bool) */

void __thiscall GPUParticles3D::set_fractional_delta(GPUParticles3D *this,bool param_1)

{
  long *plVar1;
  
  this[0x678] = (GPUParticles3D)param_1;
  plVar1 = (long *)RenderingServer::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x00100438. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x808))(plVar1,*(undefined8 *)(this + 0x620),param_1);
  return;
}



/* GPUParticles3D::set_interpolate(bool) */

void __thiscall GPUParticles3D::set_interpolate(GPUParticles3D *this,bool param_1)

{
  long *plVar1;
  
  this[0x679] = (GPUParticles3D)param_1;
  plVar1 = (long *)RenderingServer::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x00100478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x800))(plVar1,*(undefined8 *)(this + 0x620),param_1);
  return;
}



/* GPUParticles3D::capture_aabb() const */

void GPUParticles3D::capture_aabb(void)

{
  long lVar1;
  long *plVar2;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  plVar2 = (long *)RenderingServer::get_singleton();
  (**(code **)(*plVar2 + 0x878))();
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GPUParticles3D::request_particles_process(float) */

void __thiscall GPUParticles3D::request_particles_process(GPUParticles3D *this,float param_1)

{
  long *plVar1;
  
  plVar1 = (long *)RenderingServer::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x00100516. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x7c0))(param_1,plVar1,*(undefined8 *)(this + 0x620));
  return;
}



/* GPUParticles3D::emit_particle(Transform3D const&, Vector3 const&, Color const&, Color const&,
   unsigned int) */

void __thiscall
GPUParticles3D::emit_particle
          (GPUParticles3D *this,Transform3D *param_1,Vector3 *param_2,Color *param_3,Color *param_4,
          uint param_5)

{
  long *plVar1;
  
  plVar1 = (long *)RenderingServer::get_singleton();
  (**(code **)(*plVar1 + 0x858))
            (plVar1,*(undefined8 *)(this + 0x620),param_1,param_2,param_3,param_4,param_5);
  return;
}



/* GPUParticles3D::set_amount_ratio(float) */

void __thiscall GPUParticles3D::set_amount_ratio(GPUParticles3D *this,float param_1)

{
  long *plVar1;
  
  *(float *)(this + 0x630) = param_1;
  plVar1 = (long *)RenderingServer::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x001005be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x7a0))(param_1,plVar1,*(undefined8 *)(this + 0x620));
  return;
}



/* GPUParticles3D::set_interp_to_end(float) */

void __thiscall GPUParticles3D::set_interp_to_end(GPUParticles3D *this,float param_1)

{
  long *plVar1;
  float fVar2;
  
  if (param_1 < 0.0) {
    fVar2 = 0.0;
  }
  else {
    fVar2 = _LC1;
    if (param_1 <= _LC1) {
      fVar2 = param_1;
    }
  }
  *(float *)(this + 0x6e8) = fVar2;
  plVar1 = (long *)RenderingServer::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x0010060a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x890))(plVar1,*(undefined8 *)(this + 0x620));
  return;
}



/* GPUParticles3D::set_use_fixed_seed(bool) */

void __thiscall GPUParticles3D::set_use_fixed_seed(GPUParticles3D *this,bool param_1)

{
  if (this[0x690] != (GPUParticles3D)param_1) {
    this[0x690] = (GPUParticles3D)param_1;
    Object::notify_property_list_changed();
    return;
  }
  return;
}



/* GPUParticles3D::set_visibility_aabb(AABB const&) */

void __thiscall GPUParticles3D::set_visibility_aabb(GPUParticles3D *this,AABB *param_1)

{
  undefined8 uVar1;
  long *plVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x658) = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x660) = uVar1;
  *(undefined8 *)(this + 0x668) = *(undefined8 *)(param_1 + 0x10);
  plVar2 = (long *)RenderingServer::get_singleton();
  (**(code **)(*plVar2 + 0x7d8))(plVar2,*(undefined8 *)(this + 0x620),this + 0x658);
  Node3D::update_gizmos();
  return;
}



/* GPUParticles3D::set_trail_enabled(bool) */

void __thiscall GPUParticles3D::set_trail_enabled(GPUParticles3D *this,bool param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  
  this[0x691] = (GPUParticles3D)param_1;
  plVar1 = (long *)RenderingServer::get_singleton();
  auVar2._4_12_ = SUB1612((undefined1  [16])0x0,4);
  auVar2._0_4_ = (float)*(double *)(this + 0x698);
  (**(code **)(*plVar1 + 0x828))(auVar2._0_8_,plVar1,*(undefined8 *)(this + 0x620),this[0x691]);
  Node::update_configuration_warnings();
  return;
}



/* GPUParticles3D::get_sub_emitter() const */

void GPUParticles3D::get_sub_emitter(void)

{
  long in_RSI;
  NodePath *in_RDI;
  
  NodePath::NodePath(in_RDI,(NodePath *)(in_RSI + 0x680));
  return;
}



/* GPUParticles3D::set_one_shot(bool) */

void __thiscall GPUParticles3D::set_one_shot(GPUParticles3D *this,bool param_1)

{
  long *plVar1;
  
  this[0x62b] = (GPUParticles3D)param_1;
  plVar1 = (long *)RenderingServer::get_singleton();
  (**(code **)(*plVar1 + 0x7b0))(plVar1,*(undefined8 *)(this + 0x620),this[0x62b]);
  if ((this[0x628] != (GPUParticles3D)0x0) && (this[0x62b] == (GPUParticles3D)0x0)) {
    plVar1 = (long *)RenderingServer::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x00100772. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x848))(plVar1,*(undefined8 *)(this + 0x620));
    return;
  }
  return;
}



/* GPUParticles3D::set_transform_align(GPUParticles3D::TransformAlign) */

void __thiscall GPUParticles3D::set_transform_align(GPUParticles3D *this,uint param_2)

{
  long *plVar1;
  
  if (param_2 < 4) {
    *(uint *)(this + 0x6a0) = param_2;
    plVar1 = (long *)RenderingServer::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x001007b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x820))
              (plVar1,*(undefined8 *)(this + 0x620),*(undefined4 *)(this + 0x6a0));
    return;
  }
  _err_print_index_error
            ("set_transform_align","scene/3d/gpu_particles_3d.cpp",0x275,(ulong)param_2,4,
             "uint32_t(p_align)","4","",false,false);
  return;
}



/* GPUParticles3D::set_amount(int) */

undefined1  [16] __thiscall GPUParticles3D::set_amount(GPUParticles3D *this,int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  ulong uStack_10;
  
  if (0 < param_1) {
    *(int *)(this + 0x62c) = param_1;
    plVar1 = (long *)RenderingServer::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x00100832. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar2 = (**(code **)(*plVar1 + 0x798))
                       (plVar1,*(undefined8 *)(this + 0x620),*(undefined4 *)(this + 0x62c));
    return auVar2;
  }
  _err_print_error("set_amount","scene/3d/gpu_particles_3d.cpp",0x4b,
                   "Condition \"p_amount < 1\" is true.",
                   "Amount of particles cannot be smaller than 1.",0);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uStack_10;
  return auVar2 << 0x40;
}



/* GPUParticles3D::set_lifetime(double) */

undefined1  [16] __thiscall GPUParticles3D::set_lifetime(GPUParticles3D *this,double param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  ulong uStack_10;
  
  if (0.0 < param_1) {
    *(double *)(this + 0x638) = param_1;
    plVar1 = (long *)RenderingServer::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x001008ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar2 = (**(code **)(*plVar1 + 0x7a8))
                       (*(undefined8 *)(this + 0x638),plVar1,*(undefined8 *)(this + 0x620));
    return auVar2;
  }
  _err_print_error("set_lifetime","scene/3d/gpu_particles_3d.cpp",0x51,
                   "Condition \"p_lifetime <= 0\" is true.",
                   "Particles lifetime must be greater than 0.",0);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uStack_10;
  return auVar2 << 0x40;
}



/* GPUParticles3D::set_trail_lifetime(double) */

void __thiscall GPUParticles3D::set_trail_lifetime(GPUParticles3D *this,double param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  
  if (_LC14 <= param_1) {
    *(double *)(this + 0x698) = param_1;
    plVar1 = (long *)RenderingServer::get_singleton();
    auVar2._4_12_ = SUB1612((undefined1  [16])0x0,4);
    auVar2._0_4_ = (float)*(double *)(this + 0x698);
                    /* WARNING: Could not recover jumptable at 0x0010093b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x828))(auVar2._0_8_,plVar1,*(undefined8 *)(this + 0x620),this[0x691]);
    return;
  }
  _err_print_error("set_trail_lifetime","scene/3d/gpu_particles_3d.cpp",0xf7,
                   "Condition \"p_seconds < 0.01\" is true.",0,0);
  return;
}



/* CowData<Transform3D>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Transform3D>::_copy_on_write(CowData<Transform3D> *this)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  size_t __n;
  ulong uVar5;
  
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
  __n = lVar2 * 0x30;
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



/* GPUParticles3D::get_skin() const */

void GPUParticles3D::get_skin(void)

{
  char cVar1;
  long in_RSI;
  long *in_RDI;
  
  *in_RDI = 0;
  if (*(long *)(in_RSI + 0x6c8) != 0) {
    *in_RDI = *(long *)(in_RSI + 0x6c8);
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *in_RDI = 0;
    }
  }
  return;
}



/* GPUParticles3D::get_process_material() const */

void GPUParticles3D::get_process_material(void)

{
  char cVar1;
  long in_RSI;
  long *in_RDI;
  
  *in_RDI = 0;
  if (*(long *)(in_RSI + 0x6a8) != 0) {
    *in_RDI = *(long *)(in_RSI + 0x6a8);
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *in_RDI = 0;
    }
  }
  return;
}



/* void Ref<Texture2D>::TEMPNAMEPLACEHOLDERVALUE(Ref<CurveTexture> const&) [clone .isra.0] */

void __thiscall Ref<Texture2D>::operator=(Ref<Texture2D> *this,Ref *param_1)

{
  Object *pOVar1;
  char cVar2;
  Object *pOVar3;
  
  pOVar1 = *(Object **)this;
  if (param_1 == (Ref *)0x0) {
    if (pOVar1 == (Object *)0x0) {
      return;
    }
    *(undefined8 *)this = 0;
  }
  else {
    pOVar3 = (Object *)__dynamic_cast(param_1,&Object::typeinfo,&Texture2D::typeinfo,0);
    if (pOVar3 == pOVar1) {
      return;
    }
    *(Object **)this = pOVar3;
    if ((pOVar3 != (Object *)0x0) && (cVar2 = RefCounted::reference(), cVar2 == '\0')) {
      *(undefined8 *)this = 0;
    }
    if (pOVar1 == (Object *)0x0) {
      return;
    }
  }
  cVar2 = RefCounted::unreference();
  if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar1), cVar2 != '\0')) {
    (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
    Memory::free_static(pOVar1,false);
    return;
  }
  return;
}



/* GPUParticles3D::get_draw_pass_mesh(int) const */

long * GPUParticles3D::get_draw_pass_mesh(int param_1)

{
  long lVar1;
  char cVar2;
  long lVar3;
  int in_EDX;
  long in_RSI;
  undefined4 in_register_0000003c;
  long *plVar4;
  long lVar5;
  
  plVar4 = (long *)CONCAT44(in_register_0000003c,param_1);
  lVar3 = (long)in_EDX;
  lVar1 = *(long *)(in_RSI + 0x6c0);
  if (in_EDX < 0) {
    if (lVar1 != 0) {
      lVar5 = *(long *)(lVar1 + -8);
      goto LAB_00100c09;
    }
  }
  else if (lVar1 != 0) {
    lVar5 = *(long *)(lVar1 + -8);
    if (lVar3 < lVar5) {
      *plVar4 = 0;
      lVar1 = *(long *)(lVar1 + lVar3 * 8);
      if (lVar1 != 0) {
        *plVar4 = lVar1;
        cVar2 = RefCounted::reference();
        if (cVar2 == '\0') {
          *plVar4 = 0;
        }
      }
      return plVar4;
    }
    goto LAB_00100c09;
  }
  lVar5 = 0;
LAB_00100c09:
  _err_print_index_error
            ("get_draw_pass_mesh","scene/3d/gpu_particles_3d.cpp",0x12f,lVar3,lVar5,"p_pass",
             "draw_passes.size()","",false,false);
  *plVar4 = 0;
  return plVar4;
}



/* GPUParticles3D::restart(bool) */

void __thiscall GPUParticles3D::restart(GPUParticles3D *this,bool param_1)

{
  float fVar1;
  undefined4 uVar2;
  long *plVar3;
  float fVar4;
  
  if ((!param_1) && (this[0x690] == (GPUParticles3D)0x0)) {
    uVar2 = Math::rand();
    *(undefined4 *)(this + 0x68c) = uVar2;
    plVar3 = (long *)RenderingServer::get_singleton();
    (**(code **)(*plVar3 + 0x818))(plVar3,*(undefined8 *)(this + 0x620),uVar2);
  }
  plVar3 = (long *)RenderingServer::get_singleton();
  (**(code **)(*plVar3 + 0x848))(plVar3,*(undefined8 *)(this + 0x620));
  plVar3 = (long *)RenderingServer::get_singleton();
  (**(code **)(*plVar3 + 0x788))(plVar3,*(undefined8 *)(this + 0x620),1);
  fVar1 = _LC28;
  fVar4 = _LC1 - *(float *)(this + 0x648);
  *(undefined2 *)(this + 0x628) = 0x101;
  this[0x62a] = (GPUParticles3D)0x0;
  *(undefined8 *)(this + 0x6d0) = 0;
  *(double *)(this + 0x6d8) = (double)fVar4 * *(double *)(this + 0x638);
  *(double *)(this + 0x6e0) = (double)(fVar1 - *(float *)(this + 0x648)) * *(double *)(this + 0x638)
  ;
  Node::set_process_internal(SUB81(this,0));
  return;
}



/* GPUParticles3D::_restart_bind_compat_92089() */

void __thiscall GPUParticles3D::_restart_bind_compat_92089(GPUParticles3D *this)

{
  restart(this,false);
  return;
}



/* GPUParticles3D::set_emitting(bool) */

void __thiscall GPUParticles3D::set_emitting(GPUParticles3D *this,bool param_1)

{
  GPUParticles3D GVar1;
  undefined4 uVar2;
  long *plVar3;
  bool bVar4;
  float fVar5;
  
  bVar4 = SUB81(this,0);
  if (param_1) {
    if ((this[0x628] == (GPUParticles3D)0x0) && (this[0x690] == (GPUParticles3D)0x0)) {
      uVar2 = Math::rand();
      *(undefined4 *)(this + 0x68c) = uVar2;
      plVar3 = (long *)RenderingServer::get_singleton();
      (**(code **)(*plVar3 + 0x818))(plVar3,*(undefined8 *)(this + 0x620),uVar2);
      GVar1 = this[0x62b];
    }
    else {
      GVar1 = this[0x62b];
    }
    if (GVar1 != (GPUParticles3D)0x0) {
      GVar1 = this[0x629];
      if ((GVar1 == (GPUParticles3D)0x0) && (GVar1 = this[0x628], GVar1 == (GPUParticles3D)0x0)) {
        fVar5 = _LC28 - *(float *)(this + 0x648);
        this[0x629] = (GPUParticles3D)0x1;
        *(undefined8 *)(this + 0x6d0) = 0;
        *(double *)(this + 0x6d8) = *(double *)(this + 0x638);
        *(double *)(this + 0x6e0) = (double)fVar5 * *(double *)(this + 0x638);
      }
      this[0x62a] = GVar1;
      Node::set_process_internal(bVar4);
      goto LAB_00100dbe;
    }
  }
  else if (this[0x62b] == (GPUParticles3D)0x0) {
    Node::set_process_internal(bVar4);
    goto LAB_00100dbe;
  }
  Node::set_process_internal(bVar4);
LAB_00100dbe:
  this[0x628] = (GPUParticles3D)param_1;
  plVar3 = (long *)RenderingServer::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x00100de6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x788))(plVar3,*(undefined8 *)(this + 0x620),param_1);
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



/* GPUParticles3D::_validate_property(PropertyInfo&) const */

void __thiscall GPUParticles3D::_validate_property(GPUParticles3D *this,PropertyInfo *param_1)

{
  String *this_00;
  long *plVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  long in_FS_OFFSET;
  long local_38;
  long local_30;
  
  this_00 = (String *)(param_1 + 8);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  cVar2 = String::operator==(this_00,"emitting");
  if (cVar2 != '\0') {
    *(uint *)(param_1 + 0x18) = -(uint)(this[0x62b] != (GPUParticles3D)0x0) & 0x28;
  }
  cVar2 = String::begins_with((char *)this_00);
  if (cVar2 == '\0') {
LAB_00100fec:
    cVar2 = String::operator==(this_00,"seed");
    if ((cVar2 == '\0') || (this[0x690] != (GPUParticles3D)0x0)) goto LAB_0010100f;
  }
  else {
    String::get_slicec((wchar32)&local_38,(int)this_00);
    iVar3 = String::to_int();
    lVar4 = local_38;
    if (local_38 == 0) {
LAB_00100fd4:
      lVar4 = *(long *)(this + 0x6c0);
      if (lVar4 != 0) goto LAB_00100fe3;
LAB_00101056:
      lVar4 = 0;
    }
    else {
      LOCK();
      plVar1 = (long *)(local_38 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) goto LAB_00100fd4;
      local_38 = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
      lVar4 = *(long *)(this + 0x6c0);
      if (lVar4 == 0) goto LAB_00101056;
LAB_00100fe3:
      lVar4 = *(long *)(lVar4 + -8);
    }
    if (iVar3 + -1 < lVar4) goto LAB_00100fec;
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
LAB_0010100f:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GPUParticles3D::_attach_sub_emitter() */

void __thiscall GPUParticles3D::_attach_sub_emitter(GPUParticles3D *this)

{
  long lVar1;
  GPUParticles3D *pGVar2;
  long *plVar3;
  
  lVar1 = Node::get_node_or_null((NodePath *)this);
  if (lVar1 != 0) {
    pGVar2 = (GPUParticles3D *)__dynamic_cast(lVar1,&Object::typeinfo,&typeinfo,0);
    if ((pGVar2 != (GPUParticles3D *)0x0) && (this != pGVar2)) {
      plVar3 = (long *)RenderingServer::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x001010c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x850))
                (plVar3,*(undefined8 *)(this + 0x620),*(undefined8 *)(pGVar2 + 0x620));
      return;
    }
  }
  return;
}



/* GPUParticles3D::set_sub_emitter(NodePath const&) */

void __thiscall GPUParticles3D::set_sub_emitter(GPUParticles3D *this,NodePath *param_1)

{
  char cVar1;
  long *plVar2;
  long in_FS_OFFSET;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((byte)this[0x2fa] & 0x40) != 0) {
    plVar2 = (long *)RenderingServer::get_singleton();
    (**(code **)(*plVar2 + 0x850))(plVar2,*(undefined8 *)(this + 0x620),0);
  }
  NodePath::operator=((NodePath *)(this + 0x680),param_1);
  if (((byte)this[0x2fa] & 0x40) != 0) {
    local_38 = 0;
    cVar1 = NodePath::operator!=((NodePath *)(this + 0x680),(NodePath *)&local_38);
    NodePath::~NodePath((NodePath *)&local_38);
    if (cVar1 != '\0') {
      _attach_sub_emitter(this);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    Node::update_configuration_warnings();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GPUParticles3D::_notification(int) */

void __thiscall GPUParticles3D::_notification(GPUParticles3D *this,int param_1)

{
  char cVar1;
  long *plVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar3;
  bool bVar4;
  long in_FS_OFFSET;
  double dVar5;
  undefined8 uVar6;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar7 [16];
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar11;
  undefined1 auVar12 [12];
  undefined8 local_70;
  undefined8 local_68;
  float local_60;
  undefined8 local_58;
  undefined1 local_50 [16];
  undefined8 local_34;
  undefined4 local_2c;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (0x2b < param_1) {
    if (param_1 - 0x232bU < 2) {
switchD_001011fb_caseD_e:
      if (((byte)this[0x2fa] & 0x40) != 0) {
        cVar1 = Node::can_process();
        if (cVar1 == '\0') {
          plVar2 = (long *)RenderingServer::get_singleton();
          if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
            uVar3 = *(undefined8 *)(this + 0x620);
            uVar6 = 0;
            UNRECOVERED_JUMPTABLE = *(code **)(*plVar2 + 0x7e0);
            goto LAB_00101359;
          }
        }
        else {
          plVar2 = (long *)RenderingServer::get_singleton();
          if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
            uVar6 = *(undefined8 *)(this + 0x650);
            uVar3 = *(undefined8 *)(this + 0x620);
            UNRECOVERED_JUMPTABLE = *(code **)(*plVar2 + 0x7e0);
LAB_00101359:
                    /* WARNING: Could not recover jumptable at 0x00101361. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*UNRECOVERED_JUMPTABLE)(uVar6,plVar2,uVar3);
            return;
          }
        }
        goto LAB_00101757;
      }
    }
    goto switchD_001011fb_caseD_c;
  }
  if (param_1 < 10) goto switchD_001011fb_caseD_c;
  bVar4 = SUB81(this,0);
  switch(param_1) {
  case 10:
    Node::set_process_internal(bVar4);
    Node::set_physics_process_internal(bVar4);
    local_70 = 0;
    cVar1 = NodePath::operator!=((NodePath *)(this + 0x680),(NodePath *)&local_70);
    NodePath::~NodePath((NodePath *)&local_70);
    if (cVar1 != '\0') {
      _attach_sub_emitter(this);
    }
    cVar1 = Node::can_process();
    if (cVar1 == '\0') {
      plVar2 = (long *)RenderingServer::get_singleton();
      (**(code **)(*plVar2 + 0x7e0))(0,plVar2,*(undefined8 *)(this + 0x620));
    }
    else {
      plVar2 = (long *)RenderingServer::get_singleton();
      (**(code **)(*plVar2 + 0x7e0))
                (*(undefined8 *)(this + 0x650),plVar2,*(undefined8 *)(this + 0x620));
    }
    Node3D::get_global_transform();
    *(undefined8 *)(this + 0x6f8) = local_34;
    *(undefined4 *)(this + 0x700) = local_2c;
    Node::set_process_internal(bVar4);
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      Node::set_physics_process_internal(bVar4);
      return;
    }
    goto LAB_00101757;
  case 0xb:
    plVar2 = (long *)RenderingServer::get_singleton();
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010139f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x850))(plVar2,*(undefined8 *)(this + 0x620),0);
      return;
    }
    goto LAB_00101757;
  case 0xe:
  case 0xf:
    goto switchD_001011fb_caseD_e;
  case 0x19:
    dVar5 = (double)Node::get_process_delta_time();
    fVar11 = (float)dVar5;
    auVar10._4_4_ = fVar11;
    auVar10._0_4_ = fVar11;
    auVar12 = Node3D::get_global_position();
    local_58 = auVar12._0_8_;
    local_50._0_4_ = auVar12._8_4_;
    auVar8._0_4_ = auVar12._0_4_ - (float)*(undefined8 *)(this + 0x6f8);
    auVar8._4_4_ = auVar12._4_4_ - (float)((ulong)*(undefined8 *)(this + 0x6f8) >> 0x20);
    auVar8._8_4_ = (float)extraout_XMM0_Qb_00 - 0.0;
    auVar8._12_4_ = (float)((ulong)extraout_XMM0_Qb_00 >> 0x20) - 0.0;
    auVar10._8_8_ = _LC35;
    auVar7 = divps(auVar8,auVar10);
    local_60 = (auVar12._8_4_ - *(float *)(this + 0x700)) / fVar11;
    local_68 = auVar7._0_8_;
    if (((auVar7._0_4_ != *(float *)(this + 0x6ec)) || (auVar7._4_4_ != *(float *)(this + 0x6f0)))
       || (local_60 != *(float *)(this + 0x6f4))) {
      plVar2 = (long *)RenderingServer::get_singleton();
      (**(code **)(*plVar2 + 0x888))(plVar2,*(undefined8 *)(this + 0x620),&local_68);
      *(undefined8 *)(this + 0x6ec) = local_68;
      *(float *)(this + 0x6f4) = local_60;
    }
    auVar12 = Node3D::get_global_position();
    *(undefined1 (*) [12])(this + 0x6f8) = auVar12;
    if (this[0x62b] != (GPUParticles3D)0x0) {
      dVar5 = (double)Node::get_process_delta_time();
      dVar5 = dVar5 + *(double *)(this + 0x6d0);
      *(double *)(this + 0x6d0) = dVar5;
      if (dVar5 < *(double *)(this + 0x6d8) || dVar5 == *(double *)(this + 0x6d8)) {
LAB_001016af:
        if (dVar5 < *(double *)(this + 0x6e0) || dVar5 == *(double *)(this + 0x6e0)) break;
        if (this[0x629] != (GPUParticles3D)0x0) goto LAB_00101618;
      }
      else {
        this[0x628] = (GPUParticles3D)0x0;
        if (this[0x629] == (GPUParticles3D)0x0) {
          Node::set_process_internal(bVar4);
          dVar5 = *(double *)(this + 0x6d0);
          goto LAB_001016af;
        }
        if (dVar5 < *(double *)(this + 0x6e0) || dVar5 == *(double *)(this + 0x6e0)) break;
LAB_00101618:
        if (this[0x62a] == (GPUParticles3D)0x0) {
          local_58 = 0;
          local_50 = (undefined1  [16])0x0;
          (**(code **)(*(long *)this + 0xd0))(this,SceneStringNames::singleton + 0xf8,0,0);
          if (Variant::needs_deinit[(int)local_58] != '\0') {
            Variant::_clear_internal();
          }
        }
      }
      this[0x629] = (GPUParticles3D)0x0;
      if (this[0x628] == (GPUParticles3D)0x0) {
        Node::set_process_internal(bVar4);
      }
    }
    break;
  case 0x1a:
    dVar5 = (double)Node::get_physics_process_delta_time();
    fVar11 = (float)dVar5;
    auVar9._4_4_ = fVar11;
    auVar9._0_4_ = fVar11;
    auVar12 = Node3D::get_global_position();
    local_58 = auVar12._0_8_;
    local_50._0_4_ = auVar12._8_4_;
    auVar7._0_4_ = auVar12._0_4_ - (float)*(undefined8 *)(this + 0x6f8);
    auVar7._4_4_ = auVar12._4_4_ - (float)((ulong)*(undefined8 *)(this + 0x6f8) >> 0x20);
    auVar7._8_4_ = (float)extraout_XMM0_Qb - 0.0;
    auVar7._12_4_ = (float)((ulong)extraout_XMM0_Qb >> 0x20) - 0.0;
    auVar9._8_8_ = _LC35;
    auVar7 = divps(auVar7,auVar9);
    local_60 = (auVar12._8_4_ - *(float *)(this + 0x700)) / fVar11;
    local_68 = auVar7._0_8_;
    if (((auVar7._0_4_ != *(float *)(this + 0x6ec)) || (auVar7._4_4_ != *(float *)(this + 0x6f0)))
       || (local_60 != *(float *)(this + 0x6f4))) {
      plVar2 = (long *)RenderingServer::get_singleton();
      (**(code **)(*plVar2 + 0x888))(plVar2,*(undefined8 *)(this + 0x620),&local_68);
      *(undefined8 *)(this + 0x6ec) = local_68;
      *(float *)(this + 0x6f4) = local_60;
    }
    auVar12 = Node3D::get_global_position();
    *(undefined1 (*) [12])(this + 0x6f8) = auVar12;
    break;
  case 0x2b:
    cVar1 = Node3D::is_visible_in_tree();
    if (cVar1 != '\0') {
      plVar2 = (long *)RenderingServer::get_singleton();
      cVar1 = (**(code **)(*plVar2 + 0x838))(plVar2,*(undefined8 *)(this + 0x620));
      if (cVar1 == '\0') {
        plVar2 = (long *)RenderingServer::get_singleton();
        if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001014da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar2 + 0x840))(plVar2,*(undefined8 *)(this + 0x620));
          return;
        }
        goto LAB_00101757;
      }
    }
  }
switchD_001011fb_caseD_c:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00101757:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GPUParticles3D::set_process_material(Ref<Material> const&) */

void __thiscall GPUParticles3D::set_process_material(GPUParticles3D *this,Ref *param_1)

{
  code *pcVar1;
  char cVar2;
  Object *pOVar3;
  undefined8 uVar4;
  Object *pOVar5;
  long *plVar6;
  long in_FS_OFFSET;
  long local_60;
  Node3D local_58 [24];
  long local_40;
  
  pOVar5 = *(Object **)(this + 0x6a8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (pOVar5 == (Object *)0x0) {
    uVar4 = 0;
    if (*(long *)param_1 == 0) goto LAB_00101980;
    *(long *)(this + 0x6a8) = *(long *)param_1;
    cVar2 = RefCounted::reference();
    if (cVar2 == '\0') {
LAB_001019e7:
      *(undefined8 *)(this + 0x6a8) = 0;
      goto LAB_00101880;
    }
LAB_00101895:
    pOVar5 = *(Object **)(this + 0x6a8);
LAB_0010189c:
    uVar4 = 0;
    if (pOVar5 == (Object *)0x0) goto LAB_00101980;
  }
  else {
    pOVar3 = (Object *)__dynamic_cast(pOVar5,&Object::typeinfo,&ParticleProcessMaterial::typeinfo,0)
    ;
    if (pOVar3 != (Object *)0x0) {
      cVar2 = RefCounted::reference();
      if (cVar2 != '\0') {
        cVar2 = RefCounted::unreference();
        if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar3), cVar2 != '\0')) {
          (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
          Memory::free_static(pOVar3,false);
        }
        plVar6 = *(long **)(this + 0x6a8);
        pcVar1 = *(code **)(*plVar6 + 0x110);
        create_custom_callable_function_pointer<Node3D>
                  (local_58,(char *)this,(_func_void *)"&GPUParticles3D::update_gizmos");
        StringName::StringName((StringName *)&local_60,"emission_shape_changed",false);
        (*pcVar1)(plVar6,(StringName *)&local_60,local_58);
        if ((StringName::configured != '\0') && (local_60 != 0)) {
          StringName::unref();
        }
        Callable::~Callable((Callable *)local_58);
      }
      pOVar5 = *(Object **)(this + 0x6a8);
      pOVar3 = *(Object **)param_1;
      if (pOVar3 != pOVar5) {
        *(Object **)(this + 0x6a8) = pOVar3;
        if (pOVar3 != (Object *)0x0) goto LAB_0010186d;
LAB_00101880:
        if (pOVar5 != (Object *)0x0) goto LAB_00101885;
        goto LAB_00101895;
      }
      goto LAB_0010189c;
    }
    pOVar3 = *(Object **)param_1;
    if (pOVar5 != pOVar3) {
      *(Object **)(this + 0x6a8) = pOVar3;
      if (pOVar3 != (Object *)0x0) {
LAB_0010186d:
        cVar2 = RefCounted::reference();
        if (cVar2 == '\0') goto LAB_001019e7;
        goto LAB_00101880;
      }
LAB_00101885:
      cVar2 = RefCounted::unreference();
      if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar5), cVar2 != '\0')) {
        (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
        Memory::free_static(pOVar5,false);
      }
      goto LAB_00101895;
    }
  }
  uVar4 = (**(code **)(*(long *)pOVar5 + 0x1c0))(pOVar5);
  if (((*(long *)(this + 0x6a8) != 0) &&
      (pOVar5 = (Object *)
                __dynamic_cast(*(long *)(this + 0x6a8),&Object::typeinfo,
                               &ParticleProcessMaterial::typeinfo,0), pOVar5 != (Object *)0x0)) &&
     (cVar2 = RefCounted::reference(), cVar2 != '\0')) {
    cVar2 = RefCounted::unreference();
    if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar5), cVar2 != '\0')) {
      (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
      Memory::free_static(pOVar5,false);
    }
    plVar6 = *(long **)(this + 0x6a8);
    pcVar1 = *(code **)(*plVar6 + 0x108);
    create_custom_callable_function_pointer<Node3D>
              (local_58,(char *)this,(_func_void *)"&GPUParticles3D::update_gizmos");
    StringName::StringName((StringName *)&local_60,"emission_shape_changed",false);
    (*pcVar1)(plVar6,(StringName *)&local_60,local_58,0);
    if ((StringName::configured != '\0') && (local_60 != 0)) {
      StringName::unref();
    }
    Callable::~Callable((Callable *)local_58);
  }
LAB_00101980:
  plVar6 = (long *)RenderingServer::get_singleton();
  (**(code **)(*plVar6 + 0x7f0))(plVar6,*(undefined8 *)(this + 0x620),uVar4);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  Node::update_configuration_warnings();
  return;
}



/* GPUParticles3D::_bind_compatibility_methods() */

void GPUParticles3D::_bind_compatibility_methods(void)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  MethodBind *pMVar4;
  long *plVar5;
  long lVar6;
  long in_FS_OFFSET;
  long local_68 [2];
  long *local_58;
  undefined8 local_48;
  undefined1 local_40 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  D_METHODP((char *)local_68,(char ***)"restart",0);
  local_40 = (undefined1  [16])0x0;
  local_48 = 0;
  pMVar4 = create_method_bind<GPUParticles3D>(_restart_bind_compat_92089);
  ClassDB::bind_methodfi(1,pMVar4,true,(MethodDefinition *)local_68,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_48] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_58;
  if (local_58 != (long *)0x0) {
    LOCK();
    plVar5 = local_58 + -2;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      if (local_58 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_58[-1];
      local_58 = (long *)0x0;
      if (lVar1 != 0) {
        lVar6 = 0;
        plVar5 = plVar3;
        do {
          if ((StringName::configured != '\0') && (*plVar5 != 0)) {
            StringName::unref();
          }
          lVar6 = lVar6 + 1;
          plVar5 = plVar5 + 1;
        } while (lVar1 != lVar6);
      }
      Memory::free_static(plVar3 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_68[0] != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* ClassDB::bind_method<MethodDefinition, void
   (GPUParticles3D::*)(bool)>(MethodDefinition, void (GPUParticles3D::*)(bool)) [clone .isra.0] */

MethodBind *
ClassDB::bind_method<MethodDefinition,void(GPUParticles3D::*)(bool)>
          (MethodDefinition *param_1,_func_void_bool *param_2)

{
  long lVar1;
  MethodBind *pMVar2;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  pMVar2 = create_method_bind<GPUParticles3D,bool>(param_2);
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



/* MethodBind* ClassDB::bind_method<MethodDefinition, bool (GPUParticles3D::*)()
   const>(MethodDefinition, bool (GPUParticles3D::*)() const) [clone .isra.0] */

MethodBind *
ClassDB::bind_method<MethodDefinition,bool(GPUParticles3D::*)()const>
          (MethodDefinition *param_1,_func_bool *param_2)

{
  long lVar1;
  MethodBind *pMVar2;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  pMVar2 = create_method_bind<GPUParticles3D,bool>(param_2);
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



/* GPUParticles3D::_bind_methods() */

void GPUParticles3D::_bind_methods(void)

{
  long *plVar1;
  code *pcVar2;
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
  undefined *puVar16;
  int *piVar17;
  MethodBind *pMVar18;
  uint uVar19;
  int *piVar20;
  long lVar21;
  int iVar22;
  long lVar23;
  long in_FS_OFFSET;
  undefined8 local_190;
  CowData<char32_t> local_188 [8];
  undefined8 local_180;
  undefined8 local_178;
  long local_170;
  undefined8 local_168;
  long local_160;
  long local_158;
  long local_150;
  char *local_148;
  undefined8 local_140;
  char *local_138;
  undefined8 local_130;
  undefined1 local_128 [16];
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8 [2];
  int *local_e8;
  undefined8 local_e0;
  long local_d0;
  Variant *local_c8;
  undefined *puStack_c0;
  undefined8 local_b8;
  char *local_a8;
  char *pcStack_a0;
  char *local_98;
  char *pcStack_90;
  char *local_88;
  undefined8 local_80;
  Variant **local_78;
  undefined1 auStack_70 [16];
  char **ppcStack_60;
  undefined1 local_58 [16];
  long local_40;
  
  puVar16 = PTR__LC68_00124958;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  D_METHOD<char_const*>((char *)&local_138,"set_emitting");
  ClassDB::bind_method<MethodDefinition,void(GPUParticles3D::*)(bool)>
            ((MethodDefinition *)&local_138,set_emitting,0);
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_138);
  D_METHOD<char_const*>((char *)&local_138,"set_amount");
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar18 = create_method_bind<GPUParticles3D,int>(set_amount);
  ClassDB::bind_methodfi(1,pMVar18,false,(MethodDefinition *)&local_138,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_138);
  D_METHOD<char_const*>((char *)&local_138,"set_lifetime");
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar18 = create_method_bind<GPUParticles3D,double>(set_lifetime);
  ClassDB::bind_methodfi(1,pMVar18,false,(MethodDefinition *)&local_138,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_138);
  D_METHOD<char_const*>((char *)&local_138,"set_one_shot");
  ClassDB::bind_method<MethodDefinition,void(GPUParticles3D::*)(bool)>
            ((MethodDefinition *)&local_138,set_one_shot,0);
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_138);
  D_METHOD<char_const*>((char *)&local_138,"set_pre_process_time");
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar18 = create_method_bind<GPUParticles3D,double>(set_pre_process_time);
  ClassDB::bind_methodfi(1,pMVar18,false,(MethodDefinition *)&local_138,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_138);
  D_METHOD<char_const*>((char *)&local_138,"set_explosiveness_ratio");
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar18 = create_method_bind<GPUParticles3D,float>(set_explosiveness_ratio);
  ClassDB::bind_methodfi(1,pMVar18,false,(MethodDefinition *)&local_138,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_138);
  D_METHOD<char_const*>((char *)&local_138,"set_randomness_ratio");
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar18 = create_method_bind<GPUParticles3D,float>(set_randomness_ratio);
  ClassDB::bind_methodfi(1,pMVar18,false,(MethodDefinition *)&local_138,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_138);
  D_METHOD<char_const*>((char *)&local_138,"set_visibility_aabb");
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar18 = create_method_bind<GPUParticles3D,AABB_const&>(set_visibility_aabb);
  ClassDB::bind_methodfi(1,pMVar18,false,(MethodDefinition *)&local_138,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_138);
  D_METHOD<char_const*>((char *)&local_138,"set_use_local_coordinates");
  ClassDB::bind_method<MethodDefinition,void(GPUParticles3D::*)(bool)>
            ((MethodDefinition *)&local_138,set_use_local_coordinates,0);
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_138);
  D_METHOD<char_const*>((char *)&local_138,"set_fixed_fps");
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar18 = create_method_bind<GPUParticles3D,int>(set_fixed_fps);
  ClassDB::bind_methodfi(1,pMVar18,false,(MethodDefinition *)&local_138,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_138);
  D_METHOD<char_const*>((char *)&local_138,"set_fractional_delta");
  ClassDB::bind_method<MethodDefinition,void(GPUParticles3D::*)(bool)>
            ((MethodDefinition *)&local_138,set_fractional_delta,0);
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_138);
  D_METHOD<char_const*>((char *)&local_138,"set_interpolate");
  ClassDB::bind_method<MethodDefinition,void(GPUParticles3D::*)(bool)>
            ((MethodDefinition *)&local_138,set_interpolate,0);
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_138);
  D_METHOD<char_const*>((char *)&local_138,"set_process_material");
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar18 = create_method_bind<GPUParticles3D,Ref<Material>const&>(set_process_material);
  ClassDB::bind_methodfi(1,pMVar18,false,(MethodDefinition *)&local_138,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_138);
  D_METHOD<char_const*>((char *)&local_138,"set_speed_scale");
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar18 = create_method_bind<GPUParticles3D,double>(set_speed_scale);
  ClassDB::bind_methodfi(1,pMVar18,false,(MethodDefinition *)&local_138,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_138);
  D_METHOD<char_const*>((char *)&local_138,"set_collision_base_size");
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar18 = create_method_bind<GPUParticles3D,float>(set_collision_base_size);
  ClassDB::bind_methodfi(1,pMVar18,false,(MethodDefinition *)&local_138,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_138);
  D_METHOD<char_const*>((char *)&local_138,"set_interp_to_end");
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar18 = create_method_bind<GPUParticles3D,float>(set_interp_to_end);
  ClassDB::bind_methodfi(1,pMVar18,false,(MethodDefinition *)&local_138,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_138);
  D_METHODP((char *)&local_138,(char ***)"is_emitting",0);
  ClassDB::bind_method<MethodDefinition,bool(GPUParticles3D::*)()const>
            ((MethodDefinition *)&local_138,is_emitting,0);
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_138);
  D_METHODP((char *)&local_138,(char ***)"get_amount",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar18 = create_method_bind<GPUParticles3D,int>(get_amount);
  ClassDB::bind_methodfi(1,pMVar18,false,(MethodDefinition *)&local_138,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_138);
  D_METHODP((char *)&local_138,(char ***)"get_lifetime",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar18 = create_method_bind<GPUParticles3D,double>(get_lifetime);
  ClassDB::bind_methodfi(1,pMVar18,false,(MethodDefinition *)&local_138,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_138);
  D_METHODP((char *)&local_138,(char ***)"get_one_shot",0);
  ClassDB::bind_method<MethodDefinition,bool(GPUParticles3D::*)()const>
            ((MethodDefinition *)&local_138,get_one_shot,0);
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_138);
  D_METHODP((char *)&local_138,(char ***)"get_pre_process_time",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar18 = create_method_bind<GPUParticles3D,double>(get_pre_process_time);
  ClassDB::bind_methodfi(1,pMVar18,false,(MethodDefinition *)&local_138,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_138);
  D_METHODP((char *)&local_138,(char ***)"get_explosiveness_ratio",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar18 = create_method_bind<GPUParticles3D,float>(get_explosiveness_ratio);
  ClassDB::bind_methodfi(1,pMVar18,false,(MethodDefinition *)&local_138,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_138);
  D_METHODP((char *)&local_138,(char ***)"get_randomness_ratio",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar18 = create_method_bind<GPUParticles3D,float>(get_randomness_ratio);
  ClassDB::bind_methodfi(1,pMVar18,false,(MethodDefinition *)&local_138,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_138);
  D_METHODP((char *)&local_138,(char ***)"get_visibility_aabb",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar18 = create_method_bind<GPUParticles3D,AABB>(get_visibility_aabb);
  ClassDB::bind_methodfi(1,pMVar18,false,(MethodDefinition *)&local_138,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_138);
  D_METHODP((char *)&local_138,(char ***)"get_use_local_coordinates",0);
  ClassDB::bind_method<MethodDefinition,bool(GPUParticles3D::*)()const>
            ((MethodDefinition *)&local_138,get_use_local_coordinates,0);
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_138);
  D_METHODP((char *)&local_138,(char ***)"get_fixed_fps",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar18 = create_method_bind<GPUParticles3D,int>(get_fixed_fps);
  ClassDB::bind_methodfi(1,pMVar18,false,(MethodDefinition *)&local_138,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_138);
  D_METHODP((char *)&local_138,(char ***)"get_fractional_delta",0);
  ClassDB::bind_method<MethodDefinition,bool(GPUParticles3D::*)()const>
            ((MethodDefinition *)&local_138,get_fractional_delta,0);
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_138);
  D_METHODP((char *)&local_138,(char ***)"get_interpolate",0);
  ClassDB::bind_method<MethodDefinition,bool(GPUParticles3D::*)()const>
            ((MethodDefinition *)&local_138,get_interpolate,0);
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_138);
  D_METHODP((char *)&local_138,(char ***)"get_process_material",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar18 = create_method_bind<GPUParticles3D,Ref<Material>>(get_process_material);
  ClassDB::bind_methodfi(1,pMVar18,false,(MethodDefinition *)&local_138,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_138);
  D_METHODP((char *)&local_138,(char ***)"get_speed_scale",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar18 = create_method_bind<GPUParticles3D,double>(get_speed_scale);
  ClassDB::bind_methodfi(1,pMVar18,false,(MethodDefinition *)&local_138,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_138);
  D_METHODP((char *)&local_138,(char ***)"get_collision_base_size",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar18 = create_method_bind<GPUParticles3D,float>(get_collision_base_size);
  ClassDB::bind_methodfi(1,pMVar18,false,(MethodDefinition *)&local_138,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_138);
  D_METHODP((char *)&local_138,(char ***)"get_interp_to_end",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar18 = create_method_bind<GPUParticles3D,float>(get_interp_to_end);
  ClassDB::bind_methodfi(1,pMVar18,false,(MethodDefinition *)&local_138,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_138);
  D_METHOD<char_const*>((char *)&local_138,"set_use_fixed_seed");
  ClassDB::bind_method<MethodDefinition,void(GPUParticles3D::*)(bool)>
            ((MethodDefinition *)&local_138,set_use_fixed_seed,0);
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_138);
  D_METHODP((char *)&local_138,(char ***)"get_use_fixed_seed",0);
  ClassDB::bind_method<MethodDefinition,bool(GPUParticles3D::*)()const>
            ((MethodDefinition *)&local_138,get_use_fixed_seed,0);
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_138);
  D_METHOD<char_const*>((char *)&local_138,"set_seed");
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar18 = create_method_bind<GPUParticles3D,unsigned_int>(set_seed);
  ClassDB::bind_methodfi(1,pMVar18,false,(MethodDefinition *)&local_138,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_138);
  D_METHODP((char *)&local_138,(char ***)"get_seed",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar18 = create_method_bind<GPUParticles3D,unsigned_int>(get_seed);
  ClassDB::bind_methodfi(1,pMVar18,false,(MethodDefinition *)&local_138,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_138);
  D_METHOD<char_const*>((char *)&local_138,"set_draw_order");
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar18 = create_method_bind<GPUParticles3D,GPUParticles3D::DrawOrder>(set_draw_order);
  ClassDB::bind_methodfi(1,pMVar18,false,(MethodDefinition *)&local_138,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_138);
  D_METHODP((char *)&local_138,(char ***)"get_draw_order",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar18 = create_method_bind<GPUParticles3D,GPUParticles3D::DrawOrder>(get_draw_order);
  ClassDB::bind_methodfi(1,pMVar18,false,(MethodDefinition *)&local_138,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_138);
  D_METHOD<char_const*>((char *)&local_138,"set_draw_passes");
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar18 = create_method_bind<GPUParticles3D,int>(set_draw_passes);
  ClassDB::bind_methodfi(1,pMVar18,false,(MethodDefinition *)&local_138,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_138);
  local_b8 = 0;
  local_c8 = (Variant *)puVar16;
  puStack_c0 = &_LC69;
  auStack_70._0_8_ = &puStack_c0;
  uVar19 = (uint)(Variant *)&local_78;
  local_78 = &local_c8;
  D_METHODP((char *)&local_138,(char ***)"set_draw_pass_mesh",uVar19);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar18 = create_method_bind<GPUParticles3D,int,Ref<Mesh>const&>(set_draw_pass_mesh);
  ClassDB::bind_methodfi(1,pMVar18,false,(MethodDefinition *)&local_138,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_138);
  D_METHODP((char *)&local_138,(char ***)"get_draw_passes",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar18 = create_method_bind<GPUParticles3D,int>(get_draw_passes);
  ClassDB::bind_methodfi(1,pMVar18,false,(MethodDefinition *)&local_138,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_138);
  D_METHOD<char_const*>((char *)&local_138,"get_draw_pass_mesh");
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar18 = create_method_bind<GPUParticles3D,Ref<Mesh>,int>(get_draw_pass_mesh);
  ClassDB::bind_methodfi(1,pMVar18,false,(MethodDefinition *)&local_138,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_138);
  D_METHOD<char_const*>((char *)&local_138,"set_skin");
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar18 = create_method_bind<GPUParticles3D,Ref<Skin>const&>(set_skin);
  ClassDB::bind_methodfi(1,pMVar18,false,(MethodDefinition *)&local_138,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_138);
  D_METHODP((char *)&local_138,(char ***)"get_skin",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar18 = create_method_bind<GPUParticles3D,Ref<Skin>>(get_skin);
  ClassDB::bind_methodfi(1,pMVar18,false,(MethodDefinition *)&local_138,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_138);
  D_METHOD<char_const*>((char *)&local_138,"restart");
  Variant::Variant((Variant *)&local_78,false);
  local_58 = (undefined1  [16])0x0;
  ppcStack_60 = (char **)0x0;
  local_c8 = (Variant *)&local_78;
  pMVar18 = create_method_bind<GPUParticles3D,bool>(restart);
  ClassDB::bind_methodfi(1,pMVar18,false,(MethodDefinition *)&local_138,&local_c8,1);
  if (Variant::needs_deinit[(int)ppcStack_60] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_138);
  D_METHODP((char *)&local_138,(char ***)"capture_aabb",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar18 = create_method_bind<GPUParticles3D,AABB>(capture_aabb);
  ClassDB::bind_methodfi(1,pMVar18,false,(MethodDefinition *)&local_138,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_138);
  D_METHOD<char_const*>((char *)&local_138,"set_sub_emitter");
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar18 = create_method_bind<GPUParticles3D,NodePath_const&>(set_sub_emitter);
  ClassDB::bind_methodfi(1,pMVar18,false,(MethodDefinition *)&local_138,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_138);
  D_METHODP((char *)&local_138,(char ***)"get_sub_emitter",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar18 = create_method_bind<GPUParticles3D,NodePath>(get_sub_emitter);
  ClassDB::bind_methodfi(1,pMVar18,false,(MethodDefinition *)&local_138,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_138);
  local_a8 = "xform";
  pcStack_a0 = "velocity";
  local_88 = "flags";
  auStack_70._8_8_ = &local_98;
  auStack_70._0_8_ = &pcStack_a0;
  local_58._0_8_ = &local_88;
  local_98 = "color";
  pcStack_90 = "custom";
  local_80 = 0;
  local_78 = (Variant **)&local_a8;
  ppcStack_60 = &pcStack_90;
  D_METHODP((char *)&local_138,(char ***)"emit_particle",uVar19);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar18 = create_method_bind<GPUParticles3D,Transform3D_const&,Vector3_const&,Color_const&,Color_const&,unsigned_int>
                      (emit_particle);
  ClassDB::bind_methodfi(1,pMVar18,false,(MethodDefinition *)&local_138,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_138);
  D_METHOD<char_const*>((char *)&local_138,"set_trail_enabled");
  ClassDB::bind_method<MethodDefinition,void(GPUParticles3D::*)(bool)>
            ((MethodDefinition *)&local_138,set_trail_enabled,0);
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_138);
  D_METHOD<char_const*>((char *)&local_138,"set_trail_lifetime");
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar18 = create_method_bind<GPUParticles3D,double>(set_trail_lifetime);
  ClassDB::bind_methodfi(1,pMVar18,false,(MethodDefinition *)&local_138,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_138);
  D_METHODP((char *)&local_138,(char ***)"is_trail_enabled",0);
  ClassDB::bind_method<MethodDefinition,bool(GPUParticles3D::*)()const>
            ((MethodDefinition *)&local_138,is_trail_enabled,0);
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_138);
  D_METHODP((char *)&local_138,(char ***)"get_trail_lifetime",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar18 = create_method_bind<GPUParticles3D,double>(get_trail_lifetime);
  ClassDB::bind_methodfi(1,pMVar18,false,(MethodDefinition *)&local_138,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_138);
  D_METHOD<char_const*>((char *)&local_138,"set_transform_align");
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar18 = create_method_bind<GPUParticles3D,GPUParticles3D::TransformAlign>(set_transform_align);
  ClassDB::bind_methodfi(1,pMVar18,false,(MethodDefinition *)&local_138,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_138);
  D_METHODP((char *)&local_138,(char ***)"get_transform_align",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar18 = create_method_bind<GPUParticles3D,GPUParticles3D::TransformAlign>(get_transform_align);
  ClassDB::bind_methodfi(1,pMVar18,false,(MethodDefinition *)&local_138,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_138);
  D_METHOD<char_const*>((char *)&local_138,"convert_from_particles");
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar18 = create_method_bind<GPUParticles3D,Node*>(convert_from_particles);
  ClassDB::bind_methodfi(1,pMVar18,false,(MethodDefinition *)&local_138,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_138);
  D_METHOD<char_const*>((char *)&local_138,"set_amount_ratio");
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar18 = create_method_bind<GPUParticles3D,float>(set_amount_ratio);
  ClassDB::bind_methodfi(1,pMVar18,false,(MethodDefinition *)&local_138,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_138);
  D_METHODP((char *)&local_138,(char ***)"get_amount_ratio",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar18 = create_method_bind<GPUParticles3D,float>(get_amount_ratio);
  ClassDB::bind_methodfi(1,pMVar18,false,(MethodDefinition *)&local_138,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_138);
  D_METHOD<char_const*>((char *)&local_138,"request_particles_process");
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar18 = create_method_bind<GPUParticles3D,float>(request_particles_process);
  ClassDB::bind_methodfi(1,pMVar18,false,(MethodDefinition *)&local_138,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_138);
  local_150 = 0;
  String::parse_latin1((String *)&local_150,"finished");
  local_128 = (undefined1  [16])0x0;
  local_138 = (char *)0x0;
  local_130 = 0;
  local_118 = 0;
  local_110 = 0;
  local_108 = 6;
  local_100 = 1;
  local_f8[0] = 0;
  local_e8 = (int *)0x0;
  local_e0 = 0;
  local_d0 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_138,(CowData *)&local_150);
  local_158 = 0;
  String::parse_latin1((String *)&local_158,"GPUParticles3D");
  StringName::StringName((StringName *)&local_148,(String *)&local_158,false);
  ClassDB::add_signal((StringName *)&local_148,(MethodInfo *)&local_138);
  if ((StringName::configured != '\0') && (local_148 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
  lVar23 = local_d0;
  if (local_d0 != 0) {
    LOCK();
    plVar1 = (long *)(local_d0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_d0 = 0;
      Memory::free_static((void *)(lVar23 + -0x10),false);
    }
  }
  piVar17 = local_e8;
  if (local_e8 != (int *)0x0) {
    LOCK();
    plVar1 = (long *)(local_e8 + -4);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      if (local_e8 == (int *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar23 = *(long *)(local_e8 + -2);
      lVar21 = 0;
      local_e8 = (int *)0x0;
      piVar20 = piVar17;
      if (lVar23 != 0) {
        do {
          if (Variant::needs_deinit[*piVar20] != '\0') {
            Variant::_clear_internal();
          }
          lVar21 = lVar21 + 1;
          piVar20 = piVar20 + 6;
        } while (lVar23 != lVar21);
      }
      Memory::free_static(piVar17 + -4,false);
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_f8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_130);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_150);
  _scs_create((char *)&local_150,true);
  _scs_create((char *)&local_158,true);
  local_160 = 0;
  local_168 = 0;
  String::parse_latin1((String *)&local_168,"");
  local_170 = 0;
  String::parse_latin1((String *)&local_170,"emitting");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_138,1,(String *)&local_170,0x28,(String *)&local_168,6,
             (String *)&local_160);
  local_178 = 0;
  String::parse_latin1((String *)&local_178,"GPUParticles3D");
  StringName::StringName((StringName *)&local_148,(String *)&local_178,false);
  ClassDB::add_property
            ((StringName *)&local_148,(PropertyInfo *)&local_138,(StringName *)&local_158,
             (StringName *)&local_150,-1);
  if ((StringName::configured != '\0') && (local_148 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_138);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_170);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
  if ((((StringName::configured != '\0') &&
       ((local_160 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_158 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_150 != 0)) {
    StringName::unref();
  }
  Variant::Variant((Variant *)&local_78,true);
  StringName::StringName((StringName *)&local_138,"emitting",false);
  local_150 = 0;
  String::parse_latin1((String *)&local_150,"GPUParticles3D");
  StringName::StringName((StringName *)&local_148,(String *)&local_150,false);
  ClassDB::set_property_default_value
            ((StringName *)&local_148,(StringName *)&local_138,(Variant *)&local_78);
  if ((StringName::configured != '\0') && (local_148 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_150);
  if ((StringName::configured != '\0') && (local_138 != (char *)0x0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  _scs_create((char *)&local_150,true);
  _scs_create((char *)&local_158,true);
  local_160 = 0;
  local_168 = 0;
  String::parse_latin1((String *)&local_168,"1,1000000,1,exp");
  local_170 = 0;
  String::parse_latin1((String *)&local_170,"amount");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_138,2,(String *)&local_170,1,(String *)&local_168,6,
             (String *)&local_160);
  local_178 = 0;
  String::parse_latin1((String *)&local_178,"GPUParticles3D");
  StringName::StringName((StringName *)&local_148,(String *)&local_178,false);
  ClassDB::add_property
            ((StringName *)&local_148,(PropertyInfo *)&local_138,(StringName *)&local_158,
             (StringName *)&local_150,-1);
  if ((StringName::configured != '\0') && (local_148 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_138);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_170);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
  if (((StringName::configured != '\0') &&
      ((local_160 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (((local_158 == 0 || (StringName::unref(), StringName::configured != '\0')) && (local_150 != 0)
      ))) {
    StringName::unref();
  }
  _scs_create((char *)&local_150,true);
  _scs_create((char *)&local_158,true);
  local_160 = 0;
  local_168 = 0;
  String::parse_latin1((String *)&local_168,"0,1,0.0001");
  local_170 = 0;
  String::parse_latin1((String *)&local_170,"amount_ratio");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_138,3,(String *)&local_170,1,(String *)&local_168,6,
             (String *)&local_160);
  local_178 = 0;
  String::parse_latin1((String *)&local_178,"GPUParticles3D");
  StringName::StringName((StringName *)&local_148,(String *)&local_178,false);
  ClassDB::add_property
            ((StringName *)&local_148,(PropertyInfo *)&local_138,(StringName *)&local_158,
             (StringName *)&local_150,-1);
  if ((StringName::configured != '\0') && (local_148 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_138);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_170);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
  if ((((StringName::configured != '\0') &&
       ((local_160 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_158 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_150 != 0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_150,true);
  _scs_create((char *)&local_158,true);
  local_160 = 0;
  local_168 = 0;
  String::parse_latin1((String *)&local_168,"GPUParticles3D");
  local_170 = 0;
  String::parse_latin1((String *)&local_170,"sub_emitter");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_138,0x16,(String *)&local_170,0x1a,(String *)&local_168,6,
             (String *)&local_160);
  local_178 = 0;
  String::parse_latin1((String *)&local_178,"GPUParticles3D");
  StringName::StringName((StringName *)&local_148,(String *)&local_178,false);
  ClassDB::add_property
            ((StringName *)&local_148,(PropertyInfo *)&local_138,(StringName *)&local_158,
             (StringName *)&local_150,-1);
  if ((StringName::configured != '\0') && (local_148 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_138);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_170);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
  if (((StringName::configured != '\0') &&
      ((local_160 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (((local_158 == 0 || (StringName::unref(), StringName::configured != '\0')) && (local_150 != 0)
      ))) {
    StringName::unref();
  }
  local_138 = (char *)0x0;
  String::parse_latin1((String *)&local_138,"");
  local_148 = (char *)0x0;
  String::parse_latin1((String *)&local_148,"Time");
  local_158 = 0;
  String::parse_latin1((String *)&local_158,"GPUParticles3D");
  StringName::StringName((StringName *)&local_150,(String *)&local_158,false);
  ClassDB::add_property_group((StringName *)&local_150,(String *)&local_148,(String *)&local_138,0);
  if ((StringName::configured != '\0') && (local_150 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
  _scs_create((char *)&local_150,true);
  _scs_create((char *)&local_158,true);
  local_160 = 0;
  local_168 = 0;
  String::parse_latin1((String *)&local_168,"0.01,600.0,0.01,or_greater,exp,suffix:s");
  local_170 = 0;
  String::parse_latin1((String *)&local_170,"lifetime");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_138,3,(String *)&local_170,1,(String *)&local_168,6,
             (String *)&local_160);
  local_178 = 0;
  String::parse_latin1((String *)&local_178,"GPUParticles3D");
  StringName::StringName((StringName *)&local_148,(String *)&local_178,false);
  ClassDB::add_property
            ((StringName *)&local_148,(PropertyInfo *)&local_138,(StringName *)&local_158,
             (StringName *)&local_150,-1);
  if ((StringName::configured != '\0') && (local_148 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_138);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_170);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
  if ((((StringName::configured != '\0') &&
       ((local_160 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_158 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_150 != 0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_150,true);
  _scs_create((char *)&local_158,true);
  local_160 = 0;
  local_168 = 0;
  String::parse_latin1((String *)&local_168,"0.00,1.0,0.01");
  local_170 = 0;
  String::parse_latin1((String *)&local_170,"interp_to_end");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_138,3,(String *)&local_170,1,(String *)&local_168,6,
             (String *)&local_160);
  local_178 = 0;
  String::parse_latin1((String *)&local_178,"GPUParticles3D");
  StringName::StringName((StringName *)&local_148,(String *)&local_178,false);
  ClassDB::add_property
            ((StringName *)&local_148,(PropertyInfo *)&local_138,(StringName *)&local_158,
             (StringName *)&local_150,-1);
  if ((StringName::configured != '\0') && (local_148 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_138);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_170);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
  if ((((StringName::configured != '\0') &&
       ((local_160 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_158 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_150 != 0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_150,true);
  _scs_create((char *)&local_158,true);
  local_160 = 0;
  local_168 = 0;
  String::parse_latin1((String *)&local_168,"");
  local_170 = 0;
  String::parse_latin1((String *)&local_170,"one_shot");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_138,1,(String *)&local_170,0,(String *)&local_168,6,
             (String *)&local_160);
  local_178 = 0;
  String::parse_latin1((String *)&local_178,"GPUParticles3D");
  StringName::StringName((StringName *)&local_148,(String *)&local_178,false);
  ClassDB::add_property
            ((StringName *)&local_148,(PropertyInfo *)&local_138,(StringName *)&local_158,
             (StringName *)&local_150,-1);
  if ((StringName::configured != '\0') && (local_148 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_138);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_170);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
  if ((((StringName::configured != '\0') &&
       ((local_160 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_158 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_150 != 0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_150,true);
  _scs_create((char *)&local_158,true);
  local_160 = 0;
  local_168 = 0;
  String::parse_latin1((String *)&local_168,"0.00,10.0,0.01,or_greater,exp,suffix:s");
  local_170 = 0;
  String::parse_latin1((String *)&local_170,"preprocess");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_138,3,(String *)&local_170,1,(String *)&local_168,6,
             (String *)&local_160);
  local_178 = 0;
  String::parse_latin1((String *)&local_178,"GPUParticles3D");
  StringName::StringName((StringName *)&local_148,(String *)&local_178,false);
  ClassDB::add_property
            ((StringName *)&local_148,(PropertyInfo *)&local_138,(StringName *)&local_158,
             (StringName *)&local_150,-1);
  if ((StringName::configured != '\0') && (local_148 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_138);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_170);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
  if (((StringName::configured != '\0') &&
      ((local_160 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (((local_158 == 0 || (StringName::unref(), StringName::configured != '\0')) && (local_150 != 0)
      ))) {
    StringName::unref();
  }
  _scs_create((char *)&local_150,true);
  _scs_create((char *)&local_158,true);
  local_160 = 0;
  local_168 = 0;
  String::parse_latin1((String *)&local_168,"0,64,0.01");
  local_170 = 0;
  String::parse_latin1((String *)&local_170,"speed_scale");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_138,3,(String *)&local_170,1,(String *)&local_168,6,
             (String *)&local_160);
  local_178 = 0;
  String::parse_latin1((String *)&local_178,"GPUParticles3D");
  StringName::StringName((StringName *)&local_148,(String *)&local_178,false);
  ClassDB::add_property
            ((StringName *)&local_148,(PropertyInfo *)&local_138,(StringName *)&local_158,
             (StringName *)&local_150,-1);
  if ((StringName::configured != '\0') && (local_148 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_138);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_170);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
  if ((((StringName::configured != '\0') &&
       ((local_160 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_158 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_150 != 0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_150,true);
  _scs_create((char *)&local_158,true);
  local_160 = 0;
  local_168 = 0;
  String::parse_latin1((String *)&local_168,"0,1,0.01");
  local_170 = 0;
  String::parse_latin1((String *)&local_170,"explosiveness");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_138,3,(String *)&local_170,1,(String *)&local_168,6,
             (String *)&local_160);
  local_178 = 0;
  String::parse_latin1((String *)&local_178,"GPUParticles3D");
  StringName::StringName((StringName *)&local_148,(String *)&local_178,false);
  ClassDB::add_property
            ((StringName *)&local_148,(PropertyInfo *)&local_138,(StringName *)&local_158,
             (StringName *)&local_150,-1);
  if ((StringName::configured != '\0') && (local_148 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_138);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_170);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
  if ((((StringName::configured != '\0') &&
       ((local_160 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_158 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_150 != 0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_150,true);
  _scs_create((char *)&local_158,true);
  local_160 = 0;
  local_168 = 0;
  String::parse_latin1((String *)&local_168,"0,1,0.01");
  local_170 = 0;
  String::parse_latin1((String *)&local_170,"randomness");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_138,3,(String *)&local_170,1,(String *)&local_168,6,
             (String *)&local_160);
  local_178 = 0;
  String::parse_latin1((String *)&local_178,"GPUParticles3D");
  StringName::StringName((StringName *)&local_148,(String *)&local_178,false);
  ClassDB::add_property
            ((StringName *)&local_148,(PropertyInfo *)&local_138,(StringName *)&local_158,
             (StringName *)&local_150,-1);
  if ((StringName::configured != '\0') && (local_148 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_138);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_170);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
  if ((((StringName::configured != '\0') &&
       ((local_160 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_158 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_150 != 0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_150,true);
  _scs_create((char *)&local_158,true);
  local_160 = 0;
  local_168 = 0;
  String::parse_latin1((String *)&local_168,"");
  local_170 = 0;
  local_138 = "use_fixed_seed";
  local_130 = 0xe;
  String::parse_latin1((StrRange *)&local_170);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_138,1,(String *)&local_170,0,(String *)&local_168,6,
             (String *)&local_160);
  local_178 = 0;
  String::parse_latin1((String *)&local_178,"GPUParticles3D");
  StringName::StringName((StringName *)&local_148,(String *)&local_178,false);
  ClassDB::add_property
            ((StringName *)&local_148,(PropertyInfo *)&local_138,(StringName *)&local_158,
             (StringName *)&local_150,-1);
  if ((StringName::configured != '\0') && (local_148 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_138);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_170);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
  if ((((StringName::configured != '\0') &&
       ((local_160 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_158 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_150 != 0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_150,true);
  _scs_create((char *)&local_158,true);
  local_160 = 0;
  local_178 = 0;
  String::parse_latin1((String *)&local_178,",1");
  itos((long)local_188);
  operator+((char *)&local_180,&_LC163);
  String::operator+((String *)&local_170,(String *)&local_180);
  local_168 = 0;
  String::parse_latin1((String *)&local_168,"seed");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_138,2,(String *)&local_168,1,(String *)&local_170,6,
             (String *)&local_160);
  local_190 = 0;
  String::parse_latin1((String *)&local_190,"GPUParticles3D");
  StringName::StringName((StringName *)&local_148,(String *)&local_190,false);
  ClassDB::add_property
            ((StringName *)&local_148,(PropertyInfo *)&local_138,(StringName *)&local_158,
             (StringName *)&local_150,-1);
  if ((StringName::configured != '\0') && (local_148 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_190);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_138);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_170);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_180);
  CowData<char32_t>::_unref(local_188);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
  if ((((StringName::configured != '\0') &&
       ((local_160 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_158 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_150 != 0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_150,true);
  _scs_create((char *)&local_158,true);
  local_160 = 0;
  local_168 = 0;
  String::parse_latin1((String *)&local_168,"0,1000,1,suffix:FPS");
  local_170 = 0;
  String::parse_latin1((String *)&local_170,"fixed_fps");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_138,2,(String *)&local_170,1,(String *)&local_168,6,
             (String *)&local_160);
  local_178 = 0;
  String::parse_latin1((String *)&local_178,"GPUParticles3D");
  StringName::StringName((StringName *)&local_148,(String *)&local_178,false);
  ClassDB::add_property
            ((StringName *)&local_148,(PropertyInfo *)&local_138,(StringName *)&local_158,
             (StringName *)&local_150,-1);
  if ((StringName::configured != '\0') && (local_148 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_138);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_170);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
  if (((StringName::configured != '\0') &&
      ((local_160 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (((local_158 == 0 || (StringName::unref(), StringName::configured != '\0')) && (local_150 != 0)
      ))) {
    StringName::unref();
  }
  _scs_create((char *)&local_150,true);
  _scs_create((char *)&local_158,true);
  local_160 = 0;
  local_168 = 0;
  String::parse_latin1((String *)&local_168,"");
  local_170 = 0;
  String::parse_latin1((String *)&local_170,"interpolate");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_138,1,(String *)&local_170,0,(String *)&local_168,6,
             (String *)&local_160);
  local_178 = 0;
  String::parse_latin1((String *)&local_178,"GPUParticles3D");
  StringName::StringName((StringName *)&local_148,(String *)&local_178,false);
  ClassDB::add_property
            ((StringName *)&local_148,(PropertyInfo *)&local_138,(StringName *)&local_158,
             (StringName *)&local_150,-1);
  if ((StringName::configured != '\0') && (local_148 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_138);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_170);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
  if ((((StringName::configured != '\0') &&
       ((local_160 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_158 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_150 != 0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_150,true);
  _scs_create((char *)&local_158,true);
  local_160 = 0;
  local_168 = 0;
  String::parse_latin1((String *)&local_168,"");
  local_170 = 0;
  String::parse_latin1((String *)&local_170,"fract_delta");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_138,1,(String *)&local_170,0,(String *)&local_168,6,
             (String *)&local_160);
  local_178 = 0;
  String::parse_latin1((String *)&local_178,"GPUParticles3D");
  StringName::StringName((StringName *)&local_148,(String *)&local_178,false);
  ClassDB::add_property
            ((StringName *)&local_148,(PropertyInfo *)&local_138,(StringName *)&local_158,
             (StringName *)&local_150,-1);
  if ((StringName::configured != '\0') && (local_148 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_138);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_170);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
  if (((StringName::configured != '\0') &&
      ((local_160 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (((local_158 == 0 || (StringName::unref(), StringName::configured != '\0')) && (local_150 != 0)
      ))) {
    StringName::unref();
  }
  local_138 = (char *)0x0;
  String::parse_latin1((String *)&local_138,"collision_");
  local_148 = (char *)0x0;
  String::parse_latin1((String *)&local_148,"Collision");
  local_158 = 0;
  String::parse_latin1((String *)&local_158,"GPUParticles3D");
  StringName::StringName((StringName *)&local_150,(String *)&local_158,false);
  ClassDB::add_property_group((StringName *)&local_150,(String *)&local_148,(String *)&local_138,0);
  if ((StringName::configured != '\0') && (local_150 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
  _scs_create((char *)&local_150,true);
  _scs_create((char *)&local_158,true);
  local_160 = 0;
  local_168 = 0;
  String::parse_latin1((String *)&local_168,"0,128,0.01,or_greater,suffix:m");
  local_170 = 0;
  String::parse_latin1((String *)&local_170,"collision_base_size");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_138,3,(String *)&local_170,1,(String *)&local_168,6,
             (String *)&local_160);
  local_178 = 0;
  String::parse_latin1((String *)&local_178,"GPUParticles3D");
  StringName::StringName((StringName *)&local_148,(String *)&local_178,false);
  ClassDB::add_property
            ((StringName *)&local_148,(PropertyInfo *)&local_138,(StringName *)&local_158,
             (StringName *)&local_150,-1);
  if ((StringName::configured != '\0') && (local_148 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_138);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_170);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
  if ((((StringName::configured != '\0') &&
       ((local_160 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_158 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_150 != 0)) {
    StringName::unref();
  }
  local_138 = (char *)0x0;
  String::parse_latin1((String *)&local_138,"");
  local_148 = (char *)0x0;
  String::parse_latin1((String *)&local_148,"Drawing");
  local_158 = 0;
  String::parse_latin1((String *)&local_158,"GPUParticles3D");
  StringName::StringName((StringName *)&local_150,(String *)&local_158,false);
  ClassDB::add_property_group((StringName *)&local_150,(String *)&local_148,(String *)&local_138,0);
  if ((StringName::configured != '\0') && (local_150 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
  _scs_create((char *)&local_150,true);
  _scs_create((char *)&local_158,true);
  local_160 = 0;
  local_168 = 0;
  String::parse_latin1((String *)&local_168,"suffix:m");
  local_170 = 0;
  String::parse_latin1((String *)&local_170,"visibility_aabb");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_138,0x10,(String *)&local_170,0,(String *)&local_168,6,
             (String *)&local_160);
  local_178 = 0;
  String::parse_latin1((String *)&local_178,"GPUParticles3D");
  StringName::StringName((StringName *)&local_148,(String *)&local_178,false);
  ClassDB::add_property
            ((StringName *)&local_148,(PropertyInfo *)&local_138,(StringName *)&local_158,
             (StringName *)&local_150,-1);
  if ((StringName::configured != '\0') && (local_148 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_138);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_170);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
  if ((((StringName::configured != '\0') &&
       ((local_160 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_158 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_150 != 0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_150,true);
  _scs_create((char *)&local_158,true);
  local_160 = 0;
  local_168 = 0;
  String::parse_latin1((String *)&local_168,"");
  local_170 = 0;
  String::parse_latin1((String *)&local_170,"local_coords");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_138,1,(String *)&local_170,0,(String *)&local_168,6,
             (String *)&local_160);
  local_178 = 0;
  String::parse_latin1((String *)&local_178,"GPUParticles3D");
  StringName::StringName((StringName *)&local_148,(String *)&local_178,false);
  ClassDB::add_property
            ((StringName *)&local_148,(PropertyInfo *)&local_138,(StringName *)&local_158,
             (StringName *)&local_150,-1);
  if ((StringName::configured != '\0') && (local_148 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_138);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_170);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
  if ((((StringName::configured != '\0') &&
       ((local_160 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_158 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_150 != 0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_150,true);
  _scs_create((char *)&local_158,false);
  local_160 = 0;
  local_168 = 0;
  String::parse_latin1((String *)&local_168,"Index,Lifetime,Reverse Lifetime,View Depth");
  local_170 = 0;
  String::parse_latin1((String *)&local_170,"draw_order");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_138,2,(String *)&local_170,2,(String *)&local_168,6,
             (String *)&local_160);
  local_178 = 0;
  String::parse_latin1((String *)&local_178,"GPUParticles3D");
  StringName::StringName((StringName *)&local_148,(String *)&local_178,false);
  ClassDB::add_property
            ((StringName *)&local_148,(PropertyInfo *)&local_138,(StringName *)&local_158,
             (StringName *)&local_150,-1);
  if ((StringName::configured != '\0') && (local_148 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_138);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_170);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
  if (((StringName::configured != '\0') &&
      ((local_160 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (((local_158 == 0 || (StringName::unref(), StringName::configured != '\0')) && (local_150 != 0)
      ))) {
    StringName::unref();
  }
  _scs_create((char *)&local_150,true);
  _scs_create((char *)&local_158,true);
  local_160 = 0;
  local_168 = 0;
  String::parse_latin1
            ((String *)&local_168,"Disabled,Z-Billboard,Y to Velocity,Z-Billboard + Y to Velocity");
  local_170 = 0;
  String::parse_latin1((String *)&local_170,"transform_align");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_138,2,(String *)&local_170,2,(String *)&local_168,6,
             (String *)&local_160);
  local_178 = 0;
  String::parse_latin1((String *)&local_178,"GPUParticles3D");
  StringName::StringName((StringName *)&local_148,(String *)&local_178,false);
  ClassDB::add_property
            ((StringName *)&local_148,(PropertyInfo *)&local_138,(StringName *)&local_158,
             (StringName *)&local_150,-1);
  if ((StringName::configured != '\0') && (local_148 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_138);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_170);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
  if ((((StringName::configured != '\0') &&
       ((local_160 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_158 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_150 != 0)) {
    StringName::unref();
  }
  local_138 = (char *)0x0;
  String::parse_latin1((String *)&local_138,"trail_");
  local_148 = (char *)0x0;
  String::parse_latin1((String *)&local_148,"Trails");
  local_158 = 0;
  String::parse_latin1((String *)&local_158,"GPUParticles3D");
  StringName::StringName((StringName *)&local_150,(String *)&local_158,false);
  ClassDB::add_property_group((StringName *)&local_150,(String *)&local_148,(String *)&local_138,0);
  if ((StringName::configured != '\0') && (local_150 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
  _scs_create((char *)&local_150,true);
  _scs_create((char *)&local_158,true);
  local_160 = 0;
  local_168 = 0;
  String::parse_latin1((String *)&local_168,"");
  local_170 = 0;
  String::parse_latin1((String *)&local_170,"trail_enabled");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_138,1,(String *)&local_170,0,(String *)&local_168,6,
             (String *)&local_160);
  local_178 = 0;
  String::parse_latin1((String *)&local_178,"GPUParticles3D");
  StringName::StringName((StringName *)&local_148,(String *)&local_178,false);
  ClassDB::add_property
            ((StringName *)&local_148,(PropertyInfo *)&local_138,(StringName *)&local_158,
             (StringName *)&local_150,-1);
  if ((StringName::configured != '\0') && (local_148 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_138);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_170);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
  if ((((StringName::configured != '\0') &&
       ((local_160 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_158 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_150 != 0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_150,true);
  _scs_create((char *)&local_158,true);
  local_160 = 0;
  local_168 = 0;
  String::parse_latin1((String *)&local_168,"0.01,10,0.01,or_greater,suffix:s");
  local_170 = 0;
  String::parse_latin1((String *)&local_170,"trail_lifetime");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_138,3,(String *)&local_170,1,(String *)&local_168,6,
             (String *)&local_160);
  local_178 = 0;
  String::parse_latin1((String *)&local_178,"GPUParticles3D");
  StringName::StringName((StringName *)&local_148,(String *)&local_178,false);
  ClassDB::add_property
            ((StringName *)&local_148,(PropertyInfo *)&local_138,(StringName *)&local_158,
             (StringName *)&local_150,-1);
  if ((StringName::configured != '\0') && (local_148 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_138);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_170);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
  if ((((StringName::configured != '\0') &&
       ((local_160 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_158 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_150 != 0)) {
    StringName::unref();
  }
  local_138 = (char *)0x0;
  String::parse_latin1((String *)&local_138,"");
  local_148 = (char *)0x0;
  String::parse_latin1((String *)&local_148,"Process Material");
  local_158 = 0;
  String::parse_latin1((String *)&local_158,"GPUParticles3D");
  StringName::StringName((StringName *)&local_150,(String *)&local_158,false);
  ClassDB::add_property_group((StringName *)&local_150,(String *)&local_148,(String *)&local_138,0);
  if ((StringName::configured != '\0') && (local_150 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
  _scs_create((char *)&local_150,true);
  _scs_create((char *)&local_158,true);
  local_160 = 0;
  local_168 = 0;
  String::parse_latin1((String *)&local_168,"ParticleProcessMaterial,ShaderMaterial");
  local_170 = 0;
  String::parse_latin1((String *)&local_170,"process_material");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_138,0x18,(String *)&local_170,0x11,(String *)&local_168,6,
             (String *)&local_160);
  local_178 = 0;
  String::parse_latin1((String *)&local_178,"GPUParticles3D");
  StringName::StringName((StringName *)&local_148,(String *)&local_178,false);
  ClassDB::add_property
            ((StringName *)&local_148,(PropertyInfo *)&local_138,(StringName *)&local_158,
             (StringName *)&local_150,-1);
  if ((StringName::configured != '\0') && (local_148 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_138);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_170);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
  if (((StringName::configured != '\0') &&
      ((local_160 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (((local_158 == 0 || (StringName::unref(), StringName::configured != '\0')) && (local_150 != 0)
      ))) {
    StringName::unref();
  }
  local_138 = (undefined *)0x0;
  String::parse_latin1((String *)&local_138,"draw_");
  local_148 = (char *)0x0;
  String::parse_latin1((String *)&local_148,"Draw Passes");
  local_158 = 0;
  String::parse_latin1((String *)&local_158,"GPUParticles3D");
  StringName::StringName((StringName *)&local_150,(String *)&local_158,false);
  ClassDB::add_property_group((StringName *)&local_150,(String *)&local_148,(String *)&local_138,0);
  if ((StringName::configured != '\0') && (local_150 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
  _scs_create((char *)&local_150,true);
  _scs_create((char *)&local_158,true);
  local_160 = 0;
  local_178 = 0;
  String::parse_latin1((String *)&local_178,",1");
  itos((long)local_188);
  operator+((char *)&local_180,&_LC163);
  String::operator+((String *)&local_170,(String *)&local_180);
  local_168 = 0;
  String::parse_latin1((String *)&local_168,"draw_passes");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_138,2,(String *)&local_168,1,(String *)&local_170,6,
             (String *)&local_160);
  local_190 = 0;
  String::parse_latin1((String *)&local_190,"GPUParticles3D");
  StringName::StringName((StringName *)&local_148,(String *)&local_190,false);
  ClassDB::add_property
            ((StringName *)&local_148,(PropertyInfo *)&local_138,(StringName *)&local_158,
             (StringName *)&local_150,-1);
  if ((StringName::configured != '\0') && (local_148 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_190);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_138);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_170);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_180);
  CowData<char32_t>::_unref(local_188);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
  if ((((StringName::configured != '\0') &&
       ((local_160 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_158 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_150 != 0)) {
    StringName::unref();
  }
  lVar23 = 0;
  do {
    iVar22 = (int)lVar23;
    _scs_create((char *)&local_150,true);
    lVar23 = lVar23 + 1;
    _scs_create((char *)&local_158,true);
    local_138 = "Mesh";
    local_160 = 0;
    local_168 = 0;
    local_130 = 4;
    String::parse_latin1((StrRange *)&local_168);
    itos((long)&local_178);
    operator+((char *)&local_170,"draw_pass_");
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_138,0x18,(String *)&local_170,0x11,(String *)&local_168,6,
               (String *)&local_160);
    local_148 = "GPUParticles3D";
    local_180 = 0;
    local_140 = 0xe;
    String::parse_latin1((StrRange *)&local_180);
    StringName::StringName((StringName *)&local_148,(String *)&local_180,false);
    ClassDB::add_property
              ((StringName *)&local_148,(PropertyInfo *)&local_138,(StringName *)&local_158,
               (StringName *)&local_150,iVar22);
    if ((StringName::configured != '\0') && (local_148 != (char *)0x0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_180);
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_138);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_170);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
    if (((StringName::configured != '\0') &&
        ((local_160 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
       (((local_158 == 0 || (StringName::unref(), StringName::configured != '\0')) &&
        (local_150 != 0)))) {
      StringName::unref();
    }
  } while (lVar23 != 4);
  _scs_create((char *)&local_150,true);
  _scs_create((char *)&local_158,true);
  local_160 = 0;
  local_168 = 0;
  String::parse_latin1((String *)&local_168,"Skin");
  local_170 = 0;
  String::parse_latin1((String *)&local_170,"draw_skin");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_138,0x18,(String *)&local_170,0x11,(String *)&local_168,6,
             (String *)&local_160);
  local_178 = 0;
  String::parse_latin1((String *)&local_178,"GPUParticles3D");
  StringName::StringName((StringName *)&local_148,(String *)&local_178,false);
  ClassDB::add_property
            ((StringName *)&local_148,(PropertyInfo *)&local_138,(StringName *)&local_158,
             (StringName *)&local_150,-1);
  if ((StringName::configured != '\0') && (local_148 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_138);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_170);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
  if ((((StringName::configured != '\0') &&
       ((local_160 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_158 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_150 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_148,"DRAW_ORDER_INDEX",false);
  local_158 = 0;
  String::parse_latin1((String *)&local_158,"DRAW_ORDER_INDEX");
  GetTypeInfo<GPUParticles3D::DrawOrder,void>::get_class_info
            ((GetTypeInfo<GPUParticles3D::DrawOrder,void> *)&local_138);
  local_150 = local_128._0_8_;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = local_128._8_8_;
  local_128 = auVar3 << 0x40;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_138);
  local_160 = 0;
  String::parse_latin1((String *)&local_160,"GPUParticles3D");
  StringName::StringName((StringName *)&local_138,(String *)&local_160,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_138,(StringName *)&local_150,(StringName *)&local_148,0,false);
  if ((StringName::configured != '\0') && (local_138 != (undefined *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_160);
  if ((StringName::configured != '\0') && (local_150 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
  if ((StringName::configured != '\0') && (local_148 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_148,"DRAW_ORDER_LIFETIME",false);
  local_158 = 0;
  String::parse_latin1((String *)&local_158,"DRAW_ORDER_LIFETIME");
  GetTypeInfo<GPUParticles3D::DrawOrder,void>::get_class_info
            ((GetTypeInfo<GPUParticles3D::DrawOrder,void> *)&local_138);
  local_150 = local_128._0_8_;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = local_128._8_8_;
  local_128 = auVar4 << 0x40;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_138);
  local_160 = 0;
  String::parse_latin1((String *)&local_160,"GPUParticles3D");
  StringName::StringName((StringName *)&local_138,(String *)&local_160,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_138,(StringName *)&local_150,(StringName *)&local_148,1,false);
  if ((StringName::configured != '\0') && (local_138 != (undefined *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_160);
  if ((StringName::configured != '\0') && (local_150 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
  if ((StringName::configured != '\0') && (local_148 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_148,"DRAW_ORDER_REVERSE_LIFETIME",false);
  local_158 = 0;
  String::parse_latin1((String *)&local_158,"DRAW_ORDER_REVERSE_LIFETIME");
  GetTypeInfo<GPUParticles3D::DrawOrder,void>::get_class_info
            ((GetTypeInfo<GPUParticles3D::DrawOrder,void> *)&local_138);
  local_150 = local_128._0_8_;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = local_128._8_8_;
  local_128 = auVar5 << 0x40;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_138);
  local_160 = 0;
  String::parse_latin1((String *)&local_160,"GPUParticles3D");
  StringName::StringName((StringName *)&local_138,(String *)&local_160,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_138,(StringName *)&local_150,(StringName *)&local_148,2,false);
  if ((StringName::configured != '\0') && (local_138 != (undefined *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_160);
  if ((StringName::configured != '\0') && (local_150 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
  if ((StringName::configured != '\0') && (local_148 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_148,"DRAW_ORDER_VIEW_DEPTH",false);
  local_158 = 0;
  String::parse_latin1((String *)&local_158,"DRAW_ORDER_VIEW_DEPTH");
  GetTypeInfo<GPUParticles3D::DrawOrder,void>::get_class_info
            ((GetTypeInfo<GPUParticles3D::DrawOrder,void> *)&local_138);
  local_150 = local_128._0_8_;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = local_128._8_8_;
  local_128 = auVar6 << 0x40;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_138);
  local_160 = 0;
  String::parse_latin1((String *)&local_160,"GPUParticles3D");
  StringName::StringName((StringName *)&local_138,(String *)&local_160,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_138,(StringName *)&local_150,(StringName *)&local_148,3,false);
  if ((StringName::configured != '\0') && (local_138 != (undefined *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_160);
  if ((StringName::configured != '\0') && (local_150 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
  if ((StringName::configured != '\0') && (local_148 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_170,"EMIT_FLAG_POSITION",false);
  local_178 = 0;
  String::parse_latin1((String *)&local_178,"EMIT_FLAG_POSITION");
  local_138 = "GPUParticles3D::EmitFlags";
  local_158 = 0;
  local_130 = 0x19;
  String::parse_latin1((StrRange *)&local_158);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_150,(String *)&local_158)
  ;
  StringName::StringName((StringName *)&local_148,(String *)&local_150,false);
  local_160 = 0;
  local_168 = 0;
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_138,2,(String *)&local_168,0,(String *)&local_160,0x10006,
             (StringName *)&local_148);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_160);
  if ((StringName::configured != '\0') && (local_148 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_150);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
  local_148 = (char *)local_128._0_8_;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = local_128._8_8_;
  local_128 = auVar7 << 0x40;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_138);
  local_150 = 0;
  String::parse_latin1((String *)&local_150,"GPUParticles3D");
  StringName::StringName((StringName *)&local_138,(String *)&local_150,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_138,(StringName *)&local_148,(StringName *)&local_170,1,false);
  if ((StringName::configured != '\0') && (local_138 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_150);
  if ((StringName::configured != '\0') && (local_148 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
  if ((StringName::configured != '\0') && (local_170 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_170,"EMIT_FLAG_ROTATION_SCALE",false);
  local_178 = 0;
  String::parse_latin1((String *)&local_178,"EMIT_FLAG_ROTATION_SCALE");
  local_138 = "GPUParticles3D::EmitFlags";
  local_158 = 0;
  local_130 = 0x19;
  String::parse_latin1((StrRange *)&local_158);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_150,(String *)&local_158)
  ;
  StringName::StringName((StringName *)&local_148,(String *)&local_150,false);
  local_160 = 0;
  local_168 = 0;
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_138,2,(String *)&local_168,0,(String *)&local_160,0x10006,
             (StringName *)&local_148);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_160);
  if ((StringName::configured != '\0') && (local_148 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_150);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
  local_148 = (char *)local_128._0_8_;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = local_128._8_8_;
  local_128 = auVar8 << 0x40;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_138);
  local_150 = 0;
  String::parse_latin1((String *)&local_150,"GPUParticles3D");
  StringName::StringName((StringName *)&local_138,(String *)&local_150,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_138,(StringName *)&local_148,(StringName *)&local_170,2,false);
  if ((StringName::configured != '\0') && (local_138 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_150);
  if ((StringName::configured != '\0') && (local_148 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
  if ((StringName::configured != '\0') && (local_170 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_170,"EMIT_FLAG_VELOCITY",false);
  local_178 = 0;
  String::parse_latin1((String *)&local_178,"EMIT_FLAG_VELOCITY");
  local_138 = "GPUParticles3D::EmitFlags";
  local_158 = 0;
  local_130 = 0x19;
  String::parse_latin1((StrRange *)&local_158);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_150,(String *)&local_158)
  ;
  StringName::StringName((StringName *)&local_148,(String *)&local_150,false);
  local_160 = 0;
  local_168 = 0;
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_138,2,(String *)&local_168,0,(String *)&local_160,0x10006,
             (StringName *)&local_148);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_160);
  if ((StringName::configured != '\0') && (local_148 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_150);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
  local_148 = (char *)local_128._0_8_;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = local_128._8_8_;
  local_128 = auVar9 << 0x40;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_138);
  local_150 = 0;
  String::parse_latin1((String *)&local_150,"GPUParticles3D");
  StringName::StringName((StringName *)&local_138,(String *)&local_150,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_138,(StringName *)&local_148,(StringName *)&local_170,4,false);
  if ((StringName::configured != '\0') && (local_138 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_150);
  if ((StringName::configured != '\0') && (local_148 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
  if ((StringName::configured != '\0') && (local_170 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_170,"EMIT_FLAG_COLOR",false);
  local_178 = 0;
  String::parse_latin1((String *)&local_178,"EMIT_FLAG_COLOR");
  local_138 = "GPUParticles3D::EmitFlags";
  local_158 = 0;
  local_130 = 0x19;
  String::parse_latin1((StrRange *)&local_158);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_150,(String *)&local_158)
  ;
  StringName::StringName((StringName *)&local_148,(String *)&local_150,false);
  local_160 = 0;
  local_168 = 0;
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_138,2,(String *)&local_168,0,(String *)&local_160,0x10006,
             (StringName *)&local_148);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_160);
  if ((StringName::configured != '\0') && (local_148 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_150);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
  local_148 = (char *)local_128._0_8_;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = local_128._8_8_;
  local_128 = auVar10 << 0x40;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_138);
  local_150 = 0;
  String::parse_latin1((String *)&local_150,"GPUParticles3D");
  StringName::StringName((StringName *)&local_138,(String *)&local_150,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_138,(StringName *)&local_148,(StringName *)&local_170,8,false);
  if ((StringName::configured != '\0') && (local_138 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_150);
  if ((StringName::configured != '\0') && (local_148 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
  if ((StringName::configured != '\0') && (local_170 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_170,"EMIT_FLAG_CUSTOM",false);
  local_178 = 0;
  String::parse_latin1((String *)&local_178,"EMIT_FLAG_CUSTOM");
  local_138 = "GPUParticles3D::EmitFlags";
  local_158 = 0;
  local_130 = 0x19;
  String::parse_latin1((StrRange *)&local_158);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_150,(String *)&local_158)
  ;
  StringName::StringName((StringName *)&local_148,(String *)&local_150,false);
  local_160 = 0;
  local_168 = 0;
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_138,2,(String *)&local_168,0,(String *)&local_160,0x10006,
             (StringName *)&local_148);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_160);
  if ((StringName::configured != '\0') && (local_148 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_150);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
  local_148 = (char *)local_128._0_8_;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = local_128._8_8_;
  local_128 = auVar11 << 0x40;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_138);
  local_150 = 0;
  String::parse_latin1((String *)&local_150,"GPUParticles3D");
  StringName::StringName((StringName *)&local_138,(String *)&local_150,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_138,(StringName *)&local_148,(StringName *)&local_170,0x10,false);
  if ((StringName::configured != '\0') && (local_138 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_150);
  if ((StringName::configured != '\0') && (local_148 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
  if ((StringName::configured != '\0') && (local_170 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_138,"MAX_DRAW_PASSES",false);
  local_150 = 0;
  local_158 = 0;
  String::parse_latin1((String *)&local_158,"GPUParticles3D");
  StringName::StringName((StringName *)&local_148,(String *)&local_158,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_148,(StringName *)&local_150,(StringName *)&local_138,4,false);
  if ((StringName::configured != '\0') && (local_148 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
  if ((StringName::configured != '\0') &&
     (((local_150 == 0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_138 != (char *)0x0)))) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_148,"TRANSFORM_ALIGN_DISABLED",false);
  local_158 = 0;
  String::parse_latin1((String *)&local_158,"TRANSFORM_ALIGN_DISABLED");
  GetTypeInfo<GPUParticles3D::TransformAlign,void>::get_class_info
            ((GetTypeInfo<GPUParticles3D::TransformAlign,void> *)&local_138);
  local_150 = local_128._0_8_;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = local_128._8_8_;
  local_128 = auVar12 << 0x40;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_138);
  local_160 = 0;
  String::parse_latin1((String *)&local_160,"GPUParticles3D");
  StringName::StringName((StringName *)&local_138,(String *)&local_160,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_138,(StringName *)&local_150,(StringName *)&local_148,0,false);
  if ((StringName::configured != '\0') && (local_138 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_160);
  if ((StringName::configured != '\0') && (local_150 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
  if ((StringName::configured != '\0') && (local_148 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_148,"TRANSFORM_ALIGN_Z_BILLBOARD",false);
  local_158 = 0;
  String::parse_latin1((String *)&local_158,"TRANSFORM_ALIGN_Z_BILLBOARD");
  GetTypeInfo<GPUParticles3D::TransformAlign,void>::get_class_info
            ((GetTypeInfo<GPUParticles3D::TransformAlign,void> *)&local_138);
  local_150 = local_128._0_8_;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = local_128._8_8_;
  local_128 = auVar13 << 0x40;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_138);
  local_160 = 0;
  String::parse_latin1((String *)&local_160,"GPUParticles3D");
  StringName::StringName((StringName *)&local_138,(String *)&local_160,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_138,(StringName *)&local_150,(StringName *)&local_148,1,false);
  if ((StringName::configured != '\0') && (local_138 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_160);
  if ((StringName::configured != '\0') && (local_150 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
  if ((StringName::configured != '\0') && (local_148 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_148,"TRANSFORM_ALIGN_Y_TO_VELOCITY",false);
  local_158 = 0;
  String::parse_latin1((String *)&local_158,"TRANSFORM_ALIGN_Y_TO_VELOCITY");
  GetTypeInfo<GPUParticles3D::TransformAlign,void>::get_class_info
            ((GetTypeInfo<GPUParticles3D::TransformAlign,void> *)&local_138);
  local_150 = local_128._0_8_;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = local_128._8_8_;
  local_128 = auVar14 << 0x40;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_138);
  local_138 = "GPUParticles3D";
  local_160 = 0;
  local_130 = 0xe;
  String::parse_latin1((StrRange *)&local_160);
  StringName::StringName((StringName *)&local_138,(String *)&local_160,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_138,(StringName *)&local_150,(StringName *)&local_148,2,false);
  if ((StringName::configured != '\0') && (local_138 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_160);
  if ((StringName::configured != '\0') && (local_150 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
  if ((StringName::configured != '\0') && (local_148 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_148,"TRANSFORM_ALIGN_Z_BILLBOARD_Y_TO_VELOCITY",false)
  ;
  local_158 = 0;
  String::parse_latin1((String *)&local_158,"TRANSFORM_ALIGN_Z_BILLBOARD_Y_TO_VELOCITY");
  GetTypeInfo<GPUParticles3D::TransformAlign,void>::get_class_info
            ((GetTypeInfo<GPUParticles3D::TransformAlign,void> *)&local_138);
  local_150 = local_128._0_8_;
  auVar15._8_8_ = 0;
  auVar15._0_8_ = local_128._8_8_;
  local_128 = auVar15 << 0x40;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_138);
  local_160 = 0;
  String::parse_latin1((String *)&local_160,"GPUParticles3D");
  StringName::StringName((StringName *)&local_138,(String *)&local_160,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_138,(StringName *)&local_150,(StringName *)&local_148,3,false);
  if ((StringName::configured != '\0') && (local_138 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_160);
  if ((StringName::configured != '\0') && (local_150 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
  if ((StringName::configured != '\0') && (local_148 != (char *)0x0)) {
    StringName::unref();
  }
  Variant::Variant((Variant *)&local_78,0);
  StringName::StringName((StringName *)&local_138,"seed",false);
  local_150 = 0;
  String::parse_latin1((String *)&local_150,"GPUParticles3D");
  StringName::StringName((StringName *)&local_148,(String *)&local_150,false);
  ClassDB::set_property_default_value
            ((StringName *)&local_148,(StringName *)&local_138,(Variant *)&local_78);
  if ((StringName::configured != '\0') && (local_148 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_150);
  if ((StringName::configured != '\0') && (local_138 != (char *)0x0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
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



/* GPUParticles3D::~GPUParticles3D() */

void __thiscall GPUParticles3D::~GPUParticles3D(GPUParticles3D *this)

{
  Object *pOVar1;
  char cVar2;
  long lVar3;
  long *plVar4;
  
  *(undefined ***)this = &PTR__initialize_classv_00123b30;
  lVar3 = RenderingServer::get_singleton();
  if (lVar3 == 0) {
    _err_print_error("~GPUParticles3D","scene/3d/gpu_particles_3d.cpp",0x38a,
                     "Parameter \"RenderingServer::get_singleton()\" is null.",0,0);
    lVar3 = *(long *)(this + 0x6c8);
  }
  else {
    plVar4 = (long *)RenderingServer::get_singleton();
    (**(code **)(*plVar4 + 0x11b0))(plVar4);
    lVar3 = *(long *)(this + 0x6c8);
  }
  if ((lVar3 != 0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) {
    pOVar1 = *(Object **)(this + 0x6c8);
    cVar2 = predelete_handler(pOVar1);
    if (cVar2 != '\0') {
      (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
      Memory::free_static(pOVar1,false);
    }
  }
  CowData<Ref<Mesh>>::_unref((CowData<Ref<Mesh>> *)(this + 0x6c0));
  if ((*(long *)(this + 0x6a8) != 0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) {
    pOVar1 = *(Object **)(this + 0x6a8);
    cVar2 = predelete_handler(pOVar1);
    if (cVar2 != '\0') {
      (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
      Memory::free_static(pOVar1,false);
    }
  }
  NodePath::~NodePath((NodePath *)(this + 0x680));
  GeometryInstance3D::~GeometryInstance3D((GeometryInstance3D *)this);
  return;
}



/* GPUParticles3D::~GPUParticles3D() */

void __thiscall GPUParticles3D::~GPUParticles3D(GPUParticles3D *this)

{
  ~GPUParticles3D(this);
  operator_delete(this,0x708);
  return;
}



/* CowData<Ref<Mesh> >::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Ref<Mesh>>::_copy_on_write(CowData<Ref<Mesh>> *this)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  char cVar4;
  undefined8 *puVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  lVar1 = *(long *)(*(long *)this + -8);
  uVar7 = 0x10;
  if (lVar1 * 8 != 0) {
    uVar7 = lVar1 * 8 - 1;
    uVar7 = uVar7 | uVar7 >> 1;
    uVar7 = uVar7 | uVar7 >> 2;
    uVar7 = uVar7 | uVar7 >> 4;
    uVar7 = uVar7 | uVar7 >> 8;
    uVar7 = uVar7 | uVar7 >> 0x10;
    uVar7 = (uVar7 | uVar7 >> 0x20) + 0x11;
  }
  puVar5 = (undefined8 *)Memory::alloc_static(uVar7,false);
  if (puVar5 == (undefined8 *)0x0) {
    _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                     "Parameter \"mem_new\" is null.",0,0);
    return;
  }
  lVar8 = 0;
  *puVar5 = 1;
  puVar5[1] = lVar1;
  plVar6 = puVar5 + 2;
  if (lVar1 != 0) {
    do {
      lVar2 = *(long *)this;
      *plVar6 = 0;
      lVar2 = *(long *)(lVar2 + lVar8 * 8);
      if (lVar2 != 0) {
        *plVar6 = lVar2;
        cVar4 = RefCounted::reference();
        if (cVar4 == '\0') {
          *plVar6 = 0;
        }
      }
      lVar8 = lVar8 + 1;
      plVar6 = plVar6 + 1;
    } while (lVar1 != lVar8);
  }
  _unref(this);
  *(undefined8 **)this = puVar5 + 2;
  return;
}



/* Error CowData<Transform3D>::resize<false>(long) [clone .isra.0] */

void __thiscall CowData<Transform3D>::resize<false>(CowData<Transform3D> *this,long param_1)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  CowData<Transform3D> *pCVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined1 (*pauVar7) [16];
  undefined1 (*pauVar8) [16];
  char *pcVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  CowData<Transform3D> *pCVar12;
  CowData<Transform3D> *pCVar13;
  long lVar14;
  long lVar15;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return;
  }
  lVar14 = *(long *)this;
  if (lVar14 == 0) {
    if (param_1 == 0) {
      return;
    }
    _copy_on_write(this);
    lVar15 = 0;
    pCVar4 = (CowData<Transform3D> *)0x0;
  }
  else {
    lVar15 = *(long *)(lVar14 + -8);
    if (param_1 == lVar15) {
      return;
    }
    if (param_1 == 0) {
      LOCK();
      plVar1 = (long *)(lVar14 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) {
        *(undefined8 *)this = 0;
        return;
      }
      lVar14 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar14 + -0x10),false);
      return;
    }
    _copy_on_write(this);
    pCVar4 = (CowData<Transform3D> *)(lVar15 * 0x30);
    if (pCVar4 != (CowData<Transform3D> *)0x0) {
      uVar5 = (ulong)(pCVar4 + -1) | (ulong)(pCVar4 + -1) >> 1;
      uVar5 = uVar5 | uVar5 >> 2;
      uVar5 = uVar5 | uVar5 >> 4;
      uVar5 = uVar5 | uVar5 >> 8;
      uVar5 = uVar5 | uVar5 >> 0x10;
      pCVar4 = (CowData<Transform3D> *)((uVar5 | uVar5 >> 0x20) + 1);
    }
  }
  if (param_1 * 0x30 != 0) {
    uVar5 = param_1 * 0x30 - 1;
    uVar5 = uVar5 | uVar5 >> 1;
    uVar5 = uVar5 | uVar5 >> 2;
    uVar5 = uVar5 | uVar5 >> 4;
    uVar5 = uVar5 | uVar5 >> 8;
    uVar5 = uVar5 | uVar5 >> 0x10;
    pCVar13 = (CowData<Transform3D> *)(uVar5 | uVar5 >> 0x20);
    pCVar12 = pCVar13 + 1;
    if (pCVar12 != (CowData<Transform3D> *)0x0) {
      if (param_1 <= lVar15) {
        if ((pCVar12 != pCVar4) && (iVar3 = _realloc(this,(long)pCVar12), iVar3 != 0)) {
          return;
        }
        if (*(long *)this != 0) {
          *(long *)(*(long *)this + -8) = param_1;
          return;
        }
        FUN_0010d4fa();
        return;
      }
      if (pCVar12 == pCVar4) {
LAB_00107e8c:
        puVar10 = *(undefined8 **)this;
        if (puVar10 == (undefined8 *)0x0) {
          resize<false>((long)pCVar13);
          return;
        }
        lVar14 = puVar10[-1];
        if (param_1 <= lVar14) goto LAB_00107e15;
      }
      else {
        if (lVar15 != 0) {
          pCVar13 = this;
          iVar3 = _realloc(this,(long)pCVar12);
          if (iVar3 != 0) {
            return;
          }
          goto LAB_00107e8c;
        }
        puVar6 = (undefined8 *)Memory::alloc_static((ulong)(pCVar13 + 0x11),false);
        if (puVar6 == (undefined8 *)0x0) {
          uVar11 = 0x171;
          pcVar9 = "Parameter \"mem_new\" is null.";
          goto LAB_00107f32;
        }
        puVar10 = puVar6 + 2;
        *puVar6 = 1;
        puVar6[1] = 0;
        *(undefined8 **)this = puVar10;
        lVar14 = 0;
      }
      uVar2 = _LC1;
      pauVar7 = (undefined1 (*) [16])(puVar10 + lVar14 * 6);
      do {
        *(undefined8 *)((long)pauVar7[2] + 4) = 0;
        pauVar8 = pauVar7 + 3;
        *pauVar7 = ZEXT416(uVar2);
        pauVar7[1] = ZEXT416(uVar2);
        *(uint *)pauVar7[2] = uVar2;
        *(undefined4 *)((long)pauVar7[2] + 0xc) = 0;
        pauVar7 = pauVar8;
      } while ((undefined1 (*) [16])(puVar10 + param_1 * 6) != pauVar8);
LAB_00107e15:
      puVar10[-1] = param_1;
      return;
    }
  }
  uVar11 = 0x16a;
  pcVar9 = 
  "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
  ;
LAB_00107f32:
  _err_print_error("resize","./core/templates/cowdata.h",uVar11,pcVar9,0,0);
  return;
}



/* GPUParticles3D::_skinning_changed() */

void __thiscall GPUParticles3D::_skinning_changed(GPUParticles3D *this)

{
  Object *pOVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  long in_FS_OFFSET;
  undefined1 auStack_b8 [8];
  long local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_b0 = 0;
  if (*(long *)(this + 0x6c8) == 0) {
    lVar7 = *(long *)(this + 0x6c0);
    if (lVar7 != 0) {
      lVar5 = 0;
      do {
        if (*(long *)(lVar7 + -8) <= lVar5) break;
        pOVar1 = *(Object **)(lVar7 + lVar5 * 8);
        if (pOVar1 != (Object *)0x0) {
          cVar3 = RefCounted::reference();
          if (cVar3 != '\0') {
            iVar4 = (**(code **)(*(long *)pOVar1 + 0x238))(pOVar1);
            if (0 < iVar4) {
              uVar9 = 0;
              iVar4 = (**(code **)(*(long *)pOVar1 + 0x238))(pOVar1);
              CowData<Transform3D>::resize<false>((CowData<Transform3D> *)&local_b0,(long)iVar4);
              goto LAB_0010824f;
            }
            cVar3 = RefCounted::unreference();
            if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar1), cVar3 != '\0')) {
              (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
              Memory::free_static(pOVar1,false);
            }
          }
          lVar7 = *(long *)(this + 0x6c0);
        }
        lVar5 = lVar5 + 1;
      } while (lVar7 != 0);
    }
  }
  else {
    CowData<Transform3D>::resize<false>
              ((CowData<Transform3D> *)&local_b0,(long)*(int *)(*(long *)(this + 0x6c8) + 600));
    lVar7 = *(long *)(this + 0x6c8);
    if (0 < *(int *)(lVar7 + 600)) {
      uVar9 = 0;
      do {
        lVar7 = uVar9 * 0x40 + *(long *)(lVar7 + 0x250);
        local_a8 = *(undefined8 *)(lVar7 + 0x10);
        uStack_a0 = *(undefined8 *)(lVar7 + 0x18);
        local_98 = *(undefined8 *)(lVar7 + 0x20);
        uStack_90 = *(undefined8 *)(lVar7 + 0x28);
        local_88 = *(undefined8 *)(lVar7 + 0x30);
        uStack_80 = *(undefined8 *)(lVar7 + 0x38);
        if (local_b0 == 0) {
          lVar7 = 0;
LAB_00108097:
          _err_print_index_error
                    ("operator[]","./core/templates/vector.h",0x38,uVar9,lVar7,"p_index",
                     "((Vector<T> *)(this))->_cowdata.size()","",false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        lVar7 = *(long *)(local_b0 + -8);
        if (lVar7 <= (long)uVar9) goto LAB_00108097;
        CowData<Transform3D>::_copy_on_write((CowData<Transform3D> *)&local_b0);
        lVar5 = uVar9 * 0x30;
        uVar9 = uVar9 + 1;
        lVar7 = *(long *)(this + 0x6c8);
        puVar6 = (undefined8 *)(lVar5 + local_b0);
        *puVar6 = local_a8;
        puVar6[1] = uStack_a0;
        puVar6[2] = local_98;
        puVar6[3] = uStack_90;
        puVar6[4] = local_88;
        puVar6[5] = uStack_80;
      } while ((int)uVar9 < *(int *)(lVar7 + 600));
    }
  }
LAB_001080f0:
  plVar8 = (long *)RenderingServer::get_singleton();
  (**(code **)(*plVar8 + 0x830))(plVar8,*(undefined8 *)(this + 0x620),auStack_b8);
  Node::update_configuration_warnings();
  lVar7 = local_b0;
  if (local_b0 != 0) {
    LOCK();
    plVar8 = (long *)(local_b0 + -0x10);
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (*plVar8 == 0) {
      local_b0 = 0;
      Memory::free_static((void *)(lVar7 + -0x10),false);
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
LAB_0010824f:
  iVar4 = (**(code **)(*(long *)pOVar1 + 0x238))(pOVar1);
  if (iVar4 <= (int)uVar9) goto LAB_001080c0;
  (**(code **)(*(long *)pOVar1 + 0x240))(&local_78,pOVar1,uVar9 & 0xffffffff);
  if (local_b0 == 0) {
    lVar7 = 0;
    goto LAB_00108097;
  }
  lVar7 = *(long *)(local_b0 + -8);
  if (lVar7 <= (long)uVar9) goto LAB_00108097;
  CowData<Transform3D>::_copy_on_write((CowData<Transform3D> *)&local_b0);
  puVar6 = (undefined8 *)(uVar9 * 0x30 + local_b0);
  uVar9 = uVar9 + 1;
  *puVar6 = local_78;
  puVar6[1] = uStack_70;
  puVar6[2] = local_68;
  puVar6[3] = uStack_60;
  puVar6[4] = local_58;
  puVar6[5] = uStack_50;
  goto LAB_0010824f;
LAB_001080c0:
  cVar3 = RefCounted::unreference();
  if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar1), cVar3 != '\0')) {
    (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
    Memory::free_static(pOVar1,false);
  }
  goto LAB_001080f0;
}



/* GPUParticles3D::set_draw_pass_mesh(int, Ref<Mesh> const&) */

void __thiscall GPUParticles3D::set_draw_pass_mesh(GPUParticles3D *this,int param_1,Ref *param_2)

{
  CowData<Ref<Mesh>> *this_00;
  Callable *pCVar1;
  Object *pOVar2;
  Object *pOVar3;
  code *pcVar4;
  char cVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  long in_FS_OFFSET;
  Node local_58 [24];
  long local_40;
  
  lVar9 = (long)param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar6 = *(long *)(this + 0x6c0);
  if (param_1 < 0) {
    if (lVar6 == 0) goto LAB_00108668;
    lVar6 = *(long *)(lVar6 + -8);
  }
  else {
    if (lVar6 != 0) {
      lVar6 = *(long *)(lVar6 + -8);
      if (lVar6 <= lVar9) goto LAB_00108609;
      lVar6 = Engine::get_singleton();
      if (*(char *)(lVar6 + 0xc0) == '\0') {
        lVar6 = *(long *)(this + 0x6c0);
LAB_001083ef:
        if (lVar6 != 0) {
          lVar6 = *(long *)(lVar6 + -8);
          if (lVar6 <= lVar9) goto LAB_001085bb;
          this_00 = (CowData<Ref<Mesh>> *)(this + 0x6c0);
          CowData<Ref<Mesh>>::_copy_on_write(this_00);
          pOVar2 = *(Object **)param_2;
          plVar8 = (long *)(*(long *)(this + 0x6c0) + lVar9 * 8);
          pOVar3 = (Object *)*plVar8;
          if (pOVar2 != pOVar3) {
            *plVar8 = (long)pOVar2;
            if (pOVar2 != (Object *)0x0) {
              cVar5 = RefCounted::reference();
              if (cVar5 == '\0') {
                *plVar8 = 0;
              }
            }
            if (pOVar3 != (Object *)0x0) {
              cVar5 = RefCounted::unreference();
              if (cVar5 != '\0') {
                cVar5 = predelete_handler(pOVar3);
                if (cVar5 != '\0') {
                  (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
                  Memory::free_static(pOVar3,false);
                }
              }
            }
          }
          lVar6 = Engine::get_singleton();
          if (*(char *)(lVar6 + 0xc0) != '\0') {
            if (*(long *)(this + 0x6c0) == 0) goto LAB_001085b8;
            lVar6 = *(long *)(*(long *)(this + 0x6c0) + -8);
            if (lVar6 <= lVar9) goto LAB_001085bb;
            CowData<Ref<Mesh>>::_copy_on_write(this_00);
            lVar6 = *(long *)(this + 0x6c0);
            if (*(long *)(lVar6 + lVar9 * 8) != 0) {
              if (lVar6 == 0) goto LAB_001085b8;
              lVar6 = *(long *)(lVar6 + -8);
              if (lVar6 <= lVar9) goto LAB_001085bb;
              CowData<Ref<Mesh>>::_copy_on_write(this_00);
              pCVar1 = *(Callable **)(*(long *)(this + 0x6c0) + lVar9 * 8);
              create_custom_callable_function_pointer<Node>
                        (local_58,(char *)this,(_func_void *)"&Node::update_configuration_warnings")
              ;
              Resource::connect_changed(pCVar1,(uint)local_58);
              Callable::~Callable((Callable *)local_58);
            }
          }
          uVar7 = 0;
          if (*(long **)param_2 != (long *)0x0) {
            uVar7 = (**(code **)(**(long **)param_2 + 0x1c0))();
          }
          plVar8 = (long *)RenderingServer::get_singleton();
          (**(code **)(*plVar8 + 0x870))(plVar8,*(undefined8 *)(this + 0x620),param_1,uVar7);
          _skinning_changed(this);
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            Node::update_configuration_warnings();
            return;
          }
          goto LAB_0010866d;
        }
      }
      else if (*(long *)(this + 0x6c0) != 0) {
        lVar6 = *(long *)(*(long *)(this + 0x6c0) + -8);
        if (lVar6 <= lVar9) goto LAB_001085bb;
        CowData<Ref<Mesh>>::_copy_on_write((CowData<Ref<Mesh>> *)(this + 0x6c0));
        lVar6 = *(long *)(this + 0x6c0);
        if (*(long *)(lVar6 + lVar9 * 8) != 0) {
          if (lVar6 == 0) goto LAB_001085b8;
          lVar6 = *(long *)(lVar6 + -8);
          if (lVar6 <= lVar9) goto LAB_001085bb;
          CowData<Ref<Mesh>>::_copy_on_write((CowData<Ref<Mesh>> *)(this + 0x6c0));
          pCVar1 = *(Callable **)(*(long *)(this + 0x6c0) + lVar9 * 8);
          create_custom_callable_function_pointer<Node>
                    (local_58,(char *)this,(_func_void *)"&Node::update_configuration_warnings");
          Resource::disconnect_changed(pCVar1);
          Callable::~Callable((Callable *)local_58);
          lVar6 = *(long *)(this + 0x6c0);
        }
        goto LAB_001083ef;
      }
LAB_001085b8:
      lVar6 = 0;
LAB_001085bb:
      _err_print_index_error
                ("operator[]","./core/templates/vector.h",0x38,lVar9,lVar6,"p_index",
                 "((Vector<T> *)(this))->_cowdata.size()","",false,true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
LAB_00108668:
    lVar6 = 0;
  }
LAB_00108609:
  _err_print_index_error
            ("set_draw_pass_mesh","scene/3d/gpu_particles_3d.cpp",0x117,lVar9,lVar6,"p_pass",
             "draw_passes.size()","",false,false);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010866d:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GPUParticles3D::set_draw_passes(int) */

void __thiscall GPUParticles3D::set_draw_passes(GPUParticles3D *this,int param_1)

{
  Object *pOVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong uVar12;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 < 1) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("set_draw_passes","scene/3d/gpu_particles_3d.cpp",0x109,
                       "Condition \"p_count < 1\" is true.",0,0);
      return;
    }
    goto LAB_00108a68;
  }
  uVar11 = (ulong)param_1;
  lVar5 = *(long *)(this + 0x6c0);
  uVar9 = uVar11;
  while (lVar5 != 0) {
    uVar12 = *(ulong *)(lVar5 + -8);
    if ((long)uVar12 <= (long)uVar9) {
      if (uVar12 == uVar11) goto LAB_001087f4;
      CowData<Ref<Mesh>>::_copy_on_write((CowData<Ref<Mesh>> *)(this + 0x6c0));
      if (uVar12 * 8 == 0) goto LAB_00108715;
      uVar9 = uVar11 * 8 - 1;
      uVar7 = uVar12 * 8 - 1;
      uVar9 = uVar9 >> 1 | uVar9;
      uVar9 = uVar9 >> 2 | uVar9;
      uVar9 = uVar9 >> 4 | uVar9;
      uVar9 = uVar9 >> 8 | uVar9;
      uVar9 = uVar9 >> 0x10 | uVar9;
      uVar9 = uVar9 | uVar9 >> 0x20;
      local_58 = uVar9 + 1;
      uVar7 = uVar7 | uVar7 >> 1;
      uVar7 = uVar7 | uVar7 >> 2;
      uVar7 = uVar7 | uVar7 >> 4;
      uVar7 = uVar7 | uVar7 >> 8;
      uVar7 = uVar7 | uVar7 >> 0x10;
      uVar7 = uVar7 | uVar7 >> 0x20;
      if ((long)uVar12 < (long)uVar11) {
        if (uVar7 != uVar9) goto LAB_001088fd;
        goto LAB_00108a04;
      }
      local_50 = uVar7 + 1;
      goto LAB_00108772;
    }
    local_48 = 0;
    set_draw_pass_mesh(this,(int)uVar9,(Ref *)&local_48);
    uVar9 = uVar9 + 1;
    lVar5 = *(long *)(this + 0x6c0);
  }
  uVar12 = 0;
  CowData<Ref<Mesh>>::_copy_on_write((CowData<Ref<Mesh>> *)(this + 0x6c0));
LAB_00108715:
  uVar9 = uVar11 * 8 - 1;
  uVar9 = uVar9 >> 1 | uVar9;
  uVar9 = uVar9 >> 2 | uVar9;
  uVar9 = uVar9 >> 4 | uVar9;
  uVar9 = uVar9 >> 8 | uVar9;
  uVar9 = uVar9 | uVar9 >> 0x10;
  local_58 = (uVar9 >> 0x20 | uVar9) + 1;
  if ((long)uVar12 < (long)uVar11) {
LAB_001088fd:
    if (uVar12 == 0) {
      puVar8 = (undefined8 *)Memory::alloc_static(local_58 + 0x10,false);
      if (puVar8 == (undefined8 *)0x0) {
        _err_print_error("resize","./core/templates/cowdata.h",0x171,
                         "Parameter \"mem_new\" is null.",0,0);
      }
      else {
        puVar10 = puVar8 + 2;
        *puVar8 = 1;
        puVar8[1] = 0;
        *(undefined8 **)(this + 0x6c0) = puVar10;
        lVar5 = 0;
LAB_00108938:
        memset(puVar10 + lVar5,0,(uVar11 - lVar5) * 8);
LAB_0010894d:
        puVar10[-1] = uVar11;
      }
    }
    else {
      iVar4 = CowData<Ref<Mesh>>::_realloc((CowData<Ref<Mesh>> *)(this + 0x6c0),local_58);
      if (iVar4 == 0) {
LAB_00108a04:
        puVar10 = *(undefined8 **)(this + 0x6c0);
        if (puVar10 == (undefined8 *)0x0) goto GPUParticles3D_set_draw_passes;
        lVar5 = puVar10[-1];
        if (lVar5 < (long)uVar11) goto LAB_00108938;
        goto LAB_0010894d;
      }
    }
  }
  else {
    local_50 = 0;
LAB_00108772:
    lVar5 = *(long *)(this + 0x6c0);
    uVar9 = uVar11;
    if (lVar5 == 0) {
GPUParticles3D_set_draw_passes:
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    for (; uVar9 < *(ulong *)(lVar5 + -8); uVar9 = uVar9 + 1) {
      while (plVar6 = (long *)(lVar5 + uVar9 * 8), *plVar6 != 0) {
        cVar3 = RefCounted::unreference();
        if (cVar3 != '\0') {
          pOVar1 = (Object *)*plVar6;
          cVar3 = predelete_handler(pOVar1);
          if (cVar3 != '\0') {
            (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
            Memory::free_static(pOVar1,false);
          }
        }
        lVar5 = *(long *)(this + 0x6c0);
        uVar9 = uVar9 + 1;
        if (lVar5 == 0) goto GPUParticles3D_set_draw_passes;
        if (*(ulong *)(lVar5 + -8) <= uVar9) goto LAB_001087c2;
      }
    }
LAB_001087c2:
    if (local_50 != local_58) {
      iVar4 = CowData<Ref<Mesh>>::_realloc((CowData<Ref<Mesh>> *)(this + 0x6c0),local_58);
      if (iVar4 != 0) goto LAB_001087f4;
      lVar5 = *(long *)(this + 0x6c0);
      if (lVar5 == 0) {
        _DAT_00000000 = 0;
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
    }
    *(ulong *)(lVar5 + -8) = uVar11;
  }
LAB_001087f4:
  plVar6 = (long *)RenderingServer::get_singleton();
  (**(code **)(*plVar6 + 0x868))(plVar6,*(undefined8 *)(this + 0x620),param_1);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    Object::notify_property_list_changed();
    return;
  }
LAB_00108a68:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GPUParticles3D::GPUParticles3D() */

void __thiscall GPUParticles3D::GPUParticles3D(GPUParticles3D *this)

{
  double dVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  long *plVar4;
  undefined8 uVar5;
  
  GeometryInstance3D::GeometryInstance3D((GeometryInstance3D *)this);
  *(undefined2 *)(this + 0x690) = 0;
  *(undefined ***)this = &PTR__initialize_classv_00123b30;
  *(undefined2 *)(this + 0x678) = 0x100;
  dVar1 = _LC229;
  *(undefined8 *)(this + 0x620) = 0;
  *(undefined8 *)(this + 0x628) = 0;
  *(undefined4 *)(this + 0x630) = 0x3f800000;
  *(undefined8 *)(this + 0x648) = 0;
  *(undefined8 *)(this + 0x650) = 0;
  *(undefined8 *)(this + 0x658) = 0;
  *(undefined4 *)(this + 0x660) = 0;
  *(undefined8 *)(this + 0x664) = 0;
  *(undefined4 *)(this + 0x66c) = 0;
  this[0x670] = (GPUParticles3D)0x0;
  *(undefined4 *)(this + 0x674) = 0;
  *(undefined8 *)(this + 0x680) = 0;
  *(undefined8 *)(this + 0x688) = 0x3c23d70a;
  *(double *)(this + 0x698) = dVar1;
  *(undefined4 *)(this + 0x6a0) = 0;
  *(undefined8 *)(this + 0x6a8) = 0;
  *(undefined4 *)(this + 0x6b0) = 0;
  *(undefined8 *)(this + 0x6e0) = 0;
  *(undefined4 *)(this + 0x6e8) = 0;
  *(undefined8 *)(this + 0x6ec) = 0;
  *(undefined4 *)(this + 0x6f4) = 0;
  *(undefined8 *)(this + 0x6f8) = 0;
  *(undefined4 *)(this + 0x700) = 0;
  *(undefined1 (*) [16])(this + 0x6c0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x638) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x6d0) = (undefined1  [16])0x0;
  plVar4 = (long *)RenderingServer::get_singleton();
  uVar5 = (**(code **)(*plVar4 + 0x778))(plVar4);
  *(undefined8 *)(this + 0x620) = uVar5;
  plVar4 = (long *)RenderingServer::get_singleton();
  (**(code **)(*plVar4 + 0x780))(plVar4,*(undefined8 *)(this + 0x620),1);
  VisualInstance3D::set_base((RID *)this);
  this[0x62b] = (GPUParticles3D)0x0;
  set_emitting(this,true);
  set_one_shot(this,false);
  uVar3 = Math::rand();
  *(undefined4 *)(this + 0x68c) = uVar3;
  plVar4 = (long *)RenderingServer::get_singleton();
  (**(code **)(*plVar4 + 0x818))(plVar4,*(undefined8 *)(this + 0x620),uVar3);
  *(undefined4 *)(this + 0x630) = 0x3f800000;
  plVar4 = (long *)RenderingServer::get_singleton();
  (**(code **)(*plVar4 + 0x7a0))(plVar4,*(undefined8 *)(this + 0x620));
  set_amount(this,8);
  set_lifetime(this,_LC230);
  *(undefined4 *)(this + 0x674) = 0x1e;
  plVar4 = (long *)RenderingServer::get_singleton();
  (**(code **)(*plVar4 + 0x7f8))(plVar4,*(undefined8 *)(this + 0x620),0x1e);
  this[0x678] = (GPUParticles3D)0x1;
  plVar4 = (long *)RenderingServer::get_singleton();
  (**(code **)(*plVar4 + 0x808))(plVar4,*(undefined8 *)(this + 0x620),1);
  this[0x679] = (GPUParticles3D)0x1;
  plVar4 = (long *)RenderingServer::get_singleton();
  (**(code **)(*plVar4 + 0x800))(plVar4,*(undefined8 *)(this + 0x620),1);
  *(undefined8 *)(this + 0x640) = 0;
  plVar4 = (long *)RenderingServer::get_singleton();
  (**(code **)(*plVar4 + 0x7b8))(*(undefined8 *)(this + 0x640),plVar4,*(undefined8 *)(this + 0x620))
  ;
  *(undefined4 *)(this + 0x648) = 0;
  plVar4 = (long *)RenderingServer::get_singleton();
  (**(code **)(*plVar4 + 0x7c8))(plVar4,*(undefined8 *)(this + 0x620));
  *(undefined4 *)(this + 0x64c) = 0;
  plVar4 = (long *)RenderingServer::get_singleton();
  (**(code **)(*plVar4 + 2000))(plVar4,*(undefined8 *)(this + 0x620));
  set_trail_lifetime(this,_LC229);
  uVar2 = _UNK_00124978;
  uVar5 = __LC231;
  *(undefined8 *)(this + 0x668) = _LC232;
  *(undefined8 *)(this + 0x658) = uVar5;
  *(undefined8 *)(this + 0x660) = uVar2;
  plVar4 = (long *)RenderingServer::get_singleton();
  (**(code **)(*plVar4 + 0x7d8))(plVar4,*(undefined8 *)(this + 0x620),this + 0x658);
  Node3D::update_gizmos();
  this[0x670] = (GPUParticles3D)0x0;
  plVar4 = (long *)RenderingServer::get_singleton();
  (**(code **)(*plVar4 + 0x7e8))(plVar4,*(undefined8 *)(this + 0x620),this[0x670]);
  set_draw_passes(this,1);
  *(undefined4 *)(this + 0x6b0) = 0;
  plVar4 = (long *)RenderingServer::get_singleton();
  (**(code **)(*plVar4 + 0x860))(plVar4,*(undefined8 *)(this + 0x620),0);
  *(double *)(this + 0x650) = _LC230;
  plVar4 = (long *)RenderingServer::get_singleton();
  (**(code **)(*plVar4 + 0x7e0))(_LC230,plVar4,*(undefined8 *)(this + 0x620));
  plVar4 = (long *)RenderingServer::get_singleton();
  (**(code **)(*plVar4 + 0x810))(plVar4,*(undefined8 *)(this + 0x620));
  set_transform_align(this,0);
  if (this[0x690] != (GPUParticles3D)0x0) {
    this[0x690] = (GPUParticles3D)0x0;
    Object::notify_property_list_changed();
    return;
  }
  return;
}



/* GPUParticles3D::convert_from_particles(Node*) */

void __thiscall GPUParticles3D::convert_from_particles(GPUParticles3D *this,Node *param_1)

{
  bool bVar1;
  GPUParticles3D GVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  ParticleProcessMaterial *this_00;
  GradientTexture1D *pGVar8;
  Ref *pRVar9;
  CurveTexture *pCVar10;
  Object *pOVar11;
  CurveXYZTexture *this_01;
  long in_FS_OFFSET;
  undefined4 uVar12;
  float fVar13;
  double dVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  Object *local_98;
  Object *local_90;
  long local_88;
  Ref *local_80;
  Object *local_78;
  undefined1 local_70 [12];
  undefined8 local_64;
  undefined4 local_5c;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 == (Node *)0x0) ||
     (lVar6 = __dynamic_cast(param_1,&Object::typeinfo,&CPUParticles3D::typeinfo,0), lVar6 == 0)) {
    _err_print_error("convert_from_particles","scene/3d/gpu_particles_3d.cpp",0x280,
                     "Parameter \"cpu_particles\" is null.",
                     "Only CPUParticles3D nodes can be converted to GPUParticles3D.",0,0);
  }
  else {
    bVar1 = (bool)CPUParticles3D::is_emitting();
    set_emitting(this,bVar1);
    iVar5 = CPUParticles3D::get_amount();
    set_amount(this,iVar5);
    dVar14 = (double)CPUParticles3D::get_lifetime();
    set_lifetime(this,dVar14);
    bVar1 = (bool)CPUParticles3D::get_one_shot();
    set_one_shot(this,bVar1);
    uVar15 = CPUParticles3D::get_pre_process_time();
    *(undefined8 *)(this + 0x640) = uVar15;
    plVar7 = (long *)RenderingServer::get_singleton();
    (**(code **)(*plVar7 + 0x7b8))
              (*(undefined8 *)(this + 0x640),plVar7,*(undefined8 *)(this + 0x620));
    uVar12 = CPUParticles3D::get_explosiveness_ratio();
    *(undefined4 *)(this + 0x648) = uVar12;
    plVar7 = (long *)RenderingServer::get_singleton();
    (**(code **)(*plVar7 + 0x7c8))
              (*(undefined4 *)(this + 0x648),plVar7,*(undefined8 *)(this + 0x620));
    uVar12 = CPUParticles3D::get_randomness_ratio();
    *(undefined4 *)(this + 0x64c) = uVar12;
    plVar7 = (long *)RenderingServer::get_singleton();
    (**(code **)(*plVar7 + 2000))
              (*(undefined4 *)(this + 0x64c),plVar7,*(undefined8 *)(this + 0x620));
    GVar2 = (GPUParticles3D)CPUParticles3D::get_use_local_coordinates();
    this[0x670] = GVar2;
    plVar7 = (long *)RenderingServer::get_singleton();
    (**(code **)(*plVar7 + 0x7e8))(plVar7,*(undefined8 *)(this + 0x620),this[0x670]);
    uVar12 = CPUParticles3D::get_fixed_fps();
    *(undefined4 *)(this + 0x674) = uVar12;
    plVar7 = (long *)RenderingServer::get_singleton();
    (**(code **)(*plVar7 + 0x7f8))(plVar7,*(undefined8 *)(this + 0x620),uVar12);
    GVar2 = (GPUParticles3D)CPUParticles3D::get_fractional_delta();
    this[0x678] = GVar2;
    plVar7 = (long *)RenderingServer::get_singleton();
    (**(code **)(*plVar7 + 0x808))(plVar7,*(undefined8 *)(this + 0x620),GVar2);
    uVar15 = CPUParticles3D::get_speed_scale();
    *(undefined8 *)(this + 0x650) = uVar15;
    plVar7 = (long *)RenderingServer::get_singleton();
    (**(code **)(*plVar7 + 0x7e0))(uVar15,plVar7,*(undefined8 *)(this + 0x620));
    uVar12 = CPUParticles3D::get_draw_order();
    *(undefined4 *)(this + 0x6b0) = uVar12;
    plVar7 = (long *)RenderingServer::get_singleton();
    (**(code **)(*plVar7 + 0x860))(plVar7,*(undefined8 *)(this + 0x620),uVar12);
    CPUParticles3D::get_mesh();
    set_draw_pass_mesh(this,0,(Ref *)&local_78);
    if (((local_78 != (Object *)0x0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0')) &&
       (cVar3 = predelete_handler(local_78), cVar3 != '\0')) {
      (**(code **)(*(long *)local_78 + 0x140))(local_78);
      Memory::free_static(local_78,false);
    }
    this_00 = (ParticleProcessMaterial *)operator_new(0x580,"");
    ParticleProcessMaterial::ParticleProcessMaterial(this_00);
    postinitialize_handler((Object *)this_00);
    cVar3 = RefCounted::init_ref();
    local_78 = (Object *)0x0;
    if (cVar3 == '\0') {
      this_00 = (ParticleProcessMaterial *)0x0;
      set_process_material(this,(Ref *)&local_78);
    }
    else {
      pOVar11 = (Object *)__dynamic_cast(this_00,&Object::typeinfo,&Material::typeinfo,0);
      if (pOVar11 == (Object *)0x0) {
        set_process_material(this,(Ref *)&local_78);
      }
      else {
        local_78 = pOVar11;
        cVar3 = RefCounted::reference();
        if (cVar3 == '\0') {
          local_78 = (Object *)0x0;
          set_process_material(this,(Ref *)&local_78);
        }
        else {
          set_process_material(this,(Ref *)&local_78);
          cVar3 = RefCounted::unreference();
          if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar11), cVar3 != '\0')) {
            (**(code **)(*(long *)pOVar11 + 0x140))(pOVar11);
            Memory::free_static(pOVar11,false);
          }
        }
      }
    }
    auVar16 = CPUParticles3D::get_direction();
    local_64 = auVar16._0_8_;
    local_5c = auVar16._8_4_;
    ParticleProcessMaterial::set_direction(local_64,auVar16._8_8_ & 0xffffffff,this_00);
    fVar13 = (float)CPUParticles3D::get_spread();
    ParticleProcessMaterial::set_spread(fVar13);
    fVar13 = (float)CPUParticles3D::get_flatness();
    ParticleProcessMaterial::set_flatness(fVar13);
    local_58 = CPUParticles3D::get_color();
    ParticleProcessMaterial::set_color((Color *)this_00);
    CPUParticles3D::get_color_ramp();
    if (local_98 != (Object *)0x0) {
      pGVar8 = (GradientTexture1D *)operator_new(0x308,"");
      GradientTexture1D::GradientTexture1D(pGVar8);
      postinitialize_handler((Object *)pGVar8);
      cVar3 = RefCounted::init_ref();
      local_78 = (Object *)0x0;
      if (cVar3 == '\0') {
        pGVar8 = (GradientTexture1D *)0x0;
      }
      if (local_98 != (Object *)0x0) {
        local_78 = local_98;
        cVar3 = RefCounted::reference();
        if (cVar3 == '\0') {
          local_78 = (Object *)0x0;
        }
      }
      GradientTexture1D::set_gradient(pGVar8);
      if (local_78 != (Object *)0x0) {
        cVar3 = RefCounted::unreference();
        pOVar11 = local_78;
        if (cVar3 != '\0') {
          cVar3 = predelete_handler(local_78);
          if (cVar3 != '\0') {
            (**(code **)(*(long *)pOVar11 + 0x140))(pOVar11);
            Memory::free_static(pOVar11,false);
          }
        }
      }
      local_80 = (Ref *)0x0;
      pRVar9 = (Ref *)__dynamic_cast(pGVar8,&Object::typeinfo,&Texture2D::typeinfo,0);
      if (pRVar9 != (Ref *)0x0) {
        local_78 = (Object *)0x0;
        local_80 = pRVar9;
        cVar3 = RefCounted::reference();
        if (cVar3 == '\0') {
          local_80 = (Ref *)0x0;
        }
        Ref<Texture2D>::unref((Ref<Texture2D> *)&local_78);
      }
      ParticleProcessMaterial::set_color_ramp((Ref *)this_00);
      Ref<Texture2D>::unref((Ref<Texture2D> *)&local_80);
      cVar3 = RefCounted::unreference();
      if (cVar3 != '\0') {
        cVar3 = predelete_handler((Object *)pGVar8);
        if (cVar3 != '\0') {
          (**(code **)(*(long *)pGVar8 + 0x140))(pGVar8);
          Memory::free_static(pGVar8,false);
        }
      }
    }
    CPUParticles3D::get_color_initial_ramp();
    if (local_90 != (Object *)0x0) {
      pGVar8 = (GradientTexture1D *)operator_new(0x308,"");
      GradientTexture1D::GradientTexture1D(pGVar8);
      postinitialize_handler((Object *)pGVar8);
      cVar3 = RefCounted::init_ref();
      local_78 = (Object *)0x0;
      if (cVar3 == '\0') {
        pGVar8 = (GradientTexture1D *)0x0;
      }
      if (local_90 != (Object *)0x0) {
        local_78 = local_90;
        cVar3 = RefCounted::reference();
        if (cVar3 == '\0') {
          local_78 = (Object *)0x0;
        }
      }
      GradientTexture1D::set_gradient(pGVar8);
      if (local_78 != (Object *)0x0) {
        cVar3 = RefCounted::unreference();
        pOVar11 = local_78;
        if (cVar3 != '\0') {
          cVar3 = predelete_handler(local_78);
          if (cVar3 != '\0') {
            (**(code **)(*(long *)pOVar11 + 0x140))(pOVar11);
            Memory::free_static(pOVar11,false);
          }
        }
      }
      local_80 = (Ref *)0x0;
      pRVar9 = (Ref *)__dynamic_cast(pGVar8,&Object::typeinfo,&Texture2D::typeinfo,0);
      if (pRVar9 != (Ref *)0x0) {
        local_78 = (Object *)0x0;
        local_80 = pRVar9;
        cVar3 = RefCounted::reference();
        if (cVar3 == '\0') {
          local_80 = (Ref *)0x0;
        }
        Ref<Texture2D>::unref((Ref<Texture2D> *)&local_78);
      }
      ParticleProcessMaterial::set_color_initial_ramp((Ref *)this_00);
      Ref<Texture2D>::unref((Ref<Texture2D> *)&local_80);
      cVar3 = RefCounted::unreference();
      if (cVar3 != '\0') {
        cVar3 = predelete_handler((Object *)pGVar8);
        if (cVar3 != '\0') {
          (**(code **)(*(long *)pGVar8 + 0x140))(pGVar8);
          Memory::free_static(pGVar8,false);
        }
      }
    }
    uVar4 = CPUParticles3D::get_particle_flag(lVar6,0);
    ParticleProcessMaterial::set_particle_flag(this_00,0,uVar4);
    uVar4 = CPUParticles3D::get_particle_flag(lVar6,1);
    ParticleProcessMaterial::set_particle_flag(this_00,1,uVar4);
    uVar4 = CPUParticles3D::get_particle_flag(lVar6,2);
    ParticleProcessMaterial::set_particle_flag(this_00,2,uVar4);
    uVar12 = CPUParticles3D::get_emission_shape();
    ParticleProcessMaterial::set_emission_shape(this_00,uVar12);
    fVar13 = (float)CPUParticles3D::get_emission_sphere_radius();
    ParticleProcessMaterial::set_emission_sphere_radius(fVar13);
    auVar16 = CPUParticles3D::get_emission_box_extents();
    local_58._8_4_ = auVar16._8_4_;
    local_58._0_8_ = auVar16._0_8_;
    ParticleProcessMaterial::set_emission_box_extents
              (auVar16._0_8_,auVar16._8_8_ & 0xffffffff,this_00);
    fVar13 = (float)CPUParticles3D::get_emission_ring_height();
    ParticleProcessMaterial::set_emission_ring_height(fVar13);
    fVar13 = (float)CPUParticles3D::get_emission_ring_radius();
    ParticleProcessMaterial::set_emission_ring_radius(fVar13);
    fVar13 = (float)CPUParticles3D::get_emission_ring_inner_radius();
    ParticleProcessMaterial::set_emission_ring_inner_radius(fVar13);
    fVar13 = (float)CPUParticles3D::get_emission_ring_cone_angle();
    ParticleProcessMaterial::set_emission_ring_cone_angle(fVar13);
    cVar3 = CPUParticles3D::get_split_scale();
    if (cVar3 != '\0') {
      this_01 = (CurveXYZTexture *)operator_new(0x310,"");
      CurveXYZTexture::CurveXYZTexture(this_01);
      postinitialize_handler((Object *)this_01);
      cVar3 = RefCounted::init_ref();
      if (cVar3 == '\0') {
        this_01 = (CurveXYZTexture *)0x0;
      }
      CPUParticles3D::get_scale_curve_x();
      CurveXYZTexture::set_curve_x(this_01,(Ref<Texture2D> *)&local_78);
      Ref<Curve>::unref((Ref<Curve> *)&local_78);
      CPUParticles3D::get_scale_curve_y();
      CurveXYZTexture::set_curve_y(this_01,(Ref<Texture2D> *)&local_78);
      Ref<Curve>::unref((Ref<Curve> *)&local_78);
      CPUParticles3D::get_scale_curve_z();
      CurveXYZTexture::set_curve_z(this_01,(Ref<Texture2D> *)&local_78);
      Ref<Curve>::unref((Ref<Curve> *)&local_78);
      local_80 = (Ref *)0x0;
      pRVar9 = (Ref *)__dynamic_cast(this_01,&Object::typeinfo,&Texture2D::typeinfo,0);
      if (pRVar9 != (Ref *)0x0) {
        local_78 = (Object *)0x0;
        local_80 = pRVar9;
        cVar3 = RefCounted::reference();
        if (cVar3 == '\0') {
          local_80 = (Ref *)0x0;
        }
        Ref<Texture2D>::unref((Ref<Texture2D> *)&local_78);
      }
      ParticleProcessMaterial::set_param_texture(this_00,8,(Ref<Texture2D> *)&local_80);
      Ref<Texture2D>::unref((Ref<Texture2D> *)&local_80);
      cVar3 = RefCounted::unreference();
      if ((cVar3 != '\0') && (cVar3 = predelete_handler((Object *)this_01), cVar3 != '\0')) {
        (**(code **)(*(long *)this_01 + 0x140))(this_01);
        Memory::free_static(this_01,false);
      }
    }
    local_70 = CPUParticles3D::get_gravity();
    ParticleProcessMaterial::set_gravity((Vector3 *)this_00);
    dVar14 = (double)CPUParticles3D::get_lifetime_randomness();
    ParticleProcessMaterial::set_lifetime_randomness(dVar14);
    CPUParticles3D::get_param_min(lVar6,0);
    ParticleProcessMaterial::set_param_min(this_00,0);
    CPUParticles3D::get_param_curve((Ref<Curve> *)&local_88,lVar6,0);
    if (local_88 != 0) {
      pCVar10 = (CurveTexture *)operator_new(0x308,"");
      CurveTexture::CurveTexture(pCVar10);
      postinitialize_handler((Object *)pCVar10);
      local_80 = (Ref *)0x0;
      Ref<CurveTexture>::operator=((Ref<CurveTexture> *)&local_80,pCVar10);
      pRVar9 = local_80;
      local_78 = (Object *)0x0;
      if (local_88 != 0) {
        local_78 = (Object *)local_88;
        cVar3 = RefCounted::reference();
        if (cVar3 == '\0') {
          local_78 = (Object *)0x0;
        }
      }
      CurveTexture::set_curve(pRVar9,(Ref<Texture2D> *)&local_78);
      Ref<Curve>::unref((Ref<Curve> *)&local_78);
      local_78 = (Object *)0x0;
      Ref<Texture2D>::operator=((Ref<Texture2D> *)&local_78,pRVar9);
      ParticleProcessMaterial::set_param_texture(this_00,0,(Ref<Texture2D> *)&local_78);
      Ref<Texture2D>::unref((Ref<Texture2D> *)&local_78);
      cVar3 = RefCounted::unreference();
      if (cVar3 != '\0') {
        cVar3 = predelete_handler((Object *)pRVar9);
        if (cVar3 != '\0') {
          (**(code **)(*(long *)pRVar9 + 0x140))(pRVar9);
          Memory::free_static(pRVar9,false);
        }
      }
    }
    Ref<Curve>::unref((Ref<Curve> *)&local_88);
    CPUParticles3D::get_param_max(lVar6,0);
    ParticleProcessMaterial::set_param_max(this_00,0);
    CPUParticles3D::get_param_min(lVar6,1);
    ParticleProcessMaterial::set_param_min(this_00,1);
    CPUParticles3D::get_param_curve((Ref<Curve> *)&local_88,lVar6,1);
    if (local_88 != 0) {
      pCVar10 = (CurveTexture *)operator_new(0x308,"");
      CurveTexture::CurveTexture(pCVar10);
      postinitialize_handler((Object *)pCVar10);
      local_80 = (Ref *)0x0;
      Ref<CurveTexture>::operator=((Ref<CurveTexture> *)&local_80,pCVar10);
      pRVar9 = local_80;
      local_78 = (Object *)0x0;
      if (local_88 != 0) {
        local_78 = (Object *)local_88;
        cVar3 = RefCounted::reference();
        if (cVar3 == '\0') {
          local_78 = (Object *)0x0;
        }
      }
      CurveTexture::set_curve(pRVar9,(Ref<Texture2D> *)&local_78);
      Ref<Curve>::unref((Ref<Curve> *)&local_78);
      local_78 = (Object *)0x0;
      Ref<Texture2D>::operator=((Ref<Texture2D> *)&local_78,pRVar9);
      ParticleProcessMaterial::set_param_texture(this_00,1,(Ref<Texture2D> *)&local_78);
      Ref<Texture2D>::unref((Ref<Texture2D> *)&local_78);
      cVar3 = RefCounted::unreference();
      if (cVar3 != '\0') {
        cVar3 = predelete_handler((Object *)pRVar9);
        if (cVar3 != '\0') {
          (**(code **)(*(long *)pRVar9 + 0x140))(pRVar9);
          Memory::free_static(pRVar9,false);
        }
      }
    }
    Ref<Curve>::unref((Ref<Curve> *)&local_88);
    CPUParticles3D::get_param_max(lVar6,1);
    ParticleProcessMaterial::set_param_max(this_00,1);
    CPUParticles3D::get_param_min(lVar6,2);
    ParticleProcessMaterial::set_param_min(this_00,2);
    CPUParticles3D::get_param_curve((Ref<Curve> *)&local_88,lVar6,2);
    if (local_88 != 0) {
      pCVar10 = (CurveTexture *)operator_new(0x308,"");
      CurveTexture::CurveTexture(pCVar10);
      postinitialize_handler((Object *)pCVar10);
      local_80 = (Ref *)0x0;
      Ref<CurveTexture>::operator=((Ref<CurveTexture> *)&local_80,pCVar10);
      pRVar9 = local_80;
      local_78 = (Object *)0x0;
      if (local_88 != 0) {
        local_78 = (Object *)local_88;
        cVar3 = RefCounted::reference();
        if (cVar3 == '\0') {
          local_78 = (Object *)0x0;
        }
      }
      CurveTexture::set_curve(pRVar9,(Ref<Texture2D> *)&local_78);
      Ref<Curve>::unref((Ref<Curve> *)&local_78);
      local_78 = (Object *)0x0;
      Ref<Texture2D>::operator=((Ref<Texture2D> *)&local_78,pRVar9);
      ParticleProcessMaterial::set_param_texture(this_00,2,(Ref<Texture2D> *)&local_78);
      Ref<Texture2D>::unref((Ref<Texture2D> *)&local_78);
      cVar3 = RefCounted::unreference();
      if (cVar3 != '\0') {
        cVar3 = predelete_handler((Object *)pRVar9);
        if (cVar3 != '\0') {
          (**(code **)(*(long *)pRVar9 + 0x140))(pRVar9);
          Memory::free_static(pRVar9,false);
        }
      }
    }
    Ref<Curve>::unref((Ref<Curve> *)&local_88);
    CPUParticles3D::get_param_max(lVar6,2);
    ParticleProcessMaterial::set_param_max(this_00,2);
    CPUParticles3D::get_param_min(lVar6,3);
    ParticleProcessMaterial::set_param_min(this_00,3);
    CPUParticles3D::get_param_curve((Ref<Curve> *)&local_88,lVar6,3);
    if (local_88 != 0) {
      pCVar10 = (CurveTexture *)operator_new(0x308,"");
      CurveTexture::CurveTexture(pCVar10);
      postinitialize_handler((Object *)pCVar10);
      local_80 = (Ref *)0x0;
      Ref<CurveTexture>::operator=((Ref<CurveTexture> *)&local_80,pCVar10);
      pRVar9 = local_80;
      local_78 = (Object *)0x0;
      if (local_88 != 0) {
        local_78 = (Object *)local_88;
        cVar3 = RefCounted::reference();
        if (cVar3 == '\0') {
          local_78 = (Object *)0x0;
        }
      }
      CurveTexture::set_curve(pRVar9,(Ref<Texture2D> *)&local_78);
      Ref<Curve>::unref((Ref<Curve> *)&local_78);
      local_78 = (Object *)0x0;
      Ref<Texture2D>::operator=((Ref<Texture2D> *)&local_78,pRVar9);
      ParticleProcessMaterial::set_param_texture(this_00,3,(Ref<Texture2D> *)&local_78);
      Ref<Texture2D>::unref((Ref<Texture2D> *)&local_78);
      cVar3 = RefCounted::unreference();
      if (cVar3 != '\0') {
        cVar3 = predelete_handler((Object *)pRVar9);
        if (cVar3 != '\0') {
          (**(code **)(*(long *)pRVar9 + 0x140))(pRVar9);
          Memory::free_static(pRVar9,false);
        }
      }
    }
    Ref<Curve>::unref((Ref<Curve> *)&local_88);
    CPUParticles3D::get_param_max(lVar6,3);
    ParticleProcessMaterial::set_param_max(this_00,3);
    CPUParticles3D::get_param_min(lVar6,4);
    ParticleProcessMaterial::set_param_min(this_00,4);
    CPUParticles3D::get_param_curve((Ref<Curve> *)&local_88,lVar6,4);
    if (local_88 != 0) {
      pCVar10 = (CurveTexture *)operator_new(0x308,"");
      CurveTexture::CurveTexture(pCVar10);
      postinitialize_handler((Object *)pCVar10);
      local_80 = (Ref *)0x0;
      Ref<CurveTexture>::operator=((Ref<CurveTexture> *)&local_80,pCVar10);
      pRVar9 = local_80;
      local_78 = (Object *)0x0;
      if (local_88 != 0) {
        local_78 = (Object *)local_88;
        cVar3 = RefCounted::reference();
        if (cVar3 == '\0') {
          local_78 = (Object *)0x0;
        }
      }
      CurveTexture::set_curve(pRVar9,(Ref<Texture2D> *)&local_78);
      Ref<Curve>::unref((Ref<Curve> *)&local_78);
      local_78 = (Object *)0x0;
      Ref<Texture2D>::operator=((Ref<Texture2D> *)&local_78,pRVar9);
      ParticleProcessMaterial::set_param_texture(this_00,4,(Ref<Texture2D> *)&local_78);
      Ref<Texture2D>::unref((Ref<Texture2D> *)&local_78);
      cVar3 = RefCounted::unreference();
      if (cVar3 != '\0') {
        cVar3 = predelete_handler((Object *)pRVar9);
        if (cVar3 != '\0') {
          (**(code **)(*(long *)pRVar9 + 0x140))(pRVar9);
          Memory::free_static(pRVar9,false);
        }
      }
    }
    Ref<Curve>::unref((Ref<Curve> *)&local_88);
    CPUParticles3D::get_param_max(lVar6,4);
    ParticleProcessMaterial::set_param_max(this_00,4);
    CPUParticles3D::get_param_min(lVar6,5);
    ParticleProcessMaterial::set_param_min(this_00,5);
    CPUParticles3D::get_param_curve((Ref<Curve> *)&local_88,lVar6,5);
    if (local_88 != 0) {
      pCVar10 = (CurveTexture *)operator_new(0x308,"");
      CurveTexture::CurveTexture(pCVar10);
      postinitialize_handler((Object *)pCVar10);
      local_80 = (Ref *)0x0;
      Ref<CurveTexture>::operator=((Ref<CurveTexture> *)&local_80,pCVar10);
      pRVar9 = local_80;
      local_78 = (Object *)0x0;
      if (local_88 != 0) {
        local_78 = (Object *)local_88;
        cVar3 = RefCounted::reference();
        if (cVar3 == '\0') {
          local_78 = (Object *)0x0;
        }
      }
      CurveTexture::set_curve(pRVar9,(Ref<Texture2D> *)&local_78);
      Ref<Curve>::unref((Ref<Curve> *)&local_78);
      local_78 = (Object *)0x0;
      Ref<Texture2D>::operator=((Ref<Texture2D> *)&local_78,pRVar9);
      ParticleProcessMaterial::set_param_texture(this_00,5,(Ref<Texture2D> *)&local_78);
      Ref<Texture2D>::unref((Ref<Texture2D> *)&local_78);
      cVar3 = RefCounted::unreference();
      if (cVar3 != '\0') {
        cVar3 = predelete_handler((Object *)pRVar9);
        if (cVar3 != '\0') {
          (**(code **)(*(long *)pRVar9 + 0x140))(pRVar9);
          Memory::free_static(pRVar9,false);
        }
      }
    }
    Ref<Curve>::unref((Ref<Curve> *)&local_88);
    CPUParticles3D::get_param_max(lVar6,5);
    ParticleProcessMaterial::set_param_max(this_00,5);
    CPUParticles3D::get_param_min(lVar6,6);
    ParticleProcessMaterial::set_param_min(this_00,6);
    CPUParticles3D::get_param_curve((Ref<Curve> *)&local_88,lVar6,6);
    if (local_88 != 0) {
      pCVar10 = (CurveTexture *)operator_new(0x308,"");
      CurveTexture::CurveTexture(pCVar10);
      postinitialize_handler((Object *)pCVar10);
      local_80 = (Ref *)0x0;
      Ref<CurveTexture>::operator=((Ref<CurveTexture> *)&local_80,pCVar10);
      pRVar9 = local_80;
      local_78 = (Object *)0x0;
      if (local_88 != 0) {
        local_78 = (Object *)local_88;
        cVar3 = RefCounted::reference();
        if (cVar3 == '\0') {
          local_78 = (Object *)0x0;
        }
      }
      CurveTexture::set_curve(pRVar9,(Ref<Texture2D> *)&local_78);
      Ref<Curve>::unref((Ref<Curve> *)&local_78);
      local_78 = (Object *)0x0;
      Ref<Texture2D>::operator=((Ref<Texture2D> *)&local_78,pRVar9);
      ParticleProcessMaterial::set_param_texture(this_00,6,(Ref<Texture2D> *)&local_78);
      Ref<Texture2D>::unref((Ref<Texture2D> *)&local_78);
      cVar3 = RefCounted::unreference();
      if (cVar3 != '\0') {
        cVar3 = predelete_handler((Object *)pRVar9);
        if (cVar3 != '\0') {
          (**(code **)(*(long *)pRVar9 + 0x140))(pRVar9);
          Memory::free_static(pRVar9,false);
        }
      }
    }
    Ref<Curve>::unref((Ref<Curve> *)&local_88);
    CPUParticles3D::get_param_max(lVar6,6);
    ParticleProcessMaterial::set_param_max(this_00,6);
    CPUParticles3D::get_param_min(lVar6,7);
    ParticleProcessMaterial::set_param_min(this_00,7);
    CPUParticles3D::get_param_curve((Ref<Curve> *)&local_88,lVar6,7);
    if (local_88 != 0) {
      pCVar10 = (CurveTexture *)operator_new(0x308,"");
      CurveTexture::CurveTexture(pCVar10);
      postinitialize_handler((Object *)pCVar10);
      local_80 = (Ref *)0x0;
      Ref<CurveTexture>::operator=((Ref<CurveTexture> *)&local_80,pCVar10);
      pRVar9 = local_80;
      local_78 = (Object *)0x0;
      if (local_88 != 0) {
        local_78 = (Object *)local_88;
        cVar3 = RefCounted::reference();
        if (cVar3 == '\0') {
          local_78 = (Object *)0x0;
        }
      }
      CurveTexture::set_curve(pRVar9,(Ref<Texture2D> *)&local_78);
      Ref<Curve>::unref((Ref<Curve> *)&local_78);
      local_78 = (Object *)0x0;
      Ref<Texture2D>::operator=((Ref<Texture2D> *)&local_78,pRVar9);
      ParticleProcessMaterial::set_param_texture(this_00,7,(Ref<Texture2D> *)&local_78);
      Ref<Texture2D>::unref((Ref<Texture2D> *)&local_78);
      cVar3 = RefCounted::unreference();
      if (cVar3 != '\0') {
        cVar3 = predelete_handler((Object *)pRVar9);
        if (cVar3 != '\0') {
          (**(code **)(*(long *)pRVar9 + 0x140))(pRVar9);
          Memory::free_static(pRVar9,false);
        }
      }
    }
    Ref<Curve>::unref((Ref<Curve> *)&local_88);
    CPUParticles3D::get_param_max(lVar6,7);
    ParticleProcessMaterial::set_param_max(this_00,7);
    CPUParticles3D::get_param_min(lVar6,8);
    ParticleProcessMaterial::set_param_min(this_00,8);
    CPUParticles3D::get_param_curve((Ref<Curve> *)&local_88,lVar6,8);
    if (local_88 != 0) {
      pCVar10 = (CurveTexture *)operator_new(0x308,"");
      CurveTexture::CurveTexture(pCVar10);
      postinitialize_handler((Object *)pCVar10);
      local_80 = (Ref *)0x0;
      Ref<CurveTexture>::operator=((Ref<CurveTexture> *)&local_80,pCVar10);
      pRVar9 = local_80;
      local_78 = (Object *)0x0;
      if (local_88 != 0) {
        local_78 = (Object *)local_88;
        cVar3 = RefCounted::reference();
        if (cVar3 == '\0') {
          local_78 = (Object *)0x0;
        }
      }
      CurveTexture::set_curve(pRVar9,(Ref<Texture2D> *)&local_78);
      Ref<Curve>::unref((Ref<Curve> *)&local_78);
      local_78 = (Object *)0x0;
      Ref<Texture2D>::operator=((Ref<Texture2D> *)&local_78,pRVar9);
      ParticleProcessMaterial::set_param_texture(this_00,8,(Ref<Texture2D> *)&local_78);
      Ref<Texture2D>::unref((Ref<Texture2D> *)&local_78);
      cVar3 = RefCounted::unreference();
      if (cVar3 != '\0') {
        cVar3 = predelete_handler((Object *)pRVar9);
        if (cVar3 != '\0') {
          (**(code **)(*(long *)pRVar9 + 0x140))(pRVar9);
          Memory::free_static(pRVar9,false);
        }
      }
    }
    Ref<Curve>::unref((Ref<Curve> *)&local_88);
    CPUParticles3D::get_param_max(lVar6,8);
    ParticleProcessMaterial::set_param_max(this_00,8);
    CPUParticles3D::get_param_min(lVar6,9);
    ParticleProcessMaterial::set_param_min(this_00,9);
    CPUParticles3D::get_param_curve((Ref<Curve> *)&local_88,lVar6,9);
    if (local_88 != 0) {
      pCVar10 = (CurveTexture *)operator_new(0x308,"");
      CurveTexture::CurveTexture(pCVar10);
      postinitialize_handler((Object *)pCVar10);
      local_80 = (Ref *)0x0;
      Ref<CurveTexture>::operator=((Ref<CurveTexture> *)&local_80,pCVar10);
      pRVar9 = local_80;
      local_78 = (Object *)0x0;
      if (local_88 != 0) {
        local_78 = (Object *)local_88;
        cVar3 = RefCounted::reference();
        if (cVar3 == '\0') {
          local_78 = (Object *)0x0;
        }
      }
      CurveTexture::set_curve(pRVar9,(Ref<Texture2D> *)&local_78);
      Ref<Curve>::unref((Ref<Curve> *)&local_78);
      local_78 = (Object *)0x0;
      Ref<Texture2D>::operator=((Ref<Texture2D> *)&local_78,pRVar9);
      ParticleProcessMaterial::set_param_texture(this_00,9,(Ref<Texture2D> *)&local_78);
      Ref<Texture2D>::unref((Ref<Texture2D> *)&local_78);
      cVar3 = RefCounted::unreference();
      if (cVar3 != '\0') {
        cVar3 = predelete_handler((Object *)pRVar9);
        if (cVar3 != '\0') {
          (**(code **)(*(long *)pRVar9 + 0x140))(pRVar9);
          Memory::free_static(pRVar9,false);
        }
      }
    }
    Ref<Curve>::unref((Ref<Curve> *)&local_88);
    CPUParticles3D::get_param_max(lVar6,9);
    ParticleProcessMaterial::set_param_max(this_00,9);
    CPUParticles3D::get_param_min(lVar6,10);
    ParticleProcessMaterial::set_param_min(this_00,10);
    CPUParticles3D::get_param_curve((Ref<Curve> *)&local_88,lVar6,10);
    if (local_88 != 0) {
      pCVar10 = (CurveTexture *)operator_new(0x308,"");
      CurveTexture::CurveTexture(pCVar10);
      postinitialize_handler((Object *)pCVar10);
      local_80 = (Ref *)0x0;
      Ref<CurveTexture>::operator=((Ref<CurveTexture> *)&local_80,pCVar10);
      pRVar9 = local_80;
      local_78 = (Object *)0x0;
      if (local_88 != 0) {
        local_78 = (Object *)local_88;
        cVar3 = RefCounted::reference();
        if (cVar3 == '\0') {
          local_78 = (Object *)0x0;
        }
      }
      CurveTexture::set_curve(pRVar9,(Ref<Texture2D> *)&local_78);
      Ref<Curve>::unref((Ref<Curve> *)&local_78);
      local_78 = (Object *)0x0;
      Ref<Texture2D>::operator=((Ref<Texture2D> *)&local_78,pRVar9);
      ParticleProcessMaterial::set_param_texture(this_00,10,(Ref<Texture2D> *)&local_78);
      Ref<Texture2D>::unref((Ref<Texture2D> *)&local_78);
      cVar3 = RefCounted::unreference();
      if (cVar3 != '\0') {
        cVar3 = predelete_handler((Object *)pRVar9);
        if (cVar3 != '\0') {
          (**(code **)(*(long *)pRVar9 + 0x140))(pRVar9);
          Memory::free_static(pRVar9,false);
        }
      }
    }
    Ref<Curve>::unref((Ref<Curve> *)&local_88);
    CPUParticles3D::get_param_max(lVar6,10);
    ParticleProcessMaterial::set_param_max(this_00,10);
    CPUParticles3D::get_param_min(lVar6,0xb);
    ParticleProcessMaterial::set_param_min(this_00,0xb);
    CPUParticles3D::get_param_curve((Ref<Curve> *)&local_88,lVar6,0xb);
    if (local_88 != 0) {
      pCVar10 = (CurveTexture *)operator_new(0x308,"");
      CurveTexture::CurveTexture(pCVar10);
      postinitialize_handler((Object *)pCVar10);
      local_80 = (Ref *)0x0;
      Ref<CurveTexture>::operator=((Ref<CurveTexture> *)&local_80,pCVar10);
      pRVar9 = local_80;
      local_78 = (Object *)0x0;
      if (local_88 != 0) {
        local_78 = (Object *)local_88;
        cVar3 = RefCounted::reference();
        if (cVar3 == '\0') {
          local_78 = (Object *)0x0;
        }
      }
      CurveTexture::set_curve(pRVar9,(Ref<Texture2D> *)&local_78);
      Ref<Curve>::unref((Ref<Curve> *)&local_78);
      local_78 = (Object *)0x0;
      Ref<Texture2D>::operator=((Ref<Texture2D> *)&local_78,pRVar9);
      ParticleProcessMaterial::set_param_texture(this_00,0xb,(Ref<Texture2D> *)&local_78);
      Ref<Texture2D>::unref((Ref<Texture2D> *)&local_78);
      cVar3 = RefCounted::unreference();
      if (cVar3 != '\0') {
        cVar3 = predelete_handler((Object *)pRVar9);
        if (cVar3 != '\0') {
          (**(code **)(*(long *)pRVar9 + 0x140))(pRVar9);
          Memory::free_static(pRVar9,false);
        }
      }
    }
    Ref<Curve>::unref((Ref<Curve> *)&local_88);
    CPUParticles3D::get_param_max(lVar6,0xb);
    ParticleProcessMaterial::set_param_max(this_00);
    if (local_90 != (Object *)0x0) {
      cVar3 = RefCounted::unreference();
      if (cVar3 != '\0') {
        cVar3 = predelete_handler(local_90);
        if (cVar3 != '\0') {
          (**(code **)(*(long *)local_90 + 0x140))(local_90);
          Memory::free_static(local_90,false);
        }
      }
    }
    if (local_98 != (Object *)0x0) {
      cVar3 = RefCounted::unreference();
      if (cVar3 != '\0') {
        cVar3 = predelete_handler(local_98);
        if (cVar3 != '\0') {
          (**(code **)(*(long *)local_98 + 0x140))(local_98);
          Memory::free_static(local_98,false);
        }
      }
    }
    cVar3 = RefCounted::unreference();
    if (cVar3 != '\0') {
      cVar3 = predelete_handler((Object *)this_00);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)this_00 + 0x140))(this_00);
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          Memory::free_static(this_00,false);
          return;
        }
        goto LAB_0010a8cb;
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010a8cb:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GPUParticles3D::set_skin(Ref<Skin> const&) */

void __thiscall GPUParticles3D::set_skin(GPUParticles3D *this,Ref *param_1)

{
  Object *pOVar1;
  Object *pOVar2;
  char cVar3;
  
  pOVar1 = *(Object **)param_1;
  pOVar2 = *(Object **)(this + 0x6c8);
  if (pOVar1 != pOVar2) {
    *(Object **)(this + 0x6c8) = pOVar1;
    if (pOVar1 != (Object *)0x0) {
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
        *(undefined8 *)(this + 0x6c8) = 0;
      }
    }
    if (pOVar2 != (Object *)0x0) {
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
  _skinning_changed(this);
  return;
}



/* GPUParticles3D::get_configuration_warnings() const */

Vector<String> * GPUParticles3D::get_configuration_warnings(void)

{
  long lVar1;
  Object *pOVar2;
  long lVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  long in_RSI;
  char *pcVar13;
  Vector<String> *in_RDI;
  long lVar14;
  char cVar15;
  long in_FS_OFFSET;
  bool bVar16;
  float fVar17;
  Ref<Texture2D> *local_90;
  int local_74;
  int local_70;
  char local_6a;
  undefined8 local_58;
  long local_50;
  Object *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  GeometryInstance3D::get_configuration_warnings();
  lVar11 = *(long *)(in_RSI + 0x6c0);
  if (lVar11 == 0) {
    bVar5 = false;
  }
  else {
    lVar14 = 0;
    bVar5 = false;
    do {
      if (*(long *)(lVar11 + -8) <= lVar14) break;
      lVar1 = lVar14 * 8;
      if (*(long *)(lVar11 + lVar14 * 8) != 0) {
        if (lVar11 == 0) {
LAB_0010ae06:
          lVar12 = 0;
          goto LAB_0010ae27;
        }
        iVar9 = 0;
        bVar16 = false;
        while( true ) {
          lVar12 = *(long *)(lVar11 + -8);
          if (lVar12 <= lVar14) goto LAB_0010ae27;
          iVar10 = (**(code **)(**(long **)(lVar11 + lVar1) + 0x1c8))();
          if (iVar10 <= iVar9) break;
          lVar11 = *(long *)(in_RSI + 0x6c0);
          if (lVar11 == 0) goto LAB_0010ae06;
          lVar12 = *(long *)(lVar11 + -8);
          if (lVar12 <= lVar14) goto LAB_0010ae27;
          (**(code **)(**(long **)(lVar11 + lVar1) + 0x210))
                    (&local_48,*(long **)(lVar11 + lVar1),iVar9);
          if (local_48 == (Object *)0x0) {
            lVar11 = 0;
          }
          else {
            lVar11 = __dynamic_cast(local_48,&Object::typeinfo,&ShaderMaterial::typeinfo);
            cVar8 = RefCounted::unreference();
            pOVar2 = local_48;
            if ((cVar8 != '\0') && (cVar8 = predelete_handler(local_48), cVar8 != '\0')) {
              (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
              Memory::free_static(pOVar2,false);
            }
          }
          lVar3 = *(long *)(in_RSI + 0x6c0);
          if (lVar3 == 0) goto LAB_0010ae06;
          lVar12 = *(long *)(lVar3 + -8);
          if (lVar12 <= lVar14) goto LAB_0010ae27;
          (**(code **)(**(long **)(lVar3 + lVar1) + 0x210))
                    (&local_48,*(long **)(lVar3 + lVar1),iVar9);
          if (local_48 == (Object *)0x0) {
            bVar16 = lVar11 != 0;
          }
          else {
            lVar12 = __dynamic_cast(local_48,&Object::typeinfo,&BaseMaterial3D::typeinfo);
            cVar8 = RefCounted::unreference();
            pOVar2 = local_48;
            if ((cVar8 != '\0') && (cVar8 = predelete_handler(local_48), cVar8 != '\0')) {
              (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
              Memory::free_static(pOVar2,false);
            }
            bVar16 = true;
            if ((lVar11 == 0) && (bVar16 = false, lVar12 != 0)) {
              iVar10 = BaseMaterial3D::get_billboard_mode();
              bVar16 = iVar10 == 3;
            }
          }
          lVar11 = *(long *)(in_RSI + 0x6c0);
          iVar9 = iVar9 + 1;
          if (lVar11 == 0) goto LAB_0010ae06;
        }
        if (bVar16) {
          GeometryInstance3D::get_material_override();
          Ref<Material>::unref((Ref<Material> *)&local_48);
          goto LAB_0010aa7a;
        }
        lVar11 = *(long *)(in_RSI + 0x6c0);
        bVar5 = true;
      }
      lVar14 = lVar14 + 1;
    } while (lVar11 != 0);
  }
  GeometryInstance3D::get_material_override();
  if (local_48 == (Object *)0x0) {
    Ref<Material>::unref((Ref<Material> *)&local_48);
    bVar16 = false;
    GeometryInstance3D::get_material_override();
    if (local_48 == (Object *)0x0) goto LAB_0010b1ed;
    lVar11 = __dynamic_cast(local_48,&Object::typeinfo,&BaseMaterial3D::typeinfo);
    Ref<Material>::unref((Ref<Material> *)&local_48);
LAB_0010aa5a:
    bVar16 = false;
    if (lVar11 != 0) {
      iVar9 = BaseMaterial3D::get_billboard_mode();
      bVar16 = iVar9 == 3;
    }
  }
  else {
    lVar14 = __dynamic_cast(local_48,&Object::typeinfo,&ShaderMaterial::typeinfo);
    Ref<Material>::unref((Ref<Material> *)&local_48);
    GeometryInstance3D::get_material_override();
    if (local_48 == (Object *)0x0) {
      bVar16 = lVar14 != 0;
LAB_0010b1ed:
      Ref<Material>::unref((Ref<Material> *)&local_48);
    }
    else {
      bVar16 = true;
      lVar11 = __dynamic_cast(local_48,&Object::typeinfo,&BaseMaterial3D::typeinfo);
      Ref<Material>::unref((Ref<Material> *)&local_48);
      if (lVar14 == 0) goto LAB_0010aa5a;
    }
  }
  if (!bVar5) {
    local_50 = 0;
    String::parse_latin1((String *)&local_50,"");
    local_58 = 0;
    String::parse_latin1
              ((String *)&local_58,
               "Nothing is visible because meshes have not been assigned to draw passes.");
    RTR((String *)&local_48,(String *)&local_58);
    Vector<String>::push_back(in_RDI,(Ref<Material> *)&local_48);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  }
LAB_0010aa7a:
  local_90 = (Ref<Texture2D> *)&local_48;
  if (*(long *)(in_RSI + 0x6a8) == 0) {
    local_50 = 0;
    String::parse_latin1((String *)&local_50,"");
    pcVar13 = "A material to process the particles is not assigned, so no behavior is imprinted.";
LAB_0010ab02:
    local_58 = 0;
    String::parse_latin1((String *)&local_58,pcVar13);
    RTR((String *)local_90,(String *)&local_58);
    Vector<String>::push_back(in_RDI);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  }
  else {
    lVar11 = __dynamic_cast(*(long *)(in_RSI + 0x6a8),&Object::typeinfo,
                            &ParticleProcessMaterial::typeinfo);
    if ((!bVar16) && (lVar11 != 0)) {
      fVar17 = (float)ParticleProcessMaterial::get_param_max(lVar11,10);
      if (fVar17 == 0.0) {
        fVar17 = (float)ParticleProcessMaterial::get_param_max(lVar11,0xb);
        if (fVar17 == 0.0) {
          ParticleProcessMaterial::get_param_texture((Ref<Texture2D> *)&local_50,lVar11,10);
          if (local_50 == 0) {
            ParticleProcessMaterial::get_param_texture(local_90,lVar11,0xb);
            if (local_48 == (Object *)0x0) {
              Ref<Texture2D>::unref(local_90);
              Ref<Texture2D>::unref((Ref<Texture2D> *)&local_50);
              goto LAB_0010ab40;
            }
            Ref<Texture2D>::unref(local_90);
            Ref<Texture2D>::unref((Ref<Texture2D> *)&local_50);
          }
          else {
            Ref<Texture2D>::unref((Ref<Texture2D> *)&local_50);
          }
        }
      }
      local_50 = 0;
      String::parse_latin1((String *)&local_50,"");
      pcVar13 = 
      "Particles animation requires the usage of a BaseMaterial3D whose Billboard Mode is set to \"Particle Billboard\"."
      ;
      goto LAB_0010ab02;
    }
  }
LAB_0010ab40:
  cVar8 = *(char *)(in_RSI + 0x691);
  if (cVar8 == '\0') goto LAB_0010b0d8;
  lVar11 = *(long *)(in_RSI + 0x6c0);
  if (lVar11 == 0) {
    local_6a = '\0';
    cVar15 = '\0';
    local_70 = 0;
  }
  else {
    local_6a = '\0';
    lVar14 = 0;
    local_70 = 0;
    cVar15 = '\0';
    do {
      if (*(long *)(lVar11 + -8) <= lVar14) break;
      pOVar2 = *(Object **)(lVar11 + lVar14 * 8);
      lVar1 = lVar14 * 8;
      if (pOVar2 != (Object *)0x0) {
        cVar6 = RefCounted::reference();
        if (cVar6 != '\0') {
          iVar9 = (**(code **)(*(long *)pOVar2 + 0x238))(pOVar2);
          local_70 = local_70 + (uint)(0 < iVar9);
          lVar11 = *(long *)(in_RSI + 0x6c0);
          if (lVar11 != 0) {
            local_74 = 0;
            iVar9 = 0;
            while( true ) {
              lVar12 = *(long *)(lVar11 + -8);
              if (lVar12 <= lVar14) goto LAB_0010ae27;
              iVar10 = (**(code **)(**(long **)(lVar11 + lVar1) + 0x1c8))();
              if (iVar10 <= iVar9) break;
              lVar11 = *(long *)(in_RSI + 0x6c0);
              if (lVar11 == 0) goto LAB_0010acb2;
              lVar12 = *(long *)(lVar11 + -8);
              if (lVar12 <= lVar14) goto LAB_0010ae27;
              (**(code **)(**(long **)(lVar11 + lVar1) + 0x210))
                        (local_90,*(long **)(lVar11 + lVar1),iVar9);
              if (local_48 == (Object *)0x0) {
                Ref<Material>::unref((Ref<Material> *)local_90);
              }
              else {
                lVar11 = __dynamic_cast(local_48,&Object::typeinfo,&BaseMaterial3D::typeinfo,0);
                Ref<Material>::unref((Ref<Material> *)local_90);
                if (lVar11 != 0) {
                  local_74 = local_74 + 1;
                  cVar7 = BaseMaterial3D::get_flag(lVar11);
                  if (cVar7 == '\0') {
                    cVar15 = cVar6;
                  }
                }
              }
              lVar11 = *(long *)(in_RSI + 0x6c0);
              iVar9 = iVar9 + 1;
              if (lVar11 == 0) goto LAB_0010acb2;
            }
            lVar11 = *(long *)(in_RSI + 0x6c0);
            if (lVar11 != 0) {
              lVar12 = *(long *)(lVar11 + -8);
              if (lVar14 < lVar12) {
                iVar9 = (**(code **)(**(long **)(lVar11 + lVar1) + 0x1c8))();
                if (iVar9 == local_74) {
                  cVar6 = local_6a;
                }
                cVar7 = RefCounted::unreference();
                local_6a = cVar6;
                if ((cVar7 != '\0') && (cVar6 = predelete_handler(pOVar2), cVar6 != '\0')) {
                  (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
                  Memory::free_static(pOVar2,false);
                }
                goto LAB_0010afdd;
              }
              goto LAB_0010ae27;
            }
          }
LAB_0010acb2:
          lVar12 = 0;
LAB_0010ae27:
          _err_print_index_error
                    ("get","./core/templates/cowdata.h",0xdb,lVar14,lVar12,"p_index","size()","",
                     false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
LAB_0010afdd:
        lVar11 = *(long *)(in_RSI + 0x6c0);
      }
      lVar14 = lVar14 + 1;
    } while (lVar11 != 0);
  }
  GeometryInstance3D::get_material_override();
  if (local_48 == (Object *)0x0) {
    Ref<Material>::unref((Ref<Material> *)local_90);
  }
  else {
    lVar11 = __dynamic_cast(local_48,&Object::typeinfo,&BaseMaterial3D::typeinfo);
    Ref<Material>::unref((Ref<Material> *)local_90);
    if (lVar11 != 0) {
      cVar6 = BaseMaterial3D::get_flag(lVar11,0x13);
      if (cVar6 == '\0') {
        local_6a = '\0';
        cVar15 = cVar8;
      }
      else {
        local_6a = '\0';
      }
    }
  }
  if (local_70 == 0) {
    if (*(long *)(in_RSI + 0x6c8) != 0) goto LAB_0010b082;
    local_50 = 0;
    String::parse_latin1((String *)&local_50,"");
    local_58 = 0;
    String::parse_latin1
              ((String *)&local_58,"Trails active, but neither Trail meshes or a Skin were found.");
    RTR((String *)local_90,(String *)&local_58);
    Vector<String>::push_back(in_RDI,local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
    if (*(long *)(in_RSI + 0x6c8) != 0) goto LAB_0010b082;
  }
  else {
    if (*(long *)(in_RSI + 0x6c8) == 0) {
      if (local_70 < 2) goto LAB_0010b082;
      local_50 = 0;
      String::parse_latin1((String *)&local_50,"");
      pcVar13 = 
      "Only one Trail mesh is supported. If you want to use more than a single mesh, a Skin is needed (see documentation)."
      ;
    }
    else {
      local_50 = 0;
      String::parse_latin1((String *)&local_50,"");
      pcVar13 = 
      "Using Trail meshes with a skin causes Skin to override Trail poses. Suggest removing the Skin."
      ;
    }
    local_58 = 0;
    String::parse_latin1((String *)&local_58,pcVar13);
    RTR((String *)local_90,(String *)&local_58);
    Vector<String>::push_back(in_RDI,local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
LAB_0010b082:
    if ((cVar15 != '\0') || (local_6a != '\0')) {
      local_50 = 0;
      String::parse_latin1((String *)&local_50,"");
      local_58 = 0;
      String::parse_latin1
                ((String *)&local_58,
                 "Trails enabled, but one or more mesh materials are either missing or not set for trails rendering."
                );
      RTR((String *)local_90,(String *)&local_58);
      Vector<String>::push_back(in_RDI,local_90);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
    }
  }
  lVar11 = OS::get_singleton();
  local_48 = (Object *)0x0;
  CowData<char32_t>::_ref((CowData<char32_t> *)local_90,(CowData *)(lVar11 + 0x68));
  cVar8 = String::operator==((String *)local_90,"gl_compatibility");
  CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
  if (cVar8 != '\0') {
    local_50 = 0;
    String::parse_latin1((String *)&local_50,"");
    local_58 = 0;
    String::parse_latin1
              ((String *)&local_58,
               "Particle trails are only available when using the Forward+ or Mobile renderers.");
    RTR((String *)local_90,(String *)&local_58);
    Vector<String>::push_back(in_RDI,local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  }
LAB_0010b0d8:
  local_50 = 0;
  cVar8 = NodePath::operator!=((NodePath *)(in_RSI + 0x680),(NodePath *)&local_50);
  if (cVar8 == '\0') {
    NodePath::~NodePath((NodePath *)&local_50);
  }
  else {
    lVar11 = OS::get_singleton();
    local_48 = (Object *)0x0;
    CowData<char32_t>::_ref((CowData<char32_t> *)local_90,(CowData *)(lVar11 + 0x68));
    cVar8 = String::operator==((String *)local_90,"gl_compatibility");
    CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
    NodePath::~NodePath((NodePath *)&local_50);
    if (cVar8 != '\0') {
      local_50 = 0;
      String::parse_latin1((String *)&local_50,"");
      local_58 = 0;
      String::parse_latin1
                ((String *)&local_58,
                 "Particle sub-emitters are only available when using the Forward+ or Mobile renderers."
                );
      RTR((String *)local_90,(String *)&local_58);
      Vector<String>::push_back(in_RDI,local_90);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return in_RDI;
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



/* Object::_set(StringName const&, Variant const&) */

undefined8 Object::_set(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Object::_get(StringName const&, Variant&) const */

undefined8 Object::_get(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Object::_get_property_list(List<PropertyInfo, DefaultAllocator>*) const */

void Object::_get_property_list(List *param_1)

{
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



/* GPUParticles3D::is_class_ptr(void*) const */

uint GPUParticles3D::is_class_ptr(void *param_1)

{
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  return (uint)CONCAT71(0x1248,in_RSI == &GeometryInstance3D::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1248,in_RSI == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1248,in_RSI == &VisualInstance3D::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1248,in_RSI == &Node3D::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1248,in_RSI == &Node::get_class_ptr_static()::ptr) |
         CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
}



/* CallableCustomMethodPointer<Node, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Node,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Node,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<Node3D, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Node3D,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Node3D,void> *this)

{
  return;
}



/* MethodBindT<Node*>::_gen_argument_type(int) const */

byte __thiscall MethodBindT<Node*>::_gen_argument_type(MethodBindT<Node*> *this,int param_1)

{
  return -(param_1 == 0) & 0x18;
}



/* MethodBindT<Node*>::get_argument_meta(int) const */

undefined8 MethodBindT<Node*>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<GPUParticles3D::TransformAlign>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<GPUParticles3D::TransformAlign>::_gen_argument_type(int param_1)

{
  return 2;
}



/* MethodBindTRC<GPUParticles3D::TransformAlign>::get_argument_meta(int) const */

undefined8 MethodBindTRC<GPUParticles3D::TransformAlign>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<GPUParticles3D::TransformAlign>::_gen_argument_type(int) const */

char __thiscall
MethodBindT<GPUParticles3D::TransformAlign>::_gen_argument_type
          (MethodBindT<GPUParticles3D::TransformAlign> *this,int param_1)

{
  return (param_1 == 0) * '\x02';
}



/* MethodBindT<GPUParticles3D::TransformAlign>::get_argument_meta(int) const */

undefined8 MethodBindT<GPUParticles3D::TransformAlign>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<Transform3D const&, Vector3 const&, Color const&, Color const&, unsigned
   int>::get_argument_meta(int) const */

undefined8 __thiscall
MethodBindT<Transform3D_const&,Vector3_const&,Color_const&,Color_const&,unsigned_int>::
get_argument_meta(MethodBindT<Transform3D_const&,Vector3_const&,Color_const&,Color_const&,unsigned_int>
                  *this,int param_1)

{
  undefined8 uVar1;
  
  uVar1 = 7;
  if (param_1 != 4) {
    uVar1 = 0;
  }
  return uVar1;
}



/* MethodBindTRC<NodePath>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<NodePath>::_gen_argument_type(int param_1)

{
  return 0x16;
}



/* MethodBindTRC<NodePath>::get_argument_meta(int) const */

undefined8 MethodBindTRC<NodePath>::get_argument_meta(int param_1)

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



/* MethodBindTRC<Ref<Skin>>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<Ref<Skin>>::_gen_argument_type(int param_1)

{
  return 0x18;
}



/* MethodBindTRC<Ref<Skin>>::get_argument_meta(int) const */

undefined8 MethodBindTRC<Ref<Skin>>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<Ref<Skin> const&>::_gen_argument_type(int) const */

byte __thiscall
MethodBindT<Ref<Skin>const&>::_gen_argument_type(MethodBindT<Ref<Skin>const&> *this,int param_1)

{
  return -(param_1 == 0) & 0x18;
}



/* MethodBindT<Ref<Skin> const&>::get_argument_meta(int) const */

undefined8 MethodBindT<Ref<Skin>const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<Ref<Mesh>, int>::_gen_argument_type(int) const */

int __thiscall
MethodBindTRC<Ref<Mesh>,int>::_gen_argument_type(MethodBindTRC<Ref<Mesh>,int> *this,int param_1)

{
  return (-(uint)(param_1 == 0) & 0xffffffea) + 0x18;
}



/* MethodBindTRC<Ref<Mesh>, int>::get_argument_meta(int) const */

byte __thiscall
MethodBindTRC<Ref<Mesh>,int>::get_argument_meta(MethodBindTRC<Ref<Mesh>,int> *this,int param_1)

{
  return -(param_1 == 0) & 3;
}



/* MethodBindT<int, Ref<Mesh> const&>::_gen_argument_type(int) const */

int __thiscall
MethodBindT<int,Ref<Mesh>const&>::_gen_argument_type
          (MethodBindT<int,Ref<Mesh>const&> *this,int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if ((uint)param_1 < 2) {
    iVar1 = (-(uint)(param_1 == 0) & 0xffffffea) + 0x18;
  }
  return iVar1;
}



/* MethodBindT<int, Ref<Mesh> const&>::get_argument_meta(int) const */

byte __thiscall
MethodBindT<int,Ref<Mesh>const&>::get_argument_meta
          (MethodBindT<int,Ref<Mesh>const&> *this,int param_1)

{
  return -(param_1 == 0) & 3;
}



/* MethodBindTRC<GPUParticles3D::DrawOrder>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<GPUParticles3D::DrawOrder>::_gen_argument_type(int param_1)

{
  return 2;
}



/* MethodBindTRC<GPUParticles3D::DrawOrder>::get_argument_meta(int) const */

undefined8 MethodBindTRC<GPUParticles3D::DrawOrder>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<GPUParticles3D::DrawOrder>::_gen_argument_type(int) const */

char __thiscall
MethodBindT<GPUParticles3D::DrawOrder>::_gen_argument_type
          (MethodBindT<GPUParticles3D::DrawOrder> *this,int param_1)

{
  return (param_1 == 0) * '\x02';
}



/* MethodBindT<GPUParticles3D::DrawOrder>::get_argument_meta(int) const */

undefined8 MethodBindT<GPUParticles3D::DrawOrder>::get_argument_meta(int param_1)

{
  return 0;
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



/* MethodBindTRC<Ref<Material>>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<Ref<Material>>::_gen_argument_type(int param_1)

{
  return 0x18;
}



/* MethodBindTRC<Ref<Material>>::get_argument_meta(int) const */

undefined8 MethodBindTRC<Ref<Material>>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<AABB>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<AABB>::_gen_argument_type(int param_1)

{
  return 0x10;
}



/* MethodBindTRC<AABB>::get_argument_meta(int) const */

undefined8 MethodBindTRC<AABB>::get_argument_meta(int param_1)

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



/* MethodBindTRC<double>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<double>::_gen_argument_type(int param_1)

{
  return 3;
}



/* MethodBindTRC<double>::get_argument_meta(int) const */

uint __thiscall MethodBindTRC<double>::get_argument_meta(MethodBindTRC<double> *this,int param_1)

{
  return param_1 >> 0x1f & 10;
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



/* MethodBindT<Ref<Material> const&>::_gen_argument_type(int) const */

byte __thiscall
MethodBindT<Ref<Material>const&>::_gen_argument_type
          (MethodBindT<Ref<Material>const&> *this,int param_1)

{
  return -(param_1 == 0) & 0x18;
}



/* MethodBindT<Ref<Material> const&>::get_argument_meta(int) const */

undefined8 MethodBindT<Ref<Material>const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<AABB const&>::_gen_argument_type(int) const */

long __thiscall
MethodBindT<AABB_const&>::_gen_argument_type(MethodBindT<AABB_const&> *this,int param_1)

{
  return (ulong)(param_1 == 0) << 4;
}



/* MethodBindT<AABB const&>::get_argument_meta(int) const */

undefined8 MethodBindT<AABB_const&>::get_argument_meta(int param_1)

{
  return 0;
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



/* MethodBindT<double>::_gen_argument_type(int) const */

byte __thiscall MethodBindT<double>::_gen_argument_type(MethodBindT<double> *this,int param_1)

{
  return -(param_1 == 0) & 3;
}



/* MethodBindT<double>::get_argument_meta(int) const */

byte __thiscall MethodBindT<double>::get_argument_meta(MethodBindT<double> *this,int param_1)

{
  return -(param_1 == 0) & 10;
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



/* MethodBindT<>::_gen_argument_type(int) const */

undefined8 MethodBindT<>::_gen_argument_type(int param_1)

{
  return 0;
}



/* MethodBindT<>::_gen_argument_type_info(int) const */

undefined8 MethodBindT<>::_gen_argument_type_info(int param_1)

{
  undefined4 in_register_0000003c;
  
  *(undefined4 *)CONCAT44(in_register_0000003c,param_1) = 0;
  *(undefined4 *)(CONCAT44(in_register_0000003c,param_1) + 0x18) = 0;
  *(undefined8 *)(CONCAT44(in_register_0000003c,param_1) + 0x20) = 0;
  *(undefined4 *)(CONCAT44(in_register_0000003c,param_1) + 0x28) = 6;
  *(undefined1 (*) [16])(CONCAT44(in_register_0000003c,param_1) + 8) = (undefined1  [16])0x0;
  return CONCAT44(in_register_0000003c,param_1);
}



/* MethodBindT<>::get_argument_meta(int) const */

undefined8 MethodBindT<>::get_argument_meta(int param_1)

{
  return 0;
}



/* CallableCustomMethodPointer<Node, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<Node,void>::get_argument_count
          (CallableCustomMethodPointer<Node,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<Node3D, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<Node3D,void>::get_argument_count
          (CallableCustomMethodPointer<Node3D,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* MethodBindT<Transform3D const&, Vector3 const&, Color const&, Color const&, unsigned
   int>::_gen_argument_type(int) const */

undefined8 __thiscall
MethodBindT<Transform3D_const&,Vector3_const&,Color_const&,Color_const&,unsigned_int>::
_gen_argument_type(MethodBindT<Transform3D_const&,Vector3_const&,Color_const&,Color_const&,unsigned_int>
                   *this,int param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((((uint)param_1 < 5) && (uVar1 = 0x12, param_1 != 0)) && (uVar1 = 9, param_1 != 1)) {
    uVar1 = 2;
    if (param_1 != 4) {
      uVar1 = 0x14;
    }
    return uVar1;
  }
  return uVar1;
}



/* CallableCustomMethodPointer<Node3D, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Node3D,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Node3D,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<Node, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Node,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Node,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00123e48;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00123e48;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<AABB const&>::~MethodBindT() */

void __thiscall MethodBindT<AABB_const&>::~MethodBindT(MethodBindT<AABB_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00124028;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<AABB const&>::~MethodBindT() */

void __thiscall MethodBindT<AABB_const&>::~MethodBindT(MethodBindT<AABB_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00124028;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Ref<Material> const&>::~MethodBindT() */

void __thiscall
MethodBindT<Ref<Material>const&>::~MethodBindT(MethodBindT<Ref<Material>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00124088;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Ref<Material> const&>::~MethodBindT() */

void __thiscall
MethodBindT<Ref<Material>const&>::~MethodBindT(MethodBindT<Ref<Material>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00124088;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Ref<Material>>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Ref<Material>>::~MethodBindTRC(MethodBindTRC<Ref<Material>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001242c8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Ref<Material>>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Ref<Material>>::~MethodBindTRC(MethodBindTRC<Ref<Material>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001242c8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<unsigned int>::~MethodBindT() */

void __thiscall MethodBindT<unsigned_int>::~MethodBindT(MethodBindT<unsigned_int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00124328;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<unsigned int>::~MethodBindT() */

void __thiscall MethodBindT<unsigned_int>::~MethodBindT(MethodBindT<unsigned_int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00124328;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<unsigned int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<unsigned_int>::~MethodBindTRC(MethodBindTRC<unsigned_int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00124388;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<unsigned int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<unsigned_int>::~MethodBindTRC(MethodBindTRC<unsigned_int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00124388;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<GPUParticles3D::DrawOrder>::~MethodBindT() */

void __thiscall
MethodBindT<GPUParticles3D::DrawOrder>::~MethodBindT(MethodBindT<GPUParticles3D::DrawOrder> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001243e8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<GPUParticles3D::DrawOrder>::~MethodBindT() */

void __thiscall
MethodBindT<GPUParticles3D::DrawOrder>::~MethodBindT(MethodBindT<GPUParticles3D::DrawOrder> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001243e8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<GPUParticles3D::DrawOrder>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<GPUParticles3D::DrawOrder>::~MethodBindTRC
          (MethodBindTRC<GPUParticles3D::DrawOrder> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00124448;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<GPUParticles3D::DrawOrder>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<GPUParticles3D::DrawOrder>::~MethodBindTRC
          (MethodBindTRC<GPUParticles3D::DrawOrder> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00124448;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<int>::~MethodBindT() */

void __thiscall MethodBindT<int>::~MethodBindT(MethodBindT<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00123f08;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<int>::~MethodBindT() */

void __thiscall MethodBindT<int>::~MethodBindT(MethodBindT<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00123f08;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<int, Ref<Mesh> const&>::~MethodBindT() */

void __thiscall
MethodBindT<int,Ref<Mesh>const&>::~MethodBindT(MethodBindT<int,Ref<Mesh>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001244a8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<int, Ref<Mesh> const&>::~MethodBindT() */

void __thiscall
MethodBindT<int,Ref<Mesh>const&>::~MethodBindT(MethodBindT<int,Ref<Mesh>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001244a8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00124148;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00124148;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Ref<Mesh>, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Ref<Mesh>,int>::~MethodBindTRC(MethodBindTRC<Ref<Mesh>,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00124508;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Ref<Mesh>, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Ref<Mesh>,int>::~MethodBindTRC(MethodBindTRC<Ref<Mesh>,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00124508;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Ref<Skin> const&>::~MethodBindT() */

void __thiscall MethodBindT<Ref<Skin>const&>::~MethodBindT(MethodBindT<Ref<Skin>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00124568;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Ref<Skin> const&>::~MethodBindT() */

void __thiscall MethodBindT<Ref<Skin>const&>::~MethodBindT(MethodBindT<Ref<Skin>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00124568;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Ref<Skin>>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Ref<Skin>>::~MethodBindTRC(MethodBindTRC<Ref<Skin>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001245c8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Ref<Skin>>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Ref<Skin>>::~MethodBindTRC(MethodBindTRC<Ref<Skin>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001245c8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<bool>::~MethodBindT() */

void __thiscall MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00123ea8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<bool>::~MethodBindT() */

void __thiscall MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00123ea8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<AABB>::~MethodBindTRC() */

void __thiscall MethodBindTRC<AABB>::~MethodBindTRC(MethodBindTRC<AABB> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00124268;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<AABB>::~MethodBindTRC() */

void __thiscall MethodBindTRC<AABB>::~MethodBindTRC(MethodBindTRC<AABB> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00124268;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<NodePath const&>::~MethodBindT() */

void __thiscall MethodBindT<NodePath_const&>::~MethodBindT(MethodBindT<NodePath_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00124628;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<NodePath const&>::~MethodBindT() */

void __thiscall MethodBindT<NodePath_const&>::~MethodBindT(MethodBindT<NodePath_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00124628;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<NodePath>::~MethodBindTRC() */

void __thiscall MethodBindTRC<NodePath>::~MethodBindTRC(MethodBindTRC<NodePath> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00124688;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<NodePath>::~MethodBindTRC() */

void __thiscall MethodBindTRC<NodePath>::~MethodBindTRC(MethodBindTRC<NodePath> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00124688;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Transform3D const&, Vector3 const&, Color const&, Color const&, unsigned
   int>::~MethodBindT() */

void __thiscall
MethodBindT<Transform3D_const&,Vector3_const&,Color_const&,Color_const&,unsigned_int>::~MethodBindT
          (MethodBindT<Transform3D_const&,Vector3_const&,Color_const&,Color_const&,unsigned_int>
           *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001246e8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Transform3D const&, Vector3 const&, Color const&, Color const&, unsigned
   int>::~MethodBindT() */

void __thiscall
MethodBindT<Transform3D_const&,Vector3_const&,Color_const&,Color_const&,unsigned_int>::~MethodBindT
          (MethodBindT<Transform3D_const&,Vector3_const&,Color_const&,Color_const&,unsigned_int>
           *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001246e8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<double>::~MethodBindT() */

void __thiscall MethodBindT<double>::~MethodBindT(MethodBindT<double> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00123f68;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<double>::~MethodBindT() */

void __thiscall MethodBindT<double>::~MethodBindT(MethodBindT<double> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00123f68;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<bool>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001240e8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<bool>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001240e8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<double>::~MethodBindTRC() */

void __thiscall MethodBindTRC<double>::~MethodBindTRC(MethodBindTRC<double> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001241a8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<double>::~MethodBindTRC() */

void __thiscall MethodBindTRC<double>::~MethodBindTRC(MethodBindTRC<double> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001241a8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<GPUParticles3D::TransformAlign>::~MethodBindT() */

void __thiscall
MethodBindT<GPUParticles3D::TransformAlign>::~MethodBindT
          (MethodBindT<GPUParticles3D::TransformAlign> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00124748;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<GPUParticles3D::TransformAlign>::~MethodBindT() */

void __thiscall
MethodBindT<GPUParticles3D::TransformAlign>::~MethodBindT
          (MethodBindT<GPUParticles3D::TransformAlign> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00124748;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<GPUParticles3D::TransformAlign>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<GPUParticles3D::TransformAlign>::~MethodBindTRC
          (MethodBindTRC<GPUParticles3D::TransformAlign> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001247a8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<GPUParticles3D::TransformAlign>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<GPUParticles3D::TransformAlign>::~MethodBindTRC
          (MethodBindTRC<GPUParticles3D::TransformAlign> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001247a8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Node*>::~MethodBindT() */

void __thiscall MethodBindT<Node*>::~MethodBindT(MethodBindT<Node*> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00124808;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Node*>::~MethodBindT() */

void __thiscall MethodBindT<Node*>::~MethodBindT(MethodBindT<Node*> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00124808;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<float>::~MethodBindTRC() */

void __thiscall MethodBindTRC<float>::~MethodBindTRC(MethodBindTRC<float> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00124208;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<float>::~MethodBindTRC() */

void __thiscall MethodBindTRC<float>::~MethodBindTRC(MethodBindTRC<float> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00124208;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<float>::~MethodBindT() */

void __thiscall MethodBindT<float>::~MethodBindT(MethodBindT<float> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00123fc8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<float>::~MethodBindT() */

void __thiscall MethodBindT<float>::~MethodBindT(MethodBindT<float> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00123fc8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
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



/* GPUParticles3D::_property_get_revertv(StringName const&, Variant&) const */

undefined8 GPUParticles3D::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_property_get_revert) {
    uVar1 = Node3D::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* GPUParticles3D::_property_can_revertv(StringName const&) const */

undefined8 GPUParticles3D::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_0012b008 != Object::_property_can_revert) {
    uVar1 = Node3D::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* GPUParticles3D::_getv(StringName const&, Variant&) const */

undefined8 GPUParticles3D::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__get_0012b010 != Object::_get) {
    uVar1 = GeometryInstance3D::_get(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* GPUParticles3D::_setv(StringName const&, Variant const&) */

undefined8 GPUParticles3D::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__set_0012b018 != Object::_set) {
    uVar1 = GeometryInstance3D::_set(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* CowData<Transform3D>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Transform3D>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* GPUParticles3D::_bind_compatibility_methods() [clone .cold] */

void GPUParticles3D::_bind_compatibility_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* GPUParticles3D::_bind_methods() [clone .cold] */

void GPUParticles3D::_bind_methods(void)

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



/* CowData<Ref<Mesh> >::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Ref<Mesh>>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* Error CowData<Transform3D>::resize<false>(long) [clone .isra.0] [clone .cold] */

void CowData<Transform3D>::resize<false>(long param_1)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0010d4fa(void)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* GPUParticles3D::set_draw_passes(int) [clone .cold] */

void GPUParticles3D::set_draw_passes(int param_1)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CallableCustomMethodPointer<Node3D, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<Node3D,void>::get_object(CallableCustomMethodPointer<Node3D,void> *this)

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
      goto LAB_0010d60d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010d60d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010d60d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<Node, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<Node,void>::get_object(CallableCustomMethodPointer<Node,void> *this)

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
      goto LAB_0010d70d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010d70d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010d70d:
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



/* GPUParticles3D::_get_class_namev() const */

undefined8 * GPUParticles3D::_get_class_namev(void)

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
LAB_0010d833:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010d833;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"GPUParticles3D");
      goto LAB_0010d89e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"GPUParticles3D");
LAB_0010d89e:
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



/* GPUParticles3D::get_class() const */

void GPUParticles3D::get_class(void)

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



/* MethodBindTRC<NodePath>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<NodePath>::_gen_argument_type_info(int param_1)

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
      goto joined_r0x0010dbfc;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010dbfc:
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



/* MethodBindTRC<double>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<double>::_gen_argument_type_info(int param_1)

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
      goto joined_r0x0010dd7c;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010dd7c:
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
      goto joined_r0x0010defc;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010defc:
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
  local_48 = &_LC5;
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
      goto joined_r0x0010e07c;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010e07c:
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
      goto joined_r0x0010e1fc;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010e1fc:
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



/* MethodBindTRC<Ref<Material>>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Ref<Material>>::_gen_argument_type_info(int param_1)

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
  local_48 = "Material";
  local_40 = 8;
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
      goto LAB_0010e300;
    }
  }
  StringName::StringName((StringName *)&local_48,(CowData<char32_t> *)(puVar3 + 8),false);
  if (*(char **)(puVar3 + 4) == local_48) {
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  else {
    StringName::unref();
    *(char **)(puVar3 + 4) = local_48;
  }
LAB_0010e300:
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



/* MethodBindTRC<AABB>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<AABB>::_gen_argument_type_info(int param_1)

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
  *puVar3 = 0x10;
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
      goto joined_r0x0010e51c;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010e51c:
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



/* MethodBindTRC<Ref<Skin>>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Ref<Skin>>::_gen_argument_type_info(int param_1)

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
  local_48 = &_LC31;
  local_40 = 4;
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
      goto LAB_0010e620;
    }
  }
  StringName::StringName((StringName *)&local_48,(CowData<char32_t> *)(puVar3 + 8),false);
  if (*(undefined **)(puVar3 + 4) == local_48) {
    if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
      StringName::unref();
    }
  }
  else {
    StringName::unref();
    *(undefined **)(puVar3 + 4) = local_48;
  }
LAB_0010e620:
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
      goto joined_r0x0010e83c;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010e83c:
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



/* GPUParticles3D::_validate_propertyv(PropertyInfo&) const */

void __thiscall GPUParticles3D::_validate_propertyv(GPUParticles3D *this,PropertyInfo *param_1)

{
  Node::_validate_property((PropertyInfo *)this);
  Node3D::_validate_property((PropertyInfo *)this);
  VisualInstance3D::_validate_property((PropertyInfo *)this);
  if ((code *)PTR__validate_property_0012b020 != VisualInstance3D::_validate_property) {
    GeometryInstance3D::_validate_property((PropertyInfo *)this);
  }
  _validate_property(this,param_1);
  return;
}



/* WARNING: Removing unreachable block (ram,0x0010ecc0) */
/* GPUParticles3D::_notificationv(int, bool) */

void __thiscall GPUParticles3D::_notificationv(GPUParticles3D *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    _notification(this,param_1);
    if ((code *)PTR__notification_0012b028 != Node3D::_notification) {
      VisualInstance3D::_notification(iVar1);
    }
    Node3D::_notification(iVar1);
    Node::_notification(iVar1);
    return;
  }
  Node::_notification(iVar1);
  Node3D::_notification(iVar1);
  if ((code *)PTR__notification_0012b028 != Node3D::_notification) {
    VisualInstance3D::_notification(iVar1);
  }
  _notification(this,param_1);
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



/* Callable create_custom_callable_function_pointer<Node3D>(Node3D*, char const*, void
   (Node3D::*)()) */

Node3D * create_custom_callable_function_pointer<Node3D>
                   (Node3D *param_1,char *param_2,_func_void *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC5;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_00123d28;
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(char **)(this + 0x28) = param_2;
  *(undefined8 *)(this + 0x30) = uVar1;
  *(undefined8 *)(this + 0x38) = in_RCX;
  *(undefined8 *)(this + 0x40) = in_R8;
  *(undefined8 *)(this + 0x10) = 0;
  CallableCustomMethodPointerBase::_setup((uint *)this,(int)this + 0x28);
  *(_func_void **)(this + 0x20) = param_3 + 1;
  Callable::Callable((Callable *)param_1,this);
  return param_1;
}



/* Callable create_custom_callable_function_pointer<Node>(Node*, char const*, void (Node::*)()) */

Node * create_custom_callable_function_pointer<Node>
                 (Node *param_1,char *param_2,_func_void *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC5;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_00123db8;
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(char **)(this + 0x28) = param_2;
  *(undefined8 *)(this + 0x30) = uVar1;
  *(undefined8 *)(this + 0x38) = in_RCX;
  *(undefined8 *)(this + 0x40) = in_R8;
  *(undefined8 *)(this + 0x10) = 0;
  CallableCustomMethodPointerBase::_setup((uint *)this,(int)this + 0x28);
  *(_func_void **)(this + 0x20) = param_3 + 1;
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



/* CallableCustomMethodPointer<Node, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<Node,void>::call
          (CallableCustomMethodPointer<Node,void> *this,Variant **param_1,int param_2,
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
      goto LAB_0010f36f;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_0010f36f;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010f348. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_0010f431;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0010f36f:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC48,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0010f431:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<Node3D, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<Node3D,void>::call
          (CallableCustomMethodPointer<Node3D,void> *this,Variant **param_1,int param_2,
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
      goto LAB_0010f58f;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_0010f58f;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010f568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_0010f651;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0010f58f:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC48,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0010f651:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VisualInstance3D::is_class(String const&) const */

undefined8 __thiscall VisualInstance3D::is_class(VisualInstance3D *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_0010f6ef;
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
LAB_0010f6ef:
    cVar6 = String::operator==((String *)param_1,(String *)&local_60);
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
    if (cVar6 != '\0') goto LAB_0010f7a3;
  }
  cVar6 = String::operator==((String *)param_1,"VisualInstance3D");
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
              if (lVar5 == 0) goto LAB_0010f913;
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
LAB_0010f913:
      cVar6 = String::operator==((String *)param_1,(String *)&local_60);
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
      if (cVar6 != '\0') goto LAB_0010f7a3;
    }
    cVar6 = String::operator==((String *)param_1,"Node3D");
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
        cVar6 = String::operator==((String *)param_1,(String *)&local_60);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        if (cVar6 != '\0') goto LAB_0010f7a3;
      }
      cVar6 = String::operator==((String *)param_1,"Node");
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
                  if (lVar5 == 0) goto LAB_0010f87b;
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
LAB_0010f87b:
          cVar6 = String::operator==((String *)param_1,(String *)&local_60);
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
          if (cVar6 != '\0') goto LAB_0010f7a3;
        }
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar8 = String::operator==((String *)param_1,"Object");
          return uVar8;
        }
        goto LAB_0010faab;
      }
    }
  }
LAB_0010f7a3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010faab:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GPUParticles3D::is_class(String const&) const */

undefined8 __thiscall GPUParticles3D::is_class(GPUParticles3D *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_0010fb3f;
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
LAB_0010fb3f:
    cVar6 = String::operator==((String *)param_1,(String *)&local_60);
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
    if (cVar6 != '\0') goto LAB_0010fbf3;
  }
  cVar6 = String::operator==((String *)param_1,"GPUParticles3D");
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
              if (lVar5 == 0) goto LAB_0010fcb3;
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
LAB_0010fcb3:
      cVar6 = String::operator==((String *)param_1,(String *)&local_60);
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
      if (cVar6 != '\0') goto LAB_0010fbf3;
    }
    cVar6 = String::operator==((String *)param_1,"GeometryInstance3D");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = VisualInstance3D::is_class((VisualInstance3D *)this,param_1);
        return uVar7;
      }
      goto LAB_0010fd5c;
    }
  }
LAB_0010fbf3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010fd5c:
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
LAB_0010ff08:
    local_50 = 0x80;
    StringName::operator=(local_b8,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0010ff08;
    StringName::StringName((StringName *)&local_80,(CowData<char32_t> *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0010ff23;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0010ff23:
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



/* VisualInstance3D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
VisualInstance3D::_get_property_listv(VisualInstance3D *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 (*pauVar3) [16];
  undefined4 *puVar4;
  long in_FS_OFFSET;
  StringName *local_a0;
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
LAB_001104fd:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_001104fd;
    StringName::StringName((StringName *)&local_80,(CowData<char32_t> *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0011051f;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0011051f:
  if (lVar2 == 0) {
    pauVar3 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar3;
    *(undefined4 *)pauVar3[1] = 0;
    *pauVar3 = (undefined1  [16])0x0;
  }
  local_a0 = (StringName *)&local_68;
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
  StringName::operator=((StringName *)(puVar4 + 4),local_a0);
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



/* GeometryInstance3D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
GeometryInstance3D::_get_property_listv(GeometryInstance3D *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 (*pauVar3) [16];
  undefined4 *puVar4;
  long in_FS_OFFSET;
  StringName *local_a0;
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
  local_78 = "GeometryInstance3D";
  local_70 = 0x12;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "GeometryInstance3D";
  local_98 = 0;
  local_70 = 0x12;
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
LAB_0011091d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0011091d;
    StringName::StringName((StringName *)&local_80,(CowData<char32_t> *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0011093f;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0011093f:
  if (lVar2 == 0) {
    pauVar3 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar3;
    *(undefined4 *)pauVar3[1] = 0;
    *pauVar3 = (undefined1  [16])0x0;
  }
  local_a0 = (StringName *)&local_68;
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
  StringName::operator=((StringName *)(puVar4 + 4),local_a0);
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"GeometryInstance3D",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if ((code *)PTR__get_property_list_0012b030 != Object::_get_property_list) {
    GeometryInstance3D::_get_property_list((List *)this);
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



/* GPUParticles3D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall GPUParticles3D::_get_property_listv(GPUParticles3D *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 (*pauVar3) [16];
  undefined4 *puVar4;
  long in_FS_OFFSET;
  StringName *local_a0;
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
    GeometryInstance3D::_get_property_listv((GeometryInstance3D *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "GPUParticles3D";
  local_70 = 0xe;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "GPUParticles3D";
  local_98 = 0;
  local_70 = 0xe;
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
LAB_00110d1d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00110d1d;
    StringName::StringName((StringName *)&local_80,(CowData<char32_t> *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00110d3f;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00110d3f:
  if (lVar2 == 0) {
    pauVar3 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar3;
    *(undefined4 *)pauVar3[1] = 0;
    *pauVar3 = (undefined1  [16])0x0;
  }
  local_a0 = (StringName *)&local_68;
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
  StringName::operator=((StringName *)(puVar4 + 4),local_a0);
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
  StringName::StringName((StringName *)&local_78,"GPUParticles3D",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      GeometryInstance3D::_get_property_listv((GeometryInstance3D *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<Mesh>, int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Ref<Mesh>,int>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined8 uVar4;
  int in_EDX;
  long lVar5;
  long lVar6;
  undefined4 in_register_0000003c;
  undefined4 *puVar7;
  long in_FS_OFFSET;
  undefined8 local_b0;
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
  
  puVar7 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_98 = 0;
  if (in_EDX == 0) {
    local_80 = 0;
    local_90._0_8_ = 0;
    local_90._8_8_ = 0;
    local_78 = 0;
    local_70 = 6;
    local_a0 = 0;
    local_a8 = 0;
    local_68 = &_LC5;
    local_60 = 0;
    String::parse_latin1((StrRange *)&local_a8);
    local_b0 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_68,2,(CowData<char32_t> *)&local_b0,0,(StrRange *)&local_a8,6,
               &local_a0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    if ((StringName::configured != '\0') && (local_a0 != 0)) {
      StringName::unref();
    }
    uVar3 = local_90._0_8_;
    local_98 = CONCAT44(local_98._4_4_,local_68._0_4_);
    if (local_90._0_8_ != local_60) {
      lVar5 = local_60;
      if (local_90._0_8_ != 0) {
        LOCK();
        plVar1 = (long *)(local_90._0_8_ + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_90._0_8_ = 0;
          Memory::free_static((void *)(uVar3 + -0x10),false);
          lVar5 = local_60;
        }
      }
      local_60 = 0;
      local_90._0_8_ = lVar5;
    }
    if (local_90._8_8_ != local_58) {
      StringName::unref();
      local_90._8_8_ = local_58;
      local_58 = 0;
    }
    lVar5 = local_78;
    local_80 = CONCAT44(local_80._4_4_,local_50);
    if (local_78 != local_48) {
      lVar6 = local_48;
      if (local_78 != 0) {
        LOCK();
        plVar1 = (long *)(local_78 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_78 = 0;
          Memory::free_static((void *)(lVar5 + -0x10),false);
          lVar6 = local_48;
        }
      }
      local_48 = 0;
      local_78 = lVar6;
    }
    local_70 = local_40;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
    uVar4 = local_90._8_8_;
    uVar3 = local_90._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_90._8_8_;
    local_90 = auVar2 << 0x40;
    *puVar7 = (undefined4)local_98;
    *(undefined8 *)(puVar7 + 2) = uVar3;
    *(undefined8 *)(puVar7 + 4) = uVar4;
    puVar7[6] = (undefined4)local_80;
    *(long *)(puVar7 + 8) = local_78;
    puVar7[10] = local_70;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
    goto LAB_00111268;
  }
  local_a0 = 0;
  local_60 = 4;
  local_68 = &_LC54;
  String::parse_latin1((StrRange *)&local_a0);
  local_a8 = 0;
  *puVar7 = 0x18;
  puVar7[6] = 0x11;
  *(undefined8 *)(puVar7 + 8) = 0;
  *(undefined1 (*) [16])(puVar7 + 2) = (undefined1  [16])0x0;
  if (local_a0 == 0) {
    puVar7[10] = 6;
LAB_00111297:
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
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar7 + 8),(CowData *)&local_a0);
    puVar7[10] = 6;
    if (puVar7[6] == 0x11) goto LAB_00111297;
    StringName::operator=((StringName *)(puVar7 + 4),(StringName *)&local_98);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  if ((StringName::configured != '\0') && (local_98 != 0)) {
    StringName::unref();
  }
LAB_00111268:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar7;
}



/* MethodBindT<Node*>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<Node*>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  undefined8 local_78;
  long local_70;
  undefined *local_68;
  long local_60;
  long local_58;
  undefined4 local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar3 = 0;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  puVar3[10] = 6;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  if (in_EDX == 0) {
    local_78 = 0;
    local_68 = &_LC51;
    local_60 = 4;
    String::parse_latin1((StrRange *)&local_78);
    StringName::StringName((StringName *)&local_70,(String *)&local_78,false);
    local_68 = (undefined *)CONCAT44(local_68._4_4_,0x18);
    local_60 = 0;
    StringName::StringName((StringName *)&local_58,(StringName *)&local_70);
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    if ((StringName::configured != '\0') && (local_70 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    *puVar3 = local_68._0_4_;
    if (*(long *)(puVar3 + 2) != local_60) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar3 + 2));
      lVar2 = local_60;
      local_60 = 0;
      *(long *)(puVar3 + 2) = lVar2;
    }
    if (*(long *)(puVar3 + 4) != local_58) {
      StringName::unref();
      lVar2 = local_58;
      local_58 = 0;
      *(long *)(puVar3 + 4) = lVar2;
    }
    lVar2 = local_48;
    puVar3[6] = local_50;
    if (*(long *)(puVar3 + 8) == local_48) {
      puVar3[10] = local_40;
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
    }
    else {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar3 + 8));
      *(long *)(puVar3 + 8) = local_48;
      puVar3[10] = local_40;
    }
    if ((StringName::configured != '\0') && (local_58 != 0)) {
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
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<double>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<double>::_gen_argument_type_info(int param_1)

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
  if (in_EDX != 0) goto LAB_0011156b;
  local_78 = 0;
  local_80 = 0;
  local_68 = &_LC5;
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
LAB_00111660:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00111660;
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
LAB_0011156b:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar5;
}



/* MethodBindT<NodePath const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<NodePath_const&>::_gen_argument_type_info(int param_1)

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
  if (in_EDX != 0) goto LAB_001117ab;
  local_78 = 0;
  local_80 = 0;
  local_68 = &_LC5;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_60._8_8_;
  local_60 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,0x16);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_001118a0:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_001118a0;
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
LAB_001117ab:
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
  if (in_EDX != 0) goto LAB_001119eb;
  local_78 = 0;
  local_80 = 0;
  local_68 = &_LC5;
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
LAB_00111ae0:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00111ae0;
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
LAB_001119eb:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar5;
}



/* MethodBindT<AABB const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<AABB_const&>::_gen_argument_type_info(int param_1)

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
  if (in_EDX != 0) goto LAB_00111c2b;
  local_78 = 0;
  local_80 = 0;
  local_68 = &_LC5;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_60._8_8_;
  local_60 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,0x10);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00111d20:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00111d20;
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
LAB_00111c2b:
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
  if (in_EDX != 0) goto LAB_00111e6b;
  local_78 = 0;
  local_80 = 0;
  local_68 = &_LC5;
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
LAB_00111f60:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00111f60;
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
LAB_00111e6b:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar5;
}



/* MethodBindT<int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<int>::_gen_argument_type_info(int param_1)

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
  if (in_EDX != 0) goto LAB_001120ab;
  local_78 = 0;
  local_80 = 0;
  local_68 = &_LC5;
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
LAB_001121a0:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_001121a0;
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
LAB_001120ab:
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
  if (in_EDX != 0) goto LAB_001122eb;
  local_78 = 0;
  local_80 = 0;
  local_68 = &_LC5;
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
LAB_001123e0:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_001123e0;
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
LAB_001122eb:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar5;
}



/* MethodBindT<Ref<Skin> const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<Ref<Skin>const&>::_gen_argument_type_info(int param_1)

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
  undefined *local_68;
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
  if (in_EDX != 0) goto LAB_0011252b;
  local_78 = 0;
  local_80 = 0;
  local_68 = &_LC31;
  local_60._0_8_ = 4;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,0x18);
  local_50 = 0x11;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_001126c5:
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
    if (local_50 == 0x11) goto LAB_001126c5;
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
LAB_0011252b:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar4;
}



/* MethodBindT<Ref<Material> const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<Ref<Material>const&>::_gen_argument_type_info(int param_1)

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
  if (in_EDX != 0) goto LAB_0011277b;
  local_78 = 0;
  local_80 = 0;
  local_68 = "Material";
  local_60._0_8_ = 8;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (char *)CONCAT44(local_68._4_4_,0x18);
  local_50 = 0x11;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00112915:
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
    if (local_50 == 0x11) goto LAB_00112915;
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
LAB_0011277b:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar4;
}



/* MethodBindT<int, Ref<Mesh> const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<int,Ref<Mesh>const&>::_gen_argument_type_info(int param_1)

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
  undefined *local_78;
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
    local_88 = 0;
    local_90 = 0;
    local_78 = &_LC5;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_70._8_8_;
    local_70 = auVar1 << 0x40;
    String::parse_latin1((StrRange *)&local_90);
    local_98 = 0;
    local_78 = (undefined *)CONCAT44(local_78._4_4_,2);
    local_60 = 0;
    local_58 = 0;
    local_70 = (undefined1  [16])0x0;
    if ((local_90 != 0) &&
       (CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90),
       local_60 == 0x11)) goto LAB_00112a95;
LAB_00112b65:
    local_50 = 6;
    StringName::operator=((StringName *)(local_70 + 8),(StringName *)&local_88);
  }
  else {
    if (in_EDX != 1) goto LAB_001129da;
    local_88 = 0;
    local_90 = 0;
    local_78 = &_LC54;
    local_70._0_8_ = 4;
    String::parse_latin1((StrRange *)&local_90);
    local_98 = 0;
    local_78 = (undefined *)CONCAT44(local_78._4_4_,0x18);
    local_60 = 0x11;
    local_58 = 0;
    local_70 = (undefined1  [16])0x0;
    if ((local_90 != 0) &&
       (CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90),
       local_60 != 0x11)) goto LAB_00112b65;
LAB_00112a95:
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
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
LAB_001129da:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar5;
}



/* Ref<Material>::unref() */

void __thiscall Ref<Material>::unref(Ref<Material> *this)

{
  Object *pOVar1;
  char cVar2;
  
  if (*(long *)this != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)this;
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
        *(undefined8 *)this = 0;
        return;
      }
    }
  }
  *(undefined8 *)this = 0;
  return;
}



/* MethodBind* create_method_bind<GPUParticles3D>(void (GPUParticles3D::*)()) */

MethodBind * create_method_bind<GPUParticles3D>(_func_void *param_1)

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
  *(_func_void **)(this + 0x58) = param_1;
  *(undefined8 *)(this + 0x60) = in_RSI;
  *(undefined ***)this = &PTR__gen_argument_type_00123e48;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "GPUParticles3D";
  local_30 = 0xe;
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



/* Ref<Texture2D>::unref() */

void __thiscall Ref<Texture2D>::unref(Ref<Texture2D> *this)

{
  Object *pOVar1;
  char cVar2;
  
  if (*(long *)this != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)this;
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
        *(undefined8 *)this = 0;
        return;
      }
    }
  }
  *(undefined8 *)this = 0;
  return;
}



/* Ref<Curve>::unref() */

void __thiscall Ref<Curve>::unref(Ref<Curve> *this)

{
  Object *pOVar1;
  char cVar2;
  
  if (*(long *)this != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)this;
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
        *(undefined8 *)this = 0;
        return;
      }
    }
  }
  *(undefined8 *)this = 0;
  return;
}



/* Ref<CurveTexture>::TEMPNAMEPLACEHOLDERVALUE(CurveTexture*) */

void __thiscall Ref<CurveTexture>::operator=(Ref<CurveTexture> *this,CurveTexture *param_1)

{
  Object *pOVar1;
  char cVar2;
  
  pOVar1 = *(Object **)this;
  if (param_1 != (CurveTexture *)pOVar1) {
    *(CurveTexture **)this = param_1;
    if (param_1 != (CurveTexture *)0x0) {
      cVar2 = RefCounted::init_ref();
      if (cVar2 == '\0') {
        *(undefined8 *)this = 0;
      }
    }
    if (pOVar1 != (Object *)0x0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
        cVar2 = predelete_handler(pOVar1);
        if (cVar2 != '\0') {
          (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
          Memory::free_static(pOVar1,false);
          return;
        }
      }
    }
  }
  return;
}



/* MethodBind* create_method_bind<GPUParticles3D, bool>(void (GPUParticles3D::*)(bool)) */

MethodBind * create_method_bind<GPUParticles3D,bool>(_func_void_bool *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_00123ea8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "GPUParticles3D";
  local_30 = 0xe;
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



/* MethodBind* create_method_bind<GPUParticles3D, int>(void (GPUParticles3D::*)(int)) */

MethodBind * create_method_bind<GPUParticles3D,int>(_func_void_int *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_00123f08;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "GPUParticles3D";
  local_30 = 0xe;
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



/* MethodBind* create_method_bind<GPUParticles3D, double>(void (GPUParticles3D::*)(double)) */

MethodBind * create_method_bind<GPUParticles3D,double>(_func_void_double *param_1)

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
  *(_func_void_double **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00123f68;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "GPUParticles3D";
  local_30 = 0xe;
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



/* MethodBind* create_method_bind<GPUParticles3D, float>(void (GPUParticles3D::*)(float)) */

MethodBind * create_method_bind<GPUParticles3D,float>(_func_void_float *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_00123fc8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "GPUParticles3D";
  local_30 = 0xe;
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



/* MethodBind* create_method_bind<GPUParticles3D, AABB const&>(void (GPUParticles3D::*)(AABB
   const&)) */

MethodBind * create_method_bind<GPUParticles3D,AABB_const&>(_func_void_AABB_ptr *param_1)

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
  *(_func_void_AABB_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00124028;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "GPUParticles3D";
  local_30 = 0xe;
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



/* MethodBind* create_method_bind<GPUParticles3D, Ref<Material> const&>(void
   (GPUParticles3D::*)(Ref<Material> const&)) */

MethodBind * create_method_bind<GPUParticles3D,Ref<Material>const&>(_func_void_Ref_ptr *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_00124088;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "GPUParticles3D";
  local_30 = 0xe;
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



/* MethodBind* create_method_bind<GPUParticles3D, bool>(bool (GPUParticles3D::*)() const) */

MethodBind * create_method_bind<GPUParticles3D,bool>(_func_bool *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_001240e8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "GPUParticles3D";
  local_30 = 0xe;
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



/* MethodBind* create_method_bind<GPUParticles3D, int>(int (GPUParticles3D::*)() const) */

MethodBind * create_method_bind<GPUParticles3D,int>(_func_int *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_00124148;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "GPUParticles3D";
  local_30 = 0xe;
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



/* MethodBind* create_method_bind<GPUParticles3D, double>(double (GPUParticles3D::*)() const) */

MethodBind * create_method_bind<GPUParticles3D,double>(_func_double *param_1)

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
  *(_func_double **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_001241a8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "GPUParticles3D";
  local_30 = 0xe;
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



/* MethodBind* create_method_bind<GPUParticles3D, float>(float (GPUParticles3D::*)() const) */

MethodBind * create_method_bind<GPUParticles3D,float>(_func_float *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_00124208;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "GPUParticles3D";
  local_30 = 0xe;
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



/* MethodBind* create_method_bind<GPUParticles3D, AABB>(AABB (GPUParticles3D::*)() const) */

MethodBind * create_method_bind<GPUParticles3D,AABB>(_func_AABB *param_1)

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
  *(_func_AABB **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00124268;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "GPUParticles3D";
  local_30 = 0xe;
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



/* MethodBind* create_method_bind<GPUParticles3D, Ref<Material>>(Ref<Material> (GPUParticles3D::*)()
   const) */

MethodBind * create_method_bind<GPUParticles3D,Ref<Material>>(_func_Ref *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_001242c8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "GPUParticles3D";
  local_30 = 0xe;
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



/* MethodBind* create_method_bind<GPUParticles3D, unsigned int>(void (GPUParticles3D::*)(unsigned
   int)) */

MethodBind * create_method_bind<GPUParticles3D,unsigned_int>(_func_void_uint *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_00124328;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "GPUParticles3D";
  local_30 = 0xe;
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



/* MethodBind* create_method_bind<GPUParticles3D, unsigned int>(unsigned int (GPUParticles3D::*)()
   const) */

MethodBind * create_method_bind<GPUParticles3D,unsigned_int>(_func_uint *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_00124388;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "GPUParticles3D";
  local_30 = 0xe;
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



/* MethodBind* create_method_bind<GPUParticles3D, GPUParticles3D::DrawOrder>(void
   (GPUParticles3D::*)(GPUParticles3D::DrawOrder)) */

MethodBind *
create_method_bind<GPUParticles3D,GPUParticles3D::DrawOrder>(_func_void_DrawOrder *param_1)

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
  *(_func_void_DrawOrder **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_001243e8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "GPUParticles3D";
  local_30 = 0xe;
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



/* MethodBind* create_method_bind<GPUParticles3D,
   GPUParticles3D::DrawOrder>(GPUParticles3D::DrawOrder (GPUParticles3D::*)() const) */

MethodBind * create_method_bind<GPUParticles3D,GPUParticles3D::DrawOrder>(_func_DrawOrder *param_1)

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
  *(_func_DrawOrder **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00124448;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "GPUParticles3D";
  local_30 = 0xe;
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



/* MethodBind* create_method_bind<GPUParticles3D, int, Ref<Mesh> const&>(void
   (GPUParticles3D::*)(int, Ref<Mesh> const&)) */

MethodBind * create_method_bind<GPUParticles3D,int,Ref<Mesh>const&>(_func_void_int_Ref_ptr *param_1)

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
  *(_func_void_int_Ref_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_001244a8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "GPUParticles3D";
  local_30 = 0xe;
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



/* MethodBind* create_method_bind<GPUParticles3D, Ref<Mesh>, int>(Ref<Mesh> (GPUParticles3D::*)(int)
   const) */

MethodBind * create_method_bind<GPUParticles3D,Ref<Mesh>,int>(_func_Ref_int *param_1)

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
  *(_func_Ref_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00124508;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "GPUParticles3D";
  local_30 = 0xe;
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



/* MethodBind* create_method_bind<GPUParticles3D, Ref<Skin> const&>(void
   (GPUParticles3D::*)(Ref<Skin> const&)) */

MethodBind * create_method_bind<GPUParticles3D,Ref<Skin>const&>(_func_void_Ref_ptr *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_00124568;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "GPUParticles3D";
  local_30 = 0xe;
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



/* MethodBind* create_method_bind<GPUParticles3D, Ref<Skin>>(Ref<Skin> (GPUParticles3D::*)() const)
    */

MethodBind * create_method_bind<GPUParticles3D,Ref<Skin>>(_func_Ref *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_001245c8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "GPUParticles3D";
  local_30 = 0xe;
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



/* MethodBind* create_method_bind<GPUParticles3D, NodePath const&>(void (GPUParticles3D::*)(NodePath
   const&)) */

MethodBind * create_method_bind<GPUParticles3D,NodePath_const&>(_func_void_NodePath_ptr *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_00124628;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "GPUParticles3D";
  local_30 = 0xe;
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



/* MethodBind* create_method_bind<GPUParticles3D, NodePath>(NodePath (GPUParticles3D::*)() const) */

MethodBind * create_method_bind<GPUParticles3D,NodePath>(_func_NodePath *param_1)

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
  *(_func_NodePath **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00124688;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "GPUParticles3D";
  local_30 = 0xe;
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



/* MethodBind* create_method_bind<GPUParticles3D, Transform3D const&, Vector3 const&, Color const&,
   Color const&, unsigned int>(void (GPUParticles3D::*)(Transform3D const&, Vector3 const&, Color
   const&, Color const&, unsigned int)) */

MethodBind *
create_method_bind<GPUParticles3D,Transform3D_const&,Vector3_const&,Color_const&,Color_const&,unsigned_int>
          (_func_void_Transform3D_ptr_Vector3_ptr_Color_ptr_Color_ptr_uint *param_1)

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
  *(_func_void_Transform3D_ptr_Vector3_ptr_Color_ptr_Color_ptr_uint **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_001246e8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 5;
  local_40 = 0;
  local_38 = "GPUParticles3D";
  local_30 = 0xe;
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



/* MethodBind* create_method_bind<GPUParticles3D, GPUParticles3D::TransformAlign>(void
   (GPUParticles3D::*)(GPUParticles3D::TransformAlign)) */

MethodBind *
create_method_bind<GPUParticles3D,GPUParticles3D::TransformAlign>
          (_func_void_TransformAlign *param_1)

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
  *(_func_void_TransformAlign **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00124748;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "GPUParticles3D";
  local_30 = 0xe;
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



/* MethodBind* create_method_bind<GPUParticles3D,
   GPUParticles3D::TransformAlign>(GPUParticles3D::TransformAlign (GPUParticles3D::*)() const) */

MethodBind *
create_method_bind<GPUParticles3D,GPUParticles3D::TransformAlign>(_func_TransformAlign *param_1)

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
  *(_func_TransformAlign **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_001247a8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "GPUParticles3D";
  local_30 = 0xe;
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



/* MethodBind* create_method_bind<GPUParticles3D, Node*>(void (GPUParticles3D::*)(Node*)) */

MethodBind * create_method_bind<GPUParticles3D,Node*>(_func_void_Node_ptr *param_1)

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
  *(_func_void_Node_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00124808;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "GPUParticles3D";
  local_30 = 0xe;
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



/* godot::details::enum_qualified_name_to_class_info_name(String const&) */

details * __thiscall
godot::details::enum_qualified_name_to_class_info_name(details *this,String *param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long in_FS_OFFSET;
  long local_60;
  char local_58 [8];
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  String::split(local_58,SUB81(param_1,0),0x114e3a);
  if ((local_50 != 0) && (2 < *(long *)(local_50 + -8))) {
    local_60 = 0;
    local_48 = &_LC58;
    local_40 = 1;
    String::parse_latin1((StrRange *)&local_60);
    if (local_50 == 0) {
      lVar4 = 0;
      lVar3 = -2;
    }
    else {
      lVar4 = *(long *)(local_50 + -8);
      lVar3 = lVar4 + -2;
      if (-1 < lVar3) {
        String::operator+((String *)&local_48,(String *)(local_50 + lVar3 * 8));
        String::operator+((String *)this,(String *)&local_48);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        goto LAB_00114f1b;
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
  local_60 = 0;
  local_48 = &_LC58;
  local_40 = 1;
  String::parse_latin1((StrRange *)&local_60);
  String::join((Vector *)this);
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
LAB_00114f1b:
  CowData<String>::_unref((CowData<String> *)&local_50);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GetTypeInfo<GPUParticles3D::DrawOrder, void>::get_class_info() */

GetTypeInfo<GPUParticles3D::DrawOrder,void> * __thiscall
GetTypeInfo<GPUParticles3D::DrawOrder,void>::get_class_info
          (GetTypeInfo<GPUParticles3D::DrawOrder,void> *this)

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
  local_48 = "GPUParticles3D::DrawOrder";
  local_40 = 0x19;
  String::parse_latin1((StrRange *)&local_58);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_50,(String *)&local_58);
  StringName::StringName((StringName *)&local_48,(details *)&local_50,false);
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



/* GetTypeInfo<GPUParticles3D::TransformAlign, void>::get_class_info() */

GetTypeInfo<GPUParticles3D::TransformAlign,void> * __thiscall
GetTypeInfo<GPUParticles3D::TransformAlign,void>::get_class_info
          (GetTypeInfo<GPUParticles3D::TransformAlign,void> *this)

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
  local_48 = "GPUParticles3D::TransformAlign";
  local_40 = 0x1e;
  String::parse_latin1((StrRange *)&local_58);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_50,(String *)&local_58);
  StringName::StringName((StringName *)&local_48,(details *)&local_50,false);
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



/* MethodBindTRC<GPUParticles3D::TransformAlign>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<GPUParticles3D::TransformAlign>::_gen_argument_type_info(int param_1)

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
  local_30 = 0x1e;
  local_38 = "GPUParticles3D::TransformAlign";
  String::parse_latin1((StrRange *)&local_40);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_38,(StrRange *)&local_40)
  ;
  StringName::StringName((StringName *)&local_48,(details *)&local_38,false);
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



/* MethodBindTRC<GPUParticles3D::DrawOrder>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<GPUParticles3D::DrawOrder>::_gen_argument_type_info(int param_1)

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
  local_30 = 0x19;
  local_38 = "GPUParticles3D::DrawOrder";
  String::parse_latin1((StrRange *)&local_40);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_38,(StrRange *)&local_40)
  ;
  StringName::StringName((StringName *)&local_48,(details *)&local_38,false);
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



/* GPUParticles3D::_initialize_classv() */

void GPUParticles3D::_initialize_classv(void)

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
    if (GeometryInstance3D::initialize_class()::initialized == '\0') {
      if (VisualInstance3D::initialize_class()::initialized == '\0') {
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
            if ((code *)PTR__bind_methods_0012b040 != Node::_bind_methods) {
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
          Node3D::_bind_methods();
          Node3D::initialize_class()::initialized = '\x01';
        }
        local_68 = 0;
        local_58 = "Node3D";
        local_50 = 6;
        String::parse_latin1((StrRange *)&local_68);
        StringName::StringName((StringName *)&local_60,(StrRange *)&local_68,false);
        local_58 = "VisualInstance3D";
        local_70 = 0;
        local_50 = 0x10;
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
        VisualInstance3D::_bind_methods();
        VisualInstance3D::initialize_class()::initialized = '\x01';
      }
      local_58 = "VisualInstance3D";
      local_68 = 0;
      local_50 = 0x10;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(StrRange *)&local_68,false);
      local_58 = "GeometryInstance3D";
      local_70 = 0;
      local_50 = 0x12;
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
      if ((code *)PTR__bind_methods_0012b038 != VisualInstance3D::_bind_methods) {
        GeometryInstance3D::_bind_methods();
      }
      GeometryInstance3D::initialize_class()::initialized = '\x01';
    }
    local_58 = "GeometryInstance3D";
    local_68 = 0;
    local_50 = 0x12;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(StrRange *)&local_68,false);
    local_58 = "GPUParticles3D";
    local_70 = 0;
    local_50 = 0xe;
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
    _bind_compatibility_methods();
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindT<GPUParticles3D::DrawOrder>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<GPUParticles3D::DrawOrder>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  long lVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
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
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar4 = 0;
  puVar4[6] = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  puVar4[10] = 6;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (in_EDX == 0) {
    local_80 = 0;
    local_60._0_8_ = 0x19;
    local_68 = "GPUParticles3D::DrawOrder";
    String::parse_latin1((StrRange *)&local_80);
    godot::details::enum_qualified_name_to_class_info_name(local_88,(StrRange *)&local_80);
    StringName::StringName((StringName *)&local_90,local_88,false);
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
    puVar4[6] = (undefined4)local_50;
    if (*(long *)(puVar4 + 8) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar4 + 8));
      lVar3 = local_48;
      local_48 = 0;
      *(long *)(puVar4 + 8) = lVar3;
    }
    puVar4[10] = local_40;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<GPUParticles3D::TransformAlign>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<GPUParticles3D::TransformAlign>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  long lVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
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
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar4 = 0;
  puVar4[6] = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  puVar4[10] = 6;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (in_EDX == 0) {
    local_80 = 0;
    local_60._0_8_ = 0x1e;
    local_68 = "GPUParticles3D::TransformAlign";
    String::parse_latin1((StrRange *)&local_80);
    godot::details::enum_qualified_name_to_class_info_name(local_88,(StrRange *)&local_80);
    StringName::StringName((StringName *)&local_90,local_88,false);
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
    puVar4[6] = (undefined4)local_50;
    if (*(long *)(puVar4 + 8) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar4 + 8));
      lVar3 = local_48;
      local_48 = 0;
      *(long *)(puVar4 + 8) = lVar3;
    }
    puVar4[10] = local_40;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
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
LAB_00116220:
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
  if (lVar10 == 0) goto LAB_00116220;
  if (param_1 <= lVar6) {
    lVar6 = *(long *)this;
    uVar8 = param_1;
    while (lVar6 != 0) {
      if (*(ulong *)(lVar6 + -8) <= uVar8) {
LAB_001160f9:
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
        if (*(ulong *)(lVar6 + -8) <= uVar8) goto LAB_001160f9;
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
    goto LAB_00116276;
  }
  if (lVar10 == lVar7) {
LAB_0011619f:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
LAB_00116276:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar6 = puVar9[-1];
    if (param_1 <= lVar6) goto LAB_0011618a;
  }
  else {
    if (lVar6 != 0) {
      uVar4 = _realloc(this,lVar10);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      goto LAB_0011619f;
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
LAB_0011618a:
  puVar9[-1] = param_1;
  return 0;
}



/* CowData<Ref<Mesh> >::_unref() */

void __thiscall CowData<Ref<Mesh>>::_unref(CowData<Ref<Mesh>> *this)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
  code *pcVar4;
  char cVar5;
  long *plVar6;
  long lVar7;
  
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
  plVar1 = *(long **)this;
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  lVar2 = plVar1[-1];
  *(undefined8 *)this = 0;
  if (lVar2 != 0) {
    lVar7 = 0;
    plVar6 = plVar1;
LAB_001162dd:
    do {
      if (*plVar6 != 0) {
        cVar5 = RefCounted::unreference();
        if (cVar5 != '\0') {
          pOVar3 = (Object *)*plVar6;
          cVar5 = predelete_handler(pOVar3);
          if (cVar5 != '\0') {
            lVar7 = lVar7 + 1;
            plVar6 = plVar6 + 1;
            (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
            Memory::free_static(pOVar3,false);
            if (lVar2 == lVar7) break;
            goto LAB_001162dd;
          }
        }
      }
      lVar7 = lVar7 + 1;
      plVar6 = plVar6 + 1;
    } while (lVar2 != lVar7);
  }
  Memory::free_static(plVar1 + -2,false);
  return;
}



/* CowData<Ref<Mesh> >::_realloc(long) */

undefined8 __thiscall CowData<Ref<Mesh>>::_realloc(CowData<Ref<Mesh>> *this,long param_1)

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



/* CowData<Transform3D>::_realloc(long) */

undefined8 __thiscall CowData<Transform3D>::_realloc(CowData<Transform3D> *this,long param_1)

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



/* WARNING: Removing unreachable block (ram,0x001165c8) */
/* WARNING: Removing unreachable block (ram,0x0011675d) */
/* WARNING: Removing unreachable block (ram,0x00116769) */
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



/* MethodBindTRC<GPUParticles3D::TransformAlign>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTRC<GPUParticles3D::TransformAlign>::call
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
      _err_print_error(&_LC48,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00116960;
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
LAB_00116960:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<GPUParticles3D::TransformAlign>::validated_call(Object*, Variant const**, Variant*)
   const */

void __thiscall
MethodBindTRC<GPUParticles3D::TransformAlign>::validated_call
          (MethodBindTRC<GPUParticles3D::TransformAlign> *this,Object *param_1,Variant **param_2,
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
      goto LAB_00116c04;
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
LAB_00116c04:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<GPUParticles3D::TransformAlign>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<GPUParticles3D::TransformAlign>::ptrcall
          (MethodBindTRC<GPUParticles3D::TransformAlign> *this,Object *param_1,void **param_2,
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
      goto LAB_00116dc3;
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
LAB_00116dc3:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<GPUParticles3D::TransformAlign>::validated_call(Object*, Variant const**, Variant*)
   const */

void MethodBindT<GPUParticles3D::TransformAlign>::validated_call
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
      goto LAB_00117101;
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
                    /* WARNING: Could not recover jumptable at 0x00116f8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8));
    return;
  }
LAB_00117101:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<GPUParticles3D::TransformAlign>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<GPUParticles3D::TransformAlign>::ptrcall
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
      goto LAB_001172e1;
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
                    /* WARNING: Could not recover jumptable at 0x0011716b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_001172e1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Transform3D const&, Vector3 const&, Color const&, Color const&, unsigned
   int>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<Transform3D_const&,Vector3_const&,Color_const&,Color_const&,unsigned_int>::
     validated_call(Object *param_1,Variant **param_2,Variant *param_3)

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
      local_40 = 0x35;
      local_50 = 0;
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
      goto LAB_001174c7;
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
                    /* WARNING: Could not recover jumptable at 0x00117373. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined8 *)(*(long *)param_3 + 8),*(long *)(param_3 + 8) + 8,
               *(long *)(param_3 + 0x10) + 8,*(long *)(param_3 + 0x18) + 8,
               *(undefined4 *)(*(long *)(param_3 + 0x20) + 8));
    return;
  }
LAB_001174c7:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Transform3D const&, Vector3 const&, Color const&, Color const&, unsigned
   int>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Transform3D_const&,Vector3_const&,Color_const&,Color_const&,unsigned_int>::ptrcall
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
      goto LAB_001176b9;
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
                    /* WARNING: Could not recover jumptable at 0x0011753f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3,
               *(undefined8 *)((long)param_3 + 8),*(undefined8 *)((long)param_3 + 0x10),
               *(undefined8 *)((long)param_3 + 0x18),**(undefined4 **)((long)param_3 + 0x20));
    return;
  }
LAB_001176b9:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<NodePath>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<NodePath>::call
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
      _err_print_error(&_LC48,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00117790;
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
      (*(code *)pVVar2)((NodePath *)&local_58);
      Variant::Variant((Variant *)local_48,(NodePath *)&local_58);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
      NodePath::~NodePath((NodePath *)&local_58);
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
LAB_00117790:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<NodePath>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<NodePath>::validated_call
          (MethodBindTRC<NodePath> *this,Object *param_1,Variant **param_2,Variant *param_3)

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
      local_48 = (Variant **)0x1167b8;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((NodePath *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(NodePath *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_001179b9;
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
  (*pcVar1)((NodePath *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  NodePath::operator=((NodePath *)(param_3 + 8),(NodePath *)&local_48);
  NodePath::~NodePath((NodePath *)&local_48);
LAB_001179b9:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<NodePath>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<NodePath>::ptrcall
          (MethodBindTRC<NodePath> *this,Object *param_1,void **param_2,void *param_3)

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
      local_48 = (void **)0x1167b8;
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
      goto LAB_00117b8a;
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
  (*pcVar1)((NodePath *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  NodePath::operator=((NodePath *)param_3,(NodePath *)&local_48);
  NodePath::~NodePath((NodePath *)&local_48);
LAB_00117b8a:
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
      goto LAB_00117ed1;
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
                    /* WARNING: Could not recover jumptable at 0x00117d5d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*(long *)param_3 + 8);
    return;
  }
LAB_00117ed1:
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
      goto LAB_001180b1;
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
                    /* WARNING: Could not recover jumptable at 0x00117f39. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3);
    return;
  }
LAB_001180b1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<GPUParticles3D::DrawOrder>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTRC<GPUParticles3D::DrawOrder>::call
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
      _err_print_error(&_LC48,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00118180;
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
LAB_00118180:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<GPUParticles3D::DrawOrder>::validated_call(Object*, Variant const**, Variant*)
   const */

void __thiscall
MethodBindTRC<GPUParticles3D::DrawOrder>::validated_call
          (MethodBindTRC<GPUParticles3D::DrawOrder> *this,Object *param_1,Variant **param_2,
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
      goto LAB_00118394;
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
LAB_00118394:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<GPUParticles3D::DrawOrder>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<GPUParticles3D::DrawOrder>::ptrcall
          (MethodBindTRC<GPUParticles3D::DrawOrder> *this,Object *param_1,void **param_2,
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
      goto LAB_00118543;
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
LAB_00118543:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<GPUParticles3D::DrawOrder>::validated_call(Object*, Variant const**, Variant*) const
    */

void MethodBindT<GPUParticles3D::DrawOrder>::validated_call
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
      goto LAB_00118881;
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
                    /* WARNING: Could not recover jumptable at 0x0011870c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8));
    return;
  }
LAB_00118881:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<GPUParticles3D::DrawOrder>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<GPUParticles3D::DrawOrder>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_00118a61;
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
                    /* WARNING: Could not recover jumptable at 0x001188eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_00118a61:
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
      _err_print_error(&_LC48,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00118b30;
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
LAB_00118b30:
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
      goto LAB_00118d44;
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
LAB_00118d44:
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
      goto LAB_00118ef3;
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
LAB_00118ef3:
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
      goto LAB_00119231;
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
                    /* WARNING: Could not recover jumptable at 0x001190bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8));
    return;
  }
LAB_00119231:
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
      goto LAB_00119411;
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
                    /* WARNING: Could not recover jumptable at 0x0011929b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_00119411:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<Material>>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<Ref<Material>>::call
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
      local_58 = (Object *)0x1167b8;
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC48,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00119530;
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
LAB_00119530:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<AABB>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<AABB>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  long *plVar3;
  undefined4 in_register_00000014;
  long *plVar4;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_88;
  undefined8 local_80;
  char *local_78;
  undefined8 local_70;
  undefined4 local_68 [2];
  undefined8 local_60;
  undefined8 uStack_58;
  AABB local_48 [24];
  long local_30;
  
  plVar4 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar4 != (long *)0x0) && (plVar4[1] != 0)) && (*(char *)(plVar4[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_78,(StringName *)(param_2 + 3));
    if (plVar4[1] == 0) {
      plVar3 = (long *)plVar4[0x23];
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*plVar4 + 0x40))(plVar4);
      }
    }
    else {
      plVar3 = (long *)(plVar4[1] + 0x20);
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
      _err_print_error(&_LC48,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_78,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      if ((StringName::configured != '\0') && (local_88 != 0)) {
        StringName::unref();
      }
      goto LAB_001197d0;
    }
    if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
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
      (*(code *)pVVar2)(local_48);
      Variant::Variant((Variant *)local_68,local_48);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_68[0];
      *(undefined8 *)(param_1 + 8) = local_60;
      *(undefined8 *)(param_1 + 0x10) = uStack_58;
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
LAB_001197d0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<AABB>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<AABB>::validated_call
          (MethodBindTRC<AABB> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  long *plVar3;
  Variant **extraout_RDX;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  Variant **local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_58 == (Variant **)*plVar3) {
      if ((StringName::configured != '\0') && (local_58 != (Variant **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = (Variant **)0x1167b8;
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
      goto LAB_001199f9;
    }
    param_2 = local_58;
    if ((StringName::configured != '\0') && (local_58 != (Variant **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    param_2 = *(Variant ***)(param_1 + *(long *)(this + 0x60));
    pcVar2 = *(code **)(pcVar2 + (long)param_2 + -1);
  }
  (*pcVar2)(&local_48,param_1 + *(long *)(this + 0x60),param_2);
  puVar1 = *(undefined8 **)(param_3 + 8);
  puVar1[2] = local_38;
  *puVar1 = local_48;
  puVar1[1] = uStack_40;
LAB_001199f9:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<AABB>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<AABB>::ptrcall(MethodBindTRC<AABB> *this,Object *param_1,void **param_2,void *param_3)

{
  code *pcVar1;
  long *plVar2;
  void **extraout_RDX;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  void **local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
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
    if (local_58 == (void **)*plVar2) {
      if ((StringName::configured != '\0') && (local_58 != (void **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = (void **)0x1167b8;
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
      goto LAB_00119bc7;
    }
    param_2 = local_58;
    if ((StringName::configured != '\0') && (local_58 != (void **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    param_2 = *(void ***)(param_1 + *(long *)(this + 0x60));
    pcVar1 = *(code **)(pcVar1 + (long)param_2 + -1);
  }
  (*pcVar1)(&local_48,param_1 + *(long *)(this + 0x60),param_2);
  *(undefined8 *)((long)param_3 + 0x10) = local_38;
  *(undefined8 *)param_3 = local_48;
  *(undefined8 *)((long)param_3 + 8) = uStack_40;
LAB_00119bc7:
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
      _err_print_error(&_LC48,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00119e00;
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
LAB_00119e00:
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
      goto LAB_0011a018;
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
LAB_0011a018:
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
      goto LAB_0011a1d7;
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
LAB_0011a1d7:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<double>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<double>::call
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
  double dVar5;
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
      _err_print_error(&_LC48,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0011a410;
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
      dVar5 = (double)(*(code *)pVVar2)();
      Variant::Variant((Variant *)local_48,dVar5);
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
LAB_0011a410:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<double>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<double>::validated_call
          (MethodBindTRC<double> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  undefined8 uVar3;
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
      goto LAB_0011a624;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar3 = (*pcVar1)(param_1 + *(long *)(this + 0x60));
  *(undefined8 *)(param_3 + 8) = uVar3;
LAB_0011a624:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<double>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<double>::ptrcall
          (MethodBindTRC<double> *this,Object *param_1,void **param_2,void *param_3)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  undefined8 uVar3;
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
      goto LAB_0011a7d3;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar3 = (*pcVar1)(param_1 + *(long *)(this + 0x60));
  *(undefined8 *)param_3 = uVar3;
LAB_0011a7d3:
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
      _err_print_error(&_LC48,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0011aa00;
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
LAB_0011aa00:
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
      goto LAB_0011ac14;
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
LAB_0011ac14:
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
      goto LAB_0011adc3;
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
LAB_0011adc3:
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
      _err_print_error(&_LC48,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0011aff0;
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
LAB_0011aff0:
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
      goto LAB_0011b202;
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
LAB_0011b202:
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
      goto LAB_0011b3b1;
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
LAB_0011b3b1:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<AABB const&>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<AABB_const&>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

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
      goto LAB_0011b6f1;
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
                    /* WARNING: Could not recover jumptable at 0x0011b57d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined8 *)(*(long *)param_3 + 8));
    return;
  }
LAB_0011b6f1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<AABB const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<AABB_const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_0011b8d1;
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
                    /* WARNING: Could not recover jumptable at 0x0011b759. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3);
    return;
  }
LAB_0011b8d1:
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
      goto LAB_0011bab9;
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
                    /* WARNING: Could not recover jumptable at 0x0011b942. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(auVar2._0_8_,(long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_0011bab9:
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
      goto LAB_0011bc99;
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
                    /* WARNING: Could not recover jumptable at 0x0011bb21. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(auVar2._0_8_,(long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_0011bc99:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<double>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<double>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

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
      goto LAB_0011be71;
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
                    /* WARNING: Could not recover jumptable at 0x0011bcfe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              (*(undefined8 *)(*(long *)param_3 + 8),
               (long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_0011be71:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<double>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<double>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_0011c051;
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
                    /* WARNING: Could not recover jumptable at 0x0011bedd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(**param_3,(long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_0011c051:
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
      goto LAB_0011c231;
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
                    /* WARNING: Could not recover jumptable at 0x0011c0bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8));
    return;
  }
LAB_0011c231:
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
      goto LAB_0011c411;
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
                    /* WARNING: Could not recover jumptable at 0x0011c29b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_0011c411:
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
      goto LAB_0011c5f1;
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
                    /* WARNING: Could not recover jumptable at 0x0011c47d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined1 *)(*(long *)param_3 + 8));
    return;
  }
LAB_0011c5f1:
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
      goto LAB_0011c7d9;
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
                    /* WARNING: Could not recover jumptable at 0x0011c662. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3 != '\0');
    return;
  }
LAB_0011c7d9:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  long *plVar3;
  undefined4 in_register_00000014;
  long *plVar4;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  plVar4 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar4 != (long *)0x0) && (plVar4[1] != 0)) && (*(char *)(plVar4[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (plVar4[1] == 0) {
      plVar3 = (long *)plVar4[0x23];
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*plVar4 + 0x40))(plVar4);
      }
    }
    else {
      plVar3 = (long *)(plVar4[1] + 0x20);
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
      _err_print_error(&_LC48,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011c900;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
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
      (*(code *)pVVar2)();
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
LAB_0011c900:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

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
      local_40 = 0x35;
      local_50 = 0;
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
      goto LAB_0011cc7f;
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
                    /* WARNING: Could not recover jumptable at 0x0011cb26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_0011cc7f:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0011ce3f;
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
                    /* WARNING: Could not recover jumptable at 0x0011cce6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_0011ce3f:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Node*>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<Node*>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

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
      goto LAB_0011d021;
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
                    /* WARNING: Could not recover jumptable at 0x0011cead. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined8 *)(*(long *)param_3 + 0x10));
    return;
  }
LAB_0011d021:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Node*>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Node*>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_0011d209;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
                    /* WARNING: Load size is inaccurate */
  plVar1 = *param_3;
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (plVar1 != (long *)0x0) {
    plVar1 = (long *)*plVar1;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0011d091. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),plVar1);
    return;
  }
LAB_0011d209:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<Skin>>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<Ref<Skin>>::call
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
      local_58 = (Object *)0x1167b8;
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC48,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0011d320;
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
LAB_0011d320:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<Skin>>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Ref<Skin>>::ptrcall
          (MethodBindTRC<Ref<Skin>> *this,Object *param_1,void **param_2,void *param_3)

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
      local_48 = (Object *)0x1167b8;
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
      goto LAB_0011d5a6;
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
    if (pOVar5 == (Object *)0x0) goto LAB_0011d5a6;
    *(undefined8 *)param_3 = 0;
    goto LAB_0011d5e9;
  }
  pOVar3 = (Object *)__dynamic_cast(local_48,&Object::typeinfo,&RefCounted::typeinfo,0);
                    /* WARNING: Load size is inaccurate */
  pOVar5 = *param_3;
  if (pOVar5 != pOVar3) {
    *(Object **)param_3 = pOVar3;
    if (pOVar3 == (Object *)0x0) {
      if (pOVar5 != (Object *)0x0) goto LAB_0011d5e9;
    }
    else {
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        *(undefined8 *)param_3 = 0;
      }
      if (pOVar5 != (Object *)0x0) {
LAB_0011d5e9:
        cVar1 = RefCounted::unreference();
        if (cVar1 != '\0') {
          cVar1 = predelete_handler(pOVar5);
          if (cVar1 != '\0') {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
        }
      }
      if (local_48 == (Object *)0x0) goto LAB_0011d5a6;
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
LAB_0011d5a6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<Skin> const&>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<Ref<Skin>const&>::validated_call
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
      local_58 = (Object *)0x1167b8;
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
      goto LAB_0011d8a8;
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
LAB_0011d866:
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
      pOVar4 = (Object *)__dynamic_cast(pOVar4,&Object::typeinfo,&Skin::typeinfo,0);
      if (pOVar2 != pOVar4) {
        local_58 = pOVar4;
        if (pOVar4 != (Object *)0x0) {
          cVar3 = RefCounted::reference();
          if (cVar3 == '\0') {
            local_58 = (Object *)0x0;
          }
        }
        if (pOVar2 != (Object *)0x0) goto LAB_0011d866;
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
LAB_0011d8a8:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<Skin> const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Ref<Skin>const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      local_48 = (Object *)0x1167b8;
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
      goto LAB_0011db6c;
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
LAB_0011db48:
    local_48 = (Object *)0x0;
  }
  else {
    cVar3 = RefCounted::init_ref();
    if (cVar3 == '\0') goto LAB_0011db48;
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
LAB_0011db6c:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<Mesh>, int>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Ref<Mesh>,int>::ptrcall
          (MethodBindTRC<Ref<Mesh>,int> *this,Object *param_1,void **param_2,void *param_3)

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
      local_48 = (Object *)0x1167b8;
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
      goto LAB_0011ddd9;
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
  (*pcVar2)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),**param_2);
  if (local_48 == (Object *)0x0) {
                    /* WARNING: Load size is inaccurate */
    pOVar5 = *param_3;
    if (pOVar5 == (Object *)0x0) goto LAB_0011ddd9;
    *(undefined8 *)param_3 = 0;
    goto LAB_0011de21;
  }
  pOVar3 = (Object *)__dynamic_cast(local_48,&Object::typeinfo,&RefCounted::typeinfo,0);
                    /* WARNING: Load size is inaccurate */
  pOVar5 = *param_3;
  if (pOVar5 != pOVar3) {
    *(Object **)param_3 = pOVar3;
    if (pOVar3 == (Object *)0x0) {
      if (pOVar5 != (Object *)0x0) goto LAB_0011de21;
    }
    else {
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        *(undefined8 *)param_3 = 0;
      }
      if (pOVar5 != (Object *)0x0) {
LAB_0011de21:
        cVar1 = RefCounted::unreference();
        if (cVar1 != '\0') {
          cVar1 = predelete_handler(pOVar5);
          if (cVar1 != '\0') {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
        }
      }
      if (local_48 == (Object *)0x0) goto LAB_0011ddd9;
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
LAB_0011ddd9:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, Ref<Mesh> const&>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<int,Ref<Mesh>const&>::validated_call
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
      local_68 = (Object *)0x1167b8;
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
      goto LAB_0011e109;
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
LAB_0011e0c0:
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
      pOVar4 = (Object *)__dynamic_cast(pOVar4,&Object::typeinfo,&Mesh::typeinfo,0);
      if (pOVar2 != pOVar4) {
        local_68 = pOVar4;
        if (pOVar4 != (Object *)0x0) {
          cVar3 = RefCounted::reference();
          if (cVar3 == '\0') {
            local_68 = (Object *)0x0;
          }
        }
        if (pOVar2 != (Object *)0x0) goto LAB_0011e0c0;
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
LAB_0011e109:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, Ref<Mesh> const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<int,Ref<Mesh>const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      local_48 = (Object *)0x1167b8;
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
      goto LAB_0011e3b8;
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
LAB_0011e38d:
    local_48 = (Object *)0x0;
  }
  else {
    cVar3 = RefCounted::init_ref();
    if (cVar3 == '\0') goto LAB_0011e38d;
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
LAB_0011e3b8:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<Material>>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Ref<Material>>::ptrcall
          (MethodBindTRC<Ref<Material>> *this,Object *param_1,void **param_2,void *param_3)

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
      local_48 = (Object *)0x1167b8;
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
      goto LAB_0011e606;
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
    if (pOVar5 == (Object *)0x0) goto LAB_0011e606;
    *(undefined8 *)param_3 = 0;
    goto LAB_0011e649;
  }
  pOVar3 = (Object *)__dynamic_cast(local_48,&Object::typeinfo,&RefCounted::typeinfo,0);
                    /* WARNING: Load size is inaccurate */
  pOVar5 = *param_3;
  if (pOVar5 != pOVar3) {
    *(Object **)param_3 = pOVar3;
    if (pOVar3 == (Object *)0x0) {
      if (pOVar5 != (Object *)0x0) goto LAB_0011e649;
    }
    else {
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        *(undefined8 *)param_3 = 0;
      }
      if (pOVar5 != (Object *)0x0) {
LAB_0011e649:
        cVar1 = RefCounted::unreference();
        if (cVar1 != '\0') {
          cVar1 = predelete_handler(pOVar5);
          if (cVar1 != '\0') {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
        }
      }
      if (local_48 == (Object *)0x0) goto LAB_0011e606;
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
LAB_0011e606:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<Material> const&>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<Ref<Material>const&>::validated_call
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
      local_58 = (Object *)0x1167b8;
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
      goto LAB_0011e908;
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
LAB_0011e8c6:
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
      pOVar4 = (Object *)__dynamic_cast(pOVar4,&Object::typeinfo,&Material::typeinfo,0);
      if (pOVar2 != pOVar4) {
        local_58 = pOVar4;
        if (pOVar4 != (Object *)0x0) {
          cVar3 = RefCounted::reference();
          if (cVar3 == '\0') {
            local_58 = (Object *)0x0;
          }
        }
        if (pOVar2 != (Object *)0x0) goto LAB_0011e8c6;
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
LAB_0011e908:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<Material> const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Ref<Material>const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      local_48 = (Object *)0x1167b8;
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
      goto LAB_0011ebcc;
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
LAB_0011eba8:
    local_48 = (Object *)0x0;
  }
  else {
    cVar3 = RefCounted::init_ref();
    if (cVar3 == '\0') goto LAB_0011eba8;
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
LAB_0011ebcc:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Node*>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<Node*>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  code *pcVar2;
  undefined8 uVar3;
  char cVar4;
  undefined4 uVar5;
  Object *pOVar6;
  long *plVar7;
  Object *pOVar8;
  long lVar9;
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
  long local_40;
  
  plVar11 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar11 != (long *)0x0) && (plVar11[1] != 0)) && (*(char *)(plVar11[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar11[1] == 0) {
      plVar7 = (long *)plVar11[0x23];
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)(**(code **)(*plVar11 + 0x40))(plVar11);
      }
    }
    else {
      plVar7 = (long *)(plVar11[1] + 0x20);
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
      _err_print_error(&_LC48,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0011eea0;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar13 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (1 < in_R8D) {
    uVar5 = 3;
LAB_0011ee95:
    *in_R9 = uVar5;
    in_R9[2] = 1;
    goto LAB_0011eea0;
  }
  pVVar12 = param_2[5];
  if (pVVar12 == (Variant *)0x0) {
    if (in_R8D != 1) goto LAB_0011eef0;
LAB_0011eee0:
    pVVar12 = *(Variant **)param_4;
  }
  else {
    lVar9 = *(long *)(pVVar12 + -8);
    if ((int)lVar9 < (int)(in_R8D ^ 1)) {
LAB_0011eef0:
      uVar5 = 4;
      goto LAB_0011ee95;
    }
    if (in_R8D == 1) goto LAB_0011eee0;
    lVar10 = (long)((int)lVar9 + -1);
    if (lVar9 <= lVar10) {
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,lVar10,lVar9,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    pVVar12 = pVVar12 + lVar10 * 0x18;
  }
  *in_R9 = 0;
  if (((ulong)pVVar13 & 1) != 0) {
    pVVar13 = *(Variant **)(pVVar13 + *(long *)((long)plVar11 + (long)pVVar1) + -1);
  }
  cVar4 = Variant::can_convert_strict(*(undefined4 *)pVVar12,0x18);
  if (cVar4 == '\0') {
LAB_0011ee46:
    uVar3 = _LC249;
    *in_R9 = 2;
    *(undefined8 *)(in_R9 + 1) = uVar3;
  }
  else {
    pOVar6 = Variant::operator_cast_to_Object_(pVVar12);
    pOVar8 = Variant::operator_cast_to_Object_(pVVar12);
    if (((pOVar8 == (Object *)0x0) ||
        (lVar9 = __dynamic_cast(pOVar8,&Object::typeinfo,&Node::typeinfo,0), lVar9 == 0)) &&
       (pOVar6 != (Object *)0x0)) goto LAB_0011ee46;
  }
  pOVar6 = Variant::operator_cast_to_Object_(pVVar12);
  if (pOVar6 != (Object *)0x0) {
    pOVar6 = (Object *)__dynamic_cast(pOVar6,&Object::typeinfo,&Node::typeinfo,0);
  }
  (*(code *)pVVar13)((Variant *)((long)plVar11 + (long)pVVar1),pOVar6);
LAB_0011eea0:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindT<Transform3D const&, Vector3 const&, Color const&, Color const&, unsigned
   int>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<Transform3D_const&,Vector3_const&,Color_const&,Color_const&,unsigned_int>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  uint uVar6;
  undefined4 uVar7;
  long lVar8;
  long *plVar9;
  int iVar10;
  undefined4 in_register_00000014;
  long *plVar11;
  Variant *pVVar12;
  long lVar13;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar14;
  long in_FS_OFFSET;
  long local_118;
  undefined8 local_110;
  char *local_108;
  undefined8 local_100;
  undefined8 local_ec;
  undefined8 local_e0;
  undefined8 local_d4;
  undefined8 local_c8 [2];
  undefined8 local_b8 [2];
  Variant *local_a8 [6];
  undefined8 local_78 [7];
  long local_40;
  
  plVar11 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar11 != (long *)0x0) && (plVar11[1] != 0)) && (*(char *)(plVar11[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_108,(StringName *)(param_2 + 3));
    if (plVar11[1] == 0) {
      plVar9 = (long *)plVar11[0x23];
      if (plVar9 == (long *)0x0) {
        plVar9 = (long *)(**(code **)(*plVar11 + 0x40))();
      }
    }
    else {
      plVar9 = (long *)(plVar11[1] + 0x20);
    }
    if (local_108 == (char *)*plVar9) {
      if ((StringName::configured != '\0') && (local_108 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_108 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_110 = 0;
      local_100 = 0x35;
      String::parse_latin1((StrRange *)&local_110);
      vformat<StringName>((StringName *)&local_108,(StrRange *)&local_110,&local_118);
      _err_print_error(&_LC48,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_108,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
      if ((StringName::configured != '\0') && (local_118 != 0)) {
        StringName::unref();
      }
      goto LAB_0011f3a2;
    }
    if ((StringName::configured != '\0') && (local_108 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar14 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 6) {
    pVVar2 = param_2[5];
    if (pVVar2 == (Variant *)0x0) {
      iVar10 = 0;
      lVar13 = 0;
    }
    else {
      lVar13 = *(long *)(pVVar2 + -8);
      iVar10 = (int)lVar13;
    }
    if ((int)(5 - in_R8D) <= iVar10) {
      lVar8 = 0;
      do {
        if ((int)lVar8 < (int)in_R8D) {
          pVVar12 = *(Variant **)(param_4 + lVar8 * 8);
        }
        else {
          uVar6 = iVar10 + -5 + (int)lVar8;
          if (lVar13 <= (int)uVar6) {
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,(long)(int)uVar6,lVar13,"p_index",
                       "size()","",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          pVVar12 = pVVar2 + (ulong)uVar6 * 0x18;
        }
        local_a8[lVar8] = pVVar12;
        lVar8 = lVar8 + 1;
      } while (lVar8 != 5);
      *in_R9 = 0;
      if (((ulong)pVVar14 & 1) != 0) {
        pVVar14 = *(Variant **)(pVVar14 + *(long *)((long)plVar11 + (long)pVVar1) + -1);
      }
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_a8[4],2);
      uVar4 = _LC250;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      uVar6 = Variant::operator_cast_to_unsigned_int(local_a8[4]);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_a8[3],0x14);
      uVar4 = _LC251;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      local_c8[0] = Variant::operator_cast_to_Color(local_a8[3]);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_a8[2],0x14);
      uVar4 = _LC252;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      local_b8[0] = Variant::operator_cast_to_Color(local_a8[2]);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_a8[1],9);
      uVar4 = _LC253;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      local_ec = Variant::operator_cast_to_Vector3(local_a8[1]);
      local_e0 = local_ec;
      local_d4 = local_ec;
      local_78[0] = local_ec;
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_a8[0],0x12);
      uVar4 = _LC254;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      Variant::operator_cast_to_Transform3D((Variant *)local_78);
      (*(code *)pVVar14)((Variant *)((long)plVar11 + (long)pVVar1),(Variant *)local_78,&local_ec,
                         local_b8,local_c8,uVar6);
      goto LAB_0011f3a2;
    }
    uVar7 = 4;
  }
  else {
    uVar7 = 3;
  }
  *in_R9 = uVar7;
  in_R9[2] = 5;
LAB_0011f3a2:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
      _err_print_error(&_LC48,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011f6c0;
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
      if (in_R8D != 1) goto LAB_0011f710;
LAB_0011f700:
      pVVar10 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar10 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0011f710:
        uVar6 = 4;
        goto LAB_0011f6b5;
      }
      if (in_R8D == 1) goto LAB_0011f700;
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
    uVar4 = _LC255;
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
LAB_0011f6b5:
    *in_R9 = uVar6;
    in_R9[2] = 1;
  }
LAB_0011f6c0:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<Skin> const&>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<Ref<Skin>const&>::call
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
      local_48 = (Object *)0x1167b8;
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC48,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011fa70;
    }
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pVVar13 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (1 < in_R8D) {
    uVar7 = 3;
LAB_0011fa65:
    *in_R9 = uVar7;
    in_R9[2] = 1;
    goto LAB_0011fa70;
  }
  pVVar12 = param_2[5];
  if (pVVar12 == (Variant *)0x0) {
    if (in_R8D != 1) goto LAB_0011fac0;
LAB_0011fab0:
    pVVar12 = *(Variant **)param_4;
  }
  else {
    lVar2 = *(long *)(pVVar12 + -8);
    if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0011fac0:
      uVar7 = 4;
      goto LAB_0011fa65;
    }
    if (in_R8D == 1) goto LAB_0011fab0;
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
  uVar4 = _LC249;
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
LAB_0011fbdd:
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
      pOVar8 = (Object *)__dynamic_cast(pOVar8,&Object::typeinfo,&Skin::typeinfo,0);
      if (pOVar5 != pOVar8) {
        local_48 = pOVar8;
        if (pOVar8 != (Object *)0x0) {
          cVar6 = RefCounted::reference();
          if (cVar6 == '\0') {
            local_48 = (Object *)0x0;
          }
        }
        if (pOVar5 != (Object *)0x0) goto LAB_0011fbdd;
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
LAB_0011fa70:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<Mesh>, int>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<Ref<Mesh>,int>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  Object *pOVar5;
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
  undefined8 local_60;
  Object *local_58;
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
    if (local_58 == (Object *)*plVar9) {
      if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = (Object *)0x1167b8;
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC48,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0011fe80;
    }
    if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pVVar13 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar12 = param_2[5];
    if (pVVar12 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_0011fec0;
LAB_0011feb0:
      pVVar12 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar12 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0011fec0:
        uVar8 = 4;
        goto LAB_0011fe75;
      }
      if (in_R8D == 1) goto LAB_0011feb0;
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
    uVar4 = _LC256;
    if (cVar6 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    iVar7 = Variant::operator_cast_to_int(pVVar12);
    (*(code *)pVVar13)(&local_58,(Variant *)((long)plVar11 + (long)pVVar1),iVar7);
    Variant::Variant((Variant *)local_48,local_58);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_48[0];
    *(undefined8 *)(param_1 + 8) = local_40;
    *(undefined8 *)(param_1 + 0x10) = uStack_38;
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
  }
  else {
    uVar8 = 3;
LAB_0011fe75:
    *in_R9 = uVar8;
    in_R9[2] = 1;
  }
LAB_0011fe80:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, Ref<Mesh> const&>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindT<int,Ref<Mesh>const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  Object *pOVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  Object *pOVar9;
  long *plVar10;
  long lVar11;
  undefined4 in_register_00000014;
  long *plVar12;
  Variant *this;
  int iVar13;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar14;
  Variant *pVVar15;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  Object *local_58;
  undefined8 local_50;
  long local_40;
  
  plVar12 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
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
    if (local_58 == (Object *)*plVar10) {
      if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = (Object *)0x1167b8;
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC48,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_001202b0;
    }
    if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pVVar14 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (2 < in_R8D) {
    uVar8 = 3;
LAB_001202a5:
    *in_R9 = uVar8;
    in_R9[2] = 2;
    goto LAB_001202b0;
  }
  pVVar15 = param_2[5];
  iVar7 = 2 - in_R8D;
  if (pVVar15 == (Variant *)0x0) {
    if (iVar7 != 0) goto LAB_001202e8;
    this = *(Variant **)param_4;
LAB_001202fd:
    pVVar15 = *(Variant **)(param_4 + 8);
  }
  else {
    lVar2 = *(long *)(pVVar15 + -8);
    iVar13 = (int)lVar2;
    if (iVar13 < iVar7) {
LAB_001202e8:
      uVar8 = 4;
      goto LAB_001202a5;
    }
    if (in_R8D == 0) {
      lVar11 = (long)(iVar13 + -2);
      if (lVar2 <= lVar11) goto LAB_00120420;
      this = pVVar15 + lVar11 * 0x18;
    }
    else {
      this = *(Variant **)param_4;
      if (in_R8D == 2) goto LAB_001202fd;
    }
    lVar11 = (long)(int)((in_R8D ^ 1) + (iVar13 - iVar7));
    if (lVar2 <= lVar11) {
LAB_00120420:
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,lVar11,lVar2,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    pVVar15 = pVVar15 + lVar11 * 0x18;
  }
  *in_R9 = 0;
  if (((ulong)pVVar14 & 1) != 0) {
    pVVar14 = *(Variant **)(pVVar14 + *(long *)((long)plVar12 + (long)pVVar1) + -1);
  }
  cVar6 = Variant::can_convert_strict(*(undefined4 *)pVVar15);
  uVar4 = _LC257;
  if (cVar6 == '\0') {
    *in_R9 = 2;
    *(undefined8 *)(in_R9 + 1) = uVar4;
  }
  local_58 = (Object *)0x0;
  pOVar9 = (Object *)Variant::get_validated_object();
  pOVar5 = local_58;
  if (pOVar9 != local_58) {
    if (pOVar9 == (Object *)0x0) {
      if (local_58 != (Object *)0x0) {
        local_58 = (Object *)0x0;
LAB_00120219:
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
      pOVar9 = (Object *)__dynamic_cast(pOVar9,&Object::typeinfo,&Mesh::typeinfo,0);
      if (pOVar5 != pOVar9) {
        local_58 = pOVar9;
        if (pOVar9 != (Object *)0x0) {
          cVar6 = RefCounted::reference();
          if (cVar6 == '\0') {
            local_58 = (Object *)0x0;
          }
        }
        if (pOVar5 != (Object *)0x0) goto LAB_00120219;
      }
    }
  }
  cVar6 = Variant::can_convert_strict(*(undefined4 *)this,2);
  uVar4 = _LC256;
  if (cVar6 == '\0') {
    *in_R9 = 2;
    *(undefined8 *)(in_R9 + 1) = uVar4;
  }
  iVar7 = Variant::operator_cast_to_int(this);
  (*(code *)pVVar14)((Variant *)((long)plVar12 + (long)pVVar1),iVar7,&local_58);
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
LAB_001202b0:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<Material> const&>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindT<Ref<Material>const&>::call
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
      local_48 = (Object *)0x1167b8;
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC48,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_001206f0;
    }
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pVVar13 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (1 < in_R8D) {
    uVar7 = 3;
LAB_001206e5:
    *in_R9 = uVar7;
    in_R9[2] = 1;
    goto LAB_001206f0;
  }
  pVVar12 = param_2[5];
  if (pVVar12 == (Variant *)0x0) {
    if (in_R8D != 1) goto LAB_00120740;
LAB_00120730:
    pVVar12 = *(Variant **)param_4;
  }
  else {
    lVar2 = *(long *)(pVVar12 + -8);
    if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00120740:
      uVar7 = 4;
      goto LAB_001206e5;
    }
    if (in_R8D == 1) goto LAB_00120730;
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
  uVar4 = _LC249;
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
LAB_0012085d:
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
      pOVar8 = (Object *)__dynamic_cast(pOVar8,&Object::typeinfo,&Material::typeinfo,0);
      if (pOVar5 != pOVar8) {
        local_48 = pOVar8;
        if (pOVar8 != (Object *)0x0) {
          cVar6 = RefCounted::reference();
          if (cVar6 == '\0') {
            local_48 = (Object *)0x0;
          }
        }
        if (pOVar5 != (Object *)0x0) goto LAB_0012085d;
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
LAB_001206f0:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<Skin>>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<Ref<Skin>>::validated_call
          (MethodBindTRC<Ref<Skin>> *this,Object *param_1,Variant **param_2,Variant *param_3)

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
      local_48 = (Variant **)0x1167b8;
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
      goto LAB_00120a06;
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
LAB_00120a06:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<Mesh>, int>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<Ref<Mesh>,int>::validated_call
          (MethodBindTRC<Ref<Mesh>,int> *this,Object *param_1,Variant **param_2,Variant *param_3)

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
      goto LAB_00120c3c;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar3)(&local_50,param_1 + *(long *)(this + 0x60),*(undefined4 *)(*param_2 + 8));
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
LAB_00120c3c:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<Material>>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<Ref<Material>>::validated_call
          (MethodBindTRC<Ref<Material>> *this,Object *param_1,Variant **param_2,Variant *param_3)

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
      local_48 = (Variant **)0x1167b8;
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
      goto LAB_00120e86;
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
LAB_00120e86:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass,
   GPUParticles3D::TransformAlign>(__UnexistingClass*, void
   (__UnexistingClass::*)(GPUParticles3D::TransformAlign), Variant const**, int,
   Callable::CallError&, Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,GPUParticles3D::TransformAlign>
               (__UnexistingClass *param_1,_func_void_TransformAlign *param_2,Variant **param_3,
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
    goto LAB_0012112d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_00121190;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_00121190:
      uVar6 = 4;
LAB_0012112d:
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
      goto LAB_001210ab;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_001210ab:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_TransformAlign **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
  uVar4 = _LC256;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_long(this);
                    /* WARNING: Could not recover jumptable at 0x00121106. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)((char)(param_1 + (long)param_3));
  return;
}



/* MethodBindT<GPUParticles3D::TransformAlign>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindT<GPUParticles3D::TransformAlign>::call
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
      _err_print_error(&_LC48,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_001211f6;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,GPUParticles3D::TransformAlign>
            (p_Var2,(_func_void_TransformAlign *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,
             in_R8,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_001211f6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, GPUParticles3D::DrawOrder>(__UnexistingClass*,
   void (__UnexistingClass::*)(GPUParticles3D::DrawOrder), Variant const**, int,
   Callable::CallError&, Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,GPUParticles3D::DrawOrder>
               (__UnexistingClass *param_1,_func_void_DrawOrder *param_2,Variant **param_3,
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
    goto LAB_001214bd;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_00121520;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_00121520:
      uVar6 = 4;
LAB_001214bd:
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
      goto LAB_0012143b;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0012143b:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_DrawOrder **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
  uVar4 = _LC256;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_long(this);
                    /* WARNING: Could not recover jumptable at 0x00121496. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)((char)(param_1 + (long)param_3));
  return;
}



/* MethodBindT<GPUParticles3D::DrawOrder>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindT<GPUParticles3D::DrawOrder>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  char *pcVar1;
  long *plVar2;
  undefined4 in_register_00000014;
  __UnexistingClass *p_Var3;
  CallError *in_R8;
  Vector *in_R9;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  p_Var3 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var3 != (__UnexistingClass *)0x0) && (*(long *)(p_Var3 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var3 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var3 + 8) == 0) {
      plVar2 = *(long **)(p_Var3 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)p_Var3 + 0x40))(p_Var3);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(p_Var3 + 8) + 0x20);
    }
    in_R8 = (CallError *)((ulong)in_R8 & 0xffffffff);
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
      _err_print_error(&_LC48,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      pcVar1 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar2 = (long *)(local_48 + -0x10);
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar1 + -0x10,false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_00121586;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,GPUParticles3D::DrawOrder>
            (p_Var3,(_func_void_DrawOrder *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8
             ,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_00121586:
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
    goto LAB_0012186d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_001218d0;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_001218d0:
      uVar6 = 4;
LAB_0012186d:
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
      goto LAB_001217eb;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_001217eb:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_uint **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
  uVar4 = _LC256;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_unsigned_int(this);
                    /* WARNING: Could not recover jumptable at 0x00121846. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)((uint)(param_1 + (long)param_3));
  return;
}



/* MethodBindT<unsigned int>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<unsigned_int>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  char *pcVar1;
  long *plVar2;
  undefined4 in_register_00000014;
  __UnexistingClass *p_Var3;
  CallError *in_R8;
  Vector *in_R9;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  p_Var3 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var3 != (__UnexistingClass *)0x0) && (*(long *)(p_Var3 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var3 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var3 + 8) == 0) {
      plVar2 = *(long **)(p_Var3 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)p_Var3 + 0x40))(p_Var3);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(p_Var3 + 8) + 0x20);
    }
    in_R8 = (CallError *)((ulong)in_R8 & 0xffffffff);
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
      _err_print_error(&_LC48,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      pcVar1 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar2 = (long *)(local_48 + -0x10);
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar1 + -0x10,false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_00121936;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,unsigned_int>
            (p_Var3,(_func_void_uint *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8,
             in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_00121936:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, AABB const&>(__UnexistingClass*, void
   (__UnexistingClass::*)(AABB const&), Variant const**, int, Callable::CallError&, Vector<Variant>
   const&) */

void call_with_variant_args_dv<__UnexistingClass,AABB_const&>
               (__UnexistingClass *param_1,_func_void_AABB_ptr *param_2,Variant **param_3,
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
  undefined4 *puVar9;
  long in_FS_OFFSET;
  long in_stack_00000008;
  Variant aVStack_48 [24];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar8 = (uint)param_5;
  if (uVar8 < 2) {
    lVar1 = *(long *)(in_stack_00000008 + 8);
    if (lVar1 == 0) {
      if (uVar8 != 1) goto LAB_00121c98;
LAB_00121c18:
      puVar9 = *(undefined4 **)CONCAT44(in_register_0000000c,param_4);
    }
    else {
      lVar2 = *(long *)(lVar1 + -8);
      if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_00121c98:
        uVar6 = 4;
        goto LAB_00121c25;
      }
      if (uVar8 == 1) goto LAB_00121c18;
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
      puVar9 = (undefined4 *)(lVar1 + lVar7 * 0x18);
    }
    *(undefined4 *)param_6 = 0;
    if (((ulong)param_2 & 1) != 0) {
      param_2 = *(_func_void_AABB_ptr **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
    }
    cVar5 = Variant::can_convert_strict(*puVar9,0x10);
    uVar4 = _LC258;
    if (cVar5 == '\0') {
      *(undefined4 *)param_6 = 2;
      *(undefined8 *)(param_6 + 4) = uVar4;
    }
    Variant::operator_cast_to_AABB(aVStack_48);
    (*param_2)((AABB *)(param_1 + (long)param_3));
  }
  else {
    uVar6 = 3;
LAB_00121c25:
    *(undefined4 *)param_6 = uVar6;
    *(undefined4 *)(param_6 + 8) = 1;
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindT<AABB const&>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<AABB_const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long lVar1;
  long *plVar2;
  undefined4 in_register_00000014;
  __UnexistingClass *p_Var3;
  CallError *in_R8;
  Vector *in_R9;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  p_Var3 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var3 != (__UnexistingClass *)0x0) && (*(long *)(p_Var3 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var3 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var3 + 8) == 0) {
      plVar2 = *(long **)(p_Var3 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)p_Var3 + 0x40))(p_Var3);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(p_Var3 + 8) + 0x20);
    }
    in_R8 = (CallError *)((ulong)in_R8 & 0xffffffff);
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
      _err_print_error(&_LC48,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar2 = (long *)(local_50 + -0x10);
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_00121d06;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,AABB_const&>
            (p_Var3,(_func_void_AABB_ptr *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8,
             in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_00121d06:
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
    goto LAB_00121fed;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_00122050;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_00122050:
      uVar6 = 4;
LAB_00121fed:
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
      goto LAB_00121f6b;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_00121f6b:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_float **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,3);
  uVar4 = _LC259;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  fVar9 = Variant::operator_cast_to_float(this);
                    /* WARNING: Could not recover jumptable at 0x00121fc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)(fVar9);
  return;
}



/* MethodBindT<float>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<float>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long lVar1;
  long *plVar2;
  undefined4 in_register_00000014;
  __UnexistingClass *p_Var3;
  CallError *in_R8;
  Vector *in_R9;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  p_Var3 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var3 != (__UnexistingClass *)0x0) && (*(long *)(p_Var3 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var3 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var3 + 8) == 0) {
      plVar2 = *(long **)(p_Var3 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)p_Var3 + 0x40))(p_Var3);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(p_Var3 + 8) + 0x20);
    }
    in_R8 = (CallError *)((ulong)in_R8 & 0xffffffff);
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
      _err_print_error(&_LC48,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar2 = (long *)(local_50 + -0x10);
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_001220b6;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,float>
            (p_Var3,(_func_void_float *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8,
             in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_001220b6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, double>(__UnexistingClass*, void
   (__UnexistingClass::*)(double), Variant const**, int, Callable::CallError&, Vector<Variant>
   const&) */

void call_with_variant_args_dv<__UnexistingClass,double>
               (__UnexistingClass *param_1,_func_void_double *param_2,Variant **param_3,int param_4,
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
  double dVar9;
  long in_stack_00000008;
  
  uVar8 = (uint)param_5;
  if (1 < uVar8) {
    uVar6 = 3;
    goto LAB_0012239d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_00122400;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_00122400:
      uVar6 = 4;
LAB_0012239d:
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
      goto LAB_0012231b;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0012231b:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_double **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,3);
  uVar4 = _LC259;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  dVar9 = Variant::operator_cast_to_double(this);
                    /* WARNING: Could not recover jumptable at 0x00122374. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)(dVar9);
  return;
}



/* MethodBindT<double>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<double>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

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
      _err_print_error(&_LC48,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_00122466;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,double>
            (p_Var2,(_func_void_double *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8,
             in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_00122466:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
    goto LAB_0012272d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_00122790;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_00122790:
      uVar6 = 4;
LAB_0012272d:
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
      goto LAB_001226ab;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_001226ab:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_int **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
  uVar4 = _LC256;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_int(this);
                    /* WARNING: Could not recover jumptable at 0x00122706. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)((int)(param_1 + (long)param_3));
  return;
}



/* MethodBindT<int>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<int>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long lVar1;
  long *plVar2;
  undefined4 in_register_00000014;
  __UnexistingClass *p_Var3;
  CallError *in_R8;
  Vector *in_R9;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  p_Var3 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var3 != (__UnexistingClass *)0x0) && (*(long *)(p_Var3 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var3 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var3 + 8) == 0) {
      plVar2 = *(long **)(p_Var3 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)p_Var3 + 0x40))(p_Var3);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(p_Var3 + 8) + 0x20);
    }
    in_R8 = (CallError *)((ulong)in_R8 & 0xffffffff);
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
      _err_print_error(&_LC48,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar2 = (long *)(local_50 + -0x10);
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_001227f6;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,int>
            (p_Var3,(_func_void_int *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8,in_R9
            );
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_001227f6:
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
    goto LAB_00122add;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_00122b40;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_00122b40:
      uVar6 = 4;
LAB_00122add:
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
      goto LAB_00122a5b;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_00122a5b:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_bool **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,1);
  uVar4 = _LC260;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_bool(this);
                    /* WARNING: Could not recover jumptable at 0x00122ab7. Too many branches */
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
      _err_print_error(&_LC48,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_00122ba6;
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
LAB_00122ba6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info_helper<Color const&>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<Color_const&>
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
  if (iVar5 != param_1) goto LAB_00122da9;
  local_88 = 0;
  local_90 = 0;
  local_78 = &_LC5;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_70._8_8_;
  local_70 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_90);
  local_98 = 0;
  local_78 = (undefined *)CONCAT44(local_78._4_4_,0x14);
  local_60 = 0;
  local_58 = 0;
  local_70 = (undefined1  [16])0x0;
  if (local_90 == 0) {
LAB_00122ea8:
    local_50 = 6;
    StringName::operator=((StringName *)(local_70 + 8),(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 6;
    if (local_60 != 0x11) goto LAB_00122ea8;
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
LAB_00122da9:
  *param_2 = iVar5 + 1;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* void call_get_argument_type_info<Transform3D const&, Vector3 const&, Color const&, Color const&,
   unsigned int>(int, PropertyInfo&) */

void call_get_argument_type_info<Transform3D_const&,Vector3_const&,Color_const&,Color_const&,unsigned_int>
               (int param_1,PropertyInfo *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  int local_94;
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
  local_94 = 0;
  if (param_1 == 0) {
    local_80 = 0;
    local_88 = 0;
    local_78 = &_LC5;
    local_70 = 0;
    String::parse_latin1((StrRange *)&local_88);
    uVar2 = 0x12;
  }
  else {
    local_94 = 1;
    if (param_1 != 1) goto LAB_00122ff5;
    local_80 = 0;
    local_88 = 0;
    local_78 = &_LC5;
    local_70 = 0;
    String::parse_latin1((StrRange *)&local_88);
    uVar2 = 9;
  }
  local_90 = 0;
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_78,uVar2,&local_90,0,(CowData<char32_t> *)&local_88,6,&local_80)
  ;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if ((StringName::configured != '\0') && (local_80 != 0)) {
    StringName::unref();
  }
  *(undefined4 *)param_2 = local_78._0_4_;
  if (*(long *)(param_2 + 8) != local_70) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_2 + 8));
    lVar1 = local_70;
    local_70 = 0;
    *(long *)(param_2 + 8) = lVar1;
  }
  if (*(long *)(param_2 + 0x10) != local_68) {
    StringName::unref();
    lVar1 = local_68;
    local_68 = 0;
    *(long *)(param_2 + 0x10) = lVar1;
  }
  *(undefined4 *)(param_2 + 0x18) = local_60;
  if (*(long *)(param_2 + 0x20) != local_58) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_2 + 0x20));
    lVar1 = local_58;
    local_58 = 0;
    *(long *)(param_2 + 0x20) = lVar1;
  }
  *(undefined4 *)(param_2 + 0x28) = local_50;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
LAB_00122ff5:
  local_94 = 2;
  call_get_argument_type_info_helper<Color_const&>(param_1,&local_94,param_2);
  call_get_argument_type_info_helper<Color_const&>(param_1,&local_94,param_2);
  if (param_1 == local_94) {
    local_80 = 0;
    local_88 = 0;
    local_78 = &_LC5;
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
    *(undefined4 *)param_2 = local_78._0_4_;
    if (*(long *)(param_2 + 8) != local_70) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_2 + 8));
      lVar1 = local_70;
      local_70 = 0;
      *(long *)(param_2 + 8) = lVar1;
    }
    if (*(long *)(param_2 + 0x10) != local_68) {
      StringName::unref();
      lVar1 = local_68;
      local_68 = 0;
      *(long *)(param_2 + 0x10) = lVar1;
    }
    *(undefined4 *)(param_2 + 0x18) = local_60;
    if (*(long *)(param_2 + 0x20) != local_58) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_2 + 0x20));
      lVar1 = local_58;
      local_58 = 0;
      *(long *)(param_2 + 0x20) = lVar1;
    }
    *(undefined4 *)(param_2 + 0x28) = local_50;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Transform3D const&, Vector3 const&, Color const&, Color const&, unsigned
   int>::_gen_argument_type_info(int) const */

PropertyInfo *
MethodBindT<Transform3D_const&,Vector3_const&,Color_const&,Color_const&,unsigned_int>::
_gen_argument_type_info(int param_1)

{
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar1;
  
  pPVar1 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  *(undefined4 *)pPVar1 = 0;
  *(undefined4 *)(pPVar1 + 0x18) = 0;
  *(undefined8 *)(pPVar1 + 0x20) = 0;
  *(undefined4 *)(pPVar1 + 0x28) = 6;
  *(undefined1 (*) [16])(pPVar1 + 8) = (undefined1  [16])0x0;
  call_get_argument_type_info<Transform3D_const&,Vector3_const&,Color_const&,Color_const&,unsigned_int>
            (in_EDX,pPVar1);
  return pPVar1;
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
/* MethodBindT<float>::~MethodBindT() */

void __thiscall MethodBindT<float>::~MethodBindT(MethodBindT<float> *this)

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
/* MethodBindT<Node*>::~MethodBindT() */

void __thiscall MethodBindT<Node*>::~MethodBindT(MethodBindT<Node*> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<GPUParticles3D::TransformAlign>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<GPUParticles3D::TransformAlign>::~MethodBindTRC
          (MethodBindTRC<GPUParticles3D::TransformAlign> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<GPUParticles3D::TransformAlign>::~MethodBindT() */

void __thiscall
MethodBindT<GPUParticles3D::TransformAlign>::~MethodBindT
          (MethodBindT<GPUParticles3D::TransformAlign> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<double>::~MethodBindTRC() */

void __thiscall MethodBindTRC<double>::~MethodBindTRC(MethodBindTRC<double> *this)

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
/* MethodBindT<double>::~MethodBindT() */

void __thiscall MethodBindT<double>::~MethodBindT(MethodBindT<double> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Transform3D const&, Vector3 const&, Color const&, Color const&, unsigned
   int>::~MethodBindT() */

void __thiscall
MethodBindT<Transform3D_const&,Vector3_const&,Color_const&,Color_const&,unsigned_int>::~MethodBindT
          (MethodBindT<Transform3D_const&,Vector3_const&,Color_const&,Color_const&,unsigned_int>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<NodePath>::~MethodBindTRC() */

void __thiscall MethodBindTRC<NodePath>::~MethodBindTRC(MethodBindTRC<NodePath> *this)

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
/* MethodBindTRC<AABB>::~MethodBindTRC() */

void __thiscall MethodBindTRC<AABB>::~MethodBindTRC(MethodBindTRC<AABB> *this)

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
/* MethodBindTRC<Ref<Skin>>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Ref<Skin>>::~MethodBindTRC(MethodBindTRC<Ref<Skin>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Ref<Skin> const&>::~MethodBindT() */

void __thiscall MethodBindT<Ref<Skin>const&>::~MethodBindT(MethodBindT<Ref<Skin>const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Ref<Mesh>, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Ref<Mesh>,int>::~MethodBindTRC(MethodBindTRC<Ref<Mesh>,int> *this)

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
/* MethodBindT<int, Ref<Mesh> const&>::~MethodBindT() */

void __thiscall
MethodBindT<int,Ref<Mesh>const&>::~MethodBindT(MethodBindT<int,Ref<Mesh>const&> *this)

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
/* MethodBindTRC<GPUParticles3D::DrawOrder>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<GPUParticles3D::DrawOrder>::~MethodBindTRC
          (MethodBindTRC<GPUParticles3D::DrawOrder> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<GPUParticles3D::DrawOrder>::~MethodBindT() */

void __thiscall
MethodBindT<GPUParticles3D::DrawOrder>::~MethodBindT(MethodBindT<GPUParticles3D::DrawOrder> *this)

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
/* MethodBindTRC<Ref<Material>>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Ref<Material>>::~MethodBindTRC(MethodBindTRC<Ref<Material>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Ref<Material> const&>::~MethodBindT() */

void __thiscall
MethodBindT<Ref<Material>const&>::~MethodBindT(MethodBindT<Ref<Material>const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<AABB const&>::~MethodBindT() */

void __thiscall MethodBindT<AABB_const&>::~MethodBindT(MethodBindT<AABB_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<Node3D, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Node3D,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Node3D,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<Node, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Node,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Node,void> *this)

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



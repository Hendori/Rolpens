/* GPUParticles2D::is_trail_enabled() const */GPUParticles2D GPUParticles2D::is_trail_enabled(GPUParticles2D *this) {
   return this[0x61c];
}
/* GPUParticles2D::get_trail_lifetime() const */undefined8 GPUParticles2D::get_trail_lifetime(GPUParticles2D *this) {
   return *(undefined8*)( this + 0x620 );
}
/* GPUParticles2D::get_collision_base_size() const */undefined4 GPUParticles2D::get_collision_base_size(GPUParticles2D *this) {
   return *(undefined4*)( this + 0x618 );
}
/* GPUParticles2D::is_emitting() const */GPUParticles2D GPUParticles2D::is_emitting(GPUParticles2D *this) {
   return this[0x588];
}
/* GPUParticles2D::get_amount() const */undefined4 GPUParticles2D::get_amount(GPUParticles2D *this) {
   return *(undefined4*)( this + 0x58c );
}
/* GPUParticles2D::get_lifetime() const */undefined8 GPUParticles2D::get_lifetime(GPUParticles2D *this) {
   return *(undefined8*)( this + 0x598 );
}
/* GPUParticles2D::get_trail_sections() const */undefined4 GPUParticles2D::get_trail_sections(GPUParticles2D *this) {
   return *(undefined4*)( this + 0x628 );
}
/* GPUParticles2D::get_trail_section_subdivisions() const */undefined4 GPUParticles2D::get_trail_section_subdivisions(GPUParticles2D *this) {
   return *(undefined4*)( this + 0x62c );
}
/* GPUParticles2D::get_one_shot() const */GPUParticles2D GPUParticles2D::get_one_shot(GPUParticles2D *this) {
   return this[0x58b];
}
/* GPUParticles2D::get_pre_process_time() const */undefined8 GPUParticles2D::get_pre_process_time(GPUParticles2D *this) {
   return *(undefined8*)( this + 0x5a0 );
}
/* GPUParticles2D::get_explosiveness_ratio() const */undefined4 GPUParticles2D::get_explosiveness_ratio(GPUParticles2D *this) {
   return *(undefined4*)( this + 0x5a8 );
}
/* GPUParticles2D::get_randomness_ratio() const */undefined4 GPUParticles2D::get_randomness_ratio(GPUParticles2D *this) {
   return *(undefined4*)( this + 0x5ac );
}
/* GPUParticles2D::get_visibility_rect() const */undefined1  [16] __thiscallGPUParticles2D::get_visibility_rect(GPUParticles2D *this) {
   return *(undefined1(*) [16])( this + 0x5b8 );
}
/* GPUParticles2D::get_use_local_coordinates() const */GPUParticles2D GPUParticles2D::get_use_local_coordinates(GPUParticles2D *this) {
   return this[0x5c8];
}
/* GPUParticles2D::get_speed_scale() const */undefined8 GPUParticles2D::get_speed_scale(GPUParticles2D *this) {
   return *(undefined8*)( this + 0x5b0 );
}
/* GPUParticles2D::get_draw_order() const */undefined4 GPUParticles2D::get_draw_order(GPUParticles2D *this) {
   return *(undefined4*)( this + 0x600 );
}
/* GPUParticles2D::get_fixed_fps() const */undefined4 GPUParticles2D::get_fixed_fps(GPUParticles2D *this) {
   return *(undefined4*)( this + 0x5cc );
}
/* GPUParticles2D::get_fractional_delta() const */GPUParticles2D GPUParticles2D::get_fractional_delta(GPUParticles2D *this) {
   return this[0x5d0];
}
/* GPUParticles2D::get_interpolate() const */GPUParticles2D GPUParticles2D::get_interpolate(GPUParticles2D *this) {
   return this[0x5d1];
}
/* GPUParticles2D::get_interp_to_end() const */undefined4 GPUParticles2D::get_interp_to_end(GPUParticles2D *this) {
   return *(undefined4*)( this + 0x5d4 );
}
/* GPUParticles2D::get_use_fixed_seed() const */GPUParticles2D GPUParticles2D::get_use_fixed_seed(GPUParticles2D *this) {
   return this[0x5f0];
}
/* GPUParticles2D::get_seed() const */undefined4 GPUParticles2D::get_seed(GPUParticles2D *this) {
   return *(undefined4*)( this + 0x5ec );
}
/* GPUParticles2D::get_amount_ratio() const */undefined4 GPUParticles2D::get_amount_ratio(GPUParticles2D *this) {
   return *(undefined4*)( this + 0x590 );
}
/* GPUParticles2D::set_one_shot(bool) */void GPUParticles2D::set_one_shot(GPUParticles2D *this, bool param_1) {
   long *plVar1;
   this[0x58b] = (GPUParticles2D)param_1;
   plVar1 = (long*)RenderingServer::get_singleton();
   ( **(code**)( *plVar1 + 0x7b0 ) )(plVar1, *(undefined8*)( this + 0x580 ), this[0x58b]);
   if (this[0x588] != (GPUParticles2D)0x0) {
      Node::set_process_internal(SUB81(this, 0));
      if (this[0x58b] != (GPUParticles2D)0x0) {
         return;
      }

      plVar1 = (long*)RenderingServer::get_singleton();
      ( **(code**)( *plVar1 + 0x848 ) )(plVar1, *(undefined8*)( this + 0x580 ));
   }

   if (this[0x58b] != (GPUParticles2D)0x0) {
      return;
   }

   Node::set_process_internal(SUB81(this, 0));
   return;
}
/* GPUParticles2D::set_pre_process_time(double) */void GPUParticles2D::set_pre_process_time(GPUParticles2D *this, double param_1) {
   long *plVar1;
   *(double*)( this + 0x5a0 ) = param_1;
   plVar1 = (long*)RenderingServer::get_singleton();
   /* WARNING: Could not recover jumptable at 0x00100242. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( **(code**)( *plVar1 + 0x7b8 ) )(*(undefined8*)( this + 0x5a0 ), plVar1, *(undefined8*)( this + 0x580 ));
   return;
}
/* GPUParticles2D::set_explosiveness_ratio(float) */void GPUParticles2D::set_explosiveness_ratio(GPUParticles2D *this, float param_1) {
   long *plVar1;
   *(float*)( this + 0x5a8 ) = param_1;
   plVar1 = (long*)RenderingServer::get_singleton();
   /* WARNING: Could not recover jumptable at 0x00100282. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( **(code**)( *plVar1 + 0x7c8 ) )(*(undefined4*)( this + 0x5a8 ), plVar1, *(undefined8*)( this + 0x580 ));
   return;
}
/* GPUParticles2D::set_randomness_ratio(float) */void GPUParticles2D::set_randomness_ratio(GPUParticles2D *this, float param_1) {
   long *plVar1;
   *(float*)( this + 0x5ac ) = param_1;
   plVar1 = (long*)RenderingServer::get_singleton();
   /* WARNING: Could not recover jumptable at 0x001002c2. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( **(code**)( *plVar1 + 2000 ) )(*(undefined4*)( this + 0x5ac ), plVar1, *(undefined8*)( this + 0x580 ));
   return;
}
/* GPUParticles2D::set_speed_scale(double) */void GPUParticles2D::set_speed_scale(GPUParticles2D *this, double param_1) {
   long *plVar1;
   *(double*)( this + 0x5b0 ) = param_1;
   plVar1 = (long*)RenderingServer::get_singleton();
   /* WARNING: Could not recover jumptable at 0x0010030e. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( **(code**)( *plVar1 + 0x7e0 ) )(param_1, plVar1, *(undefined8*)( this + 0x580 ));
   return;
}
/* GPUParticles2D::set_draw_order(GPUParticles2D::DrawOrder) */void GPUParticles2D::set_draw_order(GPUParticles2D *this, undefined4 param_2) {
   long *plVar1;
   *(undefined4*)( this + 0x600 ) = param_2;
   plVar1 = (long*)RenderingServer::get_singleton();
   /* WARNING: Could not recover jumptable at 0x00100346. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( **(code**)( *plVar1 + 0x860 ) )(plVar1, *(undefined8*)( this + 0x580 ), param_2);
   return;
}
/* GPUParticles2D::set_fixed_fps(int) */void GPUParticles2D::set_fixed_fps(GPUParticles2D *this, int param_1) {
   long *plVar1;
   *(int*)( this + 0x5cc ) = param_1;
   plVar1 = (long*)RenderingServer::get_singleton();
   /* WARNING: Could not recover jumptable at 0x00100386. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( **(code**)( *plVar1 + 0x7f8 ) )(plVar1, *(undefined8*)( this + 0x580 ), param_1);
   return;
}
/* GPUParticles2D::set_fractional_delta(bool) */void GPUParticles2D::set_fractional_delta(GPUParticles2D *this, bool param_1) {
   long *plVar1;
   this[0x5d0] = (GPUParticles2D)param_1;
   plVar1 = (long*)RenderingServer::get_singleton();
   /* WARNING: Could not recover jumptable at 0x001003c8. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( **(code**)( *plVar1 + 0x808 ) )(plVar1, *(undefined8*)( this + 0x580 ), param_1);
   return;
}
/* GPUParticles2D::set_interpolate(bool) */void GPUParticles2D::set_interpolate(GPUParticles2D *this, bool param_1) {
   long *plVar1;
   this[0x5d1] = (GPUParticles2D)param_1;
   plVar1 = (long*)RenderingServer::get_singleton();
   /* WARNING: Could not recover jumptable at 0x00100408. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( **(code**)( *plVar1 + 0x800 ) )(plVar1, *(undefined8*)( this + 0x580 ), param_1);
   return;
}
/* GPUParticles2D::set_seed(unsigned int) */void GPUParticles2D::set_seed(GPUParticles2D *this, uint param_1) {
   long *plVar1;
   *(uint*)( this + 0x5ec ) = param_1;
   plVar1 = (long*)RenderingServer::get_singleton();
   /* WARNING: Could not recover jumptable at 0x00100446. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( **(code**)( *plVar1 + 0x818 ) )(plVar1, *(undefined8*)( this + 0x580 ), param_1);
   return;
}
/* GPUParticles2D::request_particles_process(float) */void GPUParticles2D::request_particles_process(GPUParticles2D *this, float param_1) {
   long *plVar1;
   plVar1 = (long*)RenderingServer::get_singleton();
   /* WARNING: Could not recover jumptable at 0x00100486. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( **(code**)( *plVar1 + 0x7c0 ) )(param_1, plVar1, *(undefined8*)( this + 0x580 ));
   return;
}
/* GPUParticles2D::set_amount_ratio(float) */void GPUParticles2D::set_amount_ratio(GPUParticles2D *this, float param_1) {
   long *plVar1;
   *(float*)( this + 0x590 ) = param_1;
   plVar1 = (long*)RenderingServer::get_singleton();
   /* WARNING: Could not recover jumptable at 0x001004ce. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( **(code**)( *plVar1 + 0x7a0 ) )(param_1, plVar1, *(undefined8*)( this + 0x580 ));
   return;
}
/* GPUParticles2D::capture_rect() const */undefined1  [16] __thiscallGPUParticles2D::capture_rect(GPUParticles2D *this) {
   undefined1 auVar1[16];
   long *plVar2;
   long in_FS_OFFSET;
   undefined4 local_28;
   undefined4 local_24;
   undefined4 local_1c;
   undefined4 local_18;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   plVar2 = (long*)RenderingServer::get_singleton();
   ( **(code**)( *plVar2 + 0x878 ) )(&local_28, plVar2, *(undefined8*)( this + 0x580 ));
   auVar1._4_4_ = local_24;
   auVar1._0_4_ = local_28;
   auVar1._8_4_ = local_1c;
   auVar1._12_4_ = local_18;
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return auVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GPUParticles2D::emit_particle(Transform2D const&, Vector2 const&, Color const&, Color const&,
   unsigned int) */void GPUParticles2D::emit_particle(GPUParticles2D *this, Transform2D *param_1, Vector2 *param_2, Color *param_3, Color *param_4, uint param_5) {
   long *plVar1;
   long in_FS_OFFSET;
   undefined8 local_78;
   undefined4 local_70;
   undefined8 local_68;
   long local_60;
   ulong local_58;
   undefined8 local_50;
   undefined4 local_48;
   undefined4 uStack_44;
   undefined4 uStack_40;
   undefined4 local_3c;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_68 = CONCAT44((int)*(undefined8*)( param_1 + 8 ), (int)*(undefined8*)param_1);
   local_48 = 0x3f800000;
   uStack_44 = ( undefined4 ) * (undefined8*)( param_1 + 0x10 );
   uStack_40 = ( undefined4 )(( ulong ) * (undefined8*)( param_1 + 0x10 ) >> 0x20);
   local_78 = *(undefined8*)param_2;
   local_60 = ( ulong ) * (uint*)( param_1 + 4 ) << 0x20;
   local_50 = 0;
   local_3c = 0;
   local_70 = 0;
   local_58 = ( ulong ) * (uint*)( param_1 + 0xc );
   plVar1 = (long*)RenderingServer::get_singleton();
   ( **(code**)( *plVar1 + 0x858 ) )(plVar1, *(undefined8*)( this + 0x580 ), &local_68, &local_78, param_3, param_4, param_5);
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GPUParticles2D::set_interp_to_end(float) */void GPUParticles2D::set_interp_to_end(GPUParticles2D *this, float param_1) {
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

   *(float*)( this + 0x5d4 ) = fVar2;
   plVar1 = (long*)RenderingServer::get_singleton();
   /* WARNING: Could not recover jumptable at 0x0010069a. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( **(code**)( *plVar1 + 0x890 ) )(plVar1, *(undefined8*)( this + 0x580 ));
   return;
}
/* GPUParticles2D::set_visibility_rect(Rect2 const&) */void GPUParticles2D::set_visibility_rect(GPUParticles2D *this, Rect2 *param_1) {
   undefined8 uVar1;
   long *plVar2;
   long in_FS_OFFSET;
   undefined8 local_28;
   undefined4 local_20;
   undefined8 local_1c;
   undefined4 local_14;
   long local_10;
   uVar1 = *(undefined8*)( param_1 + 8 );
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   local_20 = 0;
   *(undefined8*)( this + 0x5b8 ) = *(undefined8*)param_1;
   *(undefined8*)( this + 0x5c0 ) = uVar1;
   local_28 = *(undefined8*)param_1;
   local_14 = 0;
   local_1c = *(undefined8*)( param_1 + 8 );
   plVar2 = (long*)RenderingServer::get_singleton();
   ( **(code**)( *plVar2 + 0x7d8 ) )(plVar2, *(undefined8*)( this + 0x580 ), &local_28);
   CanvasItem::queue_redraw();
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GPUParticles2D::_texture_changed() */void GPUParticles2D::_texture_changed(GPUParticles2D *this) {
   if (*(long*)( this + 0x608 ) != 0) {
      CanvasItem::queue_redraw();
      return;
   }

   return;
}
/* GPUParticles2D::set_trail_enabled(bool) */void GPUParticles2D::set_trail_enabled(GPUParticles2D *this, bool param_1) {
   long *plVar1;
   undefined1 auVar2[16];
   this[0x61c] = (GPUParticles2D)param_1;
   plVar1 = (long*)RenderingServer::get_singleton();
   auVar2._4_12_ = SUB1612((undefined1[16])0x0, 4);
   auVar2._0_4_ = (float)*(double*)( this + 0x620 );
   ( **(code**)( *plVar1 + 0x828 ) )(auVar2._0_8_, plVar1, *(undefined8*)( this + 0x580 ), this[0x61c]);
   CanvasItem::queue_redraw();
   Node::update_configuration_warnings();
   plVar1 = (long*)RenderingServer::get_singleton();
   /* WARNING: Could not recover jumptable at 0x001007d6. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( **(code**)( *plVar1 + 0x820 ) )(plVar1, *(undefined8*)( this + 0x580 ), (uint)param_1 * 2);
   return;
}
/* GPUParticles2D::set_use_fixed_seed(bool) */void GPUParticles2D::set_use_fixed_seed(GPUParticles2D *this, bool param_1) {
   if (this[0x5f0] != (GPUParticles2D)param_1) {
      this[0x5f0] = (GPUParticles2D)param_1;
      Object::notify_property_list_changed();
      return;
   }

   return;
}
/* GPUParticles2D::get_sub_emitter() const */void GPUParticles2D::get_sub_emitter(void) {
   long in_RSI;
   NodePath *in_RDI;
   NodePath::NodePath(in_RDI, (NodePath*)( in_RSI + 0x610 ));
   return;
}
/* GPUParticles2D::set_amount(int) */undefined1  [16] __thiscallGPUParticles2D::set_amount(GPUParticles2D *this, int param_1) {
   long *plVar1;
   undefined1 auVar2[16];
   ulong uStack_10;
   if (0 < param_1) {
      *(int*)( this + 0x58c ) = param_1;
      plVar1 = (long*)RenderingServer::get_singleton();
      /* WARNING: Could not recover jumptable at 0x00100862. Too many branches */
      /* WARNING: Treating indirect jump as call */
      auVar2 = ( **(code**)( *plVar1 + 0x798 ) )(plVar1, *(undefined8*)( this + 0x580 ), *(undefined4*)( this + 0x58c ));
      return auVar2;
   }

   _err_print_error("set_amount", "scene/2d/gpu_particles_2d.cpp", 0x48, "Condition \"p_amount < 1\" is true.", "Amount of particles cannot be smaller than 1.", 0);
   auVar2._8_8_ = 0;
   auVar2._0_8_ = uStack_10;
   return auVar2 << 0x40;
}
/* GPUParticles2D::set_lifetime(double) */undefined1  [16] __thiscallGPUParticles2D::set_lifetime(GPUParticles2D *this, double param_1) {
   long *plVar1;
   undefined1 auVar2[16];
   ulong uStack_10;
   if (0.0 < param_1) {
      *(double*)( this + 0x598 ) = param_1;
      plVar1 = (long*)RenderingServer::get_singleton();
      /* WARNING: Could not recover jumptable at 0x001008dc. Too many branches */
      /* WARNING: Treating indirect jump as call */
      auVar2 = ( **(code**)( *plVar1 + 0x7a8 ) )(*(undefined8*)( this + 0x598 ), plVar1, *(undefined8*)( this + 0x580 ));
      return auVar2;
   }

   _err_print_error("set_lifetime", "scene/2d/gpu_particles_2d.cpp", 0x4e, "Condition \"p_lifetime <= 0\" is true.", "Particles lifetime must be greater than 0.", 0);
   auVar2._8_8_ = 0;
   auVar2._0_8_ = uStack_10;
   return auVar2 << 0x40;
}
/* GPUParticles2D::set_trail_lifetime(double) */void GPUParticles2D::set_trail_lifetime(GPUParticles2D *this, double param_1) {
   long *plVar1;
   undefined1 auVar2[16];
   if (_LC10 <= param_1) {
      *(double*)( this + 0x620 ) = param_1;
      plVar1 = (long*)RenderingServer::get_singleton();
      auVar2._4_12_ = SUB1612((undefined1[16])0x0, 4);
      auVar2._0_4_ = (float)*(double*)( this + 0x620 );
      ( **(code**)( *plVar1 + 0x828 ) )(auVar2._0_8_, plVar1, *(undefined8*)( this + 0x580 ), this[0x61c]);
      CanvasItem::queue_redraw();
      return;
   }

   _err_print_error("set_trail_lifetime", "scene/2d/gpu_particles_2d.cpp", 0xad, "Condition \"p_seconds < 0.01\" is true.", 0, 0);
   return;
}
/* GPUParticles2D::set_trail_sections(int) */void GPUParticles2D::set_trail_sections(GPUParticles2D *this, int param_1) {
   if (param_1 < 2) {
      _err_print_error("set_trail_sections", "scene/2d/gpu_particles_2d.cpp", 0xb4, "Condition \"p_sections < 2\" is true.", 0, 0);
      return;
   }

   if (param_1 < 0x81) {
      *(int*)( this + 0x628 ) = param_1;
      CanvasItem::queue_redraw();
      return;
   }

   _err_print_error("set_trail_sections", "scene/2d/gpu_particles_2d.cpp", 0xb5, "Condition \"p_sections > 128\" is true.", 0, 0);
   return;
}
/* GPUParticles2D::set_trail_section_subdivisions(int) */void GPUParticles2D::set_trail_section_subdivisions(GPUParticles2D *this, int param_1) {
   if (param_1 < 1) {
      _err_print_error("set_trail_section_subdivisions", "scene/2d/gpu_particles_2d.cpp", 0xbc, "Condition \"p_subdivisions < 1\" is true.", 0, 0);
      return;
   }

   if (param_1 < 0x401) {
      *(int*)( this + 0x62c ) = param_1;
      CanvasItem::queue_redraw();
      return;
   }

   _err_print_error("set_trail_section_subdivisions", "scene/2d/gpu_particles_2d.cpp", 0xbd, "Condition \"p_subdivisions > 1024\" is true.", 0, 0);
   return;
}
/* GPUParticles2D::get_process_material() const */void GPUParticles2D::get_process_material(void) {
   char cVar1;
   long in_RSI;
   long *in_RDI;
   *in_RDI = 0;
   if (*(long*)( in_RSI + 0x5f8 ) != 0) {
      *in_RDI = *(long*)( in_RSI + 0x5f8 );
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
         *in_RDI = 0;
      }

   }

   return;
}
/* GPUParticles2D::restart(bool) */void GPUParticles2D::restart(GPUParticles2D *this, bool param_1) {
   undefined4 uVar1;
   long *plVar2;
   float fVar3;
   if (( !param_1 ) && ( this[0x5f0] == (GPUParticles2D)0x0 )) {
      uVar1 = Math::rand();
      *(undefined4*)( this + 0x5ec ) = uVar1;
      plVar2 = (long*)RenderingServer::get_singleton();
      ( **(code**)( *plVar2 + 0x818 ) )(plVar2, *(undefined8*)( this + 0x580 ), uVar1);
   }

   plVar2 = (long*)RenderingServer::get_singleton();
   ( **(code**)( *plVar2 + 0x848 ) )(plVar2, *(undefined8*)( this + 0x580 ));
   plVar2 = (long*)RenderingServer::get_singleton();
   ( **(code**)( *plVar2 + 0x788 ) )(plVar2, *(undefined8*)( this + 0x580 ), 1);
   fVar3 = _LC23 - *(float*)( this + 0x5a8 );
   *(undefined2*)( this + 0x588 ) = 0x101;
   this[0x58a] = (GPUParticles2D)0x0;
   *(undefined8*)( this + 0x630 ) = 0;
   *(double*)( this + 0x638 ) = *(double*)( this + 0x598 );
   *(double*)( this + 0x640 ) = (double)fVar3 * *(double*)( this + 0x598 );
   if (this[0x58b] == (GPUParticles2D)0x0) {
      return;
   }

   Node::set_process_internal(SUB81(this, 0));
   return;
}
/* GPUParticles2D::_restart_bind_compat_92089() */void GPUParticles2D::_restart_bind_compat_92089(GPUParticles2D *this) {
   restart(this, false);
   return;
}
/* GPUParticles2D::get_texture() const */void GPUParticles2D::get_texture(void) {
   char cVar1;
   long in_RSI;
   long *in_RDI;
   *in_RDI = 0;
   if (*(long*)( in_RSI + 0x608 ) != 0) {
      *in_RDI = *(long*)( in_RSI + 0x608 );
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
         *in_RDI = 0;
      }

   }

   return;
}
/* void Ref<Texture2D>::TEMPNAMEPLACEHOLDERVALUE(Ref<CurveTexture> const&) [clone .isra.0] */void Ref<Texture2D>::operator =(Ref<Texture2D> *this, Ref *param_1) {
   Object *pOVar1;
   char cVar2;
   Object *pOVar3;
   pOVar1 = *(Object**)this;
   if (param_1 == (Ref*)0x0) {
      if (pOVar1 == (Object*)0x0) {
         return;
      }

      *(undefined8*)this = 0;
   }
 else {
      pOVar3 = (Object*)__dynamic_cast(param_1, &Object::typeinfo, &Texture2D::typeinfo, 0);
      if (pOVar3 == pOVar1) {
         return;
      }

      *(Object**)this = pOVar3;
      if (( pOVar3 != (Object*)0x0 ) && ( cVar2 = cVar2 == '\0' )) {
         *(undefined8*)this = 0;
      }

      if (pOVar1 == (Object*)0x0) {
         return;
      }

   }

   cVar2 = RefCounted::unreference();
   if (( cVar2 != '\0' ) && ( cVar2 = cVar2 != '\0' )) {
      ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
      Memory::free_static(pOVar1, false);
      return;
   }

   return;
}
/* GPUParticles2D::set_emitting(bool) */void GPUParticles2D::set_emitting(GPUParticles2D *this, bool param_1) {
   GPUParticles2D GVar1;
   undefined4 uVar2;
   long *plVar3;
   bool bVar4;
   float fVar5;
   bVar4 = SUB81(this, 0);
   if (param_1) {
      if (( this[0x588] == (GPUParticles2D)0x0 ) && ( this[0x5f0] == (GPUParticles2D)0x0 )) {
         uVar2 = Math::rand();
         *(undefined4*)( this + 0x5ec ) = uVar2;
         plVar3 = (long*)RenderingServer::get_singleton();
         ( **(code**)( *plVar3 + 0x818 ) )(plVar3, *(undefined8*)( this + 0x580 ), uVar2);
         GVar1 = this[0x58b];
      }
 else {
         GVar1 = this[0x58b];
      }

      if (GVar1 != (GPUParticles2D)0x0) {
         GVar1 = this[0x589];
         if (( GVar1 == (GPUParticles2D)0x0 ) && ( GVar1 = GVar1 == (GPUParticles2D)0x0 )) {
            fVar5 = _LC23 - *(float*)( this + 0x5a8 );
            this[0x589] = (GPUParticles2D)0x1;
            *(undefined8*)( this + 0x630 ) = 0;
            *(double*)( this + 0x638 ) = *(double*)( this + 0x598 );
            *(double*)( this + 0x640 ) = (double)fVar5 * *(double*)( this + 0x598 );
         }

         this[0x58a] = GVar1;
         Node::set_process_internal(bVar4);
      }

   }
 else if (this[0x58b] == (GPUParticles2D)0x0) {
      Node::set_process_internal(bVar4);
   }
 else {
      Node::set_process_internal(bVar4);
   }

   this[0x588] = (GPUParticles2D)param_1;
   plVar3 = (long*)RenderingServer::get_singleton();
   /* WARNING: Could not recover jumptable at 0x00100d8c. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( **(code**)( *plVar3 + 0x788 ) )(plVar3, *(undefined8*)( this + 0x580 ), param_1);
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GPUParticles2D::set_process_material(Ref<Material> const&) */void GPUParticles2D::set_process_material(Ref *param_1) {
   Object *pOVar1;
   long lVar2;
   char cVar3;
   Vector3 *pVVar4;
   undefined8 uVar5;
   long *plVar6;
   Object *pOVar7;
   long *in_RSI;
   long in_FS_OFFSET;
   float in_XMM1_Da;
   float local_30;
   float fStack_2c;
   pOVar1 = (Object*)*in_RSI;
   pOVar7 = *(Object**)( param_1 + 0x5f8 );
   lVar2 = *(long*)( in_FS_OFFSET + 0x28 );
   if (pOVar1 != pOVar7) {
      *(Object**)( param_1 + 0x5f8 ) = pOVar1;
      if (( pOVar1 != (Object*)0x0 ) && ( cVar3 = cVar3 == '\0' )) {
         *(undefined8*)( param_1 + 0x5f8 ) = 0;
      }

      if (( ( pOVar7 != (Object*)0x0 ) && ( cVar3 = RefCounted::unreference() ),cVar3 != '\0' )) &&( cVar3 = cVar3 != '\0' )(**(code**)( *(long*)pOVar7 + 0x140 ))(pOVar7);
      Memory::free_static(pOVar7, false);
   }

   pOVar7 = (Object*)*in_RSI;
}
if (( ( pOVar7 == (Object*)0x0 ) || ( pVVar4 = (Vector3*)__dynamic_cast(pOVar7, &Object::typeinfo, &ParticleProcessMaterial::typeinfo, 0) ),pVVar4 == (Vector3*)0x0 )) {
   pVVar4 = (Vector3*)0x0;
   LAB_00100e9d:plVar6 = *(long**)( param_1 + 0x5f8 );
   uVar5 = 0;
   if (plVar6 != (long*)0x0) {
      LAB_00100eac:uVar5 = ( **(code**)( *plVar6 + 0x1c0 ) )();
   }

   plVar6 = (long*)RenderingServer::get_singleton();
   ( **(code**)( *plVar6 + 0x7f0 ) )(plVar6, *(undefined8*)( param_1 + 0x580 ), uVar5);
   Node::update_configuration_warnings();
   if (pVVar4 != (Vector3*)0x0) goto LAB_00100ee0;
}
 else {
   cVar3 = ParticleProcessMaterial::get_particle_flag(pVVar4, 2);
   if (cVar3 != '\0') goto LAB_00100e9d;
   uVar5 = ParticleProcessMaterial::get_gravity();
   local_30 = (float)uVar5;
   if (( ( local_30 != 0.0 ) || ( fStack_2c = fStack_2c != __LC24 ) ) || ( in_XMM1_Da != 0.0 )) goto LAB_00100e9d;
   ParticleProcessMaterial::set_particle_flag(pVVar4, 2, 1);
   ParticleProcessMaterial::set_gravity(pVVar4);
   plVar6 = *(long**)( param_1 + 0x5f8 );
   if (plVar6 != (long*)0x0) goto LAB_00100eac;
   plVar6 = (long*)RenderingServer::get_singleton();
   ( **(code**)( *plVar6 + 0x7f0 ) )(plVar6, *(undefined8*)( param_1 + 0x580 ), 0);
   Node::update_configuration_warnings();
   LAB_00100ee0:cVar3 = RefCounted::unreference();
   if (( cVar3 != '\0' ) && ( cVar3 = predelete_handler((Object*)pVVar4) ),cVar3 != '\0') {
      ( **(code**)( *(long*)pVVar4 + 0x140 ) )(pVVar4);
      if (lVar2 == *(long*)( in_FS_OFFSET + 0x28 )) {
         Memory::free_static(pVVar4, false);
         return;
      }

      goto LAB_0010105c;
   }

}
if (lVar2 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return;
}
LAB_0010105c:/* WARNING: Subroutine does not return */__stack_chk_fail();}/* CowData<float>::_copy_on_write() [clone .isra.0] */void CowData<float>::_copy_on_write(CowData<float> *this) {
   long *plVar1;
   long lVar2;
   code *pcVar3;
   undefined8 *puVar4;
   ulong uVar5;
   size_t __n;
   if (( *(long*)this == 0 ) || ( *(ulong*)( *(long*)this + -0x10 ) < 2 )) {
      return;
   }

   if (*(long*)this == 0) {
      /* WARNING: Does not return */
      pcVar3 = (code*)invalidInstructionException();
      ( *pcVar3 )();
   }

   lVar2 = *(long*)( *(long*)this + -8 );
   uVar5 = 0x10;
   __n = lVar2 * 4;
   if (__n != 0) {
      uVar5 = __n - 1 | __n - 1 >> 1;
      uVar5 = uVar5 | uVar5 >> 2;
      uVar5 = uVar5 | uVar5 >> 4;
      uVar5 = uVar5 | uVar5 >> 8;
      uVar5 = uVar5 | uVar5 >> 0x10;
      uVar5 = ( uVar5 | uVar5 >> 0x20 ) + 0x11;
   }

   puVar4 = (undefined8*)Memory::alloc_static(uVar5, false);
   if (puVar4 != (undefined8*)0x0) {
      *puVar4 = 1;
      puVar4[1] = lVar2;
      memcpy(puVar4 + 2, *(void**)this, __n);
      if (*(long*)this != 0) {
         LOCK();
         plVar1 = (long*)( *(long*)this + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar2 = *(long*)this;
            *(undefined8*)this = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }

      }

      *(undefined8**)this = puVar4 + 2;
      return;
   }

   _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
   return;
}
/* CowData<Transform3D>::_copy_on_write() [clone .isra.0] */void CowData<Transform3D>::_copy_on_write(CowData<Transform3D> *this) {
   long *plVar1;
   long lVar2;
   code *pcVar3;
   undefined8 *puVar4;
   size_t __n;
   ulong uVar5;
   if (( *(long*)this == 0 ) || ( *(ulong*)( *(long*)this + -0x10 ) < 2 )) {
      return;
   }

   if (*(long*)this == 0) {
      /* WARNING: Does not return */
      pcVar3 = (code*)invalidInstructionException();
      ( *pcVar3 )();
   }

   lVar2 = *(long*)( *(long*)this + -8 );
   uVar5 = 0x10;
   __n = lVar2 * 0x30;
   if (__n != 0) {
      uVar5 = __n - 1 | __n - 1 >> 1;
      uVar5 = uVar5 | uVar5 >> 2;
      uVar5 = uVar5 | uVar5 >> 4;
      uVar5 = uVar5 | uVar5 >> 8;
      uVar5 = uVar5 | uVar5 >> 0x10;
      uVar5 = ( uVar5 | uVar5 >> 0x20 ) + 0x11;
   }

   puVar4 = (undefined8*)Memory::alloc_static(uVar5, false);
   if (puVar4 != (undefined8*)0x0) {
      *puVar4 = 1;
      puVar4[1] = lVar2;
      memcpy(puVar4 + 2, *(void**)this, __n);
      if (*(long*)this != 0) {
         LOCK();
         plVar1 = (long*)( *(long*)this + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar2 = *(long*)this;
            *(undefined8*)this = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }

      }

      *(undefined8**)this = puVar4 + 2;
      return;
   }

   _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
   return;
}
/* CowData<char32_t>::_ref(CowData<char32_t> const&) [clone .part.0] */void CowData<char32_t>::_ref(CowData<char32_t> *this, CowData *param_1) {
   long *plVar1;
   long lVar2;
   long lVar3;
   bool bVar4;
   if (*(long*)this != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)this + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)this;
         *(undefined8*)this = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }
 else {
         *(undefined8*)this = 0;
      }

   }

   plVar1 = (long*)( *(long*)param_1 + -0x10 );
   if (*(long*)param_1 != 0) {
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
      }
 while ( !bVar4 );
      if (lVar3 != -1) {
         *(undefined8*)this = *(undefined8*)param_1;
      }

   }

   return;
}
/* CowData<int>::_copy_on_write() [clone .isra.0] */void CowData<int>::_copy_on_write(CowData<int> *this) {
   long *plVar1;
   long lVar2;
   code *pcVar3;
   undefined8 *puVar4;
   ulong uVar5;
   size_t __n;
   if (( *(long*)this == 0 ) || ( *(ulong*)( *(long*)this + -0x10 ) < 2 )) {
      return;
   }

   if (*(long*)this == 0) {
      /* WARNING: Does not return */
      pcVar3 = (code*)invalidInstructionException();
      ( *pcVar3 )();
   }

   lVar2 = *(long*)( *(long*)this + -8 );
   uVar5 = 0x10;
   __n = lVar2 * 4;
   if (__n != 0) {
      uVar5 = __n - 1 | __n - 1 >> 1;
      uVar5 = uVar5 | uVar5 >> 2;
      uVar5 = uVar5 | uVar5 >> 4;
      uVar5 = uVar5 | uVar5 >> 8;
      uVar5 = uVar5 | uVar5 >> 0x10;
      uVar5 = ( uVar5 | uVar5 >> 0x20 ) + 0x11;
   }

   puVar4 = (undefined8*)Memory::alloc_static(uVar5, false);
   if (puVar4 != (undefined8*)0x0) {
      *puVar4 = 1;
      puVar4[1] = lVar2;
      memcpy(puVar4 + 2, *(void**)this, __n);
      if (*(long*)this != 0) {
         LOCK();
         plVar1 = (long*)( *(long*)this + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar2 = *(long*)this;
            *(undefined8*)this = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }

      }

      *(undefined8**)this = puVar4 + 2;
      return;
   }

   _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
   return;
}
/* CowData<Vector2>::_copy_on_write() [clone .isra.0] */void CowData<Vector2>::_copy_on_write(CowData<Vector2> *this) {
   long *plVar1;
   long lVar2;
   code *pcVar3;
   undefined8 *puVar4;
   ulong uVar5;
   size_t __n;
   if (( *(long*)this == 0 ) || ( *(ulong*)( *(long*)this + -0x10 ) < 2 )) {
      return;
   }

   if (*(long*)this == 0) {
      /* WARNING: Does not return */
      pcVar3 = (code*)invalidInstructionException();
      ( *pcVar3 )();
   }

   lVar2 = *(long*)( *(long*)this + -8 );
   uVar5 = 0x10;
   __n = lVar2 * 8;
   if (__n != 0) {
      uVar5 = __n - 1 | __n - 1 >> 1;
      uVar5 = uVar5 | uVar5 >> 2;
      uVar5 = uVar5 | uVar5 >> 4;
      uVar5 = uVar5 | uVar5 >> 8;
      uVar5 = uVar5 | uVar5 >> 0x10;
      uVar5 = ( uVar5 | uVar5 >> 0x20 ) + 0x11;
   }

   puVar4 = (undefined8*)Memory::alloc_static(uVar5, false);
   if (puVar4 != (undefined8*)0x0) {
      *puVar4 = 1;
      puVar4[1] = lVar2;
      memcpy(puVar4 + 2, *(void**)this, __n);
      if (*(long*)this != 0) {
         LOCK();
         plVar1 = (long*)( *(long*)this + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar2 = *(long*)this;
            *(undefined8*)this = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }

      }

      *(undefined8**)this = puVar4 + 2;
      return;
   }

   _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
   return;
}
/* GPUParticles2D::_update_particle_emission_transform() */void GPUParticles2D::_update_particle_emission_transform(GPUParticles2D *this) {
   long *plVar1;
   long in_FS_OFFSET;
   undefined1 local_68[4];
   uint uStack_64;
   uint uStack_5c;
   undefined8 local_58;
   undefined1 local_48[8];
   long local_40;
   ulong local_38;
   undefined8 local_30;
   undefined4 local_28;
   undefined4 uStack_24;
   undefined4 uStack_20;
   undefined4 local_1c;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   ( **(code**)( *(long*)this + 0x298 ) )(local_68, this);
   local_28 = 0x3f800000;
   local_30 = 0;
   uStack_24 = (undefined4)local_58;
   uStack_20 = ( undefined4 )((ulong)local_58 >> 0x20);
   local_1c = 0;
   local_40 = (ulong)uStack_64 << 0x20;
   local_38 = (ulong)uStack_5c;
   plVar1 = (long*)RenderingServer::get_singleton();
   ( **(code**)( *plVar1 + 0x880 ) )(plVar1, *(undefined8*)( this + 0x580 ), local_48);
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GPUParticles2D::set_use_local_coordinates(bool) */void GPUParticles2D::set_use_local_coordinates(GPUParticles2D *this, bool param_1) {
   long *plVar1;
   this[0x5c8] = (GPUParticles2D)param_1;
   plVar1 = (long*)RenderingServer::get_singleton();
   ( **(code**)( *plVar1 + 0x7e8 ) )(plVar1, *(undefined8*)( this + 0x580 ), this[0x5c8]);
   CanvasItem::set_notify_transform(SUB81(this, 0));
   if (( !param_1 ) && ( ( (byte)this[0x2fa] & 0x40 ) != 0 )) {
      _update_particle_emission_transform(this);
      return;
   }

   return;
}
/* GPUParticles2D::set_show_visibility_rect(bool) */void GPUParticles2D::set_show_visibility_rect(GPUParticles2D *this, bool param_1) {
   this[0x5f1] = (GPUParticles2D)param_1;
   CanvasItem::queue_redraw();
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GPUParticles2D::_update_collision_size() */void GPUParticles2D::_update_collision_size(GPUParticles2D *this) {
   int iVar1;
   int iVar2;
   long *plVar3;
   float fVar4;
   fVar4 = *(float*)( this + 0x618 );
   if (*(long**)( this + 0x608 ) != (long*)0x0) {
      iVar1 = ( **(code**)( **(long**)( this + 0x608 ) + 0x1c8 ) )();
      iVar2 = ( **(code**)( **(long**)( this + 0x608 ) + 0x1d0 ) )();
      fVar4 = (float)( (double)fVar4 * (double)( iVar1 + iVar2 ) * __LC41 );
   }

   plVar3 = (long*)RenderingServer::get_singleton();
   /* WARNING: Could not recover jumptable at 0x00101751. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( **(code**)( *plVar3 + 0x810 ) )(fVar4, plVar3, *(undefined8*)( this + 0x580 ));
   return;
}
/* GPUParticles2D::set_collision_base_size(float) */void GPUParticles2D::set_collision_base_size(GPUParticles2D *this, float param_1) {
   *(float*)( this + 0x618 ) = param_1;
   _update_collision_size(this);
   return;
}
/* GPUParticles2D::_validate_property(PropertyInfo&) const */void GPUParticles2D::_validate_property(GPUParticles2D *this, PropertyInfo *param_1) {
   char cVar1;
   cVar1 = String::operator ==((String*)( param_1 + 8 ), "seed");
   if (( cVar1 != '\0' ) && ( this[0x5f0] == (GPUParticles2D)0x0 )) {
      *(undefined4*)( param_1 + 0x28 ) = 0;
   }

   cVar1 = String::operator ==((String*)( param_1 + 8 ), "emitting");
   if (cVar1 != '\0') {
      *(uint*)( param_1 + 0x18 ) = -(uint)(this[0x58b] != (GPUParticles2D)0x0) & 0x28;
   }

   return;
}
/* GPUParticles2D::_attach_sub_emitter() */void GPUParticles2D::_attach_sub_emitter(GPUParticles2D *this) {
   long lVar1;
   GPUParticles2D *pGVar2;
   long *plVar3;
   lVar1 = Node::get_node_or_null((NodePath*)this);
   if (lVar1 != 0) {
      pGVar2 = (GPUParticles2D*)__dynamic_cast(lVar1, &Object::typeinfo, &typeinfo, 0);
      if (( pGVar2 != (GPUParticles2D*)0x0 ) && ( this != pGVar2 )) {
         plVar3 = (long*)RenderingServer::get_singleton();
         /* WARNING: Could not recover jumptable at 0x00101859. Too many branches */
         /* WARNING: Treating indirect jump as call */
         ( **(code**)( *plVar3 + 0x850 ) )(plVar3, *(undefined8*)( this + 0x580 ), *(undefined8*)( pGVar2 + 0x580 ));
         return;
      }

   }

   return;
}
/* GPUParticles2D::set_sub_emitter(NodePath const&) */void GPUParticles2D::set_sub_emitter(GPUParticles2D *this, NodePath *param_1) {
   char cVar1;
   long *plVar2;
   long in_FS_OFFSET;
   undefined8 local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( (byte)this[0x2fa] & 0x40 ) != 0) {
      plVar2 = (long*)RenderingServer::get_singleton();
      ( **(code**)( *plVar2 + 0x850 ) )(plVar2, *(undefined8*)( this + 0x580 ), 0);
   }

   NodePath::operator =((NodePath*)( this + 0x610 ), param_1);
   if (( (byte)this[0x2fa] & 0x40 ) != 0) {
      local_38 = 0;
      cVar1 = NodePath::operator !=((NodePath*)( this + 0x610 ), (NodePath*)&local_38);
      NodePath::~NodePath((NodePath*)&local_38);
      if (cVar1 != '\0') {
         _attach_sub_emitter(this);
      }

   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      Node::update_configuration_warnings();
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GPUParticles2D::GPUParticles2D() */void GPUParticles2D::GPUParticles2D(GPUParticles2D *this) {
   undefined8 uVar1;
   undefined4 uVar2;
   long *plVar3;
   undefined8 uVar4;
   long in_FS_OFFSET;
   undefined8 local_38;
   undefined8 uStack_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   CanvasItem::CanvasItem((CanvasItem*)this);
   *(code**)this = CallableCustom::CallableCustom;
   this[0x548] = (GPUParticles2D)0x0;
   *(undefined8*)( this + 0x56c ) = 0x3f80000000000000;
   *(undefined***)this = &PTR__initialize_classv_0011feb0;
   uVar1 = _UNK_00120bd8;
   uVar4 = __LC44;
   *(undefined1(*) [16])( this + 0x608 ) = (undefined1[16])0x0;
   *(undefined2*)( this + 0x5f0 ) = 0;
   *(undefined8*)( this + 0x554 ) = uVar4;
   *(undefined8*)( this + 0x55c ) = uVar1;
   *(undefined1(*) [16])( this + 0x598 ) = (undefined1[16])0x0;
   *(undefined2*)( this + 0x5d0 ) = 0x100;
   *(undefined8*)( this + 0x54c ) = 0;
   *(undefined8*)( this + 0x564 ) = 0x3f800000;
   *(undefined8*)( this + 0x574 ) = 0;
   *(undefined8*)( this + 0x580 ) = 0;
   *(undefined8*)( this + 0x588 ) = 0;
   *(undefined4*)( this + 0x590 ) = 0x3f800000;
   for (int i = 0; i < 4; i++) {
      *(undefined8*)( this + ( 8*i + 1448 ) ) = 0;
   }

   this[0x5c8] = (GPUParticles2D)0x0;
   *(undefined4*)( this + 0x5cc ) = 0;
   *(undefined4*)( this + 0x5d4 ) = 0;
   *(undefined8*)( this + 0x5d8 ) = 0;
   *(undefined4*)( this + 0x5e0 ) = 0;
   *(undefined8*)( this + 0x5e4 ) = 0;
   *(undefined4*)( this + 0x5ec ) = 0;
   *(undefined8*)( this + 0x5f8 ) = 0;
   *(undefined4*)( this + 0x600 ) = 1;
   *(undefined4*)( this + 0x618 ) = 0x3f800000;
   this[0x61c] = (GPUParticles2D)0x0;
   uVar4 = _LC46;
   *(undefined8*)( this + 0x640 ) = 0;
   *(undefined8*)( this + 0x620 ) = uVar4;
   uVar4 = _LC47;
   *(undefined8*)( this + 0x648 ) = 0;
   *(undefined8*)( this + 0x628 ) = uVar4;
   *(undefined1(*) [16])( this + 0x630 ) = (undefined1[16])0x0;
   plVar3 = (long*)RenderingServer::get_singleton();
   uVar4 = ( **(code**)( *plVar3 + 0x778 ) )(plVar3);
   *(undefined8*)( this + 0x580 ) = uVar4;
   plVar3 = (long*)RenderingServer::get_singleton();
   ( **(code**)( *plVar3 + 0x780 ) )(plVar3, *(undefined8*)( this + 0x580 ), 0);
   plVar3 = (long*)RenderingServer::get_singleton();
   uVar4 = ( **(code**)( *plVar3 + 0x2d0 ) )(plVar3);
   *(undefined8*)( this + 0x648 ) = uVar4;
   plVar3 = (long*)RenderingServer::get_singleton();
   ( **(code**)( *plVar3 + 0x868 ) )(plVar3, *(undefined8*)( this + 0x580 ), 1);
   plVar3 = (long*)RenderingServer::get_singleton();
   ( **(code**)( *plVar3 + 0x870 ) )(plVar3, *(undefined8*)( this + 0x580 ), 0, *(undefined8*)( this + 0x648 ));
   this[0x58b] = (GPUParticles2D)0x0;
   set_emitting(this, true);
   set_one_shot(this, false);
   uVar2 = Math::rand();
   *(undefined4*)( this + 0x5ec ) = uVar2;
   plVar3 = (long*)RenderingServer::get_singleton();
   ( **(code**)( *plVar3 + 0x818 ) )(plVar3, *(undefined8*)( this + 0x580 ), uVar2);
   if (this[0x5f0] != (GPUParticles2D)0x0) {
      this[0x5f0] = (GPUParticles2D)0x0;
      Object::notify_property_list_changed();
   }

   set_amount(this, 8);
   *(undefined4*)( this + 0x590 ) = 0x3f800000;
   plVar3 = (long*)RenderingServer::get_singleton();
   ( **(code**)( *plVar3 + 0x7a0 ) )(plVar3, *(undefined8*)( this + 0x580 ));
   set_lifetime(this, _LC48);
   *(undefined4*)( this + 0x5cc ) = 0;
   plVar3 = (long*)RenderingServer::get_singleton();
   ( **(code**)( *plVar3 + 0x7f8 ) )(plVar3, *(undefined8*)( this + 0x580 ), 0);
   this[0x5d0] = (GPUParticles2D)0x1;
   plVar3 = (long*)RenderingServer::get_singleton();
   ( **(code**)( *plVar3 + 0x808 ) )(plVar3, *(undefined8*)( this + 0x580 ), 1);
   this[0x5d1] = (GPUParticles2D)0x1;
   plVar3 = (long*)RenderingServer::get_singleton();
   ( **(code**)( *plVar3 + 0x800 ) )(plVar3, *(undefined8*)( this + 0x580 ), 1);
   *(undefined8*)( this + 0x5a0 ) = 0;
   plVar3 = (long*)RenderingServer::get_singleton();
   ( **(code**)( *plVar3 + 0x7b8 ) )(*(undefined8*)( this + 0x5a0 ), plVar3, *(undefined8*)( this + 0x580 ));
   *(undefined4*)( this + 0x5a8 ) = 0;
   plVar3 = (long*)RenderingServer::get_singleton();
   ( **(code**)( *plVar3 + 0x7c8 ) )(plVar3, *(undefined8*)( this + 0x580 ));
   *(undefined4*)( this + 0x5ac ) = 0;
   plVar3 = (long*)RenderingServer::get_singleton();
   ( **(code**)( *plVar3 + 2000 ) )(plVar3, *(undefined8*)( this + 0x580 ));
   local_38 = __LC49;
   uStack_30 = _UNK_00120be8;
   set_visibility_rect(this, (Rect2*)&local_38);
   set_use_local_coordinates(this, false);
   *(undefined4*)( this + 0x600 ) = 1;
   plVar3 = (long*)RenderingServer::get_singleton();
   ( **(code**)( *plVar3 + 0x860 ) )(plVar3, *(undefined8*)( this + 0x580 ), 1);
   *(double*)( this + 0x5b0 ) = _LC48;
   plVar3 = (long*)RenderingServer::get_singleton();
   ( **(code**)( *plVar3 + 0x7e0 ) )(_LC48, plVar3, *(undefined8*)( this + 0x580 ));
   *(undefined4*)( this + 0x5cc ) = 0x1e;
   plVar3 = (long*)RenderingServer::get_singleton();
   ( **(code**)( *plVar3 + 0x7f8 ) )(plVar3, *(undefined8*)( this + 0x580 ), 0x1e);
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      _update_collision_size(this);
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GPUParticles2D::set_texture(Ref<Texture2D> const&) */void GPUParticles2D::set_texture(GPUParticles2D *this, Ref *param_1) {
   Callable *pCVar1;
   Object *pOVar2;
   char cVar3;
   Object *pOVar4;
   long in_FS_OFFSET;
   GPUParticles2D aGStack_48[24];
   long local_30;
   pCVar1 = *(Callable**)( this + 0x608 );
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (pCVar1 == (Callable*)0x0) {
      if (*(long*)param_1 == 0) goto LAB_00101ea0;
      *(long*)( this + 0x608 ) = *(long*)param_1;
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
         pOVar4 = (Object*)0x0;
         LAB_00101e40:*(undefined8*)( this + 0x608 ) = 0;
         goto LAB_00101e4b;
      }

      LAB_00101e60:pOVar4 = *(Object**)( this + 0x608 );
   }
 else {
      create_custom_callable_function_pointer<GPUParticles2D>(aGStack_48, (char*)this, (_func_void*)"&GPUParticles2D::_texture_changed");
      Resource::disconnect_changed(pCVar1);
      Callable::~Callable((Callable*)aGStack_48);
      pOVar2 = *(Object**)param_1;
      pOVar4 = *(Object**)( this + 0x608 );
      if (pOVar2 != pOVar4) {
         *(Object**)( this + 0x608 ) = pOVar2;
         if (pOVar2 == (Object*)0x0) {
            LAB_00101e4b:if (pOVar4 == (Object*)0x0) goto LAB_00101ea0;
         }
 else {
            cVar3 = RefCounted::reference();
            if (cVar3 == '\0') goto LAB_00101e40;
            if (pOVar4 == (Object*)0x0) goto LAB_00101e60;
         }

         cVar3 = RefCounted::unreference();
         if (( cVar3 != '\0' ) && ( cVar3 = cVar3 != '\0' )) {
            ( **(code**)( *(long*)pOVar4 + 0x140 ) )(pOVar4);
            Memory::free_static(pOVar4, false);
         }

         goto LAB_00101e60;
      }

   }

   if (pOVar4 != (Object*)0x0) {
      create_custom_callable_function_pointer<GPUParticles2D>(aGStack_48, (char*)this, (_func_void*)"&GPUParticles2D::_texture_changed");
      Resource::connect_changed((Callable*)pOVar4, (uint)aGStack_48);
      Callable::~Callable((Callable*)aGStack_48);
   }

   LAB_00101ea0:_update_collision_size(this);
   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   CanvasItem::queue_redraw();
   return;
}
/* GPUParticles2D::~GPUParticles2D() */void GPUParticles2D::~GPUParticles2D(GPUParticles2D *this) {
   Object *pOVar1;
   char cVar2;
   long lVar3;
   long *plVar4;
   *(undefined***)this = &PTR__initialize_classv_0011feb0;
   lVar3 = RenderingServer::get_singleton();
   if (lVar3 == 0) {
      _err_print_error("~GPUParticles2D", "scene/2d/gpu_particles_2d.cpp", 0x3ac, "Parameter \"RenderingServer::get_singleton()\" is null.", 0, 0);
      NodePath::~NodePath((NodePath*)( this + 0x610 ));
      Ref<Texture2D>::unref((Ref<Texture2D>*)( this + 0x608 ));
      lVar3 = *(long*)( this + 0x5f8 );
   }
 else {
      plVar4 = (long*)RenderingServer::get_singleton();
      ( **(code**)( *plVar4 + 0x11b0 ) )(plVar4, *(undefined8*)( this + 0x580 ));
      plVar4 = (long*)RenderingServer::get_singleton();
      ( **(code**)( *plVar4 + 0x11b0 ) )(plVar4);
      NodePath::~NodePath((NodePath*)( this + 0x610 ));
      if (( *(long*)( this + 0x608 ) != 0 ) && ( cVar2 = cVar2 != '\0' )) {
         pOVar1 = *(Object**)( this + 0x608 );
         cVar2 = predelete_handler(pOVar1);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
            lVar3 = *(long*)( this + 0x5f8 );
            goto joined_r0x0010204c;
         }

      }

      lVar3 = *(long*)( this + 0x5f8 );
   }

   joined_r0x0010204c:if (( lVar3 != 0 ) && ( cVar2 = cVar2 != '\0' )) {
      pOVar1 = *(Object**)( this + 0x5f8 );
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
         ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
         Memory::free_static(pOVar1, false);
      }

   }

   *(code**)this = CallableCustom::CallableCustom;
   CanvasItem::~CanvasItem((CanvasItem*)this);
   return;
}
/* GPUParticles2D::~GPUParticles2D() */void GPUParticles2D::~GPUParticles2D(GPUParticles2D *this) {
   ~GPUParticles2D(this)
   ;;
   operator_delete(this, 0x650);
   return;
}
/* GPUParticles2D::_bind_compatibility_methods() */void GPUParticles2D::_bind_compatibility_methods(void) {
   long lVar1;
   code *pcVar2;
   long *plVar3;
   MethodBind *pMVar4;
   long *plVar5;
   long lVar6;
   long in_FS_OFFSET;
   long local_68[2];
   long *local_58;
   undefined8 local_48;
   undefined1 local_40[16];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   D_METHODP((char*)local_68, (char***)"restart", 0);
   local_40 = (undefined1[16])0x0;
   local_48 = 0;
   pMVar4 = create_method_bind<GPUParticles2D>(_restart_bind_compat_92089);
   ClassDB::bind_methodfi(1, pMVar4, true, (MethodDefinition*)local_68, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_48] != '\0') {
      Variant::_clear_internal();
   }

   plVar3 = local_58;
   if (local_58 != (long*)0x0) {
      LOCK();
      plVar5 = local_58 + -2;
      *plVar5 = *plVar5 + -1;
      UNLOCK();
      if (*plVar5 == 0) {
         if (local_58 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar1 = local_58[-1];
         local_58 = (long*)0x0;
         if (lVar1 != 0) {
            lVar6 = 0;
            plVar5 = plVar3;
            do {
               if (( StringName::configured != '\0' ) && ( *plVar5 != 0 )) {
                  StringName::unref();
               }

               lVar6 = lVar6 + 1;
               plVar5 = plVar5 + 1;
            }
 while ( lVar1 != lVar6 );
         }

         Memory::free_static(plVar3 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_68[0] != 0 )) {
      StringName::unref();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GPUParticles2D::convert_from_particles(Node*) */void GPUParticles2D::convert_from_particles(GPUParticles2D *this, Node *param_1) {
   bool bVar1;
   GPUParticles2D GVar2;
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
   Object *local_88;
   Object *local_80;
   Object *local_78;
   long local_70;
   Ref *local_68;
   Object *local_60;
   undefined1 local_58[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_1 == (Node*)0x0 ) || ( lVar6 = __dynamic_cast(param_1, &Object::typeinfo, &CPUParticles2D::typeinfo, 0) ),lVar6 == 0) {
      _err_print_error("convert_from_particles", "scene/2d/gpu_particles_2d.cpp", 0x1ef, "Parameter \"cpu_particles\" is null.", "Only CPUParticles2D nodes can be converted to GPUParticles2D.", 0, 0);
   }
 else {
      bVar1 = (bool)CPUParticles2D::is_emitting();
      set_emitting(this, bVar1);
      iVar5 = CPUParticles2D::get_amount();
      set_amount(this, iVar5);
      dVar14 = (double)CPUParticles2D::get_lifetime();
      set_lifetime(this, dVar14);
      bVar1 = (bool)CPUParticles2D::get_one_shot();
      set_one_shot(this, bVar1);
      uVar15 = CPUParticles2D::get_pre_process_time();
      *(undefined8*)( this + 0x5a0 ) = uVar15;
      plVar7 = (long*)RenderingServer::get_singleton();
      ( **(code**)( *plVar7 + 0x7b8 ) )(*(undefined8*)( this + 0x5a0 ), plVar7, *(undefined8*)( this + 0x580 ));
      uVar12 = CPUParticles2D::get_explosiveness_ratio();
      *(undefined4*)( this + 0x5a8 ) = uVar12;
      plVar7 = (long*)RenderingServer::get_singleton();
      ( **(code**)( *plVar7 + 0x7c8 ) )(*(undefined4*)( this + 0x5a8 ), plVar7, *(undefined8*)( this + 0x580 ));
      uVar12 = CPUParticles2D::get_randomness_ratio();
      *(undefined4*)( this + 0x5ac ) = uVar12;
      plVar7 = (long*)RenderingServer::get_singleton();
      ( **(code**)( *plVar7 + 2000 ) )(*(undefined4*)( this + 0x5ac ), plVar7, *(undefined8*)( this + 0x580 ));
      bVar1 = (bool)CPUParticles2D::get_use_local_coordinates();
      set_use_local_coordinates(this, bVar1);
      uVar12 = CPUParticles2D::get_fixed_fps();
      *(undefined4*)( this + 0x5cc ) = uVar12;
      plVar7 = (long*)RenderingServer::get_singleton();
      ( **(code**)( *plVar7 + 0x7f8 ) )(plVar7, *(undefined8*)( this + 0x580 ), uVar12);
      GVar2 = (GPUParticles2D)CPUParticles2D::get_fractional_delta();
      this[0x5d0] = GVar2;
      plVar7 = (long*)RenderingServer::get_singleton();
      ( **(code**)( *plVar7 + 0x808 ) )(plVar7, *(undefined8*)( this + 0x580 ), GVar2);
      uVar15 = CPUParticles2D::get_speed_scale();
      *(undefined8*)( this + 0x5b0 ) = uVar15;
      plVar7 = (long*)RenderingServer::get_singleton();
      ( **(code**)( *plVar7 + 0x7e0 ) )(uVar15, plVar7, *(undefined8*)( this + 0x580 ));
      uVar12 = CPUParticles2D::get_draw_order();
      *(undefined4*)( this + 0x600 ) = uVar12;
      plVar7 = (long*)RenderingServer::get_singleton();
      ( **(code**)( *plVar7 + 0x860 ) )(plVar7, *(undefined8*)( this + 0x580 ), uVar12);
      CPUParticles2D::get_texture();
      set_texture(this, (Ref*)&local_60);
      Ref<Texture2D>::unref((Ref<Texture2D>*)&local_60);
      CanvasItem::get_material();
      if (local_88 != (Object*)0x0) {
         ( **(code**)( *(long*)this + 0x2b8 ) )(this, &local_88);
      }

      this_00 = (ParticleProcessMaterial*)operator_new(0x580, "");
      ParticleProcessMaterial::ParticleProcessMaterial(this_00);
      postinitialize_handler((Object*)this_00);
      cVar3 = RefCounted::init_ref();
      local_60 = (Object*)0x0;
      if (cVar3 == '\0') {
         this_00 = (ParticleProcessMaterial*)0x0;
         set_process_material((Ref*)this);
      }
 else {
         pOVar11 = (Object*)__dynamic_cast(this_00, &Object::typeinfo, &Material::typeinfo, 0);
         if (pOVar11 == (Object*)0x0) {
            set_process_material((Ref*)this);
         }
 else {
            local_60 = pOVar11;
            cVar3 = RefCounted::reference();
            if (cVar3 == '\0') {
               local_60 = (Object*)0x0;
               set_process_material((Ref*)this);
            }
 else {
               set_process_material((Ref*)this);
               cVar3 = RefCounted::unreference();
               if (( cVar3 != '\0' ) && ( cVar3 = cVar3 != '\0' )) {
                  ( **(code**)( *(long*)pOVar11 + 0x140 ) )(pOVar11);
                  Memory::free_static(pOVar11, false);
               }

            }

         }

      }

      local_58._0_8_ = CPUParticles2D::get_direction();
      local_58._8_8_ = (ulong)(uint)local_58._12_4_ << 0x20;
      ParticleProcessMaterial::set_direction(local_58._0_8_, 0, this_00);
      fVar13 = (float)CPUParticles2D::get_spread();
      ParticleProcessMaterial::set_spread(fVar13);
      local_58 = CPUParticles2D::get_color();
      ParticleProcessMaterial::set_color((Color*)this_00);
      CPUParticles2D::get_color_ramp();
      if (local_80 != (Object*)0x0) {
         pGVar8 = (GradientTexture1D*)operator_new(0x308, "");
         GradientTexture1D::GradientTexture1D(pGVar8);
         postinitialize_handler((Object*)pGVar8);
         cVar3 = RefCounted::init_ref();
         local_60 = (Object*)0x0;
         if (cVar3 == '\0') {
            pGVar8 = (GradientTexture1D*)0x0;
         }

         if (local_80 != (Object*)0x0) {
            local_60 = local_80;
            cVar3 = RefCounted::reference();
            if (cVar3 == '\0') {
               local_60 = (Object*)0x0;
            }

         }

         GradientTexture1D::set_gradient(pGVar8);
         if (local_60 != (Object*)0x0) {
            cVar3 = RefCounted::unreference();
            pOVar11 = local_60;
            if (cVar3 != '\0') {
               cVar3 = predelete_handler(local_60);
               if (cVar3 != '\0') {
                  ( **(code**)( *(long*)pOVar11 + 0x140 ) )();
                  Memory::free_static(pOVar11, false);
               }

            }

         }

         local_68 = (Ref*)0x0;
         pRVar9 = (Ref*)__dynamic_cast(pGVar8, &Object::typeinfo, &Texture2D::typeinfo, 0);
         if (pRVar9 != (Ref*)0x0) {
            local_60 = (Object*)0x0;
            local_68 = pRVar9;
            cVar3 = RefCounted::reference();
            if (cVar3 == '\0') {
               local_68 = (Ref*)0x0;
            }

            Ref<Texture2D>::unref((Ref<Texture2D>*)&local_60);
         }

         ParticleProcessMaterial::set_color_ramp((Ref*)this_00);
         Ref<Texture2D>::unref((Ref<Texture2D>*)&local_68);
         cVar3 = RefCounted::unreference();
         if (cVar3 != '\0') {
            cVar3 = predelete_handler((Object*)pGVar8);
            if (cVar3 != '\0') {
               ( **(code**)( *(long*)pGVar8 + 0x140 ) )(pGVar8);
               Memory::free_static(pGVar8, false);
            }

         }

      }

      CPUParticles2D::get_color_initial_ramp();
      if (local_78 != (Object*)0x0) {
         pGVar8 = (GradientTexture1D*)operator_new(0x308, "");
         GradientTexture1D::GradientTexture1D(pGVar8);
         postinitialize_handler((Object*)pGVar8);
         cVar3 = RefCounted::init_ref();
         local_60 = (Object*)0x0;
         if (cVar3 == '\0') {
            pGVar8 = (GradientTexture1D*)0x0;
         }

         if (local_78 != (Object*)0x0) {
            local_60 = local_78;
            cVar3 = RefCounted::reference();
            if (cVar3 == '\0') {
               local_60 = (Object*)0x0;
            }

         }

         GradientTexture1D::set_gradient(pGVar8);
         if (local_60 != (Object*)0x0) {
            cVar3 = RefCounted::unreference();
            pOVar11 = local_60;
            if (cVar3 != '\0') {
               cVar3 = predelete_handler(local_60);
               if (cVar3 != '\0') {
                  ( **(code**)( *(long*)pOVar11 + 0x140 ) )();
                  Memory::free_static(pOVar11, false);
               }

            }

         }

         local_68 = (Ref*)0x0;
         pRVar9 = (Ref*)__dynamic_cast(pGVar8, &Object::typeinfo, &Texture2D::typeinfo, 0);
         if (pRVar9 != (Ref*)0x0) {
            local_60 = (Object*)0x0;
            local_68 = pRVar9;
            cVar3 = RefCounted::reference();
            if (cVar3 == '\0') {
               local_68 = (Ref*)0x0;
            }

            Ref<Texture2D>::unref((Ref<Texture2D>*)&local_60);
         }

         ParticleProcessMaterial::set_color_initial_ramp((Ref*)this_00);
         Ref<Texture2D>::unref((Ref<Texture2D>*)&local_68);
         cVar3 = RefCounted::unreference();
         if (cVar3 != '\0') {
            cVar3 = predelete_handler((Object*)pGVar8);
            if (cVar3 != '\0') {
               ( **(code**)( *(long*)pGVar8 + 0x140 ) )(pGVar8);
               Memory::free_static(pGVar8, false);
            }

         }

      }

      uVar4 = CPUParticles2D::get_particle_flag(lVar6, 0);
      ParticleProcessMaterial::set_particle_flag(this_00, 0, uVar4);
      uVar12 = CPUParticles2D::get_emission_shape();
      ParticleProcessMaterial::set_emission_shape(this_00, uVar12);
      fVar13 = (float)CPUParticles2D::get_emission_sphere_radius();
      ParticleProcessMaterial::set_emission_sphere_radius(fVar13);
      uVar15 = CPUParticles2D::get_emission_rect_extents();
      local_58._8_8_ = local_58._8_8_ & 0xffffffff00000000;
      local_58._0_8_ = uVar15;
      ParticleProcessMaterial::set_emission_box_extents(uVar15, 0, this_00);
      cVar3 = CPUParticles2D::get_split_scale();
      if (cVar3 != '\0') {
         this_01 = (CurveXYZTexture*)operator_new(0x310, "");
         CurveXYZTexture::CurveXYZTexture(this_01);
         postinitialize_handler((Object*)this_01);
         cVar3 = RefCounted::init_ref();
         if (cVar3 == '\0') {
            this_01 = (CurveXYZTexture*)0x0;
         }

         CPUParticles2D::get_scale_curve_x();
         CurveXYZTexture::set_curve_x(this_01, (Ref<Texture2D>*)&local_60);
         Ref<Curve>::unref((Ref<Curve>*)&local_60);
         CPUParticles2D::get_scale_curve_y();
         CurveXYZTexture::set_curve_y(this_01, (Ref<Texture2D>*)&local_60);
         Ref<Curve>::unref((Ref<Curve>*)&local_60);
         local_68 = (Ref*)0x0;
         pRVar9 = (Ref*)__dynamic_cast(this_01, &Object::typeinfo, &Texture2D::typeinfo, 0);
         if (pRVar9 != (Ref*)0x0) {
            local_60 = (Object*)0x0;
            local_68 = pRVar9;
            cVar3 = RefCounted::reference();
            if (cVar3 == '\0') {
               local_68 = (Ref*)0x0;
            }

            Ref<Texture2D>::unref((Ref<Texture2D>*)&local_60);
         }

         ParticleProcessMaterial::set_param_texture(this_00, 8, (Ref<Texture2D>*)&local_68);
         Ref<Texture2D>::unref((Ref<Texture2D>*)&local_68);
         cVar3 = RefCounted::unreference();
         if (( cVar3 != '\0' ) && ( cVar3 = predelete_handler((Object*)this_01) ),cVar3 != '\0') {
            ( **(code**)( *(long*)this_01 + 0x140 ) )(this_01);
            Memory::free_static(this_01, false);
         }

      }

      local_58._0_8_ = CPUParticles2D::get_gravity();
      local_58._8_8_ = local_58._8_8_ & 0xffffffff00000000;
      ParticleProcessMaterial::set_gravity((Vector3*)this_00);
      dVar14 = (double)CPUParticles2D::get_lifetime_randomness();
      ParticleProcessMaterial::set_lifetime_randomness(dVar14);
      CPUParticles2D::get_param_min(lVar6, 0);
      ParticleProcessMaterial::set_param_min(this_00, 0);
      CPUParticles2D::get_param_curve((Ref<Curve>*)&local_70, lVar6, 0);
      if (local_70 != 0) {
         pCVar10 = (CurveTexture*)operator_new(0x308, "");
         CurveTexture::CurveTexture(pCVar10);
         postinitialize_handler((Object*)pCVar10);
         local_68 = (Ref*)0x0;
         Ref<CurveTexture>::operator =((Ref<CurveTexture>*)&local_68, pCVar10);
         pRVar9 = local_68;
         local_60 = (Object*)0x0;
         if (local_70 != 0) {
            local_60 = (Object*)local_70;
            cVar3 = RefCounted::reference();
            if (cVar3 == '\0') {
               local_60 = (Object*)0x0;
            }

         }

         CurveTexture::set_curve(pRVar9, (Ref<Texture2D>*)&local_60);
         Ref<Curve>::unref((Ref<Curve>*)&local_60);
         local_60 = (Object*)0x0;
         Ref<Texture2D>::operator =((Ref<Texture2D>*)&local_60, pRVar9);
         ParticleProcessMaterial::set_param_texture(this_00, 0, (Ref<Texture2D>*)&local_60);
         Ref<Texture2D>::unref((Ref<Texture2D>*)&local_60);
         cVar3 = RefCounted::unreference();
         if (( cVar3 != '\0' ) && ( cVar3 = predelete_handler((Object*)pRVar9) ),cVar3 != '\0') {
            ( **(code**)( *(long*)pRVar9 + 0x140 ) )(pRVar9);
            Memory::free_static(pRVar9, false);
         }

      }

      Ref<Curve>::unref((Ref<Curve>*)&local_70);
      CPUParticles2D::get_param_max(lVar6, 0);
      for (int i = 0; i < 11; i++) {
         ParticleProcessMaterial::set_param_max(this_00, i);
         CPUParticles2D::get_param_min(lVar6, ( i + 1 ));
         ParticleProcessMaterial::set_param_min(this_00, ( i + 1 ));
         CPUParticles2D::get_param_curve((Ref<Curve>*)&local_70, lVar6, ( i + 1 ));
         if (local_70 != 0) {
            pCVar10 = (CurveTexture*)operator_new(776, "");
            CurveTexture::CurveTexture(pCVar10);
            postinitialize_handler((Object*)pCVar10);
            local_68 = (Ref*)0;
            Ref<CurveTexture>::operator =((Ref<CurveTexture>*)&local_68, pCVar10);
            pRVar9 = local_68;
            local_60 = (Object*)0;
            if (local_70 != 0) {
               local_60 = (Object*)local_70;
               cVar3 = RefCounted::reference();
               if (cVar3 == '\0') {
                  local_60 = (Object*)0;
               }

            }

            CurveTexture::set_curve(pRVar9, (Ref<Texture2D>*)&local_60);
            Ref<Curve>::unref((Ref<Curve>*)&local_60);
            local_60 = (Object*)0;
            Ref<Texture2D>::operator =((Ref<Texture2D>*)&local_60, pRVar9);
            ParticleProcessMaterial::set_param_texture(this_00, ( i + 1 ), (Ref<Texture2D>*)&local_60);
            Ref<Texture2D>::unref((Ref<Texture2D>*)&local_60);
            cVar3 = RefCounted::unreference();
            if (( cVar3 != '\0' ) && ( cVar3 = predelete_handler((Object*)pRVar9) ),cVar3 != '\0') {
               ( **(code**)( *(long*)pRVar9 + 320 ) )(pRVar9);
               Memory::free_static(pRVar9, false);
            }

         }

         Ref<Curve>::unref((Ref<Curve>*)&local_70);
         CPUParticles2D::get_param_max(lVar6, ( i + 1 ));
      }

      ParticleProcessMaterial::set_param_max(this_00);
      if (( ( local_78 != (Object*)0x0 ) && ( cVar3 = RefCounted::unreference() ),cVar3 != '\0' )) &&( cVar3 = cVar3 != '\0' )(**(code**)( *(long*)local_78 + 0x140 ))(local_78);
      Memory::free_static(local_78, false);
   }

   if (( ( local_80 != (Object*)0x0 ) && ( cVar3 = RefCounted::unreference() ),cVar3 != '\0' )) &&( cVar3 = cVar3 != '\0' )(**(code**)( *(long*)local_80 + 0x140 ))(local_80);
   Memory::free_static(local_80, false);
}
cVar3 = RefCounted::unreference();if (( cVar3 != '\0' ) && ( cVar3 = predelete_handler((Object*)this_00) ),cVar3 != '\0') {
   ( **(code**)( *(long*)this_00 + 0x140 ) )(this_00);
   Memory::free_static(this_00, false);
}
if (( ( local_88 != (Object*)0x0 ) && ( cVar3 = RefCounted::unreference() ),cVar3 != '\0' )) &&( cVar3 = cVar3 != '\0' )(**(code**)( *(long*)local_88 + 0x140 ))(local_88);Memory::free_static(local_88, false);}
  }if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return;}/* Vector<Vector2>::push_back(Vector2) [clone .isra.0] */void Vector<Vector2>::push_back(undefined8 param_1, Vector<Vector2> *this) {
   int iVar1;
   long lVar2;
   long lVar3;
   if (*(long*)( this + 8 ) == 0) {
      lVar2 = 1;
   }
 else {
      lVar2 = *(long*)( *(long*)( this + 8 ) + -8 ) + 1;
   }

   iVar1 = CowData<Vector2>::resize<false>((CowData<Vector2>*)( this + 8 ), lVar2);
   if (iVar1 == 0) {
      if (*(long*)( this + 8 ) == 0) {
         lVar3 = -1;
         lVar2 = 0;
      }
 else {
         lVar2 = *(long*)( *(long*)( this + 8 ) + -8 );
         lVar3 = lVar2 + -1;
         if (-1 < lVar3) {
            CowData<Vector2>::_copy_on_write((CowData<Vector2>*)( this + 8 ));
            *(undefined8*)( *(long*)( this + 8 ) + lVar3 * 8 ) = param_1;
            return;
         }

      }

      _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar3, lVar2, "p_index", "size()", "", false, false);
      return;
   }

   _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
   return;
}
/* CowData<String>::_copy_on_write() [clone .isra.0] */void CowData<String>::_copy_on_write(CowData<String> *this) {
   CowData *pCVar1;
   long lVar2;
   long lVar3;
   code *pcVar4;
   undefined8 *puVar5;
   long lVar6;
   ulong uVar7;
   CowData<char32_t> *this_00;
   if (( *(long*)this == 0 ) || ( *(ulong*)( *(long*)this + -0x10 ) < 2 )) {
      return;
   }

   if (*(long*)this == 0) {
      /* WARNING: Does not return */
      pcVar4 = (code*)invalidInstructionException();
      ( *pcVar4 )();
   }

   lVar2 = *(long*)( *(long*)this + -8 );
   uVar7 = 0x10;
   if (lVar2 * 8 != 0) {
      uVar7 = lVar2 * 8 - 1;
      uVar7 = uVar7 | uVar7 >> 1;
      uVar7 = uVar7 | uVar7 >> 2;
      uVar7 = uVar7 | uVar7 >> 4;
      uVar7 = uVar7 | uVar7 >> 8;
      uVar7 = uVar7 | uVar7 >> 0x10;
      uVar7 = ( uVar7 | uVar7 >> 0x20 ) + 0x11;
   }

   puVar5 = (undefined8*)Memory::alloc_static(uVar7, false);
   if (puVar5 != (undefined8*)0x0) {
      lVar6 = 0;
      *puVar5 = 1;
      puVar5[1] = lVar2;
      this_00 = (CowData<char32_t>*)( puVar5 + 2 );
      if (lVar2 != 0) {
         do {
            lVar3 = *(long*)this;
            *(undefined8*)this_00 = 0;
            pCVar1 = (CowData*)( lVar3 + lVar6 * 8 );
            if (*(long*)pCVar1 != 0) {
               CowData<char32_t>::_ref(this_00, pCVar1);
            }

            lVar6 = lVar6 + 1;
            this_00 = this_00 + 8;
         }
 while ( lVar2 != lVar6 );
      }

      _unref(this);
      *(CowData<char32_t>**)this = (CowData<char32_t>*)( puVar5 + 2 );
      return;
   }

   _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
   return;
}
/* GPUParticles2D::_bind_methods() */void GPUParticles2D::_bind_methods(void) {
   long *plVar1;
   char cVar2;
   long lVar3;
   code *pcVar4;
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   undefined1 auVar11[16];
   undefined1 auVar12[16];
   int *piVar13;
   MethodBind *pMVar14;
   int *piVar15;
   long lVar16;
   long in_FS_OFFSET;
   undefined8 local_178;
   CowData<char32_t> local_170[8];
   String local_168[8];
   undefined8 local_160;
   long local_158;
   undefined8 local_150;
   long local_148;
   long local_140;
   long local_138;
   long local_130;
   char *local_128;
   undefined8 local_120;
   undefined1 local_118[16];
   undefined8 local_108;
   undefined8 local_100;
   undefined8 local_f8;
   undefined8 local_f0;
   undefined8 local_e8[2];
   int *local_d8;
   undefined8 local_d0;
   long local_c0;
   Variant *local_b8[2];
   char *local_a8;
   char *pcStack_a0;
   char *local_98;
   char *pcStack_90;
   char *local_88;
   undefined8 local_80;
   char **local_78;
   undefined1 auStack_70[16];
   char **ppcStack_60;
   undefined1 local_58[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   D_METHOD<char_const*>((char*)&local_128, "set_emitting");
   auStack_70 = (undefined1[16])0x0;
   local_78 = (char**)0x0;
   pMVar14 = create_method_bind<GPUParticles2D,bool>(set_emitting);
   ClassDB::bind_methodfi(1, pMVar14, false, (MethodDefinition*)&local_128, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_128);
   D_METHOD<char_const*>((char*)&local_128, "set_amount");
   auStack_70 = (undefined1[16])0x0;
   local_78 = (char**)0x0;
   pMVar14 = create_method_bind<GPUParticles2D,int>(set_amount);
   ClassDB::bind_methodfi(1, pMVar14, false, (MethodDefinition*)&local_128, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_128);
   D_METHOD<char_const*>((char*)&local_128, "set_lifetime");
   auStack_70 = (undefined1[16])0x0;
   local_78 = (char**)0x0;
   pMVar14 = create_method_bind<GPUParticles2D,double>(set_lifetime);
   ClassDB::bind_methodfi(1, pMVar14, false, (MethodDefinition*)&local_128, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_128);
   D_METHOD<char_const*>((char*)&local_128, "set_one_shot");
   auStack_70 = (undefined1[16])0x0;
   local_78 = (char**)0x0;
   pMVar14 = create_method_bind<GPUParticles2D,bool>(set_one_shot);
   ClassDB::bind_methodfi(1, pMVar14, false, (MethodDefinition*)&local_128, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_128);
   D_METHOD<char_const*>((char*)&local_128, "set_pre_process_time");
   auStack_70 = (undefined1[16])0x0;
   local_78 = (char**)0x0;
   pMVar14 = create_method_bind<GPUParticles2D,double>(set_pre_process_time);
   ClassDB::bind_methodfi(1, pMVar14, false, (MethodDefinition*)&local_128, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_128);
   D_METHOD<char_const*>((char*)&local_128, "set_explosiveness_ratio");
   auStack_70 = (undefined1[16])0x0;
   local_78 = (char**)0x0;
   pMVar14 = create_method_bind<GPUParticles2D,float>(set_explosiveness_ratio);
   ClassDB::bind_methodfi(1, pMVar14, false, (MethodDefinition*)&local_128, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_128);
   D_METHOD<char_const*>((char*)&local_128, "set_randomness_ratio");
   auStack_70 = (undefined1[16])0x0;
   local_78 = (char**)0x0;
   pMVar14 = create_method_bind<GPUParticles2D,float>(set_randomness_ratio);
   ClassDB::bind_methodfi(1, pMVar14, false, (MethodDefinition*)&local_128, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_128);
   D_METHOD<char_const*>((char*)&local_128, "set_visibility_rect");
   auStack_70 = (undefined1[16])0x0;
   local_78 = (char**)0x0;
   pMVar14 = create_method_bind<GPUParticles2D,Rect2_const&>(set_visibility_rect);
   ClassDB::bind_methodfi(1, pMVar14, false, (MethodDefinition*)&local_128, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_128);
   D_METHOD<char_const*>((char*)&local_128, "set_use_local_coordinates");
   auStack_70 = (undefined1[16])0x0;
   local_78 = (char**)0x0;
   pMVar14 = create_method_bind<GPUParticles2D,bool>(set_use_local_coordinates);
   ClassDB::bind_methodfi(1, pMVar14, false, (MethodDefinition*)&local_128, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_128);
   D_METHOD<char_const*>((char*)&local_128, "set_fixed_fps");
   auStack_70 = (undefined1[16])0x0;
   local_78 = (char**)0x0;
   pMVar14 = create_method_bind<GPUParticles2D,int>(set_fixed_fps);
   ClassDB::bind_methodfi(1, pMVar14, false, (MethodDefinition*)&local_128, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_128);
   D_METHOD<char_const*>((char*)&local_128, "set_fractional_delta");
   auStack_70 = (undefined1[16])0x0;
   local_78 = (char**)0x0;
   pMVar14 = create_method_bind<GPUParticles2D,bool>(set_fractional_delta);
   ClassDB::bind_methodfi(1, pMVar14, false, (MethodDefinition*)&local_128, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_128);
   D_METHOD<char_const*>((char*)&local_128, "set_interpolate");
   auStack_70 = (undefined1[16])0x0;
   local_78 = (char**)0x0;
   pMVar14 = create_method_bind<GPUParticles2D,bool>(set_interpolate);
   ClassDB::bind_methodfi(1, pMVar14, false, (MethodDefinition*)&local_128, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_128);
   D_METHOD<char_const*>((char*)&local_128, "set_process_material");
   auStack_70 = (undefined1[16])0x0;
   local_78 = (char**)0x0;
   pMVar14 = create_method_bind<GPUParticles2D,Ref<Material>const&>(set_process_material);
   ClassDB::bind_methodfi(1, pMVar14, false, (MethodDefinition*)&local_128, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_128);
   D_METHOD<char_const*>((char*)&local_128, "set_speed_scale");
   auStack_70 = (undefined1[16])0x0;
   local_78 = (char**)0x0;
   pMVar14 = create_method_bind<GPUParticles2D,double>(set_speed_scale);
   ClassDB::bind_methodfi(1, pMVar14, false, (MethodDefinition*)&local_128, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_128);
   D_METHOD<char_const*>((char*)&local_128, "set_collision_base_size");
   auStack_70 = (undefined1[16])0x0;
   local_78 = (char**)0x0;
   pMVar14 = create_method_bind<GPUParticles2D,float>(set_collision_base_size);
   ClassDB::bind_methodfi(1, pMVar14, false, (MethodDefinition*)&local_128, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_128);
   D_METHOD<char_const*>((char*)&local_128, "set_interp_to_end");
   auStack_70 = (undefined1[16])0x0;
   local_78 = (char**)0x0;
   pMVar14 = create_method_bind<GPUParticles2D,float>(set_interp_to_end);
   ClassDB::bind_methodfi(1, pMVar14, false, (MethodDefinition*)&local_128, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_128);
   D_METHOD<char_const*>((char*)&local_128, "request_particles_process");
   auStack_70 = (undefined1[16])0x0;
   local_78 = (char**)0x0;
   pMVar14 = create_method_bind<GPUParticles2D,float>(request_particles_process);
   ClassDB::bind_methodfi(1, pMVar14, false, (MethodDefinition*)&local_128, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_128);
   D_METHODP((char*)&local_128, (char***)"is_emitting", 0);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (char**)0x0;
   pMVar14 = create_method_bind<GPUParticles2D,bool>(is_emitting);
   ClassDB::bind_methodfi(1, pMVar14, false, (MethodDefinition*)&local_128, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_128);
   D_METHODP((char*)&local_128, (char***)"get_amount", 0);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (char**)0x0;
   pMVar14 = create_method_bind<GPUParticles2D,int>(get_amount);
   ClassDB::bind_methodfi(1, pMVar14, false, (MethodDefinition*)&local_128, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_128);
   D_METHODP((char*)&local_128, (char***)"get_lifetime", 0);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (char**)0x0;
   pMVar14 = create_method_bind<GPUParticles2D,double>(get_lifetime);
   ClassDB::bind_methodfi(1, pMVar14, false, (MethodDefinition*)&local_128, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_128);
   D_METHODP((char*)&local_128, (char***)"get_one_shot", 0);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (char**)0x0;
   pMVar14 = create_method_bind<GPUParticles2D,bool>(get_one_shot);
   ClassDB::bind_methodfi(1, pMVar14, false, (MethodDefinition*)&local_128, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_128);
   D_METHODP((char*)&local_128, (char***)"get_pre_process_time", 0);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (char**)0x0;
   pMVar14 = create_method_bind<GPUParticles2D,double>(get_pre_process_time);
   ClassDB::bind_methodfi(1, pMVar14, false, (MethodDefinition*)&local_128, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_128);
   D_METHODP((char*)&local_128, (char***)"get_explosiveness_ratio", 0);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (char**)0x0;
   pMVar14 = create_method_bind<GPUParticles2D,float>(get_explosiveness_ratio);
   ClassDB::bind_methodfi(1, pMVar14, false, (MethodDefinition*)&local_128, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_128);
   D_METHODP((char*)&local_128, (char***)"get_randomness_ratio", 0);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (char**)0x0;
   pMVar14 = create_method_bind<GPUParticles2D,float>(get_randomness_ratio);
   ClassDB::bind_methodfi(1, pMVar14, false, (MethodDefinition*)&local_128, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_128);
   D_METHODP((char*)&local_128, (char***)"get_visibility_rect", 0);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (char**)0x0;
   pMVar14 = create_method_bind<GPUParticles2D,Rect2>(get_visibility_rect);
   ClassDB::bind_methodfi(1, pMVar14, false, (MethodDefinition*)&local_128, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_128);
   D_METHODP((char*)&local_128, (char***)"get_use_local_coordinates", 0);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (char**)0x0;
   pMVar14 = create_method_bind<GPUParticles2D,bool>(get_use_local_coordinates);
   ClassDB::bind_methodfi(1, pMVar14, false, (MethodDefinition*)&local_128, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_128);
   D_METHODP((char*)&local_128, (char***)"get_fixed_fps", 0);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (char**)0x0;
   pMVar14 = create_method_bind<GPUParticles2D,int>(get_fixed_fps);
   ClassDB::bind_methodfi(1, pMVar14, false, (MethodDefinition*)&local_128, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_128);
   D_METHODP((char*)&local_128, (char***)"get_fractional_delta", 0);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (char**)0x0;
   pMVar14 = create_method_bind<GPUParticles2D,bool>(get_fractional_delta);
   ClassDB::bind_methodfi(1, pMVar14, false, (MethodDefinition*)&local_128, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_128);
   D_METHODP((char*)&local_128, (char***)"get_interpolate", 0);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (char**)0x0;
   pMVar14 = create_method_bind<GPUParticles2D,bool>(get_interpolate);
   ClassDB::bind_methodfi(1, pMVar14, false, (MethodDefinition*)&local_128, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_128);
   D_METHODP((char*)&local_128, (char***)"get_process_material", 0);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (char**)0x0;
   pMVar14 = create_method_bind<GPUParticles2D,Ref<Material>>(get_process_material);
   ClassDB::bind_methodfi(1, pMVar14, false, (MethodDefinition*)&local_128, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_128);
   D_METHODP((char*)&local_128, (char***)"get_speed_scale", 0);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (char**)0x0;
   pMVar14 = create_method_bind<GPUParticles2D,double>(get_speed_scale);
   ClassDB::bind_methodfi(1, pMVar14, false, (MethodDefinition*)&local_128, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_128);
   D_METHODP((char*)&local_128, (char***)"get_collision_base_size", 0);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (char**)0x0;
   pMVar14 = create_method_bind<GPUParticles2D,float>(get_collision_base_size);
   ClassDB::bind_methodfi(1, pMVar14, false, (MethodDefinition*)&local_128, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_128);
   D_METHODP((char*)&local_128, (char***)"get_interp_to_end", 0);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (char**)0x0;
   pMVar14 = create_method_bind<GPUParticles2D,float>(get_interp_to_end);
   ClassDB::bind_methodfi(1, pMVar14, false, (MethodDefinition*)&local_128, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_128);
   D_METHOD<char_const*>((char*)&local_128, "set_draw_order");
   auStack_70 = (undefined1[16])0x0;
   local_78 = (char**)0x0;
   pMVar14 = create_method_bind<GPUParticles2D,GPUParticles2D::DrawOrder>(set_draw_order);
   ClassDB::bind_methodfi(1, pMVar14, false, (MethodDefinition*)&local_128, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_128);
   D_METHODP((char*)&local_128, (char***)"get_draw_order", 0);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (char**)0x0;
   pMVar14 = create_method_bind<GPUParticles2D,GPUParticles2D::DrawOrder>(get_draw_order);
   ClassDB::bind_methodfi(1, pMVar14, false, (MethodDefinition*)&local_128, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_128);
   D_METHOD<char_const*>((char*)&local_128, "set_texture");
   auStack_70 = (undefined1[16])0x0;
   local_78 = (char**)0x0;
   pMVar14 = create_method_bind<GPUParticles2D,Ref<Texture2D>const&>(set_texture);
   ClassDB::bind_methodfi(1, pMVar14, false, (MethodDefinition*)&local_128, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_128);
   D_METHODP((char*)&local_128, (char***)"get_texture", 0);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (char**)0x0;
   pMVar14 = create_method_bind<GPUParticles2D,Ref<Texture2D>>(get_texture);
   ClassDB::bind_methodfi(1, pMVar14, false, (MethodDefinition*)&local_128, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_128);
   D_METHODP((char*)&local_128, (char***)"capture_rect", 0);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (char**)0x0;
   pMVar14 = create_method_bind<GPUParticles2D,Rect2>(capture_rect);
   ClassDB::bind_methodfi(1, pMVar14, false, (MethodDefinition*)&local_128, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_128);
   D_METHOD<char_const*>((char*)&local_128, "restart");
   Variant::Variant((Variant*)&local_78, false);
   local_58 = (undefined1[16])0x0;
   ppcStack_60 = (char**)0x0;
   local_b8[0] = (Variant*)&local_78;
   pMVar14 = create_method_bind<GPUParticles2D,bool>(restart);
   ClassDB::bind_methodfi(1, pMVar14, false, (MethodDefinition*)&local_128, local_b8, 1);
   if (Variant::needs_deinit[(int)ppcStack_60] == '\0') {
      cVar2 = Variant::needs_deinit[(int)local_78];
   }
 else {
      Variant::_clear_internal();
      cVar2 = Variant::needs_deinit[(int)local_78];
   }

   if (cVar2 != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_128);
   D_METHOD<char_const*>((char*)&local_128, "set_sub_emitter");
   auStack_70 = (undefined1[16])0x0;
   local_78 = (char**)0x0;
   pMVar14 = create_method_bind<GPUParticles2D,NodePath_const&>(set_sub_emitter);
   ClassDB::bind_methodfi(1, pMVar14, false, (MethodDefinition*)&local_128, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_128);
   D_METHODP((char*)&local_128, (char***)"get_sub_emitter", 0);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (char**)0x0;
   pMVar14 = create_method_bind<GPUParticles2D,NodePath>(get_sub_emitter);
   ClassDB::bind_methodfi(1, pMVar14, false, (MethodDefinition*)&local_128, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_128);
   local_a8 = "xform";
   pcStack_a0 = "velocity";
   local_88 = "flags";
   auStack_70._8_8_ = &local_98;
   auStack_70._0_8_ = &pcStack_a0;
   local_58._0_8_ = &local_88;
   local_98 = "color";
   pcStack_90 = "custom";
   local_80 = 0;
   local_78 = &local_a8;
   ppcStack_60 = &pcStack_90;
   D_METHODP((char*)&local_128, (char***)"emit_particle", (uint)(Variant*)&local_78);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (char**)0x0;
   pMVar14 = create_method_bind<GPUParticles2D,Transform2D_const&,Vector2_const&,Color_const&,Color_const&,unsigned_int>(emit_particle);
   ClassDB::bind_methodfi(1, pMVar14, false, (MethodDefinition*)&local_128, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_128);
   D_METHOD<char_const*>((char*)&local_128, "set_trail_enabled");
   auStack_70 = (undefined1[16])0x0;
   local_78 = (char**)0x0;
   pMVar14 = create_method_bind<GPUParticles2D,bool>(set_trail_enabled);
   ClassDB::bind_methodfi(1, pMVar14, false, (MethodDefinition*)&local_128, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_128);
   D_METHOD<char_const*>((char*)&local_128, "set_trail_lifetime");
   auStack_70 = (undefined1[16])0x0;
   local_78 = (char**)0x0;
   pMVar14 = create_method_bind<GPUParticles2D,double>(set_trail_lifetime);
   ClassDB::bind_methodfi(1, pMVar14, false, (MethodDefinition*)&local_128, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_128);
   D_METHODP((char*)&local_128, (char***)"is_trail_enabled", 0);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (char**)0x0;
   pMVar14 = create_method_bind<GPUParticles2D,bool>(is_trail_enabled);
   ClassDB::bind_methodfi(1, pMVar14, false, (MethodDefinition*)&local_128, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_128);
   D_METHODP((char*)&local_128, (char***)"get_trail_lifetime", 0);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (char**)0x0;
   pMVar14 = create_method_bind<GPUParticles2D,double>(get_trail_lifetime);
   ClassDB::bind_methodfi(1, pMVar14, false, (MethodDefinition*)&local_128, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_128);
   D_METHOD<char_const*>((char*)&local_128, "set_trail_sections");
   auStack_70 = (undefined1[16])0x0;
   local_78 = (char**)0x0;
   pMVar14 = create_method_bind<GPUParticles2D,int>(set_trail_sections);
   ClassDB::bind_methodfi(1, pMVar14, false, (MethodDefinition*)&local_128, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_128);
   D_METHODP((char*)&local_128, (char***)"get_trail_sections", 0);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (char**)0x0;
   pMVar14 = create_method_bind<GPUParticles2D,int>(get_trail_sections);
   ClassDB::bind_methodfi(1, pMVar14, false, (MethodDefinition*)&local_128, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_128);
   D_METHOD<char_const*>((char*)&local_128, "set_trail_section_subdivisions");
   auStack_70 = (undefined1[16])0x0;
   local_78 = (char**)0x0;
   pMVar14 = create_method_bind<GPUParticles2D,int>(set_trail_section_subdivisions);
   ClassDB::bind_methodfi(1, pMVar14, false, (MethodDefinition*)&local_128, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_128);
   D_METHODP((char*)&local_128, (char***)"get_trail_section_subdivisions", 0);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (char**)0x0;
   pMVar14 = create_method_bind<GPUParticles2D,int>(get_trail_section_subdivisions);
   ClassDB::bind_methodfi(1, pMVar14, false, (MethodDefinition*)&local_128, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_128);
   D_METHOD<char_const*>((char*)&local_128, "convert_from_particles");
   auStack_70 = (undefined1[16])0x0;
   local_78 = (char**)0x0;
   pMVar14 = create_method_bind<GPUParticles2D,Node*>(convert_from_particles);
   ClassDB::bind_methodfi(1, pMVar14, false, (MethodDefinition*)&local_128, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_128);
   D_METHOD<char_const*>((char*)&local_128, "set_amount_ratio");
   auStack_70 = (undefined1[16])0x0;
   local_78 = (char**)0x0;
   pMVar14 = create_method_bind<GPUParticles2D,float>(set_amount_ratio);
   ClassDB::bind_methodfi(1, pMVar14, false, (MethodDefinition*)&local_128, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_128);
   D_METHODP((char*)&local_128, (char***)"get_amount_ratio", 0);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (char**)0x0;
   pMVar14 = create_method_bind<GPUParticles2D,float>(get_amount_ratio);
   ClassDB::bind_methodfi(1, pMVar14, false, (MethodDefinition*)&local_128, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_128);
   D_METHOD<char_const*>((char*)&local_128, "set_use_fixed_seed");
   auStack_70 = (undefined1[16])0x0;
   local_78 = (char**)0x0;
   pMVar14 = create_method_bind<GPUParticles2D,bool>(set_use_fixed_seed);
   ClassDB::bind_methodfi(1, pMVar14, false, (MethodDefinition*)&local_128, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_128);
   D_METHODP((char*)&local_128, (char***)"get_use_fixed_seed", 0);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (char**)0x0;
   pMVar14 = create_method_bind<GPUParticles2D,bool>(get_use_fixed_seed);
   ClassDB::bind_methodfi(1, pMVar14, false, (MethodDefinition*)&local_128, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_128);
   D_METHOD<char_const*>((char*)&local_128, "set_seed");
   auStack_70 = (undefined1[16])0x0;
   local_78 = (char**)0x0;
   pMVar14 = create_method_bind<GPUParticles2D,unsigned_int>(set_seed);
   ClassDB::bind_methodfi(1, pMVar14, false, (MethodDefinition*)&local_128, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_128);
   D_METHODP((char*)&local_128, (char***)"get_seed", 0);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (char**)0x0;
   pMVar14 = create_method_bind<GPUParticles2D,unsigned_int>(get_seed);
   ClassDB::bind_methodfi(1, pMVar14, false, (MethodDefinition*)&local_128, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_128);
   local_138 = 0;
   String::parse_latin1((String*)&local_138, "finished");
   local_118 = (undefined1[16])0x0;
   local_128 = (char*)0x0;
   local_120 = 0;
   local_108 = 0;
   local_100 = 0;
   local_f8 = 6;
   local_f0 = 1;
   local_e8[0] = 0;
   local_d8 = (int*)0x0;
   local_d0 = 0;
   local_c0 = 0;
   CowData<char32_t>::_ref((CowData<char32_t>*)&local_128, (CowData*)&local_138);
   local_140 = 0;
   String::parse_latin1((String*)&local_140, "GPUParticles2D");
   StringName::StringName((StringName*)&local_130, (String*)&local_140, false);
   ClassDB::add_signal((StringName*)&local_130, (MethodInfo*)&local_128);
   if (( StringName::configured != '\0' ) && ( local_130 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_140);
   lVar3 = local_c0;
   if (local_c0 != 0) {
      LOCK();
      plVar1 = (long*)( local_c0 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_c0 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   piVar13 = local_d8;
   if (local_d8 != (int*)0x0) {
      LOCK();
      plVar1 = (long*)( local_d8 + -4 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         if (local_d8 == (int*)0x0) {
            /* WARNING: Does not return */
            pcVar4 = (code*)invalidInstructionException();
            ( *pcVar4 )();
         }

         lVar3 = *(long*)( local_d8 + -2 );
         lVar16 = 0;
         local_d8 = (int*)0x0;
         piVar15 = piVar13;
         if (lVar3 != 0) {
            do {
               if (Variant::needs_deinit[*piVar15] != '\0') {
                  Variant::_clear_internal();
               }

               lVar16 = lVar16 + 1;
               piVar15 = piVar15 + 6;
            }
 while ( lVar3 != lVar16 );
         }

         Memory::free_static(piVar13 + -4, false);
      }

   }

   List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator>*)local_e8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_120);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
   _scs_create((char*)&local_138, true);
   _scs_create((char*)&local_140, true);
   local_148 = 0;
   local_150 = 0;
   String::parse_latin1((String*)&local_150, "");
   local_158 = 0;
   String::parse_latin1((String*)&local_158, "emitting");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_128, 1, (String*)&local_158, 0x28, (String*)&local_150, 6, (String*)&local_148);
   local_160 = 0;
   String::parse_latin1((String*)&local_160, "GPUParticles2D");
   StringName::StringName((StringName*)&local_130, (String*)&local_160, false);
   ClassDB::add_property((StringName*)&local_130, (PropertyInfo*)&local_128, (StringName*)&local_140, (StringName*)&local_138, -1);
   if (( StringName::configured != '\0' ) && ( local_130 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_160);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_128);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_158);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_150);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_148 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_140 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_138 != 0 )) {
      StringName::unref();
   }

   Variant::Variant((Variant*)&local_78, true);
   StringName::StringName((StringName*)&local_128, "emitting", false);
   local_138 = 0;
   String::parse_latin1((String*)&local_138, "GPUParticles2D");
   StringName::StringName((StringName*)&local_130, (String*)&local_138, false);
   ClassDB::set_property_default_value((StringName*)&local_130, (StringName*)&local_128, (Variant*)&local_78);
   if (( StringName::configured != '\0' ) && ( local_130 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
   if (( StringName::configured != '\0' ) && ( local_128 != (char*)0x0 )) {
      StringName::unref();
   }

   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   _scs_create((char*)&local_138, true);
   _scs_create((char*)&local_140, true);
   local_148 = 0;
   local_150 = 0;
   String::parse_latin1((String*)&local_150, "1,1000000,1,exp");
   local_158 = 0;
   String::parse_latin1((String*)&local_158, "amount");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_128, 2, (String*)&local_158, 1, (String*)&local_150, 6, (String*)&local_148);
   local_160 = 0;
   String::parse_latin1((String*)&local_160, "GPUParticles2D");
   StringName::StringName((StringName*)&local_130, (String*)&local_160, false);
   ClassDB::add_property((StringName*)&local_130, (PropertyInfo*)&local_128, (StringName*)&local_140, (StringName*)&local_138, -1);
   if (( StringName::configured != '\0' ) && ( local_130 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_160);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_128);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_158);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_150);
   if (( ( StringName::configured != '\0' ) && ( ( local_148 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( ( local_140 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( local_138 != 0 ) ) )) {
      StringName::unref();
   }

   _scs_create((char*)&local_138, true);
   _scs_create((char*)&local_140, true);
   local_148 = 0;
   local_150 = 0;
   String::parse_latin1((String*)&local_150, "0,1,0.0001");
   local_158 = 0;
   String::parse_latin1((String*)&local_158, "amount_ratio");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_128, 3, (String*)&local_158, 1, (String*)&local_150, 6, (String*)&local_148);
   local_160 = 0;
   String::parse_latin1((String*)&local_160, "GPUParticles2D");
   StringName::StringName((StringName*)&local_130, (String*)&local_160, false);
   ClassDB::add_property((StringName*)&local_130, (PropertyInfo*)&local_128, (StringName*)&local_140, (StringName*)&local_138, -1);
   if (( StringName::configured != '\0' ) && ( local_130 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_160);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_128);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_158);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_150);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_148 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_140 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_138 != 0 )) {
      StringName::unref();
   }

   _scs_create((char*)&local_138, true);
   _scs_create((char*)&local_140, false);
   local_148 = 0;
   local_150 = 0;
   String::parse_latin1((String*)&local_150, "GPUParticles2D");
   local_158 = 0;
   String::parse_latin1((String*)&local_158, "sub_emitter");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_128, 0x16, (String*)&local_158, 0x1a, (String*)&local_150, 6, (String*)&local_148);
   local_160 = 0;
   String::parse_latin1((String*)&local_160, "GPUParticles2D");
   StringName::StringName((StringName*)&local_130, (String*)&local_160, false);
   ClassDB::add_property((StringName*)&local_130, (PropertyInfo*)&local_128, (StringName*)&local_140, (StringName*)&local_138, -1);
   if (( StringName::configured != '\0' ) && ( local_130 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_160);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_128);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_158);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_150);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_148 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_140 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_138 != 0 )) {
      StringName::unref();
   }

   _scs_create((char*)&local_138, true);
   _scs_create((char*)&local_140, true);
   local_148 = 0;
   local_150 = 0;
   String::parse_latin1((String*)&local_150, "Texture2D");
   local_158 = 0;
   String::parse_latin1((String*)&local_158, "texture");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_128, 0x18, (String*)&local_158, 0x11, (String*)&local_150, 6, (String*)&local_148);
   local_160 = 0;
   String::parse_latin1((String*)&local_160, "GPUParticles2D");
   StringName::StringName((StringName*)&local_130, (String*)&local_160, false);
   ClassDB::add_property((StringName*)&local_130, (PropertyInfo*)&local_128, (StringName*)&local_140, (StringName*)&local_138, -1);
   if (( StringName::configured != '\0' ) && ( local_130 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_160);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_128);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_158);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_150);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_148 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_140 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_138 != 0 )) {
      StringName::unref();
   }

   local_128 = (char*)0x0;
   String::parse_latin1((String*)&local_128, "");
   local_130 = 0;
   String::parse_latin1((String*)&local_130, "Time");
   local_140 = 0;
   String::parse_latin1((String*)&local_140, "GPUParticles2D");
   StringName::StringName((StringName*)&local_138, (String*)&local_140, false);
   ClassDB::add_property_group((StringName*)&local_138, (String*)&local_130, (String*)&local_128, 0);
   if (( StringName::configured != '\0' ) && ( local_138 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_140);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_130);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
   _scs_create((char*)&local_138, true);
   _scs_create((char*)&local_140, true);
   local_148 = 0;
   local_150 = 0;
   String::parse_latin1((String*)&local_150, "0.01,600.0,0.01,or_greater,exp,suffix:s");
   local_158 = 0;
   String::parse_latin1((String*)&local_158, "lifetime");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_128, 3, (String*)&local_158, 1, (String*)&local_150, 6, (String*)&local_148);
   local_160 = 0;
   String::parse_latin1((String*)&local_160, "GPUParticles2D");
   StringName::StringName((StringName*)&local_130, (String*)&local_160, false);
   ClassDB::add_property((StringName*)&local_130, (PropertyInfo*)&local_128, (StringName*)&local_140, (StringName*)&local_138, -1);
   if (( StringName::configured != '\0' ) && ( local_130 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_160);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_128);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_158);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_150);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_148 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_140 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_138 != 0 )) {
      StringName::unref();
   }

   _scs_create((char*)&local_138, true);
   _scs_create((char*)&local_140, true);
   local_148 = 0;
   local_150 = 0;
   String::parse_latin1((String*)&local_150, "0.00,1.0,0.001");
   local_158 = 0;
   String::parse_latin1((String*)&local_158, "interp_to_end");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_128, 3, (String*)&local_158, 1, (String*)&local_150, 6, (String*)&local_148);
   local_160 = 0;
   String::parse_latin1((String*)&local_160, "GPUParticles2D");
   StringName::StringName((StringName*)&local_130, (String*)&local_160, false);
   ClassDB::add_property((StringName*)&local_130, (PropertyInfo*)&local_128, (StringName*)&local_140, (StringName*)&local_138, -1);
   if (( StringName::configured != '\0' ) && ( local_130 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_160);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_128);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_158);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_150);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_148 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_140 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_138 != 0 )) {
      StringName::unref();
   }

   _scs_create((char*)&local_138, true);
   _scs_create((char*)&local_140, true);
   local_148 = 0;
   local_150 = 0;
   String::parse_latin1((String*)&local_150, "");
   local_158 = 0;
   String::parse_latin1((String*)&local_158, "one_shot");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_128, 1, (String*)&local_158, 0, (String*)&local_150, 6, (String*)&local_148);
   local_160 = 0;
   String::parse_latin1((String*)&local_160, "GPUParticles2D");
   StringName::StringName((StringName*)&local_130, (String*)&local_160, false);
   ClassDB::add_property((StringName*)&local_130, (PropertyInfo*)&local_128, (StringName*)&local_140, (StringName*)&local_138, -1);
   if (( StringName::configured != '\0' ) && ( local_130 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_160);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_128);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_158);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_150);
   if (( ( StringName::configured != '\0' ) && ( ( local_148 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( ( local_140 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( local_138 != 0 ) ) )) {
      StringName::unref();
   }

   _scs_create((char*)&local_138, true);
   _scs_create((char*)&local_140, true);
   local_148 = 0;
   local_150 = 0;
   String::parse_latin1((String*)&local_150, "0.00,10.0,0.01,or_greater,exp,suffix:s");
   local_158 = 0;
   String::parse_latin1((String*)&local_158, "preprocess");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_128, 3, (String*)&local_158, 1, (String*)&local_150, 6, (String*)&local_148);
   local_160 = 0;
   String::parse_latin1((String*)&local_160, "GPUParticles2D");
   StringName::StringName((StringName*)&local_130, (String*)&local_160, false);
   ClassDB::add_property((StringName*)&local_130, (PropertyInfo*)&local_128, (StringName*)&local_140, (StringName*)&local_138, -1);
   if (( StringName::configured != '\0' ) && ( local_130 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_160);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_128);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_158);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_150);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_148 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_140 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_138 != 0 )) {
      StringName::unref();
   }

   _scs_create((char*)&local_138, true);
   _scs_create((char*)&local_140, true);
   local_148 = 0;
   local_150 = 0;
   String::parse_latin1((String*)&local_150, "0,64,0.01");
   local_158 = 0;
   String::parse_latin1((String*)&local_158, "speed_scale");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_128, 3, (String*)&local_158, 1, (String*)&local_150, 6, (String*)&local_148);
   local_160 = 0;
   String::parse_latin1((String*)&local_160, "GPUParticles2D");
   StringName::StringName((StringName*)&local_130, (String*)&local_160, false);
   ClassDB::add_property((StringName*)&local_130, (PropertyInfo*)&local_128, (StringName*)&local_140, (StringName*)&local_138, -1);
   if (( StringName::configured != '\0' ) && ( local_130 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_160);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_128);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_158);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_150);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_148 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_140 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_138 != 0 )) {
      StringName::unref();
   }

   _scs_create((char*)&local_138, true);
   _scs_create((char*)&local_140, true);
   local_148 = 0;
   local_150 = 0;
   String::parse_latin1((String*)&local_150, "0,1,0.01");
   local_158 = 0;
   String::parse_latin1((String*)&local_158, "explosiveness");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_128, 3, (String*)&local_158, 1, (String*)&local_150, 6, (String*)&local_148);
   local_160 = 0;
   String::parse_latin1((String*)&local_160, "GPUParticles2D");
   StringName::StringName((StringName*)&local_130, (String*)&local_160, false);
   ClassDB::add_property((StringName*)&local_130, (PropertyInfo*)&local_128, (StringName*)&local_140, (StringName*)&local_138, -1);
   if (( StringName::configured != '\0' ) && ( local_130 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_160);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_128);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_158);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_150);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_148 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_140 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_138 != 0 )) {
      StringName::unref();
   }

   _scs_create((char*)&local_138, true);
   _scs_create((char*)&local_140, true);
   local_148 = 0;
   local_150 = 0;
   String::parse_latin1((String*)&local_150, "0,1,0.01");
   local_158 = 0;
   String::parse_latin1((String*)&local_158, "randomness");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_128, 3, (String*)&local_158, 1, (String*)&local_150, 6, (String*)&local_148);
   local_160 = 0;
   String::parse_latin1((String*)&local_160, "GPUParticles2D");
   StringName::StringName((StringName*)&local_130, (String*)&local_160, false);
   ClassDB::add_property((StringName*)&local_130, (PropertyInfo*)&local_128, (StringName*)&local_140, (StringName*)&local_138, -1);
   if (( StringName::configured != '\0' ) && ( local_130 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_160);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_128);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_158);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_150);
   if (( ( StringName::configured != '\0' ) && ( ( local_148 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( ( local_140 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( local_138 != 0 ) ) )) {
      StringName::unref();
   }

   _scs_create((char*)&local_138, true);
   _scs_create((char*)&local_140, true);
   local_148 = 0;
   local_150 = 0;
   String::parse_latin1((String*)&local_150, "");
   local_158 = 0;
   String::parse_latin1((String*)&local_158, "use_fixed_seed");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_128, 1, (String*)&local_158, 2, (String*)&local_150, 6, (String*)&local_148);
   local_160 = 0;
   String::parse_latin1((String*)&local_160, "GPUParticles2D");
   StringName::StringName((StringName*)&local_130, (String*)&local_160, false);
   ClassDB::add_property((StringName*)&local_130, (PropertyInfo*)&local_128, (StringName*)&local_140, (StringName*)&local_138, -1);
   if (( StringName::configured != '\0' ) && ( local_130 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_160);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_128);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_158);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_150);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_148 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_140 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_138 != 0 )) {
      StringName::unref();
   }

   _scs_create((char*)&local_138, true);
   _scs_create((char*)&local_140, true);
   local_148 = 0;
   local_160 = 0;
   String::parse_latin1((String*)&local_160, ",1");
   itos((long)local_170);
   operator+((char *)
   local_168,(String*)&_LC179;
   String::operator +((String*)&local_158, local_168);
   local_150 = 0;
   String::parse_latin1((String*)&local_150, "seed");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_128, 2, (String*)&local_150, 1, (String*)&local_158, 6, (String*)&local_148);
   local_178 = 0;
   String::parse_latin1((String*)&local_178, "GPUParticles2D");
   StringName::StringName((StringName*)&local_130, (String*)&local_178, false);
   ClassDB::add_property((StringName*)&local_130, (PropertyInfo*)&local_128, (StringName*)&local_140, (StringName*)&local_138, -1);
   if (( StringName::configured != '\0' ) && ( local_130 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_178);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_128);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_150);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_158);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_168);
   CowData<char32_t>::_unref(local_170);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_160);
   if (( ( StringName::configured != '\0' ) && ( ( local_148 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( ( local_140 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( local_138 != 0 ) ) )) {
      StringName::unref();
   }

   _scs_create((char*)&local_138, true);
   _scs_create((char*)&local_140, true);
   local_148 = 0;
   local_150 = 0;
   String::parse_latin1((String*)&local_150, "0,1000,1,suffix:FPS");
   local_158 = 0;
   String::parse_latin1((String*)&local_158, "fixed_fps");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_128, 2, (String*)&local_158, 1, (String*)&local_150, 6, (String*)&local_148);
   local_160 = 0;
   String::parse_latin1((String*)&local_160, "GPUParticles2D");
   StringName::StringName((StringName*)&local_130, (String*)&local_160, false);
   ClassDB::add_property((StringName*)&local_130, (PropertyInfo*)&local_128, (StringName*)&local_140, (StringName*)&local_138, -1);
   if (( StringName::configured != '\0' ) && ( local_130 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_160);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_128);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_158);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_150);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_148 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_140 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_138 != 0 )) {
      StringName::unref();
   }

   _scs_create((char*)&local_138, true);
   _scs_create((char*)&local_140, true);
   local_128 = "";
   local_148 = 0;
   local_150 = 0;
   local_120 = 0;
   String::parse_latin1((StrRange*)&local_150);
   local_158 = 0;
   String::parse_latin1((String*)&local_158, "interpolate");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_128, 1, (String*)&local_158, 0, (String*)&local_150, 6, (String*)&local_148);
   local_160 = 0;
   String::parse_latin1((String*)&local_160, "GPUParticles2D");
   StringName::StringName((StringName*)&local_130, (String*)&local_160, false);
   ClassDB::add_property((StringName*)&local_130, (PropertyInfo*)&local_128, (StringName*)&local_140, (StringName*)&local_138, -1);
   if (( StringName::configured != '\0' ) && ( local_130 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_160);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_128);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_158);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_150);
   if (( ( StringName::configured != '\0' ) && ( ( local_148 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( ( local_140 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( local_138 != 0 ) ) )) {
      StringName::unref();
   }

   _scs_create((char*)&local_138, true);
   _scs_create((char*)&local_140, true);
   local_148 = 0;
   local_150 = 0;
   String::parse_latin1((String*)&local_150, "");
   local_158 = 0;
   String::parse_latin1((String*)&local_158, "fract_delta");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_128, 1, (String*)&local_158, 0, (String*)&local_150, 6, (String*)&local_148);
   local_160 = 0;
   String::parse_latin1((String*)&local_160, "GPUParticles2D");
   StringName::StringName((StringName*)&local_130, (String*)&local_160, false);
   ClassDB::add_property((StringName*)&local_130, (PropertyInfo*)&local_128, (StringName*)&local_140, (StringName*)&local_138, -1);
   if (( StringName::configured != '\0' ) && ( local_130 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_160);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_128);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_158);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_150);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_148 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_140 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_138 != 0 )) {
      StringName::unref();
   }

   local_128 = (char*)0x0;
   String::parse_latin1((String*)&local_128, "collision_");
   local_130 = 0;
   String::parse_latin1((String*)&local_130, "Collision");
   local_140 = 0;
   String::parse_latin1((String*)&local_140, "GPUParticles2D");
   StringName::StringName((StringName*)&local_138, (String*)&local_140, false);
   ClassDB::add_property_group((StringName*)&local_138, (String*)&local_130, (String*)&local_128, 0);
   if (( StringName::configured != '\0' ) && ( local_138 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_140);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_130);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
   _scs_create((char*)&local_138, true);
   _scs_create((char*)&local_140, true);
   local_148 = 0;
   local_150 = 0;
   String::parse_latin1((String*)&local_150, "0,128,0.01,or_greater");
   local_158 = 0;
   String::parse_latin1((String*)&local_158, "collision_base_size");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_128, 3, (String*)&local_158, 1, (String*)&local_150, 6, (String*)&local_148);
   local_160 = 0;
   String::parse_latin1((String*)&local_160, "GPUParticles2D");
   StringName::StringName((StringName*)&local_130, (String*)&local_160, false);
   ClassDB::add_property((StringName*)&local_130, (PropertyInfo*)&local_128, (StringName*)&local_140, (StringName*)&local_138, -1);
   if (( StringName::configured != '\0' ) && ( local_130 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_160);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_128);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_158);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_150);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_148 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_140 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_138 != 0 )) {
      StringName::unref();
   }

   local_128 = (char*)0x0;
   String::parse_latin1((String*)&local_128, "");
   local_130 = 0;
   String::parse_latin1((String*)&local_130, "Drawing");
   local_140 = 0;
   String::parse_latin1((String*)&local_140, "GPUParticles2D");
   StringName::StringName((StringName*)&local_138, (String*)&local_140, false);
   ClassDB::add_property_group((StringName*)&local_138, (String*)&local_130, (String*)&local_128, 0);
   if (( StringName::configured != '\0' ) && ( local_138 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_140);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_130);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
   _scs_create((char*)&local_138, true);
   _scs_create((char*)&local_140, true);
   local_148 = 0;
   local_150 = 0;
   String::parse_latin1((String*)&local_150, "suffix:px");
   local_158 = 0;
   String::parse_latin1((String*)&local_158, "visibility_rect");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_128, 7, (String*)&local_158, 0, (String*)&local_150, 6, (String*)&local_148);
   local_160 = 0;
   String::parse_latin1((String*)&local_160, "GPUParticles2D");
   StringName::StringName((StringName*)&local_130, (String*)&local_160, false);
   ClassDB::add_property((StringName*)&local_130, (PropertyInfo*)&local_128, (StringName*)&local_140, (StringName*)&local_138, -1);
   if (( StringName::configured != '\0' ) && ( local_130 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_160);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_128);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_158);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_150);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_148 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_140 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_138 != 0 )) {
      StringName::unref();
   }

   _scs_create((char*)&local_138, true);
   _scs_create((char*)&local_140, true);
   local_148 = 0;
   local_150 = 0;
   String::parse_latin1((String*)&local_150, "");
   local_158 = 0;
   String::parse_latin1((String*)&local_158, "local_coords");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_128, 1, (String*)&local_158, 0, (String*)&local_150, 6, (String*)&local_148);
   local_160 = 0;
   String::parse_latin1((String*)&local_160, "GPUParticles2D");
   StringName::StringName((StringName*)&local_130, (String*)&local_160, false);
   ClassDB::add_property((StringName*)&local_130, (PropertyInfo*)&local_128, (StringName*)&local_140, (StringName*)&local_138, -1);
   if (( StringName::configured != '\0' ) && ( local_130 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_160);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_128);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_158);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_150);
   if (( ( StringName::configured != '\0' ) && ( ( local_148 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( ( local_140 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( local_138 != 0 ) ) )) {
      StringName::unref();
   }

   _scs_create((char*)&local_138, true);
   _scs_create((char*)&local_140, true);
   local_148 = 0;
   local_150 = 0;
   String::parse_latin1((String*)&local_150, "Index,Lifetime,Reverse Lifetime");
   local_158 = 0;
   String::parse_latin1((String*)&local_158, "draw_order");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_128, 2, (String*)&local_158, 2, (String*)&local_150, 6, (String*)&local_148);
   local_160 = 0;
   String::parse_latin1((String*)&local_160, "GPUParticles2D");
   StringName::StringName((StringName*)&local_130, (String*)&local_160, false);
   ClassDB::add_property((StringName*)&local_130, (PropertyInfo*)&local_128, (StringName*)&local_140, (StringName*)&local_138, -1);
   if (( StringName::configured != '\0' ) && ( local_130 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_160);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_128);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_158);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_150);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_148 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_140 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_138 != 0 )) {
      StringName::unref();
   }

   local_128 = (char*)0x0;
   String::parse_latin1((String*)&local_128, "trail_");
   local_130 = 0;
   String::parse_latin1((String*)&local_130, "Trails");
   local_140 = 0;
   String::parse_latin1((String*)&local_140, "GPUParticles2D");
   StringName::StringName((StringName*)&local_138, (String*)&local_140, false);
   ClassDB::add_property_group((StringName*)&local_138, (String*)&local_130, (String*)&local_128, 0);
   if (( StringName::configured != '\0' ) && ( local_138 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_140);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_130);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
   _scs_create((char*)&local_138, true);
   _scs_create((char*)&local_140, true);
   local_148 = 0;
   local_150 = 0;
   String::parse_latin1((String*)&local_150, "");
   local_158 = 0;
   String::parse_latin1((String*)&local_158, "trail_enabled");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_128, 1, (String*)&local_158, 0, (String*)&local_150, 6, (String*)&local_148);
   local_160 = 0;
   String::parse_latin1((String*)&local_160, "GPUParticles2D");
   StringName::StringName((StringName*)&local_130, (String*)&local_160, false);
   ClassDB::add_property((StringName*)&local_130, (PropertyInfo*)&local_128, (StringName*)&local_140, (StringName*)&local_138, -1);
   if (( StringName::configured != '\0' ) && ( local_130 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_160);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_128);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_158);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_150);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_148 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_140 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_138 != 0 )) {
      StringName::unref();
   }

   _scs_create((char*)&local_138, true);
   _scs_create((char*)&local_140, true);
   local_148 = 0;
   local_150 = 0;
   String::parse_latin1((String*)&local_150, "0.01,10,0.01,or_greater,suffix:s");
   local_158 = 0;
   String::parse_latin1((String*)&local_158, "trail_lifetime");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_128, 3, (String*)&local_158, 1, (String*)&local_150, 6, (String*)&local_148);
   local_160 = 0;
   String::parse_latin1((String*)&local_160, "GPUParticles2D");
   StringName::StringName((StringName*)&local_130, (String*)&local_160, false);
   ClassDB::add_property((StringName*)&local_130, (PropertyInfo*)&local_128, (StringName*)&local_140, (StringName*)&local_138, -1);
   if (( StringName::configured != '\0' ) && ( local_130 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_160);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_128);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_158);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_150);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_148 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_140 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_138 != 0 )) {
      StringName::unref();
   }

   _scs_create((char*)&local_138, true);
   _scs_create((char*)&local_140, true);
   local_148 = 0;
   local_150 = 0;
   String::parse_latin1((String*)&local_150, "2,128,1");
   local_158 = 0;
   String::parse_latin1((String*)&local_158, "trail_sections");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_128, 2, (String*)&local_158, 1, (String*)&local_150, 6, (String*)&local_148);
   local_160 = 0;
   String::parse_latin1((String*)&local_160, "GPUParticles2D");
   StringName::StringName((StringName*)&local_130, (String*)&local_160, false);
   ClassDB::add_property((StringName*)&local_130, (PropertyInfo*)&local_128, (StringName*)&local_140, (StringName*)&local_138, -1);
   if (( StringName::configured != '\0' ) && ( local_130 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_160);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_128);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_158);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_150);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_148 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_140 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_138 != 0 )) {
      StringName::unref();
   }

   _scs_create((char*)&local_138, true);
   _scs_create((char*)&local_140, true);
   local_148 = 0;
   local_150 = 0;
   String::parse_latin1((String*)&local_150, "1,1024,1");
   local_158 = 0;
   String::parse_latin1((String*)&local_158, "trail_section_subdivisions");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_128, 2, (String*)&local_158, 1, (String*)&local_150, 6, (String*)&local_148);
   local_160 = 0;
   String::parse_latin1((String*)&local_160, "GPUParticles2D");
   StringName::StringName((StringName*)&local_130, (String*)&local_160, false);
   ClassDB::add_property((StringName*)&local_130, (PropertyInfo*)&local_128, (StringName*)&local_140, (StringName*)&local_138, -1);
   if (( StringName::configured != '\0' ) && ( local_130 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_160);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_128);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_158);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_150);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_148 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_140 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_138 != 0 )) {
      StringName::unref();
   }

   local_128 = (char*)0x0;
   String::parse_latin1((String*)&local_128, "");
   local_130 = 0;
   String::parse_latin1((String*)&local_130, "Process Material");
   local_140 = 0;
   String::parse_latin1((String*)&local_140, "GPUParticles2D");
   StringName::StringName((StringName*)&local_138, (String*)&local_140, false);
   ClassDB::add_property_group((StringName*)&local_138, (String*)&local_130, (String*)&local_128, 0);
   if (( StringName::configured != '\0' ) && ( local_138 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_140);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_130);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
   _scs_create((char*)&local_138, true);
   _scs_create((char*)&local_140, true);
   local_148 = 0;
   local_150 = 0;
   String::parse_latin1((String*)&local_150, "ParticleProcessMaterial,ShaderMaterial");
   local_158 = 0;
   String::parse_latin1((String*)&local_158, "process_material");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_128, 0x18, (String*)&local_158, 0x11, (String*)&local_150, 6, (String*)&local_148);
   local_160 = 0;
   String::parse_latin1((String*)&local_160, "GPUParticles2D");
   StringName::StringName((StringName*)&local_130, (String*)&local_160, false);
   ClassDB::add_property((StringName*)&local_130, (PropertyInfo*)&local_128, (StringName*)&local_140, (StringName*)&local_138, -1);
   if (( StringName::configured != '\0' ) && ( local_130 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_160);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_128);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_158);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_150);
   if (( ( StringName::configured != '\0' ) && ( ( local_148 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( ( local_140 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( local_138 != 0 ) ) )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_130, "DRAW_ORDER_INDEX", false);
   local_140 = 0;
   String::parse_latin1((String*)&local_140, "DRAW_ORDER_INDEX");
   GetTypeInfo<GPUParticles2D::DrawOrder,void>::get_class_info((GetTypeInfo<GPUParticles2D::DrawOrder,void>*)&local_128);
   local_138 = local_118._0_8_;
   auVar5._8_8_ = 0;
   auVar5._0_8_ = local_118._8_8_;
   local_118 = auVar5 << 0x40;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_128);
   local_148 = 0;
   String::parse_latin1((String*)&local_148, "GPUParticles2D");
   StringName::StringName((StringName*)&local_128, (String*)&local_148, false);
   ClassDB::bind_integer_constant((StringName*)&local_128, (StringName*)&local_138, (StringName*)&local_130, 0, false);
   if (( StringName::configured != '\0' ) && ( local_128 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_148);
   if (( StringName::configured != '\0' ) && ( local_138 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_140);
   if (( StringName::configured != '\0' ) && ( local_130 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_130, "DRAW_ORDER_LIFETIME", false);
   local_140 = 0;
   String::parse_latin1((String*)&local_140, "DRAW_ORDER_LIFETIME");
   GetTypeInfo<GPUParticles2D::DrawOrder,void>::get_class_info((GetTypeInfo<GPUParticles2D::DrawOrder,void>*)&local_128);
   local_138 = local_118._0_8_;
   auVar6._8_8_ = 0;
   auVar6._0_8_ = local_118._8_8_;
   local_118 = auVar6 << 0x40;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_128);
   local_148 = 0;
   String::parse_latin1((String*)&local_148, "GPUParticles2D");
   StringName::StringName((StringName*)&local_128, (String*)&local_148, false);
   ClassDB::bind_integer_constant((StringName*)&local_128, (StringName*)&local_138, (StringName*)&local_130, 1, false);
   if (( StringName::configured != '\0' ) && ( local_128 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_148);
   if (( StringName::configured != '\0' ) && ( local_138 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_140);
   if (( StringName::configured != '\0' ) && ( local_130 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_130, "DRAW_ORDER_REVERSE_LIFETIME", false);
   local_140 = 0;
   String::parse_latin1((String*)&local_140, "DRAW_ORDER_REVERSE_LIFETIME");
   GetTypeInfo<GPUParticles2D::DrawOrder,void>::get_class_info((GetTypeInfo<GPUParticles2D::DrawOrder,void>*)&local_128);
   local_138 = local_118._0_8_;
   auVar7._8_8_ = 0;
   auVar7._0_8_ = local_118._8_8_;
   local_118 = auVar7 << 0x40;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_128);
   local_148 = 0;
   String::parse_latin1((String*)&local_148, "GPUParticles2D");
   StringName::StringName((StringName*)&local_128, (String*)&local_148, false);
   ClassDB::bind_integer_constant((StringName*)&local_128, (StringName*)&local_138, (StringName*)&local_130, 2, false);
   if (( StringName::configured != '\0' ) && ( local_128 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_148);
   if (( StringName::configured != '\0' ) && ( local_138 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_140);
   if (( StringName::configured != '\0' ) && ( local_130 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_158, "EMIT_FLAG_POSITION", false);
   local_160 = 0;
   String::parse_latin1((String*)&local_160, "EMIT_FLAG_POSITION");
   local_128 = "GPUParticles2D::EmitFlags";
   local_140 = 0;
   local_120 = 0x19;
   String::parse_latin1((StrRange*)&local_140);
   godot::details::enum_qualified_name_to_class_info_name((details*)&local_138, (String*)&local_140);
   StringName::StringName((StringName*)&local_130, (String*)&local_138, false);
   local_148 = 0;
   local_150 = 0;
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_128, 2, (String*)&local_150, 0, (String*)&local_148, 0x10006, (StringName*)&local_130);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_150);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_148);
   if (( StringName::configured != '\0' ) && ( local_130 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_140);
   local_130 = local_118._0_8_;
   auVar8._8_8_ = 0;
   auVar8._0_8_ = local_118._8_8_;
   local_118 = auVar8 << 0x40;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_128);
   local_128 = "GPUParticles2D";
   local_138 = 0;
   local_120 = 0xe;
   String::parse_latin1((StrRange*)&local_138);
   StringName::StringName((StringName*)&local_128, (String*)&local_138, false);
   ClassDB::bind_integer_constant((StringName*)&local_128, (StringName*)&local_130, (StringName*)&local_158, 1, false);
   if (( StringName::configured != '\0' ) && ( local_128 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
   if (( StringName::configured != '\0' ) && ( local_130 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_160);
   if (( StringName::configured != '\0' ) && ( local_158 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_158, "EMIT_FLAG_ROTATION_SCALE", false);
   local_160 = 0;
   String::parse_latin1((String*)&local_160, "EMIT_FLAG_ROTATION_SCALE");
   local_128 = "GPUParticles2D::EmitFlags";
   local_140 = 0;
   local_120 = 0x19;
   String::parse_latin1((StrRange*)&local_140);
   godot::details::enum_qualified_name_to_class_info_name((details*)&local_138, (String*)&local_140);
   StringName::StringName((StringName*)&local_130, (String*)&local_138, false);
   local_148 = 0;
   local_150 = 0;
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_128, 2, (String*)&local_150, 0, (String*)&local_148, 0x10006, (StringName*)&local_130);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_150);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_148);
   if (( StringName::configured != '\0' ) && ( local_130 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_140);
   local_130 = local_118._0_8_;
   auVar9._8_8_ = 0;
   auVar9._0_8_ = local_118._8_8_;
   local_118 = auVar9 << 0x40;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_128);
   local_138 = 0;
   String::parse_latin1((String*)&local_138, "GPUParticles2D");
   StringName::StringName((StringName*)&local_128, (String*)&local_138, false);
   ClassDB::bind_integer_constant((StringName*)&local_128, (StringName*)&local_130, (StringName*)&local_158, 2, false);
   if (( StringName::configured != '\0' ) && ( local_128 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
   if (( StringName::configured != '\0' ) && ( local_130 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_160);
   if (( StringName::configured != '\0' ) && ( local_158 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_158, "EMIT_FLAG_VELOCITY", false);
   local_160 = 0;
   String::parse_latin1((String*)&local_160, "EMIT_FLAG_VELOCITY");
   local_128 = "GPUParticles2D::EmitFlags";
   local_140 = 0;
   local_120 = 0x19;
   String::parse_latin1((StrRange*)&local_140);
   godot::details::enum_qualified_name_to_class_info_name((details*)&local_138, (String*)&local_140);
   StringName::StringName((StringName*)&local_130, (String*)&local_138, false);
   local_148 = 0;
   local_150 = 0;
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_128, 2, (String*)&local_150, 0, (String*)&local_148, 0x10006, (StringName*)&local_130);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_150);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_148);
   if (( StringName::configured != '\0' ) && ( local_130 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_140);
   local_130 = local_118._0_8_;
   auVar10._8_8_ = 0;
   auVar10._0_8_ = local_118._8_8_;
   local_118 = auVar10 << 0x40;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_128);
   local_138 = 0;
   String::parse_latin1((String*)&local_138, "GPUParticles2D");
   StringName::StringName((StringName*)&local_128, (String*)&local_138, false);
   ClassDB::bind_integer_constant((StringName*)&local_128, (StringName*)&local_130, (StringName*)&local_158, 4, false);
   if (( StringName::configured != '\0' ) && ( local_128 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
   if (( StringName::configured != '\0' ) && ( local_130 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_160);
   if (( StringName::configured != '\0' ) && ( local_158 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_158, "EMIT_FLAG_COLOR", false);
   local_160 = 0;
   String::parse_latin1((String*)&local_160, "EMIT_FLAG_COLOR");
   local_128 = "GPUParticles2D::EmitFlags";
   local_140 = 0;
   local_120 = 0x19;
   String::parse_latin1((StrRange*)&local_140);
   godot::details::enum_qualified_name_to_class_info_name((details*)&local_138, (String*)&local_140);
   StringName::StringName((StringName*)&local_130, (String*)&local_138, false);
   local_148 = 0;
   local_150 = 0;
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_128, 2, (String*)&local_150, 0, (String*)&local_148, 0x10006, (StringName*)&local_130);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_150);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_148);
   if (( StringName::configured != '\0' ) && ( local_130 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_140);
   local_130 = local_118._0_8_;
   auVar11._8_8_ = 0;
   auVar11._0_8_ = local_118._8_8_;
   local_118 = auVar11 << 0x40;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_128);
   local_138 = 0;
   String::parse_latin1((String*)&local_138, "GPUParticles2D");
   StringName::StringName((StringName*)&local_128, (String*)&local_138, false);
   ClassDB::bind_integer_constant((StringName*)&local_128, (StringName*)&local_130, (StringName*)&local_158, 8, false);
   if (( StringName::configured != '\0' ) && ( local_128 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
   if (( StringName::configured != '\0' ) && ( local_130 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_160);
   if (( StringName::configured != '\0' ) && ( local_158 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_158, "EMIT_FLAG_CUSTOM", false);
   local_160 = 0;
   String::parse_latin1((String*)&local_160, "EMIT_FLAG_CUSTOM");
   local_128 = "GPUParticles2D::EmitFlags";
   local_140 = 0;
   local_120 = 0x19;
   String::parse_latin1((StrRange*)&local_140);
   godot::details::enum_qualified_name_to_class_info_name((details*)&local_138, (String*)&local_140);
   StringName::StringName((StringName*)&local_130, (String*)&local_138, false);
   local_148 = 0;
   local_150 = 0;
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_128, 2, (String*)&local_150, 0, (String*)&local_148, 0x10006, (StringName*)&local_130);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_150);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_148);
   if (( StringName::configured != '\0' ) && ( local_130 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_140);
   local_130 = local_118._0_8_;
   auVar12._8_8_ = 0;
   auVar12._0_8_ = local_118._8_8_;
   local_118 = auVar12 << 0x40;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_128);
   local_138 = 0;
   String::parse_latin1((String*)&local_138, "GPUParticles2D");
   StringName::StringName((StringName*)&local_128, (String*)&local_138, false);
   ClassDB::bind_integer_constant((StringName*)&local_128, (StringName*)&local_130, (StringName*)&local_158, 0x10, false);
   if (( StringName::configured != '\0' ) && ( local_128 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
   if (( StringName::configured != '\0' ) && ( local_130 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_160);
   if (( StringName::configured != '\0' ) && ( local_158 != 0 )) {
      StringName::unref();
   }

   Variant::Variant((Variant*)&local_78, 0);
   StringName::StringName((StringName*)&local_128, "seed", false);
   local_138 = 0;
   String::parse_latin1((String*)&local_138, "GPUParticles2D");
   StringName::StringName((StringName*)&local_130, (String*)&local_138, false);
   ClassDB::set_property_default_value((StringName*)&local_130, (StringName*)&local_128, (Variant*)&local_78);
   if (( StringName::configured != '\0' ) && ( local_130 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
   if (( StringName::configured != '\0' ) && ( local_128 != (char*)0x0 )) {
      StringName::unref();
   }

   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Vector<String>::push_back(String) [clone .isra.0] */void Vector<String>::push_back(Vector<String> *this, CowData *param_2) {
   CowData<char32_t> *this_00;
   int iVar1;
   long lVar2;
   long lVar3;
   if (*(long*)( this + 8 ) == 0) {
      lVar2 = 1;
   }
 else {
      lVar2 = *(long*)( *(long*)( this + 8 ) + -8 ) + 1;
   }

   iVar1 = CowData<String>::resize<false>((CowData<String>*)( this + 8 ), lVar2);
   if (iVar1 == 0) {
      if (*(long*)( this + 8 ) == 0) {
         lVar3 = -1;
         lVar2 = 0;
      }
 else {
         lVar2 = *(long*)( *(long*)( this + 8 ) + -8 );
         lVar3 = lVar2 + -1;
         if (-1 < lVar3) {
            CowData<String>::_copy_on_write((CowData<String>*)( this + 8 ));
            this_00 = (CowData<char32_t>*)( *(long*)( this + 8 ) + lVar3 * 8 );
            if (*(long*)this_00 == *(long*)param_2) {
               return;
            }

            CowData<char32_t>::_ref(this_00, param_2);
            return;
         }

      }

      _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar3, lVar2, "p_index", "size()", "", false, false);
      return;
   }

   _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
   return;
}
/* GPUParticles2D::get_configuration_warnings() const */void GPUParticles2D::get_configuration_warnings(void) {
   long *plVar1;
   long lVar2;
   Object *pOVar3;
   char cVar4;
   long lVar5;
   long lVar6;
   long in_RSI;
   long in_FS_OFFSET;
   bool bVar7;
   float fVar8;
   undefined8 local_58;
   long local_50;
   Object *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   Node::get_configuration_warnings();
   if (*(long*)( in_RSI + 0x5f8 ) == 0) {
      local_50 = 0;
      local_40 = 0;
      local_48 = (Object*)&_LC35;
      String::parse_latin1((StrRange*)&local_50);
      local_48 = (Object*)0x10be70;
      local_40 = 0x51;
   }
 else {
      CanvasItem::get_material();
      if (local_48 == (Object*)0x0) {
         CanvasItem::get_material();
         if (local_48 != (Object*)0x0) goto LAB_001093da;
      }
 else {
         lVar5 = __dynamic_cast(local_48, &Object::typeinfo, &CanvasItemMaterial::typeinfo, 0);
         cVar4 = RefCounted::unreference();
         pOVar3 = local_48;
         if (( cVar4 != '\0' ) && ( cVar4 = cVar4 != '\0' )) {
            ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
            Memory::free_static(pOVar3, false);
         }

         CanvasItem::get_material();
         if (local_48 != (Object*)0x0) {
            if (lVar5 != 0) {
               cVar4 = CanvasItemMaterial::get_particles_animation();
               if (cVar4 == '\0') {
                  if (( ( local_48 != (Object*)0x0 ) && ( cVar4 = RefCounted::unreference() ),pOVar3 = local_48,cVar4 != '\0' )) &&( cVar4 = cVar4 != '\0' )(**(code**)( *(long*)pOVar3 + 0x140 ))(pOVar3);
                  Memory::free_static(pOVar3, false);
               }

               goto LAB_00109488;
            }

            if (local_48 == (Object*)0x0) goto LAB_00109415;
         }

         LAB_001093da:cVar4 = RefCounted::unreference();
         pOVar3 = local_48;
         if (( cVar4 != '\0' ) && ( cVar4 = cVar4 != '\0' )) {
            ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
            Memory::free_static(pOVar3, false);
         }

         goto LAB_00109415;
      }

   }

   LAB_00109488:if (( *(long*)( in_RSI + 0x5f8 ) == 0 ) || ( lVar5 = __dynamic_cast(*(long*)( in_RSI + 0x5f8 ), &Object::typeinfo, &ParticleProcessMaterial::typeinfo, 0) ),lVar5 == 0) goto LAB_00109415;
   fVar8 = (float)ParticleProcessMaterial::get_param_max(lVar5, 10);
   if (fVar8 == 0.0) {
      fVar8 = (float)ParticleProcessMaterial::get_param_max(lVar5, 0xb);
      if (fVar8 == 0.0) {
         ParticleProcessMaterial::get_param_texture((Ref<Texture2D>*)&local_50, lVar5, 10);
         if (local_50 == 0) {
            ParticleProcessMaterial::get_param_texture((Ref<Texture2D>*)&local_48, lVar5, 0xb);
            if (local_48 == (Object*)0x0) {
               Ref<Texture2D>::unref((Ref<Texture2D>*)&local_48);
               Ref<Texture2D>::unref((Ref<Texture2D>*)&local_50);
               goto LAB_00109415;
            }

            Ref<Texture2D>::unref((Ref<Texture2D>*)&local_48);
            Ref<Texture2D>::unref((Ref<Texture2D>*)&local_50);
         }
 else {
            Ref<Texture2D>::unref((Ref<Texture2D>*)&local_50);
         }

      }

   }

   local_50 = 0;
   local_48 = (Object*)&_LC35;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_50);
   local_48 = (Object*)0x10bec8;
   local_40 = 100;
}
local_58 = 0;String::parse_latin1((StrRange*)&local_58);RTR((String*)&local_48, (String*)&local_58);Vector<String>::push_back();CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);LAB_00109415:if (*(char*)( in_RSI + 0x61c ) != '\0') {
   lVar5 = OS::get_singleton();
   local_48 = (Object*)0x0;
   plVar1 = (long*)( *(long*)( lVar5 + 0x68 ) + -0x10 );
   if (*(long*)( lVar5 + 0x68 ) != 0) {
      do {
         lVar2 = *plVar1;
         if (lVar2 == 0) goto LAB_00109568;
         LOCK();
         lVar6 = *plVar1;
         bVar7 = lVar2 == lVar6;
         if (bVar7) {
            *plVar1 = lVar2 + 1;
            lVar6 = lVar2;
         }

         UNLOCK();
      }
 while ( !bVar7 );
      if (lVar6 != -1) {
         local_48 = *(Object**)( lVar5 + 0x68 );
      }

   }

   LAB_00109568:cVar4 = String::operator ==((String*)&local_48, "gl_compatibility");
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   if (cVar4 != '\0') {
      local_48 = (Object*)&_LC35;
      local_50 = 0;
      local_40 = 0;
      String::parse_latin1((StrRange*)&local_50);
      local_48 = (Object*)0x10bf30;
      local_58 = 0;
      local_40 = 0x4f;
      String::parse_latin1((StrRange*)&local_58);
      RTR((String*)&local_48, (String*)&local_58);
      Vector<String>::push_back();
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   }

}
local_50 = 0;cVar4 = NodePath::operator !=((NodePath*)( in_RSI + 0x610 ), (NodePath*)&local_50);if (cVar4 == '\0') {
   NodePath::~NodePath((NodePath*)&local_50);
}
 else {
   lVar5 = OS::get_singleton();
   local_48 = (Object*)0x0;
   plVar1 = (long*)( *(long*)( lVar5 + 0x68 ) + -0x10 );
   if (*(long*)( lVar5 + 0x68 ) != 0) {
      do {
         lVar2 = *plVar1;
         if (lVar2 == 0) goto LAB_00109658;
         LOCK();
         lVar6 = *plVar1;
         bVar7 = lVar2 == lVar6;
         if (bVar7) {
            *plVar1 = lVar2 + 1;
            lVar6 = lVar2;
         }

         UNLOCK();
      }
 while ( !bVar7 );
      if (lVar6 != -1) {
         local_48 = *(Object**)( lVar5 + 0x68 );
      }

   }

   LAB_00109658:cVar4 = String::operator ==((String*)&local_48, "gl_compatibility");
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   NodePath::~NodePath((NodePath*)&local_50);
   if (cVar4 != '\0') {
      local_48 = (Object*)&_LC35;
      local_50 = 0;
      local_40 = 0;
      String::parse_latin1((StrRange*)&local_50);
      local_48 = (Object*)0x10bf80;
      local_58 = 0;
      local_40 = 0x4e;
      String::parse_latin1((StrRange*)&local_58);
      RTR((String*)&local_48, (String*)&local_58);
      Vector<String>::push_back();
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   }

}
if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return;}/* Vector<int>::push_back(int) [clone .isra.0] */void Vector<int>::push_back(Vector<int> *this, int param_1) {
   int iVar1;
   long lVar2;
   long lVar3;
   if (*(long*)( this + 8 ) == 0) {
      lVar2 = 1;
   }
 else {
      lVar2 = *(long*)( *(long*)( this + 8 ) + -8 ) + 1;
   }

   iVar1 = CowData<int>::resize<false>((CowData<int>*)( this + 8 ), lVar2);
   if (iVar1 == 0) {
      if (*(long*)( this + 8 ) == 0) {
         lVar3 = -1;
         lVar2 = 0;
      }
 else {
         lVar2 = *(long*)( *(long*)( this + 8 ) + -8 );
         lVar3 = lVar2 + -1;
         if (-1 < lVar3) {
            CowData<int>::_copy_on_write((CowData<int>*)( this + 8 ));
            *(int*)( *(long*)( this + 8 ) + lVar3 * 4 ) = param_1;
            return;
         }

      }

      _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar3, lVar2, "p_index", "size()", "", false, false);
      return;
   }

   _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
   return;
}
/* Vector<float>::push_back(float) [clone .isra.0] */void Vector<float>::push_back(Vector<float> *this, float param_1) {
   int iVar1;
   long lVar2;
   long lVar3;
   if (*(long*)( this + 8 ) == 0) {
      lVar2 = 1;
   }
 else {
      lVar2 = *(long*)( *(long*)( this + 8 ) + -8 ) + 1;
   }

   iVar1 = CowData<float>::resize<false>((CowData<float>*)( this + 8 ), lVar2);
   if (iVar1 == 0) {
      if (*(long*)( this + 8 ) == 0) {
         lVar3 = -1;
         lVar2 = 0;
      }
 else {
         lVar2 = *(long*)( *(long*)( this + 8 ) + -8 );
         lVar3 = lVar2 + -1;
         if (-1 < lVar3) {
            CowData<float>::_copy_on_write((CowData<float>*)( this + 8 ));
            *(float*)( *(long*)( this + 8 ) + lVar3 * 4 ) = param_1;
            return;
         }

      }

      _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar3, lVar2, "p_index", "size()", "", false, false);
      return;
   }

   _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GPUParticles2D::_notification(int) */void GPUParticles2D::_notification(GPUParticles2D *this, int param_1) {
   int iVar1;
   int iVar2;
   char cVar3;
   int iVar4;
   long *plVar5;
   code *UNRECOVERED_JUMPTABLE;
   Variant *pVVar6;
   undefined8 *puVar7;
   long lVar8;
   undefined8 uVar9;
   long lVar10;
   bool bVar11;
   int iVar12;
   int iVar13;
   int iVar14;
   long in_FS_OFFSET;
   undefined8 uVar16;
   double dVar15;
   float extraout_XMM0_Db;
   undefined1 auVar17[16];
   undefined1 auVar18[16];
   undefined1 auVar19[16];
   float fVar20;
   undefined1 auVar21[16];
   Vector<Vector2> *pVVar26;
   undefined1 auVar22[16];
   undefined1 auVar23[16];
   float fVar24;
   Vector<Vector2> *pVVar27;
   undefined1 auVar25[16];
   Vector *local_148;
   Vector *local_140;
   int local_138;
   Array local_118[8];
   Array local_110[8];
   Array local_108[8];
   undefined8 local_100;
   Array local_f8[8];
   undefined8 local_f0;
   Vector<int> local_e8[8];
   long local_e0;
   Vector<float> local_d8[8];
   long local_d0;
   Vector<int> local_c8[8];
   long local_c0;
   long *local_b8;
   long local_b0;
   undefined1 local_a8[16];
   undefined1 local_98[16];
   float local_88;
   undefined4 uStack_84;
   undefined4 uStack_80;
   undefined4 uStack_7c;
   undefined8 local_78;
   undefined1 auStack_70[16];
   undefined8 uStack_60;
   ulong local_58;
   undefined8 uStack_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1 < 0x1f) {
      if (9 < param_1) {
         bVar11 = SUB81(this, 0);
         switch (param_1) {
            case 10:
        local_b8 = (long *)0x0;
        cVar3 = NodePath::operator!=((NodePath *)(this + 0x610),(NodePath *)&local_b8);
        NodePath::~NodePath((NodePath *)&local_b8);
        if (cVar3 != '\0') {
          _attach_sub_emitter(this);
        }
        cVar3 = Node::can_process();
        if (cVar3 == '\0') {
          plVar5 = (long *)RenderingServer::get_singleton();
          (**(code **)(*plVar5 + 0x7e0))(0,plVar5,*(undefined8 *)(this + 0x580));
        }
        else {
          plVar5 = (long *)RenderingServer::get_singleton();
          (**(code **)(*plVar5 + 0x7e0))
                    (*(undefined8 *)(this + 0x5b0),plVar5,*(undefined8 *)(this + 0x580));
        }
        Node::set_process_internal(bVar11);
        Node::set_physics_process_internal(bVar11);
        uVar16 = Node2D::get_global_position();
        *(undefined8 *)(this + 0x5e4) = uVar16;
        break;
            case 0xb:
        plVar5 = (long *)RenderingServer::get_singleton();
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010a103. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar5 + 0x850))(plVar5,*(undefined8 *)(this + 0x580),0);
          return;
        }
        goto LAB_0010adda;
            case 0xe:
            case 0xf:
switchD_00109b27_caseD_e:
        if (((byte)this[0x2fa] & 0x40) != 0) {
          cVar3 = Node::can_process();
          if (cVar3 == '\0') {
            plVar5 = (long *)RenderingServer::get_singleton();
            if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
              uVar9 = *(undefined8 *)(this + 0x580);
              uVar16 = 0;
              UNRECOVERED_JUMPTABLE = *(code **)(*plVar5 + 0x7e0);
              goto LAB_00109c54;
            }
          }
          else {
            plVar5 = (long *)RenderingServer::get_singleton();
            if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
              uVar16 = *(undefined8 *)(this + 0x5b0);
              uVar9 = *(undefined8 *)(this + 0x580);
              UNRECOVERED_JUMPTABLE = *(code **)(*plVar5 + 0x7e0);
LAB_00109c54:
                    /* WARNING: Could not recover jumptable at 0x00109c65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*UNRECOVERED_JUMPTABLE)(uVar16,plVar5,uVar9);
              return;
            }
          }
          goto LAB_0010adda;
        }
        break;
            case 0x19:
        if (this[0x58b] != (GPUParticles2D)0x0) {
          dVar15 = (double)Node::get_process_delta_time();
          dVar15 = dVar15 + *(double *)(this + 0x630);
          *(double *)(this + 0x630) = dVar15;
          if (dVar15 < *(double *)(this + 0x638) || dVar15 == *(double *)(this + 0x638)) {
LAB_0010ac69:
            if (dVar15 < *(double *)(this + 0x640) || dVar15 == *(double *)(this + 0x640)) break;
            if (this[0x589] != (GPUParticles2D)0x0) goto LAB_00109df2;
          }
          else {
            this[0x588] = (GPUParticles2D)0x0;
            if (this[0x589] == (GPUParticles2D)0x0) {
              Node::set_process_internal(bVar11);
              dVar15 = *(double *)(this + 0x630);
              goto LAB_0010ac69;
            }
            if (dVar15 < *(double *)(this + 0x640) || dVar15 == *(double *)(this + 0x640)) break;
LAB_00109df2:
            if (this[0x58a] == (GPUParticles2D)0x0) {
              local_78 = 0;
              auStack_70 = (undefined1  [16])0x0;
              (**(code **)(*(long *)this + 0xd0))(this,SceneStringNames::singleton + 0xf8,0,0);
              if (Variant::needs_deinit[(int)local_78] != '\0') {
                Variant::_clear_internal();
              }
            }
          }
          this[0x589] = (GPUParticles2D)0x0;
          if (this[0x588] == (GPUParticles2D)0x0) {
            if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
              Node::set_process_internal(bVar11);
              return;
            }
            goto LAB_0010adda;
          }
        }
        break;
            case 0x1a:
        dVar15 = (double)Node::get_physics_process_delta_time();
        fVar20 = (float)dVar15;
        auVar22._4_4_ = fVar20;
        auVar22._0_4_ = fVar20;
        Node2D::get_global_position();
        fVar24 = *(float *)(this + 0x5e8);
        uVar16 = Node2D::get_global_position();
        auVar17._0_4_ = (float)uVar16 - *(float *)(this + 0x5e4);
        auVar22._8_8_ = _LC223;
        auVar17._4_4_ = extraout_XMM0_Db - fVar24;
        auVar17._8_4_ = (int)((ulong)uVar16 >> 0x20);
        auVar17._12_4_ = 0;
        auVar18 = divps(auVar17,auVar22);
        local_78 = auVar18._0_8_;
        auStack_70._0_4_ = 0.0 / fVar20;
        if (((auVar18._0_4_ != *(float *)(this + 0x5d8)) ||
            (auVar18._4_4_ != *(float *)(this + 0x5dc))) ||
           (0.0 / fVar20 != *(float *)(this + 0x5e0))) {
          plVar5 = (long *)RenderingServer::get_singleton();
          (**(code **)(*plVar5 + 0x888))(plVar5,*(undefined8 *)(this + 0x580),&local_78);
          *(undefined8 *)(this + 0x5d8) = local_78;
          *(undefined4 *)(this + 0x5e0) = auStack_70._0_4_;
        }
        uVar16 = Node2D::get_global_position();
        *(undefined8 *)(this + 0x5e4) = uVar16;
        break;
            case 0x1e:
        fVar24 = _LC1;
        fVar20 = _LC1;
        if (*(long **)(this + 0x608) != (long *)0x0) {
          (**(code **)(**(long **)(this + 0x608) + 0x1c0))();
          uVar16 = (**(code **)(**(long **)(this + 0x608) + 0x1d8))();
          fVar24 = (float)uVar16;
          fVar20 = (float)((ulong)uVar16 >> 0x20);
        }
        if (this[0x61c] == (GPUParticles2D)0x0) {
          plVar5 = (long *)RenderingServer::get_singleton();
          (**(code **)(*plVar5 + 0x3a8))(plVar5,*(undefined8 *)(this + 0x648));
          local_e0 = 0;
          fVar24 = (float)((uint)fVar24 ^ _LC221) * _LC222;
          auStack_70._4_4_ = (float)((uint)fVar20 ^ _LC221) * _LC222;
          local_78 = CONCAT44(auStack_70._4_4_,fVar24);
          uStack_60 = CONCAT44(_LC221 ^ auStack_70._4_4_,fVar24);
          auStack_70._12_4_ = _LC221 ^ auStack_70._4_4_;
          auStack_70._8_4_ = (uint)fVar24 ^ _LC221;
          auStack_70._0_4_ = (uint)fVar24 ^ _LC221;
          iVar13 = CowData<Vector2>::resize<false>((CowData<Vector2> *)&local_e0,4);
          if (iVar13 == 0) {
            lVar10 = 0;
            do {
              if (local_e0 == 0) {
                lVar8 = 0;
LAB_0010ab38:
                _err_print_index_error
                          ("set","./core/templates/cowdata.h",0xcf,lVar10,lVar8,"p_index","size()",
                           "",false,false);
              }
              else {
                lVar8 = *(long *)(local_e0 + -8);
                if (lVar8 <= lVar10) goto LAB_0010ab38;
                CowData<Vector2>::_copy_on_write((CowData<Vector2> *)&local_e0);
                *(undefined8 *)(local_e0 + lVar10 * 8) =
                     *(undefined8 *)(auStack_70 + lVar10 * 8 + -8);
              }
              lVar10 = lVar10 + 1;
            } while (lVar10 != 4);
          }
          local_d0 = 0;
          if (*(long *)(this + 0x608) == 0) {
LAB_0010abfe:
            Vector<Vector2>::push_back((Vector<Vector2> *)0x0,local_d8);
            Vector<Vector2>::push_back((Vector<Vector2> *)0x3f800000,local_d8);
            Vector<Vector2>::push_back((Vector<Vector2> *)0x3f8000003f800000,local_d8);
            Vector<Vector2>::push_back((Vector<Vector2> *)0x3f80000000000000,local_d8);
          }
          else {
            lVar10 = __dynamic_cast(*(long *)(this + 0x608),&Object::typeinfo,
                                    &AtlasTexture::typeinfo,0);
            if (lVar10 == 0) goto LAB_0010abfe;
            AtlasTexture::get_atlas();
            if (local_b8 == (long *)0x0) {
              Ref<Texture2D>::unref((Ref<Texture2D> *)&local_b8);
              goto LAB_0010abfe;
            }
            Ref<Texture2D>::unref((Ref<Texture2D> *)&local_b8);
            auVar25 = AtlasTexture::get_region();
            auVar19._4_4_ = auVar25._4_4_;
            auVar18._4_4_ = auVar19._4_4_ + auVar25._12_4_;
            auVar18._0_4_ = auVar25._0_4_ + auVar25._8_4_;
            AtlasTexture::get_atlas();
            uVar16 = (**(code **)(*local_b8 + 0x1d8))();
            auVar23._8_8_ = 0;
            auVar23._0_8_ = auVar25._0_8_;
            auVar21._8_8_ = _LC223;
            auVar21._0_8_ = uVar16;
            auVar18._8_8_ = 0;
            auVar23 = divps(auVar23,auVar21);
            auVar18 = divps(auVar18,auVar21);
            Ref<Texture2D>::unref((Ref<Texture2D> *)&local_b8);
            Vector<Vector2>::push_back(auVar23._0_8_,local_d8);
            auVar19._0_4_ = auVar25._0_4_ + auVar25._8_4_;
            auVar19._8_8_ = 0;
            auVar23 = divps(auVar19,auVar21);
            Vector<Vector2>::push_back(auVar23._0_8_,local_d8);
            auVar25._4_4_ = auVar19._4_4_ + auVar25._12_4_;
            auVar25._8_8_ = 0;
            auVar19 = divps(auVar25,auVar21);
            Vector<Vector2>::push_back(auVar18._0_8_,local_d8);
            Vector<Vector2>::push_back(auVar19._0_8_,local_d8);
          }
          local_c0 = 0;
          local_78 = _LC253;
          auStack_70._8_8_ = _LC225;
          auStack_70._0_8_ = _UNK_00120c18;
          iVar13 = CowData<int>::resize<false>((CowData<int> *)&local_c0,6);
          if (iVar13 == 0) {
            lVar10 = 0;
            do {
              if (local_c0 == 0) {
                lVar8 = 0;
LAB_0010ac93:
                _err_print_index_error
                          ("set","./core/templates/cowdata.h",0xcf,lVar10,lVar8,"p_index","size()",
                           "",false,false);
              }
              else {
                lVar8 = *(long *)(local_c0 + -8);
                if (lVar8 <= lVar10) goto LAB_0010ac93;
                CowData<int>::_copy_on_write((CowData<int> *)&local_c0);
                *(undefined4 *)(local_c0 + lVar10 * 4) =
                     *(undefined4 *)((Variant *)&local_78 + lVar10 * 4);
              }
              lVar10 = lVar10 + 1;
            } while (lVar10 != 6);
          }
          Array::Array(local_108);
          iVar13 = (int)local_108;
          Array::resize(iVar13);
          Variant::Variant((Variant *)&local_78,(Vector *)local_e8);
          pVVar6 = (Variant *)Array::operator[](iVar13);
          Variant::operator=(pVVar6,(Variant *)&local_78);
          if (Variant::needs_deinit[(int)local_78] != '\0') {
            Variant::_clear_internal();
          }
          Variant::Variant((Variant *)&local_78,(Vector *)local_d8);
          pVVar6 = (Variant *)Array::operator[](iVar13);
          Variant::operator=(pVVar6,(Variant *)&local_78);
          if (Variant::needs_deinit[(int)local_78] != '\0') {
            Variant::_clear_internal();
          }
          Variant::Variant((Variant *)&local_78,(Vector *)local_c8);
          pVVar6 = (Variant *)Array::operator[](iVar13);
          Variant::operator=(pVVar6,(Variant *)&local_78);
          if (Variant::needs_deinit[(int)local_78] != '\0') {
            Variant::_clear_internal();
          }
          plVar5 = (long *)RenderingServer::get_singleton();
          UNRECOVERED_JUMPTABLE = *(code **)(*plVar5 + 0x318);
          Dictionary::Dictionary((Dictionary *)&local_b8);
          Array::Array(local_f8);
          (*UNRECOVERED_JUMPTABLE)
                    (plVar5,*(undefined8 *)(this + 0x648),3,local_108,local_f8,
                     (Dictionary *)&local_b8,0x2000000);
          Array::~Array(local_f8);
          Dictionary::~Dictionary((Dictionary *)&local_b8);
          plVar5 = (long *)RenderingServer::get_singleton();
          local_b0 = 0;
          (**(code **)(*plVar5 + 0x830))
                    (plVar5,*(undefined8 *)(this + 0x580),(Dictionary *)&local_b8);
          lVar10 = local_b0;
          if (local_b0 != 0) {
            LOCK();
            plVar5 = (long *)(local_b0 + -0x10);
            *plVar5 = *plVar5 + -1;
            UNLOCK();
            if (*plVar5 == 0) {
              local_b0 = 0;
              Memory::free_static((void *)(lVar10 + -0x10),false);
            }
          }
          Array::~Array(local_108);
          CowData<int>::_unref((CowData<int> *)&local_c0);
          CowData<Vector2>::_unref((CowData<Vector2> *)&local_d0);
          CowData<Vector2>::_unref((CowData<Vector2> *)&local_e0);
        }
        else {
          plVar5 = (long *)RenderingServer::get_singleton();
          (**(code **)(*plVar5 + 0x3a8))(plVar5,*(undefined8 *)(this + 0x648));
          fVar20 = _LC1;
          iVar13 = *(int *)(this + 0x62c);
          local_100 = 0;
          local_f0 = 0;
          local_e0 = 0;
          iVar4 = *(int *)(this + 0x628) * iVar13;
          local_d0 = 0;
          local_c0 = 0;
          if (-1 < iVar4) {
            iVar14 = 0;
            pVVar26._0_4_ = (Vector<Vector2> *)(fVar24 * __LC230);
            local_138 = -2;
            pVVar27._0_4_ = (Vector<Vector2> *)((uint)pVVar26._0_4_ ^ _LC221);
            while( true ) {
              fVar24 = fVar20 - (float)(iVar14 % iVar13) / (float)iVar13;
              Vector<Vector2>::push_back(pVVar26._0_4_,local_108);
              Vector<Vector2>::push_back(pVVar27._0_4_,local_108);
              Vector<Vector2>::push_back
                        ((Vector<Vector2> *)((ulong)(uint)((float)iVar14 / (float)iVar4) << 0x20),
                         local_f8);
              iVar12 = 2;
              Vector<Vector2>::push_back
                        ((Vector<Vector2> *)
                         ((ulong)(uint)((float)iVar14 / (float)iVar4) << 0x20 | 0x3f800000),local_f8
                        );
              iVar1 = iVar14 / iVar13 + 1;
              while( true ) {
                Vector<int>::push_back(local_e8,iVar14 / iVar13);
                iVar2 = *(int *)(this + 0x628);
                if (iVar1 <= *(int *)(this + 0x628)) {
                  iVar2 = iVar1;
                }
                Vector<int>::push_back(local_e8,iVar2);
                Vector<int>::push_back(local_e8,0);
                Vector<int>::push_back(local_e8,0);
                Vector<float>::push_back(local_d8,fVar24);
                Vector<float>::push_back(local_d8,fVar20 - fVar24);
                Vector<float>::push_back(local_d8,0.0);
                Vector<float>::push_back(local_d8,0.0);
                if (iVar12 == 1) break;
                iVar12 = 1;
              }
              if (iVar14 != 0) {
                Vector<int>::push_back(local_c8,local_138);
                Vector<int>::push_back(local_c8,local_138 + 1);
                Vector<int>::push_back(local_c8,iVar14 * 2);
                Vector<int>::push_back(local_c8,local_138 + 1);
                Vector<int>::push_back(local_c8,local_138 + 3);
                Vector<int>::push_back(local_c8,iVar14 * 2);
              }
              local_138 = local_138 + 2;
              iVar14 = iVar14 + 1;
              if (iVar4 < iVar14) break;
              iVar13 = *(int *)(this + 0x62c);
            }
          }
          local_140 = (Vector *)local_f8;
          local_148 = (Vector *)local_108;
          Array::Array(local_118);
          iVar13 = (int)local_118;
          Array::resize(iVar13);
          Variant::Variant((Variant *)&local_78,local_148);
          pVVar6 = (Variant *)Array::operator[](iVar13);
          Variant::operator=(pVVar6,(Variant *)&local_78);
          if (Variant::needs_deinit[(int)local_78] != '\0') {
            Variant::_clear_internal();
          }
          Variant::Variant((Variant *)&local_78,local_140);
          pVVar6 = (Variant *)Array::operator[](iVar13);
          Variant::operator=(pVVar6,(Variant *)&local_78);
          if (Variant::needs_deinit[(int)local_78] != '\0') {
            Variant::_clear_internal();
          }
          Variant::Variant((Variant *)&local_78,(Vector *)local_e8);
          pVVar6 = (Variant *)Array::operator[](iVar13);
          Variant::operator=(pVVar6,(Variant *)&local_78);
          if (Variant::needs_deinit[(int)local_78] != '\0') {
            Variant::_clear_internal();
          }
          Variant::Variant((Variant *)&local_78,(Vector *)local_d8);
          pVVar6 = (Variant *)Array::operator[](iVar13);
          Variant::operator=(pVVar6,(Variant *)&local_78);
          if (Variant::needs_deinit[(int)local_78] != '\0') {
            Variant::_clear_internal();
          }
          Variant::Variant((Variant *)&local_78,(Vector *)local_c8);
          pVVar6 = (Variant *)Array::operator[](iVar13);
          Variant::operator=(pVVar6,(Variant *)&local_78);
          if (Variant::needs_deinit[(int)local_78] != '\0') {
            Variant::_clear_internal();
          }
          plVar5 = (long *)RenderingServer::get_singleton();
          UNRECOVERED_JUMPTABLE = *(code **)(*plVar5 + 0x318);
          Dictionary::Dictionary((Dictionary *)&local_b8);
          Array::Array(local_110);
          (*UNRECOVERED_JUMPTABLE)
                    (plVar5,*(undefined8 *)(this + 0x648),3,local_118,local_110,
                     (Dictionary *)&local_b8,0x2000000);
          Array::~Array(local_110);
          Dictionary::~Dictionary((Dictionary *)&local_b8);
          fVar24 = _LC1;
          local_b0 = 0;
          if (-1 < *(int *)(this + 0x628)) {
            iVar13 = 0;
            do {
              local_a8 = ZEXT416((uint)_LC1);
              local_78 = CONCAT44(_UNK_00120bf4,_LC1);
              uStack_84 = 0;
              uStack_80 = 0;
              uStack_7c = 0;
              local_88 = fVar24;
              local_58 = (ulong)(uint)fVar24;
              uStack_50 = 0;
              auStack_70._8_8_ = local_78;
              auStack_70._0_8_ = _UNK_00120bf8;
              uStack_60 = _UNK_00120bf8;
              if (local_b0 == 0) {
                lVar10 = 1;
              }
              else {
                lVar10 = *(long *)(local_b0 + -8) + 1;
              }
              local_98 = local_a8;
              iVar4 = CowData<Transform3D>::resize<false>((CowData<Transform3D> *)&local_b0,lVar10);
              if (iVar4 == 0) {
                if (local_b0 == 0) {
                  lVar8 = -1;
                  lVar10 = 0;
                }
                else {
                  lVar10 = *(long *)(local_b0 + -8);
                  lVar8 = lVar10 + -1;
                  if (-1 < lVar8) {
                    CowData<Transform3D>::_copy_on_write((CowData<Transform3D> *)&local_b0);
                    puVar7 = (undefined8 *)(lVar8 * 0x30 + local_b0);
                    *puVar7 = local_78;
                    puVar7[1] = auStack_70._0_8_;
                    puVar7[2] = auStack_70._8_8_;
                    puVar7[3] = uStack_60;
                    puVar7[4] = local_58;
                    puVar7[5] = uStack_50;
                    goto LAB_0010a950;
                  }
                }
                _err_print_index_error
                          ("set","./core/templates/cowdata.h",0xcf,lVar8,lVar10,"p_index","size()",
                           "",false,false);
              }
              else {
                _err_print_error("push_back","./core/templates/vector.h",0x142,
                                 "Condition \"err\" is true. Returning: true",0,0);
              }
LAB_0010a950:
              iVar13 = iVar13 + 1;
            } while (iVar13 <= *(int *)(this + 0x628));
          }
          plVar5 = (long *)RenderingServer::get_singleton();
          (**(code **)(*plVar5 + 0x830))
                    (plVar5,*(undefined8 *)(this + 0x580),(Dictionary *)&local_b8);
          lVar10 = local_b0;
          if (local_b0 != 0) {
            LOCK();
            plVar5 = (long *)(local_b0 + -0x10);
            *plVar5 = *plVar5 + -1;
            UNLOCK();
            if (*plVar5 == 0) {
              local_b0 = 0;
              Memory::free_static((void *)(lVar10 + -0x10),false);
            }
          }
          Array::~Array(local_118);
          CowData<int>::_unref((CowData<int> *)&local_c0);
          lVar10 = local_d0;
          if (local_d0 != 0) {
            LOCK();
            plVar5 = (long *)(local_d0 + -0x10);
            *plVar5 = *plVar5 + -1;
            UNLOCK();
            if (*plVar5 == 0) {
              local_d0 = 0;
              Memory::free_static((void *)(lVar10 + -0x10),false);
            }
          }
          CowData<int>::_unref((CowData<int> *)&local_e0);
          CowData<Vector2>::_unref((CowData<Vector2> *)&local_f0);
          CowData<Vector2>::_unref((CowData<Vector2> *)&local_100);
        }
        plVar5 = (long *)RenderingServer::get_singleton();
        (**(code **)(*plVar5 + 0xf70))
                  (plVar5,*(undefined8 *)(this + 0x428),*(undefined8 *)(this + 0x580));
        if (this[0x5f1] != (GPUParticles2D)0x0) {
          local_78 = __LC226;
          auStack_70._0_8_ = _UNK_00120c28;
          CanvasItem::draw_rect
                    ((Rect2 *)this,(Color *)(this + 0x5b8),SUB81(&local_78,0),_LC227,false);
        }
         }

      }

   }
 else {
      if (param_1 == 2000) {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            _update_particle_emission_transform(this);
            return;
         }

         goto LAB_0010adda;
      }

      if (param_1 - 0x232bU < 2) goto switchD_00109b27_caseD_e;
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_0010adda:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* DefaultAllocator::alloc(unsigned long) */void DefaultAllocator::alloc(ulong param_1) {
   Memory::alloc_static(param_1, false);
   return;
}
/* StringName::~StringName() */void StringName::~StringName(StringName *this) {
   if (( configured != '\0' ) && ( *(long*)this != 0 )) {
      StringName::unref();
      return;
   }

   return;
}
/* Object::_bind_compatibility_methods() */void Object::_bind_compatibility_methods(void) {
   return;
}
/* Object::_set(StringName const&, Variant const&) */undefined8 Object::_set(StringName *param_1, Variant *param_2) {
   return 0;
}
/* Object::_get(StringName const&, Variant&) const */undefined8 Object::_get(StringName *param_1, Variant *param_2) {
   return 0;
}
/* Object::_get_property_list(List<PropertyInfo, DefaultAllocator>*) const */void Object::_get_property_list(List *param_1) {
   return;
}
/* Object::_validate_property(PropertyInfo&) const */void Object::_validate_property(PropertyInfo *param_1) {
   return;
}
/* Object::_notification(int) */void Object::_notification(int param_1) {
   return;
}
/* Object::get_save_class() const */void Object::get_save_class(void) {
   long lVar1;
   long *in_RSI;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   ( **(code**)( *in_RSI + 0x48 ) )();
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind::is_valid() const */undefined8 MethodBind::is_valid(void) {
   return 1;
}
/* MethodBind::is_vararg() const */undefined8 MethodBind::is_vararg(void) {
   return 0;
}
/* CanvasItem::_edit_get_minimum_size() const */undefined8 CanvasItem::_edit_get_minimum_size(void) {
   return 0xbf800000bf800000;
}
/* CanvasItem::_edit_use_pivot() const */undefined8 CanvasItem::_edit_use_pivot(void) {
   return 0;
}
/* CanvasItem::_edit_set_pivot(Vector2 const&) */void CanvasItem::_edit_set_pivot(Vector2 *param_1) {
   return;
}
/* CanvasItem::_edit_get_pivot() const */undefined8 CanvasItem::_edit_get_pivot(void) {
   return 0;
}
/* CanvasItem::_edit_use_rect() const */undefined8 CanvasItem::_edit_use_rect(void) {
   return 0;
}
/* CanvasItem::_edit_get_rect() const */undefined1[16];CanvasItem::_edit_get_rect(void) {
   return ZEXT816(0);
}
/* CanvasItem::get_anchorable_rect() const */undefined1[16];CanvasItem::get_anchorable_rect(void) {
   return ZEXT816(0);
}
/* GPUParticles2D::is_class_ptr(void*) const */uint GPUParticles2D::is_class_ptr(GPUParticles2D *this, void *param_1) {
   return (uint)CONCAT71(0x120a, (undefined4*)param_1 == &Node2D::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x120a, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x120a, (undefined4*)param_1 == &CanvasItem::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x120a, (undefined4*)param_1 == &Node::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x120a, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr);
}
/* GPUParticles2D::_property_can_revertv(StringName const&) const */undefined8 GPUParticles2D::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* GPUParticles2D::_property_get_revertv(StringName const&, Variant&) const */undefined8 GPUParticles2D::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* CallableCustomMethodPointer<GPUParticles2D, void>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<GPUParticles2D,void>::~CallableCustomMethodPointer(CallableCustomMethodPointer<GPUParticles2D,void> *this) {
   return;
}
/* MethodBindTRC<unsigned int>::_gen_argument_type(int) const */undefined8 MethodBindTRC<unsigned_int>::_gen_argument_type(int param_1) {
   return 2;
}
/* MethodBindTRC<unsigned int>::get_argument_meta(int) const */uint MethodBindTRC<unsigned_int>::get_argument_meta(MethodBindTRC<unsigned_int> *this, int param_1) {
   return param_1 >> 0x1f & 7;
}
/* MethodBindT<unsigned int>::_gen_argument_type(int) const */char MethodBindT<unsigned_int>::_gen_argument_type(MethodBindT<unsigned_int> *this, int param_1) {
   return ( param_1 == 0 ) * '\x02';
}
/* MethodBindT<unsigned int>::get_argument_meta(int) const */byte MethodBindT<unsigned_int>::get_argument_meta(MethodBindT<unsigned_int> *this, int param_1) {
   return -(param_1 == 0) & 7;
}
/* MethodBindT<Node*>::_gen_argument_type(int) const */byte MethodBindT<Node*>::_gen_argument_type(MethodBindT<Node*> *this, int param_1) {
   return -(param_1 == 0) & 0x18;
}
/* MethodBindT<Node*>::get_argument_meta(int) const */undefined8 MethodBindT<Node*>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindT<Transform2D const&, Vector2 const&, Color const&, Color const&, unsigned
   int>::get_argument_meta(int) const */undefined8 MethodBindT<Transform2D_const&,Vector2_const&,Color_const&,Color_const&,unsigned_int>::get_argument_meta(MethodBindT<Transform2D_const&,Vector2_const&,Color_const&,Color_const&,unsigned_int> *this, int param_1) {
   undefined8 uVar1;
   uVar1 = 7;
   if (param_1 != 4) {
      uVar1 = 0;
   }

   return uVar1;
}
/* MethodBindTRC<NodePath>::_gen_argument_type(int) const */undefined8 MethodBindTRC<NodePath>::_gen_argument_type(int param_1) {
   return 0x16;
}
/* MethodBindTRC<NodePath>::get_argument_meta(int) const */undefined8 MethodBindTRC<NodePath>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindT<NodePath const&>::_gen_argument_type(int) const */byte MethodBindT<NodePath_const&>::_gen_argument_type(MethodBindT<NodePath_const&> *this, int param_1) {
   return -(param_1 == 0) & 0x16;
}
/* MethodBindT<NodePath const&>::get_argument_meta(int) const */undefined8 MethodBindT<NodePath_const&>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTRC<Ref<Texture2D>>::_gen_argument_type(int) const */undefined8 MethodBindTRC<Ref<Texture2D>>::_gen_argument_type(int param_1) {
   return 0x18;
}
/* MethodBindTRC<Ref<Texture2D>>::get_argument_meta(int) const */undefined8 MethodBindTRC<Ref<Texture2D>>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindT<Ref<Texture2D> const&>::_gen_argument_type(int) const */byte MethodBindT<Ref<Texture2D>const&>::_gen_argument_type(MethodBindT<Ref<Texture2D>const&> *this, int param_1) {
   return -(param_1 == 0) & 0x18;
}
/* MethodBindT<Ref<Texture2D> const&>::get_argument_meta(int) const */undefined8 MethodBindT<Ref<Texture2D>const&>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTRC<GPUParticles2D::DrawOrder>::_gen_argument_type(int) const */undefined8 MethodBindTRC<GPUParticles2D::DrawOrder>::_gen_argument_type(int param_1) {
   return 2;
}
/* MethodBindTRC<GPUParticles2D::DrawOrder>::get_argument_meta(int) const */undefined8 MethodBindTRC<GPUParticles2D::DrawOrder>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindT<GPUParticles2D::DrawOrder>::_gen_argument_type(int) const */char MethodBindT<GPUParticles2D::DrawOrder>::_gen_argument_type(MethodBindT<GPUParticles2D::DrawOrder> *this, int param_1) {
   return ( param_1 == 0 ) * '\x02';
}
/* MethodBindT<GPUParticles2D::DrawOrder>::get_argument_meta(int) const */undefined8 MethodBindT<GPUParticles2D::DrawOrder>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTRC<Ref<Material>>::_gen_argument_type(int) const */undefined8 MethodBindTRC<Ref<Material>>::_gen_argument_type(int param_1) {
   return 0x18;
}
/* MethodBindTRC<Ref<Material>>::get_argument_meta(int) const */undefined8 MethodBindTRC<Ref<Material>>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTRC<Rect2>::_gen_argument_type(int) const */undefined8 MethodBindTRC<Rect2>::_gen_argument_type(int param_1) {
   return 7;
}
/* MethodBindTRC<Rect2>::get_argument_meta(int) const */undefined8 MethodBindTRC<Rect2>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTRC<float>::_gen_argument_type(int) const */undefined8 MethodBindTRC<float>::_gen_argument_type(int param_1) {
   return 3;
}
/* MethodBindTRC<float>::get_argument_meta(int) const */uint MethodBindTRC<float>::get_argument_meta(MethodBindTRC<float> *this, int param_1) {
   return param_1 >> 0x1f & 9;
}
/* MethodBindTRC<double>::_gen_argument_type(int) const */undefined8 MethodBindTRC<double>::_gen_argument_type(int param_1) {
   return 3;
}
/* MethodBindTRC<double>::get_argument_meta(int) const */uint MethodBindTRC<double>::get_argument_meta(MethodBindTRC<double> *this, int param_1) {
   return param_1 >> 0x1f & 10;
}
/* MethodBindTRC<int>::_gen_argument_type(int) const */undefined8 MethodBindTRC<int>::_gen_argument_type(int param_1) {
   return 2;
}
/* MethodBindTRC<int>::get_argument_meta(int) const */uint MethodBindTRC<int>::get_argument_meta(MethodBindTRC<int> *this, int param_1) {
   return param_1 >> 0x1f & 3;
}
/* MethodBindTRC<bool>::_gen_argument_type(int) const */undefined8 MethodBindTRC<bool>::_gen_argument_type(int param_1) {
   return 1;
}
/* MethodBindTRC<bool>::get_argument_meta(int) const */undefined8 MethodBindTRC<bool>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindT<Ref<Material> const&>::_gen_argument_type(int) const */byte MethodBindT<Ref<Material>const&>::_gen_argument_type(MethodBindT<Ref<Material>const&> *this, int param_1) {
   return -(param_1 == 0) & 0x18;
}
/* MethodBindT<Ref<Material> const&>::get_argument_meta(int) const */undefined8 MethodBindT<Ref<Material>const&>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindT<Rect2 const&>::_gen_argument_type(int) const */byte MethodBindT<Rect2_const&>::_gen_argument_type(MethodBindT<Rect2_const&> *this, int param_1) {
   return -(param_1 == 0) & 7;
}
/* MethodBindT<Rect2 const&>::get_argument_meta(int) const */undefined8 MethodBindT<Rect2_const&>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindT<float>::_gen_argument_type(int) const */byte MethodBindT<float>::_gen_argument_type(MethodBindT<float> *this, int param_1) {
   return -(param_1 == 0) & 3;
}
/* MethodBindT<float>::get_argument_meta(int) const */byte MethodBindT<float>::get_argument_meta(MethodBindT<float> *this, int param_1) {
   return -(param_1 == 0) & 9;
}
/* MethodBindT<double>::_gen_argument_type(int) const */byte MethodBindT<double>::_gen_argument_type(MethodBindT<double> *this, int param_1) {
   return -(param_1 == 0) & 3;
}
/* MethodBindT<double>::get_argument_meta(int) const */byte MethodBindT<double>::get_argument_meta(MethodBindT<double> *this, int param_1) {
   return -(param_1 == 0) & 10;
}
/* MethodBindT<int>::_gen_argument_type(int) const */char MethodBindT<int>::_gen_argument_type(MethodBindT<int> *this, int param_1) {
   return ( param_1 == 0 ) * '\x02';
}
/* MethodBindT<int>::get_argument_meta(int) const */byte MethodBindT<int>::get_argument_meta(MethodBindT<int> *this, int param_1) {
   return -(param_1 == 0) & 3;
}
/* MethodBindT<bool>::_gen_argument_type(int) const */bool MethodBindT<bool>::_gen_argument_type(MethodBindT<bool> *this, int param_1) {
   return param_1 == 0;
}
/* MethodBindT<bool>::get_argument_meta(int) const */undefined8 MethodBindT<bool>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindT<>::_gen_argument_type(int) const */undefined8 MethodBindT<>::_gen_argument_type(int param_1) {
   return 0;
}
/* MethodBindT<>::_gen_argument_type_info(int) const */undefined8 MethodBindT<>::_gen_argument_type_info(int param_1) {
   undefined4 in_register_0000003c;
   *(undefined4*)CONCAT44(in_register_0000003c, param_1) = 0;
   *(undefined4*)( CONCAT44(in_register_0000003c, param_1) + 0x18 ) = 0;
   *(undefined8*)( CONCAT44(in_register_0000003c, param_1) + 0x20 ) = 0;
   *(undefined4*)( CONCAT44(in_register_0000003c, param_1) + 0x28 ) = 6;
   *(undefined1(*) [16])( CONCAT44(in_register_0000003c, param_1) + 8 ) = (undefined1[16])0x0;
   return CONCAT44(in_register_0000003c, param_1);
}
/* MethodBindT<>::get_argument_meta(int) const */undefined8 MethodBindT<>::get_argument_meta(int param_1) {
   return 0;
}
/* CallableCustomMethodPointer<GPUParticles2D, void>::get_argument_count(bool&) const */undefined8 CallableCustomMethodPointer<GPUParticles2D,void>::get_argument_count(CallableCustomMethodPointer<GPUParticles2D,void> *this, bool *param_1) {
   *param_1 = true;
   return 0;
}
/* MethodBindT<Transform2D const&, Vector2 const&, Color const&, Color const&, unsigned
   int>::_gen_argument_type(int) const */undefined8 MethodBindT<Transform2D_const&,Vector2_const&,Color_const&,Color_const&,unsigned_int>::_gen_argument_type(MethodBindT<Transform2D_const&,Vector2_const&,Color_const&,Color_const&,unsigned_int> *this, int param_1) {
   undefined8 uVar1;
   uVar1 = 0;
   if (( ( (uint)param_1 < 5 ) && ( uVar1 = 0xb ),param_1 != 0 )) {
      uVar1 = 2;
      if (param_1 != 4) {
         uVar1 = 0x14;
      }

      return uVar1;
   }

   return uVar1;
}
/* CallableCustomMethodPointer<GPUParticles2D, void>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<GPUParticles2D,void>::~CallableCustomMethodPointer(CallableCustomMethodPointer<GPUParticles2D,void> *this) {
   operator_delete(this, 0x48);
   return;
}
/* MethodBindT<>::~MethodBindT() */void MethodBindT<>::~MethodBindT(MethodBindT<> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00120230;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<>::~MethodBindT() */void MethodBindT<>::~MethodBindT(MethodBindT<> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00120230;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<Rect2 const&>::~MethodBindT() */void MethodBindT<Rect2_const&>::~MethodBindT(MethodBindT<Rect2_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00120410;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<Rect2 const&>::~MethodBindT() */void MethodBindT<Rect2_const&>::~MethodBindT(MethodBindT<Rect2_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00120410;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<Ref<Material> const&>::~MethodBindT() */void MethodBindT<Ref<Material>const&>::~MethodBindT(MethodBindT<Ref<Material>const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00120470;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<Ref<Material> const&>::~MethodBindT() */void MethodBindT<Ref<Material>const&>::~MethodBindT(MethodBindT<Ref<Material>const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00120470;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<Ref<Material>>::~MethodBindTRC() */void MethodBindTRC<Ref<Material>>::~MethodBindTRC(MethodBindTRC<Ref<Material>> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001206b0;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<Ref<Material>>::~MethodBindTRC() */void MethodBindTRC<Ref<Material>>::~MethodBindTRC(MethodBindTRC<Ref<Material>> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001206b0;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<GPUParticles2D::DrawOrder>::~MethodBindT() */void MethodBindT<GPUParticles2D::DrawOrder>::~MethodBindT(MethodBindT<GPUParticles2D::DrawOrder> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00120710;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<GPUParticles2D::DrawOrder>::~MethodBindT() */void MethodBindT<GPUParticles2D::DrawOrder>::~MethodBindT(MethodBindT<GPUParticles2D::DrawOrder> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00120710;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<GPUParticles2D::DrawOrder>::~MethodBindTRC() */void MethodBindTRC<GPUParticles2D::DrawOrder>::~MethodBindTRC(MethodBindTRC<GPUParticles2D::DrawOrder> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00120770;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<GPUParticles2D::DrawOrder>::~MethodBindTRC() */void MethodBindTRC<GPUParticles2D::DrawOrder>::~MethodBindTRC(MethodBindTRC<GPUParticles2D::DrawOrder> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00120770;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<Ref<Texture2D> const&>::~MethodBindT() */void MethodBindT<Ref<Texture2D>const&>::~MethodBindT(MethodBindT<Ref<Texture2D>const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001207d0;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<Ref<Texture2D> const&>::~MethodBindT() */void MethodBindT<Ref<Texture2D>const&>::~MethodBindT(MethodBindT<Ref<Texture2D>const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001207d0;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<Ref<Texture2D>>::~MethodBindTRC() */void MethodBindTRC<Ref<Texture2D>>::~MethodBindTRC(MethodBindTRC<Ref<Texture2D>> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00120830;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<Ref<Texture2D>>::~MethodBindTRC() */void MethodBindTRC<Ref<Texture2D>>::~MethodBindTRC(MethodBindTRC<Ref<Texture2D>> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00120830;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<Rect2>::~MethodBindTRC() */void MethodBindTRC<Rect2>::~MethodBindTRC(MethodBindTRC<Rect2> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00120650;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<Rect2>::~MethodBindTRC() */void MethodBindTRC<Rect2>::~MethodBindTRC(MethodBindTRC<Rect2> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00120650;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<bool>::~MethodBindT() */void MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00120290;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<bool>::~MethodBindT() */void MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00120290;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<NodePath const&>::~MethodBindT() */void MethodBindT<NodePath_const&>::~MethodBindT(MethodBindT<NodePath_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00120890;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<NodePath const&>::~MethodBindT() */void MethodBindT<NodePath_const&>::~MethodBindT(MethodBindT<NodePath_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00120890;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<NodePath>::~MethodBindTRC() */void MethodBindTRC<NodePath>::~MethodBindTRC(MethodBindTRC<NodePath> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001208f0;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<NodePath>::~MethodBindTRC() */void MethodBindTRC<NodePath>::~MethodBindTRC(MethodBindTRC<NodePath> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001208f0;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<Transform2D const&, Vector2 const&, Color const&, Color const&, unsigned
   int>::~MethodBindT() */void MethodBindT<Transform2D_const&,Vector2_const&,Color_const&,Color_const&,unsigned_int>::~MethodBindT(MethodBindT<Transform2D_const&,Vector2_const&,Color_const&,Color_const&,unsigned_int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00120950;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<Transform2D const&, Vector2 const&, Color const&, Color const&, unsigned
   int>::~MethodBindT() */void MethodBindT<Transform2D_const&,Vector2_const&,Color_const&,Color_const&,unsigned_int>::~MethodBindT(MethodBindT<Transform2D_const&,Vector2_const&,Color_const&,Color_const&,unsigned_int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00120950;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<double>::~MethodBindT() */void MethodBindT<double>::~MethodBindT(MethodBindT<double> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00120350;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<double>::~MethodBindT() */void MethodBindT<double>::~MethodBindT(MethodBindT<double> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00120350;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<double>::~MethodBindTRC() */void MethodBindTRC<double>::~MethodBindTRC(MethodBindTRC<double> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00120590;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<double>::~MethodBindTRC() */void MethodBindTRC<double>::~MethodBindTRC(MethodBindTRC<double> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00120590;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<int>::~MethodBindT() */void MethodBindT<int>::~MethodBindT(MethodBindT<int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001202f0;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<int>::~MethodBindT() */void MethodBindT<int>::~MethodBindT(MethodBindT<int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001202f0;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<int>::~MethodBindTRC() */void MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00120530;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<int>::~MethodBindTRC() */void MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00120530;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<Node*>::~MethodBindT() */void MethodBindT<Node*>::~MethodBindT(MethodBindT<Node*> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001209b0;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<Node*>::~MethodBindT() */void MethodBindT<Node*>::~MethodBindT(MethodBindT<Node*> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001209b0;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<float>::~MethodBindT() */void MethodBindT<float>::~MethodBindT(MethodBindT<float> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001203b0;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<float>::~MethodBindT() */void MethodBindT<float>::~MethodBindT(MethodBindT<float> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001203b0;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<float>::~MethodBindTRC() */void MethodBindTRC<float>::~MethodBindTRC(MethodBindTRC<float> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001205f0;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<float>::~MethodBindTRC() */void MethodBindTRC<float>::~MethodBindTRC(MethodBindTRC<float> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001205f0;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<bool>::~MethodBindTRC() */void MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001204d0;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<bool>::~MethodBindTRC() */void MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001204d0;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<unsigned int>::~MethodBindT() */void MethodBindT<unsigned_int>::~MethodBindT(MethodBindT<unsigned_int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00120a10;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<unsigned int>::~MethodBindT() */void MethodBindT<unsigned_int>::~MethodBindT(MethodBindT<unsigned_int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00120a10;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<unsigned int>::~MethodBindTRC() */void MethodBindTRC<unsigned_int>::~MethodBindTRC(MethodBindTRC<unsigned_int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00120a70;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<unsigned int>::~MethodBindTRC() */void MethodBindTRC<unsigned_int>::~MethodBindTRC(MethodBindTRC<unsigned_int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00120a70;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* CallableCustomMethodPointerBase::get_method() const */void CallableCustomMethodPointerBase::get_method(void) {
   long in_RSI;
   StringName *in_RDI;
   StringName::StringName(in_RDI, *(char**)( in_RSI + 0x20 ), false);
   return;
}
/* GPUParticles2D::_getv(StringName const&, Variant&) const */undefined8 GPUParticles2D::_getv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   if ((code*)_GLOBAL_OFFSET_TABLE_ != Object::_get) {
      uVar1 = CanvasItem::_get(param_1, param_2);
      return uVar1;
   }

   return 0;
}
/* GPUParticles2D::_setv(StringName const&, Variant const&) */undefined8 GPUParticles2D::_setv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   if ((code*)PTR__set_00127008 != Object::_set) {
      uVar1 = CanvasItem::_set(param_1, param_2);
      return uVar1;
   }

   return 0;
}
/* CallableCustomMethodPointer<GPUParticles2D, void>::get_object() const */undefined8 CallableCustomMethodPointer<GPUParticles2D,void>::get_object(CallableCustomMethodPointer<GPUParticles2D,void> *this) {
   long lVar1;
   undefined8 uVar2;
   uint uVar3;
   ulong *puVar4;
   long in_FS_OFFSET;
   bool bVar5;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar3 = ( uint ) * (ulong*)( this + 0x30 ) & 0xffffff;
   if (uVar3 < (uint)ObjectDB::slot_max) {
      while (true) {
         LOCK();
         bVar5 = (char)ObjectDB::spin_lock == '\0';
         if (bVar5) {
            ObjectDB::spin_lock._0_1_ = '\x01';
         }

         UNLOCK();
         if (bVar5) break;
         do {} while ( (char)ObjectDB::spin_lock != '\0' );
      }
;
      puVar4 = (ulong*)( (ulong)uVar3 * 0x10 + ObjectDB::object_slots );
      if (( *(ulong*)( this + 0x30 ) >> 0x18 & 0x7fffffffff ) != ( *puVar4 & 0x7fffffffff )) {
         uVar2 = 0;
         ObjectDB::spin_lock._0_1_ = '\0';
         goto LAB_0010c8ad;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] != 0) {
         uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
         goto LAB_0010c8ad;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   uVar2 = 0;
   LAB_0010c8ad:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
/* CallableCustomMethodPointerBase::get_as_text() const */void CallableCustomMethodPointerBase::get_as_text(void) {
   char *__s;
   long lVar1;
   long in_RSI;
   StrRange *in_RDI;
   long in_FS_OFFSET;
   __s = *(char**)( in_RSI + 0x20 );
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)in_RDI = 0;
   if (__s != (char*)0x0) {
      strlen(__s);
   }

   String::parse_latin1(in_RDI);
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GPUParticles2D::_get_class_namev() const */undefined8 *GPUParticles2D::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_0010c9d3:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_0010c9d3;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "GPUParticles2D");
         goto LAB_0010ca3e;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "GPUParticles2D");
   LAB_0010ca3e:return &_get_class_namev();
}
/* CowData<float>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<float>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<Transform3D>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<Transform3D>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<int>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<int>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<Vector2>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<Vector2>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* GPUParticles2D::_bind_compatibility_methods() [clone .cold] */void GPUParticles2D::_bind_compatibility_methods(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<String>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<String>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* GPUParticles2D::_bind_methods() [clone .cold] */void GPUParticles2D::_bind_methods(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* List<PropertyInfo, DefaultAllocator>::push_back(PropertyInfo const&) [clone .isra.0] */void List<PropertyInfo,DefaultAllocator>::push_back(List<PropertyInfo,DefaultAllocator> *this, PropertyInfo *param_1) {
   long *plVar1;
   long lVar2;
   undefined4 *puVar3;
   undefined1(*pauVar4)[16];
   if (*(long*)this == 0) {
      pauVar4 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])this = pauVar4;
      *(undefined4*)pauVar4[1] = 0;
      *pauVar4 = (undefined1[16])0x0;
   }

   puVar3 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
   *(undefined8*)( puVar3 + 8 ) = 0;
   *(undefined1(*) [16])( puVar3 + 2 ) = (undefined1[16])0x0;
   lVar2 = *(long*)( param_1 + 8 );
   *puVar3 = 0;
   puVar3[6] = 0;
   puVar3[10] = 6;
   *(undefined8*)( puVar3 + 0x10 ) = 0;
   *(undefined1(*) [16])( puVar3 + 0xc ) = (undefined1[16])0x0;
   *puVar3 = *(undefined4*)param_1;
   if (lVar2 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar3 + 2 ), (CowData*)( param_1 + 8 ));
   }

   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)( param_1 + 0x10 ));
   puVar3[6] = *(undefined4*)( param_1 + 0x18 );
   if (*(long*)( puVar3 + 8 ) != *(long*)( param_1 + 0x20 )) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar3 + 8 ), (CowData*)( param_1 + 0x20 ));
   }

   puVar3[10] = *(undefined4*)( param_1 + 0x28 );
   plVar1 = *(long**)this;
   lVar2 = plVar1[1];
   *(undefined8*)( puVar3 + 0xc ) = 0;
   *(long**)( puVar3 + 0x10 ) = plVar1;
   *(long*)( puVar3 + 0xe ) = lVar2;
   if (lVar2 != 0) {
      *(undefined4**)( lVar2 + 0x30 ) = puVar3;
   }

   plVar1[1] = (long)puVar3;
   if (*plVar1 != 0) {
      *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
      return;
   }

   *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
   *plVar1 = (long)puVar3;
   return;
}
/* GPUParticles2D::get_class() const */void GPUParticles2D::get_class(void) {
   long lVar1;
   long lVar2;
   char *__s;
   long in_RSI;
   StrRange *in_RDI;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( in_RSI + 8 ) == 0) {
      *(undefined8*)in_RDI = 0;
      String::parse_latin1(in_RDI);
   }
 else {
      lVar2 = *(long*)( *(long*)( in_RSI + 8 ) + 0x20 );
      if (lVar2 == 0) {
         *(undefined8*)in_RDI = 0;
      }
 else {
         __s = *(char**)( lVar2 + 8 );
         *(undefined8*)in_RDI = 0;
         if (__s == (char*)0x0) {
            if (*(long*)( lVar2 + 0x10 ) != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)in_RDI, (CowData*)( lVar2 + 0x10 ));
            }

         }
 else {
            strlen(__s);
            String::parse_latin1(in_RDI);
         }

      }

   }

   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Ref<Texture2D>>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<Ref<Texture2D>>::_gen_argument_type_info(int param_1) {
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
   puVar3 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_58 = 0;
   local_48 = "Texture2D";
   local_40 = 9;
   String::parse_latin1((StrRange*)&local_58);
   *puVar3 = 0x18;
   puVar3[6] = 0x11;
   *(undefined8*)( puVar3 + 8 ) = 0;
   *(undefined1(*) [16])( puVar3 + 2 ) = (undefined1[16])0x0;
   if (local_58 == 0) {
      puVar3[10] = 6;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar3 + 8 ), (CowData*)&local_58);
      puVar3[10] = 6;
      if (puVar3[6] != 0x11) {
         StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_50);
         goto LAB_0010cd60;
      }

   }

   StringName::StringName((StringName*)&local_48, (CowData<char32_t>*)( puVar3 + 8 ), false);
   if (*(char**)( puVar3 + 4 ) == local_48) {
      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }
 else {
      StringName::unref();
      *(char**)( puVar3 + 4 ) = local_48;
   }

   LAB_0010cd60:lVar2 = local_58;
   if (local_58 != 0) {
      LOCK();
      plVar1 = (long*)( local_58 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_58 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
      StringName::unref();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<int>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<int>::_gen_argument_type_info(int param_1) {
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
   puVar3 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_58 = 0;
   local_48 = &_LC35;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   *puVar3 = 2;
   puVar3[6] = 0;
   *(undefined8*)( puVar3 + 8 ) = 0;
   *(undefined1(*) [16])( puVar3 + 2 ) = (undefined1[16])0x0;
   if (local_58 == 0) {
      puVar3[10] = 6;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar3 + 8 ), (CowData*)&local_58);
      puVar3[10] = 6;
      if (puVar3[6] == 0x11) {
         StringName::StringName((StringName*)&local_48, (CowData<char32_t>*)( puVar3 + 8 ), false);
         if (*(undefined**)( puVar3 + 4 ) == local_48) {
            lVar2 = local_58;
            if (( StringName::configured != '\0' ) && ( local_48 != (undefined*)0x0 )) {
               StringName::unref();
               lVar2 = local_58;
            }

         }
 else {
            StringName::unref();
            *(undefined**)( puVar3 + 4 ) = local_48;
            lVar2 = local_58;
         }

         goto joined_r0x0010cf7c;
      }

   }

   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x0010cf7c:local_58 = lVar2;
   if (lVar2 != 0) {
      LOCK();
      plVar1 = (long*)( lVar2 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_58 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
      StringName::unref();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<bool>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<bool>::_gen_argument_type_info(int param_1) {
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
   puVar3 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_58 = 0;
   local_48 = &_LC35;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   *puVar3 = 1;
   puVar3[6] = 0;
   *(undefined8*)( puVar3 + 8 ) = 0;
   *(undefined1(*) [16])( puVar3 + 2 ) = (undefined1[16])0x0;
   if (local_58 == 0) {
      puVar3[10] = 6;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar3 + 8 ), (CowData*)&local_58);
      puVar3[10] = 6;
      if (puVar3[6] == 0x11) {
         StringName::StringName((StringName*)&local_48, (CowData<char32_t>*)( puVar3 + 8 ), false);
         if (*(undefined**)( puVar3 + 4 ) == local_48) {
            lVar2 = local_58;
            if (( StringName::configured != '\0' ) && ( local_48 != (undefined*)0x0 )) {
               StringName::unref();
               lVar2 = local_58;
            }

         }
 else {
            StringName::unref();
            *(undefined**)( puVar3 + 4 ) = local_48;
            lVar2 = local_58;
         }

         goto joined_r0x0010d0fc;
      }

   }

   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x0010d0fc:local_58 = lVar2;
   if (lVar2 != 0) {
      LOCK();
      plVar1 = (long*)( lVar2 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_58 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
      StringName::unref();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<NodePath>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<NodePath>::_gen_argument_type_info(int param_1) {
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
   puVar3 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_58 = 0;
   local_48 = &_LC35;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   *puVar3 = 0x16;
   puVar3[6] = 0;
   *(undefined8*)( puVar3 + 8 ) = 0;
   *(undefined1(*) [16])( puVar3 + 2 ) = (undefined1[16])0x0;
   if (local_58 == 0) {
      puVar3[10] = 6;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar3 + 8 ), (CowData*)&local_58);
      puVar3[10] = 6;
      if (puVar3[6] == 0x11) {
         StringName::StringName((StringName*)&local_48, (CowData<char32_t>*)( puVar3 + 8 ), false);
         if (*(undefined**)( puVar3 + 4 ) == local_48) {
            lVar2 = local_58;
            if (( StringName::configured != '\0' ) && ( local_48 != (undefined*)0x0 )) {
               StringName::unref();
               lVar2 = local_58;
            }

         }
 else {
            StringName::unref();
            *(undefined**)( puVar3 + 4 ) = local_48;
            lVar2 = local_58;
         }

         goto joined_r0x0010d27c;
      }

   }

   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x0010d27c:local_58 = lVar2;
   if (lVar2 != 0) {
      LOCK();
      plVar1 = (long*)( lVar2 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_58 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
      StringName::unref();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<double>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<double>::_gen_argument_type_info(int param_1) {
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
   puVar3 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_58 = 0;
   local_48 = &_LC35;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   *puVar3 = 3;
   puVar3[6] = 0;
   *(undefined8*)( puVar3 + 8 ) = 0;
   *(undefined1(*) [16])( puVar3 + 2 ) = (undefined1[16])0x0;
   if (local_58 == 0) {
      puVar3[10] = 6;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar3 + 8 ), (CowData*)&local_58);
      puVar3[10] = 6;
      if (puVar3[6] == 0x11) {
         StringName::StringName((StringName*)&local_48, (CowData<char32_t>*)( puVar3 + 8 ), false);
         if (*(undefined**)( puVar3 + 4 ) == local_48) {
            lVar2 = local_58;
            if (( StringName::configured != '\0' ) && ( local_48 != (undefined*)0x0 )) {
               StringName::unref();
               lVar2 = local_58;
            }

         }
 else {
            StringName::unref();
            *(undefined**)( puVar3 + 4 ) = local_48;
            lVar2 = local_58;
         }

         goto joined_r0x0010d3fc;
      }

   }

   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x0010d3fc:local_58 = lVar2;
   if (lVar2 != 0) {
      LOCK();
      plVar1 = (long*)( lVar2 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_58 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
      StringName::unref();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<float>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<float>::_gen_argument_type_info(int param_1) {
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
   puVar3 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_58 = 0;
   local_48 = &_LC35;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   *puVar3 = 3;
   puVar3[6] = 0;
   *(undefined8*)( puVar3 + 8 ) = 0;
   *(undefined1(*) [16])( puVar3 + 2 ) = (undefined1[16])0x0;
   if (local_58 == 0) {
      puVar3[10] = 6;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar3 + 8 ), (CowData*)&local_58);
      puVar3[10] = 6;
      if (puVar3[6] == 0x11) {
         StringName::StringName((StringName*)&local_48, (CowData<char32_t>*)( puVar3 + 8 ), false);
         if (*(undefined**)( puVar3 + 4 ) == local_48) {
            lVar2 = local_58;
            if (( StringName::configured != '\0' ) && ( local_48 != (undefined*)0x0 )) {
               StringName::unref();
               lVar2 = local_58;
            }

         }
 else {
            StringName::unref();
            *(undefined**)( puVar3 + 4 ) = local_48;
            lVar2 = local_58;
         }

         goto joined_r0x0010d57c;
      }

   }

   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x0010d57c:local_58 = lVar2;
   if (lVar2 != 0) {
      LOCK();
      plVar1 = (long*)( lVar2 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_58 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
      StringName::unref();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Ref<Material>>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<Ref<Material>>::_gen_argument_type_info(int param_1) {
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
   puVar3 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_58 = 0;
   local_48 = "Material";
   local_40 = 8;
   String::parse_latin1((StrRange*)&local_58);
   *puVar3 = 0x18;
   puVar3[6] = 0x11;
   *(undefined8*)( puVar3 + 8 ) = 0;
   *(undefined1(*) [16])( puVar3 + 2 ) = (undefined1[16])0x0;
   if (local_58 == 0) {
      puVar3[10] = 6;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar3 + 8 ), (CowData*)&local_58);
      puVar3[10] = 6;
      if (puVar3[6] != 0x11) {
         StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_50);
         goto LAB_0010d680;
      }

   }

   StringName::StringName((StringName*)&local_48, (CowData<char32_t>*)( puVar3 + 8 ), false);
   if (*(char**)( puVar3 + 4 ) == local_48) {
      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }
 else {
      StringName::unref();
      *(char**)( puVar3 + 4 ) = local_48;
   }

   LAB_0010d680:lVar2 = local_58;
   if (local_58 != 0) {
      LOCK();
      plVar1 = (long*)( local_58 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_58 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
      StringName::unref();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Rect2>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<Rect2>::_gen_argument_type_info(int param_1) {
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
   puVar3 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_58 = 0;
   local_48 = &_LC35;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   *puVar3 = 7;
   puVar3[6] = 0;
   *(undefined8*)( puVar3 + 8 ) = 0;
   *(undefined1(*) [16])( puVar3 + 2 ) = (undefined1[16])0x0;
   if (local_58 == 0) {
      puVar3[10] = 6;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar3 + 8 ), (CowData*)&local_58);
      puVar3[10] = 6;
      if (puVar3[6] == 0x11) {
         StringName::StringName((StringName*)&local_48, (CowData<char32_t>*)( puVar3 + 8 ), false);
         if (*(undefined**)( puVar3 + 4 ) == local_48) {
            lVar2 = local_58;
            if (( StringName::configured != '\0' ) && ( local_48 != (undefined*)0x0 )) {
               StringName::unref();
               lVar2 = local_58;
            }

         }
 else {
            StringName::unref();
            *(undefined**)( puVar3 + 4 ) = local_48;
            lVar2 = local_58;
         }

         goto joined_r0x0010d89c;
      }

   }

   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x0010d89c:local_58 = lVar2;
   if (lVar2 != 0) {
      LOCK();
      plVar1 = (long*)( lVar2 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_58 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
      StringName::unref();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<unsigned int>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<unsigned_int>::_gen_argument_type_info(int param_1) {
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
   puVar3 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_58 = 0;
   local_48 = &_LC35;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   *puVar3 = 2;
   puVar3[6] = 0;
   *(undefined8*)( puVar3 + 8 ) = 0;
   *(undefined1(*) [16])( puVar3 + 2 ) = (undefined1[16])0x0;
   if (local_58 == 0) {
      puVar3[10] = 6;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar3 + 8 ), (CowData*)&local_58);
      puVar3[10] = 6;
      if (puVar3[6] == 0x11) {
         StringName::StringName((StringName*)&local_48, (CowData<char32_t>*)( puVar3 + 8 ), false);
         if (*(undefined**)( puVar3 + 4 ) == local_48) {
            lVar2 = local_58;
            if (( StringName::configured != '\0' ) && ( local_48 != (undefined*)0x0 )) {
               StringName::unref();
               lVar2 = local_58;
            }

         }
 else {
            StringName::unref();
            *(undefined**)( puVar3 + 4 ) = local_48;
            lVar2 = local_58;
         }

         goto joined_r0x0010da1c;
      }

   }

   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x0010da1c:local_58 = lVar2;
   if (lVar2 != 0) {
      LOCK();
      plVar1 = (long*)( lVar2 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_58 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
      StringName::unref();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* String::parse_latin1(char const*) */void String::parse_latin1(String *this, char *param_1) {
   long lVar1;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1 != (char*)0x0) {
      strlen(param_1);
   }

   String::parse_latin1((StrRange*)this);
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Variant::TEMPNAMEPLACEHOLDERVALUE(Variant&&) */void Variant::operator =(Variant *this, Variant *param_1) {
   undefined8 uVar1;
   if (this != param_1) {
      if (needs_deinit[*(int*)this] != '\0') {
         Variant::_clear_internal();
      }

      *(undefined4*)this = 0;
      *(undefined4*)this = *(undefined4*)param_1;
      uVar1 = *(undefined8*)( param_1 + 0x10 );
      *(undefined8*)( this + 8 ) = *(undefined8*)( param_1 + 8 );
      *(undefined8*)( this + 0x10 ) = uVar1;
      *(undefined4*)param_1 = 0;
      return;
   }

   return;
}
/* PropertyInfo::~PropertyInfo() */void PropertyInfo::~PropertyInfo(PropertyInfo *this) {
   long *plVar1;
   long lVar2;
   if (*(long*)( this + 0x20 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x20 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x20 );
         *(undefined8*)( this + 0x20 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( *(long*)( this + 0x10 ) != 0 )) {
      StringName::unref();
   }

   if (*(long*)( this + 8 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 8 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 8 );
         *(undefined8*)( this + 8 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
         return;
      }

   }

   return;
}
/* PropertyInfo::PropertyInfo(Variant::Type, String const&, PropertyHint, String const&, unsigned
   int, StringName const&) */void PropertyInfo::PropertyInfo(PropertyInfo *this, undefined4 param_2, CowData *param_3, int param_4, CowData *param_5, undefined4 param_6, StringName *param_7) {
   long lVar1;
   long in_FS_OFFSET;
   long local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)( this + 8 ) = 0;
   lVar1 = *(long*)param_3;
   *(undefined4*)this = param_2;
   if (lVar1 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 8 ), param_3);
   }

   *(undefined8*)( this + 0x20 ) = 0;
   lVar1 = *(long*)param_5;
   *(undefined8*)( this + 0x10 ) = 0;
   *(int*)( this + 0x18 ) = param_4;
   if (lVar1 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0x20 ), param_5);
      param_4 = *(int*)( this + 0x18 );
   }

   *(undefined4*)( this + 0x28 ) = param_6;
   if (param_4 == 0x11) {
      StringName::StringName((StringName*)&local_48, (CowData<char32_t>*)( this + 0x20 ), false);
      if (*(long*)( this + 0x10 ) == local_48) {
         if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         *(long*)( this + 0x10 ) = local_48;
      }

      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      StringName::operator =((StringName*)( this + 0x10 ), param_7);
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* CanvasItem::is_class(String const&) const */undefined8 CanvasItem::is_class(CanvasItem *this, String *param_1) {
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
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
      lVar4 = *(long*)( lVar2 + 0x20 );
      if (lVar4 == 0) {
         local_60 = 0;
      }
 else {
         pcVar3 = *(char**)( lVar4 + 8 );
         local_60 = 0;
         if (pcVar3 == (char*)0x0) {
            plVar1 = (long*)( *(long*)( lVar4 + 0x10 ) + -0x10 );
            if (*(long*)( lVar4 + 0x10 ) != 0) {
               do {
                  lVar5 = *plVar1;
                  if (lVar5 == 0) goto LAB_0010dd5f;
                  LOCK();
                  lVar8 = *plVar1;
                  bVar9 = lVar5 == lVar8;
                  if (bVar9) {
                     *plVar1 = lVar5 + 1;
                     lVar8 = lVar5;
                  }

                  UNLOCK();
               }
 while ( !bVar9 );
               if (lVar8 != -1) {
                  local_60 = *(long*)( lVar4 + 0x10 );
               }

            }

         }
 else {
            local_50 = strlen(pcVar3);
            local_58 = pcVar3;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      LAB_0010dd5f:cVar6 = String::operator ==((String*)param_1, (StrRange*)&local_60);
      lVar4 = local_60;
      if (local_60 != 0) {
         LOCK();
         plVar1 = (long*)( local_60 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_60 = 0;
            Memory::free_static((void*)( lVar4 + -0x10 ), false);
         }

      }

      if (cVar6 != '\0') goto LAB_0010de13;
   }

   cVar6 = String::operator ==((String*)param_1, "CanvasItem");
   if (cVar6 == '\0') {
      for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
         lVar4 = *(long*)( lVar2 + 0x20 );
         if (lVar4 == 0) {
            local_60 = 0;
         }
 else {
            pcVar3 = *(char**)( lVar4 + 8 );
            local_60 = 0;
            if (pcVar3 == (char*)0x0) {
               plVar1 = (long*)( *(long*)( lVar4 + 0x10 ) + -0x10 );
               if (*(long*)( lVar4 + 0x10 ) != 0) {
                  do {
                     lVar5 = *plVar1;
                     if (lVar5 == 0) goto LAB_0010deeb;
                     LOCK();
                     lVar8 = *plVar1;
                     bVar9 = lVar5 == lVar8;
                     if (bVar9) {
                        *plVar1 = lVar5 + 1;
                        lVar8 = lVar5;
                     }

                     UNLOCK();
                  }
 while ( !bVar9 );
                  if (lVar8 != -1) {
                     local_60 = *(long*)( lVar4 + 0x10 );
                  }

               }

            }
 else {
               local_50 = strlen(pcVar3);
               local_58 = pcVar3;
               String::parse_latin1((StrRange*)&local_60);
            }

         }

         LAB_0010deeb:cVar6 = String::operator ==((String*)param_1, (StrRange*)&local_60);
         lVar4 = local_60;
         if (local_60 != 0) {
            LOCK();
            plVar1 = (long*)( local_60 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_60 = 0;
               Memory::free_static((void*)( lVar4 + -0x10 ), false);
            }

         }

         if (cVar6 != '\0') goto LAB_0010de13;
      }

      cVar6 = String::operator ==((String*)param_1, "Node");
      if (cVar6 == '\0') {
         for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
            lVar4 = *(long*)( lVar2 + 0x20 );
            if (lVar4 == 0) {
               local_60 = 0;
            }
 else {
               pcVar3 = *(char**)( lVar4 + 8 );
               local_60 = 0;
               if (pcVar3 == (char*)0x0) {
                  plVar1 = (long*)( *(long*)( lVar4 + 0x10 ) + -0x10 );
                  if (*(long*)( lVar4 + 0x10 ) != 0) {
                     do {
                        lVar5 = *plVar1;
                        if (lVar5 == 0) goto LAB_0010dfcb;
                        LOCK();
                        lVar8 = *plVar1;
                        bVar9 = lVar5 == lVar8;
                        if (bVar9) {
                           *plVar1 = lVar5 + 1;
                           lVar8 = lVar5;
                        }

                        UNLOCK();
                     }
 while ( !bVar9 );
                     if (lVar8 != -1) {
                        local_60 = *(long*)( lVar4 + 0x10 );
                     }

                  }

               }
 else {
                  local_50 = strlen(pcVar3);
                  local_58 = pcVar3;
                  String::parse_latin1((StrRange*)&local_60);
               }

            }

            LAB_0010dfcb:cVar6 = String::operator ==((String*)param_1, (StrRange*)&local_60);
            lVar4 = local_60;
            if (local_60 != 0) {
               LOCK();
               plVar1 = (long*)( local_60 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_60 = 0;
                  Memory::free_static((void*)( lVar4 + -0x10 ), false);
               }

            }

            if (cVar6 != '\0') goto LAB_0010de13;
         }

         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar7 = String::operator ==((String*)param_1, "Object");
            return uVar7;
         }

         goto LAB_0010e074;
      }

   }

   LAB_0010de13:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_0010e074:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* GPUParticles2D::is_class(String const&) const */undefined8 GPUParticles2D::is_class(GPUParticles2D *this, String *param_1) {
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
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
      lVar4 = *(long*)( lVar2 + 0x20 );
      if (lVar4 == 0) {
         local_60 = 0;
      }
 else {
         pcVar3 = *(char**)( lVar4 + 8 );
         local_60 = 0;
         if (pcVar3 == (char*)0x0) {
            plVar1 = (long*)( *(long*)( lVar4 + 0x10 ) + -0x10 );
            if (*(long*)( lVar4 + 0x10 ) != 0) {
               do {
                  lVar5 = *plVar1;
                  if (lVar5 == 0) goto LAB_0010e0ef;
                  LOCK();
                  lVar8 = *plVar1;
                  bVar9 = lVar5 == lVar8;
                  if (bVar9) {
                     *plVar1 = lVar5 + 1;
                     lVar8 = lVar5;
                  }

                  UNLOCK();
               }
 while ( !bVar9 );
               if (lVar8 != -1) {
                  local_60 = *(long*)( lVar4 + 0x10 );
               }

            }

         }
 else {
            local_50 = strlen(pcVar3);
            local_58 = pcVar3;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      LAB_0010e0ef:cVar6 = String::operator ==((String*)param_1, (StrRange*)&local_60);
      lVar4 = local_60;
      if (local_60 != 0) {
         LOCK();
         plVar1 = (long*)( local_60 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_60 = 0;
            Memory::free_static((void*)( lVar4 + -0x10 ), false);
         }

      }

      if (cVar6 != '\0') goto LAB_0010e1a3;
   }

   cVar6 = String::operator ==((String*)param_1, "GPUParticles2D");
   if (cVar6 == '\0') {
      for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
         lVar4 = *(long*)( lVar2 + 0x20 );
         if (lVar4 == 0) {
            local_60 = 0;
         }
 else {
            pcVar3 = *(char**)( lVar4 + 8 );
            local_60 = 0;
            if (pcVar3 == (char*)0x0) {
               plVar1 = (long*)( *(long*)( lVar4 + 0x10 ) + -0x10 );
               if (*(long*)( lVar4 + 0x10 ) != 0) {
                  do {
                     lVar5 = *plVar1;
                     if (lVar5 == 0) goto LAB_0010e263;
                     LOCK();
                     lVar8 = *plVar1;
                     bVar9 = lVar5 == lVar8;
                     if (bVar9) {
                        *plVar1 = lVar5 + 1;
                        lVar8 = lVar5;
                     }

                     UNLOCK();
                  }
 while ( !bVar9 );
                  if (lVar8 != -1) {
                     local_60 = *(long*)( lVar4 + 0x10 );
                  }

               }

            }
 else {
               local_50 = strlen(pcVar3);
               local_58 = pcVar3;
               String::parse_latin1((StrRange*)&local_60);
            }

         }

         LAB_0010e263:cVar6 = String::operator ==((String*)param_1, (StrRange*)&local_60);
         lVar4 = local_60;
         if (local_60 != 0) {
            LOCK();
            plVar1 = (long*)( local_60 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_60 = 0;
               Memory::free_static((void*)( lVar4 + -0x10 ), false);
            }

         }

         if (cVar6 != '\0') goto LAB_0010e1a3;
      }

      cVar6 = String::operator ==((String*)param_1, "Node2D");
      if (cVar6 == '\0') {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar7 = CanvasItem::is_class((CanvasItem*)this, param_1);
            return uVar7;
         }

         goto LAB_0010e30c;
      }

   }

   LAB_0010e1a3:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_0010e30c:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodDefinition::~MethodDefinition() */void MethodDefinition::~MethodDefinition(MethodDefinition *this) {
   long *plVar1;
   long lVar2;
   code *pcVar3;
   long *plVar4;
   long lVar5;
   if (*(long*)( this + 0x10 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x10 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         plVar1 = *(long**)( this + 0x10 );
         if (plVar1 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = plVar1[-1];
         *(undefined8*)( this + 0x10 ) = 0;
         if (lVar2 != 0) {
            lVar5 = 0;
            plVar4 = plVar1;
            do {
               if (( StringName::configured != '\0' ) && ( *plVar4 != 0 )) {
                  StringName::unref();
               }

               lVar5 = lVar5 + 1;
               plVar4 = plVar4 + 1;
            }
 while ( lVar2 != lVar5 );
         }

         Memory::free_static(plVar1 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( *(long*)this != 0 )) {
      StringName::unref();
      return;
   }

   return;
}
/* GPUParticles2D::_validate_propertyv(PropertyInfo&) const */void GPUParticles2D::_validate_propertyv(GPUParticles2D *this, PropertyInfo *param_1) {
   Node::_validate_property((PropertyInfo*)this);
   if ((code*)PTR__validate_property_00127010 != Node::_validate_property) {
      CanvasItem::_validate_property((PropertyInfo*)this);
   }

   _validate_property(this, param_1);
   return;
}
/* CowData<char32_t>::_ref(CowData<char32_t> const&) */void CowData<char32_t>::_ref(CowData<char32_t> *this, CowData *param_1) {
   if (*(long*)this != *(long*)param_1) {
      _ref(this, param_1);
      return;
   }

   return;
}
/* List<PropertyInfo, DefaultAllocator>::~List() */void List<PropertyInfo,DefaultAllocator>::~List(List<PropertyInfo,DefaultAllocator> *this) {
   long *plVar1;
   void *pvVar2;
   long lVar3;
   long lVar4;
   long *plVar5;
   plVar5 = *(long**)this;
   if (plVar5 == (long*)0x0) {
      return;
   }

   do {
      pvVar2 = (void*)*plVar5;
      if (pvVar2 == (void*)0x0) {
         if ((int)plVar5[2] != 0) {
            _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
            return;
         }

         break;
      }

      if (*(long**)( (long)pvVar2 + 0x40 ) == plVar5) {
         lVar4 = *(long*)( (long)pvVar2 + 0x30 );
         lVar3 = *(long*)( (long)pvVar2 + 0x38 );
         *plVar5 = lVar4;
         if (pvVar2 == (void*)plVar5[1]) {
            plVar5[1] = lVar3;
         }

         if (lVar3 != 0) {
            *(long*)( lVar3 + 0x30 ) = lVar4;
            lVar4 = *(long*)( (long)pvVar2 + 0x30 );
         }

         if (lVar4 != 0) {
            *(long*)( lVar4 + 0x38 ) = lVar3;
         }

         if (*(long*)( (long)pvVar2 + 0x20 ) != 0) {
            LOCK();
            plVar1 = (long*)( *(long*)( (long)pvVar2 + 0x20 ) + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar4 = *(long*)( (long)pvVar2 + 0x20 );
               *(undefined8*)( (long)pvVar2 + 0x20 ) = 0;
               Memory::free_static((void*)( lVar4 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar2 + 0x10 ) != 0 )) {
            StringName::unref();
         }

         if (*(long*)( (long)pvVar2 + 8 ) != 0) {
            LOCK();
            plVar1 = (long*)( *(long*)( (long)pvVar2 + 8 ) + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar4 = *(long*)( (long)pvVar2 + 8 );
               *(undefined8*)( (long)pvVar2 + 8 ) = 0;
               Memory::free_static((void*)( lVar4 + -0x10 ), false);
            }

         }

         Memory::free_static(pvVar2, false);
         *(int*)( plVar5 + 2 ) = (int)plVar5[2] + -1;
      }
 else {
         _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
      }

      plVar5 = *(long**)this;
   }
 while ( (int)plVar5[2] != 0 );
   Memory::free_static(plVar5, false);
   return;
}
/* Callable create_custom_callable_function_pointer<GPUParticles2D>(GPUParticles2D*, char const*,
   void (GPUParticles2D::*)()) */GPUParticles2D *create_custom_callable_function_pointer<GPUParticles2D>(GPUParticles2D *param_1, char *param_2, _func_void *param_3) {
   undefined8 uVar1;
   CallableCustom *this;
   undefined8 in_RCX;
   undefined8 in_R8;
   this(CallableCustom * operator_new(0x48, ""));
   CallableCustom::CallableCustom(this);
   *(undefined**)( this + 0x20 ) = &_LC35;
   *(undefined1(*) [16])( this + 0x30 ) = (undefined1[16])0x0;
   *(undefined8*)( this + 0x40 ) = 0;
   *(undefined***)this = &PTR_hash_001201a0;
   uVar1 = *(undefined8*)( param_2 + 0x60 );
   *(char**)( this + 0x28 ) = param_2;
   *(undefined8*)( this + 0x30 ) = uVar1;
   *(undefined8*)( this + 0x38 ) = in_RCX;
   *(undefined8*)( this + 0x40 ) = in_R8;
   *(undefined8*)( this + 0x10 ) = 0;
   CallableCustomMethodPointerBase::_setup((uint*)this, (int)this + 0x28);
   *(_func_void**)( this + 0x20 ) = param_3 + 1;
   Callable::Callable((Callable*)param_1, this);
   return param_1;
}
/* MethodDefinition D_METHOD<char const*>(char const*, char const* const) */char *D_METHOD<char_const*>(char *param_1, char *param_2) {
   long in_FS_OFFSET;
   undefined1 local_38[8];
   undefined8 local_30;
   undefined1 *local_28[3];
   long local_10;
   local_28[0] = local_38;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   local_30 = 0;
   D_METHODP(param_1, (char***)param_2, (uint)local_28);
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* CowData<char32_t>::_unref() */void CowData<char32_t>::_unref(CowData<char32_t> *this) {
   long *plVar1;
   long lVar2;
   if (*(long*)this == 0) {
      return;
   }

   LOCK();
   plVar1 = (long*)( *(long*)this + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   if (*plVar1 != 0) {
      *(undefined8*)this = 0;
      return;
   }

   lVar2 = *(long*)this;
   *(undefined8*)this = 0;
   Memory::free_static((void*)( lVar2 + -0x10 ), false);
   return;
}
/* CallableCustomMethodPointer<GPUParticles2D, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */void CallableCustomMethodPointer<GPUParticles2D,void>::call(CallableCustomMethodPointer<GPUParticles2D,void> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
   long lVar1;
   long lVar2;
   uint uVar3;
   ulong *puVar4;
   code *UNRECOVERED_JUMPTABLE;
   ulong uVar5;
   long in_FS_OFFSET;
   bool bVar6;
   CowData<char32_t> local_60[8];
   CowData<char32_t> local_58[8];
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar3 = ( uint ) * (ulong*)( this + 0x30 ) & 0xffffff;
   if (uVar3 < (uint)ObjectDB::slot_max) {
      while (true) {
         uVar5 = (ulong)local_48 >> 8;
         local_48 = (char*)( uVar5 << 8 );
         LOCK();
         bVar6 = (char)ObjectDB::spin_lock == '\0';
         if (bVar6) {
            ObjectDB::spin_lock._0_1_ = '\x01';
         }

         UNLOCK();
         if (bVar6) break;
         local_48 = (char*)( uVar5 << 8 );
         do {} while ( (char)ObjectDB::spin_lock != '\0' );
      }
;
      puVar4 = (ulong*)( (ulong)uVar3 * 0x10 + ObjectDB::object_slots );
      uVar5 = *(ulong*)( this + 0x30 ) >> 0x18 & 0x7fffffffff;
      if (uVar5 != ( *puVar4 & 0x7fffffffff )) {
         ObjectDB::spin_lock._0_1_ = '\0';
         goto LAB_0010e99f;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] == 0) goto LAB_0010e99f;
      lVar1 = *(long*)( this + 0x28 );
      UNRECOVERED_JUMPTABLE = *(code**)( this + 0x38 );
      lVar2 = *(long*)( this + 0x40 );
      if (param_2 == 0) {
         *(undefined4*)param_4 = 0;
         if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
            UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( lVar1 + lVar2 ) + -1 );
         }

         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            /* WARNING: Could not recover jumptable at 0x0010e978. Too many branches */
            /* WARNING: Treating indirect jump as call */
            ( *UNRECOVERED_JUMPTABLE )((long*)( lVar1 + lVar2 ), uVar5, UNRECOVERED_JUMPTABLE);
            return;
         }

         goto LAB_0010ea61;
      }

      *(undefined4*)param_4 = 3;
      *(undefined4*)( param_4 + 8 ) = 0;
   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
      LAB_0010e99f:local_50 = 0;
      local_48 = "\', can\'t call method.";
      local_40 = 0x15;
      String::parse_latin1((StrRange*)&local_50);
      uitos((ulong)local_60);
      operator+((char *)
      local_58,(String*)"Invalid Object id \'";
      String::operator +((String*)&local_48, (String*)local_58);
      _err_print_error(&_LC62, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", (String*)&local_48, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
      CowData<char32_t>::_unref(local_58);
      CowData<char32_t>::_unref(local_60);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_0010ea61:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<Node*>::_gen_argument_type_info(int) const */undefined4 *MethodBindT<Node*>::_gen_argument_type_info(int param_1) {
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
   puVar3 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *puVar3 = 0;
   puVar3[6] = 0;
   *(undefined8*)( puVar3 + 8 ) = 0;
   puVar3[10] = 6;
   *(undefined1(*) [16])( puVar3 + 2 ) = (undefined1[16])0x0;
   if (in_EDX == 0) {
      local_78 = 0;
      local_68 = &_LC38;
      local_60 = 4;
      String::parse_latin1((StrRange*)&local_78);
      StringName::StringName((StringName*)&local_70, (String*)&local_78, false);
      local_68 = (undefined*)CONCAT44(local_68._4_4_, 0x18);
      local_60 = 0;
      StringName::StringName((StringName*)&local_58, (StringName*)&local_70);
      local_50 = 0;
      local_48 = 0;
      local_40 = 6;
      if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      *puVar3 = local_68._0_4_;
      if (*(long*)( puVar3 + 2 ) != local_60) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( puVar3 + 2 ));
         lVar2 = local_60;
         local_60 = 0;
         *(long*)( puVar3 + 2 ) = lVar2;
      }

      if (*(long*)( puVar3 + 4 ) != local_58) {
         StringName::unref();
         lVar2 = local_58;
         local_58 = 0;
         *(long*)( puVar3 + 4 ) = lVar2;
      }

      lVar2 = local_48;
      puVar3[6] = local_50;
      if (*(long*)( puVar3 + 8 ) == local_48) {
         puVar3[10] = local_40;
         if (local_48 != 0) {
            LOCK();
            plVar1 = (long*)( local_48 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_48 = 0;
               Memory::free_static((void*)( lVar2 + -0x10 ), false);
            }

         }

      }
 else {
         CowData<char32_t>::_unref((CowData<char32_t>*)( puVar3 + 8 ));
         *(long*)( puVar3 + 8 ) = local_48;
         puVar3[10] = local_40;
      }

      if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
         StringName::unref();
      }

      lVar2 = local_60;
      if (local_60 != 0) {
         LOCK();
         plVar1 = (long*)( local_60 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_60 = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }

      }

   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* CanvasItem::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void CanvasItem::_get_property_listv(CanvasItem *this, List *param_1, bool param_2) {
   long *plVar1;
   long lVar2;
   undefined1(*pauVar3)[16];
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
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_2) {
      local_80 = 0;
      local_88 = 0;
      local_78 = "Node";
      local_70 = 4;
      String::parse_latin1((StrRange*)&local_88);
      local_78 = "Node";
      local_90 = 0;
      local_70 = 4;
      String::parse_latin1((StrRange*)&local_90);
      PropertyInfo::PropertyInfo((PropertyInfo*)&local_78, 0, (StrRange*)&local_90, 0, (StrRange*)&local_88, 0x80, &local_80);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)param_1, (PropertyInfo*)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

      StringName::StringName((StringName*)&local_78, "Node", false);
      ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
      if (( StringName::configured != '\0' ) && ( local_78 != (undefined*)0x0 )) {
         StringName::unref();
      }

   }

   local_b8 = (StringName*)&local_68;
   local_c0 = (CowData<char32_t>*)&local_70;
   local_88 = 0;
   local_90 = 0;
   local_78 = "CanvasItem";
   local_70 = 10;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "CanvasItem";
   local_98 = 0;
   local_70 = 10;
   String::parse_latin1((StrRange*)&local_98);
   local_78 = (char*)( (ulong)local_78 & 0xffffffff00000000 );
   local_70 = 0;
   if (local_98 != 0) {
      CowData<char32_t>::_ref(local_c0, (CowData*)&local_98);
   }

   local_68 = 0;
   local_60 = 0;
   local_58 = 0;
   if (local_90 == 0) {
      LAB_0010ee28:local_50 = 0x80;
      StringName::operator =(local_b8, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_0010ee28;
      StringName::StringName((StringName*)&local_80, (CowData<char32_t>*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x0010ee43;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)param_1;
   joined_r0x0010ee43:if (lVar2 == 0) {
      pauVar3 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])param_1 = pauVar3;
      *(undefined4*)pauVar3[1] = 0;
      *pauVar3 = (undefined1[16])0x0;
   }

   puVar4 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
   *(undefined8*)( puVar4 + 8 ) = 0;
   *(undefined1(*) [16])( puVar4 + 2 ) = (undefined1[16])0x0;
   *puVar4 = 0;
   puVar4[6] = 0;
   puVar4[10] = 6;
   *(undefined8*)( puVar4 + 0x10 ) = 0;
   *(undefined1(*) [16])( puVar4 + 0xc ) = (undefined1[16])0x0;
   *puVar4 = local_78._0_4_;
   if (local_70 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar4 + 2 ), (CowData*)local_c0);
   }

   StringName::operator =((StringName*)( puVar4 + 4 ), local_b8);
   puVar4[6] = local_60;
   if (*(long*)( puVar4 + 8 ) != local_58) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar4 + 8 ), (CowData*)&local_58);
   }

   puVar4[10] = local_50;
   plVar1 = *(long**)param_1;
   lVar2 = plVar1[1];
   *(undefined8*)( puVar4 + 0xc ) = 0;
   *(long**)( puVar4 + 0x10 ) = plVar1;
   *(long*)( puVar4 + 0xe ) = lVar2;
   if (lVar2 != 0) {
      *(undefined4**)( lVar2 + 0x30 ) = puVar4;
   }

   plVar1[1] = (long)puVar4;
   if (*plVar1 == 0) {
      *plVar1 = (long)puVar4;
   }

   *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref(local_c0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_78, "CanvasItem", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (undefined*)0x0 )) {
      StringName::unref();
   }

   if ((code*)PTR__get_property_list_00127018 != Object::_get_property_list) {
      CanvasItem::_get_property_list((List*)this);
   }

   if (param_2) {
      local_80 = 0;
      local_78 = "Node";
      local_88 = 0;
      local_70 = 4;
      String::parse_latin1((StrRange*)&local_88);
      local_78 = "Node";
      local_90 = 0;
      local_70 = 4;
      String::parse_latin1((StrRange*)&local_90);
      PropertyInfo::PropertyInfo((PropertyInfo*)&local_78, 0, (StrRange*)&local_90, 0, (StrRange*)&local_88, 0x80, &local_80);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)param_1, (PropertyInfo*)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref(local_c0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

      StringName::StringName((StringName*)&local_78, "Node", false);
      ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
      if (( StringName::configured != '\0' ) && ( local_78 != (undefined*)0x0 )) {
         StringName::unref();
      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Node2D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void Node2D::_get_property_listv(Node2D *this, List *param_1, bool param_2) {
   long *plVar1;
   long lVar2;
   undefined1(*pauVar3)[16];
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
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_2) {
      CanvasItem::_get_property_listv((CanvasItem*)this, param_1, false);
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "Node2D";
   local_70 = 6;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "Node2D";
   local_98 = 0;
   local_70 = 6;
   String::parse_latin1((StrRange*)&local_98);
   local_78 = (char*)( (ulong)local_78 & 0xffffffff00000000 );
   local_70 = 0;
   if (local_98 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_98);
   }

   local_68 = 0;
   local_60 = 0;
   local_58 = 0;
   if (local_90 == 0) {
      LAB_0010f43d:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_0010f43d;
      StringName::StringName((StringName*)&local_80, (CowData<char32_t>*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x0010f45f;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)param_1;
   joined_r0x0010f45f:if (lVar2 == 0) {
      pauVar3 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])param_1 = pauVar3;
      *(undefined4*)pauVar3[1] = 0;
      *pauVar3 = (undefined1[16])0x0;
   }

   local_a0 = (StringName*)&local_68;
   puVar4 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
   *(undefined8*)( puVar4 + 8 ) = 0;
   *(undefined1(*) [16])( puVar4 + 2 ) = (undefined1[16])0x0;
   *puVar4 = 0;
   puVar4[6] = 0;
   puVar4[10] = 6;
   *(undefined8*)( puVar4 + 0x10 ) = 0;
   *(undefined1(*) [16])( puVar4 + 0xc ) = (undefined1[16])0x0;
   *puVar4 = local_78._0_4_;
   if (local_70 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar4 + 2 ), (CowData*)&local_70);
   }

   StringName::operator =((StringName*)( puVar4 + 4 ), local_a0);
   puVar4[6] = local_60;
   if (*(long*)( puVar4 + 8 ) != local_58) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar4 + 8 ), (CowData*)&local_58);
   }

   puVar4[10] = local_50;
   plVar1 = *(long**)param_1;
   lVar2 = plVar1[1];
   *(undefined8*)( puVar4 + 0xc ) = 0;
   *(long**)( puVar4 + 0x10 ) = plVar1;
   *(long*)( puVar4 + 0xe ) = lVar2;
   if (lVar2 != 0) {
      *(undefined4**)( lVar2 + 0x30 ) = puVar4;
   }

   plVar1[1] = (long)puVar4;
   if (*plVar1 == 0) {
      *plVar1 = (long)puVar4;
   }

   *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   lVar2 = local_98;
   if (local_98 != 0) {
      LOCK();
      plVar1 = (long*)( local_98 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_98 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   lVar2 = local_90;
   if (local_90 != 0) {
      LOCK();
      plVar1 = (long*)( local_90 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_90 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_78, "Node2D", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         CanvasItem::_get_property_listv((CanvasItem*)this, param_1, true);
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GPUParticles2D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void GPUParticles2D::_get_property_listv(GPUParticles2D *this, List *param_1, bool param_2) {
   long *plVar1;
   long lVar2;
   long lVar3;
   undefined1(*pauVar4)[16];
   undefined4 *puVar5;
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
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_2) {
      Node2D::_get_property_listv((Node2D*)this, param_1, false);
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "GPUParticles2D";
   local_70 = 0xe;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "GPUParticles2D";
   local_98 = 0;
   local_70 = 0xe;
   String::parse_latin1((StrRange*)&local_98);
   local_78 = (char*)( (ulong)local_78 & 0xffffffff00000000 );
   local_70 = 0;
   if (local_98 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_98);
   }

   local_68 = 0;
   local_60 = 0;
   local_58 = 0;
   if (local_90 == 0) {
      LAB_0010f850:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_0010f850;
      StringName::StringName((StringName*)&local_80, (CowData<char32_t>*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x0010f872;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)param_1;
   joined_r0x0010f872:if (lVar2 == 0) {
      pauVar4 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])param_1 = pauVar4;
      *(undefined4*)pauVar4[1] = 0;
      *pauVar4 = (undefined1[16])0x0;
   }

   local_a0 = (StringName*)&local_68;
   puVar5 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
   *(undefined8*)( puVar5 + 8 ) = 0;
   *(undefined1(*) [16])( puVar5 + 2 ) = (undefined1[16])0x0;
   *puVar5 = 0;
   puVar5[6] = 0;
   puVar5[10] = 6;
   *(undefined8*)( puVar5 + 0x10 ) = 0;
   *(undefined1(*) [16])( puVar5 + 0xc ) = (undefined1[16])0x0;
   *puVar5 = local_78._0_4_;
   if (local_70 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar5 + 2 ), (CowData*)&local_70);
   }

   StringName::operator =((StringName*)( puVar5 + 4 ), local_a0);
   puVar5[6] = local_60;
   if (*(long*)( puVar5 + 8 ) != local_58) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar5 + 8 ), (CowData*)&local_58);
   }

   lVar3 = local_58;
   puVar5[10] = local_50;
   plVar1 = *(long**)param_1;
   lVar2 = plVar1[1];
   *(undefined8*)( puVar5 + 0xc ) = 0;
   *(long**)( puVar5 + 0x10 ) = plVar1;
   *(long*)( puVar5 + 0xe ) = lVar2;
   if (lVar2 != 0) {
      *(undefined4**)( lVar2 + 0x30 ) = puVar5;
   }

   plVar1[1] = (long)puVar5;
   if (*plVar1 == 0) {
      *plVar1 = (long)puVar5;
   }

   *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
   if (local_58 != 0) {
      LOCK();
      plVar1 = (long*)( local_58 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_58 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
   lVar2 = local_90;
   if (local_90 != 0) {
      LOCK();
      plVar1 = (long*)( local_90 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_90 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_78, "GPUParticles2D", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         Node2D::_get_property_listv((Node2D*)this, param_1, true);
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<Ref<Material> const&>::_gen_argument_type_info(int) const */undefined4 *MethodBindT<Ref<Material>const&>::_gen_argument_type_info(int param_1) {
   undefined1 auVar1[16];
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
   undefined1 local_60[16];
   int local_50;
   long local_48;
   undefined4 local_40;
   long local_30;
   puVar4 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *puVar4 = 0;
   puVar4[6] = 0;
   *(undefined8*)( puVar4 + 8 ) = 0;
   puVar4[10] = 6;
   *(undefined1(*) [16])( puVar4 + 2 ) = (undefined1[16])0x0;
   if (in_EDX != 0) goto LAB_0010fb2b;
   local_78 = 0;
   local_80 = 0;
   local_68 = "Material";
   local_60._0_8_ = 8;
   String::parse_latin1((StrRange*)&local_80);
   local_88 = 0;
   local_68 = (char*)CONCAT44(local_68._4_4_, 0x18);
   local_50 = 0x11;
   local_48 = 0;
   local_60 = (undefined1[16])0x0;
   if (local_80 == 0) {
      LAB_0010fcc5:local_40 = 6;
      StringName::StringName((StringName*)&local_70, (String*)&local_48, false);
      if (local_60._8_8_ == local_70) {
         if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         local_60._8_8_ = local_70;
      }

   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
      local_40 = 6;
      if (local_50 == 0x11) goto LAB_0010fcc5;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
      StringName::unref();
   }

   *puVar4 = local_68._0_4_;
   if (*(long*)( puVar4 + 2 ) != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( puVar4 + 2 ));
      uVar2 = local_60._0_8_;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = local_60._8_8_;
      local_60 = auVar1 << 0x40;
      *(undefined8*)( puVar4 + 2 ) = uVar2;
   }

   if (*(long*)( puVar4 + 4 ) != local_60._8_8_) {
      StringName::unref();
      uVar2 = local_60._8_8_;
      local_60._8_8_ = 0;
      *(undefined8*)( puVar4 + 4 ) = uVar2;
   }

   puVar4[6] = local_50;
   if (*(long*)( puVar4 + 8 ) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( puVar4 + 8 ));
      lVar3 = local_48;
      local_48 = 0;
      *(long*)( puVar4 + 8 ) = lVar3;
   }

   puVar4[10] = local_40;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_68);
   LAB_0010fb2b:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return puVar4;
}
/* MethodBindT<double>::_gen_argument_type_info(int) const */undefined4 *MethodBindT<double>::_gen_argument_type_info(int param_1) {
   undefined1 auVar1[16];
   undefined1 auVar2[16];
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
   undefined1 local_60[16];
   int local_50;
   long local_48;
   undefined4 local_40;
   long local_30;
   puVar5 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *puVar5 = 0;
   puVar5[6] = 0;
   *(undefined8*)( puVar5 + 8 ) = 0;
   puVar5[10] = 6;
   *(undefined1(*) [16])( puVar5 + 2 ) = (undefined1[16])0x0;
   if (in_EDX != 0) goto LAB_0010fd7b;
   local_78 = 0;
   local_80 = 0;
   local_68 = &_LC35;
   auVar1._8_8_ = 0;
   auVar1._0_8_ = local_60._8_8_;
   local_60 = auVar1 << 0x40;
   String::parse_latin1((StrRange*)&local_80);
   local_88 = 0;
   local_68 = (undefined*)CONCAT44(local_68._4_4_, 3);
   local_50 = 0;
   local_48 = 0;
   local_60 = (undefined1[16])0x0;
   if (local_80 == 0) {
      LAB_0010fe70:local_40 = 6;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_0010fe70;
      StringName::StringName((StringName*)&local_70, (CowData<char32_t>*)&local_48, false);
      if (local_60._8_8_ == local_70) {
         if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         local_60._8_8_ = local_70;
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
      StringName::unref();
   }

   *puVar5 = local_68._0_4_;
   if (*(long*)( puVar5 + 2 ) != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( puVar5 + 2 ));
      uVar3 = local_60._0_8_;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_60._8_8_;
      local_60 = auVar2 << 0x40;
      *(undefined8*)( puVar5 + 2 ) = uVar3;
   }

   if (*(long*)( puVar5 + 4 ) != local_60._8_8_) {
      StringName::unref();
      uVar3 = local_60._8_8_;
      local_60._8_8_ = 0;
      *(undefined8*)( puVar5 + 4 ) = uVar3;
   }

   puVar5[6] = local_50;
   if (*(long*)( puVar5 + 8 ) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( puVar5 + 8 ));
      lVar4 = local_48;
      local_48 = 0;
      *(long*)( puVar5 + 8 ) = lVar4;
   }

   puVar5[10] = local_40;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_68);
   LAB_0010fd7b:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return puVar5;
}
/* MethodBindT<unsigned int>::_gen_argument_type_info(int) const */undefined4 *MethodBindT<unsigned_int>::_gen_argument_type_info(int param_1) {
   undefined1 auVar1[16];
   undefined1 auVar2[16];
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
   undefined1 local_60[16];
   int local_50;
   long local_48;
   undefined4 local_40;
   long local_30;
   puVar5 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *puVar5 = 0;
   puVar5[6] = 0;
   *(undefined8*)( puVar5 + 8 ) = 0;
   puVar5[10] = 6;
   *(undefined1(*) [16])( puVar5 + 2 ) = (undefined1[16])0x0;
   if (in_EDX != 0) goto LAB_0010ffbb;
   local_78 = 0;
   local_80 = 0;
   local_68 = &_LC35;
   auVar1._8_8_ = 0;
   auVar1._0_8_ = local_60._8_8_;
   local_60 = auVar1 << 0x40;
   String::parse_latin1((StrRange*)&local_80);
   local_88 = 0;
   local_68 = (undefined*)CONCAT44(local_68._4_4_, 2);
   local_50 = 0;
   local_48 = 0;
   local_60 = (undefined1[16])0x0;
   if (local_80 == 0) {
      LAB_001100b0:local_40 = 6;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_001100b0;
      StringName::StringName((StringName*)&local_70, (CowData<char32_t>*)&local_48, false);
      if (local_60._8_8_ == local_70) {
         if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         local_60._8_8_ = local_70;
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
      StringName::unref();
   }

   *puVar5 = local_68._0_4_;
   if (*(long*)( puVar5 + 2 ) != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( puVar5 + 2 ));
      uVar3 = local_60._0_8_;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_60._8_8_;
      local_60 = auVar2 << 0x40;
      *(undefined8*)( puVar5 + 2 ) = uVar3;
   }

   if (*(long*)( puVar5 + 4 ) != local_60._8_8_) {
      StringName::unref();
      uVar3 = local_60._8_8_;
      local_60._8_8_ = 0;
      *(undefined8*)( puVar5 + 4 ) = uVar3;
   }

   puVar5[6] = local_50;
   if (*(long*)( puVar5 + 8 ) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( puVar5 + 8 ));
      lVar4 = local_48;
      local_48 = 0;
      *(long*)( puVar5 + 8 ) = lVar4;
   }

   puVar5[10] = local_40;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_68);
   LAB_0010ffbb:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return puVar5;
}
/* MethodBindT<float>::_gen_argument_type_info(int) const */undefined4 *MethodBindT<float>::_gen_argument_type_info(int param_1) {
   undefined1 auVar1[16];
   undefined1 auVar2[16];
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
   undefined1 local_60[16];
   int local_50;
   long local_48;
   undefined4 local_40;
   long local_30;
   puVar5 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *puVar5 = 0;
   puVar5[6] = 0;
   *(undefined8*)( puVar5 + 8 ) = 0;
   puVar5[10] = 6;
   *(undefined1(*) [16])( puVar5 + 2 ) = (undefined1[16])0x0;
   if (in_EDX != 0) goto LAB_001101fb;
   local_78 = 0;
   local_80 = 0;
   local_68 = &_LC35;
   auVar1._8_8_ = 0;
   auVar1._0_8_ = local_60._8_8_;
   local_60 = auVar1 << 0x40;
   String::parse_latin1((StrRange*)&local_80);
   local_88 = 0;
   local_68 = (undefined*)CONCAT44(local_68._4_4_, 3);
   local_50 = 0;
   local_48 = 0;
   local_60 = (undefined1[16])0x0;
   if (local_80 == 0) {
      LAB_001102f0:local_40 = 6;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_001102f0;
      StringName::StringName((StringName*)&local_70, (CowData<char32_t>*)&local_48, false);
      if (local_60._8_8_ == local_70) {
         if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         local_60._8_8_ = local_70;
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
      StringName::unref();
   }

   *puVar5 = local_68._0_4_;
   if (*(long*)( puVar5 + 2 ) != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( puVar5 + 2 ));
      uVar3 = local_60._0_8_;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_60._8_8_;
      local_60 = auVar2 << 0x40;
      *(undefined8*)( puVar5 + 2 ) = uVar3;
   }

   if (*(long*)( puVar5 + 4 ) != local_60._8_8_) {
      StringName::unref();
      uVar3 = local_60._8_8_;
      local_60._8_8_ = 0;
      *(undefined8*)( puVar5 + 4 ) = uVar3;
   }

   puVar5[6] = local_50;
   if (*(long*)( puVar5 + 8 ) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( puVar5 + 8 ));
      lVar4 = local_48;
      local_48 = 0;
      *(long*)( puVar5 + 8 ) = lVar4;
   }

   puVar5[10] = local_40;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_68);
   LAB_001101fb:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return puVar5;
}
/* MethodBindT<NodePath const&>::_gen_argument_type_info(int) const */undefined4 *MethodBindT<NodePath_const&>::_gen_argument_type_info(int param_1) {
   undefined1 auVar1[16];
   undefined1 auVar2[16];
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
   undefined1 local_60[16];
   int local_50;
   long local_48;
   undefined4 local_40;
   long local_30;
   puVar5 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *puVar5 = 0;
   puVar5[6] = 0;
   *(undefined8*)( puVar5 + 8 ) = 0;
   puVar5[10] = 6;
   *(undefined1(*) [16])( puVar5 + 2 ) = (undefined1[16])0x0;
   if (in_EDX != 0) goto LAB_0011043b;
   local_78 = 0;
   local_80 = 0;
   local_68 = &_LC35;
   auVar1._8_8_ = 0;
   auVar1._0_8_ = local_60._8_8_;
   local_60 = auVar1 << 0x40;
   String::parse_latin1((StrRange*)&local_80);
   local_88 = 0;
   local_68 = (undefined*)CONCAT44(local_68._4_4_, 0x16);
   local_50 = 0;
   local_48 = 0;
   local_60 = (undefined1[16])0x0;
   if (local_80 == 0) {
      LAB_00110530:local_40 = 6;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_00110530;
      StringName::StringName((StringName*)&local_70, (CowData<char32_t>*)&local_48, false);
      if (local_60._8_8_ == local_70) {
         if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         local_60._8_8_ = local_70;
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
      StringName::unref();
   }

   *puVar5 = local_68._0_4_;
   if (*(long*)( puVar5 + 2 ) != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( puVar5 + 2 ));
      uVar3 = local_60._0_8_;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_60._8_8_;
      local_60 = auVar2 << 0x40;
      *(undefined8*)( puVar5 + 2 ) = uVar3;
   }

   if (*(long*)( puVar5 + 4 ) != local_60._8_8_) {
      StringName::unref();
      uVar3 = local_60._8_8_;
      local_60._8_8_ = 0;
      *(undefined8*)( puVar5 + 4 ) = uVar3;
   }

   puVar5[6] = local_50;
   if (*(long*)( puVar5 + 8 ) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( puVar5 + 8 ));
      lVar4 = local_48;
      local_48 = 0;
      *(long*)( puVar5 + 8 ) = lVar4;
   }

   puVar5[10] = local_40;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_68);
   LAB_0011043b:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return puVar5;
}
/* MethodBindT<bool>::_gen_argument_type_info(int) const */undefined4 *MethodBindT<bool>::_gen_argument_type_info(int param_1) {
   undefined1 auVar1[16];
   undefined1 auVar2[16];
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
   undefined1 local_60[16];
   int local_50;
   long local_48;
   undefined4 local_40;
   long local_30;
   puVar5 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *puVar5 = 0;
   puVar5[6] = 0;
   *(undefined8*)( puVar5 + 8 ) = 0;
   puVar5[10] = 6;
   *(undefined1(*) [16])( puVar5 + 2 ) = (undefined1[16])0x0;
   if (in_EDX != 0) goto LAB_0011067b;
   local_78 = 0;
   local_80 = 0;
   local_68 = &_LC35;
   auVar1._8_8_ = 0;
   auVar1._0_8_ = local_60._8_8_;
   local_60 = auVar1 << 0x40;
   String::parse_latin1((StrRange*)&local_80);
   local_88 = 0;
   local_68 = (undefined*)CONCAT44(local_68._4_4_, 1);
   local_50 = 0;
   local_48 = 0;
   local_60 = (undefined1[16])0x0;
   if (local_80 == 0) {
      LAB_00110770:local_40 = 6;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_00110770;
      StringName::StringName((StringName*)&local_70, (CowData<char32_t>*)&local_48, false);
      if (local_60._8_8_ == local_70) {
         if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         local_60._8_8_ = local_70;
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
      StringName::unref();
   }

   *puVar5 = local_68._0_4_;
   if (*(long*)( puVar5 + 2 ) != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( puVar5 + 2 ));
      uVar3 = local_60._0_8_;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_60._8_8_;
      local_60 = auVar2 << 0x40;
      *(undefined8*)( puVar5 + 2 ) = uVar3;
   }

   if (*(long*)( puVar5 + 4 ) != local_60._8_8_) {
      StringName::unref();
      uVar3 = local_60._8_8_;
      local_60._8_8_ = 0;
      *(undefined8*)( puVar5 + 4 ) = uVar3;
   }

   puVar5[6] = local_50;
   if (*(long*)( puVar5 + 8 ) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( puVar5 + 8 ));
      lVar4 = local_48;
      local_48 = 0;
      *(long*)( puVar5 + 8 ) = lVar4;
   }

   puVar5[10] = local_40;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_68);
   LAB_0011067b:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return puVar5;
}
/* MethodBindT<Rect2 const&>::_gen_argument_type_info(int) const */undefined4 *MethodBindT<Rect2_const&>::_gen_argument_type_info(int param_1) {
   undefined1 auVar1[16];
   undefined1 auVar2[16];
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
   undefined1 local_60[16];
   int local_50;
   long local_48;
   undefined4 local_40;
   long local_30;
   puVar5 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *puVar5 = 0;
   puVar5[6] = 0;
   *(undefined8*)( puVar5 + 8 ) = 0;
   puVar5[10] = 6;
   *(undefined1(*) [16])( puVar5 + 2 ) = (undefined1[16])0x0;
   if (in_EDX != 0) goto LAB_001108bb;
   local_78 = 0;
   local_80 = 0;
   local_68 = &_LC35;
   auVar1._8_8_ = 0;
   auVar1._0_8_ = local_60._8_8_;
   local_60 = auVar1 << 0x40;
   String::parse_latin1((StrRange*)&local_80);
   local_88 = 0;
   local_68 = (undefined*)CONCAT44(local_68._4_4_, 7);
   local_50 = 0;
   local_48 = 0;
   local_60 = (undefined1[16])0x0;
   if (local_80 == 0) {
      LAB_001109b0:local_40 = 6;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_001109b0;
      StringName::StringName((StringName*)&local_70, (CowData<char32_t>*)&local_48, false);
      if (local_60._8_8_ == local_70) {
         if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         local_60._8_8_ = local_70;
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
      StringName::unref();
   }

   *puVar5 = local_68._0_4_;
   if (*(long*)( puVar5 + 2 ) != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( puVar5 + 2 ));
      uVar3 = local_60._0_8_;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_60._8_8_;
      local_60 = auVar2 << 0x40;
      *(undefined8*)( puVar5 + 2 ) = uVar3;
   }

   if (*(long*)( puVar5 + 4 ) != local_60._8_8_) {
      StringName::unref();
      uVar3 = local_60._8_8_;
      local_60._8_8_ = 0;
      *(undefined8*)( puVar5 + 4 ) = uVar3;
   }

   puVar5[6] = local_50;
   if (*(long*)( puVar5 + 8 ) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( puVar5 + 8 ));
      lVar4 = local_48;
      local_48 = 0;
      *(long*)( puVar5 + 8 ) = lVar4;
   }

   puVar5[10] = local_40;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_68);
   LAB_001108bb:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return puVar5;
}
/* MethodBindT<Ref<Texture2D> const&>::_gen_argument_type_info(int) const */undefined4 *MethodBindT<Ref<Texture2D>const&>::_gen_argument_type_info(int param_1) {
   undefined1 auVar1[16];
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
   undefined1 local_60[16];
   int local_50;
   long local_48;
   undefined4 local_40;
   long local_30;
   puVar4 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *puVar4 = 0;
   puVar4[6] = 0;
   *(undefined8*)( puVar4 + 8 ) = 0;
   puVar4[10] = 6;
   *(undefined1(*) [16])( puVar4 + 2 ) = (undefined1[16])0x0;
   if (in_EDX != 0) goto LAB_00110afb;
   local_78 = 0;
   local_80 = 0;
   local_68 = "Texture2D";
   local_60._0_8_ = 9;
   String::parse_latin1((StrRange*)&local_80);
   local_88 = 0;
   local_68 = (char*)CONCAT44(local_68._4_4_, 0x18);
   local_50 = 0x11;
   local_48 = 0;
   local_60 = (undefined1[16])0x0;
   if (local_80 == 0) {
      LAB_00110c95:local_40 = 6;
      StringName::StringName((StringName*)&local_70, (String*)&local_48, false);
      if (local_60._8_8_ == local_70) {
         if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         local_60._8_8_ = local_70;
      }

   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
      local_40 = 6;
      if (local_50 == 0x11) goto LAB_00110c95;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
      StringName::unref();
   }

   *puVar4 = local_68._0_4_;
   if (*(long*)( puVar4 + 2 ) != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( puVar4 + 2 ));
      uVar2 = local_60._0_8_;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = local_60._8_8_;
      local_60 = auVar1 << 0x40;
      *(undefined8*)( puVar4 + 2 ) = uVar2;
   }

   if (*(long*)( puVar4 + 4 ) != local_60._8_8_) {
      StringName::unref();
      uVar2 = local_60._8_8_;
      local_60._8_8_ = 0;
      *(undefined8*)( puVar4 + 4 ) = uVar2;
   }

   puVar4[6] = local_50;
   if (*(long*)( puVar4 + 8 ) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( puVar4 + 8 ));
      lVar3 = local_48;
      local_48 = 0;
      *(long*)( puVar4 + 8 ) = lVar3;
   }

   puVar4[10] = local_40;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_68);
   LAB_00110afb:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return puVar4;
}
/* MethodBindT<int>::_gen_argument_type_info(int) const */undefined4 *MethodBindT<int>::_gen_argument_type_info(int param_1) {
   undefined1 auVar1[16];
   undefined1 auVar2[16];
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
   undefined1 local_60[16];
   int local_50;
   long local_48;
   undefined4 local_40;
   long local_30;
   puVar5 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *puVar5 = 0;
   puVar5[6] = 0;
   *(undefined8*)( puVar5 + 8 ) = 0;
   puVar5[10] = 6;
   *(undefined1(*) [16])( puVar5 + 2 ) = (undefined1[16])0x0;
   if (in_EDX != 0) goto LAB_00110d4b;
   local_78 = 0;
   local_80 = 0;
   local_68 = &_LC35;
   auVar1._8_8_ = 0;
   auVar1._0_8_ = local_60._8_8_;
   local_60 = auVar1 << 0x40;
   String::parse_latin1((StrRange*)&local_80);
   local_88 = 0;
   local_68 = (undefined*)CONCAT44(local_68._4_4_, 2);
   local_50 = 0;
   local_48 = 0;
   local_60 = (undefined1[16])0x0;
   if (local_80 == 0) {
      LAB_00110e40:local_40 = 6;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_00110e40;
      StringName::StringName((StringName*)&local_70, (CowData<char32_t>*)&local_48, false);
      if (local_60._8_8_ == local_70) {
         if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         local_60._8_8_ = local_70;
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
      StringName::unref();
   }

   *puVar5 = local_68._0_4_;
   if (*(long*)( puVar5 + 2 ) != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( puVar5 + 2 ));
      uVar3 = local_60._0_8_;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_60._8_8_;
      local_60 = auVar2 << 0x40;
      *(undefined8*)( puVar5 + 2 ) = uVar3;
   }

   if (*(long*)( puVar5 + 4 ) != local_60._8_8_) {
      StringName::unref();
      uVar3 = local_60._8_8_;
      local_60._8_8_ = 0;
      *(undefined8*)( puVar5 + 4 ) = uVar3;
   }

   puVar5[6] = local_50;
   if (*(long*)( puVar5 + 8 ) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( puVar5 + 8 ));
      lVar4 = local_48;
      local_48 = 0;
      *(long*)( puVar5 + 8 ) = lVar4;
   }

   puVar5[10] = local_40;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_68);
   LAB_00110d4b:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return puVar5;
}
/* Ref<Texture2D>::unref() */void Ref<Texture2D>::unref(Ref<Texture2D> *this) {
   Object *pOVar1;
   char cVar2;
   if (*(long*)this != 0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
         pOVar1 = *(Object**)this;
         cVar2 = predelete_handler(pOVar1);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
            *(undefined8*)this = 0;
            return;
         }

      }

   }

   *(undefined8*)this = 0;
   return;
}
/* MethodBind* create_method_bind<GPUParticles2D>(void (GPUParticles2D::*)()) */MethodBind *create_method_bind<GPUParticles2D>(_func_void *param_1) {
   long *plVar1;
   long lVar2;
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_void**)( this + 0x58 ) = param_1;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   *(undefined***)this = &PTR__gen_argument_type_00120230;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "GPUParticles2D";
   local_30 = 0xe;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (StrRange*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   lVar2 = local_40;
   if (local_40 != 0) {
      LOCK();
      plVar1 = (long*)( local_40 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_40 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Ref<Curve>::unref() */void Ref<Curve>::unref(Ref<Curve> *this) {
   Object *pOVar1;
   char cVar2;
   if (*(long*)this != 0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
         pOVar1 = *(Object**)this;
         cVar2 = predelete_handler(pOVar1);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
            *(undefined8*)this = 0;
            return;
         }

      }

   }

   *(undefined8*)this = 0;
   return;
}
/* Ref<CurveTexture>::TEMPNAMEPLACEHOLDERVALUE(CurveTexture*) */void Ref<CurveTexture>::operator =(Ref<CurveTexture> *this, CurveTexture *param_1) {
   Object *pOVar1;
   char cVar2;
   pOVar1 = *(Object**)this;
   if (param_1 != (CurveTexture*)pOVar1) {
      *(CurveTexture**)this = param_1;
      if (param_1 != (CurveTexture*)0x0) {
         cVar2 = RefCounted::init_ref();
         if (cVar2 == '\0') {
            *(undefined8*)this = 0;
         }

      }

      if (pOVar1 != (Object*)0x0) {
         cVar2 = RefCounted::unreference();
         if (cVar2 != '\0') {
            cVar2 = predelete_handler(pOVar1);
            if (cVar2 != '\0') {
               ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
               Memory::free_static(pOVar1, false);
               return;
            }

         }

      }

   }

   return;
}
/* MethodBind* create_method_bind<GPUParticles2D, bool>(void (GPUParticles2D::*)(bool)) */MethodBind *create_method_bind<GPUParticles2D,bool>(_func_void_bool *param_1) {
   long *plVar1;
   long lVar2;
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_void_bool**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00120290;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "GPUParticles2D";
   local_30 = 0xe;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (StrRange*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   lVar2 = local_40;
   if (local_40 != 0) {
      LOCK();
      plVar1 = (long*)( local_40 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_40 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind* create_method_bind<GPUParticles2D, int>(void (GPUParticles2D::*)(int)) */MethodBind *create_method_bind<GPUParticles2D,int>(_func_void_int *param_1) {
   long *plVar1;
   long lVar2;
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_void_int**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_001202f0;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "GPUParticles2D";
   local_30 = 0xe;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (StrRange*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   lVar2 = local_40;
   if (local_40 != 0) {
      LOCK();
      plVar1 = (long*)( local_40 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_40 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind* create_method_bind<GPUParticles2D, double>(void (GPUParticles2D::*)(double)) */MethodBind *create_method_bind<GPUParticles2D,double>(_func_void_double *param_1) {
   long *plVar1;
   long lVar2;
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_void_double**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00120350;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "GPUParticles2D";
   local_30 = 0xe;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (StrRange*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   lVar2 = local_40;
   if (local_40 != 0) {
      LOCK();
      plVar1 = (long*)( local_40 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_40 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind* create_method_bind<GPUParticles2D, float>(void (GPUParticles2D::*)(float)) */MethodBind *create_method_bind<GPUParticles2D,float>(_func_void_float *param_1) {
   long *plVar1;
   long lVar2;
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_void_float**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_001203b0;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "GPUParticles2D";
   local_30 = 0xe;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (StrRange*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   lVar2 = local_40;
   if (local_40 != 0) {
      LOCK();
      plVar1 = (long*)( local_40 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_40 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind* create_method_bind<GPUParticles2D, Rect2 const&>(void (GPUParticles2D::*)(Rect2
   const&)) */MethodBind *create_method_bind<GPUParticles2D,Rect2_const&>(_func_void_Rect2_ptr *param_1) {
   long *plVar1;
   long lVar2;
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_void_Rect2_ptr**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00120410;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "GPUParticles2D";
   local_30 = 0xe;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (StrRange*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   lVar2 = local_40;
   if (local_40 != 0) {
      LOCK();
      plVar1 = (long*)( local_40 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_40 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind* create_method_bind<GPUParticles2D, Ref<Material> const&>(void
   (GPUParticles2D::*)(Ref<Material> const&)) */MethodBind *create_method_bind<GPUParticles2D,Ref<Material>const&>(_func_void_Ref_ptr *param_1) {
   long *plVar1;
   long lVar2;
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_void_Ref_ptr**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00120470;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "GPUParticles2D";
   local_30 = 0xe;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (StrRange*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   lVar2 = local_40;
   if (local_40 != 0) {
      LOCK();
      plVar1 = (long*)( local_40 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_40 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind* create_method_bind<GPUParticles2D, bool>(bool (GPUParticles2D::*)() const) */MethodBind *create_method_bind<GPUParticles2D,bool>(_func_bool *param_1) {
   long *plVar1;
   long lVar2;
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_bool**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_001204d0;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "GPUParticles2D";
   local_30 = 0xe;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (StrRange*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   lVar2 = local_40;
   if (local_40 != 0) {
      LOCK();
      plVar1 = (long*)( local_40 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_40 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind* create_method_bind<GPUParticles2D, int>(int (GPUParticles2D::*)() const) */MethodBind *create_method_bind<GPUParticles2D,int>(_func_int *param_1) {
   long *plVar1;
   long lVar2;
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_int**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00120530;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "GPUParticles2D";
   local_30 = 0xe;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (StrRange*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   lVar2 = local_40;
   if (local_40 != 0) {
      LOCK();
      plVar1 = (long*)( local_40 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_40 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind* create_method_bind<GPUParticles2D, double>(double (GPUParticles2D::*)() const) */MethodBind *create_method_bind<GPUParticles2D,double>(_func_double *param_1) {
   long *plVar1;
   long lVar2;
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_double**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00120590;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "GPUParticles2D";
   local_30 = 0xe;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (StrRange*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   lVar2 = local_40;
   if (local_40 != 0) {
      LOCK();
      plVar1 = (long*)( local_40 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_40 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind* create_method_bind<GPUParticles2D, float>(float (GPUParticles2D::*)() const) */MethodBind *create_method_bind<GPUParticles2D,float>(_func_float *param_1) {
   long *plVar1;
   long lVar2;
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_float**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_001205f0;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "GPUParticles2D";
   local_30 = 0xe;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (StrRange*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   lVar2 = local_40;
   if (local_40 != 0) {
      LOCK();
      plVar1 = (long*)( local_40 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_40 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind* create_method_bind<GPUParticles2D, Rect2>(Rect2 (GPUParticles2D::*)() const) */MethodBind *create_method_bind<GPUParticles2D,Rect2>(_func_Rect2 *param_1) {
   long *plVar1;
   long lVar2;
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_Rect2**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00120650;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "GPUParticles2D";
   local_30 = 0xe;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (StrRange*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   lVar2 = local_40;
   if (local_40 != 0) {
      LOCK();
      plVar1 = (long*)( local_40 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_40 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind* create_method_bind<GPUParticles2D, Ref<Material>>(Ref<Material> (GPUParticles2D::*)()
   const) */MethodBind *create_method_bind<GPUParticles2D,Ref<Material>>(_func_Ref *param_1) {
   long *plVar1;
   long lVar2;
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_Ref**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_001206b0;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "GPUParticles2D";
   local_30 = 0xe;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (StrRange*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   lVar2 = local_40;
   if (local_40 != 0) {
      LOCK();
      plVar1 = (long*)( local_40 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_40 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind* create_method_bind<GPUParticles2D, GPUParticles2D::DrawOrder>(void
   (GPUParticles2D::*)(GPUParticles2D::DrawOrder)) */MethodBind *create_method_bind<GPUParticles2D,GPUParticles2D::DrawOrder>(_func_void_DrawOrder *param_1) {
   long *plVar1;
   long lVar2;
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_void_DrawOrder**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00120710;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "GPUParticles2D";
   local_30 = 0xe;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (StrRange*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   lVar2 = local_40;
   if (local_40 != 0) {
      LOCK();
      plVar1 = (long*)( local_40 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_40 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind* create_method_bind<GPUParticles2D,
   GPUParticles2D::DrawOrder>(GPUParticles2D::DrawOrder (GPUParticles2D::*)() const) */MethodBind *create_method_bind<GPUParticles2D,GPUParticles2D::DrawOrder>(_func_DrawOrder *param_1) {
   long *plVar1;
   long lVar2;
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_DrawOrder**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00120770;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "GPUParticles2D";
   local_30 = 0xe;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (StrRange*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   lVar2 = local_40;
   if (local_40 != 0) {
      LOCK();
      plVar1 = (long*)( local_40 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_40 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind* create_method_bind<GPUParticles2D, Ref<Texture2D> const&>(void
   (GPUParticles2D::*)(Ref<Texture2D> const&)) */MethodBind *create_method_bind<GPUParticles2D,Ref<Texture2D>const&>(_func_void_Ref_ptr *param_1) {
   long *plVar1;
   long lVar2;
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_void_Ref_ptr**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_001207d0;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "GPUParticles2D";
   local_30 = 0xe;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (StrRange*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   lVar2 = local_40;
   if (local_40 != 0) {
      LOCK();
      plVar1 = (long*)( local_40 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_40 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind* create_method_bind<GPUParticles2D, Ref<Texture2D>>(Ref<Texture2D>
   (GPUParticles2D::*)() const) */MethodBind *create_method_bind<GPUParticles2D,Ref<Texture2D>>(_func_Ref *param_1) {
   long *plVar1;
   long lVar2;
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_Ref**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00120830;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "GPUParticles2D";
   local_30 = 0xe;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (StrRange*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   lVar2 = local_40;
   if (local_40 != 0) {
      LOCK();
      plVar1 = (long*)( local_40 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_40 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind* create_method_bind<GPUParticles2D, NodePath const&>(void (GPUParticles2D::*)(NodePath
   const&)) */MethodBind *create_method_bind<GPUParticles2D,NodePath_const&>(_func_void_NodePath_ptr *param_1) {
   long *plVar1;
   long lVar2;
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_void_NodePath_ptr**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00120890;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "GPUParticles2D";
   local_30 = 0xe;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (StrRange*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   lVar2 = local_40;
   if (local_40 != 0) {
      LOCK();
      plVar1 = (long*)( local_40 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_40 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind* create_method_bind<GPUParticles2D, NodePath>(NodePath (GPUParticles2D::*)() const) */MethodBind *create_method_bind<GPUParticles2D,NodePath>(_func_NodePath *param_1) {
   long *plVar1;
   long lVar2;
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_NodePath**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_001208f0;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "GPUParticles2D";
   local_30 = 0xe;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (StrRange*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   lVar2 = local_40;
   if (local_40 != 0) {
      LOCK();
      plVar1 = (long*)( local_40 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_40 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind* create_method_bind<GPUParticles2D, Transform2D const&, Vector2 const&, Color const&,
   Color const&, unsigned int>(void (GPUParticles2D::*)(Transform2D const&, Vector2 const&, Color
   const&, Color const&, unsigned int)) */MethodBind *create_method_bind<GPUParticles2D,Transform2D_const&,Vector2_const&,Color_const&,Color_const&,unsigned_int>(_func_void_Transform2D_ptr_Vector2_ptr_Color_ptr_Color_ptr_uint *param_1) {
   long *plVar1;
   long lVar2;
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_void_Transform2D_ptr_Vector2_ptr_Color_ptr_Color_ptr_uint**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00120950;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 5;
   local_40 = 0;
   local_38 = "GPUParticles2D";
   local_30 = 0xe;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (StrRange*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   lVar2 = local_40;
   if (local_40 != 0) {
      LOCK();
      plVar1 = (long*)( local_40 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_40 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind* create_method_bind<GPUParticles2D, Node*>(void (GPUParticles2D::*)(Node*)) */MethodBind *create_method_bind<GPUParticles2D,Node*>(_func_void_Node_ptr *param_1) {
   long *plVar1;
   long lVar2;
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_void_Node_ptr**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_001209b0;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "GPUParticles2D";
   local_30 = 0xe;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (StrRange*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   lVar2 = local_40;
   if (local_40 != 0) {
      LOCK();
      plVar1 = (long*)( local_40 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_40 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind* create_method_bind<GPUParticles2D, unsigned int>(void (GPUParticles2D::*)(unsigned
   int)) */MethodBind *create_method_bind<GPUParticles2D,unsigned_int>(_func_void_uint *param_1) {
   long *plVar1;
   long lVar2;
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_void_uint**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00120a10;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "GPUParticles2D";
   local_30 = 0xe;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (StrRange*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   lVar2 = local_40;
   if (local_40 != 0) {
      LOCK();
      plVar1 = (long*)( local_40 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_40 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind* create_method_bind<GPUParticles2D, unsigned int>(unsigned int (GPUParticles2D::*)()
   const) */MethodBind *create_method_bind<GPUParticles2D,unsigned_int>(_func_uint *param_1) {
   long *plVar1;
   long lVar2;
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_uint**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00120a70;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "GPUParticles2D";
   local_30 = 0xe;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (StrRange*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   lVar2 = local_40;
   if (local_40 != 0) {
      LOCK();
      plVar1 = (long*)( local_40 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_40 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* CowData<Vector2>::_unref() */void CowData<Vector2>::_unref(CowData<Vector2> *this) {
   long *plVar1;
   long lVar2;
   if (*(long*)this == 0) {
      return;
   }

   LOCK();
   plVar1 = (long*)( *(long*)this + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   if (*plVar1 != 0) {
      *(undefined8*)this = 0;
      return;
   }

   lVar2 = *(long*)this;
   *(undefined8*)this = 0;
   Memory::free_static((void*)( lVar2 + -0x10 ), false);
   return;
}
/* CowData<Vector2>::_realloc(long) */undefined8 CowData<Vector2>::_realloc(CowData<Vector2> *this, long param_1) {
   undefined8 *puVar1;
   puVar1 = (undefined8*)Memory::realloc_static((void*)( *(long*)this + -0x10 ), param_1 + 0x10, false);
   if (puVar1 != (undefined8*)0x0) {
      *puVar1 = 1;
      *(undefined8**)this = puVar1 + 2;
      return 0;
   }

   _err_print_error("_realloc", "./core/templates/cowdata.h", 0x1a9, "Parameter \"mem_new\" is null.", 0, 0);
   return 6;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<Vector2>::resize<false>(long) */undefined8 CowData<Vector2>::resize<false>(CowData<Vector2> *this, long param_1) {
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
      _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      return 0x1f;
   }

   lVar3 = *(long*)this;
   if (lVar3 == 0) {
      if (param_1 == 0) {
         return 0;
      }

      _copy_on_write(this);
      lVar8 = 0;
      lVar3 = 0;
   }
 else {
      lVar8 = *(long*)( lVar3 + -8 );
      if (param_1 == lVar8) {
         return 0;
      }

      if (param_1 == 0) {
         LOCK();
         plVar1 = (long*)( lVar3 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 != 0) {
            *(undefined8*)this = 0;
            return 0;
         }

         lVar3 = *(long*)this;
         *(undefined8*)this = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
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
         lVar3 = ( uVar4 | uVar4 >> 0x20 ) + 1;
      }

   }

   if (param_1 * 8 == 0) {
      LAB_00112ed0:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
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
   if (lVar7 == 0) goto LAB_00112ed0;
   if (param_1 <= lVar8) {
      if (( lVar7 != lVar3 ) && ( uVar6 = _realloc(this, lVar7) ),(int)uVar6 != 0) {
         return uVar6;
      }

      if (*(long*)this != 0) {
         *(long*)( *(long*)this + -8 ) = param_1;
         return 0;
      }

      _DAT_00000000 = 0;
      /* WARNING: Does not return */
      pcVar2 = (code*)invalidInstructionException();
      ( *pcVar2 )();
   }

   if (lVar7 == lVar3) {
      LAB_00112e3c:puVar9 = *(undefined8**)this;
      if (puVar9 == (undefined8*)0x0) {
         /* WARNING: Does not return */
         pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }

      lVar3 = puVar9[-1];
      if (param_1 <= lVar3) goto LAB_00112dd1;
   }
 else {
      if (lVar8 != 0) {
         uVar6 = _realloc(this, lVar7);
         if ((int)uVar6 != 0) {
            return uVar6;
         }

         goto LAB_00112e3c;
      }

      puVar5 = (undefined8*)Memory::alloc_static(uVar4 + 0x11, false);
      if (puVar5 == (undefined8*)0x0) {
         _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
         return 6;
      }

      puVar9 = puVar5 + 2;
      *puVar5 = 1;
      puVar5[1] = 0;
      *(undefined8**)this = puVar9;
      lVar3 = 0;
   }

   memset(puVar9 + lVar3, 0, ( param_1 - lVar3 ) * 8);
   LAB_00112dd1:puVar9[-1] = param_1;
   return 0;
}
/* CowData<int>::_unref() */void CowData<int>::_unref(CowData<int> *this) {
   long *plVar1;
   long lVar2;
   if (*(long*)this == 0) {
      return;
   }

   LOCK();
   plVar1 = (long*)( *(long*)this + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   if (*plVar1 != 0) {
      *(undefined8*)this = 0;
      return;
   }

   lVar2 = *(long*)this;
   *(undefined8*)this = 0;
   Memory::free_static((void*)( lVar2 + -0x10 ), false);
   return;
}
/* CowData<String>::_unref() */void CowData<String>::_unref(CowData<String> *this) {
   long *plVar1;
   long *plVar2;
   long lVar3;
   long lVar4;
   code *pcVar5;
   long *plVar6;
   long lVar7;
   if (*(long*)this == 0) {
      return;
   }

   LOCK();
   plVar1 = (long*)( *(long*)this + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   if (*plVar1 == 0) {
      plVar1 = *(long**)this;
      if (plVar1 != (long*)0x0) {
         lVar3 = plVar1[-1];
         *(undefined8*)this = 0;
         if (lVar3 != 0) {
            lVar7 = 0;
            plVar6 = plVar1;
            do {
               if (*plVar6 != 0) {
                  LOCK();
                  plVar2 = (long*)( *plVar6 + -0x10 );
                  *plVar2 = *plVar2 + -1;
                  UNLOCK();
                  if (*plVar2 == 0) {
                     lVar4 = *plVar6;
                     *plVar6 = 0;
                     Memory::free_static((void*)( lVar4 + -0x10 ), false);
                  }

               }

               lVar7 = lVar7 + 1;
               plVar6 = plVar6 + 1;
            }
 while ( lVar3 != lVar7 );
         }

         Memory::free_static(plVar1 + -2, false);
         return;
      }

      /* WARNING: Does not return */
      pcVar5 = (code*)invalidInstructionException();
      ( *pcVar5 )();
   }

   *(undefined8*)this = 0;
   return;
}
/* godot::details::enum_qualified_name_to_class_info_name(String const&) */details * __thiscall
godot::details::enum_qualified_name_to_class_info_name(details *this,String *param_1){
   long *plVar1;
   code *pcVar2;
   long lVar3;
   long lVar4;
   long in_FS_OFFSET;
   long local_60;
   char local_58[8];
   long local_50;
   undefined *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   String::split(local_58, SUB81(param_1, 0), 0x11302a);
   if (( local_50 != 0 ) && ( 2 < *(long*)( local_50 + -8 ) )) {
      local_60 = 0;
      local_48 = &_LC81;
      local_40 = 1;
      String::parse_latin1((StrRange*)&local_60);
      if (local_50 == 0) {
         lVar4 = 0;
         lVar3 = -2;
      }
 else {
         lVar4 = *(long*)( local_50 + -8 );
         lVar3 = lVar4 + -2;
         if (-1 < lVar3) {
            String::operator +((String*)&local_48, (String*)( local_50 + lVar3 * 8 ));
            String::operator +((String*)this, (String*)&local_48);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
            goto LAB_001130fb;
         }

      }

      _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar3, lVar4, "p_index", "size()", "", false, true);
      _err_flush_stdout();
      /* WARNING: Does not return */
      pcVar2 = (code*)invalidInstructionException();
      ( *pcVar2 )();
   }

   local_60 = 0;
   local_48 = &_LC81;
   local_40 = 1;
   String::parse_latin1((StrRange*)&local_60);
   String::join((Vector*)this);
   lVar4 = local_60;
   if (local_60 != 0) {
      LOCK();
      plVar1 = (long*)( local_60 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_60 = 0;
         Memory::free_static((void*)( lVar4 + -0x10 ), false);
      }

   }

   LAB_001130fb:CowData<String>::_unref((CowData<String>*)&local_50);
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GetTypeInfo<GPUParticles2D::DrawOrder, void>::get_class_info() */GetTypeInfo<GPUParticles2D::DrawOrder,void> * __thiscall
GetTypeInfo<GPUParticles2D::DrawOrder,void>::get_class_info
          (GetTypeInfo<GPUParticles2D::DrawOrder,void> *this){
   long *plVar1;
   code *pcVar2;
   long lVar3;
   long lVar4;
   long in_FS_OFFSET;
   long local_70;
   long local_68;
   undefined8 local_60;
   char local_58[8];
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_70 = 0;
   local_48 = "GPUParticles2D::DrawOrder";
   local_40 = 0x19;
   String::parse_latin1((StrRange*)&local_70);
   String::split(local_58, SUB81((StrRange*)&local_70, 0), 0x11302a);
   if (( local_50 != 0 ) && ( 2 < *(long*)( local_50 + -8 ) )) {
      local_60 = 0;
      local_40 = 1;
      local_48 = ".";
      String::parse_latin1((StrRange*)&local_60);
      if (local_50 == 0) {
         lVar3 = -2;
         lVar4 = 0;
      }
 else {
         lVar4 = *(long*)( local_50 + -8 );
         lVar3 = lVar4 + -2;
         if (-1 < lVar3) {
            String::operator +((String*)&local_48, (String*)( local_50 + lVar3 * 8 ));
            String::operator +((String*)&local_68, (String*)&local_48);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
            goto LAB_001132f3;
         }

      }

      _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar3, lVar4, "p_index", "size()", "", false, true);
      _err_flush_stdout();
      /* WARNING: Does not return */
      pcVar2 = (code*)invalidInstructionException();
      ( *pcVar2 )();
   }

   local_60 = 0;
   local_48 = ".";
   local_40 = 1;
   String::parse_latin1((StrRange*)&local_60);
   String::join((Vector*)&local_68);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   LAB_001132f3:CowData<String>::_unref((CowData<String>*)&local_50);
   StringName::StringName((StringName*)&local_48, (String*)&local_68, false);
   *(undefined4*)this = 2;
   *(undefined4*)( this + 0x18 ) = 0;
   *(undefined8*)( this + 0x20 ) = 0;
   *(undefined4*)( this + 0x28 ) = 0x10006;
   *(undefined1(*) [16])( this + 8 ) = (undefined1[16])0x0;
   StringName::operator =((StringName*)( this + 0x10 ), (StringName*)&local_48);
   if (( StringName::configured != '\0' ) && ( local_48 != (undefined*)0x0 )) {
      StringName::unref();
   }

   lVar4 = local_68;
   if (local_68 != 0) {
      LOCK();
      plVar1 = (long*)( local_68 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_68 = 0;
         Memory::free_static((void*)( lVar4 + -0x10 ), false);
      }

   }

   lVar4 = local_70;
   if (local_70 != 0) {
      LOCK();
      plVar1 = (long*)( local_70 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_70 = 0;
         Memory::free_static((void*)( lVar4 + -0x10 ), false);
      }

   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<GPUParticles2D::DrawOrder>::_gen_argument_type_info(int) const */undefined4 *MethodBindT<GPUParticles2D::DrawOrder>::_gen_argument_type_info(int param_1) {
   long lVar1;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar2;
   long in_FS_OFFSET;
   undefined4 local_48[2];
   long local_40;
   long local_38;
   undefined4 local_30;
   long local_28;
   undefined4 local_20;
   long local_10;
   puVar2 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   *puVar2 = 0;
   puVar2[6] = 0;
   *(undefined8*)( puVar2 + 8 ) = 0;
   puVar2[10] = 6;
   *(undefined1(*) [16])( puVar2 + 2 ) = (undefined1[16])0x0;
   if (in_EDX == 0) {
      GetTypeInfo<GPUParticles2D::DrawOrder,void>::get_class_info((GetTypeInfo<GPUParticles2D::DrawOrder,void>*)local_48);
      *puVar2 = local_48[0];
      if (*(long*)( puVar2 + 2 ) != local_40) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( puVar2 + 2 ));
         lVar1 = local_40;
         local_40 = 0;
         *(long*)( puVar2 + 2 ) = lVar1;
      }

      if (*(long*)( puVar2 + 4 ) != local_38) {
         StringName::unref();
         lVar1 = local_38;
         local_38 = 0;
         *(long*)( puVar2 + 4 ) = lVar1;
      }

      puVar2[6] = local_30;
      if (*(long*)( puVar2 + 8 ) != local_28) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( puVar2 + 8 ));
         lVar1 = local_28;
         local_28 = 0;
         *(long*)( puVar2 + 8 ) = lVar1;
      }

      puVar2[10] = local_20;
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_28);
      if (( StringName::configured != '\0' ) && ( local_38 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_40);
   }

   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GPUParticles2D::_initialize_classv() */void GPUParticles2D::_initialize_classv(void) {
   long in_FS_OFFSET;
   undefined8 local_70;
   undefined8 local_68;
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (initialize_class() == '\0') {
      if (Node2D::initialize_class() == '\0') {
         if (CanvasItem::initialize_class() == '\0') {
            if (Node::initialize_class() == '\0') {
               Object::initialize_class();
               local_68 = 0;
               local_50 = 6;
               local_58 = "Object";
               String::parse_latin1((StrRange*)&local_68);
               StringName::StringName((StringName*)&local_60, (StrRange*)&local_68, false);
               local_58 = "Node";
               local_70 = 0;
               local_50 = 4;
               String::parse_latin1((StrRange*)&local_70);
               StringName::StringName((StringName*)&local_58, (StrRange*)&local_70, false);
               ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_60);
               if (( StringName::configured != '\0' ) && ( local_58 != (undefined*)0x0 )) {
                  StringName::unref();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
               if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
                  StringName::unref();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
               if ((code*)PTR__bind_methods_00127030 != Node::_bind_methods) {
                  Node::_bind_methods();
               }

               Node::initialize_class()::initialized =
               '\x01';
            }

            local_68 = 0;
            local_58 = "Node";
            local_50 = 4;
            String::parse_latin1((StrRange*)&local_68);
            StringName::StringName((StringName*)&local_60, (StrRange*)&local_68, false);
            local_58 = "CanvasItem";
            local_70 = 0;
            local_50 = 10;
            String::parse_latin1((StrRange*)&local_70);
            StringName::StringName((StringName*)&local_58, (StrRange*)&local_70, false);
            ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_60);
            if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
               StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
            if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
               StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
            CanvasItem::_bind_methods();
            if ((code*)PTR__bind_compatibility_methods_00127020 != Object::_bind_compatibility_methods) {
               CanvasItem::_bind_compatibility_methods();
            }

            CanvasItem::initialize_class()::initialized =
            '\x01';
         }

         local_58 = "CanvasItem";
         local_68 = 0;
         local_50 = 10;
         String::parse_latin1((StrRange*)&local_68);
         StringName::StringName((StringName*)&local_60, (StrRange*)&local_68, false);
         local_58 = "Node2D";
         local_70 = 0;
         local_50 = 6;
         String::parse_latin1((StrRange*)&local_70);
         StringName::StringName((StringName*)&local_58, (StrRange*)&local_70, false);
         ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         if ((code*)PTR__bind_methods_00127028 != CanvasItem::_bind_methods) {
            Node2D::_bind_methods();
         }

         Node2D::initialize_class()::initialized =
         '\x01';
      }

      local_58 = "Node2D";
      local_68 = 0;
      local_50 = 6;
      String::parse_latin1((StrRange*)&local_68);
      StringName::StringName((StringName*)&local_60, (StrRange*)&local_68, false);
      local_58 = "GPUParticles2D";
      local_70 = 0;
      local_50 = 0xe;
      String::parse_latin1((StrRange*)&local_70);
      StringName::StringName((StringName*)&local_58, (StrRange*)&local_70, false);
      ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_60);
      if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
      _bind_methods();
      _bind_compatibility_methods();
      initialize_class()::initialized =
      '\x01';
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<GPUParticles2D::DrawOrder>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<GPUParticles2D::DrawOrder>::_gen_argument_type_info(int param_1) {
   long *plVar1;
   code *pcVar2;
   long lVar3;
   undefined4 in_register_0000003c;
   undefined4 *puVar4;
   long lVar5;
   long in_FS_OFFSET;
   long local_70;
   long local_68;
   undefined8 local_60;
   char local_58[8];
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   puVar4 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_68 = 0;
   local_48 = "GPUParticles2D::DrawOrder";
   local_40 = 0x19;
   String::parse_latin1((StrRange*)&local_68);
   String::split(local_58, SUB81((StrRange*)&local_68, 0), 0x11302a);
   if (( local_50 != 0 ) && ( 2 < *(long*)( local_50 + -8 ) )) {
      local_60 = 0;
      local_40 = 1;
      local_48 = ".";
      String::parse_latin1((StrRange*)&local_60);
      if (local_50 == 0) {
         lVar3 = -2;
         lVar5 = 0;
      }
 else {
         lVar5 = *(long*)( local_50 + -8 );
         lVar3 = lVar5 + -2;
         if (-1 < lVar3) {
            String::operator +((String*)&local_48, (String*)( local_50 + lVar3 * 8 ));
            String::operator +((String*)&local_70, (String*)&local_48);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
            goto LAB_00113b23;
         }

      }

      _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar3, lVar5, "p_index", "size()", "", false, true);
      _err_flush_stdout();
      /* WARNING: Does not return */
      pcVar2 = (code*)invalidInstructionException();
      ( *pcVar2 )();
   }

   local_60 = 0;
   local_48 = ".";
   local_40 = 1;
   String::parse_latin1((StrRange*)&local_60);
   String::join((Vector*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   LAB_00113b23:CowData<String>::_unref((CowData<String>*)&local_50);
   StringName::StringName((StringName*)&local_48, (String*)&local_70, false);
   *puVar4 = 2;
   puVar4[6] = 0;
   *(undefined8*)( puVar4 + 8 ) = 0;
   puVar4[10] = 0x10006;
   *(undefined1(*) [16])( puVar4 + 2 ) = (undefined1[16])0x0;
   StringName::operator =((StringName*)( puVar4 + 4 ), (StringName*)&local_48);
   if (( StringName::configured != '\0' ) && ( local_48 != (undefined*)0x0 )) {
      StringName::unref();
   }

   lVar5 = local_70;
   if (local_70 != 0) {
      LOCK();
      plVar1 = (long*)( local_70 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_70 = 0;
         Memory::free_static((void*)( lVar5 + -0x10 ), false);
      }

   }

   lVar5 = local_68;
   if (local_68 != 0) {
      LOCK();
      plVar1 = (long*)( local_68 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_68 = 0;
         Memory::free_static((void*)( lVar5 + -0x10 ), false);
      }

   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* CowData<String>::_realloc(long) */undefined8 CowData<String>::_realloc(CowData<String> *this, long param_1) {
   undefined8 *puVar1;
   puVar1 = (undefined8*)Memory::realloc_static((void*)( *(long*)this + -0x10 ), param_1 + 0x10, false);
   if (puVar1 != (undefined8*)0x0) {
      *puVar1 = 1;
      *(undefined8**)this = puVar1 + 2;
      return 0;
   }

   _err_print_error("_realloc", "./core/templates/cowdata.h", 0x1a9, "Parameter \"mem_new\" is null.", 0, 0);
   return 6;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<String>::resize<false>(long) */undefined8 CowData<String>::resize<false>(CowData<String> *this, long param_1) {
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
      _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      return 0x1f;
   }

   if (*(long*)this == 0) {
      if (param_1 == 0) {
         return 0;
      }

      _copy_on_write(this);
      lVar6 = 0;
      lVar7 = 0;
   }
 else {
      lVar6 = *(long*)( *(long*)this + -8 );
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
         lVar7 = ( uVar8 | uVar8 >> 0x20 ) + 1;
      }

   }

   if (param_1 * 8 == 0) {
      LAB_00113fd0:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
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
   if (lVar10 == 0) goto LAB_00113fd0;
   if (param_1 <= lVar6) {
      lVar6 = *(long*)this;
      uVar8 = param_1;
      while (lVar6 != 0) {
         if (*(ulong*)( lVar6 + -8 ) <= uVar8) {
            LAB_00113ea9:if (lVar10 != lVar7) {
               uVar4 = _realloc(this, lVar10);
               if ((int)uVar4 != 0) {
                  return uVar4;
               }

               lVar6 = *(long*)this;
               if (lVar6 == 0) {
                  _DAT_00000000 = 0;
                  /* WARNING: Does not return */
                  pcVar3 = (code*)invalidInstructionException();
                  ( *pcVar3 )();
               }

            }

            *(long*)( lVar6 + -8 ) = param_1;
            return 0;
         }

         while (true) {
            plVar2 = (long*)( lVar6 + uVar8 * 8 );
            if (*plVar2 != 0) break;
            uVar8 = uVar8 + 1;
            if (*(ulong*)( lVar6 + -8 ) <= uVar8) goto LAB_00113ea9;
         }
;
         LOCK();
         plVar1 = (long*)( *plVar2 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar6 = *plVar2;
            *plVar2 = 0;
            Memory::free_static((void*)( lVar6 + -0x10 ), false);
         }

         uVar8 = uVar8 + 1;
         lVar6 = *(long*)this;
      }
;
      goto LAB_00114026;
   }

   if (lVar10 == lVar7) {
      LAB_00113f4f:puVar9 = *(undefined8**)this;
      if (puVar9 == (undefined8*)0x0) {
         LAB_00114026:/* WARNING: Does not return */pcVar3 = (code*)invalidInstructionException();
         ( *pcVar3 )();
      }

      lVar6 = puVar9[-1];
      if (param_1 <= lVar6) goto LAB_00113f3a;
   }
 else {
      if (lVar6 != 0) {
         uVar4 = _realloc(this, lVar10);
         if ((int)uVar4 != 0) {
            return uVar4;
         }

         goto LAB_00113f4f;
      }

      puVar5 = (undefined8*)Memory::alloc_static(uVar8 + 0x11, false);
      if (puVar5 == (undefined8*)0x0) {
         _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
         return 6;
      }

      puVar9 = puVar5 + 2;
      *puVar5 = 1;
      puVar5[1] = 0;
      *(undefined8**)this = puVar9;
      lVar6 = 0;
   }

   memset(puVar9 + lVar6, 0, ( param_1 - lVar6 ) * 8);
   LAB_00113f3a:puVar9[-1] = param_1;
   return 0;
}
/* CowData<int>::_realloc(long) */undefined8 CowData<int>::_realloc(CowData<int> *this, long param_1) {
   undefined8 *puVar1;
   puVar1 = (undefined8*)Memory::realloc_static((void*)( *(long*)this + -0x10 ), param_1 + 0x10, false);
   if (puVar1 != (undefined8*)0x0) {
      *puVar1 = 1;
      *(undefined8**)this = puVar1 + 2;
      return 0;
   }

   _err_print_error("_realloc", "./core/templates/cowdata.h", 0x1a9, "Parameter \"mem_new\" is null.", 0, 0);
   return 6;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<int>::resize<false>(long) */undefined8 CowData<int>::resize<false>(CowData<int> *this, long param_1) {
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
      _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      return 0x1f;
   }

   lVar3 = *(long*)this;
   if (lVar3 == 0) {
      if (param_1 == 0) {
         return 0;
      }

      _copy_on_write(this);
      lVar9 = 0;
      lVar3 = 0;
   }
 else {
      lVar9 = *(long*)( lVar3 + -8 );
      if (param_1 == lVar9) {
         return 0;
      }

      if (param_1 == 0) {
         LOCK();
         plVar1 = (long*)( lVar3 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 != 0) {
            *(undefined8*)this = 0;
            return 0;
         }

         lVar3 = *(long*)this;
         *(undefined8*)this = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
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
         lVar3 = ( uVar4 | uVar4 >> 0x20 ) + 1;
      }

   }

   if (param_1 * 4 == 0) {
      LAB_001142b0:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
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
   if (lVar8 == 0) goto LAB_001142b0;
   if (lVar9 < param_1) {
      if (lVar8 != lVar3) {
         if (lVar9 == 0) {
            puVar5 = (undefined8*)Memory::alloc_static(uVar4 + 0x11, false);
            if (puVar5 == (undefined8*)0x0) {
               _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
               return 6;
            }

            puVar7 = puVar5 + 2;
            *puVar5 = 1;
            puVar5[1] = 0;
            *(undefined8**)this = puVar7;
            goto LAB_001141c1;
         }

         uVar6 = _realloc(this, lVar8);
         if ((int)uVar6 != 0) {
            return uVar6;
         }

      }

      puVar7 = *(undefined8**)this;
      if (puVar7 != (undefined8*)0x0) {
         LAB_001141c1:puVar7[-1] = param_1;
         return 0;
      }

   }
 else {
      if (( lVar8 != lVar3 ) && ( uVar6 = _realloc(this, lVar8) ),(int)uVar6 != 0) {
         return uVar6;
      }

      if (*(long*)this != 0) {
         *(long*)( *(long*)this + -8 ) = param_1;
         return 0;
      }

   }

   _DAT_00000000 = 0;
   /* WARNING: Does not return */
   pcVar2 = (code*)invalidInstructionException();
   ( *pcVar2 )();
}
/* CowData<float>::_realloc(long) */undefined8 CowData<float>::_realloc(CowData<float> *this, long param_1) {
   undefined8 *puVar1;
   puVar1 = (undefined8*)Memory::realloc_static((void*)( *(long*)this + -0x10 ), param_1 + 0x10, false);
   if (puVar1 != (undefined8*)0x0) {
      *puVar1 = 1;
      *(undefined8**)this = puVar1 + 2;
      return 0;
   }

   _err_print_error("_realloc", "./core/templates/cowdata.h", 0x1a9, "Parameter \"mem_new\" is null.", 0, 0);
   return 6;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<float>::resize<false>(long) */undefined8 CowData<float>::resize<false>(CowData<float> *this, long param_1) {
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
      _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      return 0x1f;
   }

   lVar3 = *(long*)this;
   if (lVar3 == 0) {
      if (param_1 == 0) {
         return 0;
      }

      _copy_on_write(this);
      lVar9 = 0;
      lVar3 = 0;
   }
 else {
      lVar9 = *(long*)( lVar3 + -8 );
      if (param_1 == lVar9) {
         return 0;
      }

      if (param_1 == 0) {
         LOCK();
         plVar1 = (long*)( lVar3 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 != 0) {
            *(undefined8*)this = 0;
            return 0;
         }

         lVar3 = *(long*)this;
         *(undefined8*)this = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
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
         lVar3 = ( uVar4 | uVar4 >> 0x20 ) + 1;
      }

   }

   if (param_1 * 4 == 0) {
      LAB_00114590:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
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
   if (lVar8 == 0) goto LAB_00114590;
   if (lVar9 < param_1) {
      if (lVar8 != lVar3) {
         if (lVar9 == 0) {
            puVar5 = (undefined8*)Memory::alloc_static(uVar4 + 0x11, false);
            if (puVar5 == (undefined8*)0x0) {
               _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
               return 6;
            }

            puVar7 = puVar5 + 2;
            *puVar5 = 1;
            puVar5[1] = 0;
            *(undefined8**)this = puVar7;
            goto LAB_001144a1;
         }

         uVar6 = _realloc(this, lVar8);
         if ((int)uVar6 != 0) {
            return uVar6;
         }

      }

      puVar7 = *(undefined8**)this;
      if (puVar7 != (undefined8*)0x0) {
         LAB_001144a1:puVar7[-1] = param_1;
         return 0;
      }

   }
 else {
      if (( lVar8 != lVar3 ) && ( uVar6 = _realloc(this, lVar8) ),(int)uVar6 != 0) {
         return uVar6;
      }

      if (*(long*)this != 0) {
         *(long*)( *(long*)this + -8 ) = param_1;
         return 0;
      }

   }

   _DAT_00000000 = 0;
   /* WARNING: Does not return */
   pcVar2 = (code*)invalidInstructionException();
   ( *pcVar2 )();
}
/* CowData<Transform3D>::_realloc(long) */undefined8 CowData<Transform3D>::_realloc(CowData<Transform3D> *this, long param_1) {
   undefined8 *puVar1;
   puVar1 = (undefined8*)Memory::realloc_static((void*)( *(long*)this + -0x10 ), param_1 + 0x10, false);
   if (puVar1 != (undefined8*)0x0) {
      *puVar1 = 1;
      *(undefined8**)this = puVar1 + 2;
      return 0;
   }

   _err_print_error("_realloc", "./core/templates/cowdata.h", 0x1a9, "Parameter \"mem_new\" is null.", 0, 0);
   return 6;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<Transform3D>::resize<false>(long) */undefined8 CowData<Transform3D>::resize<false>(CowData<Transform3D> *this, long param_1) {
   long *plVar1;
   code *pcVar2;
   uint uVar3;
   long lVar4;
   ulong uVar5;
   undefined8 *puVar6;
   undefined1(*pauVar7)[16];
   undefined1(*pauVar8)[16];
   undefined8 uVar9;
   undefined8 *puVar10;
   long lVar11;
   long lVar12;
   if (param_1 < 0) {
      _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      return 0x1f;
   }

   lVar4 = *(long*)this;
   if (lVar4 == 0) {
      if (param_1 == 0) {
         return 0;
      }

      _copy_on_write(this);
      lVar12 = 0;
      lVar4 = 0;
   }
 else {
      lVar12 = *(long*)( lVar4 + -8 );
      if (param_1 == lVar12) {
         return 0;
      }

      if (param_1 == 0) {
         LOCK();
         plVar1 = (long*)( lVar4 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 != 0) {
            *(undefined8*)this = 0;
            return 0;
         }

         lVar4 = *(long*)this;
         *(undefined8*)this = 0;
         Memory::free_static((void*)( lVar4 + -0x10 ), false);
         return 0;
      }

      _copy_on_write(this);
      lVar4 = lVar12 * 0x30;
      if (lVar4 != 0) {
         uVar5 = lVar4 - 1U | lVar4 - 1U >> 1;
         uVar5 = uVar5 | uVar5 >> 2;
         uVar5 = uVar5 | uVar5 >> 4;
         uVar5 = uVar5 | uVar5 >> 8;
         uVar5 = uVar5 | uVar5 >> 0x10;
         lVar4 = ( uVar5 | uVar5 >> 0x20 ) + 1;
      }

   }

   if (param_1 * 0x30 == 0) {
      LAB_001148e0:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
      return 6;
   }

   uVar5 = param_1 * 0x30 - 1;
   uVar5 = uVar5 >> 1 | uVar5;
   uVar5 = uVar5 | uVar5 >> 2;
   uVar5 = uVar5 | uVar5 >> 4;
   uVar5 = uVar5 | uVar5 >> 8;
   uVar5 = uVar5 | uVar5 >> 0x10;
   uVar5 = uVar5 | uVar5 >> 0x20;
   lVar11 = uVar5 + 1;
   if (lVar11 == 0) goto LAB_001148e0;
   if (param_1 <= lVar12) {
      if (( lVar11 != lVar4 ) && ( uVar9 = _realloc(this, lVar11) ),(int)uVar9 != 0) {
         return uVar9;
      }

      if (*(long*)this != 0) {
         *(long*)( *(long*)this + -8 ) = param_1;
         return 0;
      }

      _DAT_00000000 = 0;
      /* WARNING: Does not return */
      pcVar2 = (code*)invalidInstructionException();
      ( *pcVar2 )();
   }

   if (lVar11 == lVar4) {
      LAB_0011484c:puVar10 = *(undefined8**)this;
      if (puVar10 == (undefined8*)0x0) {
         /* WARNING: Does not return */
         pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }

      lVar4 = puVar10[-1];
      if (param_1 <= lVar4) goto LAB_001147dd;
   }
 else {
      if (lVar12 != 0) {
         uVar9 = _realloc(this, lVar11);
         if ((int)uVar9 != 0) {
            return uVar9;
         }

         goto LAB_0011484c;
      }

      puVar6 = (undefined8*)Memory::alloc_static(uVar5 + 0x11, false);
      if (puVar6 == (undefined8*)0x0) {
         _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
         return 6;
      }

      puVar10 = puVar6 + 2;
      *puVar6 = 1;
      puVar6[1] = 0;
      *(undefined8**)this = puVar10;
      lVar4 = 0;
   }

   uVar3 = _LC1;
   pauVar7 = (undefined1(*) [16])( puVar10 + lVar4 * 6 );
   do {
      *(undefined8*)( (long)pauVar7[2] + 4 ) = 0;
      pauVar8 = pauVar7 + 3;
      *pauVar7 = ZEXT416(uVar3);
      pauVar7[1] = ZEXT416(uVar3);
      *(uint*)pauVar7[2] = uVar3;
      *(undefined4*)( (long)pauVar7[2] + 0xc ) = 0;
      pauVar7 = pauVar8;
   }
 while ( (undefined1(*) [16])( puVar10 + param_1 * 6 ) != pauVar8 );
   LAB_001147dd:puVar10[-1] = param_1;
   return 0;
}
/* WARNING: Removing unreachable block (ram,0x00114a10) *//* GPUParticles2D::_notificationv(int, bool) */void GPUParticles2D::_notificationv(GPUParticles2D *this, int param_1, bool param_2) {
   int iVar1;
   iVar1 = (int)this;
   if (param_2) {
      _notification(this, param_1);
      if ((code*)PTR__notification_00127038 != CanvasItem::_notification) {
         Node2D::_notification(iVar1);
      }

      CanvasItem::_notification(iVar1);
      Node::_notification(iVar1);
      return;
   }

   Node::_notification(iVar1);
   CanvasItem::_notification(iVar1);
   if ((code*)PTR__notification_00127038 != CanvasItem::_notification) {
      Node2D::_notification(iVar1);
   }

   _notification(this, param_1);
   return;
}
/* WARNING: Removing unreachable block (ram,0x00114c08) *//* WARNING: Removing unreachable block (ram,0x00114d9d) *//* WARNING: Removing unreachable block (ram,0x00114da9) *//* String vformat<StringName>(String const&, StringName const) */undefined8 *vformat<StringName>(undefined8 *param_1, bool *param_2, StringName *param_3) {
   Variant *this;
   int iVar1;
   long in_FS_OFFSET;
   Array local_c8[8];
   undefined8 local_c0[9];
   int local_78[6];
   undefined8 local_60;
   undefined1 local_58[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant((Variant*)local_78, param_3);
   local_60 = 0;
   local_58 = (undefined1[16])0x0;
   Array::Array(local_c8);
   iVar1 = (int)local_c8;
   Array::resize(iVar1);
   this(Variant * Array::operator [](iVar1));
   Variant::operator =(this, (Variant*)local_78);
   String::sprintf((Array*)local_c0, param_2);
   *param_1 = local_c0[0];
   Array::~Array(local_c8);
   if (Variant::needs_deinit[(int)local_60] != '\0') {
      Variant::_clear_internal();
   }

   if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* MethodBindTRC<unsigned int>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindTRC<unsigned_int>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
   undefined4 local_48[2];
   undefined8 local_40;
   undefined8 uStack_38;
   long local_30;
   Variant *pVVar3;
   plVar5 = (long*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (( ( plVar5 != (long*)0x0 ) && ( plVar5[1] != 0 ) ) && ( *(char*)( plVar5[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_58, (StringName*)( param_2 + 3 ));
      if (plVar5[1] == 0) {
         plVar4 = (long*)plVar5[0x23];
         if (plVar4 == (long*)0x0) {
            plVar4 = (long*)( **(code**)( *plVar5 + 0x40 ) )(plVar5);
         }

      }
 else {
         plVar4 = (long*)( plVar5[1] + 0x20 );
      }

      if (local_58 == (char*)*plVar4) {
         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_60 = 0;
         local_50 = 0x35;
         String::parse_latin1((StrRange*)&local_60);
         vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
         _err_print_error(&_LC62, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_00114fa0;
      }

      if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar3 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D == 0) {
      if (( param_2[5] == (Variant*)0x0 ) || ( -1 < *(int*)( param_2[5] + -8 ) )) {
         *in_R9 = 0;
         if (( (ulong)pVVar3 & 1 ) != 0) {
            pVVar3 = *(Variant**)( pVVar3 + *(long*)( (long)plVar5 + (long)pVVar1 ) + -1 );
         }

         uVar2 = ( *(code*)pVVar3 )();
         Variant::Variant((Variant*)local_48, uVar2);
         if (Variant::needs_deinit[*(int*)param_1] != '\0') {
            Variant::_clear_internal();
         }

         *(undefined4*)param_1 = local_48[0];
         *(undefined8*)( param_1 + 8 ) = local_40;
         *(undefined8*)( param_1 + 0x10 ) = uStack_38;
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

   LAB_00114fa0:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<unsigned int>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTRC<unsigned_int>::validated_call(MethodBindTRC<unsigned_int> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   uint uVar1;
   long *plVar3;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   code *pcVar2;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar3 = *(long**)( param_1 + 0x118 );
         if (plVar3 == (long*)0x0) {
            plVar3 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar3 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_48 == (char*)*plVar3) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x273, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00115244;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar2 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar2 & 1 ) != 0) {
      pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   uVar1 = ( *pcVar2 )(param_1 + *(long*)( this + 0x60 ));
   *(ulong*)( param_3 + 8 ) = (ulong)uVar1;
   LAB_00115244:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<unsigned int>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<unsigned_int>::ptrcall(MethodBindTRC<unsigned_int> *this, Object *param_1, void **param_2, void *param_3) {
   uint uVar1;
   long *plVar3;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   code *pcVar2;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar3 = *(long**)( param_1 + 0x118 );
         if (plVar3 == (long*)0x0) {
            plVar3 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar3 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_48 == (char*)*plVar3) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x27e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00115403;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar2 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar2 & 1 ) != 0) {
      pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   uVar1 = ( *pcVar2 )(param_1 + *(long*)( this + 0x60 ));
   *(ulong*)param_3 = (ulong)uVar1;
   LAB_00115403:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<unsigned int>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindT<unsigned_int>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
   code *UNRECOVERED_JUMPTABLE;
   Variant *pVVar1;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_2 != (Variant**)0x0 ) && ( param_2[1] != (Variant*)0x0 ) ) && ( param_2[1][0x2e] != (Variant)0x0 )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_1 + 0x18 ));
      if (param_2[1] == (Variant*)0x0) {
         pVVar1 = param_2[0x23];
         if (pVVar1 == (Variant*)0x0) {
            pVVar1 = (Variant*)( **(code**)( *param_2 + 0x40 ) )(param_2);
         }

      }
 else {
         pVVar1 = param_2[1] + 0x20;
      }

      if (local_48 == *(char**)pVVar1) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x160, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_00115741;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   UNRECOVERED_JUMPTABLE = *(code**)( param_1 + 0x58 );
   if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
      UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ) + -1 );
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Could not recover jumptable at 0x001155cc. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(undefined4*)( *(long*)param_3 + 8 ));
      return;
   }

   LAB_00115741:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<unsigned int>::ptrcall(Object*, void const**, void*) const */void MethodBindT<unsigned_int>::ptrcall(Object *param_1, void **param_2, void *param_3) {
   code *UNRECOVERED_JUMPTABLE;
   long *plVar1;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_2 != (void**)0x0 ) && ( param_2[1] != (void*)0x0 ) ) && ( *(char*)( (long)param_2[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_1 + 0x18 ));
      if (param_2[1] == (void*)0x0) {
         plVar1 = (long*)param_2[0x23];
         if (plVar1 == (long*)0x0) {
            plVar1 = (long*)( **(code**)( (long)*param_2 + 0x40 ) )(param_2);
         }

      }
 else {
         plVar1 = (long*)( (long)param_2[1] + 0x20 );
      }

      if (local_48 == (char*)*plVar1) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x16b, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_00115921;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   UNRECOVERED_JUMPTABLE = *(code**)( param_1 + 0x58 );
   /* WARNING: Load size is inaccurate */
   if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
      UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ) + -1 );
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Could not recover jumptable at 0x001157ab. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), **param_3);
      return;
   }

   LAB_00115921:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<Transform2D const&, Vector2 const&, Color const&, Color const&, unsigned
   int>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindT<Transform2D_const&,Vector2_const&,Color_const&,Color_const&,unsigned_int>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
   code *UNRECOVERED_JUMPTABLE;
   Variant *pVVar1;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_2 != (Variant**)0x0 ) && ( param_2[1] != (Variant*)0x0 ) ) && ( param_2[1][0x2e] != (Variant)0x0 )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_1 + 0x18 ));
      if (param_2[1] == (Variant*)0x0) {
         pVVar1 = param_2[0x23];
         if (pVVar1 == (Variant*)0x0) {
            pVVar1 = (Variant*)( **(code**)( *param_2 + 0x40 ) )(param_2);
         }

      }
 else {
         pVVar1 = param_2[1] + 0x20;
      }

      if (local_48 == *(char**)pVVar1) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x160, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_00115b07;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   UNRECOVERED_JUMPTABLE = *(code**)( param_1 + 0x58 );
   if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
      UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ) + -1 );
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Could not recover jumptable at 0x001159b3. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(undefined8*)( *(long*)param_3 + 8 ), *(long*)( param_3 + 8 ) + 8, *(long*)( param_3 + 0x10 ) + 8, *(long*)( param_3 + 0x18 ) + 8, *(undefined4*)( *(long*)( param_3 + 0x20 ) + 8 ));
      return;
   }

   LAB_00115b07:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<Transform2D const&, Vector2 const&, Color const&, Color const&, unsigned
   int>::ptrcall(Object*, void const**, void*) const */void MethodBindT<Transform2D_const&,Vector2_const&,Color_const&,Color_const&,unsigned_int>::ptrcall(Object *param_1, void **param_2, void *param_3) {
   code *UNRECOVERED_JUMPTABLE;
   long *plVar1;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_2 != (void**)0x0 ) && ( param_2[1] != (void*)0x0 ) ) && ( *(char*)( (long)param_2[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_1 + 0x18 ));
      if (param_2[1] == (void*)0x0) {
         plVar1 = (long*)param_2[0x23];
         if (plVar1 == (long*)0x0) {
            plVar1 = (long*)( **(code**)( (long)*param_2 + 0x40 ) )(param_2);
         }

      }
 else {
         plVar1 = (long*)( (long)param_2[1] + 0x20 );
      }

      if (local_48 == (char*)*plVar1) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x16b, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_00115cf9;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   UNRECOVERED_JUMPTABLE = *(code**)( param_1 + 0x58 );
   if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
      UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ) + -1 );
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Load size is inaccurate */
      /* WARNING: Could not recover jumptable at 0x00115b7f. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *param_3, *(undefined8*)( (long)param_3 + 8 ), *(undefined8*)( (long)param_3 + 0x10 ), *(undefined8*)( (long)param_3 + 0x18 ), **(undefined4**)( (long)param_3 + 0x20 ));
      return;
   }

   LAB_00115cf9:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindTRC<NodePath>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindTRC<NodePath>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
   undefined4 local_48[2];
   undefined8 local_40;
   undefined8 uStack_38;
   long local_30;
   plVar4 = (long*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (( ( plVar4 != (long*)0x0 ) && ( plVar4[1] != 0 ) ) && ( *(char*)( plVar4[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_58, (StringName*)( param_2 + 3 ));
      if (plVar4[1] == 0) {
         plVar3 = (long*)plVar4[0x23];
         if (plVar3 == (long*)0x0) {
            plVar3 = (long*)( **(code**)( *plVar4 + 0x40 ) )(plVar4);
         }

      }
 else {
         plVar3 = (long*)( plVar4[1] + 0x20 );
      }

      if (local_58 == (char*)*plVar3) {
         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_60 = 0;
         local_50 = 0x35;
         String::parse_latin1((StrRange*)&local_60);
         vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
         _err_print_error(&_LC62, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_00115dd0;
      }

      if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar2 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D == 0) {
      if (( param_2[5] == (Variant*)0x0 ) || ( -1 < *(int*)( param_2[5] + -8 ) )) {
         *in_R9 = 0;
         if (( (ulong)pVVar2 & 1 ) != 0) {
            pVVar2 = *(Variant**)( pVVar2 + *(long*)( (long)plVar4 + (long)pVVar1 ) + -1 );
         }

         ( *(code*)pVVar2 )((NodePath*)&local_58);
         Variant::Variant((Variant*)local_48, (NodePath*)&local_58);
         if (Variant::needs_deinit[*(int*)param_1] != '\0') {
            Variant::_clear_internal();
         }

         *(undefined4*)param_1 = local_48[0];
         *(undefined8*)( param_1 + 8 ) = local_40;
         *(undefined8*)( param_1 + 0x10 ) = uStack_38;
         NodePath::~NodePath((NodePath*)&local_58);
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

   LAB_00115dd0:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<NodePath>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTRC<NodePath>::validated_call(MethodBindTRC<NodePath> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   code *pcVar1;
   long *plVar2;
   Variant **extraout_RDX;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   Variant **local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar2 = *(long**)( param_1 + 0x118 );
         if (plVar2 == (long*)0x0) {
            plVar2 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar2 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_48 == (Variant**)*plVar2) {
         if (( StringName::configured != '\0' ) && ( local_48 != (Variant**)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = (Variant**)0x114df8;
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((NodePath*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x273, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (NodePath*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00115ff9;
      }

      param_2 = local_48;
      if (( StringName::configured != '\0' ) && ( local_48 != (Variant**)0x0 )) {
         StringName::unref();
         param_2 = extraout_RDX;
      }

   }

   pcVar1 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar1 & 1 ) != 0) {
      param_2 = *(Variant***)( param_1 + *(long*)( this + 0x60 ) );
      pcVar1 = *(code**)( pcVar1 + (long)param_2 + -1 );
   }

   ( *pcVar1 )((NodePath*)&local_48, param_1 + *(long*)( this + 0x60 ), param_2);
   NodePath::operator =((NodePath*)( param_3 + 8 ), (NodePath*)&local_48);
   NodePath::~NodePath((NodePath*)&local_48);
   LAB_00115ff9:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<NodePath>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<NodePath>::ptrcall(MethodBindTRC<NodePath> *this, Object *param_1, void **param_2, void *param_3) {
   code *pcVar1;
   long *plVar2;
   void **extraout_RDX;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   void **local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar2 = *(long**)( param_1 + 0x118 );
         if (plVar2 == (long*)0x0) {
            plVar2 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar2 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_48 == (void**)*plVar2) {
         if (( StringName::configured != '\0' ) && ( local_48 != (void**)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = (void**)0x114df8;
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((NodePath*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x27e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (NodePath*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_001161ca;
      }

      param_2 = local_48;
      if (( StringName::configured != '\0' ) && ( local_48 != (void**)0x0 )) {
         StringName::unref();
         param_2 = extraout_RDX;
      }

   }

   pcVar1 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar1 & 1 ) != 0) {
      param_2 = *(void***)( param_1 + *(long*)( this + 0x60 ) );
      pcVar1 = *(code**)( pcVar1 + (long)param_2 + -1 );
   }

   ( *pcVar1 )((NodePath*)&local_48, param_1 + *(long*)( this + 0x60 ), param_2);
   NodePath::operator =((NodePath*)param_3, (NodePath*)&local_48);
   NodePath::~NodePath((NodePath*)&local_48);
   LAB_001161ca:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<NodePath const&>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindT<NodePath_const&>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
   code *UNRECOVERED_JUMPTABLE;
   Variant *pVVar1;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_2 != (Variant**)0x0 ) && ( param_2[1] != (Variant*)0x0 ) ) && ( param_2[1][0x2e] != (Variant)0x0 )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_1 + 0x18 ));
      if (param_2[1] == (Variant*)0x0) {
         pVVar1 = param_2[0x23];
         if (pVVar1 == (Variant*)0x0) {
            pVVar1 = (Variant*)( **(code**)( *param_2 + 0x40 ) )(param_2);
         }

      }
 else {
         pVVar1 = param_2[1] + 0x20;
      }

      if (local_48 == *(char**)pVVar1) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x160, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_00116511;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   UNRECOVERED_JUMPTABLE = *(code**)( param_1 + 0x58 );
   if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
      UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ) + -1 );
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Could not recover jumptable at 0x0011639d. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(long*)param_3 + 8);
      return;
   }

   LAB_00116511:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<NodePath const&>::ptrcall(Object*, void const**, void*) const */void MethodBindT<NodePath_const&>::ptrcall(Object *param_1, void **param_2, void *param_3) {
   code *UNRECOVERED_JUMPTABLE;
   long *plVar1;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_2 != (void**)0x0 ) && ( param_2[1] != (void*)0x0 ) ) && ( *(char*)( (long)param_2[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_1 + 0x18 ));
      if (param_2[1] == (void*)0x0) {
         plVar1 = (long*)param_2[0x23];
         if (plVar1 == (long*)0x0) {
            plVar1 = (long*)( **(code**)( (long)*param_2 + 0x40 ) )(param_2);
         }

      }
 else {
         plVar1 = (long*)( (long)param_2[1] + 0x20 );
      }

      if (local_48 == (char*)*plVar1) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x16b, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_001166f1;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   UNRECOVERED_JUMPTABLE = *(code**)( param_1 + 0x58 );
   /* WARNING: Load size is inaccurate */
   if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
      UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ) + -1 );
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Could not recover jumptable at 0x00116579. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *param_3);
      return;
   }

   LAB_001166f1:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindTRC<GPUParticles2D::DrawOrder>::call(Object*, Variant const**, int,
   Callable::CallError&) const */Object *MethodBindTRC<GPUParticles2D::DrawOrder>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
   undefined4 local_48[2];
   undefined8 local_40;
   undefined8 uStack_38;
   long local_30;
   Variant *pVVar3;
   plVar5 = (long*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (( ( plVar5 != (long*)0x0 ) && ( plVar5[1] != 0 ) ) && ( *(char*)( plVar5[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_58, (StringName*)( param_2 + 3 ));
      if (plVar5[1] == 0) {
         plVar4 = (long*)plVar5[0x23];
         if (plVar4 == (long*)0x0) {
            plVar4 = (long*)( **(code**)( *plVar5 + 0x40 ) )(plVar5);
         }

      }
 else {
         plVar4 = (long*)( plVar5[1] + 0x20 );
      }

      if (local_58 == (char*)*plVar4) {
         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_60 = 0;
         local_50 = 0x35;
         String::parse_latin1((StrRange*)&local_60);
         vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
         _err_print_error(&_LC62, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_001167c0;
      }

      if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar3 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D == 0) {
      if (( param_2[5] == (Variant*)0x0 ) || ( -1 < *(int*)( param_2[5] + -8 ) )) {
         *in_R9 = 0;
         if (( (ulong)pVVar3 & 1 ) != 0) {
            pVVar3 = *(Variant**)( pVVar3 + *(long*)( (long)plVar5 + (long)pVVar1 ) + -1 );
         }

         iVar2 = ( *(code*)pVVar3 )();
         Variant::Variant((Variant*)local_48, iVar2);
         if (Variant::needs_deinit[*(int*)param_1] != '\0') {
            Variant::_clear_internal();
         }

         *(undefined4*)param_1 = local_48[0];
         *(undefined8*)( param_1 + 8 ) = local_40;
         *(undefined8*)( param_1 + 0x10 ) = uStack_38;
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

   LAB_001167c0:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<GPUParticles2D::DrawOrder>::validated_call(Object*, Variant const**, Variant*)
   const */void MethodBindTRC<GPUParticles2D::DrawOrder>::validated_call(MethodBindTRC<GPUParticles2D::DrawOrder> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   uint uVar1;
   long *plVar3;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   code *pcVar2;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar3 = *(long**)( param_1 + 0x118 );
         if (plVar3 == (long*)0x0) {
            plVar3 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar3 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_48 == (char*)*plVar3) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x273, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_001169d4;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar2 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar2 & 1 ) != 0) {
      pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   uVar1 = ( *pcVar2 )(param_1 + *(long*)( this + 0x60 ));
   *(ulong*)( param_3 + 8 ) = (ulong)uVar1;
   LAB_001169d4:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<GPUParticles2D::DrawOrder>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<GPUParticles2D::DrawOrder>::ptrcall(MethodBindTRC<GPUParticles2D::DrawOrder> *this, Object *param_1, void **param_2, void *param_3) {
   uint uVar1;
   long *plVar3;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   code *pcVar2;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar3 = *(long**)( param_1 + 0x118 );
         if (plVar3 == (long*)0x0) {
            plVar3 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar3 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_48 == (char*)*plVar3) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x27e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00116b83;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar2 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar2 & 1 ) != 0) {
      pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   uVar1 = ( *pcVar2 )(param_1 + *(long*)( this + 0x60 ));
   *(ulong*)param_3 = (ulong)uVar1;
   LAB_00116b83:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<GPUParticles2D::DrawOrder>::validated_call(Object*, Variant const**, Variant*) const
    */void MethodBindT<GPUParticles2D::DrawOrder>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
   code *UNRECOVERED_JUMPTABLE;
   Variant *pVVar1;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_2 != (Variant**)0x0 ) && ( param_2[1] != (Variant*)0x0 ) ) && ( param_2[1][0x2e] != (Variant)0x0 )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_1 + 0x18 ));
      if (param_2[1] == (Variant*)0x0) {
         pVVar1 = param_2[0x23];
         if (pVVar1 == (Variant*)0x0) {
            pVVar1 = (Variant*)( **(code**)( *param_2 + 0x40 ) )(param_2);
         }

      }
 else {
         pVVar1 = param_2[1] + 0x20;
      }

      if (local_48 == *(char**)pVVar1) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x160, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_00116ec1;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   UNRECOVERED_JUMPTABLE = *(code**)( param_1 + 0x58 );
   if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
      UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ) + -1 );
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Could not recover jumptable at 0x00116d4c. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(undefined4*)( *(long*)param_3 + 8 ));
      return;
   }

   LAB_00116ec1:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<GPUParticles2D::DrawOrder>::ptrcall(Object*, void const**, void*) const */void MethodBindT<GPUParticles2D::DrawOrder>::ptrcall(Object *param_1, void **param_2, void *param_3) {
   code *UNRECOVERED_JUMPTABLE;
   long *plVar1;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_2 != (void**)0x0 ) && ( param_2[1] != (void*)0x0 ) ) && ( *(char*)( (long)param_2[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_1 + 0x18 ));
      if (param_2[1] == (void*)0x0) {
         plVar1 = (long*)param_2[0x23];
         if (plVar1 == (long*)0x0) {
            plVar1 = (long*)( **(code**)( (long)*param_2 + 0x40 ) )(param_2);
         }

      }
 else {
         plVar1 = (long*)( (long)param_2[1] + 0x20 );
      }

      if (local_48 == (char*)*plVar1) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x16b, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_001170a1;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   UNRECOVERED_JUMPTABLE = *(code**)( param_1 + 0x58 );
   /* WARNING: Load size is inaccurate */
   if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
      UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ) + -1 );
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Could not recover jumptable at 0x00116f2b. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), **param_3);
      return;
   }

   LAB_001170a1:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindTRC<Ref<Material>>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindTRC<Ref<Material>>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
   undefined4 local_48[2];
   undefined8 local_40;
   undefined8 uStack_38;
   long local_30;
   plVar6 = (long*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (( ( plVar6 != (long*)0x0 ) && ( plVar6[1] != 0 ) ) && ( *(char*)( plVar6[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_58, (StringName*)( param_2 + 3 ));
      if (plVar6[1] == 0) {
         plVar5 = (long*)plVar6[0x23];
         if (plVar5 == (long*)0x0) {
            plVar5 = (long*)( **(code**)( *plVar6 + 0x40 ) )(plVar6);
         }

      }
 else {
         plVar5 = (long*)( plVar6[1] + 0x20 );
      }

      if (local_58 == (Object*)*plVar5) {
         if (( StringName::configured != '\0' ) && ( local_58 != (Object*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_58 = (Object*)0x114df8;
         local_60 = 0;
         local_50 = 0x35;
         String::parse_latin1((StrRange*)&local_60);
         vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
         _err_print_error(&_LC62, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_001171c0;
      }

      if (( StringName::configured != '\0' ) && ( local_58 != (Object*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar4 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D == 0) {
      if (( param_2[5] == (Variant*)0x0 ) || ( -1 < *(int*)( param_2[5] + -8 ) )) {
         *in_R9 = 0;
         if (( (ulong)pVVar4 & 1 ) != 0) {
            pVVar4 = *(Variant**)( pVVar4 + *(long*)( (long)plVar6 + (long)pVVar1 ) + -1 );
         }

         ( *(code*)pVVar4 )(&local_58);
         Variant::Variant((Variant*)local_48, local_58);
         if (Variant::needs_deinit[*(int*)param_1] != '\0') {
            Variant::_clear_internal();
         }

         *(undefined4*)param_1 = local_48[0];
         *(undefined8*)( param_1 + 8 ) = local_40;
         *(undefined8*)( param_1 + 0x10 ) = uStack_38;
         if (local_58 != (Object*)0x0) {
            cVar3 = RefCounted::unreference();
            pOVar2 = local_58;
            if (cVar3 != '\0') {
               cVar3 = predelete_handler(local_58);
               if (cVar3 != '\0') {
                  ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
                  Memory::free_static(pOVar2, false);
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

   LAB_001171c0:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Rect2>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindTRC<Rect2>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
   undefined8 local_58[2];
   undefined4 local_48[2];
   undefined8 local_40;
   undefined8 uStack_38;
   long local_30;
   plVar4 = (long*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (( ( plVar4 != (long*)0x0 ) && ( plVar4[1] != 0 ) ) && ( *(char*)( plVar4[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_68, (StringName*)( param_2 + 3 ));
      if (plVar4[1] == 0) {
         plVar3 = (long*)plVar4[0x23];
         if (plVar3 == (long*)0x0) {
            plVar3 = (long*)( **(code**)( *plVar4 + 0x40 ) )(plVar4);
         }

      }
 else {
         plVar3 = (long*)( plVar4[1] + 0x20 );
      }

      if (local_68 == (char*)*plVar3) {
         if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_70 = 0;
         local_60 = 0x35;
         String::parse_latin1((StrRange*)&local_70);
         vformat<StringName>((StringName*)&local_68, (StrRange*)&local_70, &local_78);
         _err_print_error(&_LC62, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_68, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
            StringName::unref();
         }

         goto LAB_00117460;
      }

      if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar2 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D == 0) {
      if (( param_2[5] == (Variant*)0x0 ) || ( -1 < *(int*)( param_2[5] + -8 ) )) {
         *in_R9 = 0;
         if (( (ulong)pVVar2 & 1 ) != 0) {
            pVVar2 = *(Variant**)( pVVar2 + *(long*)( (long)plVar4 + (long)pVVar1 ) + -1 );
         }

         local_58[0] = ( *(code*)pVVar2 )();
         Variant::Variant((Variant*)local_48, (Rect2*)local_58);
         if (Variant::needs_deinit[*(int*)param_1] != '\0') {
            Variant::_clear_internal();
         }

         *(undefined4*)param_1 = local_48[0];
         *(undefined8*)( param_1 + 8 ) = local_40;
         *(undefined8*)( param_1 + 0x10 ) = uStack_38;
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

   LAB_00117460:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Rect2>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTRC<Rect2>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
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
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_2 != (Variant**)0x0 ) && ( param_2[1] != (Variant*)0x0 ) ) && ( param_2[1][0x2e] != (Variant)0x0 )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_1 + 0x18 ));
      if (param_2[1] == (Variant*)0x0) {
         pVVar2 = param_2[0x23];
         if (pVVar2 == (Variant*)0x0) {
            pVVar2 = (Variant*)( **(code**)( *param_2 + 0x40 ) )(param_2);
         }

      }
 else {
         pVVar2 = param_2[1] + 0x20;
      }

      if (local_48 == *(char**)pVVar2) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x273, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_0011767b;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar1 = *(code**)( param_1 + 0x58 );
   if (( (ulong)pcVar1 & 1 ) != 0) {
      pcVar1 = *(code**)( pcVar1 + *(long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ) + -1 );
   }

   uVar3 = ( *pcVar1 )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ));
   *(undefined8*)( in_RCX + 8 ) = uVar3;
   *(undefined8*)( in_RCX + 0x10 ) = in_XMM1_Qa;
   LAB_0011767b:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Rect2>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<Rect2>::ptrcall(Object *param_1, void **param_2, void *param_3) {
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
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_2 != (void**)0x0 ) && ( param_2[1] != (void*)0x0 ) ) && ( *(char*)( (long)param_2[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_1 + 0x18 ));
      if (param_2[1] == (void*)0x0) {
         plVar2 = (long*)param_2[0x23];
         if (plVar2 == (long*)0x0) {
            plVar2 = (long*)( **(code**)( (long)*param_2 + 0x40 ) )(param_2);
         }

      }
 else {
         plVar2 = (long*)( (long)param_2[1] + 0x20 );
      }

      if (local_48 == (char*)*plVar2) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x27e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_0011783a;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar1 = *(code**)( param_1 + 0x58 );
   if (( (ulong)pcVar1 & 1 ) != 0) {
      pcVar1 = *(code**)( pcVar1 + *(long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ) + -1 );
   }

   uVar3 = ( *pcVar1 )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ));
   *in_RCX = uVar3;
   in_RCX[1] = in_XMM1_Qa;
   LAB_0011783a:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<float>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindTRC<float>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
   undefined4 local_48[2];
   undefined8 local_40;
   undefined8 uStack_38;
   long local_30;
   plVar4 = (long*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (( ( plVar4 != (long*)0x0 ) && ( plVar4[1] != 0 ) ) && ( *(char*)( plVar4[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_58, (StringName*)( param_2 + 3 ));
      if (plVar4[1] == 0) {
         plVar3 = (long*)plVar4[0x23];
         if (plVar3 == (long*)0x0) {
            plVar3 = (long*)( **(code**)( *plVar4 + 0x40 ) )(plVar4);
         }

      }
 else {
         plVar3 = (long*)( plVar4[1] + 0x20 );
      }

      if (local_58 == (char*)*plVar3) {
         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_60 = 0;
         local_50 = 0x35;
         String::parse_latin1((StrRange*)&local_60);
         vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
         _err_print_error(&_LC62, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_00117a70;
      }

      if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar2 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D == 0) {
      if (( param_2[5] == (Variant*)0x0 ) || ( -1 < *(int*)( param_2[5] + -8 ) )) {
         *in_R9 = 0;
         if (( (ulong)pVVar2 & 1 ) != 0) {
            pVVar2 = *(Variant**)( pVVar2 + *(long*)( (long)plVar4 + (long)pVVar1 ) + -1 );
         }

         fVar5 = (float)( *(code*)pVVar2 )();
         Variant::Variant((Variant*)local_48, fVar5);
         if (Variant::needs_deinit[*(int*)param_1] != '\0') {
            Variant::_clear_internal();
         }

         *(undefined4*)param_1 = local_48[0];
         *(undefined8*)( param_1 + 8 ) = local_40;
         *(undefined8*)( param_1 + 0x10 ) = uStack_38;
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

   LAB_00117a70:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<float>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTRC<float>::validated_call(MethodBindTRC<float> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   code *pcVar1;
   long *plVar2;
   long in_FS_OFFSET;
   float fVar3;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar2 = *(long**)( param_1 + 0x118 );
         if (plVar2 == (long*)0x0) {
            plVar2 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar2 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_48 == (char*)*plVar2) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x273, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00117c88;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar1 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar1 & 1 ) != 0) {
      pcVar1 = *(code**)( pcVar1 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   fVar3 = (float)( *pcVar1 )(param_1 + *(long*)( this + 0x60 ));
   *(double*)( param_3 + 8 ) = (double)fVar3;
   LAB_00117c88:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<float>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<float>::ptrcall(MethodBindTRC<float> *this, Object *param_1, void **param_2, void *param_3) {
   code *pcVar1;
   long *plVar2;
   long in_FS_OFFSET;
   float fVar3;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar2 = *(long**)( param_1 + 0x118 );
         if (plVar2 == (long*)0x0) {
            plVar2 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar2 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_48 == (char*)*plVar2) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x27e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00117e47;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar1 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar1 & 1 ) != 0) {
      pcVar1 = *(code**)( pcVar1 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   fVar3 = (float)( *pcVar1 )(param_1 + *(long*)( this + 0x60 ));
   *(double*)param_3 = (double)fVar3;
   LAB_00117e47:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<double>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindTRC<double>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
   undefined4 local_48[2];
   undefined8 local_40;
   undefined8 uStack_38;
   long local_30;
   plVar4 = (long*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (( ( plVar4 != (long*)0x0 ) && ( plVar4[1] != 0 ) ) && ( *(char*)( plVar4[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_58, (StringName*)( param_2 + 3 ));
      if (plVar4[1] == 0) {
         plVar3 = (long*)plVar4[0x23];
         if (plVar3 == (long*)0x0) {
            plVar3 = (long*)( **(code**)( *plVar4 + 0x40 ) )(plVar4);
         }

      }
 else {
         plVar3 = (long*)( plVar4[1] + 0x20 );
      }

      if (local_58 == (char*)*plVar3) {
         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_60 = 0;
         local_50 = 0x35;
         String::parse_latin1((StrRange*)&local_60);
         vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
         _err_print_error(&_LC62, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_00118080;
      }

      if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar2 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D == 0) {
      if (( param_2[5] == (Variant*)0x0 ) || ( -1 < *(int*)( param_2[5] + -8 ) )) {
         *in_R9 = 0;
         if (( (ulong)pVVar2 & 1 ) != 0) {
            pVVar2 = *(Variant**)( pVVar2 + *(long*)( (long)plVar4 + (long)pVVar1 ) + -1 );
         }

         dVar5 = (double)( *(code*)pVVar2 )();
         Variant::Variant((Variant*)local_48, dVar5);
         if (Variant::needs_deinit[*(int*)param_1] != '\0') {
            Variant::_clear_internal();
         }

         *(undefined4*)param_1 = local_48[0];
         *(undefined8*)( param_1 + 8 ) = local_40;
         *(undefined8*)( param_1 + 0x10 ) = uStack_38;
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

   LAB_00118080:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<double>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTRC<double>::validated_call(MethodBindTRC<double> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   code *pcVar1;
   long *plVar2;
   long in_FS_OFFSET;
   undefined8 uVar3;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar2 = *(long**)( param_1 + 0x118 );
         if (plVar2 == (long*)0x0) {
            plVar2 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar2 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_48 == (char*)*plVar2) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x273, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00118294;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar1 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar1 & 1 ) != 0) {
      pcVar1 = *(code**)( pcVar1 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   uVar3 = ( *pcVar1 )(param_1 + *(long*)( this + 0x60 ));
   *(undefined8*)( param_3 + 8 ) = uVar3;
   LAB_00118294:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<double>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<double>::ptrcall(MethodBindTRC<double> *this, Object *param_1, void **param_2, void *param_3) {
   code *pcVar1;
   long *plVar2;
   long in_FS_OFFSET;
   undefined8 uVar3;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar2 = *(long**)( param_1 + 0x118 );
         if (plVar2 == (long*)0x0) {
            plVar2 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar2 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_48 == (char*)*plVar2) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x27e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00118443;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar1 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar1 & 1 ) != 0) {
      pcVar1 = *(code**)( pcVar1 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   uVar3 = ( *pcVar1 )(param_1 + *(long*)( this + 0x60 ));
   *(undefined8*)param_3 = uVar3;
   LAB_00118443:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<int>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindTRC<int>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
   undefined4 local_48[2];
   undefined8 local_40;
   undefined8 uStack_38;
   long local_30;
   Variant *pVVar3;
   plVar5 = (long*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (( ( plVar5 != (long*)0x0 ) && ( plVar5[1] != 0 ) ) && ( *(char*)( plVar5[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_58, (StringName*)( param_2 + 3 ));
      if (plVar5[1] == 0) {
         plVar4 = (long*)plVar5[0x23];
         if (plVar4 == (long*)0x0) {
            plVar4 = (long*)( **(code**)( *plVar5 + 0x40 ) )(plVar5);
         }

      }
 else {
         plVar4 = (long*)( plVar5[1] + 0x20 );
      }

      if (local_58 == (char*)*plVar4) {
         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_60 = 0;
         local_50 = 0x35;
         String::parse_latin1((StrRange*)&local_60);
         vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
         _err_print_error(&_LC62, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_00118670;
      }

      if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar3 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D == 0) {
      if (( param_2[5] == (Variant*)0x0 ) || ( -1 < *(int*)( param_2[5] + -8 ) )) {
         *in_R9 = 0;
         if (( (ulong)pVVar3 & 1 ) != 0) {
            pVVar3 = *(Variant**)( pVVar3 + *(long*)( (long)plVar5 + (long)pVVar1 ) + -1 );
         }

         iVar2 = ( *(code*)pVVar3 )();
         Variant::Variant((Variant*)local_48, iVar2);
         if (Variant::needs_deinit[*(int*)param_1] != '\0') {
            Variant::_clear_internal();
         }

         *(undefined4*)param_1 = local_48[0];
         *(undefined8*)( param_1 + 8 ) = local_40;
         *(undefined8*)( param_1 + 0x10 ) = uStack_38;
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

   LAB_00118670:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<int>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTRC<int>::validated_call(MethodBindTRC<int> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   int iVar1;
   long *plVar3;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   code *pcVar2;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar3 = *(long**)( param_1 + 0x118 );
         if (plVar3 == (long*)0x0) {
            plVar3 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar3 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_48 == (char*)*plVar3) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x273, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00118884;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar2 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar2 & 1 ) != 0) {
      pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   iVar1 = ( *pcVar2 )(param_1 + *(long*)( this + 0x60 ));
   *(long*)( param_3 + 8 ) = (long)iVar1;
   LAB_00118884:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<int>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<int>::ptrcall(MethodBindTRC<int> *this, Object *param_1, void **param_2, void *param_3) {
   int iVar1;
   long *plVar3;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   code *pcVar2;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar3 = *(long**)( param_1 + 0x118 );
         if (plVar3 == (long*)0x0) {
            plVar3 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar3 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_48 == (char*)*plVar3) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x27e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00118a33;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar2 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar2 & 1 ) != 0) {
      pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   iVar1 = ( *pcVar2 )(param_1 + *(long*)( this + 0x60 ));
   *(long*)param_3 = (long)iVar1;
   LAB_00118a33:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<bool>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindTRC<bool>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
   undefined4 local_48[2];
   undefined8 local_40;
   undefined8 uStack_38;
   long local_30;
   Variant *pVVar3;
   plVar5 = (long*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (( ( plVar5 != (long*)0x0 ) && ( plVar5[1] != 0 ) ) && ( *(char*)( plVar5[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_58, (StringName*)( param_2 + 3 ));
      if (plVar5[1] == 0) {
         plVar4 = (long*)plVar5[0x23];
         if (plVar4 == (long*)0x0) {
            plVar4 = (long*)( **(code**)( *plVar5 + 0x40 ) )(plVar5);
         }

      }
 else {
         plVar4 = (long*)( plVar5[1] + 0x20 );
      }

      if (local_58 == (char*)*plVar4) {
         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_60 = 0;
         local_50 = 0x35;
         String::parse_latin1((StrRange*)&local_60);
         vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
         _err_print_error(&_LC62, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_00118c60;
      }

      if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar3 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D == 0) {
      if (( param_2[5] == (Variant*)0x0 ) || ( -1 < *(int*)( param_2[5] + -8 ) )) {
         *in_R9 = 0;
         if (( (ulong)pVVar3 & 1 ) != 0) {
            pVVar3 = *(Variant**)( pVVar3 + *(long*)( (long)plVar5 + (long)pVVar1 ) + -1 );
         }

         bVar2 = (bool)( *(code*)pVVar3 )();
         Variant::Variant((Variant*)local_48, bVar2);
         if (Variant::needs_deinit[*(int*)param_1] != '\0') {
            Variant::_clear_internal();
         }

         *(undefined4*)param_1 = local_48[0];
         *(undefined8*)( param_1 + 8 ) = local_40;
         *(undefined8*)( param_1 + 0x10 ) = uStack_38;
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

   LAB_00118c60:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<bool>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTRC<bool>::validated_call(MethodBindTRC<bool> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   Variant VVar1;
   long *plVar3;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   code *pcVar2;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar3 = *(long**)( param_1 + 0x118 );
         if (plVar3 == (long*)0x0) {
            plVar3 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar3 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_48 == (char*)*plVar3) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x273, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00118e72;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar2 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar2 & 1 ) != 0) {
      pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   VVar1 = ( Variant )(*pcVar2)(param_1 + *(long*)( this + 0x60 ));
   param_3[8] = VVar1;
   LAB_00118e72:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<bool>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<bool>::ptrcall(MethodBindTRC<bool> *this, Object *param_1, void **param_2, void *param_3) {
   undefined1 uVar1;
   long *plVar3;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   code *pcVar2;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar3 = *(long**)( param_1 + 0x118 );
         if (plVar3 == (long*)0x0) {
            plVar3 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar3 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_48 == (char*)*plVar3) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x27e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00119021;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar2 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar2 & 1 ) != 0) {
      pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   uVar1 = ( *pcVar2 )(param_1 + *(long*)( this + 0x60 ));
   *(undefined1*)param_3 = uVar1;
   LAB_00119021:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<Rect2 const&>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindT<Rect2_const&>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
   code *UNRECOVERED_JUMPTABLE;
   Variant *pVVar1;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_2 != (Variant**)0x0 ) && ( param_2[1] != (Variant*)0x0 ) ) && ( param_2[1][0x2e] != (Variant)0x0 )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_1 + 0x18 ));
      if (param_2[1] == (Variant*)0x0) {
         pVVar1 = param_2[0x23];
         if (pVVar1 == (Variant*)0x0) {
            pVVar1 = (Variant*)( **(code**)( *param_2 + 0x40 ) )(param_2);
         }

      }
 else {
         pVVar1 = param_2[1] + 0x20;
      }

      if (local_48 == *(char**)pVVar1) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x160, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_00119361;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   UNRECOVERED_JUMPTABLE = *(code**)( param_1 + 0x58 );
   if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
      UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ) + -1 );
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Could not recover jumptable at 0x001191ed. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(long*)param_3 + 8);
      return;
   }

   LAB_00119361:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<Rect2 const&>::ptrcall(Object*, void const**, void*) const */void MethodBindT<Rect2_const&>::ptrcall(Object *param_1, void **param_2, void *param_3) {
   code *UNRECOVERED_JUMPTABLE;
   long *plVar1;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_2 != (void**)0x0 ) && ( param_2[1] != (void*)0x0 ) ) && ( *(char*)( (long)param_2[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_1 + 0x18 ));
      if (param_2[1] == (void*)0x0) {
         plVar1 = (long*)param_2[0x23];
         if (plVar1 == (long*)0x0) {
            plVar1 = (long*)( **(code**)( (long)*param_2 + 0x40 ) )(param_2);
         }

      }
 else {
         plVar1 = (long*)( (long)param_2[1] + 0x20 );
      }

      if (local_48 == (char*)*plVar1) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x16b, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_00119541;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   UNRECOVERED_JUMPTABLE = *(code**)( param_1 + 0x58 );
   /* WARNING: Load size is inaccurate */
   if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
      UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ) + -1 );
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Could not recover jumptable at 0x001193c9. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *param_3);
      return;
   }

   LAB_00119541:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<float>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindT<float>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
   code *UNRECOVERED_JUMPTABLE;
   Variant *pVVar1;
   long in_FS_OFFSET;
   undefined1 auVar2[16];
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_2 != (Variant**)0x0 ) && ( param_2[1] != (Variant*)0x0 ) ) && ( param_2[1][0x2e] != (Variant)0x0 )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_1 + 0x18 ));
      if (param_2[1] == (Variant*)0x0) {
         pVVar1 = param_2[0x23];
         if (pVVar1 == (Variant*)0x0) {
            pVVar1 = (Variant*)( **(code**)( *param_2 + 0x40 ) )(param_2);
         }

      }
 else {
         pVVar1 = param_2[1] + 0x20;
      }

      if (local_48 == *(char**)pVVar1) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x160, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_00119729;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   UNRECOVERED_JUMPTABLE = *(code**)( param_1 + 0x58 );
   if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
      UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ) + -1 );
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      auVar2._4_12_ = SUB1612((undefined1[16])0x0, 4);
      auVar2._0_4_ = (float)*(double*)( *(long*)param_3 + 8 );
      /* WARNING: Could not recover jumptable at 0x001195b2. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )(auVar2._0_8_, (long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ));
      return;
   }

   LAB_00119729:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<float>::ptrcall(Object*, void const**, void*) const */void MethodBindT<float>::ptrcall(Object *param_1, void **param_2, void *param_3) {
   code *UNRECOVERED_JUMPTABLE;
   long *plVar1;
   long in_FS_OFFSET;
   undefined1 auVar2[16];
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_2 != (void**)0x0 ) && ( param_2[1] != (void*)0x0 ) ) && ( *(char*)( (long)param_2[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_1 + 0x18 ));
      if (param_2[1] == (void*)0x0) {
         plVar1 = (long*)param_2[0x23];
         if (plVar1 == (long*)0x0) {
            plVar1 = (long*)( **(code**)( (long)*param_2 + 0x40 ) )(param_2);
         }

      }
 else {
         plVar1 = (long*)( (long)param_2[1] + 0x20 );
      }

      if (local_48 == (char*)*plVar1) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x16b, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_00119909;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   UNRECOVERED_JUMPTABLE = *(code**)( param_1 + 0x58 );
   /* WARNING: Load size is inaccurate */
   if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
      UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ) + -1 );
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      auVar2._4_12_ = SUB1612((undefined1[16])0x0, 4);
      auVar2._0_4_ = (float)**param_3;
      /* WARNING: Could not recover jumptable at 0x00119791. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )(auVar2._0_8_, (long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ));
      return;
   }

   LAB_00119909:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<double>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindT<double>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
   code *UNRECOVERED_JUMPTABLE;
   Variant *pVVar1;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_2 != (Variant**)0x0 ) && ( param_2[1] != (Variant*)0x0 ) ) && ( param_2[1][0x2e] != (Variant)0x0 )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_1 + 0x18 ));
      if (param_2[1] == (Variant*)0x0) {
         pVVar1 = param_2[0x23];
         if (pVVar1 == (Variant*)0x0) {
            pVVar1 = (Variant*)( **(code**)( *param_2 + 0x40 ) )(param_2);
         }

      }
 else {
         pVVar1 = param_2[1] + 0x20;
      }

      if (local_48 == *(char**)pVVar1) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x160, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_00119ae1;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   UNRECOVERED_JUMPTABLE = *(code**)( param_1 + 0x58 );
   if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
      UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ) + -1 );
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Could not recover jumptable at 0x0011996e. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )(*(undefined8*)( *(long*)param_3 + 8 ), (long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ));
      return;
   }

   LAB_00119ae1:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<double>::ptrcall(Object*, void const**, void*) const */void MethodBindT<double>::ptrcall(Object *param_1, void **param_2, void *param_3) {
   code *UNRECOVERED_JUMPTABLE;
   long *plVar1;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_2 != (void**)0x0 ) && ( param_2[1] != (void*)0x0 ) ) && ( *(char*)( (long)param_2[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_1 + 0x18 ));
      if (param_2[1] == (void*)0x0) {
         plVar1 = (long*)param_2[0x23];
         if (plVar1 == (long*)0x0) {
            plVar1 = (long*)( **(code**)( (long)*param_2 + 0x40 ) )(param_2);
         }

      }
 else {
         plVar1 = (long*)( (long)param_2[1] + 0x20 );
      }

      if (local_48 == (char*)*plVar1) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x16b, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_00119cc1;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   UNRECOVERED_JUMPTABLE = *(code**)( param_1 + 0x58 );
   /* WARNING: Load size is inaccurate */
   if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
      UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ) + -1 );
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Could not recover jumptable at 0x00119b4d. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )(**param_3, (long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ));
      return;
   }

   LAB_00119cc1:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<int>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindT<int>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
   code *UNRECOVERED_JUMPTABLE;
   Variant *pVVar1;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_2 != (Variant**)0x0 ) && ( param_2[1] != (Variant*)0x0 ) ) && ( param_2[1][0x2e] != (Variant)0x0 )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_1 + 0x18 ));
      if (param_2[1] == (Variant*)0x0) {
         pVVar1 = param_2[0x23];
         if (pVVar1 == (Variant*)0x0) {
            pVVar1 = (Variant*)( **(code**)( *param_2 + 0x40 ) )(param_2);
         }

      }
 else {
         pVVar1 = param_2[1] + 0x20;
      }

      if (local_48 == *(char**)pVVar1) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x160, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_00119ea1;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   UNRECOVERED_JUMPTABLE = *(code**)( param_1 + 0x58 );
   if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
      UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ) + -1 );
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Could not recover jumptable at 0x00119d2c. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(undefined4*)( *(long*)param_3 + 8 ));
      return;
   }

   LAB_00119ea1:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<int>::ptrcall(Object*, void const**, void*) const */void MethodBindT<int>::ptrcall(Object *param_1, void **param_2, void *param_3) {
   code *UNRECOVERED_JUMPTABLE;
   long *plVar1;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_2 != (void**)0x0 ) && ( param_2[1] != (void*)0x0 ) ) && ( *(char*)( (long)param_2[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_1 + 0x18 ));
      if (param_2[1] == (void*)0x0) {
         plVar1 = (long*)param_2[0x23];
         if (plVar1 == (long*)0x0) {
            plVar1 = (long*)( **(code**)( (long)*param_2 + 0x40 ) )(param_2);
         }

      }
 else {
         plVar1 = (long*)( (long)param_2[1] + 0x20 );
      }

      if (local_48 == (char*)*plVar1) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x16b, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_0011a081;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   UNRECOVERED_JUMPTABLE = *(code**)( param_1 + 0x58 );
   /* WARNING: Load size is inaccurate */
   if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
      UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ) + -1 );
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Could not recover jumptable at 0x00119f0b. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), **param_3);
      return;
   }

   LAB_0011a081:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<bool>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindT<bool>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
   code *UNRECOVERED_JUMPTABLE;
   Variant *pVVar1;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_2 != (Variant**)0x0 ) && ( param_2[1] != (Variant*)0x0 ) ) && ( param_2[1][0x2e] != (Variant)0x0 )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_1 + 0x18 ));
      if (param_2[1] == (Variant*)0x0) {
         pVVar1 = param_2[0x23];
         if (pVVar1 == (Variant*)0x0) {
            pVVar1 = (Variant*)( **(code**)( *param_2 + 0x40 ) )(param_2);
         }

      }
 else {
         pVVar1 = param_2[1] + 0x20;
      }

      if (local_48 == *(char**)pVVar1) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x160, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_0011a261;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   UNRECOVERED_JUMPTABLE = *(code**)( param_1 + 0x58 );
   if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
      UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ) + -1 );
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Could not recover jumptable at 0x0011a0ed. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(undefined1*)( *(long*)param_3 + 8 ));
      return;
   }

   LAB_0011a261:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<bool>::ptrcall(Object*, void const**, void*) const */void MethodBindT<bool>::ptrcall(Object *param_1, void **param_2, void *param_3) {
   code *UNRECOVERED_JUMPTABLE;
   long *plVar1;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_2 != (void**)0x0 ) && ( param_2[1] != (void*)0x0 ) ) && ( *(char*)( (long)param_2[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_1 + 0x18 ));
      if (param_2[1] == (void*)0x0) {
         plVar1 = (long*)param_2[0x23];
         if (plVar1 == (long*)0x0) {
            plVar1 = (long*)( **(code**)( (long)*param_2 + 0x40 ) )(param_2);
         }

      }
 else {
         plVar1 = (long*)( (long)param_2[1] + 0x20 );
      }

      if (local_48 == (char*)*plVar1) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x16b, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_0011a449;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   UNRECOVERED_JUMPTABLE = *(code**)( param_1 + 0x58 );
   /* WARNING: Load size is inaccurate */
   if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
      UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ) + -1 );
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Could not recover jumptable at 0x0011a2d2. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), **param_3 != '\0');
      return;
   }

   LAB_0011a449:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindT<>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
   plVar4 = (long*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( plVar4 != (long*)0x0 ) && ( plVar4[1] != 0 ) ) && ( *(char*)( plVar4[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_2 + 3 ));
      if (plVar4[1] == 0) {
         plVar3 = (long*)plVar4[0x23];
         if (plVar3 == (long*)0x0) {
            plVar3 = (long*)( **(code**)( *plVar4 + 0x40 ) )(plVar4);
         }

      }
 else {
         plVar3 = (long*)( plVar4[1] + 0x20 );
      }

      if (local_48 == (char*)*plVar3) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error(&_LC62, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_0011a570;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar2 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D == 0) {
      if (( param_2[5] == (Variant*)0x0 ) || ( -1 < *(int*)( param_2[5] + -8 ) )) {
         *in_R9 = 0;
         if (( (ulong)pVVar2 & 1 ) != 0) {
            pVVar2 = *(Variant**)( pVVar2 + *(long*)( (long)plVar4 + (long)pVVar1 ) + -1 );
         }

         ( *(code*)pVVar2 )();
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

   LAB_0011a570:*(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindT<>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
   code *UNRECOVERED_JUMPTABLE;
   Variant *pVVar1;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_2 != (Variant**)0x0 ) && ( param_2[1] != (Variant*)0x0 ) ) && ( param_2[1][0x2e] != (Variant)0x0 )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_1 + 0x18 ));
      if (param_2[1] == (Variant*)0x0) {
         pVVar1 = param_2[0x23];
         if (pVVar1 == (Variant*)0x0) {
            pVVar1 = (Variant*)( **(code**)( *param_2 + 0x40 ) )(param_2);
         }

      }
 else {
         pVVar1 = param_2[1] + 0x20;
      }

      if (local_48 == *(char**)pVVar1) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x160, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_0011a8ef;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   UNRECOVERED_JUMPTABLE = *(code**)( param_1 + 0x58 );
   if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
      UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ) + -1 );
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Could not recover jumptable at 0x0011a796. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ));
      return;
   }

   LAB_0011a8ef:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<>::ptrcall(Object*, void const**, void*) const */void MethodBindT<>::ptrcall(Object *param_1, void **param_2, void *param_3) {
   code *UNRECOVERED_JUMPTABLE;
   long *plVar1;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_2 != (void**)0x0 ) && ( param_2[1] != (void*)0x0 ) ) && ( *(char*)( (long)param_2[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_1 + 0x18 ));
      if (param_2[1] == (void*)0x0) {
         plVar1 = (long*)param_2[0x23];
         if (plVar1 == (long*)0x0) {
            plVar1 = (long*)( **(code**)( (long)*param_2 + 0x40 ) )(param_2);
         }

      }
 else {
         plVar1 = (long*)( (long)param_2[1] + 0x20 );
      }

      if (local_48 == (char*)*plVar1) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x16b, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_0011aaaf;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   UNRECOVERED_JUMPTABLE = *(code**)( param_1 + 0x58 );
   if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
      UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ) + -1 );
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Could not recover jumptable at 0x0011a956. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ));
      return;
   }

   LAB_0011aaaf:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<Node*>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindT<Node*>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
   code *UNRECOVERED_JUMPTABLE;
   Variant *pVVar1;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_2 != (Variant**)0x0 ) && ( param_2[1] != (Variant*)0x0 ) ) && ( param_2[1][0x2e] != (Variant)0x0 )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_1 + 0x18 ));
      if (param_2[1] == (Variant*)0x0) {
         pVVar1 = param_2[0x23];
         if (pVVar1 == (Variant*)0x0) {
            pVVar1 = (Variant*)( **(code**)( *param_2 + 0x40 ) )(param_2);
         }

      }
 else {
         pVVar1 = param_2[1] + 0x20;
      }

      if (local_48 == *(char**)pVVar1) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x160, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_0011ac91;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   UNRECOVERED_JUMPTABLE = *(code**)( param_1 + 0x58 );
   if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
      UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ) + -1 );
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Could not recover jumptable at 0x0011ab1d. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(undefined8*)( *(long*)param_3 + 0x10 ));
      return;
   }

   LAB_0011ac91:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<Node*>::ptrcall(Object*, void const**, void*) const */void MethodBindT<Node*>::ptrcall(Object *param_1, void **param_2, void *param_3) {
   code *UNRECOVERED_JUMPTABLE;
   long *plVar1;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_2 != (void**)0x0 ) && ( param_2[1] != (void*)0x0 ) ) && ( *(char*)( (long)param_2[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_1 + 0x18 ));
      if (param_2[1] == (void*)0x0) {
         plVar1 = (long*)param_2[0x23];
         if (plVar1 == (long*)0x0) {
            plVar1 = (long*)( **(code**)( (long)*param_2 + 0x40 ) )(param_2);
         }

      }
 else {
         plVar1 = (long*)( (long)param_2[1] + 0x20 );
      }

      if (local_48 == (char*)*plVar1) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x16b, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_0011ae79;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   UNRECOVERED_JUMPTABLE = *(code**)( param_1 + 0x58 );
   /* WARNING: Load size is inaccurate */
   plVar1 = *param_3;
   if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
      UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ) + -1 );
   }

   if (plVar1 != (long*)0x0) {
      plVar1 = (long*)*plVar1;
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Could not recover jumptable at 0x0011ad01. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), plVar1);
      return;
   }

   LAB_0011ae79:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindTRC<Ref<Texture2D>>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindTRC<Ref<Texture2D>>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
   undefined4 local_48[2];
   undefined8 local_40;
   undefined8 uStack_38;
   long local_30;
   plVar6 = (long*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (( ( plVar6 != (long*)0x0 ) && ( plVar6[1] != 0 ) ) && ( *(char*)( plVar6[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_58, (StringName*)( param_2 + 3 ));
      if (plVar6[1] == 0) {
         plVar5 = (long*)plVar6[0x23];
         if (plVar5 == (long*)0x0) {
            plVar5 = (long*)( **(code**)( *plVar6 + 0x40 ) )(plVar6);
         }

      }
 else {
         plVar5 = (long*)( plVar6[1] + 0x20 );
      }

      if (local_58 == (Object*)*plVar5) {
         if (( StringName::configured != '\0' ) && ( local_58 != (Object*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_58 = (Object*)0x114df8;
         local_60 = 0;
         local_50 = 0x35;
         String::parse_latin1((StrRange*)&local_60);
         vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
         _err_print_error(&_LC62, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_0011af90;
      }

      if (( StringName::configured != '\0' ) && ( local_58 != (Object*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar4 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D == 0) {
      if (( param_2[5] == (Variant*)0x0 ) || ( -1 < *(int*)( param_2[5] + -8 ) )) {
         *in_R9 = 0;
         if (( (ulong)pVVar4 & 1 ) != 0) {
            pVVar4 = *(Variant**)( pVVar4 + *(long*)( (long)plVar6 + (long)pVVar1 ) + -1 );
         }

         ( *(code*)pVVar4 )(&local_58);
         Variant::Variant((Variant*)local_48, local_58);
         if (Variant::needs_deinit[*(int*)param_1] != '\0') {
            Variant::_clear_internal();
         }

         *(undefined4*)param_1 = local_48[0];
         *(undefined8*)( param_1 + 8 ) = local_40;
         *(undefined8*)( param_1 + 0x10 ) = uStack_38;
         if (local_58 != (Object*)0x0) {
            cVar3 = RefCounted::unreference();
            pOVar2 = local_58;
            if (cVar3 != '\0') {
               cVar3 = predelete_handler(local_58);
               if (cVar3 != '\0') {
                  ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
                  Memory::free_static(pOVar2, false);
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

   LAB_0011af90:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Ref<Texture2D>>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<Ref<Texture2D>>::ptrcall(MethodBindTRC<Ref<Texture2D>> *this, Object *param_1, void **param_2, void *param_3) {
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
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar4 = *(long**)( param_1 + 0x118 );
         if (plVar4 == (long*)0x0) {
            plVar4 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar4 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_48 == (Object*)*plVar4) {
         if (( StringName::configured != '\0' ) && ( local_48 != (Object*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = (Object*)0x114df8;
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x27e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_0011b216;
      }

      param_2 = (void**)local_48;
      if (( StringName::configured != '\0' ) && ( local_48 != (Object*)0x0 )) {
         StringName::unref();
         param_2 = (void**)extraout_RDX;
      }

   }

   pcVar2 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar2 & 1 ) != 0) {
      param_2 = *(void***)( param_1 + *(long*)( this + 0x60 ) );
      pcVar2 = *(code**)( (Object*)( (long)param_2 + -1 ) + (long)pcVar2 );
   }

   ( *pcVar2 )((StringName*)&local_48, param_1 + *(long*)( this + 0x60 ), param_2);
   if (local_48 == (Object*)0x0) {
      /* WARNING: Load size is inaccurate */
      pOVar5 = *param_3;
      if (pOVar5 == (Object*)0x0) goto LAB_0011b216;
      *(undefined8*)param_3 = 0;
      goto LAB_0011b259;
   }

   pOVar3 = (Object*)__dynamic_cast(local_48, &Object::typeinfo, &RefCounted::typeinfo, 0);
   /* WARNING: Load size is inaccurate */
   pOVar5 = *param_3;
   if (pOVar5 != pOVar3) {
      *(Object**)param_3 = pOVar3;
      if (pOVar3 == (Object*)0x0) {
         if (pOVar5 != (Object*)0x0) goto LAB_0011b259;
      }
 else {
         cVar1 = RefCounted::reference();
         if (cVar1 == '\0') {
            *(undefined8*)param_3 = 0;
         }

         if (pOVar5 != (Object*)0x0) {
            LAB_0011b259:cVar1 = RefCounted::unreference();
            if (cVar1 != '\0') {
               cVar1 = predelete_handler(pOVar5);
               if (cVar1 != '\0') {
                  ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
                  Memory::free_static(pOVar5, false);
               }

            }

         }

         if (local_48 == (Object*)0x0) goto LAB_0011b216;
      }

   }

   cVar1 = RefCounted::unreference();
   pOVar5 = local_48;
   if (cVar1 != '\0') {
      cVar1 = predelete_handler(local_48);
      if (cVar1 != '\0') {
         ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
         Memory::free_static(pOVar5, false);
      }

   }

   LAB_0011b216:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<Ref<Texture2D> const&>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindT<Ref<Texture2D>const&>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
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
   int local_48[6];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_2 != (Variant**)0x0 ) && ( param_2[1] != (Variant*)0x0 ) ) && ( param_2[1][0x2e] != (Variant)0x0 )) {
      StringName::StringName((StringName*)&local_58, (StringName*)( param_1 + 0x18 ));
      if (param_2[1] == (Variant*)0x0) {
         pVVar5 = param_2[0x23];
         if (pVVar5 == (Variant*)0x0) {
            pVVar5 = (Variant*)( **(code**)( *param_2 + 0x40 ) )(param_2);
         }

      }
 else {
         pVVar5 = param_2[1] + 0x20;
      }

      if (local_58 == (Object*)*(long*)pVVar5) {
         if (( StringName::configured != '\0' ) && ( local_58 != (Object*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_58 = (Object*)0x114df8;
         local_60 = 0;
         local_50 = 0x35;
         String::parse_latin1((StrRange*)&local_60);
         vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x160, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_0011b518;
      }

      if (( StringName::configured != '\0' ) && ( local_58 != (Object*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar6 = *(code**)( param_1 + 0x58 );
   lVar1 = *(long*)( param_1 + 0x60 );
   if (( (ulong)pcVar6 & 1 ) != 0) {
      pcVar6 = *(code**)( pcVar6 + *(long*)( (long)param_2 + lVar1 ) + -1 );
   }

   Variant::Variant((Variant*)local_48, *(Object**)( *(long*)param_3 + 0x10 ));
   local_58 = (Object*)0x0;
   pOVar4 = (Object*)Variant::get_validated_object();
   pOVar2 = local_58;
   if (pOVar4 != local_58) {
      if (pOVar4 == (Object*)0x0) {
         if (local_58 != (Object*)0x0) {
            local_58 = (Object*)0x0;
            LAB_0011b4d6:cVar3 = RefCounted::unreference();
            if (cVar3 != '\0') {
               cVar3 = predelete_handler(pOVar2);
               if (cVar3 != '\0') {
                  ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
                  Memory::free_static(pOVar2, false);
               }

            }

         }

      }
 else {
         pOVar4 = (Object*)__dynamic_cast(pOVar4, &Object::typeinfo, &Texture2D::typeinfo, 0);
         if (pOVar2 != pOVar4) {
            local_58 = pOVar4;
            if (pOVar4 != (Object*)0x0) {
               cVar3 = RefCounted::reference();
               if (cVar3 == '\0') {
                  local_58 = (Object*)0x0;
               }

            }

            if (pOVar2 != (Object*)0x0) goto LAB_0011b4d6;
         }

      }

   }

   if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   ( *pcVar6 )((long*)( (long)param_2 + lVar1 ));
   if (local_58 != (Object*)0x0) {
      cVar3 = RefCounted::unreference();
      pOVar2 = local_58;
      if (cVar3 != '\0') {
         cVar3 = predelete_handler(local_58);
         if (cVar3 != '\0') {
            ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
            Memory::free_static(pOVar2, false);
         }

      }

   }

   LAB_0011b518:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<Ref<Texture2D> const&>::ptrcall(Object*, void const**, void*) const */void MethodBindT<Ref<Texture2D>const&>::ptrcall(Object *param_1, void **param_2, void *param_3) {
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
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_2 != (void**)0x0 ) && ( param_2[1] != (void*)0x0 ) ) && ( *(char*)( (long)param_2[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_1 + 0x18 ));
      if (param_2[1] == (void*)0x0) {
         plVar4 = (long*)param_2[0x23];
         if (plVar4 == (long*)0x0) {
            plVar4 = (long*)( **(code**)( (long)*param_2 + 0x40 ) )(param_2);
         }

      }
 else {
         plVar4 = (long*)( (long)param_2[1] + 0x20 );
      }

      if (local_48 == (Object*)*plVar4) {
         if (( StringName::configured != '\0' ) && ( local_48 != (Object*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = (Object*)0x114df8;
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x16b, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_0011b7dc;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (Object*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar5 = *(code**)( param_1 + 0x58 );
   /* WARNING: Load size is inaccurate */
   lVar1 = *(long*)( param_1 + 0x60 );
   if (( (ulong)pcVar5 & 1 ) != 0) {
      pcVar5 = *(code**)( pcVar5 + *(long*)( (long)param_2 + lVar1 ) + -1 );
   }

   if (( *param_3 == (long*)0x0 ) || ( local_48 = (Object*)**param_3 ),local_48 == (Object*)0x0) {
      LAB_0011b7b8:local_48 = (Object*)0x0;
   }
 else {
      cVar3 = RefCounted::init_ref();
      if (cVar3 == '\0') goto LAB_0011b7b8;
   }

   ( *pcVar5 )((long*)( (long)param_2 + lVar1 ));
   if (local_48 != (Object*)0x0) {
      cVar3 = RefCounted::unreference();
      pOVar2 = local_48;
      if (cVar3 != '\0') {
         cVar3 = predelete_handler(local_48);
         if (cVar3 != '\0') {
            ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
            Memory::free_static(pOVar2, false);
         }

      }

   }

   LAB_0011b7dc:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Ref<Material>>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<Ref<Material>>::ptrcall(MethodBindTRC<Ref<Material>> *this, Object *param_1, void **param_2, void *param_3) {
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
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar4 = *(long**)( param_1 + 0x118 );
         if (plVar4 == (long*)0x0) {
            plVar4 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar4 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_48 == (Object*)*plVar4) {
         if (( StringName::configured != '\0' ) && ( local_48 != (Object*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = (Object*)0x114df8;
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x27e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_0011ba46;
      }

      param_2 = (void**)local_48;
      if (( StringName::configured != '\0' ) && ( local_48 != (Object*)0x0 )) {
         StringName::unref();
         param_2 = (void**)extraout_RDX;
      }

   }

   pcVar2 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar2 & 1 ) != 0) {
      param_2 = *(void***)( param_1 + *(long*)( this + 0x60 ) );
      pcVar2 = *(code**)( (Object*)( (long)param_2 + -1 ) + (long)pcVar2 );
   }

   ( *pcVar2 )((StringName*)&local_48, param_1 + *(long*)( this + 0x60 ), param_2);
   if (local_48 == (Object*)0x0) {
      /* WARNING: Load size is inaccurate */
      pOVar5 = *param_3;
      if (pOVar5 == (Object*)0x0) goto LAB_0011ba46;
      *(undefined8*)param_3 = 0;
      goto LAB_0011ba89;
   }

   pOVar3 = (Object*)__dynamic_cast(local_48, &Object::typeinfo, &RefCounted::typeinfo, 0);
   /* WARNING: Load size is inaccurate */
   pOVar5 = *param_3;
   if (pOVar5 != pOVar3) {
      *(Object**)param_3 = pOVar3;
      if (pOVar3 == (Object*)0x0) {
         if (pOVar5 != (Object*)0x0) goto LAB_0011ba89;
      }
 else {
         cVar1 = RefCounted::reference();
         if (cVar1 == '\0') {
            *(undefined8*)param_3 = 0;
         }

         if (pOVar5 != (Object*)0x0) {
            LAB_0011ba89:cVar1 = RefCounted::unreference();
            if (cVar1 != '\0') {
               cVar1 = predelete_handler(pOVar5);
               if (cVar1 != '\0') {
                  ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
                  Memory::free_static(pOVar5, false);
               }

            }

         }

         if (local_48 == (Object*)0x0) goto LAB_0011ba46;
      }

   }

   cVar1 = RefCounted::unreference();
   pOVar5 = local_48;
   if (cVar1 != '\0') {
      cVar1 = predelete_handler(local_48);
      if (cVar1 != '\0') {
         ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
         Memory::free_static(pOVar5, false);
      }

   }

   LAB_0011ba46:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<Ref<Material> const&>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindT<Ref<Material>const&>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
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
   int local_48[6];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_2 != (Variant**)0x0 ) && ( param_2[1] != (Variant*)0x0 ) ) && ( param_2[1][0x2e] != (Variant)0x0 )) {
      StringName::StringName((StringName*)&local_58, (StringName*)( param_1 + 0x18 ));
      if (param_2[1] == (Variant*)0x0) {
         pVVar5 = param_2[0x23];
         if (pVVar5 == (Variant*)0x0) {
            pVVar5 = (Variant*)( **(code**)( *param_2 + 0x40 ) )(param_2);
         }

      }
 else {
         pVVar5 = param_2[1] + 0x20;
      }

      if (local_58 == (Object*)*(long*)pVVar5) {
         if (( StringName::configured != '\0' ) && ( local_58 != (Object*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_58 = (Object*)0x114df8;
         local_60 = 0;
         local_50 = 0x35;
         String::parse_latin1((StrRange*)&local_60);
         vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x160, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_0011bd48;
      }

      if (( StringName::configured != '\0' ) && ( local_58 != (Object*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar6 = *(code**)( param_1 + 0x58 );
   lVar1 = *(long*)( param_1 + 0x60 );
   if (( (ulong)pcVar6 & 1 ) != 0) {
      pcVar6 = *(code**)( pcVar6 + *(long*)( (long)param_2 + lVar1 ) + -1 );
   }

   Variant::Variant((Variant*)local_48, *(Object**)( *(long*)param_3 + 0x10 ));
   local_58 = (Object*)0x0;
   pOVar4 = (Object*)Variant::get_validated_object();
   pOVar2 = local_58;
   if (pOVar4 != local_58) {
      if (pOVar4 == (Object*)0x0) {
         if (local_58 != (Object*)0x0) {
            local_58 = (Object*)0x0;
            LAB_0011bd06:cVar3 = RefCounted::unreference();
            if (cVar3 != '\0') {
               cVar3 = predelete_handler(pOVar2);
               if (cVar3 != '\0') {
                  ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
                  Memory::free_static(pOVar2, false);
               }

            }

         }

      }
 else {
         pOVar4 = (Object*)__dynamic_cast(pOVar4, &Object::typeinfo, &Material::typeinfo, 0);
         if (pOVar2 != pOVar4) {
            local_58 = pOVar4;
            if (pOVar4 != (Object*)0x0) {
               cVar3 = RefCounted::reference();
               if (cVar3 == '\0') {
                  local_58 = (Object*)0x0;
               }

            }

            if (pOVar2 != (Object*)0x0) goto LAB_0011bd06;
         }

      }

   }

   if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   ( *pcVar6 )((long*)( (long)param_2 + lVar1 ));
   if (local_58 != (Object*)0x0) {
      cVar3 = RefCounted::unreference();
      pOVar2 = local_58;
      if (cVar3 != '\0') {
         cVar3 = predelete_handler(local_58);
         if (cVar3 != '\0') {
            ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
            Memory::free_static(pOVar2, false);
         }

      }

   }

   LAB_0011bd48:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<Ref<Material> const&>::ptrcall(Object*, void const**, void*) const */void MethodBindT<Ref<Material>const&>::ptrcall(Object *param_1, void **param_2, void *param_3) {
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
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_2 != (void**)0x0 ) && ( param_2[1] != (void*)0x0 ) ) && ( *(char*)( (long)param_2[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_1 + 0x18 ));
      if (param_2[1] == (void*)0x0) {
         plVar4 = (long*)param_2[0x23];
         if (plVar4 == (long*)0x0) {
            plVar4 = (long*)( **(code**)( (long)*param_2 + 0x40 ) )(param_2);
         }

      }
 else {
         plVar4 = (long*)( (long)param_2[1] + 0x20 );
      }

      if (local_48 == (Object*)*plVar4) {
         if (( StringName::configured != '\0' ) && ( local_48 != (Object*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = (Object*)0x114df8;
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x16b, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_0011c00c;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (Object*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar5 = *(code**)( param_1 + 0x58 );
   /* WARNING: Load size is inaccurate */
   lVar1 = *(long*)( param_1 + 0x60 );
   if (( (ulong)pcVar5 & 1 ) != 0) {
      pcVar5 = *(code**)( pcVar5 + *(long*)( (long)param_2 + lVar1 ) + -1 );
   }

   if (( *param_3 == (long*)0x0 ) || ( local_48 = (Object*)**param_3 ),local_48 == (Object*)0x0) {
      LAB_0011bfe8:local_48 = (Object*)0x0;
   }
 else {
      cVar3 = RefCounted::init_ref();
      if (cVar3 == '\0') goto LAB_0011bfe8;
   }

   ( *pcVar5 )((long*)( (long)param_2 + lVar1 ));
   if (local_48 != (Object*)0x0) {
      cVar3 = RefCounted::unreference();
      pOVar2 = local_48;
      if (cVar3 != '\0') {
         cVar3 = predelete_handler(local_48);
         if (cVar3 != '\0') {
            ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
            Memory::free_static(pOVar2, false);
         }

      }

   }

   LAB_0011c00c:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<Node*>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindT<Node*>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
   plVar11 = (long*)CONCAT44(in_register_00000014, param_3);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( plVar11 != (long*)0x0 ) && ( plVar11[1] != 0 ) ) && ( *(char*)( plVar11[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_58, (StringName*)( param_2 + 3 ));
      if (plVar11[1] == 0) {
         plVar7 = (long*)plVar11[0x23];
         if (plVar7 == (long*)0x0) {
            plVar7 = (long*)( **(code**)( *plVar11 + 0x40 ) )(plVar11);
         }

      }
 else {
         plVar7 = (long*)( plVar11[1] + 0x20 );
      }

      if (local_58 == (char*)*plVar7) {
         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_60 = 0;
         local_50 = 0x35;
         String::parse_latin1((StrRange*)&local_60);
         vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
         _err_print_error(&_LC62, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_0011c2e0;
      }

      if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar13 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (1 < in_R8D) {
      uVar5 = 3;
      LAB_0011c2d5:*in_R9 = uVar5;
      in_R9[2] = 1;
      goto LAB_0011c2e0;
   }

   pVVar12 = param_2[5];
   if (pVVar12 == (Variant*)0x0) {
      if (in_R8D != 1) goto LAB_0011c330;
      LAB_0011c320:pVVar12 = *(Variant**)param_4;
   }
 else {
      lVar9 = *(long*)( pVVar12 + -8 );
      if ((int)lVar9 < (int)( in_R8D ^ 1 )) {
         LAB_0011c330:uVar5 = 4;
         goto LAB_0011c2d5;
      }

      if (in_R8D == 1) goto LAB_0011c320;
      lVar10 = (long)( (int)lVar9 + -1 );
      if (lVar9 <= lVar10) {
         _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar10, lVar9, "p_index", "size()", "", false, true);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }

      pVVar12 = pVVar12 + lVar10 * 0x18;
   }

   *in_R9 = 0;
   if (( (ulong)pVVar13 & 1 ) != 0) {
      pVVar13 = *(Variant**)( pVVar13 + *(long*)( (long)plVar11 + (long)pVVar1 ) + -1 );
   }

   cVar4 = Variant::can_convert_strict(*(undefined4*)pVVar12, 0x18);
   if (cVar4 == '\0') {
      LAB_0011c286:uVar3 = _LC243;
      *in_R9 = 2;
      *(undefined8*)( in_R9 + 1 ) = uVar3;
   }
 else {
      pOVar6 = Variant::operator_cast_to_Object_(pVVar12);
      pOVar8 = Variant::operator_cast_to_Object_(pVVar12);
      if (( ( pOVar8 == (Object*)0x0 ) || ( lVar9 = __dynamic_cast(pOVar8, &Object::typeinfo, &Node::typeinfo, 0) ),lVar9 == 0 )) goto LAB_0011c286;
   }

   pOVar6 = Variant::operator_cast_to_Object_(pVVar12);
   if (pOVar6 != (Object*)0x0) {
      pOVar6 = (Object*)__dynamic_cast(pOVar6, &Object::typeinfo, &Node::typeinfo, 0);
   }

   ( *(code*)pVVar13 )((Variant*)( (long)plVar11 + (long)pVVar1 ), pOVar6);
   LAB_0011c2e0:*(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* MethodBindT<Transform2D const&, Vector2 const&, Color const&, Color const&, unsigned
   int>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindT<Transform2D_const&,Vector2_const&,Color_const&,Color_const&,unsigned_int>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
   long local_d8;
   undefined8 local_d0;
   char *local_c8;
   undefined8 local_c0;
   undefined8 local_b0;
   undefined8 local_a8[2];
   undefined8 local_98[2];
   Variant local_88[32];
   Variant *local_68[5];
   long local_40;
   plVar11 = (long*)CONCAT44(in_register_00000014, param_3);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( plVar11 != (long*)0x0 ) && ( plVar11[1] != 0 ) ) && ( *(char*)( plVar11[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_c8, (StringName*)( param_2 + 3 ));
      if (plVar11[1] == 0) {
         plVar9 = (long*)plVar11[0x23];
         if (plVar9 == (long*)0x0) {
            plVar9 = (long*)( **(code**)( *plVar11 + 0x40 ) )();
         }

      }
 else {
         plVar9 = (long*)( plVar11[1] + 0x20 );
      }

      if (local_c8 == (char*)*plVar9) {
         if (( StringName::configured != '\0' ) && ( local_c8 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_c8 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_d0 = 0;
         local_c0 = 0x35;
         String::parse_latin1((StrRange*)&local_d0);
         vformat<StringName>((StringName*)&local_c8, (StrRange*)&local_d0, &local_d8);
         _err_print_error(&_LC62, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_c8, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_d0);
         if (( StringName::configured != '\0' ) && ( local_d8 != 0 )) {
            StringName::unref();
         }

         goto LAB_0011c7b2;
      }

      if (( StringName::configured != '\0' ) && ( local_c8 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar14 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D < 6) {
      pVVar2 = param_2[5];
      if (pVVar2 == (Variant*)0x0) {
         iVar10 = 0;
         lVar13 = 0;
      }
 else {
         lVar13 = *(long*)( pVVar2 + -8 );
         iVar10 = (int)lVar13;
      }

      if ((int)( 5 - in_R8D ) <= iVar10) {
         lVar8 = 0;
         do {
            if ((int)lVar8 < (int)in_R8D) {
               pVVar12 = *(Variant**)( param_4 + lVar8 * 8 );
            }
 else {
               uVar6 = iVar10 + -5 + (int)lVar8;
               if (lVar13 <= (int)uVar6) {
                  _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, (long)(int)uVar6, lVar13, "p_index", "size()", "", false, true);
                  _err_flush_stdout();
                  /* WARNING: Does not return */
                  pcVar3 = (code*)invalidInstructionException();
                  ( *pcVar3 )();
               }

               pVVar12 = pVVar2 + (ulong)uVar6 * 0x18;
            }

            local_68[lVar8] = pVVar12;
            lVar8 = lVar8 + 1;
         }
 while ( lVar8 != 5 );
         *in_R9 = 0;
         if (( (ulong)pVVar14 & 1 ) != 0) {
            pVVar14 = *(Variant**)( pVVar14 + *(long*)( (long)plVar11 + (long)pVVar1 ) + -1 );
         }

         cVar5 = Variant::can_convert_strict(*(undefined4*)local_68[4], 2);
         uVar4 = _LC244;
         if (cVar5 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar4;
         }

         uVar6 = Variant::operator_cast_to_unsigned_int(local_68[4]);
         cVar5 = Variant::can_convert_strict(*(undefined4*)local_68[3], 0x14);
         uVar4 = _LC245;
         if (cVar5 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar4;
         }

         local_a8[0] = Variant::operator_cast_to_Color(local_68[3]);
         cVar5 = Variant::can_convert_strict(*(undefined4*)local_68[2], 0x14);
         uVar4 = _LC246;
         if (cVar5 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar4;
         }

         local_98[0] = Variant::operator_cast_to_Color(local_68[2]);
         cVar5 = Variant::can_convert_strict(*(undefined4*)local_68[1], 5);
         uVar4 = _LC247;
         if (cVar5 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar4;
         }

         local_b0 = Variant::operator_cast_to_Vector2(local_68[1]);
         cVar5 = Variant::can_convert_strict(*(undefined4*)local_68[0], 0xb);
         uVar4 = _LC248;
         if (cVar5 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar4;
         }

         Variant::operator_cast_to_Transform2D(local_88);
         ( *(code*)pVVar14 )((Variant*)( (long)plVar11 + (long)pVVar1 ), local_88, &local_b0, local_98, local_a8, uVar6);
         goto LAB_0011c7b2;
      }

      uVar7 = 4;
   }
 else {
      uVar7 = 3;
   }

   *in_R9 = uVar7;
   in_R9[2] = 5;
   LAB_0011c7b2:*(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<NodePath const&>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindT<NodePath_const&>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
   plVar9 = (long*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( plVar9 != (long*)0x0 ) && ( plVar9[1] != 0 ) ) && ( *(char*)( plVar9[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_2 + 3 ));
      if (plVar9[1] == 0) {
         plVar7 = (long*)plVar9[0x23];
         if (plVar7 == (long*)0x0) {
            plVar7 = (long*)( **(code**)( *plVar9 + 0x40 ) )(plVar9);
         }

      }
 else {
         plVar7 = (long*)( plVar9[1] + 0x20 );
      }

      if (local_48 == (char*)*plVar7) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error(&_LC62, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_0011cad0;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar11 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D < 2) {
      pVVar10 = param_2[5];
      if (pVVar10 == (Variant*)0x0) {
         if (in_R8D != 1) goto LAB_0011cb20;
         LAB_0011cb10:pVVar10 = *(Variant**)param_4;
      }
 else {
         lVar2 = *(long*)( pVVar10 + -8 );
         if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
            LAB_0011cb20:uVar6 = 4;
            goto LAB_0011cac5;
         }

         if (in_R8D == 1) goto LAB_0011cb10;
         lVar8 = (long)( (int)lVar2 + -1 );
         if (lVar2 <= lVar8) {
            _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar8, lVar2, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         pVVar10 = pVVar10 + lVar8 * 0x18;
      }

      *in_R9 = 0;
      if (( (ulong)pVVar11 & 1 ) != 0) {
         pVVar11 = *(Variant**)( pVVar11 + *(long*)( (long)plVar9 + (long)pVVar1 ) + -1 );
      }

      cVar5 = Variant::can_convert_strict(*(undefined4*)pVVar10, 0x16);
      uVar4 = _LC249;
      if (cVar5 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = uVar4;
      }

      Variant::operator_cast_to_NodePath((Variant*)&local_48);
      ( *(code*)pVVar11 )((Variant*)( (long)plVar9 + (long)pVVar1 ), (Variant*)&local_48);
      NodePath::~NodePath((NodePath*)&local_48);
   }
 else {
      uVar6 = 3;
      LAB_0011cac5:*in_R9 = uVar6;
      in_R9[2] = 1;
   }

   LAB_0011cad0:*(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<Ref<Texture2D> const&>::call(Object*, Variant const**, int, Callable::CallError&)
   const */Object *MethodBindT<Ref<Texture2D>const&>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   long lVar2;
   char *pcVar3;
   code *pcVar4;
   undefined8 uVar5;
   char cVar6;
   undefined4 uVar7;
   char *pcVar8;
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
   char *local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   plVar11 = (long*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( plVar11 != (long*)0x0 ) && ( plVar11[1] != 0 ) ) && ( *(char*)( plVar11[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_2 + 3 ));
      if (plVar11[1] == 0) {
         plVar9 = (long*)plVar11[0x23];
         if (plVar9 == (long*)0x0) {
            plVar9 = (long*)( **(code**)( *plVar11 + 0x40 ) )(plVar11);
         }

      }
 else {
         plVar9 = (long*)( plVar11[1] + 0x20 );
      }

      if (local_48 == (char*)*plVar9) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = (char*)0x0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error(&_LC62, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_0011ce58;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar13 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (1 < in_R8D) {
      uVar7 = 3;
      LAB_0011ce4d:*in_R9 = uVar7;
      in_R9[2] = 1;
      goto LAB_0011ce58;
   }

   pVVar12 = param_2[5];
   if (pVVar12 == (Variant*)0x0) {
      if (in_R8D != 1) goto LAB_0011ceb0;
      LAB_0011cea0:pVVar12 = *(Variant**)param_4;
   }
 else {
      lVar2 = *(long*)( pVVar12 + -8 );
      if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
         LAB_0011ceb0:uVar7 = 4;
         goto LAB_0011ce4d;
      }

      if (in_R8D == 1) goto LAB_0011cea0;
      lVar10 = (long)( (int)lVar2 + -1 );
      if (lVar2 <= lVar10) {
         _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar10, lVar2, "p_index", "size()", "", false, true);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar4 = (code*)invalidInstructionException();
         ( *pcVar4 )();
      }

      pVVar12 = pVVar12 + lVar10 * 0x18;
   }

   *in_R9 = 0;
   if (( (ulong)pVVar13 & 1 ) != 0) {
      pVVar13 = *(Variant**)( pVVar13 + *(long*)( (long)plVar11 + (long)pVVar1 ) + -1 );
   }

   cVar6 = Variant::can_convert_strict(*(undefined4*)pVVar12, 0x18);
   uVar5 = _LC243;
   if (cVar6 == '\0') {
      *in_R9 = 2;
      *(undefined8*)( in_R9 + 1 ) = uVar5;
   }

   local_50 = (char*)0x0;
   pcVar8 = (char*)Variant::get_validated_object();
   pcVar3 = local_50;
   if (pcVar8 != local_50) {
      if (pcVar8 == (char*)0x0) {
         if (local_50 != (char*)0x0) {
            local_50 = (char*)0x0;
            local_48 = pcVar3;
            goto LAB_0011ce1f;
         }

      }
 else {
         pcVar8 = (char*)__dynamic_cast(pcVar8, &Object::typeinfo, &Texture2D::typeinfo, 0);
         if (pcVar3 != pcVar8) {
            local_48 = pcVar3;
            local_50 = pcVar8;
            if (( pcVar8 != (char*)0x0 ) && ( cVar6 = cVar6 == '\0' )) {
               local_50 = (char*)0x0;
            }

            LAB_0011ce1f:Ref<Texture2D>::unref((Ref<Texture2D>*)&local_48);
         }

      }

   }

   ( *(code*)pVVar13 )((Variant*)( (long)plVar11 + (long)pVVar1 ), (Ref<Texture2D>*)&local_50);
   Ref<Texture2D>::unref((Ref<Texture2D>*)&local_50);
   LAB_0011ce58:*(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* MethodBindT<Ref<Material> const&>::call(Object*, Variant const**, int, Callable::CallError&)
   const */Object *MethodBindT<Ref<Material>const&>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
   plVar11 = (long*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( plVar11 != (long*)0x0 ) && ( plVar11[1] != 0 ) ) && ( *(char*)( plVar11[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_2 + 3 ));
      if (plVar11[1] == 0) {
         plVar9 = (long*)plVar11[0x23];
         if (plVar9 == (long*)0x0) {
            plVar9 = (long*)( **(code**)( *plVar11 + 0x40 ) )(plVar11);
         }

      }
 else {
         plVar9 = (long*)( plVar11[1] + 0x20 );
      }

      if (local_48 == (Object*)*plVar9) {
         if (( StringName::configured != '\0' ) && ( local_48 != (Object*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = (Object*)0x114df8;
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error(&_LC62, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_0011d260;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (Object*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar13 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (1 < in_R8D) {
      uVar7 = 3;
      LAB_0011d255:*in_R9 = uVar7;
      in_R9[2] = 1;
      goto LAB_0011d260;
   }

   pVVar12 = param_2[5];
   if (pVVar12 == (Variant*)0x0) {
      if (in_R8D != 1) goto LAB_0011d2b0;
      LAB_0011d2a0:pVVar12 = *(Variant**)param_4;
   }
 else {
      lVar2 = *(long*)( pVVar12 + -8 );
      if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
         LAB_0011d2b0:uVar7 = 4;
         goto LAB_0011d255;
      }

      if (in_R8D == 1) goto LAB_0011d2a0;
      lVar10 = (long)( (int)lVar2 + -1 );
      if (lVar2 <= lVar10) {
         _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar10, lVar2, "p_index", "size()", "", false, true);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar3 = (code*)invalidInstructionException();
         ( *pcVar3 )();
      }

      pVVar12 = pVVar12 + lVar10 * 0x18;
   }

   *in_R9 = 0;
   if (( (ulong)pVVar13 & 1 ) != 0) {
      pVVar13 = *(Variant**)( pVVar13 + *(long*)( (long)plVar11 + (long)pVVar1 ) + -1 );
   }

   cVar6 = Variant::can_convert_strict(*(undefined4*)pVVar12);
   uVar4 = _LC243;
   if (cVar6 == '\0') {
      *in_R9 = 2;
      *(undefined8*)( in_R9 + 1 ) = uVar4;
   }

   local_48 = (Object*)0x0;
   pOVar8 = (Object*)Variant::get_validated_object();
   pOVar5 = local_48;
   if (pOVar8 != local_48) {
      if (pOVar8 == (Object*)0x0) {
         if (local_48 != (Object*)0x0) {
            local_48 = (Object*)0x0;
            LAB_0011d3cd:cVar6 = RefCounted::unreference();
            if (cVar6 != '\0') {
               cVar6 = predelete_handler(pOVar5);
               if (cVar6 != '\0') {
                  ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
                  Memory::free_static(pOVar5, false);
               }

            }

         }

      }
 else {
         pOVar8 = (Object*)__dynamic_cast(pOVar8, &Object::typeinfo, &Material::typeinfo, 0);
         if (pOVar5 != pOVar8) {
            local_48 = pOVar8;
            if (pOVar8 != (Object*)0x0) {
               cVar6 = RefCounted::reference();
               if (cVar6 == '\0') {
                  local_48 = (Object*)0x0;
               }

            }

            if (pOVar5 != (Object*)0x0) goto LAB_0011d3cd;
         }

      }

   }

   ( *(code*)pVVar13 )((Variant*)( (long)plVar11 + (long)pVVar1 ));
   if (local_48 != (Object*)0x0) {
      cVar6 = RefCounted::unreference();
      pOVar5 = local_48;
      if (cVar6 != '\0') {
         cVar6 = predelete_handler(local_48);
         if (cVar6 != '\0') {
            ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
            Memory::free_static(pOVar5, false);
         }

      }

   }

   LAB_0011d260:*(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<Rect2 const&>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindT<Rect2_const&>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
   undefined8 local_48[3];
   long local_30;
   plVar9 = (long*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( plVar9 != (long*)0x0 ) && ( plVar9[1] != 0 ) ) && ( *(char*)( plVar9[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_58, (StringName*)( param_2 + 3 ));
      if (plVar9[1] == 0) {
         plVar7 = (long*)plVar9[0x23];
         if (plVar7 == (long*)0x0) {
            plVar7 = (long*)( **(code**)( *plVar9 + 0x40 ) )(plVar9);
         }

      }
 else {
         plVar7 = (long*)( plVar9[1] + 0x20 );
      }

      if (local_58 == (char*)*plVar7) {
         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_60 = 0;
         local_50 = 0x35;
         String::parse_latin1((StrRange*)&local_60);
         vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
         _err_print_error(&_LC62, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_0011d608;
      }

      if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar11 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D < 2) {
      pVVar10 = param_2[5];
      if (pVVar10 == (Variant*)0x0) {
         if (in_R8D != 1) goto LAB_0011d660;
         LAB_0011d650:pVVar10 = *(Variant**)param_4;
      }
 else {
         lVar2 = *(long*)( pVVar10 + -8 );
         if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
            LAB_0011d660:uVar6 = 4;
            goto LAB_0011d5fd;
         }

         if (in_R8D == 1) goto LAB_0011d650;
         lVar8 = (long)( (int)lVar2 + -1 );
         if (lVar2 <= lVar8) {
            _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar8, lVar2, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         pVVar10 = pVVar10 + lVar8 * 0x18;
      }

      *in_R9 = 0;
      if (( (ulong)pVVar11 & 1 ) != 0) {
         pVVar11 = *(Variant**)( pVVar11 + *(long*)( (long)plVar9 + (long)pVVar1 ) + -1 );
      }

      cVar5 = Variant::can_convert_strict(*(undefined4*)pVVar10, 7);
      uVar4 = _LC250;
      if (cVar5 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = uVar4;
      }

      local_48[0] = Variant::operator_cast_to_Rect2(pVVar10);
      ( *(code*)pVVar11 )((Variant*)( (long)plVar9 + (long)pVVar1 ), local_48);
   }
 else {
      uVar6 = 3;
      LAB_0011d5fd:*in_R9 = uVar6;
      in_R9[2] = 1;
   }

   LAB_0011d608:*(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* MethodBindTRC<Ref<Texture2D>>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTRC<Ref<Texture2D>>::validated_call(MethodBindTRC<Ref<Texture2D>> *this, Object *param_1, Variant **param_2, Variant *param_3) {
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
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar4 = *(long**)( param_1 + 0x118 );
         if (plVar4 == (long*)0x0) {
            plVar4 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar4 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_48 == (Variant**)*plVar4) {
         if (( StringName::configured != '\0' ) && ( local_48 != (Variant**)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = (Variant**)0x114df8;
         local_50 = (Object*)0x0;
         local_40 = (Object*)0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x273, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_0011d8a6;
      }

      param_2 = local_48;
      if (( StringName::configured != '\0' ) && ( local_48 != (Variant**)0x0 )) {
         StringName::unref();
         param_2 = extraout_RDX;
      }

   }

   pcVar3 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar3 & 1 ) != 0) {
      param_2 = *(Variant***)( param_1 + *(long*)( this + 0x60 ) );
      pcVar3 = *(code**)( pcVar3 + (long)param_2 + -1 );
   }

   ( *pcVar3 )(&local_50, param_1 + *(long*)( this + 0x60 ), param_2);
   if (local_50 == (Object*)0x0) {
      Variant::ObjData::unref();
   }
 else {
      local_48 = *(Variant***)( local_50 + 0x60 );
      local_40 = local_50;
      Variant::ObjData::ref((ObjData*)( param_3 + 8 ));
   }

   if (local_50 != (Object*)0x0) {
      cVar2 = RefCounted::unreference();
      pOVar1 = local_50;
      if (cVar2 != '\0') {
         cVar2 = predelete_handler(local_50);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
         }

      }

   }

   LAB_0011d8a6:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Ref<Material>>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTRC<Ref<Material>>::validated_call(MethodBindTRC<Ref<Material>> *this, Object *param_1, Variant **param_2, Variant *param_3) {
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
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar4 = *(long**)( param_1 + 0x118 );
         if (plVar4 == (long*)0x0) {
            plVar4 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar4 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_48 == (Variant**)*plVar4) {
         if (( StringName::configured != '\0' ) && ( local_48 != (Variant**)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = (Variant**)0x114df8;
         local_50 = (Object*)0x0;
         local_40 = (Object*)0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x273, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_0011dad6;
      }

      param_2 = local_48;
      if (( StringName::configured != '\0' ) && ( local_48 != (Variant**)0x0 )) {
         StringName::unref();
         param_2 = extraout_RDX;
      }

   }

   pcVar3 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar3 & 1 ) != 0) {
      param_2 = *(Variant***)( param_1 + *(long*)( this + 0x60 ) );
      pcVar3 = *(code**)( pcVar3 + (long)param_2 + -1 );
   }

   ( *pcVar3 )(&local_50, param_1 + *(long*)( this + 0x60 ), param_2);
   if (local_50 == (Object*)0x0) {
      Variant::ObjData::unref();
   }
 else {
      local_48 = *(Variant***)( local_50 + 0x60 );
      local_40 = local_50;
      Variant::ObjData::ref((ObjData*)( param_3 + 8 ));
   }

   if (local_50 != (Object*)0x0) {
      cVar2 = RefCounted::unreference();
      pOVar1 = local_50;
      if (cVar2 != '\0') {
         cVar2 = predelete_handler(local_50);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
         }

      }

   }

   LAB_0011dad6:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void call_with_variant_args_dv<__UnexistingClass, unsigned int>(__UnexistingClass*, void
   (__UnexistingClass::*)(unsigned int), Variant const**, int, Callable::CallError&, Vector<Variant>
   const&) */void call_with_variant_args_dv<__UnexistingClass,unsigned_int>(__UnexistingClass *param_1, _func_void_uint *param_2, Variant **param_3, int param_4, CallError *param_5, Vector *param_6) {
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
      goto LAB_0011dd7d;
   }

   lVar1 = *(long*)( in_stack_00000008 + 8 );
   if (lVar1 == 0) {
      if (uVar8 != 1) goto LAB_0011dde0;
   }
 else {
      lVar2 = *(long*)( lVar1 + -8 );
      if ((int)lVar2 < (int)( uVar8 ^ 1 )) {
         LAB_0011dde0:uVar6 = 4;
         LAB_0011dd7d:*(undefined4*)param_6 = uVar6;
         *(undefined4*)( param_6 + 8 ) = 1;
         return;
      }

      if (uVar8 != 1) {
         lVar7 = (long)( (int)lVar2 + -1 );
         if (lVar2 <= lVar7) {
            _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar7, lVar2, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         this(Variant * )(lVar1 + lVar7 * 0x18);
         goto LAB_0011dcfb;
      }

   }

   this * (Variant**)CONCAT44(in_register_0000000c, param_4);
   LAB_0011dcfb:*(undefined4*)param_6 = 0;
   if (( (ulong)param_2 & 1 ) != 0) {
      param_2 = *(_func_void_uint**)( param_2 + *(long*)( param_1 + (long)param_3 ) + -1 );
   }

   cVar5 = Variant::can_convert_strict(*(undefined4*)this, 2);
   uVar4 = _LC251;
   if (cVar5 == '\0') {
      *(undefined4*)param_6 = 2;
      *(undefined8*)( param_6 + 4 ) = uVar4;
   }

   Variant::operator_cast_to_unsigned_int(this);
   /* WARNING: Could not recover jumptable at 0x0011dd56. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( *param_2 )(( uint )(param_1 + (long)param_3));
   return;
}
/* MethodBindT<unsigned int>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindT<unsigned_int>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
   p_Var3 = (__UnexistingClass*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( p_Var3 != (__UnexistingClass*)0x0 ) && ( *(long*)( p_Var3 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( p_Var3 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_2 + 3 ));
      if (*(long*)( p_Var3 + 8 ) == 0) {
         plVar2 = *(long**)( p_Var3 + 0x118 );
         if (plVar2 == (long*)0x0) {
            plVar2 = (long*)( **(code**)( *(long*)p_Var3 + 0x40 ) )(p_Var3);
         }

      }
 else {
         plVar2 = (long*)( *(long*)( p_Var3 + 8 ) + 0x20 );
      }

      in_R8 = (CallError*)( (ulong)in_R8 & 0xffffffff );
      if (local_48 == (char*)*plVar2) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error(&_LC62, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         pcVar1 = local_48;
         if (local_48 != (char*)0x0) {
            LOCK();
            plVar2 = (long*)( local_48 + -0x10 );
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
               local_48 = (char*)0x0;
               Memory::free_static(pcVar1 + -0x10, false);
            }

         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         *(undefined4*)param_1 = 0;
         *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
         goto LAB_0011de46;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   call_with_variant_args_dv<__UnexistingClass,unsigned_int>(p_Var3, (_func_void_uint*)param_2[0xb], (Variant**)param_2[0xc], (int)param_4, in_R8, in_R9);
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   LAB_0011de46:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void call_with_variant_args_dv<__UnexistingClass, GPUParticles2D::DrawOrder>(__UnexistingClass*,
   void (__UnexistingClass::*)(GPUParticles2D::DrawOrder), Variant const**, int,
   Callable::CallError&, Vector<Variant> const&) */void call_with_variant_args_dv<__UnexistingClass,GPUParticles2D::DrawOrder>(__UnexistingClass *param_1, _func_void_DrawOrder *param_2, Variant **param_3, int param_4, CallError *param_5, Vector *param_6) {
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
      goto LAB_0011e12d;
   }

   lVar1 = *(long*)( in_stack_00000008 + 8 );
   if (lVar1 == 0) {
      if (uVar8 != 1) goto LAB_0011e190;
   }
 else {
      lVar2 = *(long*)( lVar1 + -8 );
      if ((int)lVar2 < (int)( uVar8 ^ 1 )) {
         LAB_0011e190:uVar6 = 4;
         LAB_0011e12d:*(undefined4*)param_6 = uVar6;
         *(undefined4*)( param_6 + 8 ) = 1;
         return;
      }

      if (uVar8 != 1) {
         lVar7 = (long)( (int)lVar2 + -1 );
         if (lVar2 <= lVar7) {
            _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar7, lVar2, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         this(Variant * )(lVar1 + lVar7 * 0x18);
         goto LAB_0011e0ab;
      }

   }

   this * (Variant**)CONCAT44(in_register_0000000c, param_4);
   LAB_0011e0ab:*(undefined4*)param_6 = 0;
   if (( (ulong)param_2 & 1 ) != 0) {
      param_2 = *(_func_void_DrawOrder**)( param_2 + *(long*)( param_1 + (long)param_3 ) + -1 );
   }

   cVar5 = Variant::can_convert_strict(*(undefined4*)this, 2);
   uVar4 = _LC251;
   if (cVar5 == '\0') {
      *(undefined4*)param_6 = 2;
      *(undefined8*)( param_6 + 4 ) = uVar4;
   }

   Variant::operator_cast_to_long(this);
   /* WARNING: Could not recover jumptable at 0x0011e106. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( *param_2 )((char)( param_1 + (long)param_3 ));
   return;
}
/* MethodBindT<GPUParticles2D::DrawOrder>::call(Object*, Variant const**, int, Callable::CallError&)
   const */Object *MethodBindT<GPUParticles2D::DrawOrder>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
   p_Var3 = (__UnexistingClass*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( p_Var3 != (__UnexistingClass*)0x0 ) && ( *(long*)( p_Var3 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( p_Var3 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_2 + 3 ));
      if (*(long*)( p_Var3 + 8 ) == 0) {
         plVar2 = *(long**)( p_Var3 + 0x118 );
         if (plVar2 == (long*)0x0) {
            plVar2 = (long*)( **(code**)( *(long*)p_Var3 + 0x40 ) )(p_Var3);
         }

      }
 else {
         plVar2 = (long*)( *(long*)( p_Var3 + 8 ) + 0x20 );
      }

      in_R8 = (CallError*)( (ulong)in_R8 & 0xffffffff );
      if (local_48 == (char*)*plVar2) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error(&_LC62, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         lVar1 = local_50;
         if (local_50 != 0) {
            LOCK();
            plVar2 = (long*)( local_50 + -0x10 );
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
               local_50 = 0;
               Memory::free_static((void*)( lVar1 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         *(undefined4*)param_1 = 0;
         *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
         goto LAB_0011e1f6;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   call_with_variant_args_dv<__UnexistingClass,GPUParticles2D::DrawOrder>(p_Var3, (_func_void_DrawOrder*)param_2[0xb], (Variant**)param_2[0xc], (int)param_4, in_R8, in_R9);
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   LAB_0011e1f6:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void call_with_variant_args_dv<__UnexistingClass, float>(__UnexistingClass*, void
   (__UnexistingClass::*)(float), Variant const**, int, Callable::CallError&, Vector<Variant>
   const&) */void call_with_variant_args_dv<__UnexistingClass,float>(__UnexistingClass *param_1, _func_void_float *param_2, Variant **param_3, int param_4, CallError *param_5, Vector *param_6) {
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
      goto LAB_0011e4dd;
   }

   lVar1 = *(long*)( in_stack_00000008 + 8 );
   if (lVar1 == 0) {
      if (uVar8 != 1) goto LAB_0011e540;
   }
 else {
      lVar2 = *(long*)( lVar1 + -8 );
      if ((int)lVar2 < (int)( uVar8 ^ 1 )) {
         LAB_0011e540:uVar6 = 4;
         LAB_0011e4dd:*(undefined4*)param_6 = uVar6;
         *(undefined4*)( param_6 + 8 ) = 1;
         return;
      }

      if (uVar8 != 1) {
         lVar7 = (long)( (int)lVar2 + -1 );
         if (lVar2 <= lVar7) {
            _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar7, lVar2, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         this(Variant * )(lVar1 + lVar7 * 0x18);
         goto LAB_0011e45b;
      }

   }

   this * (Variant**)CONCAT44(in_register_0000000c, param_4);
   LAB_0011e45b:*(undefined4*)param_6 = 0;
   if (( (ulong)param_2 & 1 ) != 0) {
      param_2 = *(_func_void_float**)( param_2 + *(long*)( param_1 + (long)param_3 ) + -1 );
   }

   cVar5 = Variant::can_convert_strict(*(undefined4*)this, 3);
   uVar4 = _LC252;
   if (cVar5 == '\0') {
      *(undefined4*)param_6 = 2;
      *(undefined8*)( param_6 + 4 ) = uVar4;
   }

   fVar9 = Variant::operator_cast_to_float(this);
   /* WARNING: Could not recover jumptable at 0x0011e4b4. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( *param_2 )(fVar9);
   return;
}
/* MethodBindT<float>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindT<float>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
   p_Var3 = (__UnexistingClass*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( p_Var3 != (__UnexistingClass*)0x0 ) && ( *(long*)( p_Var3 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( p_Var3 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_2 + 3 ));
      if (*(long*)( p_Var3 + 8 ) == 0) {
         plVar2 = *(long**)( p_Var3 + 0x118 );
         if (plVar2 == (long*)0x0) {
            plVar2 = (long*)( **(code**)( *(long*)p_Var3 + 0x40 ) )(p_Var3);
         }

      }
 else {
         plVar2 = (long*)( *(long*)( p_Var3 + 8 ) + 0x20 );
      }

      in_R8 = (CallError*)( (ulong)in_R8 & 0xffffffff );
      if (local_48 == (char*)*plVar2) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error(&_LC62, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         lVar1 = local_50;
         if (local_50 != 0) {
            LOCK();
            plVar2 = (long*)( local_50 + -0x10 );
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
               local_50 = 0;
               Memory::free_static((void*)( lVar1 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         *(undefined4*)param_1 = 0;
         *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
         goto LAB_0011e5a6;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   call_with_variant_args_dv<__UnexistingClass,float>(p_Var3, (_func_void_float*)param_2[0xb], (Variant**)param_2[0xc], (int)param_4, in_R8, in_R9);
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   LAB_0011e5a6:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void call_with_variant_args_dv<__UnexistingClass, double>(__UnexistingClass*, void
   (__UnexistingClass::*)(double), Variant const**, int, Callable::CallError&, Vector<Variant>
   const&) */void call_with_variant_args_dv<__UnexistingClass,double>(__UnexistingClass *param_1, _func_void_double *param_2, Variant **param_3, int param_4, CallError *param_5, Vector *param_6) {
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
      goto LAB_0011e88d;
   }

   lVar1 = *(long*)( in_stack_00000008 + 8 );
   if (lVar1 == 0) {
      if (uVar8 != 1) goto LAB_0011e8f0;
   }
 else {
      lVar2 = *(long*)( lVar1 + -8 );
      if ((int)lVar2 < (int)( uVar8 ^ 1 )) {
         LAB_0011e8f0:uVar6 = 4;
         LAB_0011e88d:*(undefined4*)param_6 = uVar6;
         *(undefined4*)( param_6 + 8 ) = 1;
         return;
      }

      if (uVar8 != 1) {
         lVar7 = (long)( (int)lVar2 + -1 );
         if (lVar2 <= lVar7) {
            _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar7, lVar2, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         this(Variant * )(lVar1 + lVar7 * 0x18);
         goto LAB_0011e80b;
      }

   }

   this * (Variant**)CONCAT44(in_register_0000000c, param_4);
   LAB_0011e80b:*(undefined4*)param_6 = 0;
   if (( (ulong)param_2 & 1 ) != 0) {
      param_2 = *(_func_void_double**)( param_2 + *(long*)( param_1 + (long)param_3 ) + -1 );
   }

   cVar5 = Variant::can_convert_strict(*(undefined4*)this, 3);
   uVar4 = _LC252;
   if (cVar5 == '\0') {
      *(undefined4*)param_6 = 2;
      *(undefined8*)( param_6 + 4 ) = uVar4;
   }

   dVar9 = Variant::operator_cast_to_double(this);
   /* WARNING: Could not recover jumptable at 0x0011e864. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( *param_2 )(dVar9);
   return;
}
/* MethodBindT<double>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindT<double>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
   p_Var3 = (__UnexistingClass*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( p_Var3 != (__UnexistingClass*)0x0 ) && ( *(long*)( p_Var3 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( p_Var3 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_2 + 3 ));
      if (*(long*)( p_Var3 + 8 ) == 0) {
         plVar2 = *(long**)( p_Var3 + 0x118 );
         if (plVar2 == (long*)0x0) {
            plVar2 = (long*)( **(code**)( *(long*)p_Var3 + 0x40 ) )(p_Var3);
         }

      }
 else {
         plVar2 = (long*)( *(long*)( p_Var3 + 8 ) + 0x20 );
      }

      in_R8 = (CallError*)( (ulong)in_R8 & 0xffffffff );
      if (local_48 == (char*)*plVar2) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error(&_LC62, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         pcVar1 = local_48;
         if (local_48 != (char*)0x0) {
            LOCK();
            plVar2 = (long*)( local_48 + -0x10 );
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
               local_48 = (char*)0x0;
               Memory::free_static(pcVar1 + -0x10, false);
            }

         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         *(undefined4*)param_1 = 0;
         *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
         goto LAB_0011e956;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   call_with_variant_args_dv<__UnexistingClass,double>(p_Var3, (_func_void_double*)param_2[0xb], (Variant**)param_2[0xc], (int)param_4, in_R8, in_R9);
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   LAB_0011e956:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void call_with_variant_args_dv<__UnexistingClass, int>(__UnexistingClass*, void
   (__UnexistingClass::*)(int), Variant const**, int, Callable::CallError&, Vector<Variant> const&)
    */void call_with_variant_args_dv<__UnexistingClass,int>(__UnexistingClass *param_1, _func_void_int *param_2, Variant **param_3, int param_4, CallError *param_5, Vector *param_6) {
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
      goto LAB_0011ec3d;
   }

   lVar1 = *(long*)( in_stack_00000008 + 8 );
   if (lVar1 == 0) {
      if (uVar8 != 1) goto LAB_0011eca0;
   }
 else {
      lVar2 = *(long*)( lVar1 + -8 );
      if ((int)lVar2 < (int)( uVar8 ^ 1 )) {
         LAB_0011eca0:uVar6 = 4;
         LAB_0011ec3d:*(undefined4*)param_6 = uVar6;
         *(undefined4*)( param_6 + 8 ) = 1;
         return;
      }

      if (uVar8 != 1) {
         lVar7 = (long)( (int)lVar2 + -1 );
         if (lVar2 <= lVar7) {
            _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar7, lVar2, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         this(Variant * )(lVar1 + lVar7 * 0x18);
         goto LAB_0011ebbb;
      }

   }

   this * (Variant**)CONCAT44(in_register_0000000c, param_4);
   LAB_0011ebbb:*(undefined4*)param_6 = 0;
   if (( (ulong)param_2 & 1 ) != 0) {
      param_2 = *(_func_void_int**)( param_2 + *(long*)( param_1 + (long)param_3 ) + -1 );
   }

   cVar5 = Variant::can_convert_strict(*(undefined4*)this, 2);
   uVar4 = _LC251;
   if (cVar5 == '\0') {
      *(undefined4*)param_6 = 2;
      *(undefined8*)( param_6 + 4 ) = uVar4;
   }

   Variant::operator_cast_to_int(this);
   /* WARNING: Could not recover jumptable at 0x0011ec16. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( *param_2 )((int)( param_1 + (long)param_3 ));
   return;
}
/* MethodBindT<int>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindT<int>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
   p_Var3 = (__UnexistingClass*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( p_Var3 != (__UnexistingClass*)0x0 ) && ( *(long*)( p_Var3 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( p_Var3 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_2 + 3 ));
      if (*(long*)( p_Var3 + 8 ) == 0) {
         plVar2 = *(long**)( p_Var3 + 0x118 );
         if (plVar2 == (long*)0x0) {
            plVar2 = (long*)( **(code**)( *(long*)p_Var3 + 0x40 ) )(p_Var3);
         }

      }
 else {
         plVar2 = (long*)( *(long*)( p_Var3 + 8 ) + 0x20 );
      }

      in_R8 = (CallError*)( (ulong)in_R8 & 0xffffffff );
      if (local_48 == (char*)*plVar2) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error(&_LC62, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         lVar1 = local_50;
         if (local_50 != 0) {
            LOCK();
            plVar2 = (long*)( local_50 + -0x10 );
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
               local_50 = 0;
               Memory::free_static((void*)( lVar1 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         *(undefined4*)param_1 = 0;
         *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
         goto LAB_0011ed06;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   call_with_variant_args_dv<__UnexistingClass,int>(p_Var3, (_func_void_int*)param_2[0xb], (Variant**)param_2[0xc], (int)param_4, in_R8, in_R9);
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   LAB_0011ed06:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void call_with_variant_args_dv<__UnexistingClass, bool>(__UnexistingClass*, void
   (__UnexistingClass::*)(bool), Variant const**, int, Callable::CallError&, Vector<Variant> const&)
    */void call_with_variant_args_dv<__UnexistingClass,bool>(__UnexistingClass *param_1, _func_void_bool *param_2, Variant **param_3, int param_4, CallError *param_5, Vector *param_6) {
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
      goto LAB_0011efed;
   }

   lVar1 = *(long*)( in_stack_00000008 + 8 );
   if (lVar1 == 0) {
      if (uVar8 != 1) goto LAB_0011f050;
   }
 else {
      lVar2 = *(long*)( lVar1 + -8 );
      if ((int)lVar2 < (int)( uVar8 ^ 1 )) {
         LAB_0011f050:uVar6 = 4;
         LAB_0011efed:*(undefined4*)param_6 = uVar6;
         *(undefined4*)( param_6 + 8 ) = 1;
         return;
      }

      if (uVar8 != 1) {
         lVar7 = (long)( (int)lVar2 + -1 );
         if (lVar2 <= lVar7) {
            _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar7, lVar2, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         this(Variant * )(lVar1 + lVar7 * 0x18);
         goto LAB_0011ef6b;
      }

   }

   this * (Variant**)CONCAT44(in_register_0000000c, param_4);
   LAB_0011ef6b:*(undefined4*)param_6 = 0;
   if (( (ulong)param_2 & 1 ) != 0) {
      param_2 = *(_func_void_bool**)( param_2 + *(long*)( param_1 + (long)param_3 ) + -1 );
   }

   cVar5 = Variant::can_convert_strict(*(undefined4*)this, 1);
   uVar4 = _LC253;
   if (cVar5 == '\0') {
      *(undefined4*)param_6 = 2;
      *(undefined8*)( param_6 + 4 ) = uVar4;
   }

   Variant::operator_cast_to_bool(this);
   /* WARNING: Could not recover jumptable at 0x0011efc7. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( *param_2 )(SUB81(param_1 + (long)param_3, 0));
   return;
}
/* MethodBindT<bool>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindT<bool>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
   p_Var3 = (__UnexistingClass*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( p_Var3 != (__UnexistingClass*)0x0 ) && ( *(long*)( p_Var3 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( p_Var3 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_2 + 3 ));
      if (*(long*)( p_Var3 + 8 ) == 0) {
         plVar2 = *(long**)( p_Var3 + 0x118 );
         if (plVar2 == (long*)0x0) {
            plVar2 = (long*)( **(code**)( *(long*)p_Var3 + 0x40 ) )(p_Var3);
         }

      }
 else {
         plVar2 = (long*)( *(long*)( p_Var3 + 8 ) + 0x20 );
      }

      in_R8 = (CallError*)( (ulong)in_R8 & 0xffffffff );
      if (local_48 == (char*)*plVar2) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error(&_LC62, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         lVar1 = local_50;
         if (local_50 != 0) {
            LOCK();
            plVar2 = (long*)( local_50 + -0x10 );
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
               local_50 = 0;
               Memory::free_static((void*)( lVar1 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         *(undefined4*)param_1 = 0;
         *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
         goto LAB_0011f0b6;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   call_with_variant_args_dv<__UnexistingClass,bool>(p_Var3, (_func_void_bool*)param_2[0xb], (Variant**)param_2[0xc], (int)param_4, in_R8, in_R9);
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   LAB_0011f0b6:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void call_get_argument_type_info_helper<Color const&>(int, int&, PropertyInfo&) */void call_get_argument_type_info_helper<Color_const&>(int param_1, int *param_2, PropertyInfo *param_3) {
   undefined1 auVar1[16];
   undefined1 auVar2[16];
   undefined8 uVar3;
   long lVar4;
   int iVar5;
   long in_FS_OFFSET;
   undefined8 local_98;
   long local_90;
   long local_88;
   long local_80;
   undefined *local_78;
   undefined1 local_70[16];
   int local_60;
   long local_58;
   undefined4 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar5 = *param_2;
   if (iVar5 != param_1) goto LAB_0011f2d9;
   local_88 = 0;
   local_90 = 0;
   local_78 = &_LC35;
   auVar1._8_8_ = 0;
   auVar1._0_8_ = local_70._8_8_;
   local_70 = auVar1 << 0x40;
   String::parse_latin1((StrRange*)&local_90);
   local_98 = 0;
   local_78 = (undefined*)CONCAT44(local_78._4_4_, 0x14);
   local_60 = 0;
   local_58 = 0;
   local_70 = (undefined1[16])0x0;
   if (local_90 == 0) {
      LAB_0011f3d8:local_50 = 6;
      StringName::operator =((StringName*)( local_70 + 8 ), (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 6;
      if (local_60 != 0x11) goto LAB_0011f3d8;
      StringName::StringName((StringName*)&local_80, (CowData<char32_t>*)&local_58, false);
      if (local_70._8_8_ == local_80) {
         if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         local_70._8_8_ = local_80;
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
      StringName::unref();
   }

   *(undefined4*)param_3 = local_78._0_4_;
   if (*(long*)( param_3 + 8 ) != local_70._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( param_3 + 8 ));
      uVar3 = local_70._0_8_;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_70._8_8_;
      local_70 = auVar2 << 0x40;
      *(undefined8*)( param_3 + 8 ) = uVar3;
   }

   if (*(long*)( param_3 + 0x10 ) != local_70._8_8_) {
      StringName::unref();
      uVar3 = local_70._8_8_;
      local_70._8_8_ = 0;
      *(undefined8*)( param_3 + 0x10 ) = uVar3;
   }

   *(int*)( param_3 + 0x18 ) = local_60;
   if (*(long*)( param_3 + 0x20 ) != local_58) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( param_3 + 0x20 ));
      lVar4 = local_58;
      local_58 = 0;
      *(long*)( param_3 + 0x20 ) = lVar4;
   }

   *(undefined4*)( param_3 + 0x28 ) = local_50;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_78);
   iVar5 = *param_2;
   LAB_0011f2d9:*param_2 = iVar5 + 1;
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* void call_get_argument_type_info<Transform2D const&, Vector2 const&, Color const&, Color const&,
   unsigned int>(int, PropertyInfo&) */void call_get_argument_type_info<Transform2D_const&,Vector2_const&,Color_const&,Color_const&,unsigned_int>(int param_1, PropertyInfo *param_2) {
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
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_94 = 0;
   if (param_1 == 0) {
      local_80 = 0;
      local_88 = 0;
      local_78 = &_LC35;
      local_70 = 0;
      String::parse_latin1((StrRange*)&local_88);
      uVar2 = 0xb;
   }
 else {
      local_94 = 1;
      if (param_1 != 1) goto LAB_0011f525;
      local_80 = 0;
      local_88 = 0;
      local_78 = &_LC35;
      local_70 = 0;
      String::parse_latin1((StrRange*)&local_88);
      uVar2 = 5;
   }

   local_90 = 0;
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_78, uVar2, &local_90, 0, (CowData<char32_t>*)&local_88, 6, &local_80);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
      StringName::unref();
   }

   *(undefined4*)param_2 = local_78._0_4_;
   if (*(long*)( param_2 + 8 ) != local_70) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( param_2 + 8 ));
      lVar1 = local_70;
      local_70 = 0;
      *(long*)( param_2 + 8 ) = lVar1;
   }

   if (*(long*)( param_2 + 0x10 ) != local_68) {
      StringName::unref();
      lVar1 = local_68;
      local_68 = 0;
      *(long*)( param_2 + 0x10 ) = lVar1;
   }

   *(undefined4*)( param_2 + 0x18 ) = local_60;
   if (*(long*)( param_2 + 0x20 ) != local_58) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( param_2 + 0x20 ));
      lVar1 = local_58;
      local_58 = 0;
      *(long*)( param_2 + 0x20 ) = lVar1;
   }

   *(undefined4*)( param_2 + 0x28 ) = local_50;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_78);
   LAB_0011f525:local_94 = 2;
   call_get_argument_type_info_helper<Color_const&>(param_1, &local_94, param_2);
   call_get_argument_type_info_helper<Color_const&>(param_1, &local_94, param_2);
   if (param_1 == local_94) {
      local_80 = 0;
      local_88 = 0;
      local_78 = &_LC35;
      local_70 = 0;
      String::parse_latin1((StrRange*)&local_88);
      local_90 = 0;
      PropertyInfo::PropertyInfo((PropertyInfo*)&local_78, 2, (CowData<char32_t>*)&local_90, 0, (StrRange*)&local_88, 6, &local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

      *(undefined4*)param_2 = local_78._0_4_;
      if (*(long*)( param_2 + 8 ) != local_70) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( param_2 + 8 ));
         lVar1 = local_70;
         local_70 = 0;
         *(long*)( param_2 + 8 ) = lVar1;
      }

      if (*(long*)( param_2 + 0x10 ) != local_68) {
         StringName::unref();
         lVar1 = local_68;
         local_68 = 0;
         *(long*)( param_2 + 0x10 ) = lVar1;
      }

      *(undefined4*)( param_2 + 0x18 ) = local_60;
      if (*(long*)( param_2 + 0x20 ) != local_58) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( param_2 + 0x20 ));
         lVar1 = local_58;
         local_58 = 0;
         *(long*)( param_2 + 0x20 ) = lVar1;
      }

      *(undefined4*)( param_2 + 0x28 ) = local_50;
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_78);
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<Transform2D const&, Vector2 const&, Color const&, Color const&, unsigned
   int>::_gen_argument_type_info(int) const */PropertyInfo *MethodBindT<Transform2D_const&,Vector2_const&,Color_const&,Color_const&,unsigned_int>::_gen_argument_type_info(int param_1) {
   int in_EDX;
   undefined4 in_register_0000003c;
   PropertyInfo *pPVar1;
   pPVar1 = (PropertyInfo*)CONCAT44(in_register_0000003c, param_1);
   *(undefined4*)pPVar1 = 0;
   *(undefined4*)( pPVar1 + 0x18 ) = 0;
   *(undefined8*)( pPVar1 + 0x20 ) = 0;
   *(undefined4*)( pPVar1 + 0x28 ) = 6;
   *(undefined1(*) [16])( pPVar1 + 8 ) = (undefined1[16])0x0;
   call_get_argument_type_info<Transform2D_const&,Vector2_const&,Color_const&,Color_const&,unsigned_int>(in_EDX, pPVar1);
   return pPVar1;
}
/* WARNING: Control flow encountered bad instruction data *//* List<PropertyInfo, DefaultAllocator>::~List() */void List<PropertyInfo,DefaultAllocator>::~List(List<PropertyInfo,DefaultAllocator> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodDefinition::~MethodDefinition() */void MethodDefinition::~MethodDefinition(MethodDefinition *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* PropertyInfo::PropertyInfo(Variant::Type, String const&, PropertyHint, String const&, unsigned
   int, StringName const&) */void PropertyInfo::PropertyInfo(void) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* PropertyInfo::~PropertyInfo() */void PropertyInfo::~PropertyInfo(PropertyInfo *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<unsigned int>::~MethodBindTRC() */void MethodBindTRC<unsigned_int>::~MethodBindTRC(MethodBindTRC<unsigned_int> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<unsigned int>::~MethodBindT() */void MethodBindT<unsigned_int>::~MethodBindT(MethodBindT<unsigned_int> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<bool>::~MethodBindTRC() */void MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<float>::~MethodBindTRC() */void MethodBindTRC<float>::~MethodBindTRC(MethodBindTRC<float> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<float>::~MethodBindT() */void MethodBindT<float>::~MethodBindT(MethodBindT<float> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<Node*>::~MethodBindT() */void MethodBindT<Node*>::~MethodBindT(MethodBindT<Node*> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<int>::~MethodBindTRC() */void MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<int>::~MethodBindT() */void MethodBindT<int>::~MethodBindT(MethodBindT<int> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<double>::~MethodBindTRC() */void MethodBindTRC<double>::~MethodBindTRC(MethodBindTRC<double> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<double>::~MethodBindT() */void MethodBindT<double>::~MethodBindT(MethodBindT<double> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<Transform2D const&, Vector2 const&, Color const&, Color const&, unsigned
   int>::~MethodBindT() */void MethodBindT<Transform2D_const&,Vector2_const&,Color_const&,Color_const&,unsigned_int>::~MethodBindT(MethodBindT<Transform2D_const&,Vector2_const&,Color_const&,Color_const&,unsigned_int> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<NodePath>::~MethodBindTRC() */void MethodBindTRC<NodePath>::~MethodBindTRC(MethodBindTRC<NodePath> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<NodePath const&>::~MethodBindT() */void MethodBindT<NodePath_const&>::~MethodBindT(MethodBindT<NodePath_const&> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<bool>::~MethodBindT() */void MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<Rect2>::~MethodBindTRC() */void MethodBindTRC<Rect2>::~MethodBindTRC(MethodBindTRC<Rect2> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<Ref<Texture2D>>::~MethodBindTRC() */void MethodBindTRC<Ref<Texture2D>>::~MethodBindTRC(MethodBindTRC<Ref<Texture2D>> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<Ref<Texture2D> const&>::~MethodBindT() */void MethodBindT<Ref<Texture2D>const&>::~MethodBindT(MethodBindT<Ref<Texture2D>const&> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<GPUParticles2D::DrawOrder>::~MethodBindTRC() */void MethodBindTRC<GPUParticles2D::DrawOrder>::~MethodBindTRC(MethodBindTRC<GPUParticles2D::DrawOrder> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<GPUParticles2D::DrawOrder>::~MethodBindT() */void MethodBindT<GPUParticles2D::DrawOrder>::~MethodBindT(MethodBindT<GPUParticles2D::DrawOrder> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<Ref<Material>>::~MethodBindTRC() */void MethodBindTRC<Ref<Material>>::~MethodBindTRC(MethodBindTRC<Ref<Material>> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<Ref<Material> const&>::~MethodBindT() */void MethodBindT<Ref<Material>const&>::~MethodBindT(MethodBindT<Ref<Material>const&> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<Rect2 const&>::~MethodBindT() */void MethodBindT<Rect2_const&>::~MethodBindT(MethodBindT<Rect2_const&> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<>::~MethodBindT() */void MethodBindT<>::~MethodBindT(MethodBindT<> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* CallableCustomMethodPointer<GPUParticles2D, void>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<GPUParticles2D,void>::~CallableCustomMethodPointer(CallableCustomMethodPointer<GPUParticles2D,void> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* StringName::~StringName() */void StringName::~StringName(StringName *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}


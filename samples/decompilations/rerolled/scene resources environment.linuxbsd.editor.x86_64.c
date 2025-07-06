/* Environment::get_rid() const */undefined8 Environment::get_rid(Environment *this) {
   return *(undefined8*)( this + 0x240 );
}/* Environment::get_background() const */undefined4 Environment::get_background(Environment *this) {
   return *(undefined4*)( this + 0x248 );
}/* Environment::get_sky_custom_fov() const */undefined4 Environment::get_sky_custom_fov(Environment *this) {
   return *(undefined4*)( this + 600 );
}/* Environment::get_sky_rotation() const */undefined1  [16] __thiscallEnvironment::get_sky_rotation(Environment *this) {
   long in_FS_OFFSET;
   undefined1 auVar1[16];
   if (*(long*)( in_FS_OFFSET + 0x28 ) == *(long*)( in_FS_OFFSET + 0x28 )) {
      auVar1._12_4_ = 0;
      auVar1._0_12_ = *(undefined1(*) [12])( this + 0x25c );
      return auVar1;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* Environment::get_bg_color() const */undefined1  [16] __thiscallEnvironment::get_bg_color(Environment *this) {
   return *(undefined1(*) [16])( this + 0x268 );
}/* Environment::get_bg_energy_multiplier() const */undefined4 Environment::get_bg_energy_multiplier(Environment *this) {
   return *(undefined4*)( this + 0x280 );
}/* Environment::get_bg_intensity() const */undefined4 Environment::get_bg_intensity(Environment *this) {
   return *(undefined4*)( this + 0x284 );
}/* Environment::get_canvas_max_layer() const */undefined4 Environment::get_canvas_max_layer(Environment *this) {
   return *(undefined4*)( this + 0x278 );
}/* Environment::get_camera_feed_id() const */undefined4 Environment::get_camera_feed_id(Environment *this) {
   return *(undefined4*)( this + 0x27c );
}/* Environment::get_ambient_light_color() const */undefined1  [16] __thiscallEnvironment::get_ambient_light_color(Environment *this) {
   return *(undefined1(*) [16])( this + 0x288 );
}/* Environment::get_ambient_source() const */undefined4 Environment::get_ambient_source(Environment *this) {
   return *(undefined4*)( this + 0x298 );
}/* Environment::get_ambient_light_energy() const */undefined4 Environment::get_ambient_light_energy(Environment *this) {
   return *(undefined4*)( this + 0x29c );
}/* Environment::get_ambient_light_sky_contribution() const */undefined4 Environment::get_ambient_light_sky_contribution(Environment *this) {
   return *(undefined4*)( this + 0x2a0 );
}/* Environment::get_reflection_source() const */undefined4 Environment::get_reflection_source(Environment *this) {
   return *(undefined4*)( this + 0x2a4 );
}/* Environment::get_tonemapper() const */undefined4 Environment::get_tonemapper(Environment *this) {
   return *(undefined4*)( this + 0x2a8 );
}/* Environment::get_tonemap_exposure() const */undefined4 Environment::get_tonemap_exposure(Environment *this) {
   return *(undefined4*)( this + 0x2ac );
}/* Environment::get_tonemap_white() const */undefined4 Environment::get_tonemap_white(Environment *this) {
   return *(undefined4*)( this + 0x2b0 );
}/* Environment::is_ssr_enabled() const */Environment Environment::is_ssr_enabled(Environment *this) {
   return this[0x2b4];
}/* Environment::get_ssr_max_steps() const */undefined4 Environment::get_ssr_max_steps(Environment *this) {
   return *(undefined4*)( this + 0x2b8 );
}/* Environment::get_ssr_fade_in() const */undefined4 Environment::get_ssr_fade_in(Environment *this) {
   return *(undefined4*)( this + 700 );
}/* Environment::get_ssr_fade_out() const */undefined4 Environment::get_ssr_fade_out(Environment *this) {
   return *(undefined4*)( this + 0x2c0 );
}/* Environment::get_ssr_depth_tolerance() const */undefined4 Environment::get_ssr_depth_tolerance(Environment *this) {
   return *(undefined4*)( this + 0x2c4 );
}/* Environment::is_ssao_enabled() const */Environment Environment::is_ssao_enabled(Environment *this) {
   return this[0x2c8];
}/* Environment::get_ssao_radius() const */undefined4 Environment::get_ssao_radius(Environment *this) {
   return *(undefined4*)( this + 0x2cc );
}/* Environment::get_ssao_intensity() const */undefined4 Environment::get_ssao_intensity(Environment *this) {
   return *(undefined4*)( this + 0x2d0 );
}/* Environment::get_ssao_power() const */undefined4 Environment::get_ssao_power(Environment *this) {
   return *(undefined4*)( this + 0x2d4 );
}/* Environment::get_ssao_detail() const */undefined4 Environment::get_ssao_detail(Environment *this) {
   return *(undefined4*)( this + 0x2d8 );
}/* Environment::get_ssao_horizon() const */undefined4 Environment::get_ssao_horizon(Environment *this) {
   return *(undefined4*)( this + 0x2dc );
}/* Environment::get_ssao_sharpness() const */undefined4 Environment::get_ssao_sharpness(Environment *this) {
   return *(undefined4*)( this + 0x2e0 );
}/* Environment::get_ssao_direct_light_affect() const */undefined4 Environment::get_ssao_direct_light_affect(Environment *this) {
   return *(undefined4*)( this + 0x2e4 );
}/* Environment::get_ssao_ao_channel_affect() const */undefined4 Environment::get_ssao_ao_channel_affect(Environment *this) {
   return *(undefined4*)( this + 0x2e8 );
}/* Environment::is_ssil_enabled() const */Environment Environment::is_ssil_enabled(Environment *this) {
   return this[0x2ec];
}/* Environment::get_ssil_radius() const */undefined4 Environment::get_ssil_radius(Environment *this) {
   return *(undefined4*)( this + 0x2f0 );
}/* Environment::get_ssil_intensity() const */undefined4 Environment::get_ssil_intensity(Environment *this) {
   return *(undefined4*)( this + 0x2f4 );
}/* Environment::get_ssil_sharpness() const */undefined4 Environment::get_ssil_sharpness(Environment *this) {
   return *(undefined4*)( this + 0x2f8 );
}/* Environment::get_ssil_normal_rejection() const */undefined4 Environment::get_ssil_normal_rejection(Environment *this) {
   return *(undefined4*)( this + 0x2fc );
}/* Environment::is_sdfgi_enabled() const */Environment Environment::is_sdfgi_enabled(Environment *this) {
   return this[0x300];
}/* Environment::get_sdfgi_cascades() const */undefined4 Environment::get_sdfgi_cascades(Environment *this) {
   return *(undefined4*)( this + 0x304 );
}/* Environment::get_sdfgi_min_cell_size() const */undefined4 Environment::get_sdfgi_min_cell_size(Environment *this) {
   return *(undefined4*)( this + 0x308 );
}/* Environment::get_sdfgi_max_distance() const */float Environment::get_sdfgi_max_distance(Environment *this) {
   uint uVar1;
   uint uVar2;
   float fVar3;
   uVar1 = *(uint*)( this + 0x304 );
   fVar3 = _LC0 * *(float*)( this + 0x308 );
   if (0 < (int)uVar1) {
      uVar2 = 0;
      if (( uVar1 & 1 ) != 0) {
         uVar2 = 1;
         fVar3 = fVar3 + fVar3;
         if (uVar1 == 1) {
            return fVar3;
         }
      }
      do {
         uVar2 = uVar2 + 2;
         fVar3 = fVar3 + fVar3 + fVar3 + fVar3;
      } while ( uVar2 != uVar1 );
   }
   return fVar3;
}/* Environment::get_sdfgi_cascade0_distance() const */float Environment::get_sdfgi_cascade0_distance(Environment *this) {
   return _LC0 * *(float*)( this + 0x308 );
}/* Environment::get_sdfgi_y_scale() const */undefined4 Environment::get_sdfgi_y_scale(Environment *this) {
   return *(undefined4*)( this + 0x30c );
}/* Environment::is_sdfgi_using_occlusion() const */Environment Environment::is_sdfgi_using_occlusion(Environment *this) {
   return this[0x310];
}/* Environment::get_sdfgi_bounce_feedback() const */undefined4 Environment::get_sdfgi_bounce_feedback(Environment *this) {
   return *(undefined4*)( this + 0x314 );
}/* Environment::is_sdfgi_reading_sky_light() const */Environment Environment::is_sdfgi_reading_sky_light(Environment *this) {
   return this[0x318];
}/* Environment::get_sdfgi_energy() const */undefined4 Environment::get_sdfgi_energy(Environment *this) {
   return *(undefined4*)( this + 0x31c );
}/* Environment::get_sdfgi_normal_bias() const */undefined4 Environment::get_sdfgi_normal_bias(Environment *this) {
   return *(undefined4*)( this + 800 );
}/* Environment::get_sdfgi_probe_bias() const */undefined4 Environment::get_sdfgi_probe_bias(Environment *this) {
   return *(undefined4*)( this + 0x324 );
}/* Environment::is_glow_enabled() const */Environment Environment::is_glow_enabled(Environment *this) {
   return this[0x328];
}/* Environment::is_glow_normalized() const */Environment Environment::is_glow_normalized(Environment *this) {
   return this[0x340];
}/* Environment::get_glow_intensity() const */undefined4 Environment::get_glow_intensity(Environment *this) {
   return *(undefined4*)( this + 0x344 );
}/* Environment::get_glow_strength() const */undefined4 Environment::get_glow_strength(Environment *this) {
   return *(undefined4*)( this + 0x348 );
}/* Environment::get_glow_mix() const */undefined4 Environment::get_glow_mix(Environment *this) {
   return *(undefined4*)( this + 0x34c );
}/* Environment::get_glow_bloom() const */undefined4 Environment::get_glow_bloom(Environment *this) {
   return *(undefined4*)( this + 0x350 );
}/* Environment::get_glow_blend_mode() const */undefined4 Environment::get_glow_blend_mode(Environment *this) {
   return *(undefined4*)( this + 0x354 );
}/* Environment::get_glow_hdr_bleed_threshold() const */undefined4 Environment::get_glow_hdr_bleed_threshold(Environment *this) {
   return *(undefined4*)( this + 0x358 );
}/* Environment::get_glow_hdr_bleed_scale() const */undefined4 Environment::get_glow_hdr_bleed_scale(Environment *this) {
   return *(undefined4*)( this + 0x35c );
}/* Environment::get_glow_hdr_luminance_cap() const */undefined4 Environment::get_glow_hdr_luminance_cap(Environment *this) {
   return *(undefined4*)( this + 0x360 );
}/* Environment::get_glow_map_strength() const */undefined4 Environment::get_glow_map_strength(Environment *this) {
   return *(undefined4*)( this + 0x364 );
}/* Environment::is_fog_enabled() const */Environment Environment::is_fog_enabled(Environment *this) {
   return this[0x370];
}/* Environment::get_fog_mode() const */undefined4 Environment::get_fog_mode(Environment *this) {
   return *(undefined4*)( this + 0x374 );
}/* Environment::get_fog_light_color() const */undefined1  [16] __thiscallEnvironment::get_fog_light_color(Environment *this) {
   return *(undefined1(*) [16])( this + 0x378 );
}/* Environment::get_fog_light_energy() const */undefined4 Environment::get_fog_light_energy(Environment *this) {
   return *(undefined4*)( this + 0x388 );
}/* Environment::get_fog_sun_scatter() const */undefined4 Environment::get_fog_sun_scatter(Environment *this) {
   return *(undefined4*)( this + 0x38c );
}/* Environment::get_fog_density() const */undefined4 Environment::get_fog_density(Environment *this) {
   return *(undefined4*)( this + 0x390 );
}/* Environment::get_fog_height() const */undefined4 Environment::get_fog_height(Environment *this) {
   return *(undefined4*)( this + 0x394 );
}/* Environment::get_fog_height_density() const */undefined4 Environment::get_fog_height_density(Environment *this) {
   return *(undefined4*)( this + 0x398 );
}/* Environment::get_fog_aerial_perspective() const */undefined4 Environment::get_fog_aerial_perspective(Environment *this) {
   return *(undefined4*)( this + 0x39c );
}/* Environment::get_fog_sky_affect() const */undefined4 Environment::get_fog_sky_affect(Environment *this) {
   return *(undefined4*)( this + 0x3a0 );
}/* Environment::get_fog_depth_curve() const */undefined4 Environment::get_fog_depth_curve(Environment *this) {
   return *(undefined4*)( this + 0x3a4 );
}/* Environment::get_fog_depth_begin() const */undefined4 Environment::get_fog_depth_begin(Environment *this) {
   return *(undefined4*)( this + 0x3a8 );
}/* Environment::get_fog_depth_end() const */undefined4 Environment::get_fog_depth_end(Environment *this) {
   return *(undefined4*)( this + 0x3ac );
}/* Environment::is_volumetric_fog_enabled() const */Environment Environment::is_volumetric_fog_enabled(Environment *this) {
   return this[0x3b0];
}/* Environment::get_volumetric_fog_density() const */undefined4 Environment::get_volumetric_fog_density(Environment *this) {
   return *(undefined4*)( this + 0x3b4 );
}/* Environment::get_volumetric_fog_albedo() const */undefined1  [16] __thiscallEnvironment::get_volumetric_fog_albedo(Environment *this) {
   return *(undefined1(*) [16])( this + 0x3b8 );
}/* Environment::get_volumetric_fog_emission() const */undefined1  [16] __thiscallEnvironment::get_volumetric_fog_emission(Environment *this) {
   return *(undefined1(*) [16])( this + 0x3c8 );
}/* Environment::get_volumetric_fog_emission_energy() const */undefined4 Environment::get_volumetric_fog_emission_energy(Environment *this) {
   return *(undefined4*)( this + 0x3d8 );
}/* Environment::get_volumetric_fog_anisotropy() const */undefined4 Environment::get_volumetric_fog_anisotropy(Environment *this) {
   return *(undefined4*)( this + 0x3dc );
}/* Environment::get_volumetric_fog_length() const */undefined4 Environment::get_volumetric_fog_length(Environment *this) {
   return *(undefined4*)( this + 0x3e0 );
}/* Environment::get_volumetric_fog_detail_spread() const */undefined4 Environment::get_volumetric_fog_detail_spread(Environment *this) {
   return *(undefined4*)( this + 0x3e4 );
}/* Environment::get_volumetric_fog_gi_inject() const */undefined4 Environment::get_volumetric_fog_gi_inject(Environment *this) {
   return *(undefined4*)( this + 1000 );
}/* Environment::get_volumetric_fog_ambient_inject() const */undefined4 Environment::get_volumetric_fog_ambient_inject(Environment *this) {
   return *(undefined4*)( this + 0x3ec );
}/* Environment::get_volumetric_fog_sky_affect() const */undefined4 Environment::get_volumetric_fog_sky_affect(Environment *this) {
   return *(undefined4*)( this + 0x3f0 );
}/* Environment::is_volumetric_fog_temporal_reprojection_enabled() const */Environment Environment::is_volumetric_fog_temporal_reprojection_enabled(Environment *this) {
   return this[0x3f4];
}/* Environment::get_volumetric_fog_temporal_reprojection_amount() const */undefined4 Environment::get_volumetric_fog_temporal_reprojection_amount(Environment *this) {
   return *(undefined4*)( this + 0x3f8 );
}/* Environment::is_adjustment_enabled() const */Environment Environment::is_adjustment_enabled(Environment *this) {
   return this[0x3fc];
}/* Environment::get_adjustment_brightness() const */undefined4 Environment::get_adjustment_brightness(Environment *this) {
   return *(undefined4*)( this + 0x400 );
}/* Environment::get_adjustment_contrast() const */undefined4 Environment::get_adjustment_contrast(Environment *this) {
   return *(undefined4*)( this + 0x404 );
}/* Environment::get_adjustment_saturation() const */undefined4 Environment::get_adjustment_saturation(Environment *this) {
   return *(undefined4*)( this + 0x408 );
}/* Environment::set_sky_custom_fov(float) */void Environment::set_sky_custom_fov(Environment *this, float param_1) {
   long *plVar1;
   *(float*)( this + 600 ) = param_1;
   plVar1 = (long*)RenderingServer::get_singleton();
   for (int i_1713 = 0; i_1713 < 2; i_1713++) {
      /* WARNING: Could not recover jumptable at 0x001006ae. Too many branches */
   }
   ( **(code**)( *plVar1 + 0xbc8 ) )(param_1, plVar1, *(undefined8*)( this + 0x240 ));
   return;
}/* Environment::set_bg_color(Color const&) */void Environment::set_bg_color(Environment *this, Color *param_1) {
   undefined8 uVar1;
   long *plVar2;
   uVar1 = *(undefined8*)( param_1 + 8 );
   *(undefined8*)( this + 0x268 ) = *(undefined8*)param_1;
   *(undefined8*)( this + 0x270 ) = uVar1;
   plVar2 = (long*)RenderingServer::get_singleton();
   for (int i_1714 = 0; i_1714 < 2; i_1714++) {
      /* WARNING: Could not recover jumptable at 0x001006ed. Too many branches */
   }
   ( **(code**)( *plVar2 + 0xbd8 ) )(plVar2, *(undefined8*)( this + 0x240 ), param_1);
   return;
}/* Environment::set_canvas_max_layer(int) */void Environment::set_canvas_max_layer(Environment *this, int param_1) {
   long *plVar1;
   *(int*)( this + 0x278 ) = param_1;
   plVar1 = (long*)RenderingServer::get_singleton();
   for (int i_1715 = 0; i_1715 < 2; i_1715++) {
      /* WARNING: Could not recover jumptable at 0x00100726. Too many branches */
   }
   ( **(code**)( *plVar1 + 0xbe8 ) )(plVar1, *(undefined8*)( this + 0x240 ), param_1);
   return;
}/* Environment::set_camera_feed_id(int) */void Environment::set_camera_feed_id(Environment *this, int param_1) {
   long *plVar1;
   *(int*)( this + 0x27c ) = param_1;
   plVar1 = (long*)RenderingServer::get_singleton();
   for (int i_1716 = 0; i_1716 < 2; i_1716++) {
      /* WARNING: Could not recover jumptable at 0x0010075e. Too many branches */
   }
   ( **(code**)( *plVar1 + 0xbf8 ) )(plVar1, *(undefined8*)( this + 0x240 ), *(undefined4*)( this + 0x27c ));
   return;
}/* Environment::_update_adjustment() */void Environment::_update_adjustment(Environment *this) {
   undefined8 uVar1;
   long *plVar2;
   uVar1 = 0;
   if (*(long**)( this + 0x410 ) != (long*)0x0) {
      uVar1 = ( **(code**)( **(long**)( this + 0x410 ) + 0x1c0 ) )();
   }
   plVar2 = (long*)RenderingServer::get_singleton();
   for (int i_1717 = 0; i_1717 < 2; i_1717++) {
      /* WARNING: Could not recover jumptable at 0x001007cf. Too many branches */
   }
   ( **(code**)( *plVar2 + 0xc18 ) )(*(undefined4*)( this + 0x400 ), *(undefined4*)( this + 0x404 ), *(undefined4*)( this + 0x408 ), plVar2, *(undefined8*)( this + 0x240 ), this[0x3fc], this[0x40c], uVar1);
   return;
}/* Environment::set_adjustment_brightness(float) */void Environment::set_adjustment_brightness(Environment *this, float param_1) {
   *(float*)( this + 0x400 ) = param_1;
   _update_adjustment(this);
   return;
}/* Environment::set_adjustment_contrast(float) */void Environment::set_adjustment_contrast(Environment *this, float param_1) {
   *(float*)( this + 0x404 ) = param_1;
   _update_adjustment(this);
   return;
}/* Environment::set_adjustment_saturation(float) */void Environment::set_adjustment_saturation(Environment *this, float param_1) {
   *(float*)( this + 0x408 ) = param_1;
   _update_adjustment(this);
   return;
}/* Environment::set_adjustment_enabled(bool) */void Environment::set_adjustment_enabled(Environment *this, bool param_1) {
   this[0x3fc] = (Environment)param_1;
   _update_adjustment(this);
   Object::notify_property_list_changed();
   return;
}/* Environment::set_sky_rotation(Vector3 const&) */void Environment::set_sky_rotation(Environment *this, Vector3 *param_1) {
   code *pcVar1;
   long *plVar2;
   long in_FS_OFFSET;
   undefined1 local_58[16];
   undefined1 local_48[16];
   undefined4 local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)( this + 0x25c ) = *(undefined8*)param_1;
   *(undefined4*)( this + 0x264 ) = *(undefined4*)( param_1 + 8 );
   plVar2 = (long*)RenderingServer::get_singleton();
   local_38 = 0x3f800000;
   local_58 = ZEXT416(_LC2);
   pcVar1 = *(code**)( *plVar2 + 0xbd0 );
   local_48 = ZEXT416(_LC2);
   Basis::set_euler(local_58, param_1, 2);
   ( *pcVar1 )(plVar2, *(undefined8*)( this + 0x240 ), local_58);
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* Environment::get_glow_level(int) const */undefined4 Environment::get_glow_level(Environment *this, int param_1) {
   long lVar1;
   code *pcVar2;
   long lVar3;
   long lVar4;
   lVar3 = (long)param_1;
   if (6 < (uint)param_1) {
      _err_print_index_error("get_glow_level", "scene/resources/environment.cpp", 0x260, lVar3, 7, "p_level", "RenderingServer::MAX_GLOW_LEVELS", "", false, false);
      return 0;
   }
   lVar1 = *(long*)( this + 0x338 );
   if (lVar1 == 0) {
      lVar4 = 0;
   } else {
      lVar4 = *(long*)( lVar1 + -8 );
      if (lVar3 < lVar4) {
         return *(undefined4*)( lVar1 + lVar3 * 4 );
      }
   }
   _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar3, lVar4, "p_index", "size()", "", false, true);
   _err_flush_stdout();
   /* WARNING: Does not return */
   pcVar2 = (code*)invalidInstructionException();
   ( *pcVar2 )();
}/* Environment::set_fog_depth_curve(float) */void Environment::set_fog_depth_curve(Environment *this, float param_1) {
   long *plVar1;
   *(float*)( this + 0x3a4 ) = param_1;
   plVar1 = (long*)RenderingServer::get_singleton();
   for (int i_1718 = 0; i_1718 < 2; i_1718++) {
      /* WARNING: Could not recover jumptable at 0x00100a22. Too many branches */
   }
   ( **(code**)( *plVar1 + 0xc78 ) )(*(undefined4*)( this + 0x3a4 ), *(undefined4*)( this + 0x3a8 ), *(undefined4*)( this + 0x3ac ), plVar1, *(undefined8*)( this + 0x240 ));
   return;
}/* Environment::get_sky() const */void Environment::get_sky(void) {
   char cVar1;
   long in_RSI;
   long *in_RDI;
   *in_RDI = 0;
   if (*(long*)( in_RSI + 0x250 ) != 0) {
      *in_RDI = *(long*)( in_RSI + 0x250 );
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
         *in_RDI = 0;
      }
   }
   return;
}/* Environment::get_glow_map() const */void Environment::get_glow_map(void) {
   char cVar1;
   long in_RSI;
   long *in_RDI;
   *in_RDI = 0;
   if (*(long*)( in_RSI + 0x368 ) != 0) {
      *in_RDI = *(long*)( in_RSI + 0x368 );
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
         *in_RDI = 0;
      }
   }
   return;
}/* Environment::get_adjustment_color_correction() const */void Environment::get_adjustment_color_correction(void) {
   char cVar1;
   long in_RSI;
   long *in_RDI;
   *in_RDI = 0;
   if (*(long*)( in_RSI + 0x410 ) != 0) {
      *in_RDI = *(long*)( in_RSI + 0x410 );
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
         *in_RDI = 0;
      }
   }
   return;
}/* Environment::set_tonemap_exposure(float) */void Environment::set_tonemap_exposure(Environment *this, float param_1) {
   long *plVar1;
   *(float*)( this + 0x2ac ) = param_1;
   plVar1 = (long*)RenderingServer::get_singleton();
   for (int i_1719 = 0; i_1719 < 2; i_1719++) {
      /* WARNING: Could not recover jumptable at 0x00100b30. Too many branches */
   }
   ( **(code**)( *plVar1 + 0xc10 ) )(*(undefined4*)( this + 0x2ac ), *(undefined4*)( this + 0x2b0 ), plVar1, *(undefined8*)( this + 0x240 ), *(undefined4*)( this + 0x2a8 ));
   return;
}/* Environment::set_tonemap_white(float) */void Environment::set_tonemap_white(Environment *this, float param_1) {
   long *plVar1;
   *(float*)( this + 0x2b0 ) = param_1;
   plVar1 = (long*)RenderingServer::get_singleton();
   for (int i_1720 = 0; i_1720 < 2; i_1720++) {
      /* WARNING: Could not recover jumptable at 0x00100b80. Too many branches */
   }
   ( **(code**)( *plVar1 + 0xc10 ) )(*(undefined4*)( this + 0x2ac ), *(undefined4*)( this + 0x2b0 ), plVar1, *(undefined8*)( this + 0x240 ), *(undefined4*)( this + 0x2a8 ));
   return;
}/* Environment::set_sky(Ref<Sky> const&) */void Environment::set_sky(Environment *this, Ref *param_1) {
   Object *pOVar1;
   char cVar2;
   undefined8 uVar3;
   long *plVar4;
   Object *pOVar5;
   pOVar1 = *(Object**)param_1;
   pOVar5 = *(Object**)( this + 0x250 );
   if (pOVar1 != pOVar5) {
      *(Object**)( this + 0x250 ) = pOVar1;
      if (pOVar1 != (Object*)0x0) {
         cVar2 = RefCounted::reference();
         if (cVar2 == '\0') {
            *(undefined8*)( this + 0x250 ) = 0;
         }
      }
      if (pOVar5 != (Object*)0x0) {
         cVar2 = RefCounted::unreference();
         if (cVar2 != '\0') {
            cVar2 = predelete_handler(pOVar5);
            if (cVar2 != '\0') {
               ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
               Memory::free_static(pOVar5, false);
            }
         }
      }
      pOVar5 = *(Object**)( this + 0x250 );
   }
   uVar3 = 0;
   if (pOVar5 != (Object*)0x0) {
      uVar3 = ( **(code**)( *(long*)pOVar5 + 0x1c0 ) )(pOVar5);
   }
   plVar4 = (long*)RenderingServer::get_singleton();
   for (int i_1721 = 0; i_1721 < 2; i_1721++) {
      /* WARNING: Could not recover jumptable at 0x00100c19. Too many branches */
   }
   ( **(code**)( *plVar4 + 0xbc0 ) )(plVar4, *(undefined8*)( this + 0x240 ), uVar3);
   return;
}/* Environment::set_tonemapper(Environment::ToneMapper) */void Environment::set_tonemapper(Environment *this, undefined4 param_2) {
   long *plVar1;
   *(undefined4*)( this + 0x2a8 ) = param_2;
   plVar1 = (long*)RenderingServer::get_singleton();
   ( **(code**)( *plVar1 + 0xc10 ) )(*(undefined4*)( this + 0x2ac ), *(undefined4*)( this + 0x2b0 ), plVar1, *(undefined8*)( this + 0x240 ), *(undefined4*)( this + 0x2a8 ));
   Object::notify_property_list_changed();
   return;
}/* Environment::set_ambient_light_energy(float) */void Environment::set_ambient_light_energy(Environment *this, float param_1) {
   long *plVar1;
   *(float*)( this + 0x29c ) = param_1;
   plVar1 = (long*)RenderingServer::get_singleton();
   for (int i_1722 = 0; i_1722 < 2; i_1722++) {
      /* WARNING: Could not recover jumptable at 0x00100cee. Too many branches */
   }
   ( **(code**)( *plVar1 + 0xbf0 ) )(*(undefined4*)( this + 0x29c ), *(undefined4*)( this + 0x2a0 ), plVar1, *(undefined8*)( this + 0x240 ), this + 0x288, *(undefined4*)( this + 0x298 ), *(undefined4*)( this + 0x2a4 ));
   return;
}/* Environment::set_fog_depth_end(float) */void Environment::set_fog_depth_end(Environment *this, float param_1) {
   long *plVar1;
   *(float*)( this + 0x3ac ) = param_1;
   if (param_1 < *(float*)( this + 0x3a8 )) {
      *(float*)( this + 0x3a8 ) = param_1;
      plVar1 = (long*)RenderingServer::get_singleton();
      ( **(code**)( *plVar1 + 0xc78 ) )(*(undefined4*)( this + 0x3a4 ), *(undefined4*)( this + 0x3a8 ), *(undefined4*)( this + 0x3ac ), plVar1, *(undefined8*)( this + 0x240 ));
   }
   plVar1 = (long*)RenderingServer::get_singleton();
   for (int i_1723 = 0; i_1723 < 2; i_1723++) {
      /* WARNING: Could not recover jumptable at 0x00100d3f. Too many branches */
   }
   ( **(code**)( *plVar1 + 0xc78 ) )(*(undefined4*)( this + 0x3a4 ), *(undefined4*)( this + 0x3a8 ), *(undefined4*)( this + 0x3ac ), plVar1, *(undefined8*)( this + 0x240 ));
   return;
}/* Environment::set_ambient_light_color(Color const&) */void Environment::set_ambient_light_color(Environment *this, Color *param_1) {
   undefined8 uVar1;
   long *plVar2;
   uVar1 = *(undefined8*)( param_1 + 8 );
   *(undefined8*)( this + 0x288 ) = *(undefined8*)param_1;
   *(undefined8*)( this + 0x290 ) = uVar1;
   plVar2 = (long*)RenderingServer::get_singleton();
   for (int i_1724 = 0; i_1724 < 2; i_1724++) {
      /* WARNING: Could not recover jumptable at 0x00100de1. Too many branches */
   }
   ( **(code**)( *plVar2 + 0xbf0 ) )(*(undefined4*)( this + 0x29c ), *(undefined4*)( this + 0x2a0 ), plVar2, *(undefined8*)( this + 0x240 ), this + 0x288, *(undefined4*)( this + 0x298 ), *(undefined4*)( this + 0x2a4 ));
   return;
}/* Environment::set_reflection_source(Environment::ReflectionSource) */void Environment::set_reflection_source(Environment *this, undefined4 param_2) {
   long *plVar1;
   *(undefined4*)( this + 0x2a4 ) = param_2;
   plVar1 = (long*)RenderingServer::get_singleton();
   ( **(code**)( *plVar1 + 0xbf0 ) )(*(undefined4*)( this + 0x29c ), *(undefined4*)( this + 0x2a0 ), plVar1, *(undefined8*)( this + 0x240 ), this + 0x288, *(undefined4*)( this + 0x298 ), *(undefined4*)( this + 0x2a4 ));
   Object::notify_property_list_changed();
   return;
}/* Environment::set_ambient_source(Environment::AmbientSource) */void Environment::set_ambient_source(Environment *this, undefined4 param_2) {
   long *plVar1;
   *(undefined4*)( this + 0x298 ) = param_2;
   plVar1 = (long*)RenderingServer::get_singleton();
   ( **(code**)( *plVar1 + 0xbf0 ) )(*(undefined4*)( this + 0x29c ), *(undefined4*)( this + 0x2a0 ), plVar1, *(undefined8*)( this + 0x240 ), this + 0x288, *(undefined4*)( this + 0x298 ), *(undefined4*)( this + 0x2a4 ));
   Object::notify_property_list_changed();
   return;
}/* Environment::set_ambient_light_sky_contribution(float) */void Environment::set_ambient_light_sky_contribution(Environment *this, float param_1) {
   long *plVar1;
   float fVar2;
   if (param_1 < 0.0) {
      fVar2 = 0.0;
   } else {
      fVar2 = _LC2;
      if (param_1 <= _LC2) {
         fVar2 = param_1;
      }
   }
   *(float*)( this + 0x2a0 ) = fVar2;
   plVar1 = (long*)RenderingServer::get_singleton();
   for (int i_1725 = 0; i_1725 < 2; i_1725++) {
      /* WARNING: Could not recover jumptable at 0x00100f16. Too many branches */
   }
   ( **(code**)( *plVar1 + 0xbf0 ) )(plVar1, *(undefined8*)( this + 0x240 ), this + 0x288, *(undefined4*)( this + 0x298 ), *(undefined4*)( this + 0x2a4 ));
   return;
}/* Environment::set_adjustment_color_correction(Ref<Texture>) */void Environment::set_adjustment_color_correction(Environment *this, long *param_2) {
   undefined8 uVar1;
   char cVar2;
   Callable *pCVar3;
   Object *pOVar4;
   CallableCustom *this_00;
   Object *pOVar5;
   long lVar6;
   long in_FS_OFFSET;
   Callable aCStack_48[24];
   long local_30;
   pOVar4 = (Object*)*param_2;
   pOVar5 = *(Object**)( this + 0x410 );
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (pOVar4 != pOVar5) {
      *(Object**)( this + 0x410 ) = pOVar4;
      if (( pOVar4 != (Object*)0x0 ) && ( cVar2 = RefCounted::reference() ),cVar2 == '\0') {
         *(undefined8*)( this + 0x410 ) = 0;
      }
      if (( ( pOVar5 != (Object*)0x0 ) && ( cVar2 = RefCounted::unreference() ),cVar2 != '\0' )) &&( cVar2 = cVar2 != '\0' )(**(code**)( *(long*)pOVar5 + 0x140 ))(pOVar5);
      Memory::free_static(pOVar5, false);
   }
   pOVar5 = (Object*)*param_2;
}if (( ( pOVar5 == (Object*)0x0 ) || ( pCVar3 = (Callable*)__dynamic_cast(pOVar5, &Object::typeinfo, &GradientTexture1D::typeinfo, 0) ),pCVar3 == (Callable*)0x0 )) {
   lVar6 = *(long*)( this + 0x410 );
   pCVar3 = (Callable*)0x0;
   if (lVar6 == 0) {
      this[0x40c] = (Environment)0x0;
      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         _update_adjustment(this);
         return;
      }
      goto LAB_00101213;
   }
   LAB_00100ff0:pOVar4 = (Object*)__dynamic_cast(lVar6, &Object::typeinfo, &Texture2D::typeinfo, 0);
   if (( pOVar4 == (Object*)0x0 ) || ( cVar2 = RefCounted::reference() ),cVar2 == '\0') {
      this[0x40c] = (Environment)0x0;
      _update_adjustment(this);
   } else {
      this[0x40c] = (Environment)0x1;
      _update_adjustment(this);
      cVar2 = RefCounted::unreference();
      if (( cVar2 != '\0' ) && ( cVar2 = predelete_handler(pOVar4) ),cVar2 != '\0') {
         ( **(code**)( *(long*)pOVar4 + 0x140 ) )(pOVar4);
         Memory::free_static(pOVar4, false);
      }
   }
   if (pCVar3 != (Callable*)0x0) goto LAB_00101029;
} else {
   this_00 = (CallableCustom*)operator_new(0x48, "");
   CallableCustom::CallableCustom(this_00);
   *(undefined**)( this_00 + 0x20 ) = &_LC7;
   *(undefined1(*) [16])( this_00 + 0x30 ) = (undefined1[16])0x0;
   *(undefined8*)( this_00 + 0x40 ) = 0;
   *(undefined***)this_00 = &PTR_hash_0012df28;
   uVar1 = *(undefined8*)( this + 0x60 );
   *(undefined8*)( this_00 + 0x10 ) = 0;
   *(undefined8*)( this_00 + 0x30 ) = uVar1;
   *(code**)( this_00 + 0x38 ) = _update_adjustment;
   *(Environment**)( this_00 + 0x28 ) = this;
   CallableCustomMethodPointerBase::_setup((uint*)this_00, (int)this_00 + 0x28);
   *(char**)( this_00 + 0x20 ) = "Environment::_update_adjustment";
   Callable::Callable(aCStack_48, this_00);
   Resource::connect_changed(pCVar3, (uint)aCStack_48);
   Callable::~Callable(aCStack_48);
   lVar6 = *(long*)( this + 0x410 );
   if (lVar6 != 0) goto LAB_00100ff0;
   this[0x40c] = (Environment)0x0;
   _update_adjustment(this);
   LAB_00101029:cVar2 = RefCounted::unreference();
   if (( cVar2 != '\0' ) && ( cVar2 = predelete_handler((Object*)pCVar3) ),cVar2 != '\0') {
      ( **(code**)( *(long*)pCVar3 + 0x140 ) )(pCVar3);
      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         Memory::free_static(pCVar3, false);
         return;
      }
      goto LAB_00101213;
   }
}if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return;
}LAB_00101213:/* WARNING: Subroutine does not return */__stack_chk_fail();}/* Environment::set_fog_depth_begin(float) */void Environment::set_fog_depth_begin(Environment *this, float param_1) {
   long *plVar1;
   *(float*)( this + 0x3a8 ) = param_1;
   if (*(float*)( this + 0x3ac ) <= param_1 && param_1 != *(float*)( this + 0x3ac )) {
      *(float*)( this + 0x3ac ) = param_1;
      plVar1 = (long*)RenderingServer::get_singleton();
      ( **(code**)( *plVar1 + 0xc78 ) )(*(undefined4*)( this + 0x3a4 ), *(undefined4*)( this + 0x3a8 ), *(undefined4*)( this + 0x3ac ), plVar1, *(undefined8*)( this + 0x240 ));
   }
   plVar1 = (long*)RenderingServer::get_singleton();
   for (int i_1726 = 0; i_1726 < 2; i_1726++) {
      /* WARNING: Could not recover jumptable at 0x0010126b. Too many branches */
   }
   ( **(code**)( *plVar1 + 0xc78 ) )(*(undefined4*)( this + 0x3a4 ), *(undefined4*)( this + 0x3a8 ), *(undefined4*)( this + 0x3ac ), plVar1, *(undefined8*)( this + 0x240 ));
   return;
}/* CowData<char32_t>::_ref(CowData<char32_t> const&) [clone .part.0] */void CowData<char32_t>::_ref(CowData<char32_t> *this, CowData *param_1) {
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
      } else {
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
      } while ( !bVar4 );
      if (lVar3 != -1) {
         *(undefined8*)this = *(undefined8*)param_1;
      }
   }
   return;
}/* Environment::~Environment() */void Environment::~Environment(Environment *this) {
   Object *pOVar1;
   char cVar2;
   long lVar3;
   long *plVar4;
   *(undefined***)this = &PTR__initialize_classv_0012dd50;
   lVar3 = RenderingServer::get_singleton();
   if (lVar3 == 0) {
      _err_print_error("~Environment", "scene/resources/environment.cpp", 0x65d, "Parameter \"RenderingServer::get_singleton()\" is null.", 0, 0);
      lVar3 = *(long*)( this + 0x410 );
   } else {
      plVar4 = (long*)RenderingServer::get_singleton();
      ( **(code**)( *plVar4 + 0x11b0 ) )(plVar4);
      lVar3 = *(long*)( this + 0x410 );
   }
   if (( lVar3 != 0 ) && ( cVar2 = RefCounted::unreference() ),cVar2 != '\0') {
      pOVar1 = *(Object**)( this + 0x410 );
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
         ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
         Memory::free_static(pOVar1, false);
      }
   }
   if (( *(long*)( this + 0x368 ) != 0 ) && ( cVar2 = RefCounted::unreference() ),cVar2 != '\0') {
      pOVar1 = *(Object**)( this + 0x368 );
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
         ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
         Memory::free_static(pOVar1, false);
      }
   }
   if (*(long*)( this + 0x338 ) != 0) {
      LOCK();
      plVar4 = (long*)( *(long*)( this + 0x338 ) + -0x10 );
      *plVar4 = *plVar4 + -1;
      UNLOCK();
      if (*plVar4 == 0) {
         lVar3 = *(long*)( this + 0x338 );
         *(undefined8*)( this + 0x338 ) = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }
   }
   if (( *(long*)( this + 0x250 ) != 0 ) && ( cVar2 = RefCounted::unreference() ),cVar2 != '\0') {
      pOVar1 = *(Object**)( this + 0x250 );
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
         ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
         Memory::free_static(pOVar1, false);
         Resource::~Resource((Resource*)this);
         return;
      }
   }
   Resource::~Resource((Resource*)this);
   return;
}/* Environment::~Environment() */void Environment::~Environment(Environment *this) {
   ~Environment(this)
   ;;
   operator_delete(this, 0x418);
   return;
}/* CowData<float>::_copy_on_write() [clone .isra.0] */void CowData<float>::_copy_on_write(CowData<float> *this) {
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
}/* Environment::_update_bg_energy() */void Environment::_update_bg_energy(Environment *this) {
   bool bVar1;
   long *plVar2;
   long in_FS_OFFSET;
   long local_50;
   int local_48[6];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   ProjectSettings::get_singleton();
   StringName::StringName((StringName*)&local_50, "rendering/lights_and_shadows/use_physical_light_units", false);
   ProjectSettings::get_setting_with_override((StringName*)local_48);
   bVar1 = Variant::operator_cast_to_bool((Variant*)local_48);
   if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }
   if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
      StringName::unref();
   }
   if (bVar1) {
      plVar2 = (long*)RenderingServer::get_singleton();
      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         for (int i_1727 = 0; i_1727 < 2; i_1727++) {
            /* WARNING: Could not recover jumptable at 0x001018f7. Too many branches */
         }
         ( **(code**)( *plVar2 + 0xbe0 ) )(*(undefined4*)( this + 0x280 ), *(undefined4*)( this + 0x284 ), plVar2, *(undefined8*)( this + 0x240 ));
         return;
      }
   } else {
      plVar2 = (long*)RenderingServer::get_singleton();
      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         for (int i_1728 = 0; i_1728 < 2; i_1728++) {
            /* WARNING: Could not recover jumptable at 0x00101943. Too many branches */
         }
         ( **(code**)( *plVar2 + 0xbe0 ) )(*(undefined4*)( this + 0x280 ), _LC2, plVar2, *(undefined8*)( this + 0x240 ));
         return;
      }
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* Environment::set_bg_energy_multiplier(float) */void Environment::set_bg_energy_multiplier(Environment *this, float param_1) {
   *(float*)( this + 0x280 ) = param_1;
   _update_bg_energy(this);
   return;
}/* Environment::set_bg_intensity(float) */void Environment::set_bg_intensity(Environment *this, float param_1) {
   *(float*)( this + 0x284 ) = param_1;
   _update_bg_energy(this);
   return;
}/* Environment::_update_ambient_light() */void Environment::_update_ambient_light(Environment *this) {
   long *plVar1;
   plVar1 = (long*)RenderingServer::get_singleton();
   for (int i_1729 = 0; i_1729 < 2; i_1729++) {
      /* WARNING: Could not recover jumptable at 0x001019e6. Too many branches */
   }
   ( **(code**)( *plVar1 + 0xbf0 ) )(*(undefined4*)( this + 0x29c ), *(undefined4*)( this + 0x2a0 ), plVar1, *(undefined8*)( this + 0x240 ), this + 0x288, *(undefined4*)( this + 0x298 ), *(undefined4*)( this + 0x2a4 ));
   return;
}/* Environment::_update_tonemap() */void Environment::_update_tonemap(Environment *this) {
   long *plVar1;
   plVar1 = (long*)RenderingServer::get_singleton();
   for (int i_1730 = 0; i_1730 < 2; i_1730++) {
      /* WARNING: Could not recover jumptable at 0x00101a28. Too many branches */
   }
   ( **(code**)( *plVar1 + 0xc10 ) )(*(undefined4*)( this + 0x2ac ), *(undefined4*)( this + 0x2b0 ), plVar1, *(undefined8*)( this + 0x240 ), *(undefined4*)( this + 0x2a8 ));
   return;
}/* Environment::_update_ssr() */void Environment::_update_ssr(Environment *this) {
   long *plVar1;
   plVar1 = (long*)RenderingServer::get_singleton();
   for (int i_1731 = 0; i_1731 < 2; i_1731++) {
      /* WARNING: Could not recover jumptable at 0x00101a77. Too many branches */
   }
   ( **(code**)( *plVar1 + 0xc20 ) )(*(undefined4*)( this + 700 ), *(undefined4*)( this + 0x2c0 ), *(undefined4*)( this + 0x2c4 ), plVar1, *(undefined8*)( this + 0x240 ), this[0x2b4], *(undefined4*)( this + 0x2b8 ));
   return;
}/* Environment::set_ssr_enabled(bool) */void Environment::set_ssr_enabled(Environment *this, bool param_1) {
   this[0x2b4] = (Environment)param_1;
   _update_ssr(this);
   Object::notify_property_list_changed();
   return;
}/* Environment::set_ssr_max_steps(int) */void Environment::set_ssr_max_steps(Environment *this, int param_1) {
   *(int*)( this + 0x2b8 ) = param_1;
   _update_ssr(this);
   return;
}/* Environment::set_ssr_fade_in(float) */void Environment::set_ssr_fade_in(Environment *this, float param_1) {
   if (param_1 <= 0.0) {
      param_1 = 0.0;
   }
   *(float*)( this + 700 ) = param_1;
   _update_ssr(this);
   return;
}/* Environment::set_ssr_fade_out(float) */void Environment::set_ssr_fade_out(Environment *this, float param_1) {
   if (param_1 <= 0.0) {
      param_1 = 0.0;
   }
   *(float*)( this + 0x2c0 ) = param_1;
   _update_ssr(this);
   return;
}/* Environment::set_ssr_depth_tolerance(float) */void Environment::set_ssr_depth_tolerance(Environment *this, float param_1) {
   *(float*)( this + 0x2c4 ) = param_1;
   _update_ssr(this);
   return;
}/* Environment::_update_ssao() */void Environment::_update_ssao(Environment *this) {
   long *plVar1;
   plVar1 = (long*)RenderingServer::get_singleton();
   for (int i_1732 = 0; i_1732 < 2; i_1732++) {
      /* WARNING: Could not recover jumptable at 0x00101b79. Too many branches */
   }
   ( **(code**)( *plVar1 + 0xc30 ) )(*(undefined4*)( this + 0x2cc ), *(undefined4*)( this + 0x2d0 ), *(undefined4*)( this + 0x2d4 ), *(undefined4*)( this + 0x2d8 ), *(undefined4*)( this + 0x2dc ), *(undefined4*)( this + 0x2e0 ), *(undefined4*)( this + 0x2e4 ), *(undefined4*)( this + 0x2e8 ), plVar1, *(undefined8*)( this + 0x240 ), this[0x2c8]);
   return;
}/* Environment::set_ssao_enabled(bool) */void Environment::set_ssao_enabled(Environment *this, bool param_1) {
   this[0x2c8] = (Environment)param_1;
   _update_ssao(this);
   Object::notify_property_list_changed();
   return;
}/* Environment::set_ssao_radius(float) */void Environment::set_ssao_radius(Environment *this, float param_1) {
   *(float*)( this + 0x2cc ) = param_1;
   _update_ssao(this);
   return;
}/* Environment::set_ssao_intensity(float) */void Environment::set_ssao_intensity(Environment *this, float param_1) {
   *(float*)( this + 0x2d0 ) = param_1;
   _update_ssao(this);
   return;
}/* Environment::set_ssao_power(float) */void Environment::set_ssao_power(Environment *this, float param_1) {
   *(float*)( this + 0x2d4 ) = param_1;
   _update_ssao(this);
   return;
}/* Environment::set_ssao_detail(float) */void Environment::set_ssao_detail(Environment *this, float param_1) {
   *(float*)( this + 0x2d8 ) = param_1;
   _update_ssao(this);
   return;
}/* Environment::set_ssao_horizon(float) */void Environment::set_ssao_horizon(Environment *this, float param_1) {
   *(float*)( this + 0x2dc ) = param_1;
   _update_ssao(this);
   return;
}/* Environment::set_ssao_sharpness(float) */void Environment::set_ssao_sharpness(Environment *this, float param_1) {
   *(float*)( this + 0x2e0 ) = param_1;
   _update_ssao(this);
   return;
}/* Environment::set_ssao_direct_light_affect(float) */void Environment::set_ssao_direct_light_affect(Environment *this, float param_1) {
   *(float*)( this + 0x2e4 ) = param_1;
   _update_ssao(this);
   return;
}/* Environment::set_ssao_ao_channel_affect(float) */void Environment::set_ssao_ao_channel_affect(Environment *this, float param_1) {
   *(float*)( this + 0x2e8 ) = param_1;
   _update_ssao(this);
   return;
}/* Environment::_update_ssil() */void Environment::_update_ssil(Environment *this) {
   long *plVar1;
   plVar1 = (long*)RenderingServer::get_singleton();
   for (int i_1733 = 0; i_1733 < 2; i_1733++) {
      /* WARNING: Could not recover jumptable at 0x00101ce9. Too many branches */
   }
   ( **(code**)( *plVar1 + 0xc40 ) )(*(undefined4*)( this + 0x2f0 ), *(undefined4*)( this + 0x2f4 ), *(undefined4*)( this + 0x2f8 ), *(undefined4*)( this + 0x2fc ), plVar1, *(undefined8*)( this + 0x240 ), this[0x2ec]);
   return;
}/* Environment::set_ssil_enabled(bool) */void Environment::set_ssil_enabled(Environment *this, bool param_1) {
   this[0x2ec] = (Environment)param_1;
   _update_ssil(this);
   Object::notify_property_list_changed();
   return;
}/* Environment::set_ssil_radius(float) */void Environment::set_ssil_radius(Environment *this, float param_1) {
   *(float*)( this + 0x2f0 ) = param_1;
   _update_ssil(this);
   return;
}/* Environment::set_ssil_intensity(float) */void Environment::set_ssil_intensity(Environment *this, float param_1) {
   *(float*)( this + 0x2f4 ) = param_1;
   _update_ssil(this);
   return;
}/* Environment::set_ssil_sharpness(float) */void Environment::set_ssil_sharpness(Environment *this, float param_1) {
   *(float*)( this + 0x2f8 ) = param_1;
   _update_ssil(this);
   return;
}/* Environment::set_ssil_normal_rejection(float) */void Environment::set_ssil_normal_rejection(Environment *this, float param_1) {
   *(float*)( this + 0x2fc ) = param_1;
   _update_ssil(this);
   return;
}/* Environment::_update_sdfgi() */undefined1  [16] __thiscallEnvironment::_update_sdfgi(Environment *this) {
   undefined1 auVar1[16];
   long *plVar2;
   plVar2 = (long*)RenderingServer::get_singleton();
   auVar1._1_7_ = 0;
   auVar1[0] = this[0x318];
   ( **(code**)( *plVar2 + 0xc50 ) )(*(undefined4*)( this + 0x308 ), *(undefined4*)( this + 0x314 ), *(undefined4*)( this + 0x31c ), *(undefined4*)( this + 800 ), *(undefined4*)( this + 0x324 ), plVar2, *(undefined8*)( this + 0x240 ), this[0x300], *(undefined4*)( this + 0x304 ), *(undefined4*)( this + 0x30c ), this[0x310]);
   auVar1._8_8_ = 0x101d8d;
   return auVar1;
}/* Environment::set_sdfgi_enabled(bool) */void Environment::set_sdfgi_enabled(Environment *this, bool param_1) {
   this[0x300] = (Environment)param_1;
   _update_sdfgi(this);
   Object::notify_property_list_changed();
   return;
}/* Environment::set_sdfgi_cascades(int) */void Environment::set_sdfgi_cascades(Environment *this, int param_1) {
   if (param_1 - 1U < 8) {
      *(int*)( this + 0x304 ) = param_1;
      _update_sdfgi(this);
      return;
   }
   _err_print_error("set_sdfgi_cascades", "scene/resources/environment.cpp", 0x1d1, "Condition \"p_cascades < 1 || p_cascades > 8\" is true.", "Invalid number of SDFGI cascades (must be between 1 and 8).", 0, 0);
   return;
}/* Environment::set_sdfgi_min_cell_size(float) */void Environment::set_sdfgi_min_cell_size(Environment *this, float param_1) {
   *(float*)( this + 0x308 ) = param_1;
   _update_sdfgi(this);
   return;
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Environment::set_sdfgi_max_distance(float) */void Environment::set_sdfgi_max_distance(Environment *this, float param_1) {
   uint uVar1;
   uint uVar2;
   float fVar3;
   uVar1 = *(uint*)( this + 0x304 );
   fVar3 = param_1 * __LC42;
   if (0 < (int)uVar1) {
      uVar2 = 0;
      if (( uVar1 & 1 ) != 0) {
         fVar3 = fVar3 * _LC43;
         uVar2 = 1;
         if (uVar1 == 1) goto LAB_00101ee7;
      }
      do {
         uVar2 = uVar2 + 2;
         fVar3 = fVar3 * _LC43 * _LC43;
      } while ( uVar2 != uVar1 );
   }
   LAB_00101ee7:*(float*)( this + 0x308 ) = fVar3;
   _update_sdfgi(this);
   return;
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Environment::set_sdfgi_cascade0_distance(float) */void Environment::set_sdfgi_cascade0_distance(Environment *this, float param_1) {
   *(float*)( this + 0x308 ) = param_1 * __LC42;
   _update_sdfgi(this);
   return;
}/* Environment::set_sdfgi_y_scale(Environment::SDFGIYScale) */void Environment::set_sdfgi_y_scale(Environment *this, undefined4 param_2) {
   *(undefined4*)( this + 0x30c ) = param_2;
   _update_sdfgi(this);
   return;
}/* Environment::set_sdfgi_use_occlusion(bool) */void Environment::set_sdfgi_use_occlusion(Environment *this, bool param_1) {
   this[0x310] = (Environment)param_1;
   _update_sdfgi(this);
   return;
}/* Environment::set_sdfgi_bounce_feedback(float) */void Environment::set_sdfgi_bounce_feedback(Environment *this, float param_1) {
   *(float*)( this + 0x314 ) = param_1;
   _update_sdfgi(this);
   return;
}/* Environment::set_sdfgi_read_sky_light(bool) */void Environment::set_sdfgi_read_sky_light(Environment *this, bool param_1) {
   this[0x318] = (Environment)param_1;
   _update_sdfgi(this);
   return;
}/* Environment::set_sdfgi_energy(float) */void Environment::set_sdfgi_energy(Environment *this, float param_1) {
   *(float*)( this + 0x31c ) = param_1;
   _update_sdfgi(this);
   return;
}/* Environment::set_sdfgi_normal_bias(float) */void Environment::set_sdfgi_normal_bias(Environment *this, float param_1) {
   *(float*)( this + 800 ) = param_1;
   _update_sdfgi(this);
   return;
}/* Environment::set_sdfgi_probe_bias(float) */void Environment::set_sdfgi_probe_bias(Environment *this, float param_1) {
   *(float*)( this + 0x324 ) = param_1;
   _update_sdfgi(this);
   return;
}/* Environment::_update_fog() */void Environment::_update_fog(Environment *this) {
   long *plVar1;
   plVar1 = (long*)RenderingServer::get_singleton();
   for (int i_1734 = 0; i_1734 < 2; i_1734++) {
      /* WARNING: Could not recover jumptable at 0x0010203f. Too many branches */
   }
   ( **(code**)( *plVar1 + 0xc70 ) )(*(undefined4*)( this + 0x388 ), *(undefined4*)( this + 0x38c ), *(undefined4*)( this + 0x390 ), *(undefined4*)( this + 0x394 ), *(undefined4*)( this + 0x398 ), *(undefined4*)( this + 0x39c ), *(undefined4*)( this + 0x3a0 ), plVar1, *(undefined8*)( this + 0x240 ), this[0x370], this + 0x378, *(undefined4*)( this + 0x374 ));
   return;
}/* Environment::set_fog_enabled(bool) */void Environment::set_fog_enabled(Environment *this, bool param_1) {
   this[0x370] = (Environment)param_1;
   _update_fog(this);
   Object::notify_property_list_changed();
   return;
}/* Environment::set_fog_light_color(Color const&) */void Environment::set_fog_light_color(Environment *this, Color *param_1) {
   undefined8 uVar1;
   uVar1 = *(undefined8*)( param_1 + 8 );
   *(undefined8*)( this + 0x378 ) = *(undefined8*)param_1;
   *(undefined8*)( this + 0x380 ) = uVar1;
   _update_fog(this);
   return;
}/* Environment::set_fog_light_energy(float) */void Environment::set_fog_light_energy(Environment *this, float param_1) {
   *(float*)( this + 0x388 ) = param_1;
   _update_fog(this);
   return;
}/* Environment::set_fog_sun_scatter(float) */void Environment::set_fog_sun_scatter(Environment *this, float param_1) {
   *(float*)( this + 0x38c ) = param_1;
   _update_fog(this);
   return;
}/* Environment::set_fog_density(float) */void Environment::set_fog_density(Environment *this, float param_1) {
   *(float*)( this + 0x390 ) = param_1;
   _update_fog(this);
   return;
}/* Environment::set_fog_mode(Environment::FogMode) */void Environment::set_fog_mode(Environment *this, int param_2) {
   if (( *(int*)( this + 0x374 ) == param_2 ) || ( param_2 != 0 )) {
      *(undefined4*)( this + 0x390 ) = 0x3f800000;
      _update_fog(this);
   } else {
      *(undefined4*)( this + 0x390 ) = 0x3c23d70a;
      _update_fog(this);
   }
   *(int*)( this + 0x374 ) = param_2;
   _update_fog(this);
   Object::notify_property_list_changed();
   return;
}/* Environment::set_fog_height(float) */void Environment::set_fog_height(Environment *this, float param_1) {
   *(float*)( this + 0x394 ) = param_1;
   _update_fog(this);
   return;
}/* Environment::set_fog_height_density(float) */void Environment::set_fog_height_density(Environment *this, float param_1) {
   *(float*)( this + 0x398 ) = param_1;
   _update_fog(this);
   return;
}/* Environment::set_fog_aerial_perspective(float) */void Environment::set_fog_aerial_perspective(Environment *this, float param_1) {
   *(float*)( this + 0x39c ) = param_1;
   _update_fog(this);
   return;
}/* Environment::set_background(Environment::BGMode) */void Environment::set_background(Environment *this, undefined4 param_2) {
   long *plVar1;
   *(undefined4*)( this + 0x248 ) = param_2;
   plVar1 = (long*)RenderingServer::get_singleton();
   ( **(code**)( *plVar1 + 3000 ) )(plVar1, *(undefined8*)( this + 0x240 ), param_2);
   Object::notify_property_list_changed();
   if (*(int*)( this + 0x248 ) == 2) {
      return;
   }
   *(undefined4*)( this + 0x39c ) = 0;
   _update_fog(this);
   return;
}/* Environment::set_fog_sky_affect(float) */void Environment::set_fog_sky_affect(Environment *this, float param_1) {
   *(float*)( this + 0x3a0 ) = param_1;
   _update_fog(this);
   return;
}/* Environment::_update_fog_depth() */void Environment::_update_fog_depth(Environment *this) {
   long *plVar1;
   plVar1 = (long*)RenderingServer::get_singleton();
   for (int i_1735 = 0; i_1735 < 2; i_1735++) {
      /* WARNING: Could not recover jumptable at 0x0010228a. Too many branches */
   }
   ( **(code**)( *plVar1 + 0xc78 ) )(*(undefined4*)( this + 0x3a4 ), *(undefined4*)( this + 0x3a8 ), *(undefined4*)( this + 0x3ac ), plVar1, *(undefined8*)( this + 0x240 ));
   return;
}/* Environment::_update_volumetric_fog() */undefined1  [16] __thiscallEnvironment::_update_volumetric_fog(Environment *this) {
   undefined4 uVar1;
   undefined1 auVar2[16];
   long *plVar3;
   undefined4 uStack_14;
   plVar3 = (long*)RenderingServer::get_singleton();
   uVar1 = *(undefined4*)( this + 0x3f0 );
   ( **(code**)( *plVar3 + 0xc80 ) )(*(undefined4*)( this + 0x3b4 ), *(undefined4*)( this + 0x3d8 ), *(undefined4*)( this + 0x3dc ), *(undefined4*)( this + 0x3e0 ), *(undefined4*)( this + 0x3e4 ), *(undefined4*)( this + 1000 ), *(undefined4*)( this + 0x3f8 ), *(undefined4*)( this + 0x3ec ), plVar3, *(undefined8*)( this + 0x240 ), this[0x3b0], this + 0x3b8, this + 0x3c8, this[0x3f4]);
   auVar2._4_4_ = uStack_14;
   auVar2._0_4_ = uVar1;
   auVar2._8_8_ = 0x10229d;
   return auVar2;
}/* Environment::set_volumetric_fog_enabled(bool) */void Environment::set_volumetric_fog_enabled(Environment *this, bool param_1) {
   this[0x3b0] = (Environment)param_1;
   _update_volumetric_fog(this);
   Object::notify_property_list_changed();
   return;
}/* Environment::set_volumetric_fog_density(float) */void Environment::set_volumetric_fog_density(Environment *this, float param_1) {
   *(float*)( this + 0x3b4 ) = param_1;
   _update_volumetric_fog(this);
   return;
}/* Environment::set_volumetric_fog_albedo(Color) */void Environment::set_volumetric_fog_albedo(undefined8 param_1, undefined8 param_2, Environment *param_3) {
   *(undefined8*)( param_3 + 0x3b8 ) = param_1;
   *(undefined8*)( param_3 + 0x3c0 ) = param_2;
   _update_volumetric_fog(param_3);
   return;
}/* Environment::set_volumetric_fog_emission(Color) */void Environment::set_volumetric_fog_emission(undefined8 param_1, undefined8 param_2, Environment *param_3) {
   *(undefined8*)( param_3 + 0x3c8 ) = param_1;
   *(undefined8*)( param_3 + 0x3d0 ) = param_2;
   _update_volumetric_fog(param_3);
   return;
}/* Environment::set_volumetric_fog_emission_energy(float) */void Environment::set_volumetric_fog_emission_energy(Environment *this, float param_1) {
   *(float*)( this + 0x3d8 ) = param_1;
   _update_volumetric_fog(this);
   return;
}/* Environment::set_volumetric_fog_anisotropy(float) */void Environment::set_volumetric_fog_anisotropy(Environment *this, float param_1) {
   *(float*)( this + 0x3dc ) = param_1;
   _update_volumetric_fog(this);
   return;
}/* Environment::set_volumetric_fog_length(float) */void Environment::set_volumetric_fog_length(Environment *this, float param_1) {
   *(float*)( this + 0x3e0 ) = param_1;
   _update_volumetric_fog(this);
   return;
}/* Environment::set_volumetric_fog_detail_spread(float) */void Environment::set_volumetric_fog_detail_spread(Environment *this, float param_1) {
   if (_LC43 <= param_1) {
      if (_LC45 < param_1) {
         param_1 = _LC45;
      }
      *(float*)( this + 0x3e4 ) = param_1;
      _update_volumetric_fog(this);
      return;
   }
   *(float*)( this + 0x3e4 ) = _LC43;
   _update_volumetric_fog(this);
   return;
}/* Environment::set_volumetric_fog_gi_inject(float) */void Environment::set_volumetric_fog_gi_inject(Environment *this, float param_1) {
   *(float*)( this + 1000 ) = param_1;
   _update_volumetric_fog(this);
   return;
}/* Environment::set_volumetric_fog_ambient_inject(float) */void Environment::set_volumetric_fog_ambient_inject(Environment *this, float param_1) {
   *(float*)( this + 0x3ec ) = param_1;
   _update_volumetric_fog(this);
   return;
}/* Environment::set_volumetric_fog_sky_affect(float) */void Environment::set_volumetric_fog_sky_affect(Environment *this, float param_1) {
   *(float*)( this + 0x3f0 ) = param_1;
   _update_volumetric_fog(this);
   return;
}/* Environment::set_volumetric_fog_temporal_reprojection_enabled(bool) */void Environment::set_volumetric_fog_temporal_reprojection_enabled(Environment *this, bool param_1) {
   this[0x3f4] = (Environment)param_1;
   _update_volumetric_fog(this);
   return;
}/* Environment::set_volumetric_fog_temporal_reprojection_amount(float) */void Environment::set_volumetric_fog_temporal_reprojection_amount(Environment *this, float param_1) {
   *(float*)( this + 0x3f8 ) = param_1;
   _update_volumetric_fog(this);
   return;
}/* Environment::_set(StringName const&, Variant const&) */undefined8 Environment::_set(Environment *this, StringName *param_1, Variant *param_2) {
   char cVar1;
   undefined8 uVar2;
   long *plVar3;
   long lVar4;
   Object *pOVar5;
   long in_FS_OFFSET;
   float fVar6;
   undefined4 extraout_XMM1_Da;
   Object *local_60;
   undefined8 local_54;
   undefined4 local_4c;
   Variant local_48[40];
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   cVar1 = StringName::operator ==((StringName*)param_1, "background_sky");
   if (cVar1 == '\0') {
      cVar1 = StringName::operator ==((StringName*)param_1, "background_sky_custom_fov");
      if (cVar1 == '\0') {
         uVar2 = StringName::operator ==((StringName*)param_1, "background_sky_orientation");
         if ((char)uVar2 == '\0') goto LAB_00102546;
         Variant::operator_cast_to_Basis(local_48);
         local_54 = Basis::get_euler(local_48, 2);
         local_4c = extraout_XMM1_Da;
         set_sky_rotation(this, (Vector3*)&local_54);
      } else {
         fVar6 = Variant::operator_cast_to_float(param_2);
         *(float*)( this + 600 ) = fVar6;
         plVar3 = (long*)RenderingServer::get_singleton();
         ( **(code**)( *plVar3 + 0xbc8 ) )(fVar6, plVar3, *(undefined8*)( this + 0x240 ));
      }
   } else {
      local_60 = (Object*)0x0;
      lVar4 = Variant::get_validated_object();
      if (lVar4 != 0) {
         pOVar5 = (Object*)__dynamic_cast(lVar4, &Object::typeinfo, &Sky::typeinfo, 0);
         if (pOVar5 != (Object*)0x0) {
            local_60 = pOVar5;
            cVar1 = RefCounted::reference();
            if (cVar1 != '\0') {
               set_sky(this, (Ref*)&local_60);
               cVar1 = RefCounted::unreference();
               if (cVar1 != '\0') {
                  cVar1 = predelete_handler(pOVar5);
                  if (cVar1 != '\0') {
                     ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
                     Memory::free_static(pOVar5, false);
                  }
               }
               goto LAB_0010259c;
            }
            local_60 = (Object*)0x0;
         }
      }
      set_sky(this, (Ref*)&local_60);
   }
   LAB_0010259c:uVar2 = 1;
   LAB_00102546:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar2;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* Environment::_validate_property(PropertyInfo&) const */void Environment::_validate_property(Environment *this, PropertyInfo *param_1) {
   String *this_00;
   long *plVar1;
   long lVar2;
   char cVar3;
   long lVar4;
   long lVar5;
   undefined **ppuVar6;
   char *pcVar7;
   long in_FS_OFFSET;
   bool bVar8;
   long local_80;
   long local_78;
   long local_70;
   char *local_68;
   size_t local_60;
   int local_58[6];
   long local_40;
   this_00 = (String*)( param_1 + 8 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   cVar3 = String::operator ==(this_00, "sky");
   if (( ( ( ( ( cVar3 != '\0' ) || ( cVar3 = String::operator ==(this_00, "sky_custom_fov") ),cVar3 != '\0' ) ) || ( cVar3 = String::operator ==(this_00, "sky_rotation") ),cVar3 != '\0' ) ) || ( cVar3 = String::operator ==(this_00, "ambient_light_sky_contribution") ),cVar3 != '\0') {
      *(undefined4*)( param_1 + 0x28 ) = 2;
   }
   cVar3 = String::operator ==(this_00, "fog_depth_curve");
   if (( ( ( cVar3 != '\0' ) || ( cVar3 = String::operator ==(this_00, "fog_depth_begin") ),cVar3 != '\0' ) ) || ( cVar3 = String::operator ==(this_00, "fog_depth_end") ),cVar3 != '\0') {
      *(undefined4*)( param_1 + 0x28 ) = 2;
   }
   cVar3 = String::operator ==(this_00, "ambient_light_color");
   if (( ( cVar3 != '\0' ) || ( cVar3 = String::operator ==(this_00, "ambient_light_energy") ),cVar3 != '\0' )) &&( *(int*)( this + 0x298 ) == 1 ) * (undefined4*)( param_1 + 0x28 ) = 2;
}cVar3 = String::operator ==(this_00, "ambient_light_sky_contribution");if (( cVar3 != '\0' ) && ( *(int*)( this + 0x298 ) - 1U < 2 )) {
   *(undefined4*)( param_1 + 0x28 ) = 2;
}cVar3 = String::operator ==(this_00, "fog_aerial_perspective");if (( cVar3 != '\0' ) && ( *(int*)( this + 0x248 ) != 2 )) {
   *(undefined4*)( param_1 + 0x28 ) = 2;
}cVar3 = String::operator ==(this_00, "tonemap_white");if (( cVar3 != '\0' ) && ( ( *(uint*)( this + 0x2a8 ) & 0xfffffffb ) == 0 )) {
   *(undefined4*)( param_1 + 0x28 ) = 2;
}cVar3 = String::operator ==(this_00, "glow_intensity");if (( cVar3 != '\0' ) && ( *(int*)( this + 0x354 ) == 4 )) {
   *(undefined4*)( param_1 + 0x28 ) = 2;
}lVar4 = OS::get_singleton();local_68 = (char*)0x0;plVar1 = (long*)( *(long*)( lVar4 + 0x68 ) + -0x10 );if (*(long*)( lVar4 + 0x68 ) != 0) {
   do {
      lVar2 = *plVar1;
      if (lVar2 == 0) goto LAB_00102855;
      LOCK();
      lVar5 = *plVar1;
      bVar8 = lVar2 == lVar5;
      if (bVar8) {
         *plVar1 = lVar2 + 1;
         lVar5 = lVar2;
      }
      UNLOCK();
   } while ( !bVar8 );
   if (lVar5 != -1) {
      local_68 = *(char**)( lVar4 + 0x68 );
   }
}LAB_00102855:cVar3 = String::operator ==((String*)&local_68, "gl_compatibility");pcVar7 = local_68;if (local_68 != (char*)0x0) {
   LOCK();
   plVar1 = (long*)( local_68 + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   if (*plVar1 == 0) {
      local_68 = (char*)0x0;
      Memory::free_static(pcVar7 + -0x10, false);
   }
}if (cVar3 == '\0') {
   cVar3 = String::operator ==(this_00, "glow_mix");
   if (( cVar3 == '\0' ) || ( *(int*)( this + 0x354 ) == 4 )) goto LAB_001028ad;
} else {
   cVar3 = String::begins_with((char*)this_00);
   if (( ( cVar3 == '\0' ) && ( ( ( cVar3 = String::operator ==(this_00, "glow_normalized") ),cVar3 == '\0' && ( cVar3 = String::operator ==(this_00, "glow_strength") ),cVar3 == '\0' ) ) && ( cVar3 = String::operator ==(this_00, "glow_mix") ),cVar3 == '\0' )) goto LAB_001028ad;
}*(undefined4*)( param_1 + 0x28 ) = 2;LAB_001028ad:cVar3 = String::operator ==(this_00, "background_color");if (( ( cVar3 != '\0' ) && ( *(int*)( this + 0x248 ) != 1 ) ) && ( *(int*)( this + 0x298 ) != 2 )) {
   *(undefined4*)( param_1 + 0x28 ) = 2;
}cVar3 = String::operator ==(this_00, "background_canvas_max_layer");if (( cVar3 != '\0' ) && ( *(int*)( this + 0x248 ) != 3 )) {
   *(undefined4*)( param_1 + 0x28 ) = 2;
}cVar3 = String::operator ==(this_00, "background_camera_feed_id");if (( cVar3 != '\0' ) && ( *(int*)( this + 0x248 ) != 5 )) {
   *(undefined4*)( param_1 + 0x28 ) = 2;
}cVar3 = String::operator ==(this_00, "background_intensity");if (cVar3 != '\0') {
   ProjectSettings::get_singleton();
   StringName::StringName((StringName*)&local_68, "rendering/lights_and_shadows/use_physical_light_units", false);
   ProjectSettings::get_setting_with_override((StringName*)local_58);
   bVar8 = Variant::operator_cast_to_bool((Variant*)local_58);
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }
   if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
      StringName::unref();
   }
   if (!bVar8) {
      *(undefined4*)( param_1 + 0x28 ) = 2;
   }
}if (_validate_property(PropertyInfo & ::hide_prefixes != (undefined*)0x0) {
   ppuVar6 = &_validate_property(PropertyInfo & ::hide_prefixes);
   pcVar7 = _validate_property(PropertyInfo & ::hide_prefixes);
   do {
      local_80 = 0;
      local_60 = strlen(pcVar7);
      local_68 = pcVar7;
      String::parse_latin1((StrRange*)&local_80);
      local_68 = "enabled";
      local_70 = 0;
      local_60 = 7;
      String::parse_latin1((StrRange*)&local_70);
      String::operator +((String*)&local_78, (String*)&local_80);
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
      cVar3 = String::begins_with(this_00);
      if (( cVar3 != '\0' ) && ( cVar3 = String::operator !=(this_00, (String*)&local_78) ),cVar3 != '\0') {
         StringName::StringName((StringName*)&local_68, (String*)&local_78, false);
         Object::get((StringName*)local_58, (bool*)this);
         bVar8 = Variant::operator_cast_to_bool((Variant*)local_58);
         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }
         if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
            StringName::unref();
         }
         if (!bVar8) {
            *(undefined4*)( param_1 + 0x28 ) = 2;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
            break;
         }
      }
      lVar4 = local_78;
      ppuVar6 = ppuVar6 + 1;
      if (local_78 != 0) {
         LOCK();
         plVar1 = (long*)( local_78 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_78 = 0;
            Memory::free_static((void*)( lVar4 + -0x10 ), false);
         }
      }
      lVar4 = local_80;
      if (local_80 != 0) {
         LOCK();
         plVar1 = (long*)( local_80 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_80 = 0;
            Memory::free_static((void*)( lVar4 + -0x10 ), false);
         }
      }
      pcVar7 = *ppuVar6;
   } while ( pcVar7 != (char*)0x0 );
}if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}return;}/* MethodBind* ClassDB::bind_method<MethodDefinition, void
   (Environment::*)(float)>(MethodDefinition, void (Environment::*)(float)) [clone .isra.0] */MethodBind *ClassDB::bind_method<MethodDefinition,void(Environment::*)(float)>(MethodDefinition *param_1, _func_void_float *param_2) {
   long lVar1;
   MethodBind *pMVar2;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   pMVar2 = create_method_bind<Environment,float>(param_2);
   ClassDB::bind_methodfi(1, pMVar2, false, param_1, (Variant**)0x0, 0);
   if (Variant::needs_deinit[0] != '\0') {
      Variant::_clear_internal();
   }
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return (MethodBind*)0x0;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* MethodBind* ClassDB::bind_method<MethodDefinition, float (Environment::*)()
   const>(MethodDefinition, float (Environment::*)() const) [clone .isra.0] */MethodBind *ClassDB::bind_method<MethodDefinition,float(Environment::*)()const>(MethodDefinition *param_1, _func_float *param_2) {
   long lVar1;
   MethodBind *pMVar2;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   pMVar2 = create_method_bind<Environment,float>(param_2);
   ClassDB::bind_methodfi(1, pMVar2, false, param_1, (Variant**)0x0, 0);
   if (Variant::needs_deinit[0] != '\0') {
      Variant::_clear_internal();
   }
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return (MethodBind*)0x0;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* MethodBind* ClassDB::bind_method<MethodDefinition, void (Environment::*)(bool)>(MethodDefinition,
   void (Environment::*)(bool)) [clone .isra.0] */MethodBind *ClassDB::bind_method<MethodDefinition,void(Environment::*)(bool)>(MethodDefinition *param_1, _func_void_bool *param_2) {
   long lVar1;
   MethodBind *pMVar2;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   pMVar2 = create_method_bind<Environment,bool>(param_2);
   ClassDB::bind_methodfi(1, pMVar2, false, param_1, (Variant**)0x0, 0);
   if (Variant::needs_deinit[0] != '\0') {
      Variant::_clear_internal();
   }
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return (MethodBind*)0x0;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* MethodBind* ClassDB::bind_method<MethodDefinition, bool (Environment::*)()
   const>(MethodDefinition, bool (Environment::*)() const) [clone .isra.0] */MethodBind *ClassDB::bind_method<MethodDefinition,bool(Environment::*)()const>(MethodDefinition *param_1, _func_bool *param_2) {
   long lVar1;
   MethodBind *pMVar2;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   pMVar2 = create_method_bind<Environment,bool>(param_2);
   ClassDB::bind_methodfi(1, pMVar2, false, param_1, (Variant**)0x0, 0);
   if (Variant::needs_deinit[0] != '\0') {
      Variant::_clear_internal();
   }
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return (MethodBind*)0x0;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* Environment::_bind_methods() */void Environment::_bind_methods(void) {
   undefined *puVar1;
   undefined *puVar2;
   MethodBind *pMVar3;
   long in_FS_OFFSET;
   undefined8 local_e8;
   long local_e0;
   undefined8 local_d8;
   long local_d0;
   long local_c8;
   long local_c0;
   char *local_b8;
   undefined8 local_b0;
   char *local_a8;
   undefined8 local_a0;
   long local_98;
   CowData<char32_t> local_88[16];
   undefined *local_78;
   undefined *puStack_70;
   undefined8 local_68;
   undefined **local_58;
   undefined1 auStack_50[16];
   long local_40;
   puVar2 = PTR__LC80_0012ed00;
   puVar1 = PTR__LC79_0012ecf8;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   D_METHOD<char_const*>((char*)&local_a8, "set_background");
   auStack_50 = (undefined1[16])0x0;
   local_58 = (undefined**)0x0;
   pMVar3 = create_method_bind<Environment,Environment::BGMode>(set_background);
   ClassDB::bind_methodfi(1, pMVar3, false, (MethodDefinition*)&local_a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHODP((char*)&local_a8, (char***)"get_background", 0);
   auStack_50 = (undefined1[16])0x0;
   local_58 = (undefined**)0x0;
   pMVar3 = create_method_bind<Environment,Environment::BGMode>(get_background);
   ClassDB::bind_methodfi(1, pMVar3, false, (MethodDefinition*)&local_a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHOD<char_const*>((char*)&local_a8, "set_sky");
   auStack_50 = (undefined1[16])0x0;
   local_58 = (undefined**)0x0;
   pMVar3 = create_method_bind<Environment,Ref<Sky>const&>(set_sky);
   ClassDB::bind_methodfi(1, pMVar3, false, (MethodDefinition*)&local_a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHODP((char*)&local_a8, (char***)"get_sky", 0);
   auStack_50 = (undefined1[16])0x0;
   local_58 = (undefined**)0x0;
   pMVar3 = create_method_bind<Environment,Ref<Sky>>(get_sky);
   ClassDB::bind_methodfi(1, pMVar3, false, (MethodDefinition*)&local_a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHOD<char_const*>((char*)&local_a8, "set_sky_custom_fov");
   ClassDB::bind_method<MethodDefinition,void(Environment::*)(float)>((MethodDefinition*)&local_a8, set_sky_custom_fov, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHODP((char*)&local_a8, (char***)"get_sky_custom_fov", 0);
   ClassDB::bind_method<MethodDefinition,float(Environment::*)()const>((MethodDefinition*)&local_a8, get_sky_custom_fov, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHOD<char_const*>((char*)&local_a8, "set_sky_rotation");
   auStack_50 = (undefined1[16])0x0;
   local_58 = (undefined**)0x0;
   pMVar3 = create_method_bind<Environment,Vector3_const&>(set_sky_rotation);
   ClassDB::bind_methodfi(1, pMVar3, false, (MethodDefinition*)&local_a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHODP((char*)&local_a8, (char***)"get_sky_rotation", 0);
   auStack_50 = (undefined1[16])0x0;
   local_58 = (undefined**)0x0;
   pMVar3 = create_method_bind<Environment,Vector3>(get_sky_rotation);
   ClassDB::bind_methodfi(1, pMVar3, false, (MethodDefinition*)&local_a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHOD<char_const*>((char*)&local_a8, "set_bg_color");
   auStack_50 = (undefined1[16])0x0;
   local_58 = (undefined**)0x0;
   pMVar3 = create_method_bind<Environment,Color_const&>(set_bg_color);
   ClassDB::bind_methodfi(1, pMVar3, false, (MethodDefinition*)&local_a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHODP((char*)&local_a8, (char***)"get_bg_color", 0);
   auStack_50 = (undefined1[16])0x0;
   local_58 = (undefined**)0x0;
   pMVar3 = create_method_bind<Environment,Color>(get_bg_color);
   ClassDB::bind_methodfi(1, pMVar3, false, (MethodDefinition*)&local_a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHOD<char_const*>((char*)&local_a8, "set_bg_energy_multiplier");
   ClassDB::bind_method<MethodDefinition,void(Environment::*)(float)>((MethodDefinition*)&local_a8, set_bg_energy_multiplier, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHODP((char*)&local_a8, (char***)"get_bg_energy_multiplier", 0);
   ClassDB::bind_method<MethodDefinition,float(Environment::*)()const>((MethodDefinition*)&local_a8, get_bg_energy_multiplier, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHOD<char_const*>((char*)&local_a8, "set_bg_intensity");
   ClassDB::bind_method<MethodDefinition,void(Environment::*)(float)>((MethodDefinition*)&local_a8, set_bg_intensity, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHODP((char*)&local_a8, (char***)"get_bg_intensity", 0);
   ClassDB::bind_method<MethodDefinition,float(Environment::*)()const>((MethodDefinition*)&local_a8, get_bg_intensity, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHOD<char_const*>((char*)&local_a8, "set_canvas_max_layer");
   auStack_50 = (undefined1[16])0x0;
   local_58 = (undefined**)0x0;
   pMVar3 = create_method_bind<Environment,int>(set_canvas_max_layer);
   ClassDB::bind_methodfi(1, pMVar3, false, (MethodDefinition*)&local_a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHODP((char*)&local_a8, (char***)"get_canvas_max_layer", 0);
   auStack_50 = (undefined1[16])0x0;
   local_58 = (undefined**)0x0;
   pMVar3 = create_method_bind<Environment,int>(get_canvas_max_layer);
   ClassDB::bind_methodfi(1, pMVar3, false, (MethodDefinition*)&local_a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHOD<char_const*>((char*)&local_a8, "set_camera_feed_id");
   auStack_50 = (undefined1[16])0x0;
   local_58 = (undefined**)0x0;
   pMVar3 = create_method_bind<Environment,int>(set_camera_feed_id);
   ClassDB::bind_methodfi(1, pMVar3, false, (MethodDefinition*)&local_a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHODP((char*)&local_a8, (char***)"get_camera_feed_id", 0);
   auStack_50 = (undefined1[16])0x0;
   local_58 = (undefined**)0x0;
   pMVar3 = create_method_bind<Environment,int>(get_camera_feed_id);
   ClassDB::bind_methodfi(1, pMVar3, false, (MethodDefinition*)&local_a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   local_a8 = (char*)0x0;
   String::parse_latin1((String*)&local_a8, "background_");
   local_b8 = (char*)0x0;
   String::parse_latin1((String*)&local_b8, "Background");
   local_c8 = 0;
   String::parse_latin1((String*)&local_c8, "Environment");
   StringName::StringName((StringName*)&local_c0, (String*)&local_c8, false);
   ClassDB::add_property_group((StringName*)&local_c0, (String*)&local_b8, (String*)&local_a8, 0);
   if (( StringName::configured != '\0' ) && ( local_c0 != 0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   _scs_create((char*)&local_c0, true);
   _scs_create((char*)&local_c8, true);
   local_d0 = 0;
   local_d8 = 0;
   String::parse_latin1((String*)&local_d8, "Clear Color,Custom Color,Sky,Canvas,Keep,Camera Feed");
   local_e0 = 0;
   String::parse_latin1((String*)&local_e0, "background_mode");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_a8, 2, (String*)&local_e0, 2, (String*)&local_d8, 6, (String*)&local_d0);
   local_e8 = 0;
   String::parse_latin1((String*)&local_e8, "Environment");
   StringName::StringName((StringName*)&local_b8, (String*)&local_e8, false);
   ClassDB::add_property((StringName*)&local_b8, (PropertyInfo*)&local_a8, (StringName*)&local_c8, (StringName*)&local_c0, -1);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   if (StringName::configured != '\0') {
      if (local_d0 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00103938;
      }
      if (local_c8 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00103938;
      }
      if (local_c0 != 0) {
         StringName::unref();
      }
   }
   LAB_00103938:_scs_create((char*)&local_c0, true);
   _scs_create((char*)&local_c8, true);
   local_d0 = 0;
   local_d8 = 0;
   String::parse_latin1((String*)&local_d8, "");
   local_e0 = 0;
   String::parse_latin1((String*)&local_e0, "background_color");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_a8, 0x14, (String*)&local_e0, 0, (String*)&local_d8, 6, (String*)&local_d0);
   local_e8 = 0;
   String::parse_latin1((String*)&local_e8, "Environment");
   StringName::StringName((StringName*)&local_b8, (String*)&local_e8, false);
   ClassDB::add_property((StringName*)&local_b8, (PropertyInfo*)&local_a8, (StringName*)&local_c8, (StringName*)&local_c0, -1);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   if (StringName::configured != '\0') {
      if (local_d0 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00103a80;
      }
      if (local_c8 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00103a80;
      }
      if (local_c0 != 0) {
         StringName::unref();
      }
   }
   LAB_00103a80:_scs_create((char*)&local_c0, true);
   _scs_create((char*)&local_c8, true);
   local_d0 = 0;
   local_d8 = 0;
   String::parse_latin1((String*)&local_d8, "0,16,0.01");
   local_e0 = 0;
   String::parse_latin1((String*)&local_e0, "background_energy_multiplier");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_a8, 3, (String*)&local_e0, 1, (String*)&local_d8, 6, (String*)&local_d0);
   local_e8 = 0;
   String::parse_latin1((String*)&local_e8, "Environment");
   StringName::StringName((StringName*)&local_b8, (String*)&local_e8, false);
   ClassDB::add_property((StringName*)&local_b8, (PropertyInfo*)&local_a8, (StringName*)&local_c8, (StringName*)&local_c0, -1);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   if (StringName::configured != '\0') {
      if (local_d0 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00103bcb;
      }
      if (local_c8 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00103bcb;
      }
      if (local_c0 != 0) {
         StringName::unref();
      }
   }
   LAB_00103bcb:_scs_create((char*)&local_c0, true);
   _scs_create((char*)&local_c8, true);
   local_d0 = 0;
   local_d8 = 0;
   String::parse_latin1((String*)&local_d8, "0,100000,0.01,suffix:nt");
   local_e0 = 0;
   String::parse_latin1((String*)&local_e0, "background_intensity");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_a8, 3, (String*)&local_e0, 1, (String*)&local_d8, 6, (String*)&local_d0);
   local_e8 = 0;
   String::parse_latin1((String*)&local_e8, "Environment");
   StringName::StringName((StringName*)&local_b8, (String*)&local_e8, false);
   ClassDB::add_property((StringName*)&local_b8, (PropertyInfo*)&local_a8, (StringName*)&local_c8, (StringName*)&local_c0, -1);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   if (StringName::configured != '\0') {
      if (local_d0 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00103d17;
      }
      if (local_c8 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00103d17;
      }
      if (local_c0 != 0) {
         StringName::unref();
      }
   }
   LAB_00103d17:_scs_create((char*)&local_c0, true);
   _scs_create((char*)&local_c8, true);
   local_d0 = 0;
   local_d8 = 0;
   String::parse_latin1((String*)&local_d8, "-1000,1000,1");
   local_e0 = 0;
   String::parse_latin1((String*)&local_e0, "background_canvas_max_layer");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_a8, 2, (String*)&local_e0, 1, (String*)&local_d8, 6, (String*)&local_d0);
   local_e8 = 0;
   String::parse_latin1((String*)&local_e8, "Environment");
   StringName::StringName((StringName*)&local_b8, (String*)&local_e8, false);
   ClassDB::add_property((StringName*)&local_b8, (PropertyInfo*)&local_a8, (StringName*)&local_c8, (StringName*)&local_c0, -1);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   if (StringName::configured != '\0') {
      if (local_d0 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00103e64;
      }
      if (local_c8 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00103e64;
      }
      if (local_c0 != 0) {
         StringName::unref();
      }
   }
   LAB_00103e64:_scs_create((char*)&local_c0, true);
   _scs_create((char*)&local_c8, true);
   local_d0 = 0;
   local_d8 = 0;
   String::parse_latin1((String*)&local_d8, "1,10,1");
   local_e0 = 0;
   String::parse_latin1((String*)&local_e0, "background_camera_feed_id");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_a8, 2, (String*)&local_e0, 1, (String*)&local_d8, 6, (String*)&local_d0);
   local_e8 = 0;
   String::parse_latin1((String*)&local_e8, "Environment");
   StringName::StringName((StringName*)&local_b8, (String*)&local_e8, false);
   ClassDB::add_property((StringName*)&local_b8, (PropertyInfo*)&local_a8, (StringName*)&local_c8, (StringName*)&local_c0, -1);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   if (StringName::configured != '\0') {
      if (local_d0 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00103fb0;
      }
      if (local_c8 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00103fb0;
      }
      if (local_c0 != 0) {
         StringName::unref();
      }
   }
   LAB_00103fb0:local_a8 = (char*)0x0;
   String::parse_latin1((String*)&local_a8, "sky_");
   local_b8 = (char*)0x0;
   String::parse_latin1((String*)&local_b8, "Sky");
   local_c8 = 0;
   String::parse_latin1((String*)&local_c8, "Environment");
   StringName::StringName((StringName*)&local_c0, (String*)&local_c8, false);
   ClassDB::add_property_group((StringName*)&local_c0, (String*)&local_b8, (String*)&local_a8, 0);
   if (( StringName::configured != '\0' ) && ( local_c0 != 0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   _scs_create((char*)&local_c0, true);
   _scs_create((char*)&local_c8, true);
   local_d0 = 0;
   local_d8 = 0;
   String::parse_latin1((String*)&local_d8, "Sky");
   local_e0 = 0;
   String::parse_latin1((String*)&local_e0, "sky");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_a8, 0x18, (String*)&local_e0, 0x11, (String*)&local_d8, 6, (String*)&local_d0);
   local_e8 = 0;
   String::parse_latin1((String*)&local_e8, "Environment");
   StringName::StringName((StringName*)&local_b8, (String*)&local_e8, false);
   ClassDB::add_property((StringName*)&local_b8, (PropertyInfo*)&local_a8, (StringName*)&local_c8, (StringName*)&local_c0, -1);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   if (StringName::configured != '\0') {
      if (local_d0 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00104194;
      }
      if (local_c8 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00104194;
      }
      if (local_c0 != 0) {
         StringName::unref();
      }
   }
   LAB_00104194:_scs_create((char*)&local_c0, true);
   _scs_create((char*)&local_c8, true);
   local_d0 = 0;
   local_d8 = 0;
   String::parse_latin1((String*)&local_d8, "0,180,0.1,degrees");
   local_e0 = 0;
   String::parse_latin1((String*)&local_e0, "sky_custom_fov");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_a8, 3, (String*)&local_e0, 1, (String*)&local_d8, 6, (String*)&local_d0);
   local_e8 = 0;
   String::parse_latin1((String*)&local_e8, "Environment");
   StringName::StringName((StringName*)&local_b8, (String*)&local_e8, false);
   ClassDB::add_property((StringName*)&local_b8, (PropertyInfo*)&local_a8, (StringName*)&local_c8, (StringName*)&local_c0, -1);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   if (StringName::configured != '\0') {
      if (local_d0 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_001042df;
      }
      if (local_c8 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_001042df;
      }
      if (local_c0 != 0) {
         StringName::unref();
      }
   }
   LAB_001042df:_scs_create((char*)&local_c0, true);
   _scs_create((char*)&local_c8, true);
   local_d0 = 0;
   local_d8 = 0;
   String::parse_latin1((String*)&local_d8, "-360,360,0.1,or_less,or_greater,radians_as_degrees");
   local_e0 = 0;
   String::parse_latin1((String*)&local_e0, "sky_rotation");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_a8, 9, (String*)&local_e0, 1, (String*)&local_d8, 6, (String*)&local_d0);
   local_e8 = 0;
   String::parse_latin1((String*)&local_e8, "Environment");
   StringName::StringName((StringName*)&local_b8, (String*)&local_e8, false);
   ClassDB::add_property((StringName*)&local_b8, (PropertyInfo*)&local_a8, (StringName*)&local_c8, (StringName*)&local_c0, -1);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   if (StringName::configured != '\0') {
      if (local_d0 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010442b;
      }
      if (local_c8 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010442b;
      }
      if (local_c0 != 0) {
         StringName::unref();
      }
   }
   LAB_0010442b:D_METHOD<char_const*>((char*)&local_a8, "set_ambient_light_color");
   auStack_50 = (undefined1[16])0x0;
   local_58 = (undefined**)0x0;
   pMVar3 = create_method_bind<Environment,Color_const&>(set_ambient_light_color);
   ClassDB::bind_methodfi(1, pMVar3, false, (MethodDefinition*)&local_a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHODP((char*)&local_a8, (char***)"get_ambient_light_color", 0);
   auStack_50 = (undefined1[16])0x0;
   local_58 = (undefined**)0x0;
   pMVar3 = create_method_bind<Environment,Color>(get_ambient_light_color);
   ClassDB::bind_methodfi(1, pMVar3, false, (MethodDefinition*)&local_a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHOD<char_const*>((char*)&local_a8, "set_ambient_source");
   auStack_50 = (undefined1[16])0x0;
   local_58 = (undefined**)0x0;
   pMVar3 = create_method_bind<Environment,Environment::AmbientSource>(set_ambient_source);
   ClassDB::bind_methodfi(1, pMVar3, false, (MethodDefinition*)&local_a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHODP((char*)&local_a8, (char***)"get_ambient_source", 0);
   auStack_50 = (undefined1[16])0x0;
   local_58 = (undefined**)0x0;
   pMVar3 = create_method_bind<Environment,Environment::AmbientSource>(get_ambient_source);
   ClassDB::bind_methodfi(1, pMVar3, false, (MethodDefinition*)&local_a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHOD<char_const*>((char*)&local_a8, "set_ambient_light_energy");
   ClassDB::bind_method<MethodDefinition,void(Environment::*)(float)>((MethodDefinition*)&local_a8, set_ambient_light_energy, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHODP((char*)&local_a8, (char***)"get_ambient_light_energy", 0);
   ClassDB::bind_method<MethodDefinition,float(Environment::*)()const>((MethodDefinition*)&local_a8, get_ambient_light_energy, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHOD<char_const*>((char*)&local_a8, "set_ambient_light_sky_contribution");
   ClassDB::bind_method<MethodDefinition,void(Environment::*)(float)>((MethodDefinition*)&local_a8, set_ambient_light_sky_contribution, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHODP((char*)&local_a8, (char***)"get_ambient_light_sky_contribution", 0);
   ClassDB::bind_method<MethodDefinition,float(Environment::*)()const>((MethodDefinition*)&local_a8, get_ambient_light_sky_contribution, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHOD<char_const*>((char*)&local_a8, "set_reflection_source");
   auStack_50 = (undefined1[16])0x0;
   local_58 = (undefined**)0x0;
   pMVar3 = create_method_bind<Environment,Environment::ReflectionSource>(set_reflection_source);
   ClassDB::bind_methodfi(1, pMVar3, false, (MethodDefinition*)&local_a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHODP((char*)&local_a8, (char***)"get_reflection_source", 0);
   auStack_50 = (undefined1[16])0x0;
   local_58 = (undefined**)0x0;
   pMVar3 = create_method_bind<Environment,Environment::ReflectionSource>(get_reflection_source);
   ClassDB::bind_methodfi(1, pMVar3, false, (MethodDefinition*)&local_a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   local_a8 = (char*)0x0;
   String::parse_latin1((String*)&local_a8, "ambient_light_");
   local_b8 = (char*)0x0;
   String::parse_latin1((String*)&local_b8, "Ambient Light");
   local_c8 = 0;
   String::parse_latin1((String*)&local_c8, "Environment");
   StringName::StringName((StringName*)&local_c0, (String*)&local_c8, false);
   ClassDB::add_property_group((StringName*)&local_c0, (String*)&local_b8, (String*)&local_a8, 0);
   if (( StringName::configured != '\0' ) && ( local_c0 != 0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   _scs_create((char*)&local_c0, true);
   _scs_create((char*)&local_c8, true);
   local_d0 = 0;
   local_d8 = 0;
   String::parse_latin1((String*)&local_d8, "Background,Disabled,Color,Sky");
   local_e0 = 0;
   String::parse_latin1((String*)&local_e0, "ambient_light_source");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_a8, 2, (String*)&local_e0, 2, (String*)&local_d8, 6, (String*)&local_d0);
   local_e8 = 0;
   String::parse_latin1((String*)&local_e8, "Environment");
   StringName::StringName((StringName*)&local_b8, (String*)&local_e8, false);
   ClassDB::add_property((StringName*)&local_b8, (PropertyInfo*)&local_a8, (StringName*)&local_c8, (StringName*)&local_c0, -1);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   if (StringName::configured != '\0') {
      if (local_d0 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010497c;
      }
      if (local_c8 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010497c;
      }
      if (local_c0 != 0) {
         StringName::unref();
      }
   }
   LAB_0010497c:_scs_create((char*)&local_c0, true);
   _scs_create((char*)&local_c8, true);
   local_d0 = 0;
   local_d8 = 0;
   String::parse_latin1((String*)&local_d8, "");
   local_e0 = 0;
   String::parse_latin1((String*)&local_e0, "ambient_light_color");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_a8, 0x14, (String*)&local_e0, 0, (String*)&local_d8, 6, (String*)&local_d0);
   local_e8 = 0;
   String::parse_latin1((String*)&local_e8, "Environment");
   StringName::StringName((StringName*)&local_b8, (String*)&local_e8, false);
   ClassDB::add_property((StringName*)&local_b8, (PropertyInfo*)&local_a8, (StringName*)&local_c8, (StringName*)&local_c0, -1);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   if (StringName::configured != '\0') {
      if (local_d0 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00104ac5;
      }
      if (local_c8 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00104ac5;
      }
      if (local_c0 != 0) {
         StringName::unref();
      }
   }
   LAB_00104ac5:_scs_create((char*)&local_c0, true);
   _scs_create((char*)&local_c8, true);
   local_d0 = 0;
   local_d8 = 0;
   String::parse_latin1((String*)&local_d8, "0,1,0.01");
   local_e0 = 0;
   String::parse_latin1((String*)&local_e0, "ambient_light_sky_contribution");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_a8, 3, (String*)&local_e0, 1, (String*)&local_d8, 6, (String*)&local_d0);
   local_e8 = 0;
   String::parse_latin1((String*)&local_e8, "Environment");
   StringName::StringName((StringName*)&local_b8, (String*)&local_e8, false);
   ClassDB::add_property((StringName*)&local_b8, (PropertyInfo*)&local_a8, (StringName*)&local_c8, (StringName*)&local_c0, -1);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   if (StringName::configured != '\0') {
      if (local_d0 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00104c10;
      }
      if (local_c8 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00104c10;
      }
      if (local_c0 != 0) {
         StringName::unref();
      }
   }
   LAB_00104c10:_scs_create((char*)&local_c0, true);
   _scs_create((char*)&local_c8, true);
   local_d0 = 0;
   local_d8 = 0;
   String::parse_latin1((String*)&local_d8, "0,16,0.01");
   local_e0 = 0;
   String::parse_latin1((String*)&local_e0, "ambient_light_energy");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_a8, 3, (String*)&local_e0, 1, (String*)&local_d8, 6, (String*)&local_d0);
   local_e8 = 0;
   String::parse_latin1((String*)&local_e8, "Environment");
   StringName::StringName((StringName*)&local_b8, (String*)&local_e8, false);
   ClassDB::add_property((StringName*)&local_b8, (PropertyInfo*)&local_a8, (StringName*)&local_c8, (StringName*)&local_c0, -1);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   if (StringName::configured != '\0') {
      if (local_d0 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00104d5b;
      }
      if (local_c8 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00104d5b;
      }
      if (local_c0 != 0) {
         StringName::unref();
      }
   }
   LAB_00104d5b:local_a8 = (char*)0x0;
   String::parse_latin1((String*)&local_a8, "reflected_light_");
   local_b8 = (char*)0x0;
   String::parse_latin1((String*)&local_b8, "Reflected Light");
   local_c8 = 0;
   String::parse_latin1((String*)&local_c8, "Environment");
   StringName::StringName((StringName*)&local_c0, (String*)&local_c8, false);
   ClassDB::add_property_group((StringName*)&local_c0, (String*)&local_b8, (String*)&local_a8, 0);
   if (( StringName::configured != '\0' ) && ( local_c0 != 0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   _scs_create((char*)&local_c0, true);
   _scs_create((char*)&local_c8, true);
   local_d0 = 0;
   local_d8 = 0;
   String::parse_latin1((String*)&local_d8, "Background,Disabled,Sky");
   local_e0 = 0;
   String::parse_latin1((String*)&local_e0, "reflected_light_source");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_a8, 2, (String*)&local_e0, 2, (String*)&local_d8, 6, (String*)&local_d0);
   local_e8 = 0;
   String::parse_latin1((String*)&local_e8, "Environment");
   StringName::StringName((StringName*)&local_b8, (String*)&local_e8, false);
   ClassDB::add_property((StringName*)&local_b8, (PropertyInfo*)&local_a8, (StringName*)&local_c8, (StringName*)&local_c0, -1);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   if (StringName::configured != '\0') {
      if (local_d0 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00104f40;
      }
      if (local_c8 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00104f40;
      }
      if (local_c0 != 0) {
         StringName::unref();
      }
   }
   LAB_00104f40:D_METHOD<char_const*>((char*)&local_a8, "set_tonemapper");
   auStack_50 = (undefined1[16])0x0;
   local_58 = (undefined**)0x0;
   pMVar3 = create_method_bind<Environment,Environment::ToneMapper>(set_tonemapper);
   ClassDB::bind_methodfi(1, pMVar3, false, (MethodDefinition*)&local_a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHODP((char*)&local_a8, (char***)"get_tonemapper", 0);
   auStack_50 = (undefined1[16])0x0;
   local_58 = (undefined**)0x0;
   pMVar3 = create_method_bind<Environment,Environment::ToneMapper>(get_tonemapper);
   ClassDB::bind_methodfi(1, pMVar3, false, (MethodDefinition*)&local_a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHOD<char_const*>((char*)&local_a8, "set_tonemap_exposure");
   ClassDB::bind_method<MethodDefinition,void(Environment::*)(float)>((MethodDefinition*)&local_a8, set_tonemap_exposure, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHODP((char*)&local_a8, (char***)"get_tonemap_exposure", 0);
   ClassDB::bind_method<MethodDefinition,float(Environment::*)()const>((MethodDefinition*)&local_a8, get_tonemap_exposure, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHOD<char_const*>((char*)&local_a8, "set_tonemap_white");
   ClassDB::bind_method<MethodDefinition,void(Environment::*)(float)>((MethodDefinition*)&local_a8, set_tonemap_white, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHODP((char*)&local_a8, (char***)"get_tonemap_white", 0);
   ClassDB::bind_method<MethodDefinition,float(Environment::*)()const>((MethodDefinition*)&local_a8, get_tonemap_white, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   local_a8 = (char*)0x0;
   String::parse_latin1((String*)&local_a8, "tonemap_");
   local_b8 = (char*)0x0;
   String::parse_latin1((String*)&local_b8, "Tonemap");
   local_c8 = 0;
   String::parse_latin1((String*)&local_c8, "Environment");
   StringName::StringName((StringName*)&local_c0, (String*)&local_c8, false);
   ClassDB::add_property_group((StringName*)&local_c0, (String*)&local_b8, (String*)&local_a8, 0);
   if (( StringName::configured != '\0' ) && ( local_c0 != 0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   _scs_create((char*)&local_c0, true);
   _scs_create((char*)&local_c8, true);
   local_d0 = 0;
   local_d8 = 0;
   String::parse_latin1((String*)&local_d8, "Linear,Reinhard,Filmic,ACES,AgX");
   local_e0 = 0;
   String::parse_latin1((String*)&local_e0, "tonemap_mode");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_a8, 2, (String*)&local_e0, 2, (String*)&local_d8, 6, (String*)&local_d0);
   local_e8 = 0;
   String::parse_latin1((String*)&local_e8, "Environment");
   StringName::StringName((StringName*)&local_b8, (String*)&local_e8, false);
   ClassDB::add_property((StringName*)&local_b8, (PropertyInfo*)&local_a8, (StringName*)&local_c8, (StringName*)&local_c0, -1);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   if (StringName::configured != '\0') {
      if (local_d0 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_001052c3;
      }
      if (local_c8 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_001052c3;
      }
      if (local_c0 != 0) {
         StringName::unref();
      }
   }
   LAB_001052c3:_scs_create((char*)&local_c0, true);
   _scs_create((char*)&local_c8, true);
   local_d0 = 0;
   local_d8 = 0;
   String::parse_latin1((String*)&local_d8, "0,16,0.01");
   local_e0 = 0;
   String::parse_latin1((String*)&local_e0, "tonemap_exposure");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_a8, 3, (String*)&local_e0, 1, (String*)&local_d8, 6, (String*)&local_d0);
   local_e8 = 0;
   String::parse_latin1((String*)&local_e8, "Environment");
   StringName::StringName((StringName*)&local_b8, (String*)&local_e8, false);
   ClassDB::add_property((StringName*)&local_b8, (PropertyInfo*)&local_a8, (StringName*)&local_c8, (StringName*)&local_c0, -1);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   if (StringName::configured != '\0') {
      if (local_d0 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010540f;
      }
      if (local_c8 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010540f;
      }
      if (local_c0 != 0) {
         StringName::unref();
      }
   }
   LAB_0010540f:_scs_create((char*)&local_c0, true);
   _scs_create((char*)&local_c8, true);
   local_d0 = 0;
   local_d8 = 0;
   String::parse_latin1((String*)&local_d8, "0,16,0.01");
   local_e0 = 0;
   String::parse_latin1((String*)&local_e0, "tonemap_white");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_a8, 3, (String*)&local_e0, 1, (String*)&local_d8, 6, (String*)&local_d0);
   local_e8 = 0;
   String::parse_latin1((String*)&local_e8, "Environment");
   StringName::StringName((StringName*)&local_b8, (String*)&local_e8, false);
   ClassDB::add_property((StringName*)&local_b8, (PropertyInfo*)&local_a8, (StringName*)&local_c8, (StringName*)&local_c0, -1);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   if (StringName::configured != '\0') {
      if (local_d0 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010555a;
      }
      if (local_c8 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010555a;
      }
      if (local_c0 != 0) {
         StringName::unref();
      }
   }
   LAB_0010555a:D_METHOD<char_const*>((char*)&local_a8, "set_ssr_enabled");
   ClassDB::bind_method<MethodDefinition,void(Environment::*)(bool)>((MethodDefinition*)&local_a8, set_ssr_enabled, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHODP((char*)&local_a8, (char***)"is_ssr_enabled", 0);
   ClassDB::bind_method<MethodDefinition,bool(Environment::*)()const>((MethodDefinition*)&local_a8, is_ssr_enabled, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHOD<char_const*>((char*)&local_a8, "set_ssr_max_steps");
   auStack_50 = (undefined1[16])0x0;
   local_58 = (undefined**)0x0;
   pMVar3 = create_method_bind<Environment,int>(set_ssr_max_steps);
   ClassDB::bind_methodfi(1, pMVar3, false, (MethodDefinition*)&local_a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHODP((char*)&local_a8, (char***)"get_ssr_max_steps", 0);
   auStack_50 = (undefined1[16])0x0;
   local_58 = (undefined**)0x0;
   pMVar3 = create_method_bind<Environment,int>(get_ssr_max_steps);
   ClassDB::bind_methodfi(1, pMVar3, false, (MethodDefinition*)&local_a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHOD<char_const*>((char*)&local_a8, "set_ssr_fade_in");
   ClassDB::bind_method<MethodDefinition,void(Environment::*)(float)>((MethodDefinition*)&local_a8, set_ssr_fade_in, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHODP((char*)&local_a8, (char***)"get_ssr_fade_in", 0);
   ClassDB::bind_method<MethodDefinition,float(Environment::*)()const>((MethodDefinition*)&local_a8, get_ssr_fade_in, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHOD<char_const*>((char*)&local_a8, "set_ssr_fade_out");
   ClassDB::bind_method<MethodDefinition,void(Environment::*)(float)>((MethodDefinition*)&local_a8, set_ssr_fade_out, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHODP((char*)&local_a8, (char***)"get_ssr_fade_out", 0);
   ClassDB::bind_method<MethodDefinition,float(Environment::*)()const>((MethodDefinition*)&local_a8, get_ssr_fade_out, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHOD<char_const*>((char*)&local_a8, "set_ssr_depth_tolerance");
   ClassDB::bind_method<MethodDefinition,void(Environment::*)(float)>((MethodDefinition*)&local_a8, set_ssr_depth_tolerance, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHODP((char*)&local_a8, (char***)"get_ssr_depth_tolerance", 0);
   ClassDB::bind_method<MethodDefinition,float(Environment::*)()const>((MethodDefinition*)&local_a8, get_ssr_depth_tolerance, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   local_a8 = (char*)0x0;
   String::parse_latin1((String*)&local_a8, "ssr_");
   local_b8 = (char*)0x0;
   String::parse_latin1((String*)&local_b8, "SSR");
   local_c8 = 0;
   String::parse_latin1((String*)&local_c8, "Environment");
   StringName::StringName((StringName*)&local_c0, (String*)&local_c8, false);
   ClassDB::add_property_group((StringName*)&local_c0, (String*)&local_b8, (String*)&local_a8, 0);
   if (( StringName::configured != '\0' ) && ( local_c0 != 0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   _scs_create((char*)&local_c0, true);
   _scs_create((char*)&local_c8, true);
   local_d0 = 0;
   local_d8 = 0;
   String::parse_latin1((String*)&local_d8, "");
   local_e0 = 0;
   String::parse_latin1((String*)&local_e0, "ssr_enabled");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_a8, 1, (String*)&local_e0, 0, (String*)&local_d8, 6, (String*)&local_d0);
   local_e8 = 0;
   String::parse_latin1((String*)&local_e8, "Environment");
   StringName::StringName((StringName*)&local_b8, (String*)&local_e8, false);
   ClassDB::add_property((StringName*)&local_b8, (PropertyInfo*)&local_a8, (StringName*)&local_c8, (StringName*)&local_c0, -1);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   if (StringName::configured != '\0') {
      if (local_d0 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010598e;
      }
      if (local_c8 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010598e;
      }
      if (local_c0 != 0) {
         StringName::unref();
      }
   }
   LAB_0010598e:_scs_create((char*)&local_c0, true);
   _scs_create((char*)&local_c8, true);
   local_d0 = 0;
   local_d8 = 0;
   String::parse_latin1((String*)&local_d8, "1,512,1");
   local_e0 = 0;
   String::parse_latin1((String*)&local_e0, "ssr_max_steps");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_a8, 2, (String*)&local_e0, 1, (String*)&local_d8, 6, (String*)&local_d0);
   local_e8 = 0;
   String::parse_latin1((String*)&local_e8, "Environment");
   StringName::StringName((StringName*)&local_b8, (String*)&local_e8, false);
   ClassDB::add_property((StringName*)&local_b8, (PropertyInfo*)&local_a8, (StringName*)&local_c8, (StringName*)&local_c0, -1);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   if (StringName::configured != '\0') {
      if (local_d0 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00105ada;
      }
      if (local_c8 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00105ada;
      }
      if (local_c0 != 0) {
         StringName::unref();
      }
   }
   LAB_00105ada:_scs_create((char*)&local_c0, true);
   _scs_create((char*)&local_c8, true);
   local_d0 = 0;
   local_d8 = 0;
   String::parse_latin1((String*)&local_d8, "positive_only");
   local_e0 = 0;
   local_a8 = "ssr_fade_in";
   local_a0 = 0xb;
   String::parse_latin1((StrRange*)&local_e0);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_a8, 3, (String*)&local_e0, 4, (String*)&local_d8, 6, (String*)&local_d0);
   local_e8 = 0;
   String::parse_latin1((String*)&local_e8, "Environment");
   StringName::StringName((StringName*)&local_b8, (String*)&local_e8, false);
   ClassDB::add_property((StringName*)&local_b8, (PropertyInfo*)&local_a8, (StringName*)&local_c8, (StringName*)&local_c0, -1);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   if (StringName::configured != '\0') {
      if (local_d0 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00105c3e;
      }
      if (local_c8 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00105c3e;
      }
      if (local_c0 != 0) {
         StringName::unref();
      }
   }
   LAB_00105c3e:_scs_create((char*)&local_c0, true);
   _scs_create((char*)&local_c8, true);
   local_d0 = 0;
   local_d8 = 0;
   String::parse_latin1((String*)&local_d8, "positive_only");
   local_e0 = 0;
   String::parse_latin1((String*)&local_e0, "ssr_fade_out");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_a8, 3, (String*)&local_e0, 4, (String*)&local_d8, 6, (String*)&local_d0);
   local_b8 = "Environment";
   local_e8 = 0;
   local_b0 = 0xb;
   String::parse_latin1((StrRange*)&local_e8);
   StringName::StringName((StringName*)&local_b8, (String*)&local_e8, false);
   ClassDB::add_property((StringName*)&local_b8, (PropertyInfo*)&local_a8, (StringName*)&local_c8, (StringName*)&local_c0, -1);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   if (StringName::configured != '\0') {
      if (local_d0 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00105da1;
      }
      if (local_c8 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00105da1;
      }
      if (local_c0 != 0) {
         StringName::unref();
      }
   }
   LAB_00105da1:_scs_create((char*)&local_c0, true);
   _scs_create((char*)&local_c8, true);
   local_d0 = 0;
   local_d8 = 0;
   String::parse_latin1((String*)&local_d8, "0.01,128,0.1");
   local_e0 = 0;
   String::parse_latin1((String*)&local_e0, "ssr_depth_tolerance");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_a8, 3, (String*)&local_e0, 1, (String*)&local_d8, 6, (String*)&local_d0);
   local_e8 = 0;
   String::parse_latin1((String*)&local_e8, "Environment");
   StringName::StringName((StringName*)&local_b8, (String*)&local_e8, false);
   ClassDB::add_property((StringName*)&local_b8, (PropertyInfo*)&local_a8, (StringName*)&local_c8, (StringName*)&local_c0, -1);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   if (StringName::configured != '\0') {
      if (local_d0 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00105eec;
      }
      if (local_c8 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00105eec;
      }
      if (local_c0 != 0) {
         StringName::unref();
      }
   }
   LAB_00105eec:D_METHOD<char_const*>((char*)&local_a8, "set_ssao_enabled");
   ClassDB::bind_method<MethodDefinition,void(Environment::*)(bool)>((MethodDefinition*)&local_a8, set_ssao_enabled, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHODP((char*)&local_a8, (char***)"is_ssao_enabled", 0);
   ClassDB::bind_method<MethodDefinition,bool(Environment::*)()const>((MethodDefinition*)&local_a8, is_ssao_enabled, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHOD<char_const*>((char*)&local_a8, "set_ssao_radius");
   ClassDB::bind_method<MethodDefinition,void(Environment::*)(float)>((MethodDefinition*)&local_a8, set_ssao_radius, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHODP((char*)&local_a8, (char***)"get_ssao_radius", 0);
   ClassDB::bind_method<MethodDefinition,float(Environment::*)()const>((MethodDefinition*)&local_a8, get_ssao_radius, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHOD<char_const*>((char*)&local_a8, "set_ssao_intensity");
   ClassDB::bind_method<MethodDefinition,void(Environment::*)(float)>((MethodDefinition*)&local_a8, set_ssao_intensity, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHODP((char*)&local_a8, (char***)"get_ssao_intensity", 0);
   ClassDB::bind_method<MethodDefinition,float(Environment::*)()const>((MethodDefinition*)&local_a8, get_ssao_intensity, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHOD<char_const*>((char*)&local_a8, "set_ssao_power");
   ClassDB::bind_method<MethodDefinition,void(Environment::*)(float)>((MethodDefinition*)&local_a8, set_ssao_power, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHODP((char*)&local_a8, (char***)"get_ssao_power", 0);
   ClassDB::bind_method<MethodDefinition,float(Environment::*)()const>((MethodDefinition*)&local_a8, get_ssao_power, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHOD<char_const*>((char*)&local_a8, "set_ssao_detail");
   ClassDB::bind_method<MethodDefinition,void(Environment::*)(float)>((MethodDefinition*)&local_a8, set_ssao_detail, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHODP((char*)&local_a8, (char***)"get_ssao_detail", 0);
   ClassDB::bind_method<MethodDefinition,float(Environment::*)()const>((MethodDefinition*)&local_a8, get_ssao_detail, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHOD<char_const*>((char*)&local_a8, "set_ssao_horizon");
   ClassDB::bind_method<MethodDefinition,void(Environment::*)(float)>((MethodDefinition*)&local_a8, set_ssao_horizon, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHODP((char*)&local_a8, (char***)"get_ssao_horizon", 0);
   ClassDB::bind_method<MethodDefinition,float(Environment::*)()const>((MethodDefinition*)&local_a8, get_ssao_horizon, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHOD<char_const*>((char*)&local_a8, "set_ssao_sharpness");
   ClassDB::bind_method<MethodDefinition,void(Environment::*)(float)>((MethodDefinition*)&local_a8, set_ssao_sharpness, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHODP((char*)&local_a8, (char***)"get_ssao_sharpness", 0);
   ClassDB::bind_method<MethodDefinition,float(Environment::*)()const>((MethodDefinition*)&local_a8, get_ssao_sharpness, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHOD<char_const*>((char*)&local_a8, "set_ssao_direct_light_affect");
   ClassDB::bind_method<MethodDefinition,void(Environment::*)(float)>((MethodDefinition*)&local_a8, set_ssao_direct_light_affect, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHODP((char*)&local_a8, (char***)"get_ssao_direct_light_affect", 0);
   ClassDB::bind_method<MethodDefinition,float(Environment::*)()const>((MethodDefinition*)&local_a8, get_ssao_direct_light_affect, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHOD<char_const*>((char*)&local_a8, "set_ssao_ao_channel_affect");
   ClassDB::bind_method<MethodDefinition,void(Environment::*)(float)>((MethodDefinition*)&local_a8, set_ssao_ao_channel_affect, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHODP((char*)&local_a8, (char***)"get_ssao_ao_channel_affect", 0);
   ClassDB::bind_method<MethodDefinition,float(Environment::*)()const>((MethodDefinition*)&local_a8, get_ssao_ao_channel_affect, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   local_a8 = (char*)0x0;
   String::parse_latin1((String*)&local_a8, "ssao_");
   local_b8 = (char*)0x0;
   String::parse_latin1((String*)&local_b8, "SSAO");
   local_c8 = 0;
   String::parse_latin1((String*)&local_c8, "Environment");
   StringName::StringName((StringName*)&local_c0, (String*)&local_c8, false);
   ClassDB::add_property_group((StringName*)&local_c0, (String*)&local_b8, (String*)&local_a8, 0);
   if (( StringName::configured != '\0' ) && ( local_c0 != 0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   _scs_create((char*)&local_c0, true);
   _scs_create((char*)&local_c8, true);
   local_a8 = "";
   local_d0 = 0;
   local_d8 = 0;
   local_a0 = 0;
   String::parse_latin1((StrRange*)&local_d8);
   local_e0 = 0;
   String::parse_latin1((String*)&local_e0, "ssao_enabled");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_a8, 1, (String*)&local_e0, 0, (String*)&local_d8, 6, (String*)&local_d0);
   local_e8 = 0;
   String::parse_latin1((String*)&local_e8, "Environment");
   StringName::StringName((StringName*)&local_b8, (String*)&local_e8, false);
   ClassDB::add_property((StringName*)&local_b8, (PropertyInfo*)&local_a8, (StringName*)&local_c8, (StringName*)&local_c0, -1);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   if (StringName::configured != '\0') {
      if (local_d0 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00106417;
      }
      if (local_c8 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00106417;
      }
      if (local_c0 != 0) {
         StringName::unref();
      }
   }
   LAB_00106417:_scs_create((char*)&local_c0, true);
   _scs_create((char*)&local_c8, true);
   local_d0 = 0;
   local_d8 = 0;
   String::parse_latin1((String*)&local_d8, "0.01,16,0.01,or_greater");
   local_e0 = 0;
   String::parse_latin1((String*)&local_e0, "ssao_radius");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_a8, 3, (String*)&local_e0, 1, (String*)&local_d8, 6, (String*)&local_d0);
   local_e8 = 0;
   String::parse_latin1((String*)&local_e8, "Environment");
   StringName::StringName((StringName*)&local_b8, (String*)&local_e8, false);
   ClassDB::add_property((StringName*)&local_b8, (PropertyInfo*)&local_a8, (StringName*)&local_c8, (StringName*)&local_c0, -1);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   if (StringName::configured != '\0') {
      if (local_d0 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00106563;
      }
      if (local_c8 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00106563;
      }
      if (local_c0 != 0) {
         StringName::unref();
      }
   }
   LAB_00106563:_scs_create((char*)&local_c0, true);
   _scs_create((char*)&local_c8, true);
   local_d0 = 0;
   local_d8 = 0;
   String::parse_latin1((String*)&local_d8, "0,16,0.01,or_greater");
   local_e0 = 0;
   String::parse_latin1((String*)&local_e0, "ssao_intensity");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_a8, 3, (String*)&local_e0, 1, (String*)&local_d8, 6, (String*)&local_d0);
   local_e8 = 0;
   String::parse_latin1((String*)&local_e8, "Environment");
   StringName::StringName((StringName*)&local_b8, (String*)&local_e8, false);
   ClassDB::add_property((StringName*)&local_b8, (PropertyInfo*)&local_a8, (StringName*)&local_c8, (StringName*)&local_c0, -1);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   if (StringName::configured != '\0') {
      if (local_d0 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_001066b0;
      }
      if (local_c8 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_001066b0;
      }
      if (local_c0 != 0) {
         StringName::unref();
      }
   }
   LAB_001066b0:_scs_create((char*)&local_c0, true);
   _scs_create((char*)&local_c8, true);
   local_d0 = 0;
   local_d8 = 0;
   String::parse_latin1((String*)&local_d8, "positive_only");
   local_e0 = 0;
   String::parse_latin1((String*)&local_e0, "ssao_power");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_a8, 3, (String*)&local_e0, 4, (String*)&local_d8, 6, (String*)&local_d0);
   local_e8 = 0;
   String::parse_latin1((String*)&local_e8, "Environment");
   StringName::StringName((StringName*)&local_b8, (String*)&local_e8, false);
   ClassDB::add_property((StringName*)&local_b8, (PropertyInfo*)&local_a8, (StringName*)&local_c8, (StringName*)&local_c0, -1);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   if (StringName::configured != '\0') {
      if (local_d0 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_001067fc;
      }
      if (local_c8 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_001067fc;
      }
      if (local_c0 != 0) {
         StringName::unref();
      }
   }
   LAB_001067fc:_scs_create((char*)&local_c0, true);
   _scs_create((char*)&local_c8, true);
   local_d0 = 0;
   local_d8 = 0;
   String::parse_latin1((String*)&local_d8, "0,5,0.01");
   local_e0 = 0;
   String::parse_latin1((String*)&local_e0, "ssao_detail");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_a8, 3, (String*)&local_e0, 1, (String*)&local_d8, 6, (String*)&local_d0);
   local_e8 = 0;
   String::parse_latin1((String*)&local_e8, "Environment");
   StringName::StringName((StringName*)&local_b8, (String*)&local_e8, false);
   ClassDB::add_property((StringName*)&local_b8, (PropertyInfo*)&local_a8, (StringName*)&local_c8, (StringName*)&local_c0, -1);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   if (StringName::configured != '\0') {
      if (local_d0 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00106947;
      }
      if (local_c8 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00106947;
      }
      if (local_c0 != 0) {
         StringName::unref();
      }
   }
   LAB_00106947:_scs_create((char*)&local_c0, true);
   _scs_create((char*)&local_c8, true);
   local_d0 = 0;
   local_d8 = 0;
   String::parse_latin1((String*)&local_d8, "0,1,0.01");
   local_e0 = 0;
   String::parse_latin1((String*)&local_e0, "ssao_horizon");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_a8, 3, (String*)&local_e0, 1, (String*)&local_d8, 6, (String*)&local_d0);
   local_e8 = 0;
   String::parse_latin1((String*)&local_e8, "Environment");
   StringName::StringName((StringName*)&local_b8, (String*)&local_e8, false);
   ClassDB::add_property((StringName*)&local_b8, (PropertyInfo*)&local_a8, (StringName*)&local_c8, (StringName*)&local_c0, -1);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   if (StringName::configured != '\0') {
      if (local_d0 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00106a92;
      }
      if (local_c8 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00106a92;
      }
      if (local_c0 != 0) {
         StringName::unref();
      }
   }
   LAB_00106a92:_scs_create((char*)&local_c0, true);
   _scs_create((char*)&local_c8, true);
   local_d0 = 0;
   local_d8 = 0;
   String::parse_latin1((String*)&local_d8, "0,1,0.01");
   local_a8 = "ssao_sharpness";
   local_e0 = 0;
   local_a0 = 0xe;
   String::parse_latin1((StrRange*)&local_e0);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_a8, 3, (String*)&local_e0, 1, (String*)&local_d8, 6, (String*)&local_d0);
   local_b8 = "Environment";
   local_e8 = 0;
   local_b0 = 0xb;
   String::parse_latin1((StrRange*)&local_e8);
   StringName::StringName((StringName*)&local_b8, (String*)&local_e8, false);
   ClassDB::add_property((StringName*)&local_b8, (PropertyInfo*)&local_a8, (StringName*)&local_c8, (StringName*)&local_c0, -1);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   if (StringName::configured != '\0') {
      if (local_d0 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00106c0c;
      }
      if (local_c8 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00106c0c;
      }
      if (local_c0 != 0) {
         StringName::unref();
      }
   }
   LAB_00106c0c:_scs_create((char*)&local_c0, true);
   _scs_create((char*)&local_c8, true);
   local_d0 = 0;
   local_d8 = 0;
   String::parse_latin1((String*)&local_d8, "0.00,1,0.01");
   local_e0 = 0;
   String::parse_latin1((String*)&local_e0, "ssao_light_affect");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_a8, 3, (String*)&local_e0, 1, (String*)&local_d8, 6, (String*)&local_d0);
   local_b8 = "Environment";
   local_e8 = 0;
   local_b0 = 0xb;
   String::parse_latin1((StrRange*)&local_e8);
   StringName::StringName((StringName*)&local_b8, (String*)&local_e8, false);
   ClassDB::add_property((StringName*)&local_b8, (PropertyInfo*)&local_a8, (StringName*)&local_c8, (StringName*)&local_c0, -1);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   if (StringName::configured != '\0') {
      if (local_d0 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00106d70;
      }
      if (local_c8 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00106d70;
      }
      if (local_c0 != 0) {
         StringName::unref();
      }
   }
   LAB_00106d70:_scs_create((char*)&local_c0, true);
   _scs_create((char*)&local_c8, true);
   local_d0 = 0;
   local_d8 = 0;
   String::parse_latin1((String*)&local_d8, "0.00,1,0.01");
   local_e0 = 0;
   local_a8 = "ssao_ao_channel_affect";
   local_a0 = 0x16;
   String::parse_latin1((StrRange*)&local_e0);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_a8, 3, (String*)&local_e0, 1, (String*)&local_d8, 6, (String*)&local_d0);
   local_e8 = 0;
   String::parse_latin1((String*)&local_e8, "Environment");
   StringName::StringName((StringName*)&local_b8, (String*)&local_e8, false);
   ClassDB::add_property((StringName*)&local_b8, (PropertyInfo*)&local_a8, (StringName*)&local_c8, (StringName*)&local_c0, -1);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   if (StringName::configured != '\0') {
      if (local_d0 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00106ed3;
      }
      if (local_c8 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00106ed3;
      }
      if (local_c0 != 0) {
         StringName::unref();
      }
   }
   LAB_00106ed3:D_METHOD<char_const*>((char*)&local_a8, "set_ssil_enabled");
   ClassDB::bind_method<MethodDefinition,void(Environment::*)(bool)>((MethodDefinition*)&local_a8, set_ssil_enabled, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHODP((char*)&local_a8, (char***)"is_ssil_enabled", 0);
   ClassDB::bind_method<MethodDefinition,bool(Environment::*)()const>((MethodDefinition*)&local_a8, is_ssil_enabled, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHOD<char_const*>((char*)&local_a8, "set_ssil_radius");
   ClassDB::bind_method<MethodDefinition,void(Environment::*)(float)>((MethodDefinition*)&local_a8, set_ssil_radius, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHODP((char*)&local_a8, (char***)"get_ssil_radius", 0);
   ClassDB::bind_method<MethodDefinition,float(Environment::*)()const>((MethodDefinition*)&local_a8, get_ssil_radius, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHOD<char_const*>((char*)&local_a8, "set_ssil_intensity");
   ClassDB::bind_method<MethodDefinition,void(Environment::*)(float)>((MethodDefinition*)&local_a8, set_ssil_intensity, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHODP((char*)&local_a8, (char***)"get_ssil_intensity", 0);
   ClassDB::bind_method<MethodDefinition,float(Environment::*)()const>((MethodDefinition*)&local_a8, get_ssil_intensity, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHOD<char_const*>((char*)&local_a8, "set_ssil_sharpness");
   ClassDB::bind_method<MethodDefinition,void(Environment::*)(float)>((MethodDefinition*)&local_a8, set_ssil_sharpness, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHODP((char*)&local_a8, (char***)"get_ssil_sharpness", 0);
   ClassDB::bind_method<MethodDefinition,float(Environment::*)()const>((MethodDefinition*)&local_a8, get_ssil_sharpness, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHOD<char_const*>((char*)&local_a8, "set_ssil_normal_rejection");
   ClassDB::bind_method<MethodDefinition,void(Environment::*)(float)>((MethodDefinition*)&local_a8, set_ssil_normal_rejection, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHODP((char*)&local_a8, (char***)"get_ssil_normal_rejection", 0);
   ClassDB::bind_method<MethodDefinition,float(Environment::*)()const>((MethodDefinition*)&local_a8, get_ssil_normal_rejection, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   local_a8 = (char*)0x0;
   String::parse_latin1((String*)&local_a8, "ssil_");
   local_b8 = (char*)0x0;
   String::parse_latin1((String*)&local_b8, "SSIL");
   local_c8 = 0;
   String::parse_latin1((String*)&local_c8, "Environment");
   StringName::StringName((StringName*)&local_c0, (String*)&local_c8, false);
   ClassDB::add_property_group((StringName*)&local_c0, (String*)&local_b8, (String*)&local_a8, 0);
   if (( StringName::configured != '\0' ) && ( local_c0 != 0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   _scs_create((char*)&local_c0, true);
   _scs_create((char*)&local_c8, true);
   local_d0 = 0;
   local_d8 = 0;
   String::parse_latin1((String*)&local_d8, "");
   local_e0 = 0;
   String::parse_latin1((String*)&local_e0, "ssil_enabled");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_a8, 1, (String*)&local_e0, 0, (String*)&local_d8, 6, (String*)&local_d0);
   local_e8 = 0;
   String::parse_latin1((String*)&local_e8, "Environment");
   StringName::StringName((StringName*)&local_b8, (String*)&local_e8, false);
   ClassDB::add_property((StringName*)&local_b8, (PropertyInfo*)&local_a8, (StringName*)&local_c8, (StringName*)&local_c0, -1);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   if (StringName::configured != '\0') {
      if (local_d0 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010727b;
      }
      if (local_c8 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010727b;
      }
      if (local_c0 != 0) {
         StringName::unref();
      }
   }
   LAB_0010727b:_scs_create((char*)&local_c0, true);
   _scs_create((char*)&local_c8, true);
   local_d0 = 0;
   local_d8 = 0;
   String::parse_latin1((String*)&local_d8, "0.01,16,0.01,or_greater,suffix:m");
   local_e0 = 0;
   String::parse_latin1((String*)&local_e0, "ssil_radius");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_a8, 3, (String*)&local_e0, 1, (String*)&local_d8, 6, (String*)&local_d0);
   local_e8 = 0;
   String::parse_latin1((String*)&local_e8, "Environment");
   StringName::StringName((StringName*)&local_b8, (String*)&local_e8, false);
   ClassDB::add_property((StringName*)&local_b8, (PropertyInfo*)&local_a8, (StringName*)&local_c8, (StringName*)&local_c0, -1);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   if (StringName::configured != '\0') {
      if (local_d0 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_001073c6;
      }
      if (local_c8 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_001073c6;
      }
      if (local_c0 != 0) {
         StringName::unref();
      }
   }
   LAB_001073c6:_scs_create((char*)&local_c0, true);
   _scs_create((char*)&local_c8, true);
   local_d0 = 0;
   local_d8 = 0;
   String::parse_latin1((String*)&local_d8, "0,16,0.01,or_greater");
   local_e0 = 0;
   String::parse_latin1((String*)&local_e0, "ssil_intensity");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_a8, 3, (String*)&local_e0, 1, (String*)&local_d8, 6, (String*)&local_d0);
   local_e8 = 0;
   String::parse_latin1((String*)&local_e8, "Environment");
   StringName::StringName((StringName*)&local_b8, (String*)&local_e8, false);
   ClassDB::add_property((StringName*)&local_b8, (PropertyInfo*)&local_a8, (StringName*)&local_c8, (StringName*)&local_c0, -1);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   if (StringName::configured != '\0') {
      if (local_d0 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00107512;
      }
      if (local_c8 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00107512;
      }
      if (local_c0 != 0) {
         StringName::unref();
      }
   }
   LAB_00107512:_scs_create((char*)&local_c0, true);
   _scs_create((char*)&local_c8, true);
   local_a8 = "0,1,0.01";
   local_d0 = 0;
   local_d8 = 0;
   local_a0 = 8;
   String::parse_latin1((StrRange*)&local_d8);
   local_e0 = 0;
   String::parse_latin1((String*)&local_e0, "ssil_sharpness");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_a8, 3, (String*)&local_e0, 1, (String*)&local_d8, 6, (String*)&local_d0);
   local_e8 = 0;
   String::parse_latin1((String*)&local_e8, "Environment");
   StringName::StringName((StringName*)&local_b8, (String*)&local_e8, false);
   ClassDB::add_property((StringName*)&local_b8, (PropertyInfo*)&local_a8, (StringName*)&local_c8, (StringName*)&local_c0, -1);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   if (StringName::configured != '\0') {
      if (local_d0 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00107676;
      }
      if (local_c8 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00107676;
      }
      if (local_c0 != 0) {
         StringName::unref();
      }
   }
   LAB_00107676:_scs_create((char*)&local_c0, true);
   _scs_create((char*)&local_c8, true);
   local_d0 = 0;
   local_d8 = 0;
   String::parse_latin1((String*)&local_d8, "0,1,0.01");
   local_e0 = 0;
   String::parse_latin1((String*)&local_e0, "ssil_normal_rejection");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_a8, 3, (String*)&local_e0, 1, (String*)&local_d8, 6, (String*)&local_d0);
   local_e8 = 0;
   String::parse_latin1((String*)&local_e8, "Environment");
   StringName::StringName((StringName*)&local_b8, (String*)&local_e8, false);
   ClassDB::add_property((StringName*)&local_b8, (PropertyInfo*)&local_a8, (StringName*)&local_c8, (StringName*)&local_c0, -1);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   if (StringName::configured != '\0') {
      if (local_d0 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_001077c2;
      }
      if (local_c8 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_001077c2;
      }
      if (local_c0 != 0) {
         StringName::unref();
      }
   }
   LAB_001077c2:D_METHOD<char_const*>((char*)&local_a8, "set_sdfgi_enabled");
   ClassDB::bind_method<MethodDefinition,void(Environment::*)(bool)>((MethodDefinition*)&local_a8, set_sdfgi_enabled, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHODP((char*)&local_a8, (char***)"is_sdfgi_enabled", 0);
   ClassDB::bind_method<MethodDefinition,bool(Environment::*)()const>((MethodDefinition*)&local_a8, is_sdfgi_enabled, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHOD<char_const*>((char*)&local_a8, "set_sdfgi_cascades");
   auStack_50 = (undefined1[16])0x0;
   local_58 = (undefined**)0x0;
   pMVar3 = create_method_bind<Environment,int>(set_sdfgi_cascades);
   ClassDB::bind_methodfi(1, pMVar3, false, (MethodDefinition*)&local_a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHODP((char*)&local_a8, (char***)"get_sdfgi_cascades", 0);
   auStack_50 = (undefined1[16])0x0;
   local_58 = (undefined**)0x0;
   pMVar3 = create_method_bind<Environment,int>(get_sdfgi_cascades);
   ClassDB::bind_methodfi(1, pMVar3, false, (MethodDefinition*)&local_a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHOD<char_const*>((char*)&local_a8, "set_sdfgi_min_cell_size");
   ClassDB::bind_method<MethodDefinition,void(Environment::*)(float)>((MethodDefinition*)&local_a8, set_sdfgi_min_cell_size, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHODP((char*)&local_a8, (char***)"get_sdfgi_min_cell_size", 0);
   ClassDB::bind_method<MethodDefinition,float(Environment::*)()const>((MethodDefinition*)&local_a8, get_sdfgi_min_cell_size, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHOD<char_const*>((char*)&local_a8, "set_sdfgi_max_distance");
   ClassDB::bind_method<MethodDefinition,void(Environment::*)(float)>((MethodDefinition*)&local_a8, set_sdfgi_max_distance, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHODP((char*)&local_a8, (char***)"get_sdfgi_max_distance", 0);
   ClassDB::bind_method<MethodDefinition,float(Environment::*)()const>((MethodDefinition*)&local_a8, get_sdfgi_max_distance, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHOD<char_const*>((char*)&local_a8, "set_sdfgi_cascade0_distance");
   ClassDB::bind_method<MethodDefinition,void(Environment::*)(float)>((MethodDefinition*)&local_a8, set_sdfgi_cascade0_distance, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHODP((char*)&local_a8, (char***)"get_sdfgi_cascade0_distance", 0);
   ClassDB::bind_method<MethodDefinition,float(Environment::*)()const>((MethodDefinition*)&local_a8, get_sdfgi_cascade0_distance, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHOD<char_const*>((char*)&local_a8, "set_sdfgi_y_scale");
   auStack_50 = (undefined1[16])0x0;
   local_58 = (undefined**)0x0;
   pMVar3 = create_method_bind<Environment,Environment::SDFGIYScale>(set_sdfgi_y_scale);
   ClassDB::bind_methodfi(1, pMVar3, false, (MethodDefinition*)&local_a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHODP((char*)&local_a8, (char***)"get_sdfgi_y_scale", 0);
   auStack_50 = (undefined1[16])0x0;
   local_58 = (undefined**)0x0;
   pMVar3 = create_method_bind<Environment,Environment::SDFGIYScale>(get_sdfgi_y_scale);
   ClassDB::bind_methodfi(1, pMVar3, false, (MethodDefinition*)&local_a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHOD<char_const*>((char*)&local_a8, "set_sdfgi_use_occlusion");
   ClassDB::bind_method<MethodDefinition,void(Environment::*)(bool)>((MethodDefinition*)&local_a8, set_sdfgi_use_occlusion, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHODP((char*)&local_a8, (char***)"is_sdfgi_using_occlusion", 0);
   ClassDB::bind_method<MethodDefinition,bool(Environment::*)()const>((MethodDefinition*)&local_a8, is_sdfgi_using_occlusion, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHOD<char_const*>((char*)&local_a8, "set_sdfgi_bounce_feedback");
   ClassDB::bind_method<MethodDefinition,void(Environment::*)(float)>((MethodDefinition*)&local_a8, set_sdfgi_bounce_feedback, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHODP((char*)&local_a8, (char***)"get_sdfgi_bounce_feedback", 0);
   ClassDB::bind_method<MethodDefinition,float(Environment::*)()const>((MethodDefinition*)&local_a8, get_sdfgi_bounce_feedback, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHOD<char_const*>((char*)&local_a8, "set_sdfgi_read_sky_light");
   ClassDB::bind_method<MethodDefinition,void(Environment::*)(bool)>((MethodDefinition*)&local_a8, set_sdfgi_read_sky_light, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHODP((char*)&local_a8, (char***)"is_sdfgi_reading_sky_light", 0);
   ClassDB::bind_method<MethodDefinition,bool(Environment::*)()const>((MethodDefinition*)&local_a8, is_sdfgi_reading_sky_light, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHOD<char_const*>((char*)&local_a8, "set_sdfgi_energy");
   ClassDB::bind_method<MethodDefinition,void(Environment::*)(float)>((MethodDefinition*)&local_a8, set_sdfgi_energy, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHODP((char*)&local_a8, (char***)"get_sdfgi_energy", 0);
   ClassDB::bind_method<MethodDefinition,float(Environment::*)()const>((MethodDefinition*)&local_a8, get_sdfgi_energy, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHOD<char_const*>((char*)&local_a8, "set_sdfgi_normal_bias");
   ClassDB::bind_method<MethodDefinition,void(Environment::*)(float)>((MethodDefinition*)&local_a8, set_sdfgi_normal_bias, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHODP((char*)&local_a8, (char***)"get_sdfgi_normal_bias", 0);
   ClassDB::bind_method<MethodDefinition,float(Environment::*)()const>((MethodDefinition*)&local_a8, get_sdfgi_normal_bias, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHOD<char_const*>((char*)&local_a8, "set_sdfgi_probe_bias");
   ClassDB::bind_method<MethodDefinition,void(Environment::*)(float)>((MethodDefinition*)&local_a8, set_sdfgi_probe_bias, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHODP((char*)&local_a8, (char***)"get_sdfgi_probe_bias", 0);
   ClassDB::bind_method<MethodDefinition,float(Environment::*)()const>((MethodDefinition*)&local_a8, get_sdfgi_probe_bias, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   local_a8 = (char*)0x0;
   String::parse_latin1((String*)&local_a8, "sdfgi_");
   local_b8 = (char*)0x0;
   String::parse_latin1((String*)&local_b8, "SDFGI");
   local_c8 = 0;
   String::parse_latin1((String*)&local_c8, "Environment");
   StringName::StringName((StringName*)&local_c0, (String*)&local_c8, false);
   ClassDB::add_property_group((StringName*)&local_c0, (String*)&local_b8, (String*)&local_a8, 0);
   if (( StringName::configured != '\0' ) && ( local_c0 != 0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   _scs_create((char*)&local_c0, true);
   _scs_create((char*)&local_c8, true);
   local_d0 = 0;
   local_d8 = 0;
   String::parse_latin1((String*)&local_d8, "");
   local_e0 = 0;
   String::parse_latin1((String*)&local_e0, "sdfgi_enabled");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_a8, 1, (String*)&local_e0, 0, (String*)&local_d8, 6, (String*)&local_d0);
   local_e8 = 0;
   String::parse_latin1((String*)&local_e8, "Environment");
   StringName::StringName((StringName*)&local_b8, (String*)&local_e8, false);
   ClassDB::add_property((StringName*)&local_b8, (PropertyInfo*)&local_a8, (StringName*)&local_c8, (StringName*)&local_c0, -1);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   if (StringName::configured != '\0') {
      if (local_d0 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00107f11;
      }
      if (local_c8 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00107f11;
      }
      if (local_c0 != 0) {
         StringName::unref();
      }
   }
   LAB_00107f11:_scs_create((char*)&local_c0, true);
   _scs_create((char*)&local_c8, true);
   local_d0 = 0;
   local_d8 = 0;
   String::parse_latin1((String*)&local_d8, "");
   local_e0 = 0;
   local_a8 = "sdfgi_use_occlusion";
   local_a0 = 0x13;
   String::parse_latin1((StrRange*)&local_e0);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_a8, 1, (String*)&local_e0, 0, (String*)&local_d8, 6, (String*)&local_d0);
   local_e8 = 0;
   String::parse_latin1((String*)&local_e8, "Environment");
   StringName::StringName((StringName*)&local_b8, (String*)&local_e8, false);
   ClassDB::add_property((StringName*)&local_b8, (PropertyInfo*)&local_a8, (StringName*)&local_c8, (StringName*)&local_c0, -1);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   if (StringName::configured != '\0') {
      if (local_d0 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00108070;
      }
      if (local_c8 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00108070;
      }
      if (local_c0 != 0) {
         StringName::unref();
      }
   }
   LAB_00108070:_scs_create((char*)&local_c0, true);
   _scs_create((char*)&local_c8, true);
   local_d0 = 0;
   local_d8 = 0;
   String::parse_latin1((String*)&local_d8, "");
   local_e0 = 0;
   String::parse_latin1((String*)&local_e0, "sdfgi_read_sky_light");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_a8, 1, (String*)&local_e0, 0, (String*)&local_d8, 6, (String*)&local_d0);
   local_e8 = 0;
   String::parse_latin1((String*)&local_e8, "Environment");
   StringName::StringName((StringName*)&local_b8, (String*)&local_e8, false);
   ClassDB::add_property((StringName*)&local_b8, (PropertyInfo*)&local_a8, (StringName*)&local_c8, (StringName*)&local_c0, -1);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   if (StringName::configured != '\0') {
      if (local_d0 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_001081b9;
      }
      if (local_c8 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_001081b9;
      }
      if (local_c0 != 0) {
         StringName::unref();
      }
   }
   LAB_001081b9:_scs_create((char*)&local_c0, true);
   _scs_create((char*)&local_c8, true);
   local_d0 = 0;
   local_d8 = 0;
   String::parse_latin1((String*)&local_d8, "0,1.99,0.01");
   local_e0 = 0;
   String::parse_latin1((String*)&local_e0, "sdfgi_bounce_feedback");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_a8, 3, (String*)&local_e0, 1, (String*)&local_d8, 6, (String*)&local_d0);
   local_b8 = "Environment";
   local_e8 = 0;
   local_b0 = 0xb;
   String::parse_latin1((StrRange*)&local_e8);
   StringName::StringName((StringName*)&local_b8, (String*)&local_e8, false);
   ClassDB::add_property((StringName*)&local_b8, (PropertyInfo*)&local_a8, (StringName*)&local_c8, (StringName*)&local_c0, -1);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   if (StringName::configured != '\0') {
      if (local_d0 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010831d;
      }
      if (local_c8 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010831d;
      }
      if (local_c0 != 0) {
         StringName::unref();
      }
   }
   LAB_0010831d:_scs_create((char*)&local_c0, true);
   _scs_create((char*)&local_c8, true);
   local_d0 = 0;
   local_d8 = 0;
   String::parse_latin1((String*)&local_d8, "1,8,1");
   local_a8 = "sdfgi_cascades";
   local_e0 = 0;
   local_a0 = 0xe;
   String::parse_latin1((StrRange*)&local_e0);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_a8, 2, (String*)&local_e0, 1, (String*)&local_d8, 6, (String*)&local_d0);
   local_b8 = "Environment";
   local_e8 = 0;
   local_b0 = 0xb;
   String::parse_latin1((StrRange*)&local_e8);
   StringName::StringName((StringName*)&local_b8, (String*)&local_e8, false);
   ClassDB::add_property((StringName*)&local_b8, (PropertyInfo*)&local_a8, (StringName*)&local_c8, (StringName*)&local_c0, -1);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   if (StringName::configured != '\0') {
      if (local_d0 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00108497;
      }
      if (local_c8 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00108497;
      }
      if (local_c0 != 0) {
         StringName::unref();
      }
   }
   LAB_00108497:_scs_create((char*)&local_c0, true);
   _scs_create((char*)&local_c8, true);
   local_d0 = 0;
   local_d8 = 0;
   String::parse_latin1((String*)&local_d8, "0.01,64,0.01");
   local_e0 = 0;
   String::parse_latin1((String*)&local_e0, "sdfgi_min_cell_size");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_a8, 3, (String*)&local_e0, 1, (String*)&local_d8, 6, (String*)&local_d0);
   local_e8 = 0;
   String::parse_latin1((String*)&local_e8, "Environment");
   StringName::StringName((StringName*)&local_b8, (String*)&local_e8, false);
   ClassDB::add_property((StringName*)&local_b8, (PropertyInfo*)&local_a8, (StringName*)&local_c8, (StringName*)&local_c0, -1);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   if (StringName::configured != '\0') {
      if (local_d0 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_001085e2;
      }
      if (local_c8 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_001085e2;
      }
      if (local_c0 != 0) {
         StringName::unref();
      }
   }
   LAB_001085e2:_scs_create((char*)&local_c0, true);
   _scs_create((char*)&local_c8, true);
   local_d0 = 0;
   local_d8 = 0;
   String::parse_latin1((String*)&local_d8, "0.1,16384,0.1,or_greater");
   local_e0 = 0;
   String::parse_latin1((String*)&local_e0, "sdfgi_cascade0_distance");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_a8, 3, (String*)&local_e0, 1, (String*)&local_d8, 4, (String*)&local_d0);
   local_b8 = "Environment";
   local_e8 = 0;
   local_b0 = 0xb;
   String::parse_latin1((StrRange*)&local_e8);
   StringName::StringName((StringName*)&local_b8, (String*)&local_e8, false);
   ClassDB::add_property((StringName*)&local_b8, (PropertyInfo*)&local_a8, (StringName*)&local_c8, (StringName*)&local_c0, -1);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   if (StringName::configured != '\0') {
      if (local_d0 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00108744;
      }
      if (local_c8 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00108744;
      }
      if (local_c0 != 0) {
         StringName::unref();
      }
   }
   LAB_00108744:_scs_create((char*)&local_c0, true);
   _scs_create((char*)&local_c8, true);
   local_d0 = 0;
   local_d8 = 0;
   String::parse_latin1((String*)&local_d8, "0.1,16384,0.1,or_greater");
   local_e0 = 0;
   String::parse_latin1((String*)&local_e0, "sdfgi_max_distance");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_a8, 3, (String*)&local_e0, 1, (String*)&local_d8, 4, (String*)&local_d0);
   local_e8 = 0;
   String::parse_latin1((String*)&local_e8, "Environment");
   StringName::StringName((StringName*)&local_b8, (String*)&local_e8, false);
   ClassDB::add_property((StringName*)&local_b8, (PropertyInfo*)&local_a8, (StringName*)&local_c8, (StringName*)&local_c0, -1);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   if (StringName::configured != '\0') {
      if (local_d0 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00108890;
      }
      if (local_c8 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00108890;
      }
      if (local_c0 != 0) {
         StringName::unref();
      }
   }
   LAB_00108890:_scs_create((char*)&local_c0, true);
   _scs_create((char*)&local_c8, true);
   local_d0 = 0;
   local_d8 = 0;
   String::parse_latin1((String*)&local_d8, "50% (Compact),75% (Balanced),100% (Sparse)");
   local_e0 = 0;
   String::parse_latin1((String*)&local_e0, "sdfgi_y_scale");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_a8, 2, (String*)&local_e0, 2, (String*)&local_d8, 6, (String*)&local_d0);
   local_e8 = 0;
   String::parse_latin1((String*)&local_e8, "Environment");
   StringName::StringName((StringName*)&local_b8, (String*)&local_e8, false);
   ClassDB::add_property((StringName*)&local_b8, (PropertyInfo*)&local_a8, (StringName*)&local_c8, (StringName*)&local_c0, -1);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   if (StringName::configured != '\0') {
      if (local_d0 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_001089dd;
      }
      if (local_c8 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_001089dd;
      }
      if (local_c0 != 0) {
         StringName::unref();
      }
   }
   LAB_001089dd:_scs_create((char*)&local_c0, true);
   _scs_create((char*)&local_c8, true);
   local_d0 = 0;
   local_d8 = 0;
   String::parse_latin1((String*)&local_d8, "");
   local_e0 = 0;
   String::parse_latin1((String*)&local_e0, "sdfgi_energy");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_a8, 3, (String*)&local_e0, 0, (String*)&local_d8, 6, (String*)&local_d0);
   local_e8 = 0;
   String::parse_latin1((String*)&local_e8, "Environment");
   StringName::StringName((StringName*)&local_b8, (String*)&local_e8, false);
   ClassDB::add_property((StringName*)&local_b8, (PropertyInfo*)&local_a8, (StringName*)&local_c8, (StringName*)&local_c0, -1);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   if (StringName::configured != '\0') {
      if (local_d0 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00108b26;
      }
      if (local_c8 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00108b26;
      }
      if (local_c0 != 0) {
         StringName::unref();
      }
   }
   LAB_00108b26:_scs_create((char*)&local_c0, true);
   _scs_create((char*)&local_c8, true);
   local_d0 = 0;
   local_d8 = 0;
   String::parse_latin1((String*)&local_d8, "");
   local_e0 = 0;
   String::parse_latin1((String*)&local_e0, "sdfgi_normal_bias");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_a8, 3, (String*)&local_e0, 0, (String*)&local_d8, 6, (String*)&local_d0);
   local_e8 = 0;
   String::parse_latin1((String*)&local_e8, "Environment");
   StringName::StringName((StringName*)&local_b8, (String*)&local_e8, false);
   ClassDB::add_property((StringName*)&local_b8, (PropertyInfo*)&local_a8, (StringName*)&local_c8, (StringName*)&local_c0, -1);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   if (StringName::configured != '\0') {
      if (local_d0 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00108c6e;
      }
      if (local_c8 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00108c6e;
      }
      if (local_c0 != 0) {
         StringName::unref();
      }
   }
   LAB_00108c6e:_scs_create((char*)&local_c0, true);
   _scs_create((char*)&local_c8, true);
   local_d0 = 0;
   local_d8 = 0;
   String::parse_latin1((String*)&local_d8, "");
   local_e0 = 0;
   String::parse_latin1((String*)&local_e0, "sdfgi_probe_bias");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_a8, 3, (String*)&local_e0, 0, (String*)&local_d8, 6, (String*)&local_d0);
   local_e8 = 0;
   String::parse_latin1((String*)&local_e8, "Environment");
   StringName::StringName((StringName*)&local_b8, (String*)&local_e8, false);
   ClassDB::add_property((StringName*)&local_b8, (PropertyInfo*)&local_a8, (StringName*)&local_c8, (StringName*)&local_c0, -1);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   if (StringName::configured != '\0') {
      if (local_d0 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00108db6;
      }
      if (local_c8 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00108db6;
      }
      if (local_c0 != 0) {
         StringName::unref();
      }
   }
   LAB_00108db6:D_METHOD<char_const*>((char*)&local_a8, "set_glow_enabled");
   ClassDB::bind_method<MethodDefinition,void(Environment::*)(bool)>((MethodDefinition*)&local_a8, set_glow_enabled, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHODP((char*)&local_a8, (char***)"is_glow_enabled", 0);
   ClassDB::bind_method<MethodDefinition,bool(Environment::*)()const>((MethodDefinition*)&local_a8, is_glow_enabled, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   local_68 = 0;
   local_78 = puVar1;
   puStack_70 = puVar2;
   auStack_50._0_8_ = &puStack_70;
   local_58 = &local_78;
   D_METHODP((char*)&local_a8, (char***)"set_glow_level", ( uint ) & local_58);
   auStack_50 = (undefined1[16])0x0;
   local_58 = (undefined**)0x0;
   pMVar3 = create_method_bind<Environment,int,float>(set_glow_level);
   ClassDB::bind_methodfi(1, pMVar3, false, (MethodDefinition*)&local_a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHOD<char_const*>((char*)&local_a8, "get_glow_level");
   auStack_50 = (undefined1[16])0x0;
   local_58 = (undefined**)0x0;
   pMVar3 = create_method_bind<Environment,float,int>(get_glow_level);
   ClassDB::bind_methodfi(1, pMVar3, false, (MethodDefinition*)&local_a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHOD<char_const*>((char*)&local_a8, "set_glow_normalized");
   ClassDB::bind_method<MethodDefinition,void(Environment::*)(bool)>((MethodDefinition*)&local_a8, set_glow_normalized, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHODP((char*)&local_a8, (char***)"is_glow_normalized", 0);
   ClassDB::bind_method<MethodDefinition,bool(Environment::*)()const>((MethodDefinition*)&local_a8, is_glow_normalized, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHOD<char_const*>((char*)&local_a8, "set_glow_intensity");
   ClassDB::bind_method<MethodDefinition,void(Environment::*)(float)>((MethodDefinition*)&local_a8, set_glow_intensity, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHODP((char*)&local_a8, (char***)"get_glow_intensity", 0);
   ClassDB::bind_method<MethodDefinition,float(Environment::*)()const>((MethodDefinition*)&local_a8, get_glow_intensity, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHOD<char_const*>((char*)&local_a8, "set_glow_strength");
   ClassDB::bind_method<MethodDefinition,void(Environment::*)(float)>((MethodDefinition*)&local_a8, set_glow_strength, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHODP((char*)&local_a8, (char***)"get_glow_strength", 0);
   ClassDB::bind_method<MethodDefinition,float(Environment::*)()const>((MethodDefinition*)&local_a8, get_glow_strength, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHOD<char_const*>((char*)&local_a8, "set_glow_mix");
   ClassDB::bind_method<MethodDefinition,void(Environment::*)(float)>((MethodDefinition*)&local_a8, set_glow_mix, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHODP((char*)&local_a8, (char***)"get_glow_mix", 0);
   ClassDB::bind_method<MethodDefinition,float(Environment::*)()const>((MethodDefinition*)&local_a8, get_glow_mix, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHOD<char_const*>((char*)&local_a8, "set_glow_bloom");
   ClassDB::bind_method<MethodDefinition,void(Environment::*)(float)>((MethodDefinition*)&local_a8, set_glow_bloom, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHODP((char*)&local_a8, (char***)"get_glow_bloom", 0);
   ClassDB::bind_method<MethodDefinition,float(Environment::*)()const>((MethodDefinition*)&local_a8, get_glow_bloom, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHOD<char_const*>((char*)&local_a8, "set_glow_blend_mode");
   auStack_50 = (undefined1[16])0x0;
   local_58 = (undefined**)0x0;
   pMVar3 = create_method_bind<Environment,Environment::GlowBlendMode>(set_glow_blend_mode);
   ClassDB::bind_methodfi(1, pMVar3, false, (MethodDefinition*)&local_a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHODP((char*)&local_a8, (char***)"get_glow_blend_mode", 0);
   auStack_50 = (undefined1[16])0x0;
   local_58 = (undefined**)0x0;
   pMVar3 = create_method_bind<Environment,Environment::GlowBlendMode>(get_glow_blend_mode);
   ClassDB::bind_methodfi(1, pMVar3, false, (MethodDefinition*)&local_a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHOD<char_const*>((char*)&local_a8, "set_glow_hdr_bleed_threshold");
   ClassDB::bind_method<MethodDefinition,void(Environment::*)(float)>((MethodDefinition*)&local_a8, set_glow_hdr_bleed_threshold, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHODP((char*)&local_a8, (char***)"get_glow_hdr_bleed_threshold", 0);
   ClassDB::bind_method<MethodDefinition,float(Environment::*)()const>((MethodDefinition*)&local_a8, get_glow_hdr_bleed_threshold, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHOD<char_const*>((char*)&local_a8, "set_glow_hdr_bleed_scale");
   ClassDB::bind_method<MethodDefinition,void(Environment::*)(float)>((MethodDefinition*)&local_a8, set_glow_hdr_bleed_scale, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHODP((char*)&local_a8, (char***)"get_glow_hdr_bleed_scale", 0);
   ClassDB::bind_method<MethodDefinition,float(Environment::*)()const>((MethodDefinition*)&local_a8, get_glow_hdr_bleed_scale, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHOD<char_const*>((char*)&local_a8, "set_glow_hdr_luminance_cap");
   ClassDB::bind_method<MethodDefinition,void(Environment::*)(float)>((MethodDefinition*)&local_a8, set_glow_hdr_luminance_cap, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHODP((char*)&local_a8, (char***)"get_glow_hdr_luminance_cap", 0);
   ClassDB::bind_method<MethodDefinition,float(Environment::*)()const>((MethodDefinition*)&local_a8, get_glow_hdr_luminance_cap, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHOD<char_const*>((char*)&local_a8, "set_glow_map_strength");
   ClassDB::bind_method<MethodDefinition,void(Environment::*)(float)>((MethodDefinition*)&local_a8, set_glow_map_strength, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHODP((char*)&local_a8, (char***)"get_glow_map_strength", 0);
   ClassDB::bind_method<MethodDefinition,float(Environment::*)()const>((MethodDefinition*)&local_a8, get_glow_map_strength, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHOD<char_const*>((char*)&local_a8, "set_glow_map");
   auStack_50 = (undefined1[16])0x0;
   local_58 = (undefined**)0x0;
   pMVar3 = create_method_bind<Environment,Ref<Texture>>(set_glow_map);
   ClassDB::bind_methodfi(1, pMVar3, false, (MethodDefinition*)&local_a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHODP((char*)&local_a8, (char***)"get_glow_map", 0);
   auStack_50 = (undefined1[16])0x0;
   local_58 = (undefined**)0x0;
   pMVar3 = create_method_bind<Environment,Ref<Texture>>(get_glow_map);
   ClassDB::bind_methodfi(1, pMVar3, false, (MethodDefinition*)&local_a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   local_a8 = (char*)0x0;
   String::parse_latin1((String*)&local_a8, "glow_");
   local_b8 = (char*)0x0;
   String::parse_latin1((String*)&local_b8, "Glow");
   local_c8 = 0;
   String::parse_latin1((String*)&local_c8, "Environment");
   StringName::StringName((StringName*)&local_c0, (String*)&local_c8, false);
   ClassDB::add_property_group((StringName*)&local_c0, (String*)&local_b8, (String*)&local_a8, 0);
   if (( StringName::configured != '\0' ) && ( local_c0 != 0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   _scs_create((char*)&local_c0, true);
   _scs_create((char*)&local_c8, true);
   local_d0 = 0;
   local_d8 = 0;
   String::parse_latin1((String*)&local_d8, "");
   local_e0 = 0;
   String::parse_latin1((String*)&local_e0, "glow_enabled");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_a8, 1, (String*)&local_e0, 0, (String*)&local_d8, 6, (String*)&local_d0);
   local_e8 = 0;
   String::parse_latin1((String*)&local_e8, "Environment");
   StringName::StringName((StringName*)&local_b8, (String*)&local_e8, false);
   ClassDB::add_property((StringName*)&local_b8, (PropertyInfo*)&local_a8, (StringName*)&local_c8, (StringName*)&local_c0, -1);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   if (StringName::configured != '\0') {
      if (local_d0 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00109609;
      }
      if (local_c8 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00109609;
      }
      if (local_c0 != 0) {
         StringName::unref();
      }
   }
   LAB_00109609:_scs_create((char*)&local_c0, true);
   _scs_create((char*)&local_c8, true);
   local_d0 = 0;
   local_d8 = 0;
   String::parse_latin1((String*)&local_d8, "0,16,0.01,or_greater");
   local_e0 = 0;
   local_a8 = "glow_levels/1";
   local_a0 = 0xd;
   String::parse_latin1((StrRange*)&local_e0);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_a8, 3, (String*)&local_e0, 1, (String*)&local_d8, 6, (String*)&local_d0);
   local_e8 = 0;
   String::parse_latin1((String*)&local_e8, "Environment");
   StringName::StringName((StringName*)&local_b8, (String*)&local_e8, false);
   ClassDB::add_property((StringName*)&local_b8, (PropertyInfo*)&local_a8, (StringName*)&local_c8, (StringName*)&local_c0, 0);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   if (StringName::configured != '\0') {
      if (local_d0 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010976a;
      }
      if (local_c8 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010976a;
      }
      if (local_c0 != 0) {
         StringName::unref();
      }
   }
   LAB_0010976a:_scs_create((char*)&local_c0, true);
   _scs_create((char*)&local_c8, true);
   local_d0 = 0;
   local_d8 = 0;
   String::parse_latin1((String*)&local_d8, "0,16,0.01,or_greater");
   local_e0 = 0;
   String::parse_latin1((String*)&local_e0, "glow_levels/2");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_a8, 3, (String*)&local_e0, 1, (String*)&local_d8, 6, (String*)&local_d0);
   local_b8 = "Environment";
   local_e8 = 0;
   local_b0 = 0xb;
   String::parse_latin1((StrRange*)&local_e8);
   StringName::StringName((StringName*)&local_b8, (String*)&local_e8, false);
   ClassDB::add_property((StringName*)&local_b8, (PropertyInfo*)&local_a8, (StringName*)&local_c8, (StringName*)&local_c0, 1);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   if (StringName::configured != '\0') {
      if (local_d0 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_001098cd;
      }
      if (local_c8 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_001098cd;
      }
      if (local_c0 != 0) {
         StringName::unref();
      }
   }
   LAB_001098cd:_scs_create((char*)&local_c0, true);
   _scs_create((char*)&local_c8, true);
   local_d0 = 0;
   local_d8 = 0;
   String::parse_latin1((String*)&local_d8, "0,16,0.01,or_greater");
   local_e0 = 0;
   local_a8 = "glow_levels/3";
   local_a0 = 0xd;
   String::parse_latin1((StrRange*)&local_e0);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_a8, 3, (String*)&local_e0, 1, (String*)&local_d8, 6, (String*)&local_d0);
   local_e8 = 0;
   String::parse_latin1((String*)&local_e8, "Environment");
   StringName::StringName((StringName*)&local_b8, (String*)&local_e8, false);
   ClassDB::add_property((StringName*)&local_b8, (PropertyInfo*)&local_a8, (StringName*)&local_c8, (StringName*)&local_c0, 2);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   if (StringName::configured != '\0') {
      if (local_d0 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00109a2f;
      }
      if (local_c8 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00109a2f;
      }
      if (local_c0 != 0) {
         StringName::unref();
      }
   }
   LAB_00109a2f:_scs_create((char*)&local_c0, true);
   _scs_create((char*)&local_c8, true);
   local_d0 = 0;
   local_d8 = 0;
   String::parse_latin1((String*)&local_d8, "0,16,0.01,or_greater");
   local_e0 = 0;
   String::parse_latin1((String*)&local_e0, "glow_levels/4");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_a8, 3, (String*)&local_e0, 1, (String*)&local_d8, 6, (String*)&local_d0);
   local_b8 = "Environment";
   local_e8 = 0;
   local_b0 = 0xb;
   String::parse_latin1((StrRange*)&local_e8);
   StringName::StringName((StringName*)&local_b8, (String*)&local_e8, false);
   ClassDB::add_property((StringName*)&local_b8, (PropertyInfo*)&local_a8, (StringName*)&local_c8, (StringName*)&local_c0, 3);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   if (StringName::configured != '\0') {
      if (local_d0 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00109b91;
      }
      if (local_c8 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00109b91;
      }
      if (local_c0 != 0) {
         StringName::unref();
      }
   }
   LAB_00109b91:_scs_create((char*)&local_c0, true);
   _scs_create((char*)&local_c8, true);
   local_d0 = 0;
   local_d8 = 0;
   String::parse_latin1((String*)&local_d8, "0,16,0.01,or_greater");
   local_a8 = "glow_levels/5";
   local_e0 = 0;
   local_a0 = 0xd;
   String::parse_latin1((StrRange*)&local_e0);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_a8, 3, (String*)&local_e0, 1, (String*)&local_d8, 6, (String*)&local_d0);
   local_b8 = "Environment";
   local_e8 = 0;
   local_b0 = 0xb;
   String::parse_latin1((StrRange*)&local_e8);
   StringName::StringName((StringName*)&local_b8, (String*)&local_e8, false);
   ClassDB::add_property((StringName*)&local_b8, (PropertyInfo*)&local_a8, (StringName*)&local_c8, (StringName*)&local_c0, 4);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   if (StringName::configured != '\0') {
      if (local_d0 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00109d0b;
      }
      if (local_c8 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00109d0b;
      }
      if (local_c0 != 0) {
         StringName::unref();
      }
   }
   LAB_00109d0b:_scs_create((char*)&local_c0, true);
   _scs_create((char*)&local_c8, true);
   local_d0 = 0;
   local_d8 = 0;
   String::parse_latin1((String*)&local_d8, "0,16,0.01,or_greater");
   local_e0 = 0;
   String::parse_latin1((String*)&local_e0, "glow_levels/6");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_a8, 3, (String*)&local_e0, 1, (String*)&local_d8, 6, (String*)&local_d0);
   local_b8 = "Environment";
   local_e8 = 0;
   local_b0 = 0xb;
   String::parse_latin1((StrRange*)&local_e8);
   StringName::StringName((StringName*)&local_b8, (String*)&local_e8, false);
   ClassDB::add_property((StringName*)&local_b8, (PropertyInfo*)&local_a8, (StringName*)&local_c8, (StringName*)&local_c0, 5);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   if (StringName::configured != '\0') {
      if (local_d0 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00109e6f;
      }
      if (local_c8 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00109e6f;
      }
      if (local_c0 != 0) {
         StringName::unref();
      }
   }
   LAB_00109e6f:_scs_create((char*)&local_c0, true);
   _scs_create((char*)&local_c8, true);
   local_a8 = "0,16,0.01,or_greater";
   local_d0 = 0;
   local_d8 = 0;
   local_a0 = 0x14;
   String::parse_latin1((StrRange*)&local_d8);
   local_e0 = 0;
   local_a8 = "glow_levels/7";
   local_a0 = 0xd;
   String::parse_latin1((StrRange*)&local_e0);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_a8, 3, (String*)&local_e0, 1, (String*)&local_d8, 6, (String*)&local_d0);
   local_e8 = 0;
   String::parse_latin1((String*)&local_e8, "Environment");
   StringName::StringName((StringName*)&local_b8, (String*)&local_e8, false);
   ClassDB::add_property((StringName*)&local_b8, (PropertyInfo*)&local_a8, (StringName*)&local_c8, (StringName*)&local_c0, 6);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   if (StringName::configured != '\0') {
      if (local_d0 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00109fe9;
      }
      if (local_c8 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00109fe9;
      }
      if (local_c0 != 0) {
         StringName::unref();
      }
   }
   LAB_00109fe9:_scs_create((char*)&local_c0, true);
   _scs_create((char*)&local_c8, true);
   local_d0 = 0;
   local_d8 = 0;
   String::parse_latin1((String*)&local_d8, "");
   local_a8 = "glow_normalized";
   local_e0 = 0;
   local_a0 = 0xf;
   String::parse_latin1((StrRange*)&local_e0);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_a8, 1, (String*)&local_e0, 0, (String*)&local_d8, 6, (String*)&local_d0);
   local_b8 = "Environment";
   local_e8 = 0;
   local_b0 = 0xb;
   String::parse_latin1((StrRange*)&local_e8);
   StringName::StringName((StringName*)&local_b8, (String*)&local_e8, false);
   ClassDB::add_property((StringName*)&local_b8, (PropertyInfo*)&local_a8, (StringName*)&local_c8, (StringName*)&local_c0, -1);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   if (StringName::configured != '\0') {
      if (local_d0 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010a15f;
      }
      if (local_c8 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010a15f;
      }
      if (local_c0 != 0) {
         StringName::unref();
      }
   }
   LAB_0010a15f:_scs_create((char*)&local_c0, true);
   _scs_create((char*)&local_c8, true);
   local_d0 = 0;
   local_d8 = 0;
   String::parse_latin1((String*)&local_d8, "0.0,8.0,0.01");
   local_e0 = 0;
   local_a8 = "glow_intensity";
   local_a0 = 0xe;
   String::parse_latin1((StrRange*)&local_e0);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_a8, 3, (String*)&local_e0, 1, (String*)&local_d8, 6, (String*)&local_d0);
   local_e8 = 0;
   String::parse_latin1((String*)&local_e8, "Environment");
   StringName::StringName((StringName*)&local_b8, (String*)&local_e8, false);
   ClassDB::add_property((StringName*)&local_b8, (PropertyInfo*)&local_a8, (StringName*)&local_c8, (StringName*)&local_c0, -1);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   if (StringName::configured != '\0') {
      if (local_d0 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010a2c1;
      }
      if (local_c8 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010a2c1;
      }
      if (local_c0 != 0) {
         StringName::unref();
      }
   }
   LAB_0010a2c1:_scs_create((char*)&local_c0, true);
   _scs_create((char*)&local_c8, true);
   local_d0 = 0;
   local_d8 = 0;
   String::parse_latin1((String*)&local_d8, "0.0,2.0,0.01");
   local_e0 = 0;
   String::parse_latin1((String*)&local_e0, "glow_strength");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_a8, 3, (String*)&local_e0, 1, (String*)&local_d8, 6, (String*)&local_d0);
   local_e8 = 0;
   String::parse_latin1((String*)&local_e8, "Environment");
   StringName::StringName((StringName*)&local_b8, (String*)&local_e8, false);
   ClassDB::add_property((StringName*)&local_b8, (PropertyInfo*)&local_a8, (StringName*)&local_c8, (StringName*)&local_c0, -1);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   if (StringName::configured != '\0') {
      if (local_d0 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010a40d;
      }
      if (local_c8 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010a40d;
      }
      if (local_c0 != 0) {
         StringName::unref();
      }
   }
   LAB_0010a40d:_scs_create((char*)&local_c0, true);
   _scs_create((char*)&local_c8, true);
   local_a8 = "0.0,1.0,0.001";
   local_d0 = 0;
   local_d8 = 0;
   local_a0 = 0xd;
   String::parse_latin1((StrRange*)&local_d8);
   local_e0 = 0;
   local_a8 = "glow_mix";
   local_a0 = 8;
   String::parse_latin1((StrRange*)&local_e0);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_a8, 3, (String*)&local_e0, 1, (String*)&local_d8, 6, (String*)&local_d0);
   local_e8 = 0;
   String::parse_latin1((String*)&local_e8, "Environment");
   StringName::StringName((StringName*)&local_b8, (String*)&local_e8, false);
   ClassDB::add_property((StringName*)&local_b8, (PropertyInfo*)&local_a8, (StringName*)&local_c8, (StringName*)&local_c0, -1);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   if (StringName::configured != '\0') {
      if (local_d0 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010a588;
      }
      if (local_c8 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010a588;
      }
      if (local_c0 != 0) {
         StringName::unref();
      }
   }
   LAB_0010a588:_scs_create((char*)&local_c0, true);
   _scs_create((char*)&local_c8, true);
   local_d0 = 0;
   local_d8 = 0;
   String::parse_latin1((String*)&local_d8, "0.0,1.0,0.01");
   local_e0 = 0;
   String::parse_latin1((String*)&local_e0, "glow_bloom");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_a8, 3, (String*)&local_e0, 1, (String*)&local_d8, 6, (String*)&local_d0);
   local_b8 = "Environment";
   local_e8 = 0;
   local_b0 = 0xb;
   String::parse_latin1((StrRange*)&local_e8);
   StringName::StringName((StringName*)&local_b8, (String*)&local_e8, false);
   ClassDB::add_property((StringName*)&local_b8, (PropertyInfo*)&local_a8, (StringName*)&local_c8, (StringName*)&local_c0, -1);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   if (StringName::configured != '\0') {
      if (local_d0 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010a6eb;
      }
      if (local_c8 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010a6eb;
      }
      if (local_c0 != 0) {
         StringName::unref();
      }
   }
   LAB_0010a6eb:_scs_create((char*)&local_c0, true);
   _scs_create((char*)&local_c8, true);
   local_d0 = 0;
   local_d8 = 0;
   String::parse_latin1((String*)&local_d8, "Additive,Screen,Softlight,Replace,Mix");
   local_a8 = "glow_blend_mode";
   local_e0 = 0;
   local_a0 = 0xf;
   String::parse_latin1((StrRange*)&local_e0);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_a8, 2, (String*)&local_e0, 2, (String*)&local_d8, 6, (String*)&local_d0);
   local_b8 = "Environment";
   local_e8 = 0;
   local_b0 = 0xb;
   String::parse_latin1((StrRange*)&local_e8);
   StringName::StringName((StringName*)&local_b8, (String*)&local_e8, false);
   ClassDB::add_property((StringName*)&local_b8, (PropertyInfo*)&local_a8, (StringName*)&local_c8, (StringName*)&local_c0, -1);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   if (StringName::configured != '\0') {
      if (local_d0 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010a864;
      }
      if (local_c8 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010a864;
      }
      if (local_c0 != 0) {
         StringName::unref();
      }
   }
   LAB_0010a864:_scs_create((char*)&local_c0, true);
   _scs_create((char*)&local_c8, true);
   local_a8 = "0.0,4.0,0.01";
   local_d0 = 0;
   local_d8 = 0;
   local_a0 = 0xc;
   String::parse_latin1((StrRange*)&local_d8);
   local_e0 = 0;
   String::parse_latin1((String*)&local_e0, "glow_hdr_threshold");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_a8, 3, (String*)&local_e0, 1, (String*)&local_d8, 6, (String*)&local_d0);
   local_b8 = "Environment";
   local_e8 = 0;
   local_b0 = 0xb;
   String::parse_latin1((StrRange*)&local_e8);
   StringName::StringName((StringName*)&local_b8, (String*)&local_e8, false);
   ClassDB::add_property((StringName*)&local_b8, (PropertyInfo*)&local_a8, (StringName*)&local_c8, (StringName*)&local_c0, -1);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   if (StringName::configured != '\0') {
      if (local_d0 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010a9dd;
      }
      if (local_c8 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010a9dd;
      }
      if (local_c0 != 0) {
         StringName::unref();
      }
   }
   LAB_0010a9dd:_scs_create((char*)&local_c0, true);
   _scs_create((char*)&local_c8, true);
   local_d0 = 0;
   local_d8 = 0;
   String::parse_latin1((String*)&local_d8, "0.0,4.0,0.01");
   local_e0 = 0;
   local_a8 = "glow_hdr_scale";
   local_a0 = 0xe;
   String::parse_latin1((StrRange*)&local_e0);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_a8, 3, (String*)&local_e0, 1, (String*)&local_d8, 6, (String*)&local_d0);
   local_e8 = 0;
   String::parse_latin1((String*)&local_e8, "Environment");
   StringName::StringName((StringName*)&local_b8, (String*)&local_e8, false);
   ClassDB::add_property((StringName*)&local_b8, (PropertyInfo*)&local_a8, (StringName*)&local_c8, (StringName*)&local_c0, -1);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   if (StringName::configured != '\0') {
      if (local_d0 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010ab40;
      }
      if (local_c8 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010ab40;
      }
      if (local_c0 != 0) {
         StringName::unref();
      }
   }
   LAB_0010ab40:_scs_create((char*)&local_c0, true);
   _scs_create((char*)&local_c8, true);
   local_d0 = 0;
   local_d8 = 0;
   String::parse_latin1((String*)&local_d8, "0.0,256.0,0.01");
   local_e0 = 0;
   local_a8 = "glow_hdr_luminance_cap";
   local_a0 = 0x16;
   String::parse_latin1((StrRange*)&local_e0);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_a8, 3, (String*)&local_e0, 1, (String*)&local_d8, 6, (String*)&local_d0);
   local_e8 = 0;
   String::parse_latin1((String*)&local_e8, "Environment");
   StringName::StringName((StringName*)&local_b8, (String*)&local_e8, false);
   ClassDB::add_property((StringName*)&local_b8, (PropertyInfo*)&local_a8, (StringName*)&local_c8, (StringName*)&local_c0, -1);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   if (StringName::configured != '\0') {
      if (local_d0 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010aca4;
      }
      if (local_c8 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010aca4;
      }
      if (local_c0 != 0) {
         StringName::unref();
      }
   }
   LAB_0010aca4:_scs_create((char*)&local_c0, true);
   _scs_create((char*)&local_c8, true);
   local_d0 = 0;
   local_d8 = 0;
   String::parse_latin1((String*)&local_d8, "0.0,1.0,0.01");
   local_e0 = 0;
   local_a8 = "glow_map_strength";
   local_a0 = 0x11;
   String::parse_latin1((StrRange*)&local_e0);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_a8, 3, (String*)&local_e0, 1, (String*)&local_d8, 6, (String*)&local_d0);
   local_e8 = 0;
   String::parse_latin1((String*)&local_e8, "Environment");
   StringName::StringName((StringName*)&local_b8, (String*)&local_e8, false);
   ClassDB::add_property((StringName*)&local_b8, (PropertyInfo*)&local_a8, (StringName*)&local_c8, (StringName*)&local_c0, -1);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   if (StringName::configured != '\0') {
      if (local_d0 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010ae07;
      }
      if (local_c8 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010ae07;
      }
      if (local_c0 != 0) {
         StringName::unref();
      }
   }
   LAB_0010ae07:_scs_create((char*)&local_c0, true);
   _scs_create((char*)&local_c8, true);
   local_d0 = 0;
   local_d8 = 0;
   String::parse_latin1((String*)&local_d8, "Texture2D");
   local_a8 = "glow_map";
   local_e0 = 0;
   local_a0 = 8;
   String::parse_latin1((StrRange*)&local_e0);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_a8, 0x18, (String*)&local_e0, 0x11, (String*)&local_d8, 6, (String*)&local_d0);
   local_b8 = "Environment";
   local_e8 = 0;
   local_b0 = 0xb;
   String::parse_latin1((StrRange*)&local_e8);
   StringName::StringName((StringName*)&local_b8, (String*)&local_e8, false);
   ClassDB::add_property((StringName*)&local_b8, (PropertyInfo*)&local_a8, (StringName*)&local_c8, (StringName*)&local_c0, -1);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   if (StringName::configured != '\0') {
      if (local_d0 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010af80;
      }
      if (local_c8 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010af80;
      }
      if (local_c0 != 0) {
         StringName::unref();
      }
   }
   LAB_0010af80:D_METHOD<char_const*>((char*)&local_a8, "set_fog_enabled");
   ClassDB::bind_method<MethodDefinition,void(Environment::*)(bool)>((MethodDefinition*)&local_a8, set_fog_enabled, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHODP((char*)&local_a8, (char***)"is_fog_enabled", 0);
   ClassDB::bind_method<MethodDefinition,bool(Environment::*)()const>((MethodDefinition*)&local_a8, is_fog_enabled, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHOD<char_const*>((char*)&local_a8, "set_fog_mode");
   auStack_50 = (undefined1[16])0x0;
   local_58 = (undefined**)0x0;
   pMVar3 = create_method_bind<Environment,Environment::FogMode>(set_fog_mode);
   ClassDB::bind_methodfi(1, pMVar3, false, (MethodDefinition*)&local_a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHODP((char*)&local_a8, (char***)"get_fog_mode", 0);
   auStack_50 = (undefined1[16])0x0;
   local_58 = (undefined**)0x0;
   pMVar3 = create_method_bind<Environment,Environment::FogMode>(get_fog_mode);
   ClassDB::bind_methodfi(1, pMVar3, false, (MethodDefinition*)&local_a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHOD<char_const*>((char*)&local_a8, "set_fog_light_color");
   auStack_50 = (undefined1[16])0x0;
   local_58 = (undefined**)0x0;
   pMVar3 = create_method_bind<Environment,Color_const&>(set_fog_light_color);
   ClassDB::bind_methodfi(1, pMVar3, false, (MethodDefinition*)&local_a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHODP((char*)&local_a8, (char***)"get_fog_light_color", 0);
   auStack_50 = (undefined1[16])0x0;
   local_58 = (undefined**)0x0;
   pMVar3 = create_method_bind<Environment,Color>(get_fog_light_color);
   ClassDB::bind_methodfi(1, pMVar3, false, (MethodDefinition*)&local_a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHOD<char_const*>((char*)&local_a8, "set_fog_light_energy");
   ClassDB::bind_method<MethodDefinition,void(Environment::*)(float)>((MethodDefinition*)&local_a8, set_fog_light_energy, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHODP((char*)&local_a8, (char***)"get_fog_light_energy", 0);
   ClassDB::bind_method<MethodDefinition,float(Environment::*)()const>((MethodDefinition*)&local_a8, get_fog_light_energy, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHOD<char_const*>((char*)&local_a8, "set_fog_sun_scatter");
   ClassDB::bind_method<MethodDefinition,void(Environment::*)(float)>((MethodDefinition*)&local_a8, set_fog_sun_scatter, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHODP((char*)&local_a8, (char***)"get_fog_sun_scatter", 0);
   ClassDB::bind_method<MethodDefinition,float(Environment::*)()const>((MethodDefinition*)&local_a8, get_fog_sun_scatter, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHOD<char_const*>((char*)&local_a8, "set_fog_density");
   ClassDB::bind_method<MethodDefinition,void(Environment::*)(float)>((MethodDefinition*)&local_a8, set_fog_density, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHODP((char*)&local_a8, (char***)"get_fog_density", 0);
   ClassDB::bind_method<MethodDefinition,float(Environment::*)()const>((MethodDefinition*)&local_a8, get_fog_density, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHOD<char_const*>((char*)&local_a8, "set_fog_height");
   ClassDB::bind_method<MethodDefinition,void(Environment::*)(float)>((MethodDefinition*)&local_a8, set_fog_height, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHODP((char*)&local_a8, (char***)"get_fog_height", 0);
   ClassDB::bind_method<MethodDefinition,float(Environment::*)()const>((MethodDefinition*)&local_a8, get_fog_height, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHOD<char_const*>((char*)&local_a8, "set_fog_height_density");
   ClassDB::bind_method<MethodDefinition,void(Environment::*)(float)>((MethodDefinition*)&local_a8, set_fog_height_density, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHODP((char*)&local_a8, (char***)"get_fog_height_density", 0);
   ClassDB::bind_method<MethodDefinition,float(Environment::*)()const>((MethodDefinition*)&local_a8, get_fog_height_density, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHOD<char_const*>((char*)&local_a8, "set_fog_aerial_perspective");
   ClassDB::bind_method<MethodDefinition,void(Environment::*)(float)>((MethodDefinition*)&local_a8, set_fog_aerial_perspective, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHODP((char*)&local_a8, (char***)"get_fog_aerial_perspective", 0);
   ClassDB::bind_method<MethodDefinition,float(Environment::*)()const>((MethodDefinition*)&local_a8, get_fog_aerial_perspective, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHOD<char_const*>((char*)&local_a8, "set_fog_sky_affect");
   ClassDB::bind_method<MethodDefinition,void(Environment::*)(float)>((MethodDefinition*)&local_a8, set_fog_sky_affect, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHODP((char*)&local_a8, (char***)"get_fog_sky_affect", 0);
   ClassDB::bind_method<MethodDefinition,float(Environment::*)()const>((MethodDefinition*)&local_a8, get_fog_sky_affect, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHOD<char_const*>((char*)&local_a8, "set_fog_depth_curve");
   ClassDB::bind_method<MethodDefinition,void(Environment::*)(float)>((MethodDefinition*)&local_a8, set_fog_depth_curve, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHODP((char*)&local_a8, (char***)"get_fog_depth_curve", 0);
   ClassDB::bind_method<MethodDefinition,float(Environment::*)()const>((MethodDefinition*)&local_a8, get_fog_depth_curve, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHOD<char_const*>((char*)&local_a8, "set_fog_depth_begin");
   ClassDB::bind_method<MethodDefinition,void(Environment::*)(float)>((MethodDefinition*)&local_a8, set_fog_depth_begin, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHODP((char*)&local_a8, (char***)"get_fog_depth_begin", 0);
   ClassDB::bind_method<MethodDefinition,float(Environment::*)()const>((MethodDefinition*)&local_a8, get_fog_depth_begin, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHOD<char_const*>((char*)&local_a8, "set_fog_depth_end");
   ClassDB::bind_method<MethodDefinition,void(Environment::*)(float)>((MethodDefinition*)&local_a8, set_fog_depth_end, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHODP((char*)&local_a8, (char***)"get_fog_depth_end", 0);
   ClassDB::bind_method<MethodDefinition,float(Environment::*)()const>((MethodDefinition*)&local_a8, get_fog_depth_end, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   local_a8 = (char*)0x0;
   String::parse_latin1((String*)&local_a8, "fog_");
   local_b8 = (char*)0x0;
   String::parse_latin1((String*)&local_b8, "Fog");
   local_c8 = 0;
   String::parse_latin1((String*)&local_c8, "Environment");
   StringName::StringName((StringName*)&local_c0, (String*)&local_c8, false);
   ClassDB::add_property_group((StringName*)&local_c0, (String*)&local_b8, (String*)&local_a8, 0);
   if (( StringName::configured != '\0' ) && ( local_c0 != 0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   _scs_create((char*)&local_c0, true);
   _scs_create((char*)&local_c8, true);
   local_d0 = 0;
   local_d8 = 0;
   String::parse_latin1((String*)&local_d8, "");
   local_e0 = 0;
   String::parse_latin1((String*)&local_e0, "fog_enabled");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_a8, 1, (String*)&local_e0, 0, (String*)&local_d8, 6, (String*)&local_d0);
   local_e8 = 0;
   String::parse_latin1((String*)&local_e8, "Environment");
   StringName::StringName((StringName*)&local_b8, (String*)&local_e8, false);
   ClassDB::add_property((StringName*)&local_b8, (PropertyInfo*)&local_a8, (StringName*)&local_c8, (StringName*)&local_c0, -1);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   if (StringName::configured != '\0') {
      if (local_d0 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010b718;
      }
      if (local_c8 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010b718;
      }
      if (local_c0 != 0) {
         StringName::unref();
      }
   }
   LAB_0010b718:_scs_create((char*)&local_c0, true);
   _scs_create((char*)&local_c8, true);
   local_d0 = 0;
   local_d8 = 0;
   String::parse_latin1((String*)&local_d8, "Exponential,Depth");
   local_e0 = 0;
   local_a8 = "fog_mode";
   local_a0 = 8;
   String::parse_latin1((StrRange*)&local_e0);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_a8, 2, (String*)&local_e0, 2, (String*)&local_d8, 6, (String*)&local_d0);
   local_e8 = 0;
   String::parse_latin1((String*)&local_e8, "Environment");
   StringName::StringName((StringName*)&local_b8, (String*)&local_e8, false);
   ClassDB::add_property((StringName*)&local_b8, (PropertyInfo*)&local_a8, (StringName*)&local_c8, (StringName*)&local_c0, -1);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   if (StringName::configured != '\0') {
      if (local_d0 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010b87b;
      }
      if (local_c8 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010b87b;
      }
      if (local_c0 != 0) {
         StringName::unref();
      }
   }
   LAB_0010b87b:_scs_create((char*)&local_c0, true);
   _scs_create((char*)&local_c8, true);
   local_d0 = 0;
   local_d8 = 0;
   String::parse_latin1((String*)&local_d8, "");
   local_e0 = 0;
   String::parse_latin1((String*)&local_e0, "fog_light_color");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_a8, 0x14, (String*)&local_e0, 0x15, (String*)&local_d8, 6, (String*)&local_d0);
   local_e8 = 0;
   String::parse_latin1((String*)&local_e8, "Environment");
   StringName::StringName((StringName*)&local_b8, (String*)&local_e8, false);
   ClassDB::add_property((StringName*)&local_b8, (PropertyInfo*)&local_a8, (StringName*)&local_c8, (StringName*)&local_c0, -1);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   if (StringName::configured != '\0') {
      if (local_d0 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010b9c8;
      }
      if (local_c8 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010b9c8;
      }
      if (local_c0 != 0) {
         StringName::unref();
      }
   }
   LAB_0010b9c8:_scs_create((char*)&local_c0, true);
   _scs_create((char*)&local_c8, true);
   local_d0 = 0;
   local_d8 = 0;
   String::parse_latin1((String*)&local_d8, "0,16,0.01,or_greater");
   local_e0 = 0;
   String::parse_latin1((String*)&local_e0, "fog_light_energy");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_a8, 3, (String*)&local_e0, 1, (String*)&local_d8, 6, (String*)&local_d0);
   local_e8 = 0;
   String::parse_latin1((String*)&local_e8, "Environment");
   StringName::StringName((StringName*)&local_b8, (String*)&local_e8, false);
   ClassDB::add_property((StringName*)&local_b8, (PropertyInfo*)&local_a8, (StringName*)&local_c8, (StringName*)&local_c0, -1);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   if (StringName::configured != '\0') {
      if (local_d0 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010bb14;
      }
      if (local_c8 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010bb14;
      }
      if (local_c0 != 0) {
         StringName::unref();
      }
   }
   LAB_0010bb14:_scs_create((char*)&local_c0, true);
   _scs_create((char*)&local_c8, true);
   local_d0 = 0;
   local_d8 = 0;
   String::parse_latin1((String*)&local_d8, "0,1,0.01,or_greater");
   local_e0 = 0;
   String::parse_latin1((String*)&local_e0, "fog_sun_scatter");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_a8, 3, (String*)&local_e0, 1, (String*)&local_d8, 6, (String*)&local_d0);
   local_b8 = "Environment";
   local_e8 = 0;
   local_b0 = 0xb;
   String::parse_latin1((StrRange*)&local_e8);
   StringName::StringName((StringName*)&local_b8, (String*)&local_e8, false);
   ClassDB::add_property((StringName*)&local_b8, (PropertyInfo*)&local_a8, (StringName*)&local_c8, (StringName*)&local_c0, -1);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   if (StringName::configured != '\0') {
      if (local_d0 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010bc76;
      }
      if (local_c8 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010bc76;
      }
      if (local_c0 != 0) {
         StringName::unref();
      }
   }
   LAB_0010bc76:_scs_create((char*)&local_c0, true);
   _scs_create((char*)&local_c8, true);
   local_d0 = 0;
   local_d8 = 0;
   String::parse_latin1((String*)&local_d8, "0,1,0.0001,or_greater");
   local_e0 = 0;
   String::parse_latin1((String*)&local_e0, "fog_density");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_a8, 3, (String*)&local_e0, 1, (String*)&local_d8, 6, (String*)&local_d0);
   local_e8 = 0;
   String::parse_latin1((String*)&local_e8, "Environment");
   StringName::StringName((StringName*)&local_b8, (String*)&local_e8, false);
   ClassDB::add_property((StringName*)&local_b8, (PropertyInfo*)&local_a8, (StringName*)&local_c8, (StringName*)&local_c0, -1);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   if (StringName::configured != '\0') {
      if (local_d0 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010bdc1;
      }
      if (local_c8 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010bdc1;
      }
      if (local_c0 != 0) {
         StringName::unref();
      }
   }
   LAB_0010bdc1:_scs_create((char*)&local_c0, true);
   _scs_create((char*)&local_c8, true);
   local_d0 = 0;
   local_d8 = 0;
   String::parse_latin1((String*)&local_d8, "0,1,0.001");
   local_e0 = 0;
   String::parse_latin1((String*)&local_e0, "fog_aerial_perspective");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_a8, 3, (String*)&local_e0, 1, (String*)&local_d8, 6, (String*)&local_d0);
   local_e8 = 0;
   String::parse_latin1((String*)&local_e8, "Environment");
   StringName::StringName((StringName*)&local_b8, (String*)&local_e8, false);
   ClassDB::add_property((StringName*)&local_b8, (PropertyInfo*)&local_a8, (StringName*)&local_c8, (StringName*)&local_c0, -1);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   if (StringName::configured != '\0') {
      if (local_d0 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010bf0d;
      }
      if (local_c8 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010bf0d;
      }
      if (local_c0 != 0) {
         StringName::unref();
      }
   }
   LAB_0010bf0d:_scs_create((char*)&local_c0, true);
   _scs_create((char*)&local_c8, true);
   local_d0 = 0;
   local_d8 = 0;
   String::parse_latin1((String*)&local_d8, "0,1,0.001");
   local_e0 = 0;
   local_a8 = "fog_sky_affect";
   local_a0 = 0xe;
   String::parse_latin1((StrRange*)&local_e0);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_a8, 3, (String*)&local_e0, 1, (String*)&local_d8, 6, (String*)&local_d0);
   local_e8 = 0;
   String::parse_latin1((String*)&local_e8, "Environment");
   StringName::StringName((StringName*)&local_b8, (String*)&local_e8, false);
   ClassDB::add_property((StringName*)&local_b8, (PropertyInfo*)&local_a8, (StringName*)&local_c8, (StringName*)&local_c0, -1);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   if (StringName::configured != '\0') {
      if (local_d0 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010c071;
      }
      if (local_c8 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010c071;
      }
      if (local_c0 != 0) {
         StringName::unref();
      }
   }
   LAB_0010c071:_scs_create((char*)&local_c0, true);
   _scs_create((char*)&local_c8, true);
   local_d0 = 0;
   local_d8 = 0;
   String::parse_latin1((String*)&local_d8, "-1024,1024,0.01,or_less,or_greater,suffix:m");
   local_e0 = 0;
   String::parse_latin1((String*)&local_e0, "fog_height");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_a8, 3, (String*)&local_e0, 1, (String*)&local_d8, 6, (String*)&local_d0);
   local_e8 = 0;
   String::parse_latin1((String*)&local_e8, "Environment");
   StringName::StringName((StringName*)&local_b8, (String*)&local_e8, false);
   ClassDB::add_property((StringName*)&local_b8, (PropertyInfo*)&local_a8, (StringName*)&local_c8, (StringName*)&local_c0, -1);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   if (StringName::configured != '\0') {
      if (local_d0 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010c1bd;
      }
      if (local_c8 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010c1bd;
      }
      if (local_c0 != 0) {
         StringName::unref();
      }
   }
   LAB_0010c1bd:_scs_create((char*)&local_c0, true);
   _scs_create((char*)&local_c8, true);
   local_d0 = 0;
   local_d8 = 0;
   String::parse_latin1((String*)&local_d8, "-16,16,0.0001,or_less,or_greater");
   local_e0 = 0;
   String::parse_latin1((String*)&local_e0, "fog_height_density");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_a8, 3, (String*)&local_e0, 1, (String*)&local_d8, 6, (String*)&local_d0);
   local_e8 = 0;
   String::parse_latin1((String*)&local_e8, "Environment");
   StringName::StringName((StringName*)&local_b8, (String*)&local_e8, false);
   ClassDB::add_property((StringName*)&local_b8, (PropertyInfo*)&local_a8, (StringName*)&local_c8, (StringName*)&local_c0, -1);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   if (StringName::configured != '\0') {
      if (local_d0 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010c308;
      }
      if (local_c8 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010c308;
      }
      if (local_c0 != 0) {
         StringName::unref();
      }
   }
   LAB_0010c308:_scs_create((char*)&local_c0, true);
   _scs_create((char*)&local_c8, true);
   local_d0 = 0;
   local_d8 = 0;
   String::parse_latin1((String*)&local_d8, "");
   local_e0 = 0;
   String::parse_latin1((String*)&local_e0, "fog_depth_curve");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_a8, 3, (String*)&local_e0, 4, (String*)&local_d8, 6, (String*)&local_d0);
   local_e8 = 0;
   String::parse_latin1((String*)&local_e8, "Environment");
   StringName::StringName((StringName*)&local_b8, (String*)&local_e8, false);
   ClassDB::add_property((StringName*)&local_b8, (PropertyInfo*)&local_a8, (StringName*)&local_c8, (StringName*)&local_c0, -1);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   if (StringName::configured != '\0') {
      if (local_d0 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010c453;
      }
      if (local_c8 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010c453;
      }
      if (local_c0 != 0) {
         StringName::unref();
      }
   }
   LAB_0010c453:_scs_create((char*)&local_c0, true);
   _scs_create((char*)&local_c8, true);
   local_d0 = 0;
   local_d8 = 0;
   String::parse_latin1((String*)&local_d8, "0,4000,0.1,or_greater,or_less,suffix:m");
   local_e0 = 0;
   String::parse_latin1((String*)&local_e0, "fog_depth_begin");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_a8, 3, (String*)&local_e0, 1, (String*)&local_d8, 6, (String*)&local_d0);
   local_e8 = 0;
   String::parse_latin1((String*)&local_e8, "Environment");
   StringName::StringName((StringName*)&local_b8, (String*)&local_e8, false);
   ClassDB::add_property((StringName*)&local_b8, (PropertyInfo*)&local_a8, (StringName*)&local_c8, (StringName*)&local_c0, -1);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   if (StringName::configured != '\0') {
      if (local_d0 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010c59f;
      }
      if (local_c8 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010c59f;
      }
      if (local_c0 != 0) {
         StringName::unref();
      }
   }
   LAB_0010c59f:_scs_create((char*)&local_c0, true);
   _scs_create((char*)&local_c8, true);
   local_d0 = 0;
   local_d8 = 0;
   String::parse_latin1((String*)&local_d8, "0,4000,0.1,or_greater,or_less,suffix:m");
   local_e0 = 0;
   String::parse_latin1((String*)&local_e0, "fog_depth_end");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_a8, 3, (String*)&local_e0, 1, (String*)&local_d8, 6, (String*)&local_d0);
   local_b8 = "Environment";
   local_e8 = 0;
   local_b0 = 0xb;
   String::parse_latin1((StrRange*)&local_e8);
   StringName::StringName((StringName*)&local_b8, (String*)&local_e8, false);
   ClassDB::add_property((StringName*)&local_b8, (PropertyInfo*)&local_a8, (StringName*)&local_c8, (StringName*)&local_c0, -1);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   if (StringName::configured != '\0') {
      if (local_d0 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010c703;
      }
      if (local_c8 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010c703;
      }
      if (local_c0 != 0) {
         StringName::unref();
      }
   }
   LAB_0010c703:D_METHOD<char_const*>((char*)&local_a8, "set_volumetric_fog_enabled");
   ClassDB::bind_method<MethodDefinition,void(Environment::*)(bool)>((MethodDefinition*)&local_a8, set_volumetric_fog_enabled, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHODP((char*)&local_a8, (char***)"is_volumetric_fog_enabled", 0);
   ClassDB::bind_method<MethodDefinition,bool(Environment::*)()const>((MethodDefinition*)&local_a8, is_volumetric_fog_enabled, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHOD<char_const*>((char*)&local_a8, "set_volumetric_fog_emission");
   auStack_50 = (undefined1[16])0x0;
   local_58 = (undefined**)0x0;
   pMVar3 = create_method_bind<Environment,Color>(set_volumetric_fog_emission);
   ClassDB::bind_methodfi(1, pMVar3, false, (MethodDefinition*)&local_a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHODP((char*)&local_a8, (char***)"get_volumetric_fog_emission", 0);
   auStack_50 = (undefined1[16])0x0;
   local_58 = (undefined**)0x0;
   pMVar3 = create_method_bind<Environment,Color>(get_volumetric_fog_emission);
   ClassDB::bind_methodfi(1, pMVar3, false, (MethodDefinition*)&local_a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHOD<char_const*>((char*)&local_a8, "set_volumetric_fog_albedo");
   auStack_50 = (undefined1[16])0x0;
   local_58 = (undefined**)0x0;
   pMVar3 = create_method_bind<Environment,Color>(set_volumetric_fog_albedo);
   ClassDB::bind_methodfi(1, pMVar3, false, (MethodDefinition*)&local_a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHODP((char*)&local_a8, (char***)"get_volumetric_fog_albedo", 0);
   auStack_50 = (undefined1[16])0x0;
   local_58 = (undefined**)0x0;
   pMVar3 = create_method_bind<Environment,Color>(get_volumetric_fog_albedo);
   ClassDB::bind_methodfi(1, pMVar3, false, (MethodDefinition*)&local_a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHOD<char_const*>((char*)&local_a8, "set_volumetric_fog_density");
   ClassDB::bind_method<MethodDefinition,void(Environment::*)(float)>((MethodDefinition*)&local_a8, set_volumetric_fog_density, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHODP((char*)&local_a8, (char***)"get_volumetric_fog_density", 0);
   ClassDB::bind_method<MethodDefinition,float(Environment::*)()const>((MethodDefinition*)&local_a8, get_volumetric_fog_density, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHOD<char_const*>((char*)&local_a8, "set_volumetric_fog_emission_energy");
   ClassDB::bind_method<MethodDefinition,void(Environment::*)(float)>((MethodDefinition*)&local_a8, set_volumetric_fog_emission_energy, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHODP((char*)&local_a8, (char***)"get_volumetric_fog_emission_energy", 0);
   ClassDB::bind_method<MethodDefinition,float(Environment::*)()const>((MethodDefinition*)&local_a8, get_volumetric_fog_emission_energy, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHOD<char_const*>((char*)&local_a8, "set_volumetric_fog_anisotropy");
   ClassDB::bind_method<MethodDefinition,void(Environment::*)(float)>((MethodDefinition*)&local_a8, set_volumetric_fog_anisotropy, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHODP((char*)&local_a8, (char***)"get_volumetric_fog_anisotropy", 0);
   ClassDB::bind_method<MethodDefinition,float(Environment::*)()const>((MethodDefinition*)&local_a8, get_volumetric_fog_anisotropy, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHOD<char_const*>((char*)&local_a8, "set_volumetric_fog_length");
   ClassDB::bind_method<MethodDefinition,void(Environment::*)(float)>((MethodDefinition*)&local_a8, set_volumetric_fog_length, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHODP((char*)&local_a8, (char***)"get_volumetric_fog_length", 0);
   ClassDB::bind_method<MethodDefinition,float(Environment::*)()const>((MethodDefinition*)&local_a8, get_volumetric_fog_length, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHOD<char_const*>((char*)&local_a8, "set_volumetric_fog_detail_spread");
   ClassDB::bind_method<MethodDefinition,void(Environment::*)(float)>((MethodDefinition*)&local_a8, set_volumetric_fog_detail_spread, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHODP((char*)&local_a8, (char***)"get_volumetric_fog_detail_spread", 0);
   ClassDB::bind_method<MethodDefinition,float(Environment::*)()const>((MethodDefinition*)&local_a8, get_volumetric_fog_detail_spread, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHOD<char_const*>((char*)&local_a8, "set_volumetric_fog_gi_inject");
   ClassDB::bind_method<MethodDefinition,void(Environment::*)(float)>((MethodDefinition*)&local_a8, set_volumetric_fog_gi_inject, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHODP((char*)&local_a8, (char***)"get_volumetric_fog_gi_inject", 0);
   ClassDB::bind_method<MethodDefinition,float(Environment::*)()const>((MethodDefinition*)&local_a8, get_volumetric_fog_gi_inject, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHOD<char_const*>((char*)&local_a8, "set_volumetric_fog_ambient_inject");
   ClassDB::bind_method<MethodDefinition,void(Environment::*)(float)>((MethodDefinition*)&local_a8, set_volumetric_fog_ambient_inject, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHODP((char*)&local_a8, (char***)"get_volumetric_fog_ambient_inject", 0);
   ClassDB::bind_method<MethodDefinition,float(Environment::*)()const>((MethodDefinition*)&local_a8, get_volumetric_fog_ambient_inject, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHOD<char_const*>((char*)&local_a8, "set_volumetric_fog_sky_affect");
   ClassDB::bind_method<MethodDefinition,void(Environment::*)(float)>((MethodDefinition*)&local_a8, set_volumetric_fog_sky_affect, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHODP((char*)&local_a8, (char***)"get_volumetric_fog_sky_affect", 0);
   ClassDB::bind_method<MethodDefinition,float(Environment::*)()const>((MethodDefinition*)&local_a8, get_volumetric_fog_sky_affect, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHOD<char_const*>((char*)&local_a8, "set_volumetric_fog_temporal_reprojection_enabled");
   ClassDB::bind_method<MethodDefinition,void(Environment::*)(bool)>((MethodDefinition*)&local_a8, set_volumetric_fog_temporal_reprojection_enabled, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHODP((char*)&local_a8, (char***)"is_volumetric_fog_temporal_reprojection_enabled", 0);
   ClassDB::bind_method<MethodDefinition,bool(Environment::*)()const>((MethodDefinition*)&local_a8, is_volumetric_fog_temporal_reprojection_enabled, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHOD<char_const*>((char*)&local_a8, "set_volumetric_fog_temporal_reprojection_amount");
   ClassDB::bind_method<MethodDefinition,void(Environment::*)(float)>((MethodDefinition*)&local_a8, set_volumetric_fog_temporal_reprojection_amount, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHODP((char*)&local_a8, (char***)"get_volumetric_fog_temporal_reprojection_amount", 0);
   ClassDB::bind_method<MethodDefinition,float(Environment::*)()const>((MethodDefinition*)&local_a8, get_volumetric_fog_temporal_reprojection_amount, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   local_a8 = (char*)0x0;
   String::parse_latin1((String*)&local_a8, "volumetric_fog_");
   local_b8 = (char*)0x0;
   String::parse_latin1((String*)&local_b8, "Volumetric Fog");
   local_c8 = 0;
   String::parse_latin1((String*)&local_c8, "Environment");
   StringName::StringName((StringName*)&local_c0, (String*)&local_c8, false);
   ClassDB::add_property_group((StringName*)&local_c0, (String*)&local_b8, (String*)&local_a8, 0);
   if (( StringName::configured != '\0' ) && ( local_c0 != 0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   _scs_create((char*)&local_c0, true);
   _scs_create((char*)&local_c8, true);
   local_d0 = 0;
   local_d8 = 0;
   String::parse_latin1((String*)&local_d8, "");
   local_e0 = 0;
   String::parse_latin1((String*)&local_e0, "volumetric_fog_enabled");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_a8, 1, (String*)&local_e0, 0, (String*)&local_d8, 6, (String*)&local_d0);
   local_e8 = 0;
   String::parse_latin1((String*)&local_e8, "Environment");
   StringName::StringName((StringName*)&local_b8, (String*)&local_e8, false);
   ClassDB::add_property((StringName*)&local_b8, (PropertyInfo*)&local_a8, (StringName*)&local_c8, (StringName*)&local_c0, -1);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   if (StringName::configured != '\0') {
      if (local_d0 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010ce9c;
      }
      if (local_c8 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010ce9c;
      }
      if (local_c0 != 0) {
         StringName::unref();
      }
   }
   LAB_0010ce9c:_scs_create((char*)&local_c0, true);
   _scs_create((char*)&local_c8, true);
   local_d0 = 0;
   local_d8 = 0;
   String::parse_latin1((String*)&local_d8, "0,1,0.0001,or_greater");
   local_e0 = 0;
   String::parse_latin1((String*)&local_e0, "volumetric_fog_density");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_a8, 3, (String*)&local_e0, 1, (String*)&local_d8, 6, (String*)&local_d0);
   local_e8 = 0;
   String::parse_latin1((String*)&local_e8, "Environment");
   StringName::StringName((StringName*)&local_b8, (String*)&local_e8, false);
   ClassDB::add_property((StringName*)&local_b8, (PropertyInfo*)&local_a8, (StringName*)&local_c8, (StringName*)&local_c0, -1);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   if (StringName::configured != '\0') {
      if (local_d0 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010cfe7;
      }
      if (local_c8 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010cfe7;
      }
      if (local_c0 != 0) {
         StringName::unref();
      }
   }
   LAB_0010cfe7:_scs_create((char*)&local_c0, true);
   _scs_create((char*)&local_c8, true);
   local_d0 = 0;
   local_d8 = 0;
   String::parse_latin1((String*)&local_d8, "");
   local_e0 = 0;
   String::parse_latin1((String*)&local_e0, "volumetric_fog_albedo");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_a8, 0x14, (String*)&local_e0, 0x15, (String*)&local_d8, 6, (String*)&local_d0);
   local_e8 = 0;
   String::parse_latin1((String*)&local_e8, "Environment");
   StringName::StringName((StringName*)&local_b8, (String*)&local_e8, false);
   ClassDB::add_property((StringName*)&local_b8, (PropertyInfo*)&local_a8, (StringName*)&local_c8, (StringName*)&local_c0, -1);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   if (StringName::configured != '\0') {
      if (local_d0 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010d132;
      }
      if (local_c8 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010d132;
      }
      if (local_c0 != 0) {
         StringName::unref();
      }
   }
   LAB_0010d132:_scs_create((char*)&local_c0, true);
   _scs_create((char*)&local_c8, true);
   local_d0 = 0;
   local_d8 = 0;
   String::parse_latin1((String*)&local_d8, "");
   local_e0 = 0;
   String::parse_latin1((String*)&local_e0, "volumetric_fog_emission");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_a8, 0x14, (String*)&local_e0, 0x15, (String*)&local_d8, 6, (String*)&local_d0);
   local_e8 = 0;
   String::parse_latin1((String*)&local_e8, "Environment");
   StringName::StringName((StringName*)&local_b8, (String*)&local_e8, false);
   ClassDB::add_property((StringName*)&local_b8, (PropertyInfo*)&local_a8, (StringName*)&local_c8, (StringName*)&local_c0, -1);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   if (StringName::configured != '\0') {
      if (local_d0 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010d27e;
      }
      if (local_c8 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010d27e;
      }
      if (local_c0 != 0) {
         StringName::unref();
      }
   }
   LAB_0010d27e:_scs_create((char*)&local_c0, true);
   _scs_create((char*)&local_c8, true);
   local_d0 = 0;
   local_d8 = 0;
   String::parse_latin1((String*)&local_d8, "0,1024,0.01,or_greater");
   local_e0 = 0;
   String::parse_latin1((String*)&local_e0, "volumetric_fog_emission_energy");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_a8, 3, (String*)&local_e0, 1, (String*)&local_d8, 6, (String*)&local_d0);
   local_e8 = 0;
   String::parse_latin1((String*)&local_e8, "Environment");
   StringName::StringName((StringName*)&local_b8, (String*)&local_e8, false);
   ClassDB::add_property((StringName*)&local_b8, (PropertyInfo*)&local_a8, (StringName*)&local_c8, (StringName*)&local_c0, -1);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   if (StringName::configured != '\0') {
      if (local_d0 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010d3cb;
      }
      if (local_c8 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010d3cb;
      }
      if (local_c0 != 0) {
         StringName::unref();
      }
   }
   LAB_0010d3cb:_scs_create((char*)&local_c0, true);
   _scs_create((char*)&local_c8, true);
   local_d0 = 0;
   local_d8 = 0;
   String::parse_latin1((String*)&local_d8, "0.0,16,0.01,exp");
   local_e0 = 0;
   String::parse_latin1((String*)&local_e0, "volumetric_fog_gi_inject");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_a8, 3, (String*)&local_e0, 1, (String*)&local_d8, 6, (String*)&local_d0);
   local_e8 = 0;
   String::parse_latin1((String*)&local_e8, "Environment");
   StringName::StringName((StringName*)&local_b8, (String*)&local_e8, false);
   ClassDB::add_property((StringName*)&local_b8, (PropertyInfo*)&local_a8, (StringName*)&local_c8, (StringName*)&local_c0, -1);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   if (StringName::configured != '\0') {
      if (local_d0 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010d517;
      }
      if (local_c8 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010d517;
      }
      if (local_c0 != 0) {
         StringName::unref();
      }
   }
   LAB_0010d517:_scs_create((char*)&local_c0, true);
   _scs_create((char*)&local_c8, true);
   local_d0 = 0;
   local_d8 = 0;
   String::parse_latin1((String*)&local_d8, "-0.9,0.9,0.01");
   local_e0 = 0;
   String::parse_latin1((String*)&local_e0, "volumetric_fog_anisotropy");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_a8, 3, (String*)&local_e0, 1, (String*)&local_d8, 6, (String*)&local_d0);
   local_e8 = 0;
   String::parse_latin1((String*)&local_e8, "Environment");
   StringName::StringName((StringName*)&local_b8, (String*)&local_e8, false);
   ClassDB::add_property((StringName*)&local_b8, (PropertyInfo*)&local_a8, (StringName*)&local_c8, (StringName*)&local_c0, -1);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   if (StringName::configured != '\0') {
      if (local_d0 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010d662;
      }
      if (local_c8 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010d662;
      }
      if (local_c0 != 0) {
         StringName::unref();
      }
   }
   LAB_0010d662:_scs_create((char*)&local_c0, true);
   _scs_create((char*)&local_c8, true);
   local_d0 = 0;
   local_d8 = 0;
   String::parse_latin1((String*)&local_d8, "0.01,1024,0.01,or_greater,suffix:m");
   local_e0 = 0;
   String::parse_latin1((String*)&local_e0, "volumetric_fog_length");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_a8, 3, (String*)&local_e0, 1, (String*)&local_d8, 6, (String*)&local_d0);
   local_e8 = 0;
   String::parse_latin1((String*)&local_e8, "Environment");
   StringName::StringName((StringName*)&local_b8, (String*)&local_e8, false);
   ClassDB::add_property((StringName*)&local_b8, (PropertyInfo*)&local_a8, (StringName*)&local_c8, (StringName*)&local_c0, -1);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   if (StringName::configured != '\0') {
      if (local_d0 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010d7ad;
      }
      if (local_c8 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010d7ad;
      }
      if (local_c0 != 0) {
         StringName::unref();
      }
   }
   LAB_0010d7ad:_scs_create((char*)&local_c0, true);
   _scs_create((char*)&local_c8, true);
   local_d0 = 0;
   local_d8 = 0;
   String::parse_latin1((String*)&local_d8, "positive_only");
   local_e0 = 0;
   String::parse_latin1((String*)&local_e0, "volumetric_fog_detail_spread");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_a8, 3, (String*)&local_e0, 4, (String*)&local_d8, 6, (String*)&local_d0);
   local_e8 = 0;
   String::parse_latin1((String*)&local_e8, "Environment");
   StringName::StringName((StringName*)&local_b8, (String*)&local_e8, false);
   ClassDB::add_property((StringName*)&local_b8, (PropertyInfo*)&local_a8, (StringName*)&local_c8, (StringName*)&local_c0, -1);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   if (StringName::configured != '\0') {
      if (local_d0 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010d8f9;
      }
      if (local_c8 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010d8f9;
      }
      if (local_c0 != 0) {
         StringName::unref();
      }
   }
   LAB_0010d8f9:_scs_create((char*)&local_c0, true);
   _scs_create((char*)&local_c8, true);
   local_d0 = 0;
   local_d8 = 0;
   String::parse_latin1((String*)&local_d8, "0.0,16,0.01,exp");
   local_e0 = 0;
   String::parse_latin1((String*)&local_e0, "volumetric_fog_ambient_inject");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_a8, 3, (String*)&local_e0, 1, (String*)&local_d8, 6, (String*)&local_d0);
   local_e8 = 0;
   String::parse_latin1((String*)&local_e8, "Environment");
   StringName::StringName((StringName*)&local_b8, (String*)&local_e8, false);
   ClassDB::add_property((StringName*)&local_b8, (PropertyInfo*)&local_a8, (StringName*)&local_c8, (StringName*)&local_c0, -1);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   if (StringName::configured != '\0') {
      if (local_d0 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010da46;
      }
      if (local_c8 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010da46;
      }
      if (local_c0 != 0) {
         StringName::unref();
      }
   }
   LAB_0010da46:_scs_create((char*)&local_c0, true);
   _scs_create((char*)&local_c8, true);
   local_a8 = "0,1,0.001";
   local_d0 = 0;
   local_d8 = 0;
   local_a0 = 9;
   String::parse_latin1((StrRange*)&local_d8);
   local_e0 = 0;
   String::parse_latin1((String*)&local_e0, "volumetric_fog_sky_affect");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_a8, 3, (String*)&local_e0, 1, (String*)&local_d8, 6, (String*)&local_d0);
   local_e8 = 0;
   String::parse_latin1((String*)&local_e8, "Environment");
   StringName::StringName((StringName*)&local_b8, (String*)&local_e8, false);
   ClassDB::add_property((StringName*)&local_b8, (PropertyInfo*)&local_a8, (StringName*)&local_c8, (StringName*)&local_c0, -1);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   if (StringName::configured != '\0') {
      if (local_d0 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010dba9;
      }
      if (local_c8 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010dba9;
      }
      if (local_c0 != 0) {
         StringName::unref();
      }
   }
   LAB_0010dba9:local_a8 = (char*)0x0;
   String::parse_latin1((String*)&local_a8, "volumetric_fog_temporal_reprojection_");
   local_b8 = (char*)0x0;
   String::parse_latin1((String*)&local_b8, "Temporal Reprojection");
   local_c8 = 0;
   String::parse_latin1((String*)&local_c8, "Environment");
   StringName::StringName((StringName*)&local_c0, (String*)&local_c8, false);
   ClassDB::add_property_subgroup((StringName*)&local_c0, (String*)&local_b8, (String*)&local_a8, 0);
   if (( StringName::configured != '\0' ) && ( local_c0 != 0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   _scs_create((char*)&local_c0, true);
   _scs_create((char*)&local_c8, true);
   local_d0 = 0;
   local_d8 = 0;
   String::parse_latin1((String*)&local_d8, "");
   local_e0 = 0;
   String::parse_latin1((String*)&local_e0, "volumetric_fog_temporal_reprojection_enabled");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_a8, 1, (String*)&local_e0, 0, (String*)&local_d8, 6, (String*)&local_d0);
   local_e8 = 0;
   String::parse_latin1((String*)&local_e8, "Environment");
   StringName::StringName((StringName*)&local_b8, (String*)&local_e8, false);
   ClassDB::add_property((StringName*)&local_b8, (PropertyInfo*)&local_a8, (StringName*)&local_c8, (StringName*)&local_c0, -1);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   if (StringName::configured != '\0') {
      if (local_d0 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010dd8a;
      }
      if (local_c8 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010dd8a;
      }
      if (local_c0 != 0) {
         StringName::unref();
      }
   }
   LAB_0010dd8a:_scs_create((char*)&local_c0, true);
   _scs_create((char*)&local_c8, true);
   local_d0 = 0;
   local_d8 = 0;
   String::parse_latin1((String*)&local_d8, "0.5,0.99,0.001");
   local_e0 = 0;
   String::parse_latin1((String*)&local_e0, "volumetric_fog_temporal_reprojection_amount");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_a8, 3, (String*)&local_e0, 1, (String*)&local_d8, 6, (String*)&local_d0);
   local_e8 = 0;
   String::parse_latin1((String*)&local_e8, "Environment");
   StringName::StringName((StringName*)&local_b8, (String*)&local_e8, false);
   ClassDB::add_property((StringName*)&local_b8, (PropertyInfo*)&local_a8, (StringName*)&local_c8, (StringName*)&local_c0, -1);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   if (StringName::configured != '\0') {
      if (local_d0 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010ded5;
      }
      if (local_c8 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010ded5;
      }
      if (local_c0 != 0) {
         StringName::unref();
      }
   }
   LAB_0010ded5:D_METHOD<char_const*>((char*)&local_a8, "set_adjustment_enabled");
   ClassDB::bind_method<MethodDefinition,void(Environment::*)(bool)>((MethodDefinition*)&local_a8, set_adjustment_enabled, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHODP((char*)&local_a8, (char***)"is_adjustment_enabled", 0);
   ClassDB::bind_method<MethodDefinition,bool(Environment::*)()const>((MethodDefinition*)&local_a8, is_adjustment_enabled, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHOD<char_const*>((char*)&local_a8, "set_adjustment_brightness");
   ClassDB::bind_method<MethodDefinition,void(Environment::*)(float)>((MethodDefinition*)&local_a8, set_adjustment_brightness, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHODP((char*)&local_a8, (char***)"get_adjustment_brightness", 0);
   ClassDB::bind_method<MethodDefinition,float(Environment::*)()const>((MethodDefinition*)&local_a8, get_adjustment_brightness, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHOD<char_const*>((char*)&local_a8, "set_adjustment_contrast");
   ClassDB::bind_method<MethodDefinition,void(Environment::*)(float)>((MethodDefinition*)&local_a8, set_adjustment_contrast, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHODP((char*)&local_a8, (char***)"get_adjustment_contrast", 0);
   ClassDB::bind_method<MethodDefinition,float(Environment::*)()const>((MethodDefinition*)&local_a8, get_adjustment_contrast, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHOD<char_const*>((char*)&local_a8, "set_adjustment_saturation");
   ClassDB::bind_method<MethodDefinition,void(Environment::*)(float)>((MethodDefinition*)&local_a8, set_adjustment_saturation, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHODP((char*)&local_a8, (char***)"get_adjustment_saturation", 0);
   ClassDB::bind_method<MethodDefinition,float(Environment::*)()const>((MethodDefinition*)&local_a8, get_adjustment_saturation, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHOD<char_const*>((char*)&local_a8, "set_adjustment_color_correction");
   auStack_50 = (undefined1[16])0x0;
   local_58 = (undefined**)0x0;
   pMVar3 = create_method_bind<Environment,Ref<Texture>>(set_adjustment_color_correction);
   ClassDB::bind_methodfi(1, pMVar3, false, (MethodDefinition*)&local_a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   D_METHODP((char*)&local_a8, (char***)"get_adjustment_color_correction", 0);
   auStack_50 = (undefined1[16])0x0;
   local_58 = (undefined**)0x0;
   pMVar3 = create_method_bind<Environment,Ref<Texture>>(get_adjustment_color_correction);
   ClassDB::bind_methodfi(1, pMVar3, false, (MethodDefinition*)&local_a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_a8);
   local_a8 = (char*)0x0;
   String::parse_latin1((String*)&local_a8, "adjustment_");
   local_b8 = (char*)0x0;
   String::parse_latin1((String*)&local_b8, "Adjustments");
   local_c8 = 0;
   String::parse_latin1((String*)&local_c8, "Environment");
   StringName::StringName((StringName*)&local_c0, (String*)&local_c8, false);
   ClassDB::add_property_group((StringName*)&local_c0, (String*)&local_b8, (String*)&local_a8, 0);
   if (( StringName::configured != '\0' ) && ( local_c0 != 0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   _scs_create((char*)&local_c0, true);
   _scs_create((char*)&local_c8, true);
   local_d0 = 0;
   local_d8 = 0;
   String::parse_latin1((String*)&local_d8, "");
   local_e0 = 0;
   String::parse_latin1((String*)&local_e0, "adjustment_enabled");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_a8, 1, (String*)&local_e0, 0, (String*)&local_d8, 6, (String*)&local_d0);
   local_e8 = 0;
   String::parse_latin1((String*)&local_e8, "Environment");
   StringName::StringName((StringName*)&local_b8, (String*)&local_e8, false);
   ClassDB::add_property((StringName*)&local_b8, (PropertyInfo*)&local_a8, (StringName*)&local_c8, (StringName*)&local_c0, -1);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   if (StringName::configured != '\0') {
      if (local_d0 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010e30a;
      }
      if (local_c8 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010e30a;
      }
      if (local_c0 != 0) {
         StringName::unref();
      }
   }
   LAB_0010e30a:_scs_create((char*)&local_c0, true);
   _scs_create((char*)&local_c8, true);
   local_d0 = 0;
   local_d8 = 0;
   String::parse_latin1((String*)&local_d8, "0.01,8,0.01");
   local_e0 = 0;
   String::parse_latin1((String*)&local_e0, "adjustment_brightness");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_a8, 3, (String*)&local_e0, 1, (String*)&local_d8, 6, (String*)&local_d0);
   local_e8 = 0;
   String::parse_latin1((String*)&local_e8, "Environment");
   StringName::StringName((StringName*)&local_b8, (String*)&local_e8, false);
   ClassDB::add_property((StringName*)&local_b8, (PropertyInfo*)&local_a8, (StringName*)&local_c8, (StringName*)&local_c0, -1);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   if (StringName::configured != '\0') {
      if (local_d0 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010e457;
      }
      if (local_c8 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010e457;
      }
      if (local_c0 != 0) {
         StringName::unref();
      }
   }
   LAB_0010e457:_scs_create((char*)&local_c0, true);
   _scs_create((char*)&local_c8, false);
   local_d0 = 0;
   local_d8 = 0;
   String::parse_latin1((String*)&local_d8, "0.01,8,0.01");
   local_e0 = 0;
   String::parse_latin1((String*)&local_e0, "adjustment_contrast");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_a8, 3, (String*)&local_e0, 1, (String*)&local_d8, 6, (String*)&local_d0);
   local_e8 = 0;
   String::parse_latin1((String*)&local_e8, "Environment");
   StringName::StringName((StringName*)&local_b8, (String*)&local_e8, false);
   ClassDB::add_property((StringName*)&local_b8, (PropertyInfo*)&local_a8, (StringName*)&local_c8, (StringName*)&local_c0, -1);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   if (StringName::configured != '\0') {
      if (local_d0 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010e5a3;
      }
      if (local_c8 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010e5a3;
      }
      if (local_c0 != 0) {
         StringName::unref();
      }
   }
   LAB_0010e5a3:_scs_create((char*)&local_c0, true);
   _scs_create((char*)&local_c8, true);
   local_d0 = 0;
   local_d8 = 0;
   String::parse_latin1((String*)&local_d8, "0.01,8,0.01");
   local_e0 = 0;
   String::parse_latin1((String*)&local_e0, "adjustment_saturation");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_a8, 3, (String*)&local_e0, 1, (String*)&local_d8, 6, (String*)&local_d0);
   local_e8 = 0;
   String::parse_latin1((String*)&local_e8, "Environment");
   StringName::StringName((StringName*)&local_b8, (String*)&local_e8, false);
   ClassDB::add_property((StringName*)&local_b8, (PropertyInfo*)&local_a8, (StringName*)&local_c8, (StringName*)&local_c0, -1);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   if (StringName::configured != '\0') {
      if (local_d0 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010e6ee;
      }
      if (local_c8 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010e6ee;
      }
      if (local_c0 != 0) {
         StringName::unref();
      }
   }
   LAB_0010e6ee:_scs_create((char*)&local_c0, true);
   _scs_create((char*)&local_c8, true);
   local_d0 = 0;
   local_d8 = 0;
   String::parse_latin1((String*)&local_d8, "Texture2D,Texture3D");
   local_e0 = 0;
   String::parse_latin1((String*)&local_e0, "adjustment_color_correction");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_a8, 0x18, (String*)&local_e0, 0x11, (String*)&local_d8, 6, (String*)&local_d0);
   local_e8 = 0;
   String::parse_latin1((String*)&local_e8, "Environment");
   StringName::StringName((StringName*)&local_b8, (String*)&local_e8, false);
   ClassDB::add_property((StringName*)&local_b8, (PropertyInfo*)&local_a8, (StringName*)&local_c8, (StringName*)&local_c0, -1);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   if (StringName::configured != '\0') {
      if (local_d0 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010e839;
      }
      if (local_c8 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010e839;
      }
      if (local_c0 != 0) {
         StringName::unref();
      }
   }
   LAB_0010e839:StringName::StringName((StringName*)&local_a8, "BG_CLEAR_COLOR", false);
   local_c8 = 0;
   String::parse_latin1((String*)&local_c8, "BG_CLEAR_COLOR");
   __constant_get_enum_name<Environment::BGMode>((StringName*)&local_c0);
   local_d0 = 0;
   String::parse_latin1((String*)&local_d0, "Environment");
   StringName::StringName((StringName*)&local_b8, (String*)&local_d0, false);
   ClassDB::bind_integer_constant((StringName*)&local_b8, (StringName*)&local_c0, (StringName*)&local_a8, 0, false);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d0);
   if (( StringName::configured != '\0' ) && ( local_c0 != 0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
   if (( StringName::configured != '\0' ) && ( local_a8 != (char*)0x0 )) {
      StringName::unref();
   }
   StringName::StringName((StringName*)&local_a8, "BG_COLOR", false);
   local_c8 = 0;
   String::parse_latin1((String*)&local_c8, "BG_COLOR");
   __constant_get_enum_name<Environment::BGMode>((StringName*)&local_c0);
   local_d0 = 0;
   String::parse_latin1((String*)&local_d0, "Environment");
   StringName::StringName((StringName*)&local_b8, (String*)&local_d0, false);
   ClassDB::bind_integer_constant((StringName*)&local_b8, (StringName*)&local_c0, (StringName*)&local_a8, 1, false);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d0);
   if (( StringName::configured != '\0' ) && ( local_c0 != 0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
   if (( StringName::configured != '\0' ) && ( local_a8 != (char*)0x0 )) {
      StringName::unref();
   }
   StringName::StringName((StringName*)&local_b8, "BG_SKY", false);
   local_a8 = "BG_SKY";
   local_c8 = 0;
   local_a0 = 6;
   String::parse_latin1((StrRange*)&local_c8);
   __constant_get_enum_name<Environment::BGMode>((StringName*)&local_c0);
   local_d0 = 0;
   String::parse_latin1((String*)&local_d0, "Environment");
   StringName::StringName((StringName*)&local_a8, (String*)&local_d0, false);
   ClassDB::bind_integer_constant((StringName*)&local_a8, (StringName*)&local_c0, (StringName*)&local_b8, 2, false);
   if (( StringName::configured != '\0' ) && ( local_a8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d0);
   if (( StringName::configured != '\0' ) && ( local_c0 != 0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }
   StringName::StringName((StringName*)&local_a8, "BG_CANVAS", false);
   local_c8 = 0;
   String::parse_latin1((String*)&local_c8, "BG_CANVAS");
   __constant_get_enum_name<Environment::BGMode>((StringName*)&local_c0);
   local_d0 = 0;
   String::parse_latin1((String*)&local_d0, "Environment");
   StringName::StringName((StringName*)&local_b8, (String*)&local_d0, false);
   ClassDB::bind_integer_constant((StringName*)&local_b8, (StringName*)&local_c0, (StringName*)&local_a8, 3, false);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d0);
   if (( StringName::configured != '\0' ) && ( local_c0 != 0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
   if (( StringName::configured != '\0' ) && ( local_a8 != (char*)0x0 )) {
      StringName::unref();
   }
   StringName::StringName((StringName*)&local_b8, "BG_KEEP", false);
   local_a8 = "BG_KEEP";
   local_c8 = 0;
   local_a0 = 7;
   String::parse_latin1((StrRange*)&local_c8);
   __constant_get_enum_name<Environment::BGMode>((StringName*)&local_c0);
   local_d0 = 0;
   String::parse_latin1((String*)&local_d0, "Environment");
   StringName::StringName((StringName*)&local_a8, (String*)&local_d0, false);
   ClassDB::bind_integer_constant((StringName*)&local_a8, (StringName*)&local_c0, (StringName*)&local_b8, 4, false);
   if (( StringName::configured != '\0' ) && ( local_a8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d0);
   if (( StringName::configured != '\0' ) && ( local_c0 != 0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }
   StringName::StringName((StringName*)&local_b8, "BG_CAMERA_FEED", false);
   local_a8 = "BG_CAMERA_FEED";
   local_c8 = 0;
   local_a0 = 0xe;
   String::parse_latin1((StrRange*)&local_c8);
   __constant_get_enum_name<Environment::BGMode>((StringName*)&local_c0);
   local_d0 = 0;
   String::parse_latin1((String*)&local_d0, "Environment");
   StringName::StringName((StringName*)&local_a8, (String*)&local_d0, false);
   ClassDB::bind_integer_constant((StringName*)&local_a8, (StringName*)&local_c0, (StringName*)&local_b8, 5, false);
   if (( StringName::configured != '\0' ) && ( local_a8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d0);
   if (( StringName::configured != '\0' ) && ( local_c0 != 0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }
   StringName::StringName((StringName*)&local_a8, "BG_MAX", false);
   local_c8 = 0;
   String::parse_latin1((String*)&local_c8, "BG_MAX");
   __constant_get_enum_name<Environment::BGMode>((StringName*)&local_c0);
   local_d0 = 0;
   String::parse_latin1((String*)&local_d0, "Environment");
   StringName::StringName((StringName*)&local_b8, (String*)&local_d0, false);
   ClassDB::bind_integer_constant((StringName*)&local_b8, (StringName*)&local_c0, (StringName*)&local_a8, 6, false);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d0);
   if (( StringName::configured != '\0' ) && ( local_c0 != 0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
   if (( StringName::configured != '\0' ) && ( local_a8 != (char*)0x0 )) {
      StringName::unref();
   }
   StringName::StringName((StringName*)&local_b8, "AMBIENT_SOURCE_BG", false);
   local_c8 = 0;
   String::parse_latin1((String*)&local_c8, "AMBIENT_SOURCE_BG");
   GetTypeInfo<Environment::AmbientSource,void>::get_class_info((GetTypeInfo<Environment::AmbientSource,void>*)&local_a8);
   local_c0 = local_98;
   local_98 = 0;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_a8);
   local_d0 = 0;
   String::parse_latin1((String*)&local_d0, "Environment");
   StringName::StringName((StringName*)&local_a8, (String*)&local_d0, false);
   ClassDB::bind_integer_constant((StringName*)&local_a8, (StringName*)&local_c0, (StringName*)&local_b8, 0, false);
   if (( StringName::configured != '\0' ) && ( local_a8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d0);
   if (( StringName::configured != '\0' ) && ( local_c0 != 0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }
   StringName::StringName((StringName*)&local_b8, "AMBIENT_SOURCE_DISABLED", false);
   local_c8 = 0;
   String::parse_latin1((String*)&local_c8, "AMBIENT_SOURCE_DISABLED");
   GetTypeInfo<Environment::AmbientSource,void>::get_class_info((GetTypeInfo<Environment::AmbientSource,void>*)&local_a8);
   local_c0 = local_98;
   local_98 = 0;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_a8);
   local_d0 = 0;
   String::parse_latin1((String*)&local_d0, "Environment");
   StringName::StringName((StringName*)&local_a8, (String*)&local_d0, false);
   ClassDB::bind_integer_constant((StringName*)&local_a8, (StringName*)&local_c0, (StringName*)&local_b8, 1, false);
   if (( StringName::configured != '\0' ) && ( local_a8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d0);
   if (( StringName::configured != '\0' ) && ( local_c0 != 0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }
   StringName::StringName((StringName*)&local_b8, "AMBIENT_SOURCE_COLOR", false);
   local_c8 = 0;
   String::parse_latin1((String*)&local_c8, "AMBIENT_SOURCE_COLOR");
   GetTypeInfo<Environment::AmbientSource,void>::get_class_info((GetTypeInfo<Environment::AmbientSource,void>*)&local_a8);
   local_c0 = local_98;
   local_98 = 0;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_a8);
   local_d0 = 0;
   String::parse_latin1((String*)&local_d0, "Environment");
   StringName::StringName((StringName*)&local_a8, (String*)&local_d0, false);
   ClassDB::bind_integer_constant((StringName*)&local_a8, (StringName*)&local_c0, (StringName*)&local_b8, 2, false);
   if (( StringName::configured != '\0' ) && ( local_a8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d0);
   if (( StringName::configured != '\0' ) && ( local_c0 != 0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }
   StringName::StringName((StringName*)&local_b8, "AMBIENT_SOURCE_SKY", false);
   local_c8 = 0;
   String::parse_latin1((String*)&local_c8, "AMBIENT_SOURCE_SKY");
   GetTypeInfo<Environment::AmbientSource,void>::get_class_info((GetTypeInfo<Environment::AmbientSource,void>*)&local_a8);
   local_c0 = local_98;
   local_98 = 0;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_a8);
   local_d0 = 0;
   String::parse_latin1((String*)&local_d0, "Environment");
   StringName::StringName((StringName*)&local_a8, (String*)&local_d0, false);
   ClassDB::bind_integer_constant((StringName*)&local_a8, (StringName*)&local_c0, (StringName*)&local_b8, 3, false);
   if (( StringName::configured != '\0' ) && ( local_a8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d0);
   if (( StringName::configured != '\0' ) && ( local_c0 != 0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }
   StringName::StringName((StringName*)&local_b8, "REFLECTION_SOURCE_BG", false);
   local_c8 = 0;
   String::parse_latin1((String*)&local_c8, "REFLECTION_SOURCE_BG");
   GetTypeInfo<Environment::ReflectionSource,void>::get_class_info((GetTypeInfo<Environment::ReflectionSource,void>*)&local_a8);
   local_c0 = local_98;
   local_98 = 0;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_a8);
   local_d0 = 0;
   String::parse_latin1((String*)&local_d0, "Environment");
   StringName::StringName((StringName*)&local_a8, (String*)&local_d0, false);
   ClassDB::bind_integer_constant((StringName*)&local_a8, (StringName*)&local_c0, (StringName*)&local_b8, 0, false);
   if (( StringName::configured != '\0' ) && ( local_a8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d0);
   if (( StringName::configured != '\0' ) && ( local_c0 != 0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }
   StringName::StringName((StringName*)&local_b8, "REFLECTION_SOURCE_DISABLED", false);
   local_c8 = 0;
   String::parse_latin1((String*)&local_c8, "REFLECTION_SOURCE_DISABLED");
   GetTypeInfo<Environment::ReflectionSource,void>::get_class_info((GetTypeInfo<Environment::ReflectionSource,void>*)&local_a8);
   local_c0 = local_98;
   local_98 = 0;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_a8);
   local_d0 = 0;
   String::parse_latin1((String*)&local_d0, "Environment");
   StringName::StringName((StringName*)&local_a8, (String*)&local_d0, false);
   ClassDB::bind_integer_constant((StringName*)&local_a8, (StringName*)&local_c0, (StringName*)&local_b8, 1, false);
   if (( StringName::configured != '\0' ) && ( local_a8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d0);
   if (( StringName::configured != '\0' ) && ( local_c0 != 0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }
   StringName::StringName((StringName*)&local_b8, "REFLECTION_SOURCE_SKY", false);
   local_c8 = 0;
   String::parse_latin1((String*)&local_c8, "REFLECTION_SOURCE_SKY");
   GetTypeInfo<Environment::ReflectionSource,void>::get_class_info((GetTypeInfo<Environment::ReflectionSource,void>*)&local_a8);
   local_c0 = local_98;
   local_98 = 0;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_a8);
   local_d0 = 0;
   String::parse_latin1((String*)&local_d0, "Environment");
   StringName::StringName((StringName*)&local_a8, (String*)&local_d0, false);
   ClassDB::bind_integer_constant((StringName*)&local_a8, (StringName*)&local_c0, (StringName*)&local_b8, 2, false);
   if (( StringName::configured != '\0' ) && ( local_a8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d0);
   if (( StringName::configured != '\0' ) && ( local_c0 != 0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }
   StringName::StringName((StringName*)&local_e0, "TONE_MAPPER_LINEAR", false);
   local_e8 = 0;
   String::parse_latin1((String*)&local_e8, "TONE_MAPPER_LINEAR");
   local_a8 = "Environment::ToneMapper";
   local_c8 = 0;
   local_a0 = 0x17;
   String::parse_latin1((StrRange*)&local_c8);
   godot::details::enum_qualified_name_to_class_info_name((details*)&local_c0, (String*)&local_c8);
   StringName::StringName((StringName*)&local_b8, (String*)&local_c0, false);
   local_d0 = 0;
   local_d8 = 0;
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_a8, 2, (String*)&local_d8, 0, (String*)&local_d0, 0x10006, (String*)&local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d0);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
   local_b8 = (char*)local_98;
   local_98 = 0;
   CowData<char32_t>::_unref(local_88);
   if (( StringName::configured != '\0' ) && ( local_98 != 0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
   local_c0 = 0;
   String::parse_latin1((String*)&local_c0, "Environment");
   StringName::StringName((StringName*)&local_a8, (String*)&local_c0, false);
   ClassDB::bind_integer_constant((StringName*)&local_a8, (StringName*)&local_b8, (StringName*)&local_e0, 0, false);
   if (( StringName::configured != '\0' ) && ( local_a8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   if (( StringName::configured != '\0' ) && ( local_e0 != 0 )) {
      StringName::unref();
   }
   StringName::StringName((StringName*)&local_e0, "TONE_MAPPER_REINHARDT", false);
   local_e8 = 0;
   String::parse_latin1((String*)&local_e8, "TONE_MAPPER_REINHARDT");
   local_a8 = "Environment::ToneMapper";
   local_c8 = 0;
   local_a0 = 0x17;
   String::parse_latin1((StrRange*)&local_c8);
   godot::details::enum_qualified_name_to_class_info_name((details*)&local_c0, (String*)&local_c8);
   StringName::StringName((StringName*)&local_b8, (String*)&local_c0, false);
   local_d0 = 0;
   local_d8 = 0;
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_a8, 2, (String*)&local_d8, 0, (String*)&local_d0, 0x10006, (String*)&local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d0);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
   local_b8 = (char*)local_98;
   local_98 = 0;
   CowData<char32_t>::_unref(local_88);
   if (( StringName::configured != '\0' ) && ( local_98 != 0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
   local_c0 = 0;
   String::parse_latin1((String*)&local_c0, "Environment");
   StringName::StringName((StringName*)&local_a8, (String*)&local_c0, false);
   ClassDB::bind_integer_constant((StringName*)&local_a8, (StringName*)&local_b8, (StringName*)&local_e0, 1, false);
   if (( StringName::configured != '\0' ) && ( local_a8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   if (( StringName::configured != '\0' ) && ( local_e0 != 0 )) {
      StringName::unref();
   }
   StringName::StringName((StringName*)&local_e0, "TONE_MAPPER_FILMIC", false);
   local_a8 = "TONE_MAPPER_FILMIC";
   local_e8 = 0;
   local_a0 = 0x12;
   String::parse_latin1((StrRange*)&local_e8);
   local_a8 = "Environment::ToneMapper";
   local_c8 = 0;
   local_a0 = 0x17;
   String::parse_latin1((StrRange*)&local_c8);
   godot::details::enum_qualified_name_to_class_info_name((details*)&local_c0, (String*)&local_c8);
   StringName::StringName((StringName*)&local_b8, (String*)&local_c0, false);
   local_d0 = 0;
   local_d8 = 0;
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_a8, 2, (String*)&local_d8, 0, (String*)&local_d0, 0x10006, (String*)&local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d0);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
   local_b8 = (char*)local_98;
   local_98 = 0;
   CowData<char32_t>::_unref(local_88);
   if (( StringName::configured != '\0' ) && ( local_98 != 0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
   local_c0 = 0;
   String::parse_latin1((String*)&local_c0, "Environment");
   StringName::StringName((StringName*)&local_a8, (String*)&local_c0, false);
   ClassDB::bind_integer_constant((StringName*)&local_a8, (StringName*)&local_b8, (StringName*)&local_e0, 2, false);
   if (( StringName::configured != '\0' ) && ( local_a8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   if (( StringName::configured != '\0' ) && ( local_e0 != 0 )) {
      StringName::unref();
   }
   StringName::StringName((StringName*)&local_e0, "TONE_MAPPER_ACES", false);
   local_e8 = 0;
   String::parse_latin1((String*)&local_e8, "TONE_MAPPER_ACES");
   local_a8 = "Environment::ToneMapper";
   local_c8 = 0;
   local_a0 = 0x17;
   String::parse_latin1((StrRange*)&local_c8);
   godot::details::enum_qualified_name_to_class_info_name((details*)&local_c0, (String*)&local_c8);
   StringName::StringName((StringName*)&local_b8, (String*)&local_c0, false);
   local_d0 = 0;
   local_d8 = 0;
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_a8, 2, (String*)&local_d8, 0, (String*)&local_d0, 0x10006, (String*)&local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d0);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
   local_b8 = (char*)local_98;
   local_98 = 0;
   CowData<char32_t>::_unref(local_88);
   if (( StringName::configured != '\0' ) && ( local_98 != 0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
   local_a8 = "Environment";
   local_c0 = 0;
   local_a0 = 0xb;
   String::parse_latin1((StrRange*)&local_c0);
   StringName::StringName((StringName*)&local_a8, (String*)&local_c0, false);
   ClassDB::bind_integer_constant((StringName*)&local_a8, (StringName*)&local_b8, (StringName*)&local_e0, 3, false);
   if (( StringName::configured != '\0' ) && ( local_a8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   if (( StringName::configured != '\0' ) && ( local_e0 != 0 )) {
      StringName::unref();
   }
   StringName::StringName((StringName*)&local_e0, "TONE_MAPPER_AGX", false);
   local_e8 = 0;
   String::parse_latin1((String*)&local_e8, "TONE_MAPPER_AGX");
   local_a8 = "Environment::ToneMapper";
   local_c8 = 0;
   local_a0 = 0x17;
   String::parse_latin1((StrRange*)&local_c8);
   godot::details::enum_qualified_name_to_class_info_name((details*)&local_c0, (String*)&local_c8);
   StringName::StringName((StringName*)&local_b8, (String*)&local_c0, false);
   local_d0 = 0;
   local_d8 = 0;
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_a8, 2, (String*)&local_d8, 0, (String*)&local_d0, 0x10006, (String*)&local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d0);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
   local_b8 = (char*)local_98;
   local_98 = 0;
   CowData<char32_t>::_unref(local_88);
   if (( StringName::configured != '\0' ) && ( local_98 != 0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
   local_c0 = 0;
   String::parse_latin1((String*)&local_c0, "Environment");
   StringName::StringName((StringName*)&local_a8, (String*)&local_c0, false);
   ClassDB::bind_integer_constant((StringName*)&local_a8, (StringName*)&local_b8, (StringName*)&local_e0, 4, false);
   if (( StringName::configured != '\0' ) && ( local_a8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   if (( StringName::configured != '\0' ) && ( local_e0 != 0 )) {
      StringName::unref();
   }
   StringName::StringName((StringName*)&local_e0, "GLOW_BLEND_MODE_ADDITIVE", false);
   local_e8 = 0;
   String::parse_latin1((String*)&local_e8, "GLOW_BLEND_MODE_ADDITIVE");
   local_a8 = "Environment::GlowBlendMode";
   local_c8 = 0;
   local_a0 = 0x1a;
   String::parse_latin1((StrRange*)&local_c8);
   godot::details::enum_qualified_name_to_class_info_name((details*)&local_c0, (String*)&local_c8);
   StringName::StringName((StringName*)&local_b8, (String*)&local_c0, false);
   local_d0 = 0;
   local_d8 = 0;
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_a8, 2, (String*)&local_d8, 0, (String*)&local_d0, 0x10006, (String*)&local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d0);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
   local_b8 = (char*)local_98;
   local_98 = 0;
   CowData<char32_t>::_unref(local_88);
   if (( StringName::configured != '\0' ) && ( local_98 != 0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
   local_c0 = 0;
   String::parse_latin1((String*)&local_c0, "Environment");
   StringName::StringName((StringName*)&local_a8, (String*)&local_c0, false);
   ClassDB::bind_integer_constant((StringName*)&local_a8, (StringName*)&local_b8, (StringName*)&local_e0, 0, false);
   if (( StringName::configured != '\0' ) && ( local_a8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   if (( StringName::configured != '\0' ) && ( local_e0 != 0 )) {
      StringName::unref();
   }
   StringName::StringName((StringName*)&local_e0, "GLOW_BLEND_MODE_SCREEN", false);
   local_e8 = 0;
   String::parse_latin1((String*)&local_e8, "GLOW_BLEND_MODE_SCREEN");
   local_a8 = "Environment::GlowBlendMode";
   local_c8 = 0;
   local_a0 = 0x1a;
   String::parse_latin1((StrRange*)&local_c8);
   godot::details::enum_qualified_name_to_class_info_name((details*)&local_c0, (String*)&local_c8);
   StringName::StringName((StringName*)&local_b8, (String*)&local_c0, false);
   local_d0 = 0;
   local_d8 = 0;
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_a8, 2, (String*)&local_d8, 0, (String*)&local_d0, 0x10006, (String*)&local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d0);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
   local_b8 = (char*)local_98;
   local_98 = 0;
   CowData<char32_t>::_unref(local_88);
   if (( StringName::configured != '\0' ) && ( local_98 != 0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
   local_c0 = 0;
   String::parse_latin1((String*)&local_c0, "Environment");
   StringName::StringName((StringName*)&local_a8, (String*)&local_c0, false);
   ClassDB::bind_integer_constant((StringName*)&local_a8, (StringName*)&local_b8, (StringName*)&local_e0, 1, false);
   if (( StringName::configured != '\0' ) && ( local_a8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   if (( StringName::configured != '\0' ) && ( local_e0 != 0 )) {
      StringName::unref();
   }
   StringName::StringName((StringName*)&local_e0, "GLOW_BLEND_MODE_SOFTLIGHT", false);
   local_e8 = 0;
   String::parse_latin1((String*)&local_e8, "GLOW_BLEND_MODE_SOFTLIGHT");
   local_a8 = "Environment::GlowBlendMode";
   local_c8 = 0;
   local_a0 = 0x1a;
   String::parse_latin1((StrRange*)&local_c8);
   godot::details::enum_qualified_name_to_class_info_name((details*)&local_c0, (String*)&local_c8);
   StringName::StringName((StringName*)&local_b8, (String*)&local_c0, false);
   local_d0 = 0;
   local_d8 = 0;
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_a8, 2, (String*)&local_d8, 0, (String*)&local_d0, 0x10006, (String*)&local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d0);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
   local_b8 = (char*)local_98;
   local_98 = 0;
   CowData<char32_t>::_unref(local_88);
   if (( StringName::configured != '\0' ) && ( local_98 != 0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
   local_c0 = 0;
   String::parse_latin1((String*)&local_c0, "Environment");
   StringName::StringName((StringName*)&local_a8, (String*)&local_c0, false);
   ClassDB::bind_integer_constant((StringName*)&local_a8, (StringName*)&local_b8, (StringName*)&local_e0, 2, false);
   if (( StringName::configured != '\0' ) && ( local_a8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   if (( StringName::configured != '\0' ) && ( local_e0 != 0 )) {
      StringName::unref();
   }
   StringName::StringName((StringName*)&local_e0, "GLOW_BLEND_MODE_REPLACE", false);
   local_e8 = 0;
   String::parse_latin1((String*)&local_e8, "GLOW_BLEND_MODE_REPLACE");
   local_a8 = "Environment::GlowBlendMode";
   local_c8 = 0;
   local_a0 = 0x1a;
   String::parse_latin1((StrRange*)&local_c8);
   godot::details::enum_qualified_name_to_class_info_name((details*)&local_c0, (String*)&local_c8);
   StringName::StringName((StringName*)&local_b8, (String*)&local_c0, false);
   local_d0 = 0;
   local_d8 = 0;
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_a8, 2, (String*)&local_d8, 0, (String*)&local_d0, 0x10006, (String*)&local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d0);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
   local_b8 = (char*)local_98;
   local_98 = 0;
   CowData<char32_t>::_unref(local_88);
   if (( StringName::configured != '\0' ) && ( local_98 != 0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
   local_c0 = 0;
   String::parse_latin1((String*)&local_c0, "Environment");
   StringName::StringName((StringName*)&local_a8, (String*)&local_c0, false);
   ClassDB::bind_integer_constant((StringName*)&local_a8, (StringName*)&local_b8, (StringName*)&local_e0, 3, false);
   if (( StringName::configured != '\0' ) && ( local_a8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   if (( StringName::configured != '\0' ) && ( local_e0 != 0 )) {
      StringName::unref();
   }
   StringName::StringName((StringName*)&local_e0, "GLOW_BLEND_MODE_MIX", false);
   local_e8 = 0;
   String::parse_latin1((String*)&local_e8, "GLOW_BLEND_MODE_MIX");
   local_a8 = "Environment::GlowBlendMode";
   local_c8 = 0;
   local_a0 = 0x1a;
   String::parse_latin1((StrRange*)&local_c8);
   godot::details::enum_qualified_name_to_class_info_name((details*)&local_c0, (String*)&local_c8);
   StringName::StringName((StringName*)&local_b8, (String*)&local_c0, false);
   local_d0 = 0;
   local_d8 = 0;
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_a8, 2, (String*)&local_d8, 0, (String*)&local_d0, 0x10006, (String*)&local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d0);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
   local_b8 = (char*)local_98;
   local_98 = 0;
   CowData<char32_t>::_unref(local_88);
   if (( StringName::configured != '\0' ) && ( local_98 != 0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
   local_c0 = 0;
   String::parse_latin1((String*)&local_c0, "Environment");
   StringName::StringName((StringName*)&local_a8, (String*)&local_c0, false);
   ClassDB::bind_integer_constant((StringName*)&local_a8, (StringName*)&local_b8, (StringName*)&local_e0, 4, false);
   if (( StringName::configured != '\0' ) && ( local_a8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   if (( StringName::configured != '\0' ) && ( local_e0 != 0 )) {
      StringName::unref();
   }
   StringName::StringName((StringName*)&local_b8, "FOG_MODE_EXPONENTIAL", false);
   local_c8 = 0;
   String::parse_latin1((String*)&local_c8, "FOG_MODE_EXPONENTIAL");
   GetTypeInfo<Environment::FogMode,void>::get_class_info((GetTypeInfo<Environment::FogMode,void>*)&local_a8);
   local_c0 = local_98;
   local_98 = 0;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_a8);
   local_d0 = 0;
   String::parse_latin1((String*)&local_d0, "Environment");
   StringName::StringName((StringName*)&local_a8, (String*)&local_d0, false);
   ClassDB::bind_integer_constant((StringName*)&local_a8, (StringName*)&local_c0, (StringName*)&local_b8, 0, false);
   if (( StringName::configured != '\0' ) && ( local_a8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d0);
   if (( StringName::configured != '\0' ) && ( local_c0 != 0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }
   StringName::StringName((StringName*)&local_b8, "FOG_MODE_DEPTH", false);
   local_c8 = 0;
   String::parse_latin1((String*)&local_c8, "FOG_MODE_DEPTH");
   GetTypeInfo<Environment::FogMode,void>::get_class_info((GetTypeInfo<Environment::FogMode,void>*)&local_a8);
   local_c0 = local_98;
   local_98 = 0;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_a8);
   local_d0 = 0;
   String::parse_latin1((String*)&local_d0, "Environment");
   StringName::StringName((StringName*)&local_a8, (String*)&local_d0, false);
   ClassDB::bind_integer_constant((StringName*)&local_a8, (StringName*)&local_c0, (StringName*)&local_b8, 1, false);
   if (( StringName::configured != '\0' ) && ( local_a8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d0);
   if (( StringName::configured != '\0' ) && ( local_c0 != 0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }
   StringName::StringName((StringName*)&local_b8, "SDFGI_Y_SCALE_50_PERCENT", false);
   local_c8 = 0;
   String::parse_latin1((String*)&local_c8, "SDFGI_Y_SCALE_50_PERCENT");
   GetTypeInfo<Environment::SDFGIYScale,void>::get_class_info((GetTypeInfo<Environment::SDFGIYScale,void>*)&local_a8);
   local_c0 = local_98;
   local_98 = 0;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_a8);
   local_d0 = 0;
   String::parse_latin1((String*)&local_d0, "Environment");
   StringName::StringName((StringName*)&local_a8, (String*)&local_d0, false);
   ClassDB::bind_integer_constant((StringName*)&local_a8, (StringName*)&local_c0, (StringName*)&local_b8, 0, false);
   if (( StringName::configured != '\0' ) && ( local_a8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d0);
   if (( StringName::configured != '\0' ) && ( local_c0 != 0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }
   StringName::StringName((StringName*)&local_b8, "SDFGI_Y_SCALE_75_PERCENT", false);
   local_c8 = 0;
   String::parse_latin1((String*)&local_c8, "SDFGI_Y_SCALE_75_PERCENT");
   GetTypeInfo<Environment::SDFGIYScale,void>::get_class_info((GetTypeInfo<Environment::SDFGIYScale,void>*)&local_a8);
   local_c0 = local_98;
   local_98 = 0;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_a8);
   local_d0 = 0;
   String::parse_latin1((String*)&local_d0, "Environment");
   StringName::StringName((StringName*)&local_a8, (String*)&local_d0, false);
   ClassDB::bind_integer_constant((StringName*)&local_a8, (StringName*)&local_c0, (StringName*)&local_b8, 1, false);
   if (( StringName::configured != '\0' ) && ( local_a8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d0);
   if (( StringName::configured != '\0' ) && ( local_c0 != 0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }
   StringName::StringName((StringName*)&local_b8, "SDFGI_Y_SCALE_100_PERCENT", false);
   local_c8 = 0;
   String::parse_latin1((String*)&local_c8, "SDFGI_Y_SCALE_100_PERCENT");
   GetTypeInfo<Environment::SDFGIYScale,void>::get_class_info((GetTypeInfo<Environment::SDFGIYScale,void>*)&local_a8);
   local_c0 = local_98;
   local_98 = 0;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_a8);
   local_d0 = 0;
   String::parse_latin1((String*)&local_d0, "Environment");
   StringName::StringName((StringName*)&local_a8, (String*)&local_d0, false);
   ClassDB::bind_integer_constant((StringName*)&local_a8, (StringName*)&local_c0, (StringName*)&local_b8, 2, false);
   if (( StringName::configured != '\0' ) && ( local_a8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d0);
   if (( StringName::configured != '\0' ) && ( local_c0 != 0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* Error CowData<float>::resize<false>(long) [clone .isra.0] */void CowData<float>::resize<false>(CowData<float> *this, long param_1) {
   long *plVar1;
   long lVar2;
   int iVar3;
   CowData<float> *pCVar4;
   ulong uVar5;
   undefined8 *puVar6;
   char *pcVar7;
   undefined8 *puVar8;
   undefined8 uVar9;
   CowData<float> *pCVar10;
   CowData<float> *pCVar11;
   long lVar12;
   if (param_1 < 0) {
      _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      return;
   }
   lVar2 = *(long*)this;
   if (lVar2 == 0) {
      if (param_1 == 0) {
         return;
      }
      _copy_on_write(this);
      lVar12 = 0;
      pCVar4 = (CowData<float>*)0x0;
   } else {
      lVar12 = *(long*)( lVar2 + -8 );
      if (param_1 == lVar12) {
         return;
      }
      if (param_1 == 0) {
         LOCK();
         plVar1 = (long*)( lVar2 + -0x10 );
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
      _copy_on_write(this);
      pCVar4 = (CowData<float>*)( lVar12 * 4 );
      if (pCVar4 != (CowData<float>*)0x0) {
         uVar5 = ( ulong )(pCVar4 + -1) | ( ulong )(pCVar4 + -1) >> 1;
         uVar5 = uVar5 | uVar5 >> 2;
         uVar5 = uVar5 | uVar5 >> 4;
         uVar5 = uVar5 | uVar5 >> 8;
         uVar5 = uVar5 | uVar5 >> 0x10;
         pCVar4 = (CowData<float>*)( ( uVar5 | uVar5 >> 0x20 ) + 1 );
      }
   }
   if (param_1 * 4 != 0) {
      uVar5 = param_1 * 4 - 1;
      uVar5 = uVar5 | uVar5 >> 1;
      uVar5 = uVar5 | uVar5 >> 2;
      uVar5 = uVar5 | uVar5 >> 4;
      uVar5 = uVar5 | uVar5 >> 8;
      uVar5 = uVar5 | uVar5 >> 0x10;
      pCVar11 = (CowData<float>*)( uVar5 | uVar5 >> 0x20 );
      pCVar10 = pCVar11 + 1;
      if (pCVar10 != (CowData<float>*)0x0) {
         if (param_1 <= lVar12) {
            if (( pCVar10 != pCVar4 ) && ( iVar3 = iVar3 != 0 )) {
               return;
            }
            if (*(long*)this != 0) {
               *(long*)( *(long*)this + -8 ) = param_1;
               return;
            }
            FUN_00115340();
            return;
         }
         if (pCVar10 != pCVar4) {
            if (lVar12 == 0) {
               puVar6 = (undefined8*)Memory::alloc_static(( ulong )(pCVar11 + 0x11), false);
               if (puVar6 != (undefined8*)0x0) {
                  puVar8 = puVar6 + 2;
                  *puVar6 = 1;
                  puVar6[1] = 0;
                  *(undefined8**)this = puVar8;
                  goto LAB_00110fc1;
               }
               uVar9 = 0x171;
               pcVar7 = "Parameter \"mem_new\" is null.";
               goto LAB_001110b2;
            }
            pCVar11 = this;
            iVar3 = _realloc(this, (long)pCVar10);
            if (iVar3 != 0) {
               return;
            }
         }
         puVar8 = *(undefined8**)this;
         if (puVar8 == (undefined8*)0x0) {
            resize<false>((long)pCVar11);
            return;
         }
         LAB_00110fc1:puVar8[-1] = param_1;
         return;
      }
   }
   uVar9 = 0x16a;
   pcVar7 = "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY";
   LAB_001110b2:_err_print_error("resize", "./core/templates/cowdata.h", uVar9, pcVar7, 0, 0);
   return;
}/* Environment::_update_glow() */void Environment::_update_glow(Environment *this) {
   long *plVar1;
   undefined4 uVar2;
   float fVar3;
   undefined4 uVar4;
   code *pcVar5;
   long lVar6;
   undefined8 uVar7;
   long *plVar8;
   float *pfVar9;
   ulong uVar10;
   float *pfVar11;
   float *pfVar12;
   long lVar13;
   long lVar14;
   long in_FS_OFFSET;
   bool bVar15;
   float fVar16;
   long local_50;
   undefined1 local_48[8];
   long local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   if (this[0x340] == (Environment)0x0) {
      lVar14 = *(long*)( this + 0x338 );
      if (lVar14 != 0) {
         plVar1 = (long*)( lVar14 + -0x10 );
         do {
            lVar13 = *plVar1;
            lVar14 = local_50;
            if (lVar13 == 0) goto LAB_00111167;
            LOCK();
            lVar6 = *plVar1;
            bVar15 = lVar13 == lVar6;
            if (bVar15) {
               *plVar1 = lVar13 + 1;
               lVar6 = lVar13;
            }
            UNLOCK();
         } while ( !bVar15 );
         if (lVar6 != -1) {
            local_50 = *(long*)( this + 0x338 );
            lVar14 = local_50;
         }
      }
   } else {
      CowData<float>::resize<false>((CowData<float>*)&local_50, 7);
      pfVar9 = *(float**)( this + 0x338 );
      lVar14 = local_50;
      if (pfVar9 != (float*)0x0) {
         uVar10 = *(ulong*)( pfVar9 + -2 );
         if ((long)uVar10 < 1) {
            fVar16 = 0.0;
         } else {
            fVar16 = 0.0;
            pfVar11 = pfVar9;
            if (( uVar10 & 1 ) != 0) {
               pfVar11 = pfVar9 + 1;
               fVar16 = *pfVar9 + 0.0;
               if (pfVar9 + uVar10 == pfVar11) goto LAB_00111342;
            }
            do {
               pfVar12 = pfVar11 + 2;
               fVar16 = fVar16 + *pfVar11 + pfVar11[1];
               pfVar11 = pfVar12;
            } while ( pfVar9 + uVar10 != pfVar12 );
         }
         LAB_00111342:lVar13 = 0;
         while (lVar14 = local_50,lVar13 < (long)uVar10) {
            fVar3 = pfVar9[lVar13];
            lVar14 = lVar13 * 4;
            if (local_50 == 0) {
               lVar6 = 0;
               LAB_001113bd:_err_print_index_error("operator[]", "./core/templates/vector.h", 0x38, lVar13, lVar6, "p_index", "((Vector<T> *)(this))->_cowdata.size()", "", false, true);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar5 = (code*)invalidInstructionException();
               ( *pcVar5 )();
            }
            lVar6 = *(long*)( local_50 + -8 );
            if (lVar6 <= lVar13) goto LAB_001113bd;
            lVar13 = lVar13 + 1;
            CowData<float>::_copy_on_write((CowData<float>*)&local_50);
            pfVar9 = *(float**)( this + 0x338 );
            *(float*)( local_50 + lVar14 ) = fVar3 / fVar16;
            lVar14 = local_50;
            if (pfVar9 == (float*)0x0) break;
            uVar10 = *(ulong*)( pfVar9 + -2 );
         };
      }
   }
   LAB_00111167:uVar7 = 0;
   if (*(long**)( this + 0x368 ) != (long*)0x0) {
      uVar7 = ( **(code**)( **(long**)( this + 0x368 ) + 0x1c0 ) )();
   }
   plVar8 = (long*)RenderingServer::get_singleton();
   local_40 = 0;
   uVar4 = *(undefined4*)( this + 0x354 );
   plVar1 = (long*)( lVar14 + -0x10 );
   pcVar5 = *(code**)( *plVar8 + 0xc00 );
   uVar2 = *(undefined4*)( this + 0x344 );
   if (lVar14 != 0) {
      do {
         lVar14 = *plVar1;
         if (lVar14 == 0) goto LAB_00111220;
         LOCK();
         lVar13 = *plVar1;
         bVar15 = lVar14 == lVar13;
         if (bVar15) {
            *plVar1 = lVar14 + 1;
            lVar13 = lVar14;
         }
         UNLOCK();
      } while ( !bVar15 );
      if (lVar13 != -1) {
         local_40 = local_50;
      }
   }
   LAB_00111220:( *pcVar5 )(uVar2, plVar8, *(undefined8*)( this + 0x240 ), this[0x328], local_48, uVar4, uVar7);
   lVar14 = local_40;
   if (local_40 != 0) {
      LOCK();
      plVar1 = (long*)( local_40 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_40 = 0;
         Memory::free_static((void*)( lVar14 + -0x10 ), false);
      }
   }
   if (local_50 != 0) {
      LOCK();
      plVar1 = (long*)( local_50 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            Memory::free_static((void*)( local_50 + -0x10 ), false);
            return;
         }
         goto LAB_00111407;
      }
   }
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   LAB_00111407:/* WARNING: Subroutine does not return */__stack_chk_fail();
}/* Environment::set_glow_enabled(bool) */void Environment::set_glow_enabled(Environment *this, bool param_1) {
   this[0x328] = (Environment)param_1;
   _update_glow(this);
   Object::notify_property_list_changed();
   return;
}/* Environment::set_glow_level(int, float) */void Environment::set_glow_level(Environment *this, int param_1, float param_2) {
   code *pcVar1;
   long lVar2;
   long lVar3;
   lVar2 = (long)param_1;
   if (6 < (uint)param_1) {
      _err_print_index_error("set_glow_level", "scene/resources/environment.cpp", 600, lVar2, 7, "p_level", "RenderingServer::MAX_GLOW_LEVELS", "", false, false);
      return;
   }
   if (*(long*)( this + 0x338 ) == 0) {
      lVar3 = 0;
   } else {
      lVar3 = *(long*)( *(long*)( this + 0x338 ) + -8 );
      if (lVar2 < lVar3) {
         CowData<float>::_copy_on_write((CowData<float>*)( this + 0x338 ));
         *(float*)( *(long*)( this + 0x338 ) + lVar2 * 4 ) = param_2;
         _update_glow(this);
         return;
      }
   }
   _err_print_index_error("operator[]", "./core/templates/vector.h", 0x38, lVar2, lVar3, "p_index", "((Vector<T> *)(this))->_cowdata.size()", "", false, true);
   _err_flush_stdout();
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}/* Environment::set_glow_normalized(bool) */void Environment::set_glow_normalized(Environment *this, bool param_1) {
   this[0x340] = (Environment)param_1;
   _update_glow(this);
   return;
}/* Environment::set_glow_intensity(float) */void Environment::set_glow_intensity(Environment *this, float param_1) {
   *(float*)( this + 0x344 ) = param_1;
   _update_glow(this);
   return;
}/* Environment::set_glow_strength(float) */void Environment::set_glow_strength(Environment *this, float param_1) {
   *(float*)( this + 0x348 ) = param_1;
   _update_glow(this);
   return;
}/* Environment::set_glow_mix(float) */void Environment::set_glow_mix(Environment *this, float param_1) {
   *(float*)( this + 0x34c ) = param_1;
   _update_glow(this);
   return;
}/* Environment::set_glow_bloom(float) */void Environment::set_glow_bloom(Environment *this, float param_1) {
   *(float*)( this + 0x350 ) = param_1;
   _update_glow(this);
   return;
}/* Environment::set_glow_blend_mode(Environment::GlowBlendMode) */void Environment::set_glow_blend_mode(Environment *this, undefined4 param_2) {
   *(undefined4*)( this + 0x354 ) = param_2;
   _update_glow(this);
   Object::notify_property_list_changed();
   return;
}/* Environment::set_glow_hdr_bleed_threshold(float) */void Environment::set_glow_hdr_bleed_threshold(Environment *this, float param_1) {
   *(float*)( this + 0x358 ) = param_1;
   _update_glow(this);
   return;
}/* Environment::set_glow_hdr_bleed_scale(float) */void Environment::set_glow_hdr_bleed_scale(Environment *this, float param_1) {
   *(float*)( this + 0x35c ) = param_1;
   _update_glow(this);
   return;
}/* Environment::set_glow_hdr_luminance_cap(float) */void Environment::set_glow_hdr_luminance_cap(Environment *this, float param_1) {
   *(float*)( this + 0x360 ) = param_1;
   _update_glow(this);
   return;
}/* Environment::set_glow_map_strength(float) */void Environment::set_glow_map_strength(Environment *this, float param_1) {
   *(float*)( this + 0x364 ) = param_1;
   _update_glow(this);
   return;
}/* Environment::set_glow_map(Ref<Texture>) */void Environment::set_glow_map(Environment *this, long *param_2) {
   Object *pOVar1;
   Object *pOVar2;
   char cVar3;
   pOVar1 = (Object*)*param_2;
   pOVar2 = *(Object**)( this + 0x368 );
   if (pOVar1 != pOVar2) {
      *(Object**)( this + 0x368 ) = pOVar1;
      if (pOVar1 != (Object*)0x0) {
         cVar3 = RefCounted::reference();
         if (cVar3 == '\0') {
            *(undefined8*)( this + 0x368 ) = 0;
         }
      }
      if (pOVar2 != (Object*)0x0) {
         cVar3 = RefCounted::unreference();
         if (cVar3 != '\0') {
            cVar3 = predelete_handler(pOVar2);
            if (cVar3 != '\0') {
               ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
               Memory::free_static(pOVar2, false);
            }
         }
      }
   }
   _update_glow(this);
   return;
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Environment::Environment() */void Environment::Environment(Environment *this) {
   CowData<float> *this_00;
   code *pcVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   long *plVar5;
   undefined8 uVar6;
   long lVar7;
   long lVar8;
   this_00 = (CowData<float>*)( this + 0x338 );
   Resource::Resource((Resource*)this);
   uVar2 = _LC504;
   uVar6 = __LC501;
   *(undefined***)this = &PTR__initialize_classv_0012dd50;
   uVar4 = _LC502;
   *(undefined8*)( this + 0x268 ) = uVar6;
   *(undefined8*)( this + 0x270 ) = uVar2;
   uVar3 = _UNK_0012ec38;
   uVar2 = __LC503;
   *(undefined8*)( this + 0x278 ) = uVar4;
   uVar6 = _LC504;
   *(undefined8*)( this + 0x280 ) = uVar2;
   *(undefined8*)( this + 0x288 ) = uVar3;
   uVar3 = _UNK_0012ec48;
   uVar2 = __LC506;
   *(undefined8*)( this + 0x290 ) = uVar6;
   uVar4 = _LC505;
   *(undefined8*)( this + 0x2cc ) = uVar2;
   *(undefined8*)( this + 0x2d4 ) = uVar3;
   uVar2 = _UNK_0012ec58;
   uVar6 = __LC507;
   *(undefined8*)( this + 0x2b8 ) = 0x3e19999a00000040;
   *(undefined8*)( this + 0x2dc ) = uVar6;
   *(undefined8*)( this + 0x2e4 ) = uVar2;
   uVar2 = _UNK_0012ec68;
   uVar6 = __LC508;
   *(undefined8*)( this + 0x29c ) = uVar4;
   *(undefined8*)( this + 0x2ac ) = uVar4;
   *(undefined8*)( this + 0x2c0 ) = 0x3e4ccccd40000000;
   *(undefined8*)( this + 0x2f0 ) = uVar6;
   *(undefined8*)( this + 0x2f8 ) = uVar2;
   *(undefined8*)( this + 0x240 ) = 0;
   *(undefined4*)( this + 0x248 ) = 0;
   *(undefined8*)( this + 0x250 ) = 0;
   *(undefined4*)( this + 600 ) = 0;
   *(undefined8*)( this + 0x25c ) = 0;
   *(undefined4*)( this + 0x264 ) = 0;
   *(undefined4*)( this + 0x298 ) = 0;
   *(undefined8*)( this + 0x2a4 ) = 0;
   this[0x2b4] = (Environment)0x0;
   this[0x2c8] = (Environment)0x0;
   this[0x2ec] = (Environment)0x0;
   this[0x300] = (Environment)0x0;
   *(undefined4*)( this + 0x304 ) = 4;
   uVar3 = _LC509;
   uVar2 = _UNK_0012ec78;
   uVar6 = __LC511;
   *(undefined8*)( this + 0x308 ) = 0x13e4ccccd;
   *(undefined8*)( this + 0x344 ) = uVar6;
   *(undefined8*)( this + 0x34c ) = uVar2;
   uVar2 = _UNK_0012ec88;
   uVar6 = __LC512;
   *(undefined8*)( this + 0x31c ) = uVar3;
   uVar3 = _LC516;
   *(undefined8*)( this + 0x358 ) = uVar6;
   *(undefined8*)( this + 0x360 ) = uVar2;
   uVar2 = _UNK_0012ec98;
   uVar6 = __LC513;
   *(undefined8*)( this + 0x3a8 ) = uVar3;
   *(undefined8*)( this + 0x378 ) = uVar6;
   *(undefined8*)( this + 0x380 ) = uVar2;
   uVar2 = _UNK_0012eca8;
   uVar6 = __LC514;
   this[0x310] = (Environment)0x0;
   *(undefined8*)( this + 0x388 ) = uVar6;
   *(undefined8*)( this + 0x390 ) = uVar2;
   uVar2 = _LC505;
   uVar6 = __LC515;
   *(undefined4*)( this + 0x314 ) = 0x3f000000;
   *(undefined8*)( this + 0x398 ) = uVar6;
   *(undefined8*)( this + 0x3a0 ) = uVar2;
   uVar2 = _UNK_0012ecc8;
   uVar6 = __LC517;
   this[0x318] = (Environment)0x1;
   *(undefined8*)( this + 0x3b4 ) = uVar6;
   *(undefined8*)( this + 0x3bc ) = uVar2;
   *(undefined1(*) [16])( this + 0x3c4 ) = ZEXT416(_LC2);
   uVar2 = _UNK_0012ecd8;
   uVar6 = __LC518;
   *(undefined4*)( this + 0x324 ) = 0x3f8ccccd;
   this[0x328] = (Environment)0x0;
   *(undefined8*)( this + 0x338 ) = 0;
   this[0x340] = (Environment)0x0;
   *(undefined4*)( this + 0x354 ) = 2;
   *(undefined8*)( this + 0x368 ) = 0;
   this[0x370] = (Environment)0x0;
   *(undefined4*)( this + 0x374 ) = 0;
   this[0x3b0] = (Environment)0x0;
   *(undefined8*)( this + 0x3d4 ) = uVar6;
   *(undefined8*)( this + 0x3dc ) = uVar2;
   uVar2 = _UNK_0012ece8;
   uVar6 = __LC519;
   this[0x3f4] = (Environment)0x1;
   *(undefined4*)( this + 0x3f8 ) = 0x3f666666;
   this[0x3fc] = (Environment)0x0;
   *(undefined8*)( this + 0x400 ) = uVar4;
   *(undefined4*)( this + 0x408 ) = 0x3f800000;
   this[0x40c] = (Environment)0x1;
   *(undefined8*)( this + 0x410 ) = 0;
   *(undefined8*)( this + 0x3e4 ) = uVar6;
   *(undefined8*)( this + 0x3ec ) = uVar2;
   plVar5 = (long*)RenderingServer::get_singleton();
   uVar6 = ( **(code**)( *plVar5 + 0xbb0 ) )(plVar5);
   *(undefined8*)( this + 0x240 ) = uVar6;
   plVar5 = (long*)RenderingServer::get_singleton();
   ( **(code**)( *plVar5 + 0xbf8 ) )(plVar5, *(undefined8*)( this + 0x240 ), *(undefined4*)( this + 0x27c ));
   CowData<float>::resize<false>(this_00, 7);
   if (*(long*)( this + 0x338 ) == 0) {
      lVar8 = 0;
   } else {
      lVar8 = *(long*)( *(long*)( this + 0x338 ) + -8 );
      if (0 < lVar8) {
         CowData<float>::_copy_on_write(this_00);
         lVar8 = *(long*)( *(undefined4**)( this + 0x338 ) + -2 );
         **(undefined4**)( this + 0x338 ) = 0;
         if (lVar8 < 2) {
            lVar7 = 1;
         } else {
            CowData<float>::_copy_on_write(this_00);
            lVar8 = *(long*)( *(long*)( this + 0x338 ) + -8 );
            *(undefined4*)( *(long*)( this + 0x338 ) + 4 ) = 0;
            if (lVar8 < 3) {
               lVar7 = 2;
            } else {
               CowData<float>::_copy_on_write(this_00);
               lVar8 = *(long*)( *(long*)( this + 0x338 ) + -8 );
               *(undefined4*)( *(long*)( this + 0x338 ) + 8 ) = 0x3f800000;
               if (lVar8 < 4) {
                  lVar7 = 3;
               } else {
                  CowData<float>::_copy_on_write(this_00);
                  lVar8 = *(long*)( *(long*)( this + 0x338 ) + -8 );
                  *(undefined4*)( *(long*)( this + 0x338 ) + 0xc ) = 0;
                  if (lVar8 < 5) {
                     lVar7 = 4;
                  } else {
                     CowData<float>::_copy_on_write(this_00);
                     lVar8 = *(long*)( *(long*)( this + 0x338 ) + -8 );
                     *(undefined4*)( *(long*)( this + 0x338 ) + 0x10 ) = 0x3f800000;
                     if (lVar8 < 6) {
                        lVar7 = 5;
                     } else {
                        CowData<float>::_copy_on_write(this_00);
                        lVar8 = *(long*)( *(long*)( this + 0x338 ) + -8 );
                        *(undefined4*)( *(long*)( this + 0x338 ) + 0x14 ) = 0;
                        if (6 < lVar8) {
                           CowData<float>::_copy_on_write(this_00);
                           *(undefined4*)( *(long*)( this + 0x338 ) + 0x18 ) = 0;
                           plVar5 = (long*)RenderingServer::get_singleton();
                           ( **(code**)( *plVar5 + 0xbf0 ) )(*(undefined4*)( this + 0x29c ), *(undefined4*)( this + 0x2a0 ), plVar5, *(undefined8*)( this + 0x240 ), this + 0x288, *(undefined4*)( this + 0x298 ), *(undefined4*)( this + 0x2a4 ));
                           plVar5 = (long*)RenderingServer::get_singleton();
                           ( **(code**)( *plVar5 + 0xc10 ) )(*(undefined4*)( this + 0x2ac ), *(undefined4*)( this + 0x2b0 ), plVar5, *(undefined8*)( this + 0x240 ), *(undefined4*)( this + 0x2a8 ));
                           _update_ssr(this);
                           _update_ssao(this);
                           _update_ssil(this);
                           _update_sdfgi(this);
                           _update_glow(this);
                           _update_fog(this);
                           _update_adjustment(this);
                           _update_volumetric_fog(this);
                           _update_bg_energy(this);
                           Object::notify_property_list_changed();
                           return;
                        }
                        lVar7 = 6;
                     }
                  }
               }
            }
         }
         goto LAB_00111ba0;
      }
   }
   lVar7 = 0;
   LAB_00111ba0:_err_print_index_error("operator[]", "./core/templates/vector.h", 0x38, lVar7, lVar8, "p_index", "((Vector<T> *)(this))->_cowdata.size()", "", false, true);
   _err_flush_stdout();
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}/* DefaultAllocator::alloc(unsigned long) */void DefaultAllocator::alloc(ulong param_1) {
   Memory::alloc_static(param_1, false);
   return;
}/* StringName::~StringName() */void StringName::~StringName(StringName *this) {
   if (( configured != '\0' ) && ( *(long*)this != 0 )) {
      StringName::unref();
      return;
   }
   return;
}/* Object::get_save_class() const */void Object::get_save_class(void) {
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
}/* MethodBind::is_valid() const */undefined8 MethodBind::is_valid(void) {
   return 1;
}/* MethodBind::is_vararg() const */undefined8 MethodBind::is_vararg(void) {
   return 0;
}/* Resource::set_last_modified_time(unsigned long) */void Resource::set_last_modified_time(Resource *this, ulong param_1) {
   *(ulong*)( this + 0x198 ) = param_1;
   return;
}/* Resource::set_import_last_modified_time(unsigned long) */void Resource::set_import_last_modified_time(Resource *this, ulong param_1) {
   *(ulong*)( this + 0x1a0 ) = param_1;
   return;
}/* Environment::is_class_ptr(void*) const */uint Environment::is_class_ptr(Environment *this, void *param_1) {
   return (uint)CONCAT71(0x12eb, (undefined4*)param_1 == &Resource::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x12eb, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x12eb, (undefined4*)param_1 == &RefCounted::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x12eb, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr);
}/* Environment::_getv(StringName const&, Variant&) const */undefined8 Environment::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}/* Environment::_property_can_revertv(StringName const&) const */undefined8 Environment::_property_can_revertv(StringName *param_1) {
   return 0;
}/* Environment::_property_get_revertv(StringName const&, Variant&) const */undefined8 Environment::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}/* Environment::_notificationv(int, bool) */void Environment::_notificationv(int param_1, bool param_2) {
   return;
}/* CallableCustomMethodPointer<Environment, void>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<Environment,void>::~CallableCustomMethodPointer(CallableCustomMethodPointer<Environment,void> *this) {
   return;
}/* MethodBindT<Color>::_gen_argument_type(int) const */byte MethodBindT<Color>::_gen_argument_type(MethodBindT<Color> *this, int param_1) {
   return -(param_1 == 0) & 0x14;
}/* MethodBindT<Color>::get_argument_meta(int) const */undefined8 MethodBindT<Color>::get_argument_meta(int param_1) {
   return 0;
}/* MethodBindTRC<Environment::FogMode>::_gen_argument_type(int) const */undefined8 MethodBindTRC<Environment::FogMode>::_gen_argument_type(int param_1) {
   return 2;
}/* MethodBindTRC<Environment::FogMode>::get_argument_meta(int) const */undefined8 MethodBindTRC<Environment::FogMode>::get_argument_meta(int param_1) {
   return 0;
}/* MethodBindT<Environment::FogMode>::_gen_argument_type(int) const */char MethodBindT<Environment::FogMode>::_gen_argument_type(MethodBindT<Environment::FogMode> *this, int param_1) {
   return ( param_1 == 0 ) * '\x02';
}/* MethodBindT<Environment::FogMode>::get_argument_meta(int) const */undefined8 MethodBindT<Environment::FogMode>::get_argument_meta(int param_1) {
   return 0;
}/* MethodBindTRC<Ref<Texture>>::_gen_argument_type(int) const */undefined8 MethodBindTRC<Ref<Texture>>::_gen_argument_type(int param_1) {
   return 0x18;
}/* MethodBindTRC<Ref<Texture>>::get_argument_meta(int) const */undefined8 MethodBindTRC<Ref<Texture>>::get_argument_meta(int param_1) {
   return 0;
}/* MethodBindT<Ref<Texture> >::_gen_argument_type(int) const */byte MethodBindT<Ref<Texture>>::_gen_argument_type(MethodBindT<Ref<Texture>> *this, int param_1) {
   return -(param_1 == 0) & 0x18;
}/* MethodBindT<Ref<Texture> >::get_argument_meta(int) const */undefined8 MethodBindT<Ref<Texture>>::get_argument_meta(int param_1) {
   return 0;
}/* MethodBindTRC<Environment::GlowBlendMode>::_gen_argument_type(int) const */undefined8 MethodBindTRC<Environment::GlowBlendMode>::_gen_argument_type(int param_1) {
   return 2;
}/* MethodBindTRC<Environment::GlowBlendMode>::get_argument_meta(int) const */undefined8 MethodBindTRC<Environment::GlowBlendMode>::get_argument_meta(int param_1) {
   return 0;
}/* MethodBindT<Environment::GlowBlendMode>::_gen_argument_type(int) const */char MethodBindT<Environment::GlowBlendMode>::_gen_argument_type(MethodBindT<Environment::GlowBlendMode> *this, int param_1) {
   return ( param_1 == 0 ) * '\x02';
}/* MethodBindT<Environment::GlowBlendMode>::get_argument_meta(int) const */undefined8 MethodBindT<Environment::GlowBlendMode>::get_argument_meta(int param_1) {
   return 0;
}/* MethodBindTRC<float, int>::_gen_argument_type(int) const */int MethodBindTRC<float,int>::_gen_argument_type(MethodBindTRC<float,int> *this, int param_1) {
   return 3 - ( uint )(param_1 == 0);
}/* MethodBindTRC<float, int>::get_argument_meta(int) const */byte MethodBindTRC<float,int>::get_argument_meta(MethodBindTRC<float,int> *this, int param_1) {
   if (-1 < param_1) {
      return -(param_1 == 0) & 3;
   }
   return 9;
}/* MethodBindT<int, float>::_gen_argument_type(int) const */int MethodBindT<int,float>::_gen_argument_type(MethodBindT<int,float> *this, int param_1) {
   int iVar1;
   iVar1 = 3 - ( uint )(param_1 == 0);
   if (1 < (uint)param_1) {
      iVar1 = 0;
   }
   return iVar1;
}/* MethodBindT<int, float>::get_argument_meta(int) const */char MethodBindT<int,float>::get_argument_meta(MethodBindT<int,float> *this, int param_1) {
   char cVar1;
   cVar1 = '\x03';
   if (param_1 != 0) {
      cVar1 = ( param_1 == 1 ) * '\t';
   }
   return cVar1;
}/* MethodBindTRC<Environment::SDFGIYScale>::_gen_argument_type(int) const */undefined8 MethodBindTRC<Environment::SDFGIYScale>::_gen_argument_type(int param_1) {
   return 2;
}/* MethodBindTRC<Environment::SDFGIYScale>::get_argument_meta(int) const */undefined8 MethodBindTRC<Environment::SDFGIYScale>::get_argument_meta(int param_1) {
   return 0;
}/* MethodBindT<Environment::SDFGIYScale>::_gen_argument_type(int) const */char MethodBindT<Environment::SDFGIYScale>::_gen_argument_type(MethodBindT<Environment::SDFGIYScale> *this, int param_1) {
   return ( param_1 == 0 ) * '\x02';
}/* MethodBindT<Environment::SDFGIYScale>::get_argument_meta(int) const */undefined8 MethodBindT<Environment::SDFGIYScale>::get_argument_meta(int param_1) {
   return 0;
}/* MethodBindTRC<bool>::_gen_argument_type(int) const */undefined8 MethodBindTRC<bool>::_gen_argument_type(int param_1) {
   return 1;
}/* MethodBindTRC<bool>::get_argument_meta(int) const */undefined8 MethodBindTRC<bool>::get_argument_meta(int param_1) {
   return 0;
}/* MethodBindT<bool>::_gen_argument_type(int) const */bool MethodBindT<bool>::_gen_argument_type(MethodBindT<bool> *this, int param_1) {
   return param_1 == 0;
}/* MethodBindT<bool>::get_argument_meta(int) const */undefined8 MethodBindT<bool>::get_argument_meta(int param_1) {
   return 0;
}/* MethodBindTRC<Environment::ToneMapper>::_gen_argument_type(int) const */undefined8 MethodBindTRC<Environment::ToneMapper>::_gen_argument_type(int param_1) {
   return 2;
}/* MethodBindTRC<Environment::ToneMapper>::get_argument_meta(int) const */undefined8 MethodBindTRC<Environment::ToneMapper>::get_argument_meta(int param_1) {
   return 0;
}/* MethodBindT<Environment::ToneMapper>::_gen_argument_type(int) const */char MethodBindT<Environment::ToneMapper>::_gen_argument_type(MethodBindT<Environment::ToneMapper> *this, int param_1) {
   return ( param_1 == 0 ) * '\x02';
}/* MethodBindT<Environment::ToneMapper>::get_argument_meta(int) const */undefined8 MethodBindT<Environment::ToneMapper>::get_argument_meta(int param_1) {
   return 0;
}/* MethodBindTRC<Environment::ReflectionSource>::_gen_argument_type(int) const */undefined8 MethodBindTRC<Environment::ReflectionSource>::_gen_argument_type(int param_1) {
   return 2;
}/* MethodBindTRC<Environment::ReflectionSource>::get_argument_meta(int) const */undefined8 MethodBindTRC<Environment::ReflectionSource>::get_argument_meta(int param_1) {
   return 0;
}/* MethodBindT<Environment::ReflectionSource>::_gen_argument_type(int) const */char MethodBindT<Environment::ReflectionSource>::_gen_argument_type(MethodBindT<Environment::ReflectionSource> *this, int param_1) {
   return ( param_1 == 0 ) * '\x02';
}/* MethodBindT<Environment::ReflectionSource>::get_argument_meta(int) const */undefined8 MethodBindT<Environment::ReflectionSource>::get_argument_meta(int param_1) {
   return 0;
}/* MethodBindTRC<Environment::AmbientSource>::_gen_argument_type(int) const */undefined8 MethodBindTRC<Environment::AmbientSource>::_gen_argument_type(int param_1) {
   return 2;
}/* MethodBindTRC<Environment::AmbientSource>::get_argument_meta(int) const */undefined8 MethodBindTRC<Environment::AmbientSource>::get_argument_meta(int param_1) {
   return 0;
}/* MethodBindT<Environment::AmbientSource>::_gen_argument_type(int) const */char MethodBindT<Environment::AmbientSource>::_gen_argument_type(MethodBindT<Environment::AmbientSource> *this, int param_1) {
   return ( param_1 == 0 ) * '\x02';
}/* MethodBindT<Environment::AmbientSource>::get_argument_meta(int) const */undefined8 MethodBindT<Environment::AmbientSource>::get_argument_meta(int param_1) {
   return 0;
}/* MethodBindTRC<int>::_gen_argument_type(int) const */undefined8 MethodBindTRC<int>::_gen_argument_type(int param_1) {
   return 2;
}/* MethodBindTRC<int>::get_argument_meta(int) const */uint MethodBindTRC<int>::get_argument_meta(MethodBindTRC<int> *this, int param_1) {
   return param_1 >> 0x1f & 3;
}/* MethodBindT<int>::_gen_argument_type(int) const */char MethodBindT<int>::_gen_argument_type(MethodBindT<int> *this, int param_1) {
   return ( param_1 == 0 ) * '\x02';
}/* MethodBindT<int>::get_argument_meta(int) const */byte MethodBindT<int>::get_argument_meta(MethodBindT<int> *this, int param_1) {
   return -(param_1 == 0) & 3;
}/* MethodBindTRC<Color>::_gen_argument_type(int) const */undefined8 MethodBindTRC<Color>::_gen_argument_type(int param_1) {
   return 0x14;
}/* MethodBindTRC<Color>::get_argument_meta(int) const */undefined8 MethodBindTRC<Color>::get_argument_meta(int param_1) {
   return 0;
}/* MethodBindT<Color const&>::_gen_argument_type(int) const */byte MethodBindT<Color_const&>::_gen_argument_type(MethodBindT<Color_const&> *this, int param_1) {
   return -(param_1 == 0) & 0x14;
}/* MethodBindT<Color const&>::get_argument_meta(int) const */undefined8 MethodBindT<Color_const&>::get_argument_meta(int param_1) {
   return 0;
}/* MethodBindTRC<Vector3>::_gen_argument_type(int) const */undefined8 MethodBindTRC<Vector3>::_gen_argument_type(int param_1) {
   return 9;
}/* MethodBindTRC<Vector3>::get_argument_meta(int) const */undefined8 MethodBindTRC<Vector3>::get_argument_meta(int param_1) {
   return 0;
}/* MethodBindT<Vector3 const&>::_gen_argument_type(int) const */byte MethodBindT<Vector3_const&>::_gen_argument_type(MethodBindT<Vector3_const&> *this, int param_1) {
   return -(param_1 == 0) & 9;
}/* MethodBindT<Vector3 const&>::get_argument_meta(int) const */undefined8 MethodBindT<Vector3_const&>::get_argument_meta(int param_1) {
   return 0;
}/* MethodBindTRC<float>::_gen_argument_type(int) const */undefined8 MethodBindTRC<float>::_gen_argument_type(int param_1) {
   return 3;
}/* MethodBindTRC<float>::get_argument_meta(int) const */uint MethodBindTRC<float>::get_argument_meta(MethodBindTRC<float> *this, int param_1) {
   return param_1 >> 0x1f & 9;
}/* MethodBindT<float>::_gen_argument_type(int) const */byte MethodBindT<float>::_gen_argument_type(MethodBindT<float> *this, int param_1) {
   return -(param_1 == 0) & 3;
}/* MethodBindT<float>::get_argument_meta(int) const */byte MethodBindT<float>::get_argument_meta(MethodBindT<float> *this, int param_1) {
   return -(param_1 == 0) & 9;
}/* MethodBindTRC<Ref<Sky>>::_gen_argument_type(int) const */undefined8 MethodBindTRC<Ref<Sky>>::_gen_argument_type(int param_1) {
   return 0x18;
}/* MethodBindTRC<Ref<Sky>>::get_argument_meta(int) const */undefined8 MethodBindTRC<Ref<Sky>>::get_argument_meta(int param_1) {
   return 0;
}/* MethodBindT<Ref<Sky> const&>::_gen_argument_type(int) const */byte MethodBindT<Ref<Sky>const&>::_gen_argument_type(MethodBindT<Ref<Sky>const&> *this, int param_1) {
   return -(param_1 == 0) & 0x18;
}/* MethodBindT<Ref<Sky> const&>::get_argument_meta(int) const */undefined8 MethodBindT<Ref<Sky>const&>::get_argument_meta(int param_1) {
   return 0;
}/* MethodBindTRC<Environment::BGMode>::_gen_argument_type(int) const */undefined8 MethodBindTRC<Environment::BGMode>::_gen_argument_type(int param_1) {
   return 2;
}/* MethodBindTRC<Environment::BGMode>::get_argument_meta(int) const */undefined8 MethodBindTRC<Environment::BGMode>::get_argument_meta(int param_1) {
   return 0;
}/* MethodBindT<Environment::BGMode>::_gen_argument_type(int) const */char MethodBindT<Environment::BGMode>::_gen_argument_type(MethodBindT<Environment::BGMode> *this, int param_1) {
   return ( param_1 == 0 ) * '\x02';
}/* MethodBindT<Environment::BGMode>::get_argument_meta(int) const */undefined8 MethodBindT<Environment::BGMode>::get_argument_meta(int param_1) {
   return 0;
}/* CallableCustomMethodPointer<Environment, void>::get_argument_count(bool&) const */undefined8 CallableCustomMethodPointer<Environment,void>::get_argument_count(CallableCustomMethodPointer<Environment,void> *this, bool *param_1) {
   *param_1 = true;
   return 0;
}/* CallableCustomMethodPointerBase::get_method() const */void CallableCustomMethodPointerBase::get_method(void) {
   long in_RSI;
   StringName *in_RDI;
   StringName::StringName(in_RDI, *(char**)( in_RSI + 0x20 ), false);
   return;
}/* CallableCustomMethodPointer<Environment, void>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<Environment,void>::~CallableCustomMethodPointer(CallableCustomMethodPointer<Environment,void> *this) {
   operator_delete(this, 0x48);
   return;
}/* MethodBindT<Environment::BGMode>::~MethodBindT() */void MethodBindT<Environment::BGMode>::~MethodBindT(MethodBindT<Environment::BGMode> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0012dfb8;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}/* MethodBindT<Environment::BGMode>::~MethodBindT() */void MethodBindT<Environment::BGMode>::~MethodBindT(MethodBindT<Environment::BGMode> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0012dfb8;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}/* MethodBindTRC<Environment::BGMode>::~MethodBindTRC() */void MethodBindTRC<Environment::BGMode>::~MethodBindTRC(MethodBindTRC<Environment::BGMode> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0012e018;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}/* MethodBindTRC<Environment::BGMode>::~MethodBindTRC() */void MethodBindTRC<Environment::BGMode>::~MethodBindTRC(MethodBindTRC<Environment::BGMode> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0012e018;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}/* MethodBindT<Ref<Sky> const&>::~MethodBindT() */void MethodBindT<Ref<Sky>const&>::~MethodBindT(MethodBindT<Ref<Sky>const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0012e078;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}/* MethodBindT<Ref<Sky> const&>::~MethodBindT() */void MethodBindT<Ref<Sky>const&>::~MethodBindT(MethodBindT<Ref<Sky>const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0012e078;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}/* MethodBindTRC<Ref<Sky>>::~MethodBindTRC() */void MethodBindTRC<Ref<Sky>>::~MethodBindTRC(MethodBindTRC<Ref<Sky>> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0012e0d8;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}/* MethodBindTRC<Ref<Sky>>::~MethodBindTRC() */void MethodBindTRC<Ref<Sky>>::~MethodBindTRC(MethodBindTRC<Ref<Sky>> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0012e0d8;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}/* MethodBindT<Vector3 const&>::~MethodBindT() */void MethodBindT<Vector3_const&>::~MethodBindT(MethodBindT<Vector3_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0012e1f8;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}/* MethodBindT<Vector3 const&>::~MethodBindT() */void MethodBindT<Vector3_const&>::~MethodBindT(MethodBindT<Vector3_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0012e1f8;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}/* MethodBindTRC<Vector3>::~MethodBindTRC() */void MethodBindTRC<Vector3>::~MethodBindTRC(MethodBindTRC<Vector3> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0012e258;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}/* MethodBindTRC<Vector3>::~MethodBindTRC() */void MethodBindTRC<Vector3>::~MethodBindTRC(MethodBindTRC<Vector3> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0012e258;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}/* MethodBindT<Environment::AmbientSource>::~MethodBindT() */void MethodBindT<Environment::AmbientSource>::~MethodBindT(MethodBindT<Environment::AmbientSource> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0012e438;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}/* MethodBindT<Environment::AmbientSource>::~MethodBindT() */void MethodBindT<Environment::AmbientSource>::~MethodBindT(MethodBindT<Environment::AmbientSource> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0012e438;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}/* MethodBindTRC<Environment::AmbientSource>::~MethodBindTRC() */void MethodBindTRC<Environment::AmbientSource>::~MethodBindTRC(MethodBindTRC<Environment::AmbientSource> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0012e498;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}/* MethodBindTRC<Environment::AmbientSource>::~MethodBindTRC() */void MethodBindTRC<Environment::AmbientSource>::~MethodBindTRC(MethodBindTRC<Environment::AmbientSource> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0012e498;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}/* MethodBindT<Environment::ReflectionSource>::~MethodBindT() */void MethodBindT<Environment::ReflectionSource>::~MethodBindT(MethodBindT<Environment::ReflectionSource> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0012e4f8;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}/* MethodBindT<Environment::ReflectionSource>::~MethodBindT() */void MethodBindT<Environment::ReflectionSource>::~MethodBindT(MethodBindT<Environment::ReflectionSource> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0012e4f8;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}/* MethodBindTRC<Environment::ReflectionSource>::~MethodBindTRC() */void MethodBindTRC<Environment::ReflectionSource>::~MethodBindTRC(MethodBindTRC<Environment::ReflectionSource> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0012e558;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}/* MethodBindTRC<Environment::ReflectionSource>::~MethodBindTRC() */void MethodBindTRC<Environment::ReflectionSource>::~MethodBindTRC(MethodBindTRC<Environment::ReflectionSource> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0012e558;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}/* MethodBindT<Environment::ToneMapper>::~MethodBindT() */void MethodBindT<Environment::ToneMapper>::~MethodBindT(MethodBindT<Environment::ToneMapper> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0012e5b8;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}/* MethodBindT<Environment::ToneMapper>::~MethodBindT() */void MethodBindT<Environment::ToneMapper>::~MethodBindT(MethodBindT<Environment::ToneMapper> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0012e5b8;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}/* MethodBindTRC<Environment::ToneMapper>::~MethodBindTRC() */void MethodBindTRC<Environment::ToneMapper>::~MethodBindTRC(MethodBindTRC<Environment::ToneMapper> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0012e618;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}/* MethodBindTRC<Environment::ToneMapper>::~MethodBindTRC() */void MethodBindTRC<Environment::ToneMapper>::~MethodBindTRC(MethodBindTRC<Environment::ToneMapper> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0012e618;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}/* MethodBindT<int>::~MethodBindT() */void MethodBindT<int>::~MethodBindT(MethodBindT<int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0012e378;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}/* MethodBindT<int>::~MethodBindT() */void MethodBindT<int>::~MethodBindT(MethodBindT<int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0012e378;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}/* MethodBindTRC<int>::~MethodBindTRC() */void MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0012e3d8;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}/* MethodBindTRC<int>::~MethodBindTRC() */void MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0012e3d8;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}/* MethodBindT<Environment::SDFGIYScale>::~MethodBindT() */void MethodBindT<Environment::SDFGIYScale>::~MethodBindT(MethodBindT<Environment::SDFGIYScale> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0012e738;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}/* MethodBindT<Environment::SDFGIYScale>::~MethodBindT() */void MethodBindT<Environment::SDFGIYScale>::~MethodBindT(MethodBindT<Environment::SDFGIYScale> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0012e738;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}/* MethodBindTRC<Environment::SDFGIYScale>::~MethodBindTRC() */void MethodBindTRC<Environment::SDFGIYScale>::~MethodBindTRC(MethodBindTRC<Environment::SDFGIYScale> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0012e798;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}/* MethodBindTRC<Environment::SDFGIYScale>::~MethodBindTRC() */void MethodBindTRC<Environment::SDFGIYScale>::~MethodBindTRC(MethodBindTRC<Environment::SDFGIYScale> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0012e798;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}/* MethodBindT<int, float>::~MethodBindT() */void MethodBindT<int,float>::~MethodBindT(MethodBindT<int,float> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0012e7f8;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}/* MethodBindT<int, float>::~MethodBindT() */void MethodBindT<int,float>::~MethodBindT(MethodBindT<int,float> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0012e7f8;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}/* MethodBindTRC<float, int>::~MethodBindTRC() */void MethodBindTRC<float,int>::~MethodBindTRC(MethodBindTRC<float,int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0012e858;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}/* MethodBindTRC<float, int>::~MethodBindTRC() */void MethodBindTRC<float,int>::~MethodBindTRC(MethodBindTRC<float,int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0012e858;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}/* MethodBindT<Environment::GlowBlendMode>::~MethodBindT() */void MethodBindT<Environment::GlowBlendMode>::~MethodBindT(MethodBindT<Environment::GlowBlendMode> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0012e8b8;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}/* MethodBindT<Environment::GlowBlendMode>::~MethodBindT() */void MethodBindT<Environment::GlowBlendMode>::~MethodBindT(MethodBindT<Environment::GlowBlendMode> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0012e8b8;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}/* MethodBindTRC<Environment::GlowBlendMode>::~MethodBindTRC() */void MethodBindTRC<Environment::GlowBlendMode>::~MethodBindTRC(MethodBindTRC<Environment::GlowBlendMode> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0012e918;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}/* MethodBindTRC<Environment::GlowBlendMode>::~MethodBindTRC() */void MethodBindTRC<Environment::GlowBlendMode>::~MethodBindTRC(MethodBindTRC<Environment::GlowBlendMode> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0012e918;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}/* MethodBindT<Environment::FogMode>::~MethodBindT() */void MethodBindT<Environment::FogMode>::~MethodBindT(MethodBindT<Environment::FogMode> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0012ea38;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}/* MethodBindT<Environment::FogMode>::~MethodBindT() */void MethodBindT<Environment::FogMode>::~MethodBindT(MethodBindT<Environment::FogMode> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0012ea38;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}/* MethodBindTRC<Environment::FogMode>::~MethodBindTRC() */void MethodBindTRC<Environment::FogMode>::~MethodBindTRC(MethodBindTRC<Environment::FogMode> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0012ea98;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}/* MethodBindTRC<Environment::FogMode>::~MethodBindTRC() */void MethodBindTRC<Environment::FogMode>::~MethodBindTRC(MethodBindTRC<Environment::FogMode> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0012ea98;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}/* MethodBindT<Color const&>::~MethodBindT() */void MethodBindT<Color_const&>::~MethodBindT(MethodBindT<Color_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0012e2b8;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}/* MethodBindT<Color const&>::~MethodBindT() */void MethodBindT<Color_const&>::~MethodBindT(MethodBindT<Color_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0012e2b8;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}/* MethodBindT<Color>::~MethodBindT() */void MethodBindT<Color>::~MethodBindT(MethodBindT<Color> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0012eaf8;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}/* MethodBindT<Color>::~MethodBindT() */void MethodBindT<Color>::~MethodBindT(MethodBindT<Color> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0012eaf8;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}/* MethodBindTRC<Color>::~MethodBindTRC() */void MethodBindTRC<Color>::~MethodBindTRC(MethodBindTRC<Color> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0012e318;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}/* MethodBindTRC<Color>::~MethodBindTRC() */void MethodBindTRC<Color>::~MethodBindTRC(MethodBindTRC<Color> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0012e318;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}/* MethodBindT<bool>::~MethodBindT() */void MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0012e678;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}/* MethodBindT<bool>::~MethodBindT() */void MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0012e678;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}/* MethodBindTRC<bool>::~MethodBindTRC() */void MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0012e6d8;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}/* MethodBindTRC<bool>::~MethodBindTRC() */void MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0012e6d8;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}/* MethodBindT<float>::~MethodBindT() */void MethodBindT<float>::~MethodBindT(MethodBindT<float> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0012e138;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}/* MethodBindT<float>::~MethodBindT() */void MethodBindT<float>::~MethodBindT(MethodBindT<float> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0012e138;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}/* MethodBindTRC<float>::~MethodBindTRC() */void MethodBindTRC<float>::~MethodBindTRC(MethodBindTRC<float> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0012e198;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}/* MethodBindTRC<float>::~MethodBindTRC() */void MethodBindTRC<float>::~MethodBindTRC(MethodBindTRC<float> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0012e198;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}/* MethodBindT<Ref<Texture> >::~MethodBindT() */void MethodBindT<Ref<Texture>>::~MethodBindT(MethodBindT<Ref<Texture>> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0012e978;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}/* MethodBindT<Ref<Texture> >::~MethodBindT() */void MethodBindT<Ref<Texture>>::~MethodBindT(MethodBindT<Ref<Texture>> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0012e978;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}/* MethodBindTRC<Ref<Texture>>::~MethodBindTRC() */void MethodBindTRC<Ref<Texture>>::~MethodBindTRC(MethodBindTRC<Ref<Texture>> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0012e9d8;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}/* MethodBindTRC<Ref<Texture>>::~MethodBindTRC() */void MethodBindTRC<Ref<Texture>>::~MethodBindTRC(MethodBindTRC<Ref<Texture>> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0012e9d8;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}/* CallableCustomMethodPointer<Environment, void>::get_object() const */undefined8 CallableCustomMethodPointer<Environment,void>::get_object(CallableCustomMethodPointer<Environment,void> *this) {
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
      };
      puVar4 = (ulong*)( (ulong)uVar3 * 0x10 + ObjectDB::object_slots );
      if (( *(ulong*)( this + 0x30 ) >> 0x18 & 0x7fffffffff ) != ( *puVar4 & 0x7fffffffff )) {
         uVar2 = 0;
         ObjectDB::spin_lock._0_1_ = '\0';
         goto LAB_0011501d;
      }
      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] != 0) {
         uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
         goto LAB_0011501d;
      }
   } else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }
   uVar2 = 0;
   LAB_0011501d:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return uVar2;
}/* Resource::get_base_extension() const */Resource * __thiscall Resource::get_base_extension(Resource *this){
   long lVar1;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)this = 0;
   String::parse_latin1((StrRange*)this);
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* CallableCustomMethodPointerBase::get_as_text() const */void CallableCustomMethodPointerBase::get_as_text(void) {
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
}/* Environment::_get_class_namev() const */undefined8 *Environment::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }
   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_001151b3:return &_get_class_namev();
      }
      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_001151b3;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "Environment");
         goto LAB_0011521e;
      }
   }
   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "Environment");
   LAB_0011521e:return &_get_class_namev();
}/* Environment::get_class() const */void Environment::get_class(void) {
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
   } else {
      lVar2 = *(long*)( *(long*)( in_RSI + 8 ) + 0x20 );
      if (lVar2 == 0) {
         *(undefined8*)in_RDI = 0;
      } else {
         __s = *(char**)( lVar2 + 8 );
         *(undefined8*)in_RDI = 0;
         if (__s == (char*)0x0) {
            if (*(long*)( lVar2 + 0x10 ) != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)in_RDI, (CowData*)( lVar2 + 0x10 ));
            }
         } else {
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
}/* CowData<float>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<float>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<float>::resize<false>(long) [clone .isra.0] [clone .cold] */void CowData<float>::resize<false>(long param_1) {
   code *pcVar1;
   _DAT_00000000 = 0;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void FUN_00115340(void) {
   code *pcVar1;
   _DAT_00000000 = 0;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}/* MethodBindTRC<Ref<Sky>>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<Ref<Sky>>::_gen_argument_type_info(int param_1) {
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
   local_48 = &_LC24;
   local_40 = 3;
   String::parse_latin1((StrRange*)&local_58);
   *puVar3 = 0x18;
   puVar3[6] = 0x11;
   *(undefined8*)( puVar3 + 8 ) = 0;
   *(undefined1(*) [16])( puVar3 + 2 ) = (undefined1[16])0x0;
   if (local_58 == 0) {
      puVar3[10] = 6;
   } else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar3 + 8 ), (CowData*)&local_58);
      puVar3[10] = 6;
      if (puVar3[6] != 0x11) {
         StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_50);
         goto LAB_00115400;
      }
   }
   StringName::StringName((StringName*)&local_48, (String*)( puVar3 + 8 ), false);
   if (*(undefined**)( puVar3 + 4 ) == local_48) {
      if (( StringName::configured != '\0' ) && ( local_48 != (undefined*)0x0 )) {
         StringName::unref();
      }
   } else {
      StringName::unref();
      *(undefined**)( puVar3 + 4 ) = local_48;
   }
   LAB_00115400:lVar2 = local_58;
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
}/* MethodBindTRC<Vector3>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<Vector3>::_gen_argument_type_info(int param_1) {
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
   local_48 = &_LC7;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   *puVar3 = 9;
   puVar3[6] = 0;
   *(undefined8*)( puVar3 + 8 ) = 0;
   *(undefined1(*) [16])( puVar3 + 2 ) = (undefined1[16])0x0;
   if (local_58 == 0) {
      puVar3[10] = 6;
   } else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar3 + 8 ), (CowData*)&local_58);
      puVar3[10] = 6;
      if (puVar3[6] == 0x11) {
         StringName::StringName((StringName*)&local_48, (String*)( puVar3 + 8 ), false);
         if (*(undefined**)( puVar3 + 4 ) == local_48) {
            lVar2 = local_58;
            if (( StringName::configured != '\0' ) && ( local_48 != (undefined*)0x0 )) {
               StringName::unref();
               lVar2 = local_58;
            }
         } else {
            StringName::unref();
            *(undefined**)( puVar3 + 4 ) = local_48;
            lVar2 = local_58;
         }
         goto joined_r0x0011561c;
      }
   }
   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x0011561c:local_58 = lVar2;
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
}/* MethodBindTRC<float>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<float>::_gen_argument_type_info(int param_1) {
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
   local_48 = &_LC7;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   *puVar3 = 3;
   puVar3[6] = 0;
   *(undefined8*)( puVar3 + 8 ) = 0;
   *(undefined1(*) [16])( puVar3 + 2 ) = (undefined1[16])0x0;
   if (local_58 == 0) {
      puVar3[10] = 6;
   } else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar3 + 8 ), (CowData*)&local_58);
      puVar3[10] = 6;
      if (puVar3[6] == 0x11) {
         StringName::StringName((StringName*)&local_48, (String*)( puVar3 + 8 ), false);
         if (*(undefined**)( puVar3 + 4 ) == local_48) {
            lVar2 = local_58;
            if (( StringName::configured != '\0' ) && ( local_48 != (undefined*)0x0 )) {
               StringName::unref();
               lVar2 = local_58;
            }
         } else {
            StringName::unref();
            *(undefined**)( puVar3 + 4 ) = local_48;
            lVar2 = local_58;
         }
         goto joined_r0x0011579c;
      }
   }
   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x0011579c:local_58 = lVar2;
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
}/* MethodBindTRC<int>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<int>::_gen_argument_type_info(int param_1) {
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
   local_48 = &_LC7;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   *puVar3 = 2;
   puVar3[6] = 0;
   *(undefined8*)( puVar3 + 8 ) = 0;
   *(undefined1(*) [16])( puVar3 + 2 ) = (undefined1[16])0x0;
   if (local_58 == 0) {
      puVar3[10] = 6;
   } else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar3 + 8 ), (CowData*)&local_58);
      puVar3[10] = 6;
      if (puVar3[6] == 0x11) {
         StringName::StringName((StringName*)&local_48, (String*)( puVar3 + 8 ), false);
         if (*(undefined**)( puVar3 + 4 ) == local_48) {
            lVar2 = local_58;
            if (( StringName::configured != '\0' ) && ( local_48 != (undefined*)0x0 )) {
               StringName::unref();
               lVar2 = local_58;
            }
         } else {
            StringName::unref();
            *(undefined**)( puVar3 + 4 ) = local_48;
            lVar2 = local_58;
         }
         goto joined_r0x0011591c;
      }
   }
   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x0011591c:local_58 = lVar2;
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
}/* MethodBindTRC<Color>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<Color>::_gen_argument_type_info(int param_1) {
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
   local_48 = &_LC7;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   *puVar3 = 0x14;
   puVar3[6] = 0;
   *(undefined8*)( puVar3 + 8 ) = 0;
   *(undefined1(*) [16])( puVar3 + 2 ) = (undefined1[16])0x0;
   if (local_58 == 0) {
      puVar3[10] = 6;
   } else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar3 + 8 ), (CowData*)&local_58);
      puVar3[10] = 6;
      if (puVar3[6] == 0x11) {
         StringName::StringName((StringName*)&local_48, (String*)( puVar3 + 8 ), false);
         if (*(undefined**)( puVar3 + 4 ) == local_48) {
            lVar2 = local_58;
            if (( StringName::configured != '\0' ) && ( local_48 != (undefined*)0x0 )) {
               StringName::unref();
               lVar2 = local_58;
            }
         } else {
            StringName::unref();
            *(undefined**)( puVar3 + 4 ) = local_48;
            lVar2 = local_58;
         }
         goto joined_r0x00115a9c;
      }
   }
   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x00115a9c:local_58 = lVar2;
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
}/* MethodBindTRC<Ref<Texture>>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<Ref<Texture>>::_gen_argument_type_info(int param_1) {
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
   local_48 = "Texture";
   local_40 = 7;
   String::parse_latin1((StrRange*)&local_58);
   *puVar3 = 0x18;
   puVar3[6] = 0x11;
   *(undefined8*)( puVar3 + 8 ) = 0;
   *(undefined1(*) [16])( puVar3 + 2 ) = (undefined1[16])0x0;
   if (local_58 == 0) {
      puVar3[10] = 6;
   } else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar3 + 8 ), (CowData*)&local_58);
      puVar3[10] = 6;
      if (puVar3[6] != 0x11) {
         StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_50);
         goto LAB_00115ba0;
      }
   }
   StringName::StringName((StringName*)&local_48, (String*)( puVar3 + 8 ), false);
   if (*(char**)( puVar3 + 4 ) == local_48) {
      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }
   } else {
      StringName::unref();
      *(char**)( puVar3 + 4 ) = local_48;
   }
   LAB_00115ba0:lVar2 = local_58;
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
}/* MethodBindTRC<bool>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<bool>::_gen_argument_type_info(int param_1) {
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
   local_48 = &_LC7;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   *puVar3 = 1;
   puVar3[6] = 0;
   *(undefined8*)( puVar3 + 8 ) = 0;
   *(undefined1(*) [16])( puVar3 + 2 ) = (undefined1[16])0x0;
   if (local_58 == 0) {
      puVar3[10] = 6;
   } else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar3 + 8 ), (CowData*)&local_58);
      puVar3[10] = 6;
      if (puVar3[6] == 0x11) {
         StringName::StringName((StringName*)&local_48, (String*)( puVar3 + 8 ), false);
         if (*(undefined**)( puVar3 + 4 ) == local_48) {
            lVar2 = local_58;
            if (( StringName::configured != '\0' ) && ( local_48 != (undefined*)0x0 )) {
               StringName::unref();
               lVar2 = local_58;
            }
         } else {
            StringName::unref();
            *(undefined**)( puVar3 + 4 ) = local_48;
            lVar2 = local_58;
         }
         goto joined_r0x00115dbc;
      }
   }
   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x00115dbc:local_58 = lVar2;
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
}/* String::parse_latin1(char const*) */void String::parse_latin1(String *this, char *param_1) {
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
}/* PropertyInfo::~PropertyInfo() */void PropertyInfo::~PropertyInfo(PropertyInfo *this) {
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
}/* PropertyInfo::PropertyInfo(Variant::Type, String const&, PropertyHint, String const&, unsigned
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
      StringName::StringName((StringName*)&local_48, (String*)( this + 0x20 ), false);
      if (*(long*)( this + 0x10 ) == local_48) {
         if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
            StringName::unref();
         }
      } else {
         StringName::unref();
         *(long*)( this + 0x10 ) = local_48;
      }
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }
   } else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      StringName::operator =((StringName*)( this + 0x10 ), param_7);
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* godot::details::enum_qualified_name_to_class_info_name(String const&) */details * __thiscall
godot::details::enum_qualified_name_to_class_info_name(details *this,String *param_1){
   long *plVar1;
   long *plVar2;
   long lVar3;
   code *pcVar4;
   undefined *puVar5;
   long *plVar6;
   long lVar7;
   long lVar8;
   long in_FS_OFFSET;
   long local_60;
   char local_58[8];
   long *local_50;
   undefined *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   String::split(local_58, SUB81(param_1, 0), 0x116005);
   if (( local_50 != (long*)0x0 ) && ( 2 < local_50[-1] )) {
      local_60 = 0;
      local_48 = &_LC27;
      local_40 = 1;
      String::parse_latin1((StrRange*)&local_60);
      if (local_50 == (long*)0x0) {
         lVar8 = 0;
         lVar7 = -2;
      } else {
         lVar8 = local_50[-1];
         lVar7 = lVar8 + -2;
         if (-1 < lVar7) {
            String::operator +((String*)&local_48, (String*)( local_50 + lVar7 ));
            String::operator +((String*)this, (String*)&local_48);
            puVar5 = local_48;
            lVar8 = local_60;
            if (local_48 != (undefined*)0x0) {
               LOCK();
               plVar1 = (long*)( local_48 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_48 = (undefined*)0x0;
                  Memory::free_static(puVar5 + -0x10, false);
                  lVar8 = local_60;
               }
            }
            goto joined_r0x001160aa;
         }
      }
      _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar7, lVar8, "p_index", "size()", "", false, true);
      _err_flush_stdout();
      /* WARNING: Does not return */
      pcVar4 = (code*)invalidInstructionException();
      ( *pcVar4 )();
   }
   local_60 = 0;
   local_48 = &_LC27;
   local_40 = 1;
   String::parse_latin1((StrRange*)&local_60);
   String::join((Vector*)this);
   lVar8 = local_60;
   joined_r0x001160aa:local_60 = lVar8;
   if (lVar8 != 0) {
      LOCK();
      plVar1 = (long*)( lVar8 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_60 = 0;
         Memory::free_static((void*)( lVar8 + -0x10 ), false);
      }
   }
   plVar1 = local_50;
   if (local_50 != (long*)0x0) {
      LOCK();
      plVar6 = local_50 + -2;
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
         if (local_50 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar4 = (code*)invalidInstructionException();
            ( *pcVar4 )();
         }
         lVar8 = local_50[-1];
         local_50 = (long*)0x0;
         if (lVar8 != 0) {
            lVar7 = 0;
            plVar6 = plVar1;
            do {
               if (*plVar6 != 0) {
                  LOCK();
                  plVar2 = (long*)( *plVar6 + -0x10 );
                  *plVar2 = *plVar2 + -1;
                  UNLOCK();
                  if (*plVar2 == 0) {
                     lVar3 = *plVar6;
                     *plVar6 = 0;
                     Memory::free_static((void*)( lVar3 + -0x10 ), false);
                  }
               }
               lVar7 = lVar7 + 1;
               plVar6 = plVar6 + 1;
            } while ( lVar8 != lVar7 );
         }
         Memory::free_static(plVar1 + -2, false);
      }
   }
   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return this;
}/* MethodBindTRC<Environment::FogMode>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<Environment::FogMode>::_gen_argument_type_info(int param_1) {
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
   local_58 = 0;
   local_48 = "Environment::FogMode";
   local_40 = 0x14;
   String::parse_latin1((StrRange*)&local_58);
   godot::details::enum_qualified_name_to_class_info_name((details*)&local_50, (String*)&local_58);
   StringName::StringName((StringName*)&local_48, (String*)&local_50, false);
   *puVar3 = 2;
   puVar3[6] = 0;
   *(undefined8*)( puVar3 + 8 ) = 0;
   puVar3[10] = 0x10006;
   *(undefined1(*) [16])( puVar3 + 2 ) = (undefined1[16])0x0;
   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_48);
   if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
      StringName::unref();
   }
   lVar2 = local_50;
   if (local_50 != 0) {
      LOCK();
      plVar1 = (long*)( local_50 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_50 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }
   }
   lVar2 = local_58;
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
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar3;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* MethodBindTRC<Environment::AmbientSource>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<Environment::AmbientSource>::_gen_argument_type_info(int param_1) {
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
   local_58 = 0;
   local_48 = "Environment::AmbientSource";
   local_40 = 0x1a;
   String::parse_latin1((StrRange*)&local_58);
   godot::details::enum_qualified_name_to_class_info_name((details*)&local_50, (String*)&local_58);
   StringName::StringName((StringName*)&local_48, (String*)&local_50, false);
   *puVar3 = 2;
   puVar3[6] = 0;
   *(undefined8*)( puVar3 + 8 ) = 0;
   puVar3[10] = 0x10006;
   *(undefined1(*) [16])( puVar3 + 2 ) = (undefined1[16])0x0;
   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_48);
   if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
      StringName::unref();
   }
   lVar2 = local_50;
   if (local_50 != 0) {
      LOCK();
      plVar1 = (long*)( local_50 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_50 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }
   }
   lVar2 = local_58;
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
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar3;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* MethodBindTRC<Environment::BGMode>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<Environment::BGMode>::_gen_argument_type_info(int param_1) {
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
   local_58 = 0;
   local_48 = "Environment::BGMode";
   local_40 = 0x13;
   String::parse_latin1((StrRange*)&local_58);
   godot::details::enum_qualified_name_to_class_info_name((details*)&local_50, (String*)&local_58);
   StringName::StringName((StringName*)&local_48, (String*)&local_50, false);
   *puVar3 = 2;
   puVar3[6] = 0;
   *(undefined8*)( puVar3 + 8 ) = 0;
   puVar3[10] = 0x10006;
   *(undefined1(*) [16])( puVar3 + 2 ) = (undefined1[16])0x0;
   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_48);
   if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
      StringName::unref();
   }
   lVar2 = local_50;
   if (local_50 != 0) {
      LOCK();
      plVar1 = (long*)( local_50 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_50 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }
   }
   lVar2 = local_58;
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
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar3;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* MethodBindTRC<Environment::GlowBlendMode>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<Environment::GlowBlendMode>::_gen_argument_type_info(int param_1) {
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
   local_58 = 0;
   local_48 = "Environment::GlowBlendMode";
   local_40 = 0x1a;
   String::parse_latin1((StrRange*)&local_58);
   godot::details::enum_qualified_name_to_class_info_name((details*)&local_50, (String*)&local_58);
   StringName::StringName((StringName*)&local_48, (String*)&local_50, false);
   *puVar3 = 2;
   puVar3[6] = 0;
   *(undefined8*)( puVar3 + 8 ) = 0;
   puVar3[10] = 0x10006;
   *(undefined1(*) [16])( puVar3 + 2 ) = (undefined1[16])0x0;
   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_48);
   if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
      StringName::unref();
   }
   lVar2 = local_50;
   if (local_50 != 0) {
      LOCK();
      plVar1 = (long*)( local_50 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_50 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }
   }
   lVar2 = local_58;
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
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar3;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* MethodBindTRC<Environment::ReflectionSource>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<Environment::ReflectionSource>::_gen_argument_type_info(int param_1) {
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
   local_58 = 0;
   local_48 = "Environment::ReflectionSource";
   local_40 = 0x1d;
   String::parse_latin1((StrRange*)&local_58);
   godot::details::enum_qualified_name_to_class_info_name((details*)&local_50, (String*)&local_58);
   StringName::StringName((StringName*)&local_48, (String*)&local_50, false);
   *puVar3 = 2;
   puVar3[6] = 0;
   *(undefined8*)( puVar3 + 8 ) = 0;
   puVar3[10] = 0x10006;
   *(undefined1(*) [16])( puVar3 + 2 ) = (undefined1[16])0x0;
   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_48);
   if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
      StringName::unref();
   }
   lVar2 = local_50;
   if (local_50 != 0) {
      LOCK();
      plVar1 = (long*)( local_50 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_50 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }
   }
   lVar2 = local_58;
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
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar3;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* MethodBindTRC<Environment::ToneMapper>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<Environment::ToneMapper>::_gen_argument_type_info(int param_1) {
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
   local_58 = 0;
   local_48 = "Environment::ToneMapper";
   local_40 = 0x17;
   String::parse_latin1((StrRange*)&local_58);
   godot::details::enum_qualified_name_to_class_info_name((details*)&local_50, (String*)&local_58);
   StringName::StringName((StringName*)&local_48, (String*)&local_50, false);
   *puVar3 = 2;
   puVar3[6] = 0;
   *(undefined8*)( puVar3 + 8 ) = 0;
   puVar3[10] = 0x10006;
   *(undefined1(*) [16])( puVar3 + 2 ) = (undefined1[16])0x0;
   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_48);
   if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
      StringName::unref();
   }
   lVar2 = local_50;
   if (local_50 != 0) {
      LOCK();
      plVar1 = (long*)( local_50 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_50 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }
   }
   lVar2 = local_58;
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
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar3;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* MethodBindTRC<Environment::SDFGIYScale>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<Environment::SDFGIYScale>::_gen_argument_type_info(int param_1) {
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
   local_58 = 0;
   local_48 = "Environment::SDFGIYScale";
   local_40 = 0x18;
   String::parse_latin1((StrRange*)&local_58);
   godot::details::enum_qualified_name_to_class_info_name((details*)&local_50, (String*)&local_58);
   StringName::StringName((StringName*)&local_48, (String*)&local_50, false);
   *puVar3 = 2;
   puVar3[6] = 0;
   *(undefined8*)( puVar3 + 8 ) = 0;
   puVar3[10] = 0x10006;
   *(undefined1(*) [16])( puVar3 + 2 ) = (undefined1[16])0x0;
   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_48);
   if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
      StringName::unref();
   }
   lVar2 = local_50;
   if (local_50 != 0) {
      LOCK();
      plVar1 = (long*)( local_50 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_50 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }
   }
   lVar2 = local_58;
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
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar3;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* RefCounted::is_class(String const&) const */undefined8 RefCounted::is_class(RefCounted *this, String *param_1) {
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
      } else {
         pcVar3 = *(char**)( lVar4 + 8 );
         local_60 = 0;
         if (pcVar3 == (char*)0x0) {
            plVar1 = (long*)( *(long*)( lVar4 + 0x10 ) + -0x10 );
            if (*(long*)( lVar4 + 0x10 ) != 0) {
               do {
                  lVar5 = *plVar1;
                  if (lVar5 == 0) goto LAB_00116caf;
                  LOCK();
                  lVar8 = *plVar1;
                  bVar9 = lVar5 == lVar8;
                  if (bVar9) {
                     *plVar1 = lVar5 + 1;
                     lVar8 = lVar5;
                  }
                  UNLOCK();
               } while ( !bVar9 );
               if (lVar8 != -1) {
                  local_60 = *(long*)( lVar4 + 0x10 );
               }
            }
         } else {
            local_50 = strlen(pcVar3);
            local_58 = pcVar3;
            String::parse_latin1((StrRange*)&local_60);
         }
      }
      LAB_00116caf:cVar6 = String::operator ==(param_1, (String*)&local_60);
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
      if (cVar6 != '\0') goto LAB_00116d63;
   }
   cVar6 = String::operator ==(param_1, "RefCounted");
   if (cVar6 == '\0') {
      for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
         lVar4 = *(long*)( lVar2 + 0x20 );
         if (lVar4 == 0) {
            local_60 = 0;
         } else {
            pcVar3 = *(char**)( lVar4 + 8 );
            local_60 = 0;
            if (pcVar3 == (char*)0x0) {
               plVar1 = (long*)( *(long*)( lVar4 + 0x10 ) + -0x10 );
               if (*(long*)( lVar4 + 0x10 ) != 0) {
                  do {
                     lVar5 = *plVar1;
                     if (lVar5 == 0) goto LAB_00116e13;
                     LOCK();
                     lVar8 = *plVar1;
                     bVar9 = lVar5 == lVar8;
                     if (bVar9) {
                        *plVar1 = lVar5 + 1;
                        lVar8 = lVar5;
                     }
                     UNLOCK();
                  } while ( !bVar9 );
                  if (lVar8 != -1) {
                     local_60 = *(long*)( lVar4 + 0x10 );
                  }
               }
            } else {
               local_50 = strlen(pcVar3);
               local_58 = pcVar3;
               String::parse_latin1((StrRange*)&local_60);
            }
         }
         LAB_00116e13:cVar6 = String::operator ==(param_1, (String*)&local_60);
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
         if (cVar6 != '\0') goto LAB_00116d63;
      }
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar7 = String::operator ==(param_1, "Object");
         return uVar7;
      }
   } else {
      LAB_00116d63:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* Environment::is_class(String const&) const */undefined8 Environment::is_class(Environment *this, String *param_1) {
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
      } else {
         pcVar3 = *(char**)( lVar4 + 8 );
         local_60 = 0;
         if (pcVar3 == (char*)0x0) {
            plVar1 = (long*)( *(long*)( lVar4 + 0x10 ) + -0x10 );
            if (*(long*)( lVar4 + 0x10 ) != 0) {
               do {
                  lVar5 = *plVar1;
                  if (lVar5 == 0) goto LAB_00116f3f;
                  LOCK();
                  lVar8 = *plVar1;
                  bVar9 = lVar5 == lVar8;
                  if (bVar9) {
                     *plVar1 = lVar5 + 1;
                     lVar8 = lVar5;
                  }
                  UNLOCK();
               } while ( !bVar9 );
               if (lVar8 != -1) {
                  local_60 = *(long*)( lVar4 + 0x10 );
               }
            }
         } else {
            local_50 = strlen(pcVar3);
            local_58 = pcVar3;
            String::parse_latin1((StrRange*)&local_60);
         }
      }
      LAB_00116f3f:cVar6 = String::operator ==(param_1, (String*)&local_60);
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
      if (cVar6 != '\0') goto LAB_00116ff3;
   }
   cVar6 = String::operator ==(param_1, "Environment");
   if (cVar6 == '\0') {
      for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
         lVar4 = *(long*)( lVar2 + 0x20 );
         if (lVar4 == 0) {
            local_60 = 0;
         } else {
            pcVar3 = *(char**)( lVar4 + 8 );
            local_60 = 0;
            if (pcVar3 == (char*)0x0) {
               plVar1 = (long*)( *(long*)( lVar4 + 0x10 ) + -0x10 );
               if (*(long*)( lVar4 + 0x10 ) != 0) {
                  do {
                     lVar5 = *plVar1;
                     if (lVar5 == 0) goto LAB_001170b3;
                     LOCK();
                     lVar8 = *plVar1;
                     bVar9 = lVar5 == lVar8;
                     if (bVar9) {
                        *plVar1 = lVar5 + 1;
                        lVar8 = lVar5;
                     }
                     UNLOCK();
                  } while ( !bVar9 );
                  if (lVar8 != -1) {
                     local_60 = *(long*)( lVar4 + 0x10 );
                  }
               }
            } else {
               local_50 = strlen(pcVar3);
               local_58 = pcVar3;
               String::parse_latin1((StrRange*)&local_60);
            }
         }
         LAB_001170b3:cVar6 = String::operator ==(param_1, (String*)&local_60);
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
         if (cVar6 != '\0') goto LAB_00116ff3;
      }
      cVar6 = String::operator ==(param_1, "Resource");
      if (cVar6 == '\0') {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar7 = RefCounted::is_class((RefCounted*)this, param_1);
            return uVar7;
         }
         goto LAB_0011715c;
      }
   }
   LAB_00116ff3:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }
   LAB_0011715c:/* WARNING: Subroutine does not return */__stack_chk_fail();
}/* RefCounted::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void RefCounted::_get_property_listv(List *param_1, bool param_2) {
   long *plVar1;
   long lVar2;
   long lVar3;
   undefined1(*pauVar4)[16];
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
   pLVar6 = (List*)CONCAT71(in_register_00000031, param_2);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_88 = 0;
   local_90 = 0;
   local_78 = "RefCounted";
   local_70 = 10;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "RefCounted";
   local_98 = 0;
   local_70 = 10;
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
      LAB_001172d8:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   } else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_001172d8;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)pLVar6;
         local_68 = local_80;
         goto joined_r0x001172f6;
      }
      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }
   }
   lVar2 = *(long*)pLVar6;
   joined_r0x001172f6:if (lVar2 == 0) {
      pauVar4 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])pLVar6 = pauVar4;
      *(undefined4*)pauVar4[1] = 0;
      *pauVar4 = (undefined1[16])0x0;
   }
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
   StringName::operator =((StringName*)( puVar5 + 4 ), (StringName*)&local_68);
   puVar5[6] = local_60;
   if (*(long*)( puVar5 + 8 ) != local_58) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar5 + 8 ), (CowData*)&local_58);
   }
   lVar3 = local_58;
   puVar5[10] = local_50;
   plVar1 = *(long**)pLVar6;
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
   lVar2 = local_70;
   if (local_70 != 0) {
      LOCK();
      plVar1 = (long*)( local_70 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_70 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }
   }
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
   StringName::StringName((StringName*)&local_78, "RefCounted", false);
   ClassDB::get_property_list((StringName*)&local_78, pLVar6, true, (Object*)param_1);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* Resource::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void Resource::_get_property_listv(Resource *this, List *param_1, bool param_2) {
   long *plVar1;
   long lVar2;
   long lVar3;
   undefined1(*pauVar4)[16];
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
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_2) {
      RefCounted::_get_property_listv((List*)this, SUB81(param_1, 0));
   }
   local_88 = 0;
   local_90 = 0;
   local_78 = "Resource";
   local_70 = 8;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "Resource";
   local_98 = 0;
   local_70 = 8;
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
      LAB_001176d8:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   } else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_001176d8;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x001176f5;
      }
      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }
   }
   lVar2 = *(long*)param_1;
   joined_r0x001176f5:if (lVar2 == 0) {
      pauVar4 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])param_1 = pauVar4;
      *(undefined4*)pauVar4[1] = 0;
      *pauVar4 = (undefined1[16])0x0;
   }
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
   StringName::operator =((StringName*)( puVar5 + 4 ), (StringName*)&local_68);
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
   lVar2 = local_70;
   if (local_70 != 0) {
      LOCK();
      plVar1 = (long*)( local_70 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_70 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }
   }
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
   StringName::StringName((StringName*)&local_78, "Resource", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }
   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         RefCounted::_get_property_listv((List*)this, SUB81(param_1, 0));
         return;
      }
   } else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* Environment::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void Environment::_get_property_listv(Environment *this, List *param_1, bool param_2) {
   long *plVar1;
   long lVar2;
   long lVar3;
   undefined1(*pauVar4)[16];
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
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_2) {
      Resource::_get_property_listv((Resource*)this, param_1, false);
   }
   local_88 = 0;
   local_90 = 0;
   local_78 = "Environment";
   local_70 = 0xb;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "Environment";
   local_98 = 0;
   local_70 = 0xb;
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
      LAB_00117b28:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   } else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_00117b28;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x00117b45;
      }
      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }
   }
   lVar2 = *(long*)param_1;
   joined_r0x00117b45:if (lVar2 == 0) {
      pauVar4 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])param_1 = pauVar4;
      *(undefined4*)pauVar4[1] = 0;
      *pauVar4 = (undefined1[16])0x0;
   }
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
   StringName::operator =((StringName*)( puVar5 + 4 ), (StringName*)&local_68);
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
   lVar2 = local_70;
   if (local_70 != 0) {
      LOCK();
      plVar1 = (long*)( local_70 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_70 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }
   }
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
   StringName::StringName((StringName*)&local_78, "Environment", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }
   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         Resource::_get_property_listv((Resource*)this, param_1, true);
         return;
      }
   } else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* GetTypeInfo<Environment::AmbientSource, void>::get_class_info() */GetTypeInfo<Environment::AmbientSource,void> * __thiscall
GetTypeInfo<Environment::AmbientSource,void>::get_class_info
          (GetTypeInfo<Environment::AmbientSource,void> *this){
   long *plVar1;
   long lVar2;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_58 = 0;
   local_48 = "Environment::AmbientSource";
   local_40 = 0x1a;
   String::parse_latin1((StrRange*)&local_58);
   godot::details::enum_qualified_name_to_class_info_name((details*)&local_50, (String*)&local_58);
   StringName::StringName((StringName*)&local_48, (String*)&local_50, false);
   *(undefined4*)this = 2;
   *(undefined4*)( this + 0x18 ) = 0;
   *(undefined8*)( this + 0x20 ) = 0;
   *(undefined4*)( this + 0x28 ) = 0x10006;
   *(undefined1(*) [16])( this + 8 ) = (undefined1[16])0x0;
   StringName::operator =((StringName*)( this + 0x10 ), (StringName*)&local_48);
   if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
      StringName::unref();
   }
   lVar2 = local_50;
   if (local_50 != 0) {
      LOCK();
      plVar1 = (long*)( local_50 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_50 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }
   }
   lVar2 = local_58;
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
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* GetTypeInfo<Environment::ReflectionSource, void>::get_class_info() */GetTypeInfo<Environment::ReflectionSource,void> * __thiscall
GetTypeInfo<Environment::ReflectionSource,void>::get_class_info
          (GetTypeInfo<Environment::ReflectionSource,void> *this){
   long *plVar1;
   long lVar2;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_58 = 0;
   local_48 = "Environment::ReflectionSource";
   local_40 = 0x1d;
   String::parse_latin1((StrRange*)&local_58);
   godot::details::enum_qualified_name_to_class_info_name((details*)&local_50, (String*)&local_58);
   StringName::StringName((StringName*)&local_48, (String*)&local_50, false);
   *(undefined4*)this = 2;
   *(undefined4*)( this + 0x18 ) = 0;
   *(undefined8*)( this + 0x20 ) = 0;
   *(undefined4*)( this + 0x28 ) = 0x10006;
   *(undefined1(*) [16])( this + 8 ) = (undefined1[16])0x0;
   StringName::operator =((StringName*)( this + 0x10 ), (StringName*)&local_48);
   if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
      StringName::unref();
   }
   lVar2 = local_50;
   if (local_50 != 0) {
      LOCK();
      plVar1 = (long*)( local_50 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_50 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }
   }
   lVar2 = local_58;
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
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* GetTypeInfo<Environment::SDFGIYScale, void>::get_class_info() */GetTypeInfo<Environment::SDFGIYScale,void> * __thiscall
GetTypeInfo<Environment::SDFGIYScale,void>::get_class_info
          (GetTypeInfo<Environment::SDFGIYScale,void> *this){
   long *plVar1;
   long lVar2;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_58 = 0;
   local_48 = "Environment::SDFGIYScale";
   local_40 = 0x18;
   String::parse_latin1((StrRange*)&local_58);
   godot::details::enum_qualified_name_to_class_info_name((details*)&local_50, (String*)&local_58);
   StringName::StringName((StringName*)&local_48, (String*)&local_50, false);
   *(undefined4*)this = 2;
   *(undefined4*)( this + 0x18 ) = 0;
   *(undefined8*)( this + 0x20 ) = 0;
   *(undefined4*)( this + 0x28 ) = 0x10006;
   *(undefined1(*) [16])( this + 8 ) = (undefined1[16])0x0;
   StringName::operator =((StringName*)( this + 0x10 ), (StringName*)&local_48);
   if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
      StringName::unref();
   }
   lVar2 = local_50;
   if (local_50 != 0) {
      LOCK();
      plVar1 = (long*)( local_50 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_50 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }
   }
   lVar2 = local_58;
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
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* GetTypeInfo<Environment::FogMode, void>::get_class_info() */GetTypeInfo<Environment::FogMode,void> * __thiscall
GetTypeInfo<Environment::FogMode,void>::get_class_info(GetTypeInfo<Environment::FogMode,void> *this){
   long *plVar1;
   long lVar2;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_58 = 0;
   local_48 = "Environment::FogMode";
   local_40 = 0x14;
   String::parse_latin1((StrRange*)&local_58);
   godot::details::enum_qualified_name_to_class_info_name((details*)&local_50, (String*)&local_58);
   StringName::StringName((StringName*)&local_48, (String*)&local_50, false);
   *(undefined4*)this = 2;
   *(undefined4*)( this + 0x18 ) = 0;
   *(undefined8*)( this + 0x20 ) = 0;
   *(undefined4*)( this + 0x28 ) = 0x10006;
   *(undefined1(*) [16])( this + 8 ) = (undefined1[16])0x0;
   StringName::operator =((StringName*)( this + 0x10 ), (StringName*)&local_48);
   if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
      StringName::unref();
   }
   lVar2 = local_50;
   if (local_50 != 0) {
      LOCK();
      plVar1 = (long*)( local_50 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_50 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }
   }
   lVar2 = local_58;
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
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* Environment::_setv(StringName const&, Variant const&) */void Environment::_setv(Environment *this, StringName *param_1, Variant *param_2) {
   _set(this, param_1, param_2);
   return;
}/* MethodDefinition::~MethodDefinition() */void MethodDefinition::~MethodDefinition(MethodDefinition *this) {
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
            } while ( lVar2 != lVar5 );
         }
         Memory::free_static(plVar1 + -2, false);
      }
   }
   if (( StringName::configured != '\0' ) && ( *(long*)this != 0 )) {
      StringName::unref();
      return;
   }
   return;
}/* MethodDefinition D_METHOD<char const*>(char const*, char const* const) */char *D_METHOD<char_const*>(char *param_1, char *param_2) {
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
}/* CowData<char32_t>::_unref() */void CowData<char32_t>::_unref(CowData<char32_t> *this) {
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
}/* Environment::_validate_propertyv(PropertyInfo&) const */void Environment::_validate_propertyv(Environment *this, PropertyInfo *param_1) {
   _validate_property(this, param_1);
   return;
}/* MethodBindTRC<float, int>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<float,int>::_gen_argument_type_info(int param_1) {
   long *plVar1;
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   ulong uVar4;
   undefined8 uVar5;
   long lVar6;
   int in_EDX;
   long lVar7;
   undefined4 in_register_0000003c;
   undefined4 *puVar8;
   long in_FS_OFFSET;
   undefined8 local_b8;
   long local_b0;
   long local_a8;
   ulong local_a0;
   long local_98;
   undefined1 local_90[16];
   undefined8 local_80;
   long local_78;
   undefined4 local_70;
   undefined *local_68;
   undefined1 local_60[16];
   int local_50;
   long local_48;
   undefined4 local_40;
   long local_30;
   local_60._8_8_ = local_60._0_8_;
   puVar8 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_98 = 0;
   if (in_EDX != 0) {
      local_a0 = 0;
      local_60._0_8_ = 0;
      local_68 = &_LC7;
      String::parse_latin1((StrRange*)&local_a0);
      *puVar8 = 3;
      puVar8[6] = 0;
      *(undefined8*)( puVar8 + 8 ) = 0;
      *(undefined1(*) [16])( puVar8 + 2 ) = (undefined1[16])0x0;
      if (local_a0 == 0) {
         puVar8[10] = 6;
         LAB_001186a7:StringName::operator =((StringName*)( puVar8 + 4 ), (StringName*)&local_98);
         uVar4 = local_a0;
      } else {
         CowData<char32_t>::_ref((CowData<char32_t>*)( puVar8 + 8 ), (CowData*)&local_a0);
         puVar8[10] = 6;
         if (puVar8[6] != 0x11) goto LAB_001186a7;
         StringName::StringName((StringName*)&local_68, (String*)( puVar8 + 8 ), false);
         if (*(undefined**)( puVar8 + 4 ) == local_68) {
            uVar4 = local_a0;
            if (( StringName::configured != '\0' ) && ( local_68 != (undefined*)0x0 )) {
               StringName::unref();
               uVar4 = local_a0;
            }
         } else {
            StringName::unref();
            *(undefined**)( puVar8 + 4 ) = local_68;
            uVar4 = local_a0;
         }
      }
      local_a0 = uVar4;
      if (uVar4 != 0) {
         LOCK();
         plVar1 = (long*)( uVar4 - 0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_a0 = 0;
            Memory::free_static((void*)( uVar4 - 0x10 ), false);
         }
      }
      if (( StringName::configured != '\0' ) && ( local_98 != 0 )) {
         StringName::unref();
      }
      goto LAB_00118673;
   }
   local_80 = 0;
   local_90 = (undefined1[16])0x0;
   local_78 = 0;
   local_70 = 6;
   local_a8 = 0;
   local_b0 = 0;
   local_68 = &_LC7;
   auVar2._8_8_ = 0;
   auVar2._0_8_ = local_60._0_8_;
   local_60 = auVar2 << 0x40;
   String::parse_latin1((StrRange*)&local_b0);
   local_b8 = 0;
   local_68 = (undefined*)CONCAT44(local_68._4_4_, 2);
   local_50 = 0;
   local_48 = 0;
   local_60._0_8_ = 0;
   local_60._8_8_ = 0;
   if (local_b0 == 0) {
      LAB_001186f0:local_40 = 6;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_a8);
   } else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_b0);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_001186f0;
      StringName::StringName((StringName*)&local_a0, (String*)&local_48, false);
      if (local_60._8_8_ == local_a0) {
         if (( StringName::configured != '\0' ) && ( local_a0 != 0 )) {
            StringName::unref();
         }
      } else {
         StringName::unref();
         local_60._8_8_ = local_a0;
      }
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_b0);
   if (( StringName::configured != '\0' ) && ( local_a8 != 0 )) {
      StringName::unref();
   }
   local_98 = CONCAT44(local_98._4_4_, local_68._0_4_);
   uVar5 = local_90._0_8_;
   if (local_90._0_8_ != local_60._0_8_) {
      if (local_90._0_8_ != 0) {
         LOCK();
         plVar1 = (long*)( local_90._0_8_ + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            auVar3._8_8_ = 0;
            auVar3._0_8_ = local_90._8_8_;
            local_90 = auVar3 << 0x40;
            Memory::free_static((void*)( uVar5 + -0x10 ), false);
         }
      }
      local_90._0_8_ = local_60._0_8_;
      local_60._0_8_ = 0;
   }
   if (local_90._8_8_ != local_60._8_8_) {
      StringName::unref();
      uVar5 = local_60._8_8_;
      local_60._8_8_ = 0;
      local_90._8_8_ = uVar5;
   }
   lVar6 = local_78;
   local_80 = CONCAT44(local_80._4_4_, local_50);
   if (local_78 != local_48) {
      lVar7 = local_48;
      if (local_78 != 0) {
         LOCK();
         plVar1 = (long*)( local_78 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_78 = 0;
            Memory::free_static((void*)( lVar6 + -0x10 ), false);
            lVar7 = local_48;
         }
      }
      local_48 = 0;
      local_78 = lVar7;
   }
   local_70 = local_40;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_68);
   *puVar8 = (undefined4)local_98;
   *(undefined8*)( puVar8 + 2 ) = local_90._0_8_;
   *(undefined8*)( puVar8 + 4 ) = local_90._8_8_;
   puVar8[6] = (undefined4)local_80;
   *(long*)( puVar8 + 8 ) = local_78;
   puVar8[10] = local_70;
   LAB_00118673:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar8;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* CallableCustomMethodPointer<Environment, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */void CallableCustomMethodPointer<Environment,void>::call(CallableCustomMethodPointer<Environment,void> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
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
      };
      puVar4 = (ulong*)( (ulong)uVar3 * 0x10 + ObjectDB::object_slots );
      uVar5 = *(ulong*)( this + 0x30 ) >> 0x18 & 0x7fffffffff;
      if (uVar5 != ( *puVar4 & 0x7fffffffff )) {
         ObjectDB::spin_lock._0_1_ = '\0';
         goto LAB_00118a6f;
      }
      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] == 0) goto LAB_00118a6f;
      lVar1 = *(long*)( this + 0x28 );
      UNRECOVERED_JUMPTABLE = *(code**)( this + 0x38 );
      lVar2 = *(long*)( this + 0x40 );
      if (param_2 == 0) {
         *(undefined4*)param_4 = 0;
         if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
            UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( lVar1 + lVar2 ) + -1 );
         }
         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            for (int i_1736 = 0; i_1736 < 2; i_1736++) {
               /* WARNING: Could not recover jumptable at 0x00118a48. Too many branches */
            }
            ( *UNRECOVERED_JUMPTABLE )((long*)( lVar1 + lVar2 ), uVar5, UNRECOVERED_JUMPTABLE);
            return;
         }
         goto LAB_00118b31;
      }
      *(undefined4*)param_4 = 3;
      *(undefined4*)( param_4 + 8 ) = 0;
   } else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
      LAB_00118a6f:local_50 = 0;
      local_48 = "\', can\'t call method.";
      local_40 = 0x15;
      String::parse_latin1((StrRange*)&local_50);
      uitos((ulong)local_60);
      operator+((char *)
      local_58,(String*)"Invalid Object id \'";
      String::operator +((String*)&local_48, (String*)local_58);
      _err_print_error(&_LC78, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", (String*)&local_48, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
      CowData<char32_t>::_unref(local_58);
      CowData<char32_t>::_unref(local_60);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   }
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   LAB_00118b31:/* WARNING: Subroutine does not return */__stack_chk_fail();
}/* MethodBindT<float>::_gen_argument_type_info(int) const */undefined4 *MethodBindT<float>::_gen_argument_type_info(int param_1) {
   long *plVar1;
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   undefined1 auVar4[16];
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
   undefined1 local_60[16];
   int local_50;
   long local_48;
   undefined4 local_40;
   long local_30;
   puVar7 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *puVar7 = 0;
   puVar7[6] = 0;
   *(undefined8*)( puVar7 + 8 ) = 0;
   puVar7[10] = 6;
   *(undefined1(*) [16])( puVar7 + 2 ) = (undefined1[16])0x0;
   if (in_EDX != 0) goto LAB_00118b89;
   local_78 = 0;
   local_68 = &_LC7;
   local_80 = 0;
   auVar2._8_8_ = 0;
   auVar2._0_8_ = local_60._8_8_;
   local_60 = auVar2 << 0x40;
   String::parse_latin1((StrRange*)&local_80);
   local_88 = 0;
   local_68 = (undefined*)CONCAT44(local_68._4_4_, 3);
   local_50 = 0;
   local_48 = 0;
   local_60 = (undefined1[16])0x0;
   if (local_80 == 0) {
      LAB_00118c80:local_40 = 6;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
   } else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_00118c80;
      StringName::StringName((StringName*)&local_70, (String*)&local_48, false);
      if (local_60._8_8_ == local_70) {
         if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
            StringName::unref();
         }
      } else {
         StringName::unref();
         local_60._8_8_ = local_70;
      }
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
      StringName::unref();
   }
   *puVar7 = local_68._0_4_;
   if (*(long*)( puVar7 + 2 ) != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( puVar7 + 2 ));
      uVar5 = local_60._0_8_;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = local_60._8_8_;
      local_60 = auVar3 << 0x40;
      *(undefined8*)( puVar7 + 2 ) = uVar5;
   }
   if (*(long*)( puVar7 + 4 ) != local_60._8_8_) {
      StringName::unref();
      uVar5 = local_60._8_8_;
      local_60._8_8_ = 0;
      *(undefined8*)( puVar7 + 4 ) = uVar5;
   }
   lVar6 = local_48;
   puVar7[6] = local_50;
   if (*(long*)( puVar7 + 8 ) == local_48) {
      puVar7[10] = local_40;
      if (local_48 != 0) {
         LOCK();
         plVar1 = (long*)( local_48 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_48 = 0;
            Memory::free_static((void*)( lVar6 + -0x10 ), false);
         }
      }
   } else {
      CowData<char32_t>::_unref((CowData<char32_t>*)( puVar7 + 8 ));
      *(long*)( puVar7 + 8 ) = local_48;
      puVar7[10] = local_40;
   }
   if (( StringName::configured != '\0' ) && ( local_60._8_8_ != 0 )) {
      StringName::unref();
   }
   uVar5 = local_60._0_8_;
   if (local_60._0_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_60._0_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         auVar4._8_8_ = 0;
         auVar4._0_8_ = local_60._8_8_;
         local_60 = auVar4 << 0x40;
         Memory::free_static((void*)( uVar5 + -0x10 ), false);
      }
   }
   LAB_00118b89:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return puVar7;
}/* MethodBindT<Vector3 const&>::_gen_argument_type_info(int) const */undefined4 *MethodBindT<Vector3_const&>::_gen_argument_type_info(int param_1) {
   long *plVar1;
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   undefined1 auVar4[16];
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
   undefined1 local_60[16];
   int local_50;
   long local_48;
   undefined4 local_40;
   long local_30;
   puVar7 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *puVar7 = 0;
   puVar7[6] = 0;
   *(undefined8*)( puVar7 + 8 ) = 0;
   puVar7[10] = 6;
   *(undefined1(*) [16])( puVar7 + 2 ) = (undefined1[16])0x0;
   if (in_EDX != 0) goto LAB_00118e39;
   local_78 = 0;
   local_68 = &_LC7;
   local_80 = 0;
   auVar2._8_8_ = 0;
   auVar2._0_8_ = local_60._8_8_;
   local_60 = auVar2 << 0x40;
   String::parse_latin1((StrRange*)&local_80);
   local_88 = 0;
   local_68 = (undefined*)CONCAT44(local_68._4_4_, 9);
   local_50 = 0;
   local_48 = 0;
   local_60 = (undefined1[16])0x0;
   if (local_80 == 0) {
      LAB_00118f30:local_40 = 6;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
   } else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_00118f30;
      StringName::StringName((StringName*)&local_70, (String*)&local_48, false);
      if (local_60._8_8_ == local_70) {
         if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
            StringName::unref();
         }
      } else {
         StringName::unref();
         local_60._8_8_ = local_70;
      }
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
      StringName::unref();
   }
   *puVar7 = local_68._0_4_;
   if (*(long*)( puVar7 + 2 ) != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( puVar7 + 2 ));
      uVar5 = local_60._0_8_;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = local_60._8_8_;
      local_60 = auVar3 << 0x40;
      *(undefined8*)( puVar7 + 2 ) = uVar5;
   }
   if (*(long*)( puVar7 + 4 ) != local_60._8_8_) {
      StringName::unref();
      uVar5 = local_60._8_8_;
      local_60._8_8_ = 0;
      *(undefined8*)( puVar7 + 4 ) = uVar5;
   }
   lVar6 = local_48;
   puVar7[6] = local_50;
   if (*(long*)( puVar7 + 8 ) == local_48) {
      puVar7[10] = local_40;
      if (local_48 != 0) {
         LOCK();
         plVar1 = (long*)( local_48 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_48 = 0;
            Memory::free_static((void*)( lVar6 + -0x10 ), false);
         }
      }
   } else {
      CowData<char32_t>::_unref((CowData<char32_t>*)( puVar7 + 8 ));
      *(long*)( puVar7 + 8 ) = local_48;
      puVar7[10] = local_40;
   }
   if (( StringName::configured != '\0' ) && ( local_60._8_8_ != 0 )) {
      StringName::unref();
   }
   uVar5 = local_60._0_8_;
   if (local_60._0_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_60._0_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         auVar4._8_8_ = 0;
         auVar4._0_8_ = local_60._8_8_;
         local_60 = auVar4 << 0x40;
         Memory::free_static((void*)( uVar5 + -0x10 ), false);
      }
   }
   LAB_00118e39:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return puVar7;
}/* MethodBindT<bool>::_gen_argument_type_info(int) const */undefined4 *MethodBindT<bool>::_gen_argument_type_info(int param_1) {
   long *plVar1;
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   undefined1 auVar4[16];
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
   undefined1 local_60[16];
   int local_50;
   long local_48;
   undefined4 local_40;
   long local_30;
   puVar7 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *puVar7 = 0;
   puVar7[6] = 0;
   *(undefined8*)( puVar7 + 8 ) = 0;
   puVar7[10] = 6;
   *(undefined1(*) [16])( puVar7 + 2 ) = (undefined1[16])0x0;
   if (in_EDX != 0) goto LAB_001190e9;
   local_78 = 0;
   local_68 = &_LC7;
   local_80 = 0;
   auVar2._8_8_ = 0;
   auVar2._0_8_ = local_60._8_8_;
   local_60 = auVar2 << 0x40;
   String::parse_latin1((StrRange*)&local_80);
   local_88 = 0;
   local_68 = (undefined*)CONCAT44(local_68._4_4_, 1);
   local_50 = 0;
   local_48 = 0;
   local_60 = (undefined1[16])0x0;
   if (local_80 == 0) {
      LAB_001191e0:local_40 = 6;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
   } else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_001191e0;
      StringName::StringName((StringName*)&local_70, (String*)&local_48, false);
      if (local_60._8_8_ == local_70) {
         if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
            StringName::unref();
         }
      } else {
         StringName::unref();
         local_60._8_8_ = local_70;
      }
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
      StringName::unref();
   }
   *puVar7 = local_68._0_4_;
   if (*(long*)( puVar7 + 2 ) != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( puVar7 + 2 ));
      uVar5 = local_60._0_8_;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = local_60._8_8_;
      local_60 = auVar3 << 0x40;
      *(undefined8*)( puVar7 + 2 ) = uVar5;
   }
   if (*(long*)( puVar7 + 4 ) != local_60._8_8_) {
      StringName::unref();
      uVar5 = local_60._8_8_;
      local_60._8_8_ = 0;
      *(undefined8*)( puVar7 + 4 ) = uVar5;
   }
   lVar6 = local_48;
   puVar7[6] = local_50;
   if (*(long*)( puVar7 + 8 ) == local_48) {
      puVar7[10] = local_40;
      if (local_48 != 0) {
         LOCK();
         plVar1 = (long*)( local_48 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_48 = 0;
            Memory::free_static((void*)( lVar6 + -0x10 ), false);
         }
      }
   } else {
      CowData<char32_t>::_unref((CowData<char32_t>*)( puVar7 + 8 ));
      *(long*)( puVar7 + 8 ) = local_48;
      puVar7[10] = local_40;
   }
   if (( StringName::configured != '\0' ) && ( local_60._8_8_ != 0 )) {
      StringName::unref();
   }
   uVar5 = local_60._0_8_;
   if (local_60._0_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_60._0_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         auVar4._8_8_ = 0;
         auVar4._0_8_ = local_60._8_8_;
         local_60 = auVar4 << 0x40;
         Memory::free_static((void*)( uVar5 + -0x10 ), false);
      }
   }
   LAB_001190e9:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return puVar7;
}/* MethodBindT<Ref<Sky> const&>::_gen_argument_type_info(int) const */undefined4 *MethodBindT<Ref<Sky>const&>::_gen_argument_type_info(int param_1) {
   long *plVar1;
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   undefined8 uVar4;
   long lVar5;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar6;
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
   puVar6 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *puVar6 = 0;
   puVar6[6] = 0;
   *(undefined8*)( puVar6 + 8 ) = 0;
   puVar6[10] = 6;
   *(undefined1(*) [16])( puVar6 + 2 ) = (undefined1[16])0x0;
   if (in_EDX != 0) goto LAB_00119399;
   local_78 = 0;
   local_68 = &_LC24;
   local_80 = 0;
   local_60._0_8_ = 3;
   String::parse_latin1((StrRange*)&local_80);
   local_88 = 0;
   local_68 = (undefined*)CONCAT44(local_68._4_4_, 0x18);
   local_50 = 0x11;
   local_48 = 0;
   local_60 = (undefined1[16])0x0;
   if (local_80 == 0) {
      LAB_0011956d:local_40 = 6;
      StringName::StringName((StringName*)&local_70, (String*)&local_48, false);
      if (local_60._8_8_ == local_70) {
         if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
            StringName::unref();
         }
      } else {
         StringName::unref();
         local_60._8_8_ = local_70;
      }
   } else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
      local_40 = 6;
      if (local_50 == 0x11) goto LAB_0011956d;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
      StringName::unref();
   }
   *puVar6 = local_68._0_4_;
   if (*(long*)( puVar6 + 2 ) != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( puVar6 + 2 ));
      uVar4 = local_60._0_8_;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_60._8_8_;
      local_60 = auVar2 << 0x40;
      *(undefined8*)( puVar6 + 2 ) = uVar4;
   }
   if (*(long*)( puVar6 + 4 ) != local_60._8_8_) {
      StringName::unref();
      uVar4 = local_60._8_8_;
      local_60._8_8_ = 0;
      *(undefined8*)( puVar6 + 4 ) = uVar4;
   }
   lVar5 = local_48;
   puVar6[6] = local_50;
   if (*(long*)( puVar6 + 8 ) == local_48) {
      puVar6[10] = local_40;
      if (local_48 != 0) {
         LOCK();
         plVar1 = (long*)( local_48 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_48 = 0;
            Memory::free_static((void*)( lVar5 + -0x10 ), false);
         }
      }
   } else {
      CowData<char32_t>::_unref((CowData<char32_t>*)( puVar6 + 8 ));
      *(long*)( puVar6 + 8 ) = local_48;
      puVar6[10] = local_40;
   }
   if (( StringName::configured != '\0' ) && ( local_60._8_8_ != 0 )) {
      StringName::unref();
   }
   uVar4 = local_60._0_8_;
   if (local_60._0_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_60._0_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         auVar3._8_8_ = 0;
         auVar3._0_8_ = local_60._8_8_;
         local_60 = auVar3 << 0x40;
         Memory::free_static((void*)( uVar4 + -0x10 ), false);
      }
   }
   LAB_00119399:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return puVar6;
}/* MethodBindT<int>::_gen_argument_type_info(int) const */undefined4 *MethodBindT<int>::_gen_argument_type_info(int param_1) {
   long *plVar1;
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   undefined1 auVar4[16];
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
   undefined1 local_60[16];
   int local_50;
   long local_48;
   undefined4 local_40;
   long local_30;
   puVar7 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *puVar7 = 0;
   puVar7[6] = 0;
   *(undefined8*)( puVar7 + 8 ) = 0;
   puVar7[10] = 6;
   *(undefined1(*) [16])( puVar7 + 2 ) = (undefined1[16])0x0;
   if (in_EDX != 0) goto LAB_00119659;
   local_78 = 0;
   local_68 = &_LC7;
   local_80 = 0;
   auVar2._8_8_ = 0;
   auVar2._0_8_ = local_60._8_8_;
   local_60 = auVar2 << 0x40;
   String::parse_latin1((StrRange*)&local_80);
   local_88 = 0;
   local_68 = (undefined*)CONCAT44(local_68._4_4_, 2);
   local_50 = 0;
   local_48 = 0;
   local_60 = (undefined1[16])0x0;
   if (local_80 == 0) {
      LAB_00119750:local_40 = 6;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
   } else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_00119750;
      StringName::StringName((StringName*)&local_70, (String*)&local_48, false);
      if (local_60._8_8_ == local_70) {
         if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
            StringName::unref();
         }
      } else {
         StringName::unref();
         local_60._8_8_ = local_70;
      }
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
      StringName::unref();
   }
   *puVar7 = local_68._0_4_;
   if (*(long*)( puVar7 + 2 ) != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( puVar7 + 2 ));
      uVar5 = local_60._0_8_;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = local_60._8_8_;
      local_60 = auVar3 << 0x40;
      *(undefined8*)( puVar7 + 2 ) = uVar5;
   }
   if (*(long*)( puVar7 + 4 ) != local_60._8_8_) {
      StringName::unref();
      uVar5 = local_60._8_8_;
      local_60._8_8_ = 0;
      *(undefined8*)( puVar7 + 4 ) = uVar5;
   }
   lVar6 = local_48;
   puVar7[6] = local_50;
   if (*(long*)( puVar7 + 8 ) == local_48) {
      puVar7[10] = local_40;
      if (local_48 != 0) {
         LOCK();
         plVar1 = (long*)( local_48 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_48 = 0;
            Memory::free_static((void*)( lVar6 + -0x10 ), false);
         }
      }
   } else {
      CowData<char32_t>::_unref((CowData<char32_t>*)( puVar7 + 8 ));
      *(long*)( puVar7 + 8 ) = local_48;
      puVar7[10] = local_40;
   }
   if (( StringName::configured != '\0' ) && ( local_60._8_8_ != 0 )) {
      StringName::unref();
   }
   uVar5 = local_60._0_8_;
   if (local_60._0_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_60._0_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         auVar4._8_8_ = 0;
         auVar4._0_8_ = local_60._8_8_;
         local_60 = auVar4 << 0x40;
         Memory::free_static((void*)( uVar5 + -0x10 ), false);
      }
   }
   LAB_00119659:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return puVar7;
}/* MethodBindT<Ref<Texture> >::_gen_argument_type_info(int) const */undefined4 *MethodBindT<Ref<Texture>>::_gen_argument_type_info(int param_1) {
   long *plVar1;
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   undefined8 uVar4;
   long lVar5;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar6;
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
   puVar6 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *puVar6 = 0;
   puVar6[6] = 0;
   *(undefined8*)( puVar6 + 8 ) = 0;
   puVar6[10] = 6;
   *(undefined1(*) [16])( puVar6 + 2 ) = (undefined1[16])0x0;
   if (in_EDX != 0) goto LAB_00119909;
   local_78 = 0;
   local_68 = "Texture";
   local_80 = 0;
   local_60._0_8_ = 7;
   String::parse_latin1((StrRange*)&local_80);
   local_88 = 0;
   local_68 = (char*)CONCAT44(local_68._4_4_, 0x18);
   local_50 = 0x11;
   local_48 = 0;
   local_60 = (undefined1[16])0x0;
   if (local_80 == 0) {
      LAB_00119add:local_40 = 6;
      StringName::StringName((StringName*)&local_70, (String*)&local_48, false);
      if (local_60._8_8_ == local_70) {
         if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
            StringName::unref();
         }
      } else {
         StringName::unref();
         local_60._8_8_ = local_70;
      }
   } else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
      local_40 = 6;
      if (local_50 == 0x11) goto LAB_00119add;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
      StringName::unref();
   }
   *puVar6 = local_68._0_4_;
   if (*(long*)( puVar6 + 2 ) != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( puVar6 + 2 ));
      uVar4 = local_60._0_8_;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_60._8_8_;
      local_60 = auVar2 << 0x40;
      *(undefined8*)( puVar6 + 2 ) = uVar4;
   }
   if (*(long*)( puVar6 + 4 ) != local_60._8_8_) {
      StringName::unref();
      uVar4 = local_60._8_8_;
      local_60._8_8_ = 0;
      *(undefined8*)( puVar6 + 4 ) = uVar4;
   }
   lVar5 = local_48;
   puVar6[6] = local_50;
   if (*(long*)( puVar6 + 8 ) == local_48) {
      puVar6[10] = local_40;
      if (local_48 != 0) {
         LOCK();
         plVar1 = (long*)( local_48 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_48 = 0;
            Memory::free_static((void*)( lVar5 + -0x10 ), false);
         }
      }
   } else {
      CowData<char32_t>::_unref((CowData<char32_t>*)( puVar6 + 8 ));
      *(long*)( puVar6 + 8 ) = local_48;
      puVar6[10] = local_40;
   }
   if (( StringName::configured != '\0' ) && ( local_60._8_8_ != 0 )) {
      StringName::unref();
   }
   uVar4 = local_60._0_8_;
   if (local_60._0_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_60._0_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         auVar3._8_8_ = 0;
         auVar3._0_8_ = local_60._8_8_;
         local_60 = auVar3 << 0x40;
         Memory::free_static((void*)( uVar4 + -0x10 ), false);
      }
   }
   LAB_00119909:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return puVar6;
}/* MethodBindT<Color const&>::_gen_argument_type_info(int) const */undefined4 *MethodBindT<Color_const&>::_gen_argument_type_info(int param_1) {
   long *plVar1;
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   undefined1 auVar4[16];
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
   undefined1 local_60[16];
   int local_50;
   long local_48;
   undefined4 local_40;
   long local_30;
   puVar7 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *puVar7 = 0;
   puVar7[6] = 0;
   *(undefined8*)( puVar7 + 8 ) = 0;
   puVar7[10] = 6;
   *(undefined1(*) [16])( puVar7 + 2 ) = (undefined1[16])0x0;
   if (in_EDX != 0) goto LAB_00119bc9;
   local_78 = 0;
   local_68 = &_LC7;
   local_80 = 0;
   auVar2._8_8_ = 0;
   auVar2._0_8_ = local_60._8_8_;
   local_60 = auVar2 << 0x40;
   String::parse_latin1((StrRange*)&local_80);
   local_88 = 0;
   local_68 = (undefined*)CONCAT44(local_68._4_4_, 0x14);
   local_50 = 0;
   local_48 = 0;
   local_60 = (undefined1[16])0x0;
   if (local_80 == 0) {
      LAB_00119cc0:local_40 = 6;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
   } else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_00119cc0;
      StringName::StringName((StringName*)&local_70, (String*)&local_48, false);
      if (local_60._8_8_ == local_70) {
         if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
            StringName::unref();
         }
      } else {
         StringName::unref();
         local_60._8_8_ = local_70;
      }
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
      StringName::unref();
   }
   *puVar7 = local_68._0_4_;
   if (*(long*)( puVar7 + 2 ) != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( puVar7 + 2 ));
      uVar5 = local_60._0_8_;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = local_60._8_8_;
      local_60 = auVar3 << 0x40;
      *(undefined8*)( puVar7 + 2 ) = uVar5;
   }
   if (*(long*)( puVar7 + 4 ) != local_60._8_8_) {
      StringName::unref();
      uVar5 = local_60._8_8_;
      local_60._8_8_ = 0;
      *(undefined8*)( puVar7 + 4 ) = uVar5;
   }
   lVar6 = local_48;
   puVar7[6] = local_50;
   if (*(long*)( puVar7 + 8 ) == local_48) {
      puVar7[10] = local_40;
      if (local_48 != 0) {
         LOCK();
         plVar1 = (long*)( local_48 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_48 = 0;
            Memory::free_static((void*)( lVar6 + -0x10 ), false);
         }
      }
   } else {
      CowData<char32_t>::_unref((CowData<char32_t>*)( puVar7 + 8 ));
      *(long*)( puVar7 + 8 ) = local_48;
      puVar7[10] = local_40;
   }
   if (( StringName::configured != '\0' ) && ( local_60._8_8_ != 0 )) {
      StringName::unref();
   }
   uVar5 = local_60._0_8_;
   if (local_60._0_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_60._0_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         auVar4._8_8_ = 0;
         auVar4._0_8_ = local_60._8_8_;
         local_60 = auVar4 << 0x40;
         Memory::free_static((void*)( uVar5 + -0x10 ), false);
      }
   }
   LAB_00119bc9:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return puVar7;
}/* MethodBindT<Color>::_gen_argument_type_info(int) const */undefined4 *MethodBindT<Color>::_gen_argument_type_info(int param_1) {
   long *plVar1;
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   undefined1 auVar4[16];
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
   undefined1 local_60[16];
   int local_50;
   long local_48;
   undefined4 local_40;
   long local_30;
   puVar7 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *puVar7 = 0;
   puVar7[6] = 0;
   *(undefined8*)( puVar7 + 8 ) = 0;
   puVar7[10] = 6;
   *(undefined1(*) [16])( puVar7 + 2 ) = (undefined1[16])0x0;
   if (in_EDX != 0) goto LAB_00119e79;
   local_78 = 0;
   local_68 = &_LC7;
   local_80 = 0;
   auVar2._8_8_ = 0;
   auVar2._0_8_ = local_60._8_8_;
   local_60 = auVar2 << 0x40;
   String::parse_latin1((StrRange*)&local_80);
   local_88 = 0;
   local_68 = (undefined*)CONCAT44(local_68._4_4_, 0x14);
   local_50 = 0;
   local_48 = 0;
   local_60 = (undefined1[16])0x0;
   if (local_80 == 0) {
      LAB_00119f70:local_40 = 6;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
   } else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_00119f70;
      StringName::StringName((StringName*)&local_70, (String*)&local_48, false);
      if (local_60._8_8_ == local_70) {
         if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
            StringName::unref();
         }
      } else {
         StringName::unref();
         local_60._8_8_ = local_70;
      }
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
      StringName::unref();
   }
   *puVar7 = local_68._0_4_;
   if (*(long*)( puVar7 + 2 ) != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( puVar7 + 2 ));
      uVar5 = local_60._0_8_;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = local_60._8_8_;
      local_60 = auVar3 << 0x40;
      *(undefined8*)( puVar7 + 2 ) = uVar5;
   }
   if (*(long*)( puVar7 + 4 ) != local_60._8_8_) {
      StringName::unref();
      uVar5 = local_60._8_8_;
      local_60._8_8_ = 0;
      *(undefined8*)( puVar7 + 4 ) = uVar5;
   }
   lVar6 = local_48;
   puVar7[6] = local_50;
   if (*(long*)( puVar7 + 8 ) == local_48) {
      puVar7[10] = local_40;
      if (local_48 != 0) {
         LOCK();
         plVar1 = (long*)( local_48 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_48 = 0;
            Memory::free_static((void*)( lVar6 + -0x10 ), false);
         }
      }
   } else {
      CowData<char32_t>::_unref((CowData<char32_t>*)( puVar7 + 8 ));
      *(long*)( puVar7 + 8 ) = local_48;
      puVar7[10] = local_40;
   }
   if (( StringName::configured != '\0' ) && ( local_60._8_8_ != 0 )) {
      StringName::unref();
   }
   uVar5 = local_60._0_8_;
   if (local_60._0_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_60._0_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         auVar4._8_8_ = 0;
         auVar4._0_8_ = local_60._8_8_;
         local_60 = auVar4 << 0x40;
         Memory::free_static((void*)( uVar5 + -0x10 ), false);
      }
   }
   LAB_00119e79:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return puVar7;
}/* MethodBindT<Environment::SDFGIYScale>::_gen_argument_type_info(int) const */undefined4 *MethodBindT<Environment::SDFGIYScale>::_gen_argument_type_info(int param_1) {
   long *plVar1;
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   undefined8 uVar4;
   long lVar5;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar6;
   long in_FS_OFFSET;
   long local_90;
   details local_88[8];
   undefined8 local_80;
   undefined8 local_78;
   undefined8 local_70;
   char *local_68;
   undefined1 local_60[16];
   undefined8 local_50;
   long local_48;
   undefined4 local_40;
   long local_30;
   puVar6 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *puVar6 = 0;
   puVar6[6] = 0;
   *(undefined8*)( puVar6 + 8 ) = 0;
   puVar6[10] = 6;
   *(undefined1(*) [16])( puVar6 + 2 ) = (undefined1[16])0x0;
   if (in_EDX == 0) {
      local_80 = 0;
      local_68 = "Environment::SDFGIYScale";
      local_60._0_8_ = 0x18;
      String::parse_latin1((StrRange*)&local_80);
      godot::details::enum_qualified_name_to_class_info_name(local_88, (String*)&local_80);
      StringName::StringName((StringName*)&local_90, (String*)local_88, false);
      local_60 = (undefined1[16])0x0;
      local_78 = 0;
      local_70 = 0;
      local_68 = (char*)0x2;
      local_50 = 0;
      local_48 = 0;
      local_40 = 0x10006;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_90);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      if (( StringName::configured != '\0' ) && ( local_90 != 0 )) {
         StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t>*)local_88);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      *puVar6 = local_68._0_4_;
      if (*(long*)( puVar6 + 2 ) != local_60._0_8_) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( puVar6 + 2 ));
         uVar4 = local_60._0_8_;
         auVar2._8_8_ = 0;
         auVar2._0_8_ = local_60._8_8_;
         local_60 = auVar2 << 0x40;
         *(undefined8*)( puVar6 + 2 ) = uVar4;
      }
      if (*(long*)( puVar6 + 4 ) != local_60._8_8_) {
         StringName::unref();
         uVar4 = local_60._8_8_;
         local_60._8_8_ = 0;
         *(undefined8*)( puVar6 + 4 ) = uVar4;
      }
      lVar5 = local_48;
      puVar6[6] = (undefined4)local_50;
      if (*(long*)( puVar6 + 8 ) == local_48) {
         puVar6[10] = local_40;
         if (local_48 != 0) {
            LOCK();
            plVar1 = (long*)( local_48 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_48 = 0;
               Memory::free_static((void*)( lVar5 + -0x10 ), false);
            }
         }
      } else {
         CowData<char32_t>::_unref((CowData<char32_t>*)( puVar6 + 8 ));
         *(long*)( puVar6 + 8 ) = local_48;
         puVar6[10] = local_40;
      }
      if (( StringName::configured != '\0' ) && ( local_60._8_8_ != 0 )) {
         StringName::unref();
      }
      uVar4 = local_60._0_8_;
      if (local_60._0_8_ != 0) {
         LOCK();
         plVar1 = (long*)( local_60._0_8_ + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            auVar3._8_8_ = 0;
            auVar3._0_8_ = local_60._8_8_;
            local_60 = auVar3 << 0x40;
            Memory::free_static((void*)( uVar4 + -0x10 ), false);
         }
      }
   }
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar6;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* MethodBindT<Environment::AmbientSource>::_gen_argument_type_info(int) const */undefined4 *MethodBindT<Environment::AmbientSource>::_gen_argument_type_info(int param_1) {
   long *plVar1;
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   undefined8 uVar4;
   long lVar5;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar6;
   long in_FS_OFFSET;
   long local_90;
   details local_88[8];
   undefined8 local_80;
   undefined8 local_78;
   undefined8 local_70;
   char *local_68;
   undefined1 local_60[16];
   undefined8 local_50;
   long local_48;
   undefined4 local_40;
   long local_30;
   puVar6 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *puVar6 = 0;
   puVar6[6] = 0;
   *(undefined8*)( puVar6 + 8 ) = 0;
   puVar6[10] = 6;
   *(undefined1(*) [16])( puVar6 + 2 ) = (undefined1[16])0x0;
   if (in_EDX == 0) {
      local_80 = 0;
      local_68 = "Environment::AmbientSource";
      local_60._0_8_ = 0x1a;
      String::parse_latin1((StrRange*)&local_80);
      godot::details::enum_qualified_name_to_class_info_name(local_88, (String*)&local_80);
      StringName::StringName((StringName*)&local_90, (String*)local_88, false);
      local_60 = (undefined1[16])0x0;
      local_78 = 0;
      local_70 = 0;
      local_68 = (char*)0x2;
      local_50 = 0;
      local_48 = 0;
      local_40 = 0x10006;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_90);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      if (( StringName::configured != '\0' ) && ( local_90 != 0 )) {
         StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t>*)local_88);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      *puVar6 = local_68._0_4_;
      if (*(long*)( puVar6 + 2 ) != local_60._0_8_) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( puVar6 + 2 ));
         uVar4 = local_60._0_8_;
         auVar2._8_8_ = 0;
         auVar2._0_8_ = local_60._8_8_;
         local_60 = auVar2 << 0x40;
         *(undefined8*)( puVar6 + 2 ) = uVar4;
      }
      if (*(long*)( puVar6 + 4 ) != local_60._8_8_) {
         StringName::unref();
         uVar4 = local_60._8_8_;
         local_60._8_8_ = 0;
         *(undefined8*)( puVar6 + 4 ) = uVar4;
      }
      lVar5 = local_48;
      puVar6[6] = (undefined4)local_50;
      if (*(long*)( puVar6 + 8 ) == local_48) {
         puVar6[10] = local_40;
         if (local_48 != 0) {
            LOCK();
            plVar1 = (long*)( local_48 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_48 = 0;
               Memory::free_static((void*)( lVar5 + -0x10 ), false);
            }
         }
      } else {
         CowData<char32_t>::_unref((CowData<char32_t>*)( puVar6 + 8 ));
         *(long*)( puVar6 + 8 ) = local_48;
         puVar6[10] = local_40;
      }
      if (( StringName::configured != '\0' ) && ( local_60._8_8_ != 0 )) {
         StringName::unref();
      }
      uVar4 = local_60._0_8_;
      if (local_60._0_8_ != 0) {
         LOCK();
         plVar1 = (long*)( local_60._0_8_ + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            auVar3._8_8_ = 0;
            auVar3._0_8_ = local_60._8_8_;
            local_60 = auVar3 << 0x40;
            Memory::free_static((void*)( uVar4 + -0x10 ), false);
         }
      }
   }
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar6;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* MethodBindT<Environment::ReflectionSource>::_gen_argument_type_info(int) const */undefined4 *MethodBindT<Environment::ReflectionSource>::_gen_argument_type_info(int param_1) {
   long *plVar1;
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   undefined8 uVar4;
   long lVar5;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar6;
   long in_FS_OFFSET;
   long local_90;
   details local_88[8];
   undefined8 local_80;
   undefined8 local_78;
   undefined8 local_70;
   char *local_68;
   undefined1 local_60[16];
   undefined8 local_50;
   long local_48;
   undefined4 local_40;
   long local_30;
   puVar6 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *puVar6 = 0;
   puVar6[6] = 0;
   *(undefined8*)( puVar6 + 8 ) = 0;
   puVar6[10] = 6;
   *(undefined1(*) [16])( puVar6 + 2 ) = (undefined1[16])0x0;
   if (in_EDX == 0) {
      local_80 = 0;
      local_68 = "Environment::ReflectionSource";
      local_60._0_8_ = 0x1d;
      String::parse_latin1((StrRange*)&local_80);
      godot::details::enum_qualified_name_to_class_info_name(local_88, (String*)&local_80);
      StringName::StringName((StringName*)&local_90, (String*)local_88, false);
      local_60 = (undefined1[16])0x0;
      local_78 = 0;
      local_70 = 0;
      local_68 = (char*)0x2;
      local_50 = 0;
      local_48 = 0;
      local_40 = 0x10006;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_90);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      if (( StringName::configured != '\0' ) && ( local_90 != 0 )) {
         StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t>*)local_88);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      *puVar6 = local_68._0_4_;
      if (*(long*)( puVar6 + 2 ) != local_60._0_8_) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( puVar6 + 2 ));
         uVar4 = local_60._0_8_;
         auVar2._8_8_ = 0;
         auVar2._0_8_ = local_60._8_8_;
         local_60 = auVar2 << 0x40;
         *(undefined8*)( puVar6 + 2 ) = uVar4;
      }
      if (*(long*)( puVar6 + 4 ) != local_60._8_8_) {
         StringName::unref();
         uVar4 = local_60._8_8_;
         local_60._8_8_ = 0;
         *(undefined8*)( puVar6 + 4 ) = uVar4;
      }
      lVar5 = local_48;
      puVar6[6] = (undefined4)local_50;
      if (*(long*)( puVar6 + 8 ) == local_48) {
         puVar6[10] = local_40;
         if (local_48 != 0) {
            LOCK();
            plVar1 = (long*)( local_48 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_48 = 0;
               Memory::free_static((void*)( lVar5 + -0x10 ), false);
            }
         }
      } else {
         CowData<char32_t>::_unref((CowData<char32_t>*)( puVar6 + 8 ));
         *(long*)( puVar6 + 8 ) = local_48;
         puVar6[10] = local_40;
      }
      if (( StringName::configured != '\0' ) && ( local_60._8_8_ != 0 )) {
         StringName::unref();
      }
      uVar4 = local_60._0_8_;
      if (local_60._0_8_ != 0) {
         LOCK();
         plVar1 = (long*)( local_60._0_8_ + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            auVar3._8_8_ = 0;
            auVar3._0_8_ = local_60._8_8_;
            local_60 = auVar3 << 0x40;
            Memory::free_static((void*)( uVar4 + -0x10 ), false);
         }
      }
   }
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar6;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* MethodBindT<Environment::ToneMapper>::_gen_argument_type_info(int) const */undefined4 *MethodBindT<Environment::ToneMapper>::_gen_argument_type_info(int param_1) {
   long *plVar1;
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   undefined8 uVar4;
   long lVar5;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar6;
   long in_FS_OFFSET;
   undefined8 local_90;
   undefined8 local_88;
   undefined8 local_80;
   details local_78[8];
   long local_70;
   char *local_68;
   undefined1 local_60[16];
   undefined8 local_50;
   long local_48;
   undefined4 local_40;
   long local_30;
   puVar6 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *puVar6 = 0;
   puVar6[6] = 0;
   *(undefined8*)( puVar6 + 8 ) = 0;
   puVar6[10] = 6;
   *(undefined1(*) [16])( puVar6 + 2 ) = (undefined1[16])0x0;
   if (in_EDX == 0) {
      local_80 = 0;
      local_68 = "Environment::ToneMapper";
      local_60._0_8_ = 0x17;
      String::parse_latin1((StrRange*)&local_80);
      godot::details::enum_qualified_name_to_class_info_name(local_78, (String*)&local_80);
      StringName::StringName((StringName*)&local_70, (String*)local_78, false);
      local_60 = (undefined1[16])0x0;
      local_88 = 0;
      local_90 = 0;
      local_68 = (char*)0x2;
      local_50 = 0;
      local_48 = 0;
      local_40 = 0x10006;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
         StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t>*)local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      *puVar6 = local_68._0_4_;
      if (*(long*)( puVar6 + 2 ) != local_60._0_8_) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( puVar6 + 2 ));
         uVar4 = local_60._0_8_;
         auVar2._8_8_ = 0;
         auVar2._0_8_ = local_60._8_8_;
         local_60 = auVar2 << 0x40;
         *(undefined8*)( puVar6 + 2 ) = uVar4;
      }
      if (*(long*)( puVar6 + 4 ) != local_60._8_8_) {
         StringName::unref();
         uVar4 = local_60._8_8_;
         local_60._8_8_ = 0;
         *(undefined8*)( puVar6 + 4 ) = uVar4;
      }
      lVar5 = local_48;
      puVar6[6] = (undefined4)local_50;
      if (*(long*)( puVar6 + 8 ) == local_48) {
         puVar6[10] = local_40;
         if (local_48 != 0) {
            LOCK();
            plVar1 = (long*)( local_48 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_48 = 0;
               Memory::free_static((void*)( lVar5 + -0x10 ), false);
            }
         }
      } else {
         CowData<char32_t>::_unref((CowData<char32_t>*)( puVar6 + 8 ));
         *(long*)( puVar6 + 8 ) = local_48;
         puVar6[10] = local_40;
      }
      if (( StringName::configured != '\0' ) && ( local_60._8_8_ != 0 )) {
         StringName::unref();
      }
      uVar4 = local_60._0_8_;
      if (local_60._0_8_ != 0) {
         LOCK();
         plVar1 = (long*)( local_60._0_8_ + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            auVar3._8_8_ = 0;
            auVar3._0_8_ = local_60._8_8_;
            local_60 = auVar3 << 0x40;
            Memory::free_static((void*)( uVar4 + -0x10 ), false);
         }
      }
   }
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar6;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* MethodBindT<Environment::BGMode>::_gen_argument_type_info(int) const */undefined4 *MethodBindT<Environment::BGMode>::_gen_argument_type_info(int param_1) {
   long *plVar1;
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   undefined8 uVar4;
   long lVar5;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar6;
   long in_FS_OFFSET;
   undefined8 local_90;
   undefined8 local_88;
   undefined8 local_80;
   details local_78[8];
   long local_70;
   char *local_68;
   undefined1 local_60[16];
   undefined8 local_50;
   long local_48;
   undefined4 local_40;
   long local_30;
   puVar6 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *puVar6 = 0;
   puVar6[6] = 0;
   *(undefined8*)( puVar6 + 8 ) = 0;
   puVar6[10] = 6;
   *(undefined1(*) [16])( puVar6 + 2 ) = (undefined1[16])0x0;
   if (in_EDX == 0) {
      local_80 = 0;
      local_68 = "Environment::BGMode";
      local_60._0_8_ = 0x13;
      String::parse_latin1((StrRange*)&local_80);
      godot::details::enum_qualified_name_to_class_info_name(local_78, (String*)&local_80);
      StringName::StringName((StringName*)&local_70, (String*)local_78, false);
      local_60 = (undefined1[16])0x0;
      local_88 = 0;
      local_90 = 0;
      local_68 = (char*)0x2;
      local_50 = 0;
      local_48 = 0;
      local_40 = 0x10006;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
         StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t>*)local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      *puVar6 = local_68._0_4_;
      if (*(long*)( puVar6 + 2 ) != local_60._0_8_) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( puVar6 + 2 ));
         uVar4 = local_60._0_8_;
         auVar2._8_8_ = 0;
         auVar2._0_8_ = local_60._8_8_;
         local_60 = auVar2 << 0x40;
         *(undefined8*)( puVar6 + 2 ) = uVar4;
      }
      if (*(long*)( puVar6 + 4 ) != local_60._8_8_) {
         StringName::unref();
         uVar4 = local_60._8_8_;
         local_60._8_8_ = 0;
         *(undefined8*)( puVar6 + 4 ) = uVar4;
      }
      lVar5 = local_48;
      puVar6[6] = (undefined4)local_50;
      if (*(long*)( puVar6 + 8 ) == local_48) {
         puVar6[10] = local_40;
         if (local_48 != 0) {
            LOCK();
            plVar1 = (long*)( local_48 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_48 = 0;
               Memory::free_static((void*)( lVar5 + -0x10 ), false);
            }
         }
      } else {
         CowData<char32_t>::_unref((CowData<char32_t>*)( puVar6 + 8 ));
         *(long*)( puVar6 + 8 ) = local_48;
         puVar6[10] = local_40;
      }
      if (( StringName::configured != '\0' ) && ( local_60._8_8_ != 0 )) {
         StringName::unref();
      }
      uVar4 = local_60._0_8_;
      if (local_60._0_8_ != 0) {
         LOCK();
         plVar1 = (long*)( local_60._0_8_ + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            auVar3._8_8_ = 0;
            auVar3._0_8_ = local_60._8_8_;
            local_60 = auVar3 << 0x40;
            Memory::free_static((void*)( uVar4 + -0x10 ), false);
         }
      }
   }
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar6;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* MethodBindT<Environment::FogMode>::_gen_argument_type_info(int) const */undefined4 *MethodBindT<Environment::FogMode>::_gen_argument_type_info(int param_1) {
   long *plVar1;
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   undefined8 uVar4;
   long lVar5;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar6;
   long in_FS_OFFSET;
   long local_90;
   details local_88[8];
   undefined8 local_80;
   undefined8 local_78;
   undefined8 local_70;
   char *local_68;
   undefined1 local_60[16];
   undefined8 local_50;
   long local_48;
   undefined4 local_40;
   long local_30;
   puVar6 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *puVar6 = 0;
   puVar6[6] = 0;
   *(undefined8*)( puVar6 + 8 ) = 0;
   puVar6[10] = 6;
   *(undefined1(*) [16])( puVar6 + 2 ) = (undefined1[16])0x0;
   if (in_EDX == 0) {
      local_80 = 0;
      local_68 = "Environment::FogMode";
      local_60._0_8_ = 0x14;
      String::parse_latin1((StrRange*)&local_80);
      godot::details::enum_qualified_name_to_class_info_name(local_88, (String*)&local_80);
      StringName::StringName((StringName*)&local_90, (String*)local_88, false);
      local_60 = (undefined1[16])0x0;
      local_78 = 0;
      local_70 = 0;
      local_68 = (char*)0x2;
      local_50 = 0;
      local_48 = 0;
      local_40 = 0x10006;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_90);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      if (( StringName::configured != '\0' ) && ( local_90 != 0 )) {
         StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t>*)local_88);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      *puVar6 = local_68._0_4_;
      if (*(long*)( puVar6 + 2 ) != local_60._0_8_) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( puVar6 + 2 ));
         uVar4 = local_60._0_8_;
         auVar2._8_8_ = 0;
         auVar2._0_8_ = local_60._8_8_;
         local_60 = auVar2 << 0x40;
         *(undefined8*)( puVar6 + 2 ) = uVar4;
      }
      if (*(long*)( puVar6 + 4 ) != local_60._8_8_) {
         StringName::unref();
         uVar4 = local_60._8_8_;
         local_60._8_8_ = 0;
         *(undefined8*)( puVar6 + 4 ) = uVar4;
      }
      lVar5 = local_48;
      puVar6[6] = (undefined4)local_50;
      if (*(long*)( puVar6 + 8 ) == local_48) {
         puVar6[10] = local_40;
         if (local_48 != 0) {
            LOCK();
            plVar1 = (long*)( local_48 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_48 = 0;
               Memory::free_static((void*)( lVar5 + -0x10 ), false);
            }
         }
      } else {
         CowData<char32_t>::_unref((CowData<char32_t>*)( puVar6 + 8 ));
         *(long*)( puVar6 + 8 ) = local_48;
         puVar6[10] = local_40;
      }
      if (( StringName::configured != '\0' ) && ( local_60._8_8_ != 0 )) {
         StringName::unref();
      }
      uVar4 = local_60._0_8_;
      if (local_60._0_8_ != 0) {
         LOCK();
         plVar1 = (long*)( local_60._0_8_ + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            auVar3._8_8_ = 0;
            auVar3._0_8_ = local_60._8_8_;
            local_60 = auVar3 << 0x40;
            Memory::free_static((void*)( uVar4 + -0x10 ), false);
         }
      }
   }
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar6;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* MethodBindT<Environment::GlowBlendMode>::_gen_argument_type_info(int) const */undefined4 *MethodBindT<Environment::GlowBlendMode>::_gen_argument_type_info(int param_1) {
   long *plVar1;
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   undefined8 uVar4;
   long lVar5;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar6;
   long in_FS_OFFSET;
   undefined8 local_90;
   undefined8 local_88;
   undefined8 local_80;
   details local_78[8];
   long local_70;
   char *local_68;
   undefined1 local_60[16];
   undefined8 local_50;
   long local_48;
   undefined4 local_40;
   long local_30;
   puVar6 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *puVar6 = 0;
   puVar6[6] = 0;
   *(undefined8*)( puVar6 + 8 ) = 0;
   puVar6[10] = 6;
   *(undefined1(*) [16])( puVar6 + 2 ) = (undefined1[16])0x0;
   if (in_EDX == 0) {
      local_80 = 0;
      local_68 = "Environment::GlowBlendMode";
      local_60._0_8_ = 0x1a;
      String::parse_latin1((StrRange*)&local_80);
      godot::details::enum_qualified_name_to_class_info_name(local_78, (String*)&local_80);
      StringName::StringName((StringName*)&local_70, (String*)local_78, false);
      local_60 = (undefined1[16])0x0;
      local_88 = 0;
      local_90 = 0;
      local_68 = (char*)0x2;
      local_50 = 0;
      local_48 = 0;
      local_40 = 0x10006;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
         StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t>*)local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      *puVar6 = local_68._0_4_;
      if (*(long*)( puVar6 + 2 ) != local_60._0_8_) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( puVar6 + 2 ));
         uVar4 = local_60._0_8_;
         auVar2._8_8_ = 0;
         auVar2._0_8_ = local_60._8_8_;
         local_60 = auVar2 << 0x40;
         *(undefined8*)( puVar6 + 2 ) = uVar4;
      }
      if (*(long*)( puVar6 + 4 ) != local_60._8_8_) {
         StringName::unref();
         uVar4 = local_60._8_8_;
         local_60._8_8_ = 0;
         *(undefined8*)( puVar6 + 4 ) = uVar4;
      }
      lVar5 = local_48;
      puVar6[6] = (undefined4)local_50;
      if (*(long*)( puVar6 + 8 ) == local_48) {
         puVar6[10] = local_40;
         if (local_48 != 0) {
            LOCK();
            plVar1 = (long*)( local_48 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_48 = 0;
               Memory::free_static((void*)( lVar5 + -0x10 ), false);
            }
         }
      } else {
         CowData<char32_t>::_unref((CowData<char32_t>*)( puVar6 + 8 ));
         *(long*)( puVar6 + 8 ) = local_48;
         puVar6[10] = local_40;
      }
      if (( StringName::configured != '\0' ) && ( local_60._8_8_ != 0 )) {
         StringName::unref();
      }
      uVar4 = local_60._0_8_;
      if (local_60._0_8_ != 0) {
         LOCK();
         plVar1 = (long*)( local_60._0_8_ + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            auVar3._8_8_ = 0;
            auVar3._0_8_ = local_60._8_8_;
            local_60 = auVar3 << 0x40;
            Memory::free_static((void*)( uVar4 + -0x10 ), false);
         }
      }
   }
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar6;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* MethodBindT<int, float>::_gen_argument_type_info(int) const */undefined4 *MethodBindT<int,float>::_gen_argument_type_info(int param_1) {
   long *plVar1;
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined8 uVar6;
   long lVar7;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar8;
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
   puVar8 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *puVar8 = 0;
   puVar8[6] = 0;
   *(undefined8*)( puVar8 + 8 ) = 0;
   puVar8[10] = 6;
   *(undefined1(*) [16])( puVar8 + 2 ) = (undefined1[16])0x0;
   if (in_EDX == 0) {
      local_78 = 0;
      local_68 = &_LC7;
      local_80 = 0;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_60._8_8_;
      local_60 = auVar2 << 0x40;
      String::parse_latin1((StrRange*)&local_80);
      local_68 = (undefined*)CONCAT44(local_68._4_4_, 2);
   } else {
      if (in_EDX != 1) goto LAB_0011b1d8;
      local_78 = 0;
      local_68 = &_LC7;
      local_80 = 0;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = local_60._8_8_;
      local_60 = auVar5 << 0x40;
      String::parse_latin1((StrRange*)&local_80);
      local_68 = (undefined*)CONCAT44(local_68._4_4_, 3);
   }
   local_88 = 0;
   local_50 = 0;
   local_48 = 0;
   local_60 = (undefined1[16])0x0;
   if (local_80 == 0) {
      LAB_0011b2d0:local_40 = 6;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
   } else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_0011b2d0;
      StringName::StringName((StringName*)&local_70, (String*)&local_48, false);
      if (local_60._8_8_ == local_70) {
         if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
            StringName::unref();
         }
      } else {
         StringName::unref();
         local_60._8_8_ = local_70;
      }
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
      StringName::unref();
   }
   *puVar8 = local_68._0_4_;
   if (*(long*)( puVar8 + 2 ) != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( puVar8 + 2 ));
      uVar6 = local_60._0_8_;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = local_60._8_8_;
      local_60 = auVar3 << 0x40;
      *(undefined8*)( puVar8 + 2 ) = uVar6;
   }
   if (*(long*)( puVar8 + 4 ) != local_60._8_8_) {
      StringName::unref();
      uVar6 = local_60._8_8_;
      local_60._8_8_ = 0;
      *(undefined8*)( puVar8 + 4 ) = uVar6;
   }
   lVar7 = local_48;
   puVar8[6] = local_50;
   if (*(long*)( puVar8 + 8 ) == local_48) {
      puVar8[10] = local_40;
      if (local_48 != 0) {
         LOCK();
         plVar1 = (long*)( local_48 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_48 = 0;
            Memory::free_static((void*)( lVar7 + -0x10 ), false);
         }
      }
   } else {
      CowData<char32_t>::_unref((CowData<char32_t>*)( puVar8 + 8 ));
      *(long*)( puVar8 + 8 ) = local_48;
      puVar8[10] = local_40;
   }
   if (( StringName::configured != '\0' ) && ( local_60._8_8_ != 0 )) {
      StringName::unref();
   }
   uVar6 = local_60._0_8_;
   if (local_60._0_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_60._0_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         auVar4._8_8_ = 0;
         auVar4._0_8_ = local_60._8_8_;
         local_60 = auVar4 << 0x40;
         Memory::free_static((void*)( uVar6 + -0x10 ), false);
      }
   }
   LAB_0011b1d8:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return puVar8;
}/* MethodBind* create_method_bind<Environment, Environment::BGMode>(void
   (Environment::*)(Environment::BGMode)) */MethodBind *create_method_bind<Environment,Environment::BGMode>(_func_void_BGMode *param_1) {
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
   *(_func_void_BGMode**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0012dfb8;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "Environment";
   local_30 = 0xb;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
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
}/* MethodBind* create_method_bind<Environment, Environment::BGMode>(Environment::BGMode
   (Environment::*)() const) */MethodBind *create_method_bind<Environment,Environment::BGMode>(_func_BGMode *param_1) {
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
   *(_func_BGMode**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0012e018;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "Environment";
   local_30 = 0xb;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
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
}/* MethodBind* create_method_bind<Environment, Ref<Sky> const&>(void (Environment::*)(Ref<Sky>
   const&)) */MethodBind *create_method_bind<Environment,Ref<Sky>const&>(_func_void_Ref_ptr *param_1) {
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
   *(undefined***)this = &PTR__gen_argument_type_0012e078;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "Environment";
   local_30 = 0xb;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
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
}/* MethodBind* create_method_bind<Environment, Ref<Sky>>(Ref<Sky> (Environment::*)() const) */MethodBind *create_method_bind<Environment,Ref<Sky>>(_func_Ref *param_1) {
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
   *(undefined***)this = &PTR__gen_argument_type_0012e0d8;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "Environment";
   local_30 = 0xb;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
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
}/* MethodBind* create_method_bind<Environment, float>(void (Environment::*)(float)) */MethodBind *create_method_bind<Environment,float>(_func_void_float *param_1) {
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
   *(undefined***)this = &PTR__gen_argument_type_0012e138;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "Environment";
   local_30 = 0xb;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
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
}/* MethodBind* create_method_bind<Environment, float>(float (Environment::*)() const) */MethodBind *create_method_bind<Environment,float>(_func_float *param_1) {
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
   *(undefined***)this = &PTR__gen_argument_type_0012e198;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "Environment";
   local_30 = 0xb;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
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
}/* MethodBind* create_method_bind<Environment, Vector3 const&>(void (Environment::*)(Vector3
   const&)) */MethodBind *create_method_bind<Environment,Vector3_const&>(_func_void_Vector3_ptr *param_1) {
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
   *(_func_void_Vector3_ptr**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0012e1f8;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "Environment";
   local_30 = 0xb;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
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
}/* MethodBind* create_method_bind<Environment, Vector3>(Vector3 (Environment::*)() const) */MethodBind *create_method_bind<Environment,Vector3>(_func_Vector3 *param_1) {
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
   *(_func_Vector3**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0012e258;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "Environment";
   local_30 = 0xb;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
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
}/* MethodBind* create_method_bind<Environment, Color const&>(void (Environment::*)(Color const&)) */MethodBind *create_method_bind<Environment,Color_const&>(_func_void_Color_ptr *param_1) {
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
   *(_func_void_Color_ptr**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0012e2b8;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "Environment";
   local_30 = 0xb;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
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
}/* MethodBind* create_method_bind<Environment, Color>(Color (Environment::*)() const) */MethodBind *create_method_bind<Environment,Color>(_func_Color *param_1) {
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
   *(_func_Color**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0012e318;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "Environment";
   local_30 = 0xb;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
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
}/* MethodBind* create_method_bind<Environment, int>(void (Environment::*)(int)) */MethodBind *create_method_bind<Environment,int>(_func_void_int *param_1) {
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
   *(undefined***)this = &PTR__gen_argument_type_0012e378;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "Environment";
   local_30 = 0xb;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
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
}/* MethodBind* create_method_bind<Environment, int>(int (Environment::*)() const) */MethodBind *create_method_bind<Environment,int>(_func_int *param_1) {
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
   *(undefined***)this = &PTR__gen_argument_type_0012e3d8;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "Environment";
   local_30 = 0xb;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
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
}/* MethodBind* create_method_bind<Environment, Environment::AmbientSource>(void
   (Environment::*)(Environment::AmbientSource)) */MethodBind *create_method_bind<Environment,Environment::AmbientSource>(_func_void_AmbientSource *param_1) {
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
   *(_func_void_AmbientSource**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0012e438;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "Environment";
   local_30 = 0xb;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
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
}/* MethodBind* create_method_bind<Environment,
   Environment::AmbientSource>(Environment::AmbientSource (Environment::*)() const) */MethodBind *create_method_bind<Environment,Environment::AmbientSource>(_func_AmbientSource *param_1) {
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
   *(_func_AmbientSource**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0012e498;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "Environment";
   local_30 = 0xb;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
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
}/* MethodBind* create_method_bind<Environment, Environment::ReflectionSource>(void
   (Environment::*)(Environment::ReflectionSource)) */MethodBind *create_method_bind<Environment,Environment::ReflectionSource>(_func_void_ReflectionSource *param_1) {
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
   *(_func_void_ReflectionSource**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0012e4f8;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "Environment";
   local_30 = 0xb;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
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
}/* MethodBind* create_method_bind<Environment,
   Environment::ReflectionSource>(Environment::ReflectionSource (Environment::*)() const) */MethodBind *create_method_bind<Environment,Environment::ReflectionSource>(_func_ReflectionSource *param_1) {
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
   *(_func_ReflectionSource**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0012e558;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "Environment";
   local_30 = 0xb;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
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
}/* MethodBind* create_method_bind<Environment, Environment::ToneMapper>(void
   (Environment::*)(Environment::ToneMapper)) */MethodBind *create_method_bind<Environment,Environment::ToneMapper>(_func_void_ToneMapper *param_1) {
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
   *(_func_void_ToneMapper**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0012e5b8;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "Environment";
   local_30 = 0xb;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
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
}/* MethodBind* create_method_bind<Environment, Environment::ToneMapper>(Environment::ToneMapper
   (Environment::*)() const) */MethodBind *create_method_bind<Environment,Environment::ToneMapper>(_func_ToneMapper *param_1) {
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
   *(_func_ToneMapper**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0012e618;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "Environment";
   local_30 = 0xb;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
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
}/* MethodBind* create_method_bind<Environment, bool>(void (Environment::*)(bool)) */MethodBind *create_method_bind<Environment,bool>(_func_void_bool *param_1) {
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
   *(undefined***)this = &PTR__gen_argument_type_0012e678;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "Environment";
   local_30 = 0xb;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
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
}/* MethodBind* create_method_bind<Environment, bool>(bool (Environment::*)() const) */MethodBind *create_method_bind<Environment,bool>(_func_bool *param_1) {
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
   *(undefined***)this = &PTR__gen_argument_type_0012e6d8;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "Environment";
   local_30 = 0xb;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
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
}/* MethodBind* create_method_bind<Environment, Environment::SDFGIYScale>(void
   (Environment::*)(Environment::SDFGIYScale)) */MethodBind *create_method_bind<Environment,Environment::SDFGIYScale>(_func_void_SDFGIYScale *param_1) {
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
   *(_func_void_SDFGIYScale**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0012e738;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "Environment";
   local_30 = 0xb;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
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
}/* MethodBind* create_method_bind<Environment, Environment::SDFGIYScale>(Environment::SDFGIYScale
   (Environment::*)() const) */MethodBind *create_method_bind<Environment,Environment::SDFGIYScale>(_func_SDFGIYScale *param_1) {
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
   *(_func_SDFGIYScale**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0012e798;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "Environment";
   local_30 = 0xb;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
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
}/* MethodBind* create_method_bind<Environment, int, float>(void (Environment::*)(int, float)) */MethodBind *create_method_bind<Environment,int,float>(_func_void_int_float *param_1) {
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
   *(_func_void_int_float**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0012e7f8;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 2;
   local_40 = 0;
   local_38 = "Environment";
   local_30 = 0xb;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
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
}/* MethodBind* create_method_bind<Environment, float, int>(float (Environment::*)(int) const) */MethodBind *create_method_bind<Environment,float,int>(_func_float_int *param_1) {
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
   *(_func_float_int**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0012e858;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "Environment";
   local_30 = 0xb;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
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
}/* MethodBind* create_method_bind<Environment, Environment::GlowBlendMode>(void
   (Environment::*)(Environment::GlowBlendMode)) */MethodBind *create_method_bind<Environment,Environment::GlowBlendMode>(_func_void_GlowBlendMode *param_1) {
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
   *(_func_void_GlowBlendMode**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0012e8b8;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "Environment";
   local_30 = 0xb;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
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
}/* MethodBind* create_method_bind<Environment,
   Environment::GlowBlendMode>(Environment::GlowBlendMode (Environment::*)() const) */MethodBind *create_method_bind<Environment,Environment::GlowBlendMode>(_func_GlowBlendMode *param_1) {
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
   *(_func_GlowBlendMode**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0012e918;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "Environment";
   local_30 = 0xb;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
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
}/* MethodBind* create_method_bind<Environment, Ref<Texture> >(void (Environment::*)(Ref<Texture>))
    */MethodBind *create_method_bind<Environment,Ref<Texture>>(_func_void_Ref *param_1) {
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
   *(_func_void_Ref**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0012e978;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "Environment";
   local_30 = 0xb;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
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
}/* MethodBind* create_method_bind<Environment, Ref<Texture>>(Ref<Texture> (Environment::*)() const)
    */MethodBind *create_method_bind<Environment,Ref<Texture>>(_func_Ref *param_1) {
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
   *(undefined***)this = &PTR__gen_argument_type_0012e9d8;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "Environment";
   local_30 = 0xb;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
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
}/* MethodBind* create_method_bind<Environment, Environment::FogMode>(void
   (Environment::*)(Environment::FogMode)) */MethodBind *create_method_bind<Environment,Environment::FogMode>(_func_void_FogMode *param_1) {
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
   *(_func_void_FogMode**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0012ea38;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "Environment";
   local_30 = 0xb;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
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
}/* MethodBind* create_method_bind<Environment, Environment::FogMode>(Environment::FogMode
   (Environment::*)() const) */MethodBind *create_method_bind<Environment,Environment::FogMode>(_func_FogMode *param_1) {
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
   *(_func_FogMode**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0012ea98;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "Environment";
   local_30 = 0xb;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
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
}/* MethodBind* create_method_bind<Environment, Color>(void (Environment::*)(Color)) */MethodBind *create_method_bind<Environment,Color>(_func_void_Color *param_1) {
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
   *(_func_void_Color**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0012eaf8;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "Environment";
   local_30 = 0xb;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
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
}/* Environment::_initialize_classv() */void Environment::_initialize_classv(void)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
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
        if ((code *)PTR__bind_methods_00136008 != RefCounted::_bind_methods) {
          RefCounted::_bind_methods();
        }
        RefCounted::initialize_class()::initialized = '\x01';
      }
      local_58 = "RefCounted";
      local_68 = 0;
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
      lVar2 = local_68;
      if (local_68 != 0) {
        LOCK();
        plVar1 = (long *)(local_68 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_68 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((code *)_GLOBAL_OFFSET_TABLE_ != RefCounted::_bind_methods) {
        Resource::_bind_methods();
      }
      Resource::initialize_class()::initialized = '\x01';
    }
    local_58 = "Resource";
    local_68 = 0;
    local_50 = 8;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "Environment";
    local_70 = 0;
    local_50 = 0xb;
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
    lVar2 = local_68;
    if (local_68 != 0) {
      LOCK();
      plVar1 = (long *)(local_68 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_68 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    _bind_methods();
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CowData<float>::_realloc(long) */

undefined8 __thiscall CowData<float>::_realloc(CowData<float> *this,long param_1)

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



/* WARNING: Removing unreachable block (ram,0x0011de58) */
/* WARNING: Removing unreachable block (ram,0x0011dfed) */
/* WARNING: Removing unreachable block (ram,0x0011dff9) */
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
  long *plVar1;
  long lVar2;
  char *pcVar3;
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar4;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_38,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar4 = param_2[0x23];
      if (pVVar4 == (Variant *)0x0) {
        pVVar4 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar4 = param_2[1] + 0x20;
    }
    if (local_38 == *(char **)pVVar4) {
      if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0;
      local_30 = 0x35;
      String::parse_latin1((StrRange *)&local_40);
      vformat<StringName>((StringName *)&local_38,(StrRange *)&local_40,&local_48);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0);
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
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0011e34d;
    }
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0011e18f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              (*(undefined8 *)(*(long *)param_3 + 8),*(undefined8 *)(*(long *)param_3 + 0x10),
               (long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_0011e34d:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Color>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Color>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  char *pcVar2;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar3;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_38,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar3 = (long *)param_2[0x23];
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar3 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_38 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0;
      local_30 = 0x35;
      String::parse_latin1((StrRange *)&local_40);
      vformat<StringName>((StringName *)&local_38,(StrRange *)&local_40,&local_48);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0);
      pcVar2 = local_38;
      if (local_38 != (char *)0x0) {
        LOCK();
        plVar3 = (long *)(local_38 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_38 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_40;
      if (local_40 != 0) {
        LOCK();
        plVar3 = (long *)(local_40 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_40 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0011e575;
    }
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
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
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0011e3be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              (**param_3,(*param_3)[1],(long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_0011e575:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Environment::FogMode>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindTRC<Environment::FogMode>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

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
      _err_print_error(&_LC78,"./core/object/method_bind.h",0x267,
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
      goto LAB_0011e6d0;
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
LAB_0011e6d0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Environment::FogMode>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<Environment::FogMode>::validated_call
          (MethodBindTRC<Environment::FogMode> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  long lVar1;
  char *pcVar2;
  uint uVar3;
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
      goto LAB_0011e934;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar4 = *(code **)(this + 0x58);
  if (((ulong)pcVar4 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar3 = (*pcVar4)(param_1 + *(long *)(this + 0x60));
  *(ulong *)(param_3 + 8) = (ulong)uVar3;
LAB_0011e934:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Environment::FogMode>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Environment::FogMode>::ptrcall
          (MethodBindTRC<Environment::FogMode> *this,Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  char *pcVar2;
  uint uVar3;
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
      goto LAB_0011eb33;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar4 = *(code **)(this + 0x58);
  if (((ulong)pcVar4 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar3 = (*pcVar4)(param_1 + *(long *)(this + 0x60));
  *(ulong *)param_3 = (ulong)uVar3;
LAB_0011eb33:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Environment::FogMode>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<Environment::FogMode>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar4;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_38,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar4 = param_2[0x23];
      if (pVVar4 == (Variant *)0x0) {
        pVVar4 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar4 = param_2[1] + 0x20;
    }
    if (local_38 == *(char **)pVVar4) {
      if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0;
      local_30 = 0x35;
      String::parse_latin1((StrRange *)&local_40);
      vformat<StringName>((StringName *)&local_38,(StrRange *)&local_40,&local_48);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0);
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
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0011ef05;
    }
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0011ed48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8));
    return;
  }
LAB_0011ef05:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Environment::FogMode>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Environment::FogMode>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  char *pcVar2;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar3;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_38,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar3 = (long *)param_2[0x23];
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar3 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_38 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0;
      local_30 = 0x35;
      String::parse_latin1((StrRange *)&local_40);
      vformat<StringName>((StringName *)&local_38,(StrRange *)&local_40,&local_48);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0);
      pcVar2 = local_38;
      if (local_38 != (char *)0x0) {
        LOCK();
        plVar3 = (long *)(local_38 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_38 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_40;
      if (local_40 != 0) {
        LOCK();
        plVar3 = (long *)(local_40 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_40 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0011f125;
    }
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
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
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0011ef67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_0011f125:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Environment::GlowBlendMode>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTRC<Environment::GlowBlendMode>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

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
      _err_print_error(&_LC78,"./core/object/method_bind.h",0x267,
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
      goto LAB_0011f1f0;
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
LAB_0011f1f0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Environment::GlowBlendMode>::validated_call(Object*, Variant const**, Variant*)
   const */

void __thiscall
MethodBindTRC<Environment::GlowBlendMode>::validated_call
          (MethodBindTRC<Environment::GlowBlendMode> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  long lVar1;
  char *pcVar2;
  uint uVar3;
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
      goto LAB_0011f454;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar4 = *(code **)(this + 0x58);
  if (((ulong)pcVar4 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar3 = (*pcVar4)(param_1 + *(long *)(this + 0x60));
  *(ulong *)(param_3 + 8) = (ulong)uVar3;
LAB_0011f454:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Environment::GlowBlendMode>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Environment::GlowBlendMode>::ptrcall
          (MethodBindTRC<Environment::GlowBlendMode> *this,Object *param_1,void **param_2,
          void *param_3)

{
  long lVar1;
  char *pcVar2;
  uint uVar3;
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
      goto LAB_0011f653;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar4 = *(code **)(this + 0x58);
  if (((ulong)pcVar4 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar3 = (*pcVar4)(param_1 + *(long *)(this + 0x60));
  *(ulong *)param_3 = (ulong)uVar3;
LAB_0011f653:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Environment::GlowBlendMode>::validated_call(Object*, Variant const**, Variant*) const
    */

void MethodBindT<Environment::GlowBlendMode>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar4;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_38,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar4 = param_2[0x23];
      if (pVVar4 == (Variant *)0x0) {
        pVVar4 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar4 = param_2[1] + 0x20;
    }
    if (local_38 == *(char **)pVVar4) {
      if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0;
      local_30 = 0x35;
      String::parse_latin1((StrRange *)&local_40);
      vformat<StringName>((StringName *)&local_38,(StrRange *)&local_40,&local_48);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0);
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
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0011fa25;
    }
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0011f868. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8));
    return;
  }
LAB_0011fa25:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Environment::GlowBlendMode>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Environment::GlowBlendMode>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  char *pcVar2;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar3;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_38,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar3 = (long *)param_2[0x23];
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar3 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_38 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0;
      local_30 = 0x35;
      String::parse_latin1((StrRange *)&local_40);
      vformat<StringName>((StringName *)&local_38,(StrRange *)&local_40,&local_48);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0);
      pcVar2 = local_38;
      if (local_38 != (char *)0x0) {
        LOCK();
        plVar3 = (long *)(local_38 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_38 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_40;
      if (local_40 != 0) {
        LOCK();
        plVar3 = (long *)(local_40 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_40 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0011fc45;
    }
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
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
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0011fa87. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_0011fc45:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<float, int>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<float,int>::validated_call
          (MethodBindTRC<float,int> *this,Object *param_1,Variant **param_2,Variant *param_3)

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
      goto LAB_0011fc9e;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  fVar5 = (float)(*pcVar3)(param_1 + *(long *)(this + 0x60),*(undefined4 *)(*param_2 + 8));
  *(double *)(param_3 + 8) = (double)fVar5;
LAB_0011fc9e:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<float, int>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<float,int>::ptrcall
          (MethodBindTRC<float,int> *this,Object *param_1,void **param_2,void *param_3)

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
      goto LAB_0011febc;
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
  fVar5 = (float)(*pcVar3)(param_1 + *(long *)(this + 0x60),**param_2);
  *(double *)param_3 = (double)fVar5;
LAB_0011febc:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, float>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<int,float>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar4;
  long in_FS_OFFSET;
  undefined1 auVar5 [16];
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_38,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar4 = param_2[0x23];
      if (pVVar4 == (Variant *)0x0) {
        pVVar4 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar4 = param_2[1] + 0x20;
    }
    if (local_38 == *(char **)pVVar4) {
      if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0;
      local_30 = 0x35;
      String::parse_latin1((StrRange *)&local_40);
      vformat<StringName>((StringName *)&local_38,(StrRange *)&local_40,&local_48);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0);
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
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_001202b5;
    }
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar5._4_12_ = SUB1612((undefined1  [16])0x0,4);
    auVar5._0_4_ = (float)*(double *)(*(long *)(param_3 + 8) + 8);
                    /* WARNING: Could not recover jumptable at 0x001200f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              (auVar5._0_8_,(long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8));
    return;
  }
LAB_001202b5:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, float>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<int,float>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  char *pcVar2;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar3;
  long in_FS_OFFSET;
  undefined1 auVar4 [16];
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_38,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar3 = (long *)param_2[0x23];
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar3 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_38 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0;
      local_30 = 0x35;
      String::parse_latin1((StrRange *)&local_40);
      vformat<StringName>((StringName *)&local_38,(StrRange *)&local_40,&local_48);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0);
      pcVar2 = local_38;
      if (local_38 != (char *)0x0) {
        LOCK();
        plVar3 = (long *)(local_38 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_38 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_40;
      if (local_40 != 0) {
        LOCK();
        plVar3 = (long *)(local_40 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_40 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_001204dd;
    }
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Load size is inaccurate */
    auVar4._4_12_ = SUB1612((undefined1  [16])0x0,4);
    auVar4._0_4_ = (float)**(double **)((long)param_3 + 8);
                    /* WARNING: Could not recover jumptable at 0x00120323. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              (auVar4._0_8_,(long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_001204dd:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Environment::SDFGIYScale>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTRC<Environment::SDFGIYScale>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

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
      _err_print_error(&_LC78,"./core/object/method_bind.h",0x267,
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
      goto LAB_001205b0;
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
LAB_001205b0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Environment::SDFGIYScale>::validated_call(Object*, Variant const**, Variant*) const
    */

void __thiscall
MethodBindTRC<Environment::SDFGIYScale>::validated_call
          (MethodBindTRC<Environment::SDFGIYScale> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  long lVar1;
  char *pcVar2;
  uint uVar3;
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
      goto LAB_00120814;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar4 = *(code **)(this + 0x58);
  if (((ulong)pcVar4 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar3 = (*pcVar4)(param_1 + *(long *)(this + 0x60));
  *(ulong *)(param_3 + 8) = (ulong)uVar3;
LAB_00120814:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Environment::SDFGIYScale>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Environment::SDFGIYScale>::ptrcall
          (MethodBindTRC<Environment::SDFGIYScale> *this,Object *param_1,void **param_2,
          void *param_3)

{
  long lVar1;
  char *pcVar2;
  uint uVar3;
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
      goto LAB_00120a13;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar4 = *(code **)(this + 0x58);
  if (((ulong)pcVar4 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar3 = (*pcVar4)(param_1 + *(long *)(this + 0x60));
  *(ulong *)param_3 = (ulong)uVar3;
LAB_00120a13:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Environment::SDFGIYScale>::validated_call(Object*, Variant const**, Variant*) const
    */

void MethodBindT<Environment::SDFGIYScale>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar4;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_38,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar4 = param_2[0x23];
      if (pVVar4 == (Variant *)0x0) {
        pVVar4 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar4 = param_2[1] + 0x20;
    }
    if (local_38 == *(char **)pVVar4) {
      if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0;
      local_30 = 0x35;
      String::parse_latin1((StrRange *)&local_40);
      vformat<StringName>((StringName *)&local_38,(StrRange *)&local_40,&local_48);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0);
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
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00120de5;
    }
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00120c28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8));
    return;
  }
LAB_00120de5:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Environment::SDFGIYScale>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Environment::SDFGIYScale>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  char *pcVar2;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar3;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_38,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar3 = (long *)param_2[0x23];
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar3 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_38 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0;
      local_30 = 0x35;
      String::parse_latin1((StrRange *)&local_40);
      vformat<StringName>((StringName *)&local_38,(StrRange *)&local_40,&local_48);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0);
      pcVar2 = local_38;
      if (local_38 != (char *)0x0) {
        LOCK();
        plVar3 = (long *)(local_38 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_38 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_40;
      if (local_40 != 0) {
        LOCK();
        plVar3 = (long *)(local_40 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_40 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00121005;
    }
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
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
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00120e47. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_00121005:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<bool>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  char *pcVar3;
  bool bVar4;
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
      _err_print_error(&_LC78,"./core/object/method_bind.h",0x267,
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
      goto LAB_001210d0;
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
      bVar4 = (bool)(*(code *)pVVar5)();
      Variant::Variant((Variant *)local_48,bVar4);
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
LAB_001210d0:
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
  long lVar1;
  char *pcVar2;
  Variant VVar3;
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
      goto LAB_00121332;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar4 = *(code **)(this + 0x58);
  if (((ulong)pcVar4 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  VVar3 = (Variant)(*pcVar4)(param_1 + *(long *)(this + 0x60));
  param_3[8] = VVar3;
LAB_00121332:
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
  long lVar1;
  char *pcVar2;
  undefined1 uVar3;
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
      goto LAB_00121531;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar4 = *(code **)(this + 0x58);
  if (((ulong)pcVar4 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar3 = (*pcVar4)(param_1 + *(long *)(this + 0x60));
  *(undefined1 *)param_3 = uVar3;
LAB_00121531:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<bool>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<bool>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar4;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_38,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar4 = param_2[0x23];
      if (pVVar4 == (Variant *)0x0) {
        pVVar4 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar4 = param_2[1] + 0x20;
    }
    if (local_38 == *(char **)pVVar4) {
      if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0;
      local_30 = 0x35;
      String::parse_latin1((StrRange *)&local_40);
      vformat<StringName>((StringName *)&local_38,(StrRange *)&local_40,&local_48);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0);
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
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_001218f5;
    }
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00121739. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined1 *)(*(long *)param_3 + 8));
    return;
  }
LAB_001218f5:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<bool>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<bool>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  char *pcVar2;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar3;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_38,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar3 = (long *)param_2[0x23];
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar3 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_38 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0;
      local_30 = 0x35;
      String::parse_latin1((StrRange *)&local_40);
      vformat<StringName>((StringName *)&local_38,(StrRange *)&local_40,&local_48);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0);
      pcVar2 = local_38;
      if (local_38 != (char *)0x0) {
        LOCK();
        plVar3 = (long *)(local_38 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_38 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_40;
      if (local_40 != 0) {
        LOCK();
        plVar3 = (long *)(local_40 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_40 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00121b15;
    }
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
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
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0012195e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3 != '\0');
    return;
  }
LAB_00121b15:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Environment::ToneMapper>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindTRC<Environment::ToneMapper>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

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
      _err_print_error(&_LC78,"./core/object/method_bind.h",0x267,
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
      goto LAB_00121be0;
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
LAB_00121be0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Environment::ToneMapper>::validated_call(Object*, Variant const**, Variant*) const
    */

void __thiscall
MethodBindTRC<Environment::ToneMapper>::validated_call
          (MethodBindTRC<Environment::ToneMapper> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  long lVar1;
  char *pcVar2;
  uint uVar3;
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
      goto LAB_00121e44;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar4 = *(code **)(this + 0x58);
  if (((ulong)pcVar4 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar3 = (*pcVar4)(param_1 + *(long *)(this + 0x60));
  *(ulong *)(param_3 + 8) = (ulong)uVar3;
LAB_00121e44:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Environment::ToneMapper>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Environment::ToneMapper>::ptrcall
          (MethodBindTRC<Environment::ToneMapper> *this,Object *param_1,void **param_2,void *param_3
          )

{
  long lVar1;
  char *pcVar2;
  uint uVar3;
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
      goto LAB_00122043;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar4 = *(code **)(this + 0x58);
  if (((ulong)pcVar4 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar3 = (*pcVar4)(param_1 + *(long *)(this + 0x60));
  *(ulong *)param_3 = (ulong)uVar3;
LAB_00122043:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Environment::ToneMapper>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<Environment::ToneMapper>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar4;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_38,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar4 = param_2[0x23];
      if (pVVar4 == (Variant *)0x0) {
        pVVar4 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar4 = param_2[1] + 0x20;
    }
    if (local_38 == *(char **)pVVar4) {
      if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0;
      local_30 = 0x35;
      String::parse_latin1((StrRange *)&local_40);
      vformat<StringName>((StringName *)&local_38,(StrRange *)&local_40,&local_48);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0);
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
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00122415;
    }
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00122258. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8));
    return;
  }
LAB_00122415:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Environment::ToneMapper>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Environment::ToneMapper>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  char *pcVar2;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar3;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_38,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar3 = (long *)param_2[0x23];
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar3 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_38 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0;
      local_30 = 0x35;
      String::parse_latin1((StrRange *)&local_40);
      vformat<StringName>((StringName *)&local_38,(StrRange *)&local_40,&local_48);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0);
      pcVar2 = local_38;
      if (local_38 != (char *)0x0) {
        LOCK();
        plVar3 = (long *)(local_38 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_38 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_40;
      if (local_40 != 0) {
        LOCK();
        plVar3 = (long *)(local_40 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_40 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00122635;
    }
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
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
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00122477. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_00122635:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Environment::ReflectionSource>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTRC<Environment::ReflectionSource>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

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
      _err_print_error(&_LC78,"./core/object/method_bind.h",0x267,
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
      goto LAB_00122700;
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
LAB_00122700:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Environment::ReflectionSource>::validated_call(Object*, Variant const**, Variant*)
   const */

void __thiscall
MethodBindTRC<Environment::ReflectionSource>::validated_call
          (MethodBindTRC<Environment::ReflectionSource> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  long lVar1;
  char *pcVar2;
  uint uVar3;
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
      goto LAB_00122964;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar4 = *(code **)(this + 0x58);
  if (((ulong)pcVar4 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar3 = (*pcVar4)(param_1 + *(long *)(this + 0x60));
  *(ulong *)(param_3 + 8) = (ulong)uVar3;
LAB_00122964:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Environment::ReflectionSource>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Environment::ReflectionSource>::ptrcall
          (MethodBindTRC<Environment::ReflectionSource> *this,Object *param_1,void **param_2,
          void *param_3)

{
  long lVar1;
  char *pcVar2;
  uint uVar3;
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
      goto LAB_00122b63;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar4 = *(code **)(this + 0x58);
  if (((ulong)pcVar4 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar3 = (*pcVar4)(param_1 + *(long *)(this + 0x60));
  *(ulong *)param_3 = (ulong)uVar3;
LAB_00122b63:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Environment::ReflectionSource>::validated_call(Object*, Variant const**, Variant*)
   const */

void MethodBindT<Environment::ReflectionSource>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar4;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_38,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar4 = param_2[0x23];
      if (pVVar4 == (Variant *)0x0) {
        pVVar4 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar4 = param_2[1] + 0x20;
    }
    if (local_38 == *(char **)pVVar4) {
      if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0;
      local_30 = 0x35;
      String::parse_latin1((StrRange *)&local_40);
      vformat<StringName>((StringName *)&local_38,(StrRange *)&local_40,&local_48);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0);
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
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00122f35;
    }
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00122d78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8));
    return;
  }
LAB_00122f35:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Environment::ReflectionSource>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Environment::ReflectionSource>::ptrcall
               (Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  char *pcVar2;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar3;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_38,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar3 = (long *)param_2[0x23];
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar3 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_38 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0;
      local_30 = 0x35;
      String::parse_latin1((StrRange *)&local_40);
      vformat<StringName>((StringName *)&local_38,(StrRange *)&local_40,&local_48);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0);
      pcVar2 = local_38;
      if (local_38 != (char *)0x0) {
        LOCK();
        plVar3 = (long *)(local_38 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_38 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_40;
      if (local_40 != 0) {
        LOCK();
        plVar3 = (long *)(local_40 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_40 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00123155;
    }
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
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
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00122f97. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_00123155:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Environment::AmbientSource>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTRC<Environment::AmbientSource>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

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
      _err_print_error(&_LC78,"./core/object/method_bind.h",0x267,
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
      goto LAB_00123220;
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
LAB_00123220:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Environment::AmbientSource>::validated_call(Object*, Variant const**, Variant*)
   const */

void __thiscall
MethodBindTRC<Environment::AmbientSource>::validated_call
          (MethodBindTRC<Environment::AmbientSource> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  long lVar1;
  char *pcVar2;
  uint uVar3;
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
      goto LAB_00123484;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar4 = *(code **)(this + 0x58);
  if (((ulong)pcVar4 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar3 = (*pcVar4)(param_1 + *(long *)(this + 0x60));
  *(ulong *)(param_3 + 8) = (ulong)uVar3;
LAB_00123484:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Environment::AmbientSource>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Environment::AmbientSource>::ptrcall
          (MethodBindTRC<Environment::AmbientSource> *this,Object *param_1,void **param_2,
          void *param_3)

{
  long lVar1;
  char *pcVar2;
  uint uVar3;
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
      goto LAB_00123683;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar4 = *(code **)(this + 0x58);
  if (((ulong)pcVar4 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar3 = (*pcVar4)(param_1 + *(long *)(this + 0x60));
  *(ulong *)param_3 = (ulong)uVar3;
LAB_00123683:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Environment::AmbientSource>::validated_call(Object*, Variant const**, Variant*) const
    */

void MethodBindT<Environment::AmbientSource>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar4;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_38,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar4 = param_2[0x23];
      if (pVVar4 == (Variant *)0x0) {
        pVVar4 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar4 = param_2[1] + 0x20;
    }
    if (local_38 == *(char **)pVVar4) {
      if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0;
      local_30 = 0x35;
      String::parse_latin1((StrRange *)&local_40);
      vformat<StringName>((StringName *)&local_38,(StrRange *)&local_40,&local_48);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0);
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
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00123a55;
    }
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00123898. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8));
    return;
  }
LAB_00123a55:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Environment::AmbientSource>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Environment::AmbientSource>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  char *pcVar2;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar3;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_38,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar3 = (long *)param_2[0x23];
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar3 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_38 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0;
      local_30 = 0x35;
      String::parse_latin1((StrRange *)&local_40);
      vformat<StringName>((StringName *)&local_38,(StrRange *)&local_40,&local_48);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0);
      pcVar2 = local_38;
      if (local_38 != (char *)0x0) {
        LOCK();
        plVar3 = (long *)(local_38 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_38 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_40;
      if (local_40 != 0) {
        LOCK();
        plVar3 = (long *)(local_40 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_40 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00123c75;
    }
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
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
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00123ab7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_00123c75:
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
      _err_print_error(&_LC78,"./core/object/method_bind.h",0x267,
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
      goto LAB_00123d40;
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
LAB_00123d40:
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
      goto LAB_00123fa4;
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
LAB_00123fa4:
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
      goto LAB_001241a3;
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
LAB_001241a3:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<int>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar4;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_38,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar4 = param_2[0x23];
      if (pVVar4 == (Variant *)0x0) {
        pVVar4 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar4 = param_2[1] + 0x20;
    }
    if (local_38 == *(char **)pVVar4) {
      if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0;
      local_30 = 0x35;
      String::parse_latin1((StrRange *)&local_40);
      vformat<StringName>((StringName *)&local_38,(StrRange *)&local_40,&local_48);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0);
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
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00124575;
    }
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001243b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8));
    return;
  }
LAB_00124575:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<int>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  char *pcVar2;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar3;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_38,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar3 = (long *)param_2[0x23];
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar3 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_38 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0;
      local_30 = 0x35;
      String::parse_latin1((StrRange *)&local_40);
      vformat<StringName>((StringName *)&local_38,(StrRange *)&local_40,&local_48);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0);
      pcVar2 = local_38;
      if (local_38 != (char *)0x0) {
        LOCK();
        plVar3 = (long *)(local_38 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_38 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_40;
      if (local_40 != 0) {
        LOCK();
        plVar3 = (long *)(local_40 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_40 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00124795;
    }
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
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
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001245d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_00124795:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Color>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<Color>::call
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
  long local_78;
  long local_70;
  char *local_68;
  undefined8 local_60;
  undefined8 local_58 [2];
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
      _err_print_error(&_LC78,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      pcVar3 = local_68;
      if (local_68 != (char *)0x0) {
        LOCK();
        plVar6 = (long *)(local_68 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_68 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
      lVar2 = local_70;
      if (local_70 != 0) {
        LOCK();
        plVar6 = (long *)(local_70 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_70 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_00124870;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
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
      local_58[0] = (*(code *)pVVar4)();
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
LAB_00124870:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Color>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindTRC<Color>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  code *pcVar4;
  Variant *pVVar5;
  long in_RCX;
  long in_FS_OFFSET;
  undefined8 uVar6;
  undefined8 in_XMM1_Qa;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar5 = param_2[0x23];
      if (pVVar5 == (Variant *)0x0) {
        pVVar5 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar5 = param_2[1] + 0x20;
    }
    if (local_48 == *(char **)pVVar5) {
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
      pcVar3 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_48 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
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
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00124adb;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar4 = *(code **)(param_1 + 0x58);
  if (((ulong)pcVar4 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  uVar6 = (*pcVar4)((long *)((long)param_2 + *(long *)(param_1 + 0x60)));
  *(undefined8 *)(in_RCX + 8) = uVar6;
  *(undefined8 *)(in_RCX + 0x10) = in_XMM1_Qa;
LAB_00124adb:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Color>::ptrcall(Object*, void const**, void*) const */

void MethodBindTRC<Color>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  char *pcVar2;
  code *pcVar3;
  long *plVar4;
  undefined8 *in_RCX;
  long in_FS_OFFSET;
  undefined8 uVar5;
  undefined8 in_XMM1_Qa;
  long local_58;
  long local_50;
  char *local_48;
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
      goto LAB_00124cda;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(param_1 + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  uVar5 = (*pcVar3)((long *)((long)param_2 + *(long *)(param_1 + 0x60)));
  *in_RCX = uVar5;
  in_RCX[1] = in_XMM1_Qa;
LAB_00124cda:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Color const&>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<Color_const&>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar4;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_38,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar4 = param_2[0x23];
      if (pVVar4 == (Variant *)0x0) {
        pVVar4 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar4 = param_2[1] + 0x20;
    }
    if (local_38 == *(char **)pVVar4) {
      if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0;
      local_30 = 0x35;
      String::parse_latin1((StrRange *)&local_40);
      vformat<StringName>((StringName *)&local_38,(StrRange *)&local_40,&local_48);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0);
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
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_001250a5;
    }
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00124ee9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*(long *)param_3 + 8);
    return;
  }
LAB_001250a5:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Color const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Color_const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  char *pcVar2;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar3;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_38,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar3 = (long *)param_2[0x23];
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar3 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_38 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0;
      local_30 = 0x35;
      String::parse_latin1((StrRange *)&local_40);
      vformat<StringName>((StringName *)&local_38,(StrRange *)&local_40,&local_48);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0);
      pcVar2 = local_38;
      if (local_38 != (char *)0x0) {
        LOCK();
        plVar3 = (long *)(local_38 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_38 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_40;
      if (local_40 != 0) {
        LOCK();
        plVar3 = (long *)(local_40 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_40 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_001252c5;
    }
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
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
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00125105. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3);
    return;
  }
LAB_001252c5:
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
      _err_print_error(&_LC78,"./core/object/method_bind.h",0x267,
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
      goto LAB_001253a0;
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
LAB_001253a0:
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
      goto LAB_0012560b;
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
LAB_0012560b:
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
      goto LAB_0012580a;
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
LAB_0012580a:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Vector3 const&>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<Vector3_const&>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar4;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_38,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar4 = param_2[0x23];
      if (pVVar4 == (Variant *)0x0) {
        pVVar4 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar4 = param_2[1] + 0x20;
    }
    if (local_38 == *(char **)pVVar4) {
      if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0;
      local_30 = 0x35;
      String::parse_latin1((StrRange *)&local_40);
      vformat<StringName>((StringName *)&local_38,(StrRange *)&local_40,&local_48);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0);
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
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00125bd5;
    }
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00125a19. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*(long *)param_3 + 8);
    return;
  }
LAB_00125bd5:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Vector3 const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Vector3_const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  char *pcVar2;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar3;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_38,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar3 = (long *)param_2[0x23];
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar3 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_38 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0;
      local_30 = 0x35;
      String::parse_latin1((StrRange *)&local_40);
      vformat<StringName>((StringName *)&local_38,(StrRange *)&local_40,&local_48);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0);
      pcVar2 = local_38;
      if (local_38 != (char *)0x0) {
        LOCK();
        plVar3 = (long *)(local_38 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_38 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_40;
      if (local_40 != 0) {
        LOCK();
        plVar3 = (long *)(local_40 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_40 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00125df5;
    }
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
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
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00125c35. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3);
    return;
  }
LAB_00125df5:
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
      _err_print_error(&_LC78,"./core/object/method_bind.h",0x267,
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
      goto LAB_00125ec0;
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
LAB_00125ec0:
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
      goto LAB_00126128;
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
LAB_00126128:
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
      goto LAB_00126327;
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
LAB_00126327:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<float>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<float>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar4;
  long in_FS_OFFSET;
  undefined1 auVar5 [16];
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_38,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar4 = param_2[0x23];
      if (pVVar4 == (Variant *)0x0) {
        pVVar4 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar4 = param_2[1] + 0x20;
    }
    if (local_38 == *(char **)pVVar4) {
      if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0;
      local_30 = 0x35;
      String::parse_latin1((StrRange *)&local_40);
      vformat<StringName>((StringName *)&local_38,(StrRange *)&local_40,&local_48);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0);
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
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_001266f5;
    }
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar5._4_12_ = SUB1612((undefined1  [16])0x0,4);
    auVar5._0_4_ = (float)*(double *)(*(long *)param_3 + 8);
                    /* WARNING: Could not recover jumptable at 0x0012653e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(auVar5._0_8_,(long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_001266f5:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<float>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<float>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  char *pcVar2;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar3;
  long in_FS_OFFSET;
  undefined1 auVar4 [16];
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_38,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar3 = (long *)param_2[0x23];
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar3 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_38 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0;
      local_30 = 0x35;
      String::parse_latin1((StrRange *)&local_40);
      vformat<StringName>((StringName *)&local_38,(StrRange *)&local_40,&local_48);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0);
      pcVar2 = local_38;
      if (local_38 != (char *)0x0) {
        LOCK();
        plVar3 = (long *)(local_38 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_38 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_40;
      if (local_40 != 0) {
        LOCK();
        plVar3 = (long *)(local_40 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_40 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00126915;
    }
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
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
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar4._4_12_ = SUB1612((undefined1  [16])0x0,4);
    auVar4._0_4_ = (float)**param_3;
                    /* WARNING: Could not recover jumptable at 0x0012675d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(auVar4._0_8_,(long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_00126915:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Environment::BGMode>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindTRC<Environment::BGMode>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

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
      _err_print_error(&_LC78,"./core/object/method_bind.h",0x267,
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
      goto LAB_001269e0;
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
LAB_001269e0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Environment::BGMode>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<Environment::BGMode>::validated_call
          (MethodBindTRC<Environment::BGMode> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  long lVar1;
  char *pcVar2;
  uint uVar3;
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
      goto LAB_00126c44;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar4 = *(code **)(this + 0x58);
  if (((ulong)pcVar4 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar3 = (*pcVar4)(param_1 + *(long *)(this + 0x60));
  *(ulong *)(param_3 + 8) = (ulong)uVar3;
LAB_00126c44:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Environment::BGMode>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Environment::BGMode>::ptrcall
          (MethodBindTRC<Environment::BGMode> *this,Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  char *pcVar2;
  uint uVar3;
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
      goto LAB_00126e43;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar4 = *(code **)(this + 0x58);
  if (((ulong)pcVar4 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar3 = (*pcVar4)(param_1 + *(long *)(this + 0x60));
  *(ulong *)param_3 = (ulong)uVar3;
LAB_00126e43:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Environment::BGMode>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<Environment::BGMode>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar4;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_38,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar4 = param_2[0x23];
      if (pVVar4 == (Variant *)0x0) {
        pVVar4 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar4 = param_2[1] + 0x20;
    }
    if (local_38 == *(char **)pVVar4) {
      if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0;
      local_30 = 0x35;
      String::parse_latin1((StrRange *)&local_40);
      vformat<StringName>((StringName *)&local_38,(StrRange *)&local_40,&local_48);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0);
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
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00127215;
    }
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00127058. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8));
    return;
  }
LAB_00127215:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Environment::BGMode>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Environment::BGMode>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  char *pcVar2;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar3;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_38,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar3 = (long *)param_2[0x23];
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar3 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_38 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0;
      local_30 = 0x35;
      String::parse_latin1((StrRange *)&local_40);
      vformat<StringName>((StringName *)&local_38,(StrRange *)&local_40,&local_48);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0);
      pcVar2 = local_38;
      if (local_38 != (char *)0x0) {
        LOCK();
        plVar3 = (long *)(local_38 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_38 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_40;
      if (local_40 != 0) {
        LOCK();
        plVar3 = (long *)(local_40 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_40 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00127435;
    }
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
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
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00127277. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_00127435:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<Texture>>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<Ref<Texture>>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Object *pOVar1;
  Variant *pVVar2;
  long lVar3;
  Object *pOVar4;
  char cVar5;
  Variant *pVVar6;
  long *plVar7;
  undefined4 in_register_00000014;
  long *plVar8;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  Object *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar8 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar8 != (long *)0x0) && (plVar8[1] != 0)) && (*(char *)(plVar8[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar8[1] == 0) {
      plVar7 = (long *)plVar8[0x23];
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)(**(code **)(*plVar8 + 0x40))(plVar8);
      }
    }
    else {
      plVar7 = (long *)(plVar8[1] + 0x20);
    }
    if (local_58 == (Object *)*plVar7) {
      if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = (Object *)0x11e048;
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC78,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      pOVar4 = local_58;
      if (local_58 != (Object *)0x0) {
        LOCK();
        pOVar1 = local_58 + -0x10;
        *(long *)pOVar1 = *(long *)pOVar1 + -1;
        UNLOCK();
        if (*(long *)pOVar1 == 0) {
          local_58 = (Object *)0x0;
          Memory::free_static(pOVar4 + -0x10,false);
        }
      }
      lVar3 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar8 = (long *)(local_60 + -0x10);
        *plVar8 = *plVar8 + -1;
        UNLOCK();
        if (*plVar8 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar3 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00127550;
    }
    if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pVVar6 = param_2[0xb];
  pVVar2 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar6 & 1) != 0) {
        pVVar6 = *(Variant **)(pVVar6 + *(long *)((long)plVar8 + (long)pVVar2) + -1);
      }
      (*(code *)pVVar6)(&local_58);
      Variant::Variant((Variant *)local_48,local_58);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
      if (local_58 != (Object *)0x0) {
        cVar5 = RefCounted::unreference();
        pOVar4 = local_58;
        if (cVar5 != '\0') {
          cVar5 = predelete_handler(local_58);
          if (cVar5 != '\0') {
            (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
            Memory::free_static(pOVar4,false);
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
LAB_00127550:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<Texture>>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Ref<Texture>>::ptrcall
          (MethodBindTRC<Ref<Texture>> *this,Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  char cVar2;
  code *pcVar3;
  Object *pOVar4;
  long *plVar5;
  Object *extraout_RDX;
  Object *pOVar6;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  Object *local_48;
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
    if (local_48 == (Object *)*plVar5) {
      if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Object *)0x11e048;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      pOVar6 = local_48;
      if (local_48 != (Object *)0x0) {
        LOCK();
        pOVar4 = local_48 + -0x10;
        *(void **)pOVar4 = (void *)((long)*(void **)pOVar4 + -1);
        UNLOCK();
        if (*(void **)pOVar4 == (void *)0x0) {
          local_48 = (Object *)0x0;
          Memory::free_static(pOVar6 + -0x10,false);
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
      goto LAB_00127826;
    }
    param_2 = (void **)local_48;
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
      param_2 = (void **)extraout_RDX;
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    param_2 = *(void ***)(param_1 + *(long *)(this + 0x60));
    pcVar3 = *(code **)((Object *)((long)param_2 + -1) + (long)pcVar3);
  }
  (*pcVar3)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  if (local_48 == (Object *)0x0) {
                    /* WARNING: Load size is inaccurate */
    pOVar6 = *param_3;
    if (pOVar6 == (Object *)0x0) goto LAB_00127826;
    *(undefined8 *)param_3 = 0;
    goto LAB_00127869;
  }
  pOVar4 = (Object *)__dynamic_cast(local_48,&Object::typeinfo,&RefCounted::typeinfo,0);
                    /* WARNING: Load size is inaccurate */
  pOVar6 = *param_3;
  if (pOVar6 != pOVar4) {
    *(Object **)param_3 = pOVar4;
    if (pOVar4 == (Object *)0x0) {
      if (pOVar6 != (Object *)0x0) goto LAB_00127869;
    }
    else {
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
        *(undefined8 *)param_3 = 0;
      }
      if (pOVar6 != (Object *)0x0) {
LAB_00127869:
        cVar2 = RefCounted::unreference();
        if (cVar2 != '\0') {
          cVar2 = predelete_handler(pOVar6);
          if (cVar2 != '\0') {
            (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
            Memory::free_static(pOVar6,false);
          }
        }
      }
      if (local_48 == (Object *)0x0) goto LAB_00127826;
    }
  }
  cVar2 = RefCounted::unreference();
  pOVar6 = local_48;
  if (cVar2 != '\0') {
    cVar2 = predelete_handler(local_48);
    if (cVar2 != '\0') {
      (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
      Memory::free_static(pOVar6,false);
    }
  }
LAB_00127826:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<Texture> >::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<Ref<Texture>>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
  char cVar4;
  Object *pOVar5;
  Variant *pVVar6;
  code *pcVar7;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  Object *local_58;
  undefined8 local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar6 = param_2[0x23];
      if (pVVar6 == (Variant *)0x0) {
        pVVar6 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar6 = param_2[1] + 0x20;
    }
    if (local_58 == (Object *)*(long *)pVVar6) {
      if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = (Object *)0x11e048;
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_58,0);
      pOVar3 = local_58;
      if (local_58 != (Object *)0x0) {
        LOCK();
        pOVar5 = local_58 + -0x10;
        *(long *)pOVar5 = *(long *)pOVar5 + -1;
        UNLOCK();
        if (*(long *)pOVar5 == 0) {
          local_58 = (Object *)0x0;
          Memory::free_static(pOVar3 + -0x10,false);
        }
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
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00127b68;
    }
    if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar7 = *(code **)(param_1 + 0x58);
  lVar2 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar7 & 1) != 0) {
    pcVar7 = *(code **)(pcVar7 + *(long *)((long)param_2 + lVar2) + -1);
  }
  Variant::Variant((Variant *)local_48,*(Object **)(*(long *)param_3 + 0x10));
  local_58 = (Object *)0x0;
  pOVar5 = (Object *)Variant::get_validated_object();
  pOVar3 = local_58;
  if (pOVar5 != local_58) {
    if (pOVar5 == (Object *)0x0) {
      if (local_58 != (Object *)0x0) {
        local_58 = (Object *)0x0;
LAB_00127b26:
        cVar4 = RefCounted::unreference();
        if (cVar4 != '\0') {
          cVar4 = predelete_handler(pOVar3);
          if (cVar4 != '\0') {
            (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
            Memory::free_static(pOVar3,false);
          }
        }
      }
    }
    else {
      pOVar5 = (Object *)__dynamic_cast(pOVar5,&Object::typeinfo,&Texture::typeinfo,0);
      if (pOVar3 != pOVar5) {
        local_58 = pOVar5;
        if (pOVar5 != (Object *)0x0) {
          cVar4 = RefCounted::reference();
          if (cVar4 == '\0') {
            local_58 = (Object *)0x0;
          }
        }
        if (pOVar3 != (Object *)0x0) goto LAB_00127b26;
      }
    }
  }
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  (*pcVar7)((long *)((long)param_2 + lVar2));
  if (local_58 != (Object *)0x0) {
    cVar4 = RefCounted::unreference();
    pOVar3 = local_58;
    if (cVar4 != '\0') {
      cVar4 = predelete_handler(local_58);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
LAB_00127b68:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<Texture> >::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Ref<Texture>>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  Object *pOVar1;
  long lVar2;
  Object *pOVar3;
  char cVar4;
  long *plVar5;
  code *pcVar6;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  Object *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar5 = (long *)param_2[0x23];
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar5 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_48 == (Object *)*plVar5) {
      if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Object *)0x11e048;
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0);
      pOVar3 = local_48;
      if (local_48 != (Object *)0x0) {
        LOCK();
        pOVar1 = local_48 + -0x10;
        *(long *)pOVar1 = *(long *)pOVar1 + -1;
        UNLOCK();
        if (*(long *)pOVar1 == 0) {
          local_48 = (Object *)0x0;
          Memory::free_static(pOVar3 + -0x10,false);
        }
      }
      lVar2 = local_50;
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
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00127e7c;
    }
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar6 = *(code **)(param_1 + 0x58);
                    /* WARNING: Load size is inaccurate */
  lVar2 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar6 & 1) != 0) {
    pcVar6 = *(code **)(pcVar6 + *(long *)((long)param_2 + lVar2) + -1);
  }
  if ((*param_3 == (long *)0x0) || (local_48 = (Object *)**param_3, local_48 == (Object *)0x0)) {
LAB_00127e58:
    local_48 = (Object *)0x0;
  }
  else {
    cVar4 = RefCounted::init_ref();
    if (cVar4 == '\0') goto LAB_00127e58;
  }
  (*pcVar6)((long *)((long)param_2 + lVar2));
  if (local_48 != (Object *)0x0) {
    cVar4 = RefCounted::unreference();
    pOVar3 = local_48;
    if (cVar4 != '\0') {
      cVar4 = predelete_handler(local_48);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
LAB_00127e7c:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<Sky>>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<Ref<Sky>>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Object *pOVar1;
  Variant *pVVar2;
  long lVar3;
  Object *pOVar4;
  char cVar5;
  Variant *pVVar6;
  long *plVar7;
  undefined4 in_register_00000014;
  long *plVar8;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  Object *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar8 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar8 != (long *)0x0) && (plVar8[1] != 0)) && (*(char *)(plVar8[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar8[1] == 0) {
      plVar7 = (long *)plVar8[0x23];
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)(**(code **)(*plVar8 + 0x40))(plVar8);
      }
    }
    else {
      plVar7 = (long *)(plVar8[1] + 0x20);
    }
    if (local_58 == (Object *)*plVar7) {
      if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = (Object *)0x11e048;
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC78,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      pOVar4 = local_58;
      if (local_58 != (Object *)0x0) {
        LOCK();
        pOVar1 = local_58 + -0x10;
        *(long *)pOVar1 = *(long *)pOVar1 + -1;
        UNLOCK();
        if (*(long *)pOVar1 == 0) {
          local_58 = (Object *)0x0;
          Memory::free_static(pOVar4 + -0x10,false);
        }
      }
      lVar3 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar8 = (long *)(local_60 + -0x10);
        *plVar8 = *plVar8 + -1;
        UNLOCK();
        if (*plVar8 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar3 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00128190;
    }
    if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pVVar6 = param_2[0xb];
  pVVar2 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar6 & 1) != 0) {
        pVVar6 = *(Variant **)(pVVar6 + *(long *)((long)plVar8 + (long)pVVar2) + -1);
      }
      (*(code *)pVVar6)(&local_58);
      Variant::Variant((Variant *)local_48,local_58);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
      if (local_58 != (Object *)0x0) {
        cVar5 = RefCounted::unreference();
        pOVar4 = local_58;
        if (cVar5 != '\0') {
          cVar5 = predelete_handler(local_58);
          if (cVar5 != '\0') {
            (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
            Memory::free_static(pOVar4,false);
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
LAB_00128190:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<Sky>>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Ref<Sky>>::ptrcall
          (MethodBindTRC<Ref<Sky>> *this,Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  char cVar2;
  code *pcVar3;
  Object *pOVar4;
  long *plVar5;
  Object *extraout_RDX;
  Object *pOVar6;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  Object *local_48;
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
    if (local_48 == (Object *)*plVar5) {
      if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Object *)0x11e048;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      pOVar6 = local_48;
      if (local_48 != (Object *)0x0) {
        LOCK();
        pOVar4 = local_48 + -0x10;
        *(void **)pOVar4 = (void *)((long)*(void **)pOVar4 + -1);
        UNLOCK();
        if (*(void **)pOVar4 == (void *)0x0) {
          local_48 = (Object *)0x0;
          Memory::free_static(pOVar6 + -0x10,false);
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
      goto LAB_00128466;
    }
    param_2 = (void **)local_48;
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
      param_2 = (void **)extraout_RDX;
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    param_2 = *(void ***)(param_1 + *(long *)(this + 0x60));
    pcVar3 = *(code **)((Object *)((long)param_2 + -1) + (long)pcVar3);
  }
  (*pcVar3)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  if (local_48 == (Object *)0x0) {
                    /* WARNING: Load size is inaccurate */
    pOVar6 = *param_3;
    if (pOVar6 == (Object *)0x0) goto LAB_00128466;
    *(undefined8 *)param_3 = 0;
    goto LAB_001284a9;
  }
  pOVar4 = (Object *)__dynamic_cast(local_48,&Object::typeinfo,&RefCounted::typeinfo,0);
                    /* WARNING: Load size is inaccurate */
  pOVar6 = *param_3;
  if (pOVar6 != pOVar4) {
    *(Object **)param_3 = pOVar4;
    if (pOVar4 == (Object *)0x0) {
      if (pOVar6 != (Object *)0x0) goto LAB_001284a9;
    }
    else {
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
        *(undefined8 *)param_3 = 0;
      }
      if (pOVar6 != (Object *)0x0) {
LAB_001284a9:
        cVar2 = RefCounted::unreference();
        if (cVar2 != '\0') {
          cVar2 = predelete_handler(pOVar6);
          if (cVar2 != '\0') {
            (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
            Memory::free_static(pOVar6,false);
          }
        }
      }
      if (local_48 == (Object *)0x0) goto LAB_00128466;
    }
  }
  cVar2 = RefCounted::unreference();
  pOVar6 = local_48;
  if (cVar2 != '\0') {
    cVar2 = predelete_handler(local_48);
    if (cVar2 != '\0') {
      (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
      Memory::free_static(pOVar6,false);
    }
  }
LAB_00128466:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<Sky> const&>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<Ref<Sky>const&>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
  char cVar4;
  Object *pOVar5;
  Variant *pVVar6;
  code *pcVar7;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  Object *local_58;
  undefined8 local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar6 = param_2[0x23];
      if (pVVar6 == (Variant *)0x0) {
        pVVar6 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar6 = param_2[1] + 0x20;
    }
    if (local_58 == (Object *)*(long *)pVVar6) {
      if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = (Object *)0x11e048;
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_58,0);
      pOVar3 = local_58;
      if (local_58 != (Object *)0x0) {
        LOCK();
        pOVar5 = local_58 + -0x10;
        *(long *)pOVar5 = *(long *)pOVar5 + -1;
        UNLOCK();
        if (*(long *)pOVar5 == 0) {
          local_58 = (Object *)0x0;
          Memory::free_static(pOVar3 + -0x10,false);
        }
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
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_001287a8;
    }
    if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar7 = *(code **)(param_1 + 0x58);
  lVar2 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar7 & 1) != 0) {
    pcVar7 = *(code **)(pcVar7 + *(long *)((long)param_2 + lVar2) + -1);
  }
  Variant::Variant((Variant *)local_48,*(Object **)(*(long *)param_3 + 0x10));
  local_58 = (Object *)0x0;
  pOVar5 = (Object *)Variant::get_validated_object();
  pOVar3 = local_58;
  if (pOVar5 != local_58) {
    if (pOVar5 == (Object *)0x0) {
      if (local_58 != (Object *)0x0) {
        local_58 = (Object *)0x0;
LAB_00128766:
        cVar4 = RefCounted::unreference();
        if (cVar4 != '\0') {
          cVar4 = predelete_handler(pOVar3);
          if (cVar4 != '\0') {
            (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
            Memory::free_static(pOVar3,false);
          }
        }
      }
    }
    else {
      pOVar5 = (Object *)__dynamic_cast(pOVar5,&Object::typeinfo,&Sky::typeinfo,0);
      if (pOVar3 != pOVar5) {
        local_58 = pOVar5;
        if (pOVar5 != (Object *)0x0) {
          cVar4 = RefCounted::reference();
          if (cVar4 == '\0') {
            local_58 = (Object *)0x0;
          }
        }
        if (pOVar3 != (Object *)0x0) goto LAB_00128766;
      }
    }
  }
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  (*pcVar7)((long *)((long)param_2 + lVar2));
  if (local_58 != (Object *)0x0) {
    cVar4 = RefCounted::unreference();
    pOVar3 = local_58;
    if (cVar4 != '\0') {
      cVar4 = predelete_handler(local_58);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
LAB_001287a8:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<Sky> const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Ref<Sky>const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  Object *pOVar1;
  long lVar2;
  Object *pOVar3;
  char cVar4;
  long *plVar5;
  code *pcVar6;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  Object *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar5 = (long *)param_2[0x23];
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar5 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_48 == (Object *)*plVar5) {
      if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Object *)0x11e048;
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0);
      pOVar3 = local_48;
      if (local_48 != (Object *)0x0) {
        LOCK();
        pOVar1 = local_48 + -0x10;
        *(long *)pOVar1 = *(long *)pOVar1 + -1;
        UNLOCK();
        if (*(long *)pOVar1 == 0) {
          local_48 = (Object *)0x0;
          Memory::free_static(pOVar3 + -0x10,false);
        }
      }
      lVar2 = local_50;
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
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00128abc;
    }
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar6 = *(code **)(param_1 + 0x58);
                    /* WARNING: Load size is inaccurate */
  lVar2 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar6 & 1) != 0) {
    pcVar6 = *(code **)(pcVar6 + *(long *)((long)param_2 + lVar2) + -1);
  }
  if ((*param_3 == (long *)0x0) || (local_48 = (Object *)**param_3, local_48 == (Object *)0x0)) {
LAB_00128a98:
    local_48 = (Object *)0x0;
  }
  else {
    cVar4 = RefCounted::init_ref();
    if (cVar4 == '\0') goto LAB_00128a98;
  }
  (*pcVar6)((long *)((long)param_2 + lVar2));
  if (local_48 != (Object *)0x0) {
    cVar4 = RefCounted::unreference();
    pOVar3 = local_48;
    if (cVar4 != '\0') {
      cVar4 = predelete_handler(local_48);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
LAB_00128abc:
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
  char *pcVar5;
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
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  undefined8 local_48 [3];
  long local_30;
  
  plVar10 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar10 != (long *)0x0) && (plVar10[1] != 0)) && (*(char *)(plVar10[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar10[1] == 0) {
      plVar8 = (long *)plVar10[0x23];
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)(**(code **)(*plVar10 + 0x40))(plVar10);
      }
    }
    else {
      plVar8 = (long *)(plVar10[1] + 0x20);
    }
    if (local_58 == (char *)*plVar8) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC78,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_58,0);
      pcVar5 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar10 = (long *)(local_58 + -0x10);
        *plVar10 = *plVar10 + -1;
        UNLOCK();
        if (*plVar10 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar5 + -0x10,false);
        }
      }
      lVar2 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar10 = (long *)(local_60 + -0x10);
        *plVar10 = *plVar10 + -1;
        UNLOCK();
        if (*plVar10 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00128e58;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar12 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar11 = param_2[5];
    if (pVVar11 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_00128eb0;
LAB_00128ea0:
      pVVar11 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar11 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00128eb0:
        uVar7 = 4;
        goto LAB_00128e4d;
      }
      if (in_R8D == 1) goto LAB_00128ea0;
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
    cVar6 = Variant::can_convert_strict(*(undefined4 *)pVVar11,0x14);
    uVar4 = _LC533;
    if (cVar6 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    local_48[0] = Variant::operator_cast_to_Color(pVVar11);
    (*(code *)pVVar12)((Variant *)((long)plVar10 + (long)pVVar1),local_48);
  }
  else {
    uVar7 = 3;
LAB_00128e4d:
    *in_R9 = uVar7;
    in_R9[2] = 1;
  }
LAB_00128e58:
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
  char *pcVar5;
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
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  plVar10 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar10 != (long *)0x0) && (plVar10[1] != 0)) && (*(char *)(plVar10[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (plVar10[1] == 0) {
      plVar8 = (long *)plVar10[0x23];
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)(**(code **)(*plVar10 + 0x40))(plVar10);
      }
    }
    else {
      plVar8 = (long *)(plVar10[1] + 0x20);
    }
    if (local_48 == (char *)*plVar8) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC78,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0);
      pcVar5 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar10 = (long *)(local_48 + -0x10);
        *plVar10 = *plVar10 + -1;
        UNLOCK();
        if (*plVar10 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar5 + -0x10,false);
        }
      }
      lVar2 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar10 = (long *)(local_50 + -0x10);
        *plVar10 = *plVar10 + -1;
        UNLOCK();
        if (*plVar10 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_001291c8;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar12 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar11 = param_2[5];
    if (pVVar11 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_00129220;
LAB_00129210:
      pVVar11 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar11 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00129220:
        uVar7 = 4;
        goto LAB_001291bd;
      }
      if (in_R8D == 1) goto LAB_00129210;
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
    cVar6 = Variant::can_convert_strict(*(undefined4 *)pVVar11,0x14);
    uVar4 = _LC533;
    if (cVar6 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_Color(pVVar11);
    (*(code *)pVVar12)((Variant *)((long)plVar10 + (long)pVVar1));
  }
  else {
    uVar7 = 3;
LAB_001291bd:
    *in_R9 = uVar7;
    in_R9[2] = 1;
  }
LAB_001291c8:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindT<Ref<Texture> >::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<Ref<Texture>>::call
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
  long local_50;
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
      local_48 = (Object *)0x11e048;
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC78,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0);
      pOVar5 = local_48;
      if (local_48 != (Object *)0x0) {
        LOCK();
        pOVar8 = local_48 + -0x10;
        *(long *)pOVar8 = *(long *)pOVar8 + -1;
        UNLOCK();
        if (*(long *)pOVar8 == 0) {
          local_48 = (Object *)0x0;
          Memory::free_static(pOVar5 + -0x10,false);
        }
      }
      lVar2 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar11 = (long *)(local_50 + -0x10);
        *plVar11 = *plVar11 + -1;
        UNLOCK();
        if (*plVar11 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_001295d0;
    }
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pVVar13 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (1 < in_R8D) {
    uVar7 = 3;
LAB_001295c5:
    *in_R9 = uVar7;
    in_R9[2] = 1;
    goto LAB_001295d0;
  }
  pVVar12 = param_2[5];
  if (pVVar12 == (Variant *)0x0) {
    if (in_R8D != 1) goto LAB_00129620;
LAB_00129610:
    pVVar12 = *(Variant **)param_4;
  }
  else {
    lVar2 = *(long *)(pVVar12 + -8);
    if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00129620:
      uVar7 = 4;
      goto LAB_001295c5;
    }
    if (in_R8D == 1) goto LAB_00129610;
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
  uVar4 = _LC535;
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
LAB_0012973d:
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
      pOVar8 = (Object *)__dynamic_cast(pOVar8,&Object::typeinfo,&Texture::typeinfo,0);
      if (pOVar5 != pOVar8) {
        local_48 = pOVar8;
        if (pOVar8 != (Object *)0x0) {
          cVar6 = RefCounted::reference();
          if (cVar6 == '\0') {
            local_48 = (Object *)0x0;
          }
        }
        if (pOVar5 != (Object *)0x0) goto LAB_0012973d;
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
LAB_001295d0:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<float, int>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<float,int>::call
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
  float fVar14;
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
      _err_print_error(&_LC78,"./core/object/method_bind.h",0x267,
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
      goto LAB_001299e8;
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
      if (in_R8D != 1) goto LAB_00129a30;
LAB_00129a20:
      pVVar12 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar12 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00129a30:
        uVar8 = 4;
        goto LAB_001299dd;
      }
      if (in_R8D == 1) goto LAB_00129a20;
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
    uVar4 = _LC536;
    if (cVar6 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    iVar7 = Variant::operator_cast_to_int(pVVar12);
    fVar14 = (float)(*(code *)pVVar13)((Variant *)((long)plVar11 + (long)pVVar1),iVar7);
    Variant::Variant((Variant *)local_48,fVar14);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_48[0];
    *(undefined8 *)(param_1 + 8) = local_40;
    *(undefined8 *)(param_1 + 0x10) = uStack_38;
  }
  else {
    uVar8 = 3;
LAB_001299dd:
    *in_R9 = uVar8;
    in_R9[2] = 1;
  }
LAB_001299e8:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
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
  char *pcVar6;
  char cVar7;
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
  long local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  undefined1 local_60 [4] [12];
  long local_30;
  
  plVar11 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar11 != (long *)0x0) && (plVar11[1] != 0)) && (*(char *)(plVar11[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_78,(StringName *)(param_2 + 3));
    if (plVar11[1] == 0) {
      plVar9 = (long *)plVar11[0x23];
      if (plVar9 == (long *)0x0) {
        plVar9 = (long *)(**(code **)(*plVar11 + 0x40))(plVar11);
      }
    }
    else {
      plVar9 = (long *)(plVar11[1] + 0x20);
    }
    if (local_78 == (char *)*plVar9) {
      if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_78 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_80 = 0;
      local_70 = 0x35;
      String::parse_latin1((StrRange *)&local_80);
      vformat<StringName>((StringName *)&local_78,(StrRange *)&local_80,&local_88);
      _err_print_error(&_LC78,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_78,0);
      pcVar6 = local_78;
      if (local_78 != (char *)0x0) {
        LOCK();
        plVar11 = (long *)(local_78 + -0x10);
        *plVar11 = *plVar11 + -1;
        UNLOCK();
        if (*plVar11 == 0) {
          local_78 = (char *)0x0;
          Memory::free_static(pcVar6 + -0x10,false);
        }
      }
      lVar2 = local_80;
      if (local_80 != 0) {
        LOCK();
        plVar11 = (long *)(local_80 + -0x10);
        *plVar11 = *plVar11 + -1;
        UNLOCK();
        if (*plVar11 == 0) {
          local_80 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      auVar4._8_4_ = local_60[0]._8_4_;
      auVar4._0_8_ = local_60[0]._0_8_;
      if ((StringName::configured != '\0') && (local_60[0] = auVar4, local_88 != 0)) {
        StringName::unref();
      }
      goto LAB_00129d88;
    }
    if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar13 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar12 = param_2[5];
    if (pVVar12 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_00129de0;
LAB_00129dd0:
      pVVar12 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar12 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00129de0:
        uVar8 = 4;
        goto LAB_00129d7d;
      }
      if (in_R8D == 1) goto LAB_00129dd0;
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
    cVar7 = Variant::can_convert_strict(*(undefined4 *)pVVar12,9);
    uVar5 = _LC537;
    if (cVar7 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar5;
    }
    local_60[0] = Variant::operator_cast_to_Vector3(pVVar12);
    (*(code *)pVVar13)((Variant *)((long)plVar11 + (long)pVVar1),local_60);
  }
  else {
    uVar8 = 3;
LAB_00129d7d:
    *in_R9 = uVar8;
    in_R9[2] = 1;
  }
LAB_00129d88:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindT<Ref<Sky> const&>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<Ref<Sky>const&>::call
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
  long local_50;
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
      local_48 = (Object *)0x11e048;
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC78,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0);
      pOVar5 = local_48;
      if (local_48 != (Object *)0x0) {
        LOCK();
        pOVar8 = local_48 + -0x10;
        *(long *)pOVar8 = *(long *)pOVar8 + -1;
        UNLOCK();
        if (*(long *)pOVar8 == 0) {
          local_48 = (Object *)0x0;
          Memory::free_static(pOVar5 + -0x10,false);
        }
      }
      lVar2 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar11 = (long *)(local_50 + -0x10);
        *plVar11 = *plVar11 + -1;
        UNLOCK();
        if (*plVar11 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0012a190;
    }
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pVVar13 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (1 < in_R8D) {
    uVar7 = 3;
LAB_0012a185:
    *in_R9 = uVar7;
    in_R9[2] = 1;
    goto LAB_0012a190;
  }
  pVVar12 = param_2[5];
  if (pVVar12 == (Variant *)0x0) {
    if (in_R8D != 1) goto LAB_0012a1e0;
LAB_0012a1d0:
    pVVar12 = *(Variant **)param_4;
  }
  else {
    lVar2 = *(long *)(pVVar12 + -8);
    if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0012a1e0:
      uVar7 = 4;
      goto LAB_0012a185;
    }
    if (in_R8D == 1) goto LAB_0012a1d0;
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
  uVar4 = _LC535;
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
LAB_0012a2fd:
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
      pOVar8 = (Object *)__dynamic_cast(pOVar8,&Object::typeinfo,&Sky::typeinfo,0);
      if (pOVar5 != pOVar8) {
        local_48 = pOVar8;
        if (pOVar8 != (Object *)0x0) {
          cVar6 = RefCounted::reference();
          if (cVar6 == '\0') {
            local_48 = (Object *)0x0;
          }
        }
        if (pOVar5 != (Object *)0x0) goto LAB_0012a2fd;
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
LAB_0012a190:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<Texture>>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<Ref<Texture>>::validated_call
          (MethodBindTRC<Ref<Texture>> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  Variant **ppVVar1;
  Object *pOVar2;
  Object *pOVar3;
  Variant **ppVVar4;
  char cVar5;
  code *pcVar6;
  long *plVar7;
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
      plVar7 = *(long **)(param_1 + 0x118);
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar7 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (Variant **)*plVar7) {
      if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Variant **)0x11e048;
      local_50 = (Object *)0x0;
      local_40 = (Object *)0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      ppVVar4 = local_48;
      if (local_48 != (Variant **)0x0) {
        LOCK();
        ppVVar1 = local_48 + -2;
        *ppVVar1 = *ppVVar1 + -1;
        UNLOCK();
        if (*ppVVar1 == (Variant *)0x0) {
          local_48 = (Variant **)0x0;
          Memory::free_static(ppVVar4 + -2,false);
        }
      }
      pOVar3 = local_50;
      if (local_50 != (Object *)0x0) {
        LOCK();
        pOVar2 = local_50 + -0x10;
        *(long *)pOVar2 = *(long *)pOVar2 + -1;
        UNLOCK();
        if (*(long *)pOVar2 == 0) {
          local_50 = (Object *)0x0;
          Memory::free_static(pOVar3 + -0x10,false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0012a4f6;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar6 = *(code **)(this + 0x58);
  if (((ulong)pcVar6 & 1) != 0) {
    param_2 = *(Variant ***)(param_1 + *(long *)(this + 0x60));
    pcVar6 = *(code **)(pcVar6 + (long)param_2 + -1);
  }
  (*pcVar6)(&local_50,param_1 + *(long *)(this + 0x60),param_2);
  if (local_50 == (Object *)0x0) {
    Variant::ObjData::unref();
  }
  else {
    local_48 = *(Variant ***)(local_50 + 0x60);
    local_40 = local_50;
    Variant::ObjData::ref((ObjData *)(param_3 + 8));
  }
  if (local_50 != (Object *)0x0) {
    cVar5 = RefCounted::unreference();
    pOVar3 = local_50;
    if (cVar5 != '\0') {
      cVar5 = predelete_handler(local_50);
      if (cVar5 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
LAB_0012a4f6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<Sky>>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<Ref<Sky>>::validated_call
          (MethodBindTRC<Ref<Sky>> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  Variant **ppVVar1;
  Object *pOVar2;
  Object *pOVar3;
  Variant **ppVVar4;
  char cVar5;
  code *pcVar6;
  long *plVar7;
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
      plVar7 = *(long **)(param_1 + 0x118);
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar7 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (Variant **)*plVar7) {
      if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Variant **)0x11e048;
      local_50 = (Object *)0x0;
      local_40 = (Object *)0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      ppVVar4 = local_48;
      if (local_48 != (Variant **)0x0) {
        LOCK();
        ppVVar1 = local_48 + -2;
        *ppVVar1 = *ppVVar1 + -1;
        UNLOCK();
        if (*ppVVar1 == (Variant *)0x0) {
          local_48 = (Variant **)0x0;
          Memory::free_static(ppVVar4 + -2,false);
        }
      }
      pOVar3 = local_50;
      if (local_50 != (Object *)0x0) {
        LOCK();
        pOVar2 = local_50 + -0x10;
        *(long *)pOVar2 = *(long *)pOVar2 + -1;
        UNLOCK();
        if (*(long *)pOVar2 == 0) {
          local_50 = (Object *)0x0;
          Memory::free_static(pOVar3 + -0x10,false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0012a766;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar6 = *(code **)(this + 0x58);
  if (((ulong)pcVar6 & 1) != 0) {
    param_2 = *(Variant ***)(param_1 + *(long *)(this + 0x60));
    pcVar6 = *(code **)(pcVar6 + (long)param_2 + -1);
  }
  (*pcVar6)(&local_50,param_1 + *(long *)(this + 0x60),param_2);
  if (local_50 == (Object *)0x0) {
    Variant::ObjData::unref();
  }
  else {
    local_48 = *(Variant ***)(local_50 + 0x60);
    local_40 = local_50;
    Variant::ObjData::ref((ObjData *)(param_3 + 8));
  }
  if (local_50 != (Object *)0x0) {
    cVar5 = RefCounted::unreference();
    pOVar3 = local_50;
    if (cVar5 != '\0') {
      cVar5 = predelete_handler(local_50);
      if (cVar5 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
LAB_0012a766:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, Environment::FogMode>(__UnexistingClass*, void
   (__UnexistingClass::*)(Environment::FogMode), Variant const**, int, Callable::CallError&,
   Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,Environment::FogMode>
               (__UnexistingClass *param_1,_func_void_FogMode *param_2,Variant **param_3,int param_4
               ,CallError *param_5,Vector *param_6)

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
    goto LAB_0012aa4d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_0012aab0;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_0012aab0:
      uVar6 = 4;
LAB_0012aa4d:
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
      goto LAB_0012a9cb;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0012a9cb:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_FogMode **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
  uVar4 = _LC536;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_long(this);
                    /* WARNING: Could not recover jumptable at 0x0012aa26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)((char)(param_1 + (long)param_3));
  return;
}



/* MethodBindT<Environment::FogMode>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindT<Environment::FogMode>::call
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
      _err_print_error(&_LC78,"./core/object/method_bind.h",0x154,
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
      goto LAB_0012ab16;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,Environment::FogMode>
            (p_Var4,(_func_void_FogMode *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8,
             in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_0012ab16:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, Environment::GlowBlendMode>(__UnexistingClass*,
   void (__UnexistingClass::*)(Environment::GlowBlendMode), Variant const**, int,
   Callable::CallError&, Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,Environment::GlowBlendMode>
               (__UnexistingClass *param_1,_func_void_GlowBlendMode *param_2,Variant **param_3,
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
    goto LAB_0012ae1d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_0012ae80;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_0012ae80:
      uVar6 = 4;
LAB_0012ae1d:
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
      goto LAB_0012ad9b;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0012ad9b:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_GlowBlendMode **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
  uVar4 = _LC536;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_long(this);
                    /* WARNING: Could not recover jumptable at 0x0012adf6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)((char)(param_1 + (long)param_3));
  return;
}



/* MethodBindT<Environment::GlowBlendMode>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindT<Environment::GlowBlendMode>::call
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
      _err_print_error(&_LC78,"./core/object/method_bind.h",0x154,
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
      goto LAB_0012aee6;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,Environment::GlowBlendMode>
            (p_Var4,(_func_void_GlowBlendMode *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,
             in_R8,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_0012aee6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, int, float>(__UnexistingClass*, void
   (__UnexistingClass::*)(int, float), Variant const**, int, Callable::CallError&, Vector<Variant>
   const&) */

void call_with_variant_args_dv<__UnexistingClass,int,float>
               (__UnexistingClass *param_1,_func_void_int_float *param_2,Variant **param_3,
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
  float fVar12;
  long in_stack_00000008;
  
  plVar8 = (long *)CONCAT44(in_register_0000000c,param_4);
  uVar10 = (uint)param_5;
  if (2 < uVar10) {
    uVar7 = 3;
    goto LAB_0012b225;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  iVar6 = 2 - uVar10;
  if (lVar1 == 0) {
    if (iVar6 == 0) {
      this = (Variant *)*plVar8;
LAB_0012b25d:
      this_00 = (Variant *)plVar8[1];
      goto LAB_0012b185;
    }
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    iVar11 = (int)lVar2;
    if (iVar6 <= iVar11) {
      if (uVar10 == 0) {
        lVar9 = (long)(iVar11 + -2);
        if (lVar2 <= lVar9) goto LAB_0012b278;
        this = (Variant *)(lVar1 + lVar9 * 0x18);
      }
      else {
        this = (Variant *)*plVar8;
        if (uVar10 == 2) goto LAB_0012b25d;
      }
      lVar9 = (long)(int)((uVar10 ^ 1) + (iVar11 - iVar6));
      if (lVar2 <= lVar9) {
LAB_0012b278:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      this_00 = (Variant *)(lVar1 + lVar9 * 0x18);
LAB_0012b185:
      *(undefined4 *)param_6 = 0;
      if (((ulong)param_2 & 1) != 0) {
        param_2 = *(_func_void_int_float **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
      }
      cVar5 = Variant::can_convert_strict(*(undefined4 *)this_00,3);
      uVar4 = _LC538;
      if (cVar5 == '\0') {
        *(undefined4 *)param_6 = 2;
        *(undefined8 *)(param_6 + 4) = uVar4;
      }
      fVar12 = Variant::operator_cast_to_float(this_00);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
      uVar4 = _LC536;
      if (cVar5 == '\0') {
        *(undefined4 *)param_6 = 2;
        *(undefined8 *)(param_6 + 4) = uVar4;
      }
      Variant::operator_cast_to_int(this);
                    /* WARNING: Could not recover jumptable at 0x0012b20f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*param_2)((int)(param_1 + (long)param_3),fVar12);
      return;
    }
  }
  uVar7 = 4;
LAB_0012b225:
  *(undefined4 *)param_6 = uVar7;
  *(undefined4 *)(param_6 + 8) = 2;
  return;
}



/* MethodBindT<int, float>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<int,float>::call
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
      _err_print_error(&_LC78,"./core/object/method_bind.h",0x154,
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
      goto LAB_0012b316;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,int,float>
            (p_Var4,(_func_void_int_float *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8
             ,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_0012b316:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, Environment::SDFGIYScale>(__UnexistingClass*,
   void (__UnexistingClass::*)(Environment::SDFGIYScale), Variant const**, int,
   Callable::CallError&, Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,Environment::SDFGIYScale>
               (__UnexistingClass *param_1,_func_void_SDFGIYScale *param_2,Variant **param_3,
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
    goto LAB_0012b61d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_0012b680;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_0012b680:
      uVar6 = 4;
LAB_0012b61d:
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
      goto LAB_0012b59b;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0012b59b:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_SDFGIYScale **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
  uVar4 = _LC536;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_long(this);
                    /* WARNING: Could not recover jumptable at 0x0012b5f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)((char)(param_1 + (long)param_3));
  return;
}



/* MethodBindT<Environment::SDFGIYScale>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindT<Environment::SDFGIYScale>::call
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
      _err_print_error(&_LC78,"./core/object/method_bind.h",0x154,
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
      goto LAB_0012b6e6;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,Environment::SDFGIYScale>
            (p_Var4,(_func_void_SDFGIYScale *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,
             in_R8,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_0012b6e6:
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
    goto LAB_0012b9ed;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_0012ba50;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_0012ba50:
      uVar6 = 4;
LAB_0012b9ed:
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
      goto LAB_0012b96b;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0012b96b:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_bool **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,1);
  uVar4 = _LC502;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_bool(this);
                    /* WARNING: Could not recover jumptable at 0x0012b9c7. Too many branches */
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
      _err_print_error(&_LC78,"./core/object/method_bind.h",0x154,
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
      goto LAB_0012bab6;
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
LAB_0012bab6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, Environment::ToneMapper>(__UnexistingClass*,
   void (__UnexistingClass::*)(Environment::ToneMapper), Variant const**, int, Callable::CallError&,
   Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,Environment::ToneMapper>
               (__UnexistingClass *param_1,_func_void_ToneMapper *param_2,Variant **param_3,
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
    goto LAB_0012bdbd;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_0012be20;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_0012be20:
      uVar6 = 4;
LAB_0012bdbd:
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
      goto LAB_0012bd3b;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0012bd3b:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_ToneMapper **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
  uVar4 = _LC536;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_long(this);
                    /* WARNING: Could not recover jumptable at 0x0012bd96. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)((char)(param_1 + (long)param_3));
  return;
}



/* MethodBindT<Environment::ToneMapper>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindT<Environment::ToneMapper>::call
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
      _err_print_error(&_LC78,"./core/object/method_bind.h",0x154,
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
      goto LAB_0012be86;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,Environment::ToneMapper>
            (p_Var4,(_func_void_ToneMapper *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,
             in_R8,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_0012be86:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass,
   Environment::ReflectionSource>(__UnexistingClass*, void
   (__UnexistingClass::*)(Environment::ReflectionSource), Variant const**, int,
   Callable::CallError&, Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,Environment::ReflectionSource>
               (__UnexistingClass *param_1,_func_void_ReflectionSource *param_2,Variant **param_3,
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
    goto LAB_0012c18d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_0012c1f0;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_0012c1f0:
      uVar6 = 4;
LAB_0012c18d:
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
      goto LAB_0012c10b;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0012c10b:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_ReflectionSource **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
  uVar4 = _LC536;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_long(this);
                    /* WARNING: Could not recover jumptable at 0x0012c166. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)((char)(param_1 + (long)param_3));
  return;
}



/* MethodBindT<Environment::ReflectionSource>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindT<Environment::ReflectionSource>::call
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
      _err_print_error(&_LC78,"./core/object/method_bind.h",0x154,
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
      goto LAB_0012c256;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,Environment::ReflectionSource>
            (p_Var4,(_func_void_ReflectionSource *)param_2[0xb],(Variant **)param_2[0xc],
             (int)param_4,in_R8,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_0012c256:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, Environment::AmbientSource>(__UnexistingClass*,
   void (__UnexistingClass::*)(Environment::AmbientSource), Variant const**, int,
   Callable::CallError&, Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,Environment::AmbientSource>
               (__UnexistingClass *param_1,_func_void_AmbientSource *param_2,Variant **param_3,
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
    goto LAB_0012c55d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_0012c5c0;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_0012c5c0:
      uVar6 = 4;
LAB_0012c55d:
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
      goto LAB_0012c4db;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0012c4db:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_AmbientSource **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
  uVar4 = _LC536;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_long(this);
                    /* WARNING: Could not recover jumptable at 0x0012c536. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)((char)(param_1 + (long)param_3));
  return;
}



/* MethodBindT<Environment::AmbientSource>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindT<Environment::AmbientSource>::call
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
      _err_print_error(&_LC78,"./core/object/method_bind.h",0x154,
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
      goto LAB_0012c626;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,Environment::AmbientSource>
            (p_Var4,(_func_void_AmbientSource *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,
             in_R8,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_0012c626:
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
    goto LAB_0012c92d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_0012c990;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_0012c990:
      uVar6 = 4;
LAB_0012c92d:
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
      goto LAB_0012c8ab;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0012c8ab:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_int **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
  uVar4 = _LC536;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_int(this);
                    /* WARNING: Could not recover jumptable at 0x0012c906. Too many branches */
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
      _err_print_error(&_LC78,"./core/object/method_bind.h",0x154,
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
      goto LAB_0012c9f6;
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
LAB_0012c9f6:
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
    goto LAB_0012ccfd;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_0012cd60;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_0012cd60:
      uVar6 = 4;
LAB_0012ccfd:
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
      goto LAB_0012cc7b;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0012cc7b:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_float **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,3);
  uVar4 = _LC539;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  fVar9 = Variant::operator_cast_to_float(this);
                    /* WARNING: Could not recover jumptable at 0x0012ccd4. Too many branches */
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
      _err_print_error(&_LC78,"./core/object/method_bind.h",0x154,
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
      goto LAB_0012cdc6;
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
LAB_0012cdc6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, Environment::BGMode>(__UnexistingClass*, void
   (__UnexistingClass::*)(Environment::BGMode), Variant const**, int, Callable::CallError&,
   Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,Environment::BGMode>
               (__UnexistingClass *param_1,_func_void_BGMode *param_2,Variant **param_3,int param_4,
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
    goto LAB_0012d0cd;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_0012d130;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_0012d130:
      uVar6 = 4;
LAB_0012d0cd:
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
      goto LAB_0012d04b;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0012d04b:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_BGMode **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
  uVar4 = _LC536;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_long(this);
                    /* WARNING: Could not recover jumptable at 0x0012d0a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)((char)(param_1 + (long)param_3));
  return;
}



/* MethodBindT<Environment::BGMode>::call(Object*, Variant const**, int, Callable::CallError&) const
    */

Object * MethodBindT<Environment::BGMode>::call
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
      _err_print_error(&_LC78,"./core/object/method_bind.h",0x154,
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
      goto LAB_0012d196;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,Environment::BGMode>
            (p_Var4,(_func_void_BGMode *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8,
             in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_0012d196:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
/* MethodBindTRC<Ref<Texture>>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Ref<Texture>>::~MethodBindTRC(MethodBindTRC<Ref<Texture>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Ref<Texture> >::~MethodBindT() */

void __thiscall MethodBindT<Ref<Texture>>::~MethodBindT(MethodBindT<Ref<Texture>> *this)

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
/* MethodBindT<Color>::~MethodBindT() */

void __thiscall MethodBindT<Color>::~MethodBindT(MethodBindT<Color> *this)

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
/* MethodBindTRC<Environment::FogMode>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Environment::FogMode>::~MethodBindTRC(MethodBindTRC<Environment::FogMode> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Environment::FogMode>::~MethodBindT() */

void __thiscall
MethodBindT<Environment::FogMode>::~MethodBindT(MethodBindT<Environment::FogMode> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Environment::GlowBlendMode>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Environment::GlowBlendMode>::~MethodBindTRC
          (MethodBindTRC<Environment::GlowBlendMode> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Environment::GlowBlendMode>::~MethodBindT() */

void __thiscall
MethodBindT<Environment::GlowBlendMode>::~MethodBindT(MethodBindT<Environment::GlowBlendMode> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<float, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<float,int>::~MethodBindTRC(MethodBindTRC<float,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<int, float>::~MethodBindT() */

void __thiscall MethodBindT<int,float>::~MethodBindT(MethodBindT<int,float> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Environment::SDFGIYScale>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Environment::SDFGIYScale>::~MethodBindTRC
          (MethodBindTRC<Environment::SDFGIYScale> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Environment::SDFGIYScale>::~MethodBindT() */

void __thiscall
MethodBindT<Environment::SDFGIYScale>::~MethodBindT(MethodBindT<Environment::SDFGIYScale> *this)

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
/* MethodBindTRC<Environment::ToneMapper>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Environment::ToneMapper>::~MethodBindTRC(MethodBindTRC<Environment::ToneMapper> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Environment::ToneMapper>::~MethodBindT() */

void __thiscall
MethodBindT<Environment::ToneMapper>::~MethodBindT(MethodBindT<Environment::ToneMapper> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Environment::ReflectionSource>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Environment::ReflectionSource>::~MethodBindTRC
          (MethodBindTRC<Environment::ReflectionSource> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Environment::ReflectionSource>::~MethodBindT() */

void __thiscall
MethodBindT<Environment::ReflectionSource>::~MethodBindT
          (MethodBindT<Environment::ReflectionSource> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Environment::AmbientSource>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Environment::AmbientSource>::~MethodBindTRC
          (MethodBindTRC<Environment::AmbientSource> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Environment::AmbientSource>::~MethodBindT() */

void __thiscall
MethodBindT<Environment::AmbientSource>::~MethodBindT(MethodBindT<Environment::AmbientSource> *this)

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
/* MethodBindTRC<Ref<Sky>>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Ref<Sky>>::~MethodBindTRC(MethodBindTRC<Ref<Sky>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Ref<Sky> const&>::~MethodBindT() */

void __thiscall MethodBindT<Ref<Sky>const&>::~MethodBindT(MethodBindT<Ref<Sky>const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Environment::BGMode>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Environment::BGMode>::~MethodBindTRC(MethodBindTRC<Environment::BGMode> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Environment::BGMode>::~MethodBindT() */

void __thiscall
MethodBindT<Environment::BGMode>::~MethodBindT(MethodBindT<Environment::BGMode> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<Environment, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Environment,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Environment,void> *this)

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

/* AudioStreamPlayer3D::_is_autoplay_enabled_bind_compat_86907() */undefined1 AudioStreamPlayer3D::_is_autoplay_enabled_bind_compat_86907(AudioStreamPlayer3D *this) {
   return *(undefined1*)( *(long*)( this + 0x528 ) + 0x1fc );
}
/* AudioStreamPlayer3D::get_volume_db() const */undefined4 AudioStreamPlayer3D::get_volume_db(AudioStreamPlayer3D *this) {
   return *(undefined4*)( *(long*)( this + 0x528 ) + 0x1f8 );
}
/* AudioStreamPlayer3D::get_unit_size() const */undefined4 AudioStreamPlayer3D::get_unit_size(AudioStreamPlayer3D *this) {
   return *(undefined4*)( this + 0x544 );
}
/* AudioStreamPlayer3D::set_max_db(float) */void AudioStreamPlayer3D::set_max_db(AudioStreamPlayer3D *this, float param_1) {
   *(float*)( this + 0x548 ) = param_1;
   return;
}
/* AudioStreamPlayer3D::get_max_db() const */undefined4 AudioStreamPlayer3D::get_max_db(AudioStreamPlayer3D *this) {
   return *(undefined4*)( this + 0x548 );
}
/* AudioStreamPlayer3D::get_pitch_scale() const */undefined4 AudioStreamPlayer3D::get_pitch_scale(AudioStreamPlayer3D *this) {
   return *(undefined4*)( *(long*)( this + 0x528 ) + 500 );
}
/* AudioStreamPlayer3D::set_autoplay(bool) */void AudioStreamPlayer3D::set_autoplay(AudioStreamPlayer3D *this, bool param_1) {
   *(bool*)( *(long*)( this + 0x528 ) + 0x1fc ) = param_1;
   return;
}
/* AudioStreamPlayer3D::get_max_distance() const */undefined4 AudioStreamPlayer3D::get_max_distance(AudioStreamPlayer3D *this) {
   return *(undefined4*)( this + 0x57c );
}
/* AudioStreamPlayer3D::set_area_mask(unsigned int) */void AudioStreamPlayer3D::set_area_mask(AudioStreamPlayer3D *this, uint param_1) {
   *(uint*)( this + 0x55c ) = param_1;
   return;
}
/* AudioStreamPlayer3D::get_area_mask() const */undefined4 AudioStreamPlayer3D::get_area_mask(AudioStreamPlayer3D *this) {
   return *(undefined4*)( this + 0x55c );
}
/* AudioStreamPlayer3D::is_emission_angle_enabled() const */AudioStreamPlayer3D AudioStreamPlayer3D::is_emission_angle_enabled(AudioStreamPlayer3D *this) {
   return this[0x564];
}
/* AudioStreamPlayer3D::get_emission_angle() const */undefined4 AudioStreamPlayer3D::get_emission_angle(AudioStreamPlayer3D *this) {
   return *(undefined4*)( this + 0x568 );
}
/* AudioStreamPlayer3D::set_emission_angle_filter_attenuation_db(float) */void AudioStreamPlayer3D::set_emission_angle_filter_attenuation_db(AudioStreamPlayer3D *this, float param_1) {
   *(float*)( this + 0x56c ) = param_1;
   return;
}
/* AudioStreamPlayer3D::get_emission_angle_filter_attenuation_db() const */undefined4 AudioStreamPlayer3D::get_emission_angle_filter_attenuation_db(AudioStreamPlayer3D *this) {
   return *(undefined4*)( this + 0x56c );
}
/* AudioStreamPlayer3D::set_attenuation_filter_cutoff_hz(float) */void AudioStreamPlayer3D::set_attenuation_filter_cutoff_hz(AudioStreamPlayer3D *this, float param_1) {
   *(float*)( this + 0x570 ) = param_1;
   return;
}
/* AudioStreamPlayer3D::get_attenuation_filter_cutoff_hz() const */undefined4 AudioStreamPlayer3D::get_attenuation_filter_cutoff_hz(AudioStreamPlayer3D *this) {
   return *(undefined4*)( this + 0x570 );
}
/* AudioStreamPlayer3D::set_attenuation_filter_db(float) */void AudioStreamPlayer3D::set_attenuation_filter_db(AudioStreamPlayer3D *this, float param_1) {
   *(float*)( this + 0x574 ) = param_1;
   return;
}
/* AudioStreamPlayer3D::get_attenuation_filter_db() const */undefined4 AudioStreamPlayer3D::get_attenuation_filter_db(AudioStreamPlayer3D *this) {
   return *(undefined4*)( this + 0x574 );
}
/* AudioStreamPlayer3D::get_attenuation_model() const */undefined4 AudioStreamPlayer3D::get_attenuation_model(AudioStreamPlayer3D *this) {
   return *(undefined4*)( this + 0x540 );
}
/* AudioStreamPlayer3D::get_doppler_tracking() const */undefined4 AudioStreamPlayer3D::get_doppler_tracking(AudioStreamPlayer3D *this) {
   return *(undefined4*)( this + 0x590 );
}
/* AudioStreamPlayer3D::get_max_polyphony() const */undefined4 AudioStreamPlayer3D::get_max_polyphony(AudioStreamPlayer3D *this) {
   return *(undefined4*)( *(long*)( this + 0x528 ) + 0x208 );
}
/* AudioStreamPlayer3D::get_panning_strength() const */undefined4 AudioStreamPlayer3D::get_panning_strength(AudioStreamPlayer3D *this) {
   return *(undefined4*)( this + 0x594 );
}
/* AudioStreamPlayer3D::set_bus(StringName const&) */void AudioStreamPlayer3D::set_bus(AudioStreamPlayer3D *this, StringName *param_1) {
   StringName::operator =((StringName*)( *(long*)( this + 0x528 ) + 0x200 ), param_1);
   return;
}
/* AudioStreamPlayer3D::get_volume_linear() const */void AudioStreamPlayer3D::get_volume_linear(AudioStreamPlayer3D *this) {
   expf(_LC0 * *(float*)( *(long*)( this + 0x528 ) + 0x1f8 ));
   return;
}
/* AudioStreamPlayer3D::set_unit_size(float) */void AudioStreamPlayer3D::set_unit_size(AudioStreamPlayer3D *this, float param_1) {
   *(float*)( this + 0x544 ) = param_1;
   Node3D::update_gizmos();
   return;
}
/* AudioStreamPlayer3D::set_emission_angle_enabled(bool) */void AudioStreamPlayer3D::set_emission_angle_enabled(AudioStreamPlayer3D *this, bool param_1) {
   this[0x564] = (AudioStreamPlayer3D)param_1;
   Node3D::update_gizmos();
   return;
}
/* AudioStreamPlayer3D::set_pitch_scale(float) */void AudioStreamPlayer3D::set_pitch_scale(float param_1) {
   AudioStreamPlayerInternal::set_pitch_scale(param_1);
   return;
}
/* AudioStreamPlayer3D::seek(float) */void AudioStreamPlayer3D::seek(float param_1) {
   AudioStreamPlayerInternal::seek(param_1);
   return;
}
/* AudioStreamPlayer3D::stop() */void AudioStreamPlayer3D::stop(AudioStreamPlayer3D *this) {
   *(undefined4*)( this + 0x530 ) = 0xbf800000;
   AudioStreamPlayerInternal::stop_basic();
   return;
}
/* AudioStreamPlayer3D::get_bus() const */AudioStreamPlayer3D * __thiscall AudioStreamPlayer3D::get_bus(AudioStreamPlayer3D *this){
   long lVar1;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   AudioStreamPlayerInternal::get_bus();
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* AudioStreamPlayer3D::_set_playing(bool) */void AudioStreamPlayer3D::_set_playing(bool param_1) {
   undefined7 in_register_00000039;
   AudioStreamPlayerInternal::set_playing(SUB81(*(undefined8*)( CONCAT71(in_register_00000039, param_1) + 0x528 ), 0));
   return;
}
/* AudioStreamPlayer3D::set_stream_paused(bool) */void AudioStreamPlayer3D::set_stream_paused(bool param_1) {
   undefined7 in_register_00000039;
   AudioStreamPlayerInternal::set_stream_paused(SUB81(*(undefined8*)( CONCAT71(in_register_00000039, param_1) + 0x528 ), 0));
   return;
}
/* AudioStreamPlayer3D::get_stream_paused() const */void AudioStreamPlayer3D::get_stream_paused(void) {
   AudioStreamPlayerInternal::get_stream_paused();
   return;
}
/* AudioStreamPlayer3D::has_stream_playback() */void AudioStreamPlayer3D::has_stream_playback(void) {
   AudioStreamPlayerInternal::has_stream_playback();
   return;
}
/* AudioStreamPlayer3D::get_stream_playback() */AudioStreamPlayer3D * __thiscall AudioStreamPlayer3D::get_stream_playback(AudioStreamPlayer3D *this){
   long lVar1;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   AudioStreamPlayerInternal::get_stream_playback();
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* AudioStreamPlayer3D::set_max_polyphony(int) */void AudioStreamPlayer3D::set_max_polyphony(int param_1) {
   undefined4 in_register_0000003c;
   AudioStreamPlayerInternal::set_max_polyphony((int)*(undefined8*)( CONCAT44(in_register_0000003c, param_1) + 0x528 ));
   return;
}
/* AudioStreamPlayer3D::get_playback_type() const */void AudioStreamPlayer3D::get_playback_type(void) {
   AudioStreamPlayerInternal::get_playback_type();
   return;
}
/* AudioStreamPlayer3D::set_playback_type(AudioServer::PlaybackType) */void AudioStreamPlayer3D::set_playback_type(long param_1) {
   AudioStreamPlayerInternal::set_playback_type(*(undefined8*)( param_1 + 0x528 ));
   return;
}
/* AudioStreamPlayer3D::set_panning_strength(float) */void AudioStreamPlayer3D::set_panning_strength(AudioStreamPlayer3D *this, float param_1) {
   if (0.0 <= param_1) {
      *(float*)( this + 0x594 ) = param_1;
      return;
   }

   _err_print_error("set_panning_strength", "scene/3d/audio_stream_player_3d.cpp", 0x2e2, "Condition \"p_panning_strength < 0\" is true.", "Panning strength must be a positive number.", 0, 0);
   return;
}
/* AudioStreamPlayer3D::set_max_distance(float) */void AudioStreamPlayer3D::set_max_distance(AudioStreamPlayer3D *this, float param_1) {
   if (0.0 <= param_1) {
      *(float*)( this + 0x57c ) = param_1;
      Node3D::update_gizmos();
      return;
   }

   _err_print_error("set_max_distance", "scene/3d/audio_stream_player_3d.cpp", 0x26d, "Condition \"p_metres < 0.0\" is true.", 0, 0);
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* AudioStreamPlayer3D::set_emission_angle(float) */void AudioStreamPlayer3D::set_emission_angle(AudioStreamPlayer3D *this, float param_1) {
   if (( 0.0 <= param_1 ) && ( param_1 <= __LC8 )) {
      *(float*)( this + 0x568 ) = param_1;
      Node3D::update_gizmos();
      return;
   }

   _err_print_error("set_emission_angle", "scene/3d/audio_stream_player_3d.cpp", 0x288, "Condition \"p_angle < 0 || p_angle > 90\" is true.", 0, 0);
   return;
}
/* AudioStreamPlayer3D::set_attenuation_model(AudioStreamPlayer3D::AttenuationModel) */void AudioStreamPlayer3D::set_attenuation_model(AudioStreamPlayer3D *this, uint param_2) {
   if (param_2 < 4) {
      *(uint*)( this + 0x540 ) = param_2;
      Node3D::update_gizmos();
      return;
   }

   _err_print_index_error("set_attenuation_model", "scene/3d/audio_stream_player_3d.cpp", 0x2aa, (long)(int)param_2, 4, "(int)p_model", "4", "", false, false);
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* AudioStreamPlayer3D::set_volume_linear(float) */long AudioStreamPlayer3D::set_volume_linear(AudioStreamPlayer3D *this, float param_1) {
   long lVar1;
   float fVar2;
   fVar2 = logf(param_1);
   if (!NAN(fVar2 * __LC15)) {
      lVar1 = *(long*)( this + 0x528 );
      *(float*)( lVar1 + 0x1f8 ) = fVar2 * __LC15;
      return lVar1;
   }

   _err_print_error("set_volume_db", "scene/3d/audio_stream_player_3d.cpp", 0x202, "Condition \"Math::is_nan(p_volume)\" is true.", "Volume can\'t be set to NaN.", 0);
   return 0;
}
/* AudioStreamPlayer3D::set_doppler_tracking(AudioStreamPlayer3D::DopplerTracking) */void AudioStreamPlayer3D::set_doppler_tracking(AudioStreamPlayer3D *this, int param_2) {
   long lVar1;
   Vector3 *pVVar2;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(int*)( this + 0x590 ) != param_2) {
      *(int*)( this + 0x590 ) = param_2;
      if (param_2 == 0) {
         if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
            Node3D::set_notify_transform(SUB81(this, 0));
            return;
         }

         goto LAB_00100619;
      }

      Node3D::set_notify_transform(SUB81(this, 0));
      VelocityTracker3D::set_track_physics_step(SUB81(*(undefined8*)( this + 0x588 ), 0));
      if (( (byte)this[0x2fa] & 0x40 ) != 0) {
         pVVar2 = *(Vector3**)( this + 0x588 );
         Node3D::get_global_transform();
         VelocityTracker3D::reset(pVVar2);
      }

   }

   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_00100619:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* AudioStreamPlayer3D::is_playing() const */undefined8 AudioStreamPlayer3D::is_playing(AudioStreamPlayer3D *this) {
   undefined8 uVar1;
   if (0.0 <= *(float*)( this + 0x530 )) {
      return 1;
   }

   uVar1 = AudioStreamPlayerInternal::is_playing();
   return uVar1;
}
/* CowData<Spcap::Speaker>::_copy_on_write() [clone .isra.0] */void CowData<Spcap::Speaker>::_copy_on_write(CowData<Spcap::Speaker> *this) {
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
   __n = lVar2 * 0x14;
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
/* AudioStreamPlayer3D::get_playback_position() */ulong AudioStreamPlayer3D::get_playback_position(AudioStreamPlayer3D *this) {
   ulong uVar1;
   if (0.0 <= *(float*)( this + 0x530 )) {
      return ( ulong ) * (uint*)( this + 0x530 );
   }

   uVar1 = AudioStreamPlayerInternal::get_playback_position();
   return uVar1;
}
/* AudioStreamPlayer3D::is_autoplay_enabled() const */undefined1 AudioStreamPlayer3D::is_autoplay_enabled(AudioStreamPlayer3D *this) {
   return *(undefined1*)( *(long*)( this + 0x528 ) + 0x1fc );
}
/* AudioStreamPlayer3D::set_volume_db(float) */void AudioStreamPlayer3D::set_volume_db(AudioStreamPlayer3D *this, float param_1) {
   if (!NAN(param_1)) {
      *(float*)( *(long*)( this + 0x528 ) + 0x1f8 ) = param_1;
      return;
   }

   _err_print_error("set_volume_db", "scene/3d/audio_stream_player_3d.cpp", 0x202, "Condition \"Math::is_nan(p_volume)\" is true.", "Volume can\'t be set to NaN.", 0, 0);
   return;
}
/* AudioStreamPlayer3D::get_stream() const */void AudioStreamPlayer3D::get_stream(void) {
   long lVar1;
   char cVar2;
   long in_RSI;
   long *in_RDI;
   lVar1 = *(long*)( in_RSI + 0x528 );
   *in_RDI = 0;
   lVar1 = *(long*)( lVar1 + 0x1e8 );
   if (lVar1 != 0) {
      *in_RDI = lVar1;
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
         *in_RDI = 0;
      }

   }

   return;
}
/* AudioStreamPlayer3D::set_stream(Ref<AudioStream>) */void AudioStreamPlayer3D::set_stream(AudioStreamPlayer3D *this, long *param_2) {
   undefined8 uVar1;
   Object *pOVar2;
   long lVar3;
   char cVar4;
   long in_FS_OFFSET;
   Object *local_18;
   uVar1 = *(undefined8*)( this + 0x528 );
   pOVar2 = (Object*)*param_2;
   lVar3 = *(long*)( in_FS_OFFSET + 0x28 );
   local_18 = (Object*)0x0;
   if (pOVar2 != (Object*)0x0) {
      cVar4 = RefCounted::reference();
      local_18 = pOVar2;
      if (cVar4 == '\0') {
         local_18 = (Object*)0x0;
      }

   }

   AudioStreamPlayerInternal::set_stream(uVar1);
   if (local_18 != (Object*)0x0) {
      cVar4 = RefCounted::unreference();
      if (cVar4 != '\0') {
         cVar4 = predelete_handler(local_18);
         if (cVar4 != '\0') {
            ( **(code**)( *(long*)local_18 + 0x140 ) )(local_18);
            Memory::free_static(local_18, false);
         }

      }

   }

   if (lVar3 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* AudioStreamPlayer3D::~AudioStreamPlayer3D() */void AudioStreamPlayer3D::~AudioStreamPlayer3D(AudioStreamPlayer3D *this) {
   Object *pOVar1;
   char cVar2;
   *(undefined***)this = &PTR__initialize_classv_0011c040;
   pOVar1 = *(Object**)( this + 0x528 );
   cVar2 = predelete_handler(pOVar1);
   if (cVar2 != '\0') {
      ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
      Memory::free_static(pOVar1, false);
   }

   if (*(long*)( this + 0x588 ) != 0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
         pOVar1 = *(Object**)( this + 0x588 );
         cVar2 = predelete_handler(pOVar1);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
         }

      }

   }

   if (*(long*)( this + 0x538 ) != 0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
         pOVar1 = *(Object**)( this + 0x538 );
         cVar2 = predelete_handler(pOVar1);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
            Node3D::~Node3D((Node3D*)this);
            return;
         }

      }

   }

   Node3D::~Node3D((Node3D*)this);
   return;
}
/* AudioStreamPlayer3D::~AudioStreamPlayer3D() */void AudioStreamPlayer3D::~AudioStreamPlayer3D(AudioStreamPlayer3D *this) {
   ~AudioStreamPlayer3D(this)
   ;;
   operator_delete(this, 0x5a0);
   return;
}
/* CowData<AudioFrame>::_ref(CowData<AudioFrame> const&) [clone .part.0] */void CowData<AudioFrame>::_ref(CowData<AudioFrame> *this, CowData *param_1) {
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* AudioStreamPlayer3D::_get_attenuation_db(float) const */void AudioStreamPlayer3D::_get_attenuation_db(AudioStreamPlayer3D *this, float param_1) {
   uint uVar1;
   uVar1 = *(uint*)( this + 0x540 );
   if (uVar1 == 2) {
      log((double)( param_1 / *(float*)( this + 0x544 ) ) + __LC30);
   }
 else if (uVar1 < 3) {
      if (uVar1 == 0) {
         log(_LC31 / ( (double)( param_1 / *(float*)( this + 0x544 ) ) + __LC30 ));
      }
 else {
         log(_LC31 / ( (double)( ( param_1 / *(float*)( this + 0x544 ) ) * ( param_1 / *(float*)( this + 0x544 ) ) ) + __LC30 ));
      }

   }
 else if (uVar1 != 3) {
      _err_print_error("_get_attenuation_db", "scene/3d/audio_stream_player_3d.cpp", 0xe6, "Unknown attenuation type", 0, 0);
   }

   return;
}
/* AudioStreamPlayer3D::_get_overriding_area() */long AudioStreamPlayer3D::_get_overriding_area(AudioStreamPlayer3D *this) {
   code *pcVar1;
   char cVar2;
   int iVar3;
   long *plVar4;
   undefined8 uVar5;
   long lVar6;
   undefined1(*pauVar7)[16];
   undefined1(*pauVar8)[16];
   long in_FS_OFFSET;
   Object *local_490;
   undefined8 local_478;
   undefined4 local_470;
   undefined1 local_468[16];
   undefined1 local_458[16];
   undefined8 local_448;
   undefined4 local_440;
   undefined2 local_43c;
   undefined1 local_438[16];
   long local_428;
   long local_420;
   undefined8 local_414;
   undefined4 local_40c;
   undefined1 local_38[8];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   Node3D::get_world_3d();
   if (local_490 == (Object*)0x0) {
      _err_print_error("_get_overriding_area", "scene/3d/audio_stream_player_3d.cpp", 0x122, "Condition \"world_3d.is_null()\" is true. Returning: nullptr", 0, 0);
      lVar6 = 0;
   }
 else {
      Node3D::get_global_transform();
      plVar4 = (long*)PhysicsServer3D::get_singleton();
      pcVar1 = *(code**)( *plVar4 + 0x208 );
      uVar5 = World3D::get_space();
      plVar4 = (long*)( *pcVar1 )(plVar4, uVar5);
      pauVar7 = &local_438;
      do {
         *(undefined8*)pauVar7[1] = 0;
         pauVar8 = pauVar7 + 2;
         *pauVar7 = (undefined1[16])0x0;
         *(undefined4*)( pauVar7[1] + 8 ) = 0;
         pauVar7 = pauVar8;
      }
 while ( pauVar8 != (undefined1(*) [16])local_38 );
      local_468 = (undefined1[16])0x0;
      local_458 = (undefined1[16])0x0;
      local_478 = local_414;
      local_43c = 0x100;
      local_470 = local_40c;
      local_440 = *(undefined4*)( this + 0x55c );
      local_448 = 2;
      iVar3 = ( **(code**)( *plVar4 + 0x158 ) )(plVar4, &local_478, &local_438, 0x20);
      if (0 < iVar3) {
         plVar4 = &local_428;
         do {
            if (*plVar4 != 0) {
               lVar6 = __dynamic_cast(*plVar4, &Object::typeinfo, &Area3D::typeinfo, 0);
               if (lVar6 != 0) {
                  cVar2 = Area3D::is_overriding_audio_bus();
                  if (cVar2 != '\0') goto LAB_00100dcb;
                  cVar2 = Area3D::is_using_reverb_bus();
                  if (cVar2 != '\0') goto LAB_00100dcb;
               }

            }

            plVar4 = plVar4 + 4;
         }
 while ( plVar4 != &local_420 + (long)iVar3 * 4 + -1 );
      }

      lVar6 = 0;
      LAB_00100dcb:uVar5 = local_468._0_8_;
      if ((void*)local_468._0_8_ != (void*)0x0) {
         if (local_448._4_4_ != 0) {
            if (*(uint*)( hash_table_size_primes + ( local_448 & 0xffffffff ) * 4 ) != 0) {
               memset((void*)local_458._8_8_, 0, ( ulong ) * (uint*)( hash_table_size_primes + ( local_448 & 0xffffffff ) * 4 ) * 4);
            }

            local_448 = local_448 & 0xffffffff;
         }

         Memory::free_static((void*)uVar5, false);
         Memory::free_static((void*)local_458._0_8_, false);
         Memory::free_static((void*)local_468._8_8_, false);
         Memory::free_static((void*)local_458._8_8_, false);
      }

   }

   if (local_490 != (Object*)0x0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
         cVar2 = predelete_handler(local_490);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)local_490 + 0x140 ) )(local_490);
            Memory::free_static(local_490, false);
         }

      }

   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return lVar6;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* AudioStreamPlayer3D::_get_actual_bus() */void AudioStreamPlayer3D::_get_actual_bus(void) {
   long lVar1;
   char cVar2;
   long lVar3;
   AudioStreamPlayer3D *in_RSI;
   StringName *in_RDI;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar3 = _get_overriding_area(in_RSI);
   if (lVar3 != 0) {
      cVar2 = Area3D::is_overriding_audio_bus();
      if (cVar2 != '\0') {
         cVar2 = Area3D::is_using_reverb_bus();
         if (cVar2 == '\0') {
            Area3D::get_audio_bus_name();
            goto LAB_00100f45;
         }

      }

   }

   StringName::StringName(in_RDI, (StringName*)( *(long*)( in_RSI + 0x528 ) + 0x200 ));
   LAB_00100f45:if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* AudioStreamPlayer3D::play(float) */void AudioStreamPlayer3D::play(AudioStreamPlayer3D *this, float param_1) {
   Object *pOVar1;
   char cVar2;
   Ref *pRVar3;
   long in_FS_OFFSET;
   Object *local_48;
   Object *local_40;
   Object *local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   AudioStreamPlayerInternal::play_basic();
   if (local_48 != (Object*)0x0) {
      pOVar1 = *(Object**)( this + 0x538 );
      if (local_48 != pOVar1) {
         *(Object**)( this + 0x538 ) = local_48;
         cVar2 = RefCounted::reference();
         if (cVar2 == '\0') {
            *(undefined8*)( this + 0x538 ) = 0;
         }

         if (( ( pOVar1 != (Object*)0x0 ) && ( cVar2 = RefCounted::unreference() ),cVar2 != '\0' )) &&( cVar2 = cVar2 != '\0' )(**(code**)( *(long*)pOVar1 + 0x140 ))(pOVar1);
         Memory::free_static(pOVar1, false);
      }

   }

   *(float*)( this + 0x530 ) = param_1;
   if (*(code**)( *(long*)local_48 + 0x1a8 ) != AudioStreamPlayback::get_is_sample) {
      cVar2 = ( **(code**)( *(long*)local_48 + 0x1a8 ) )();
      if (( cVar2 != '\0' ) && ( ( **(code**)( *(long*)local_48 + 0x1b0 ) )(&local_38),local_38 != (Object*)0x0 )) {
         cVar2 = RefCounted::unreference();
         pOVar1 = local_38;
         if (( cVar2 != '\0' ) && ( cVar2 = cVar2 != '\0' )) {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
         }

         ( **(code**)( *(long*)local_48 + 0x1b0 ) )(&local_40);
         *(float*)( local_40 + 400 ) = param_1;
         _get_actual_bus();
         pOVar1 = local_40;
         if (*(Object**)( local_40 + 0x1a8 ) == local_38) {
            if (( StringName::configured != '\0' ) && ( local_38 != (Object*)0x0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            *(Object**)( pOVar1 + 0x1a8 ) = local_38;
         }

         pRVar3 = (Ref*)AudioServer::get_singleton();
         AudioServer::start_sample_playback(pRVar3);
         if (( ( local_40 != (Object*)0x0 ) && ( cVar2 = RefCounted::unreference() ),cVar2 != '\0' )) &&( cVar2 = cVar2 != '\0' )(**(code**)( *(long*)local_40 + 0x140 ))(local_40);
         Memory::free_static(local_40, false);
      }

   }

   if (local_48 == (Object*)0x0) goto LAB_00101032;
}
cVar2 = RefCounted::unreference();if (( cVar2 != '\0' ) && ( cVar2 = cVar2 != '\0' )) {
   ( **(code**)( *(long*)local_48 + 0x140 ) )(local_48);
   Memory::free_static(local_48, false);
}
}LAB_00101032:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return;}/* AudioStreamPlayer3D::_validate_property(PropertyInfo&) const */void AudioStreamPlayer3D::_validate_property(PropertyInfo *param_1) {
   AudioStreamPlayerInternal::validate_property(*(PropertyInfo**)( param_1 + 0x528 ));
   return;
}
/* AudioStreamPlayer3D::_set(StringName const&, Variant const&) */void AudioStreamPlayer3D::_set(StringName *param_1, Variant *param_2) {
   AudioStreamPlayerInternal::set(*(StringName**)( param_1 + 0x528 ), param_2);
   return;
}
/* AudioStreamPlayer3D::_get(StringName const&, Variant&) const */void AudioStreamPlayer3D::_get(StringName *param_1, Variant *param_2) {
   AudioStreamPlayerInternal::get(*(StringName**)( param_1 + 0x528 ), param_2);
   return;
}
/* AudioStreamPlayer3D::_get_property_list(List<PropertyInfo, DefaultAllocator>*) const */void AudioStreamPlayer3D::_get_property_list(List *param_1) {
   AudioStreamPlayerInternal::get_property_list(*(List**)( param_1 + 0x528 ));
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* AudioStreamPlayer3D::AudioStreamPlayer3D() */void AudioStreamPlayer3D::AudioStreamPlayer3D(AudioStreamPlayer3D *this) {
   undefined8 uVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   char cVar4;
   AudioStreamPlayerInternal *this_00;
   CallableCustom *pCVar5;
   VelocityTracker3D *this_01;
   Object *pOVar6;
   Object *pOVar7;
   long in_FS_OFFSET;
   float fVar8;
   Callable aCStack_78[16];
   long local_68[2];
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Node3D::Node3D((Node3D*)this);
   *(undefined8*)( this + 0x528 ) = 0;
   *(undefined***)this = &PTR__initialize_classv_0011c040;
   *(undefined4*)( this + 0x530 ) = 0xbf800000;
   *(undefined8*)( this + 0x540 ) = 0x4120000000000000;
   *(undefined8*)( this + 0x548 ) = 0x3f80000040400000;
   uVar3 = _UNK_0011ce58;
   uVar2 = __LC42;
   uVar1 = _LC43;
   *(undefined8*)( this + 0x538 ) = 0;
   *(undefined8*)( this + 0x550 ) = 0xffffffffffffffff;
   this[0x558] = (AudioStreamPlayer3D)0x0;
   *(undefined8*)( this + 0x55c ) = 1;
   this[0x564] = (AudioStreamPlayer3D)0x0;
   *(undefined8*)( this + 0x578 ) = 0;
   this[0x580] = (AudioStreamPlayer3D)0x0;
   *(undefined8*)( this + 0x588 ) = 0;
   *(undefined4*)( this + 0x590 ) = 0;
   *(undefined8*)( this + 0x594 ) = uVar1;
   *(undefined8*)( this + 0x568 ) = uVar2;
   *(undefined8*)( this + 0x570 ) = uVar3;
   this_00 = (AudioStreamPlayerInternal*)operator_new(0x210, "");
   pCVar5 = (CallableCustom*)operator_new(0x48, "");
   CallableCustom::CallableCustom(pCVar5);
   *(undefined**)( pCVar5 + 0x20 ) = &_LC13;
   *(undefined1(*) [16])( pCVar5 + 0x30 ) = (undefined1[16])0x0;
   *(undefined***)pCVar5 = &PTR_hash_0011c2b8;
   *(undefined8*)( pCVar5 + 0x40 ) = 0;
   uVar1 = *(undefined8*)( this + 0x60 );
   *(undefined8*)( pCVar5 + 0x10 ) = 0;
   *(undefined8*)( pCVar5 + 0x30 ) = uVar1;
   *(code**)( pCVar5 + 0x38 ) = stop;
   *(AudioStreamPlayer3D**)( pCVar5 + 0x28 ) = this;
   CallableCustomMethodPointerBase::_setup((uint*)pCVar5, (int)pCVar5 + 0x28);
   *(char**)( pCVar5 + 0x20 ) = "AudioStreamPlayer3D::stop";
   Callable::Callable((Callable*)local_68, pCVar5);
   pCVar5 = (CallableCustom*)operator_new(0x48, "");
   CallableCustom::CallableCustom(pCVar5);
   *(undefined**)( pCVar5 + 0x20 ) = &_LC13;
   *(undefined1(*) [16])( pCVar5 + 0x30 ) = (undefined1[16])0x0;
   *(undefined***)pCVar5 = &PTR_hash_0011c228;
   *(undefined8*)( pCVar5 + 0x40 ) = 0;
   uVar1 = *(undefined8*)( this + 0x60 );
   *(undefined8*)( pCVar5 + 0x10 ) = 0;
   *(undefined8*)( pCVar5 + 0x30 ) = uVar1;
   *(code**)( pCVar5 + 0x38 ) = play;
   *(AudioStreamPlayer3D**)( pCVar5 + 0x28 ) = this;
   CallableCustomMethodPointerBase::_setup((uint*)pCVar5, (int)pCVar5 + 0x28);
   *(char**)( pCVar5 + 0x20 ) = "AudioStreamPlayer3D::play";
   Callable::Callable(aCStack_78, pCVar5);
   AudioStreamPlayerInternal::AudioStreamPlayerInternal(this_00, (Node*)this, aCStack_78, (Callable*)local_68, true);
   postinitialize_handler((Object*)this_00);
   *(AudioStreamPlayerInternal**)( this + 0x528 ) = this_00;
   Callable::~Callable(aCStack_78);
   Callable::~Callable((Callable*)local_68);
   this_01 = (VelocityTracker3D*)operator_new(0x198, "");
   VelocityTracker3D::VelocityTracker3D(this_01);
   postinitialize_handler((Object*)this_01);
   cVar4 = RefCounted::init_ref();
   if (cVar4 == '\0') {
      pOVar7 = *(Object**)( this + 0x588 );
      if (pOVar7 == (Object*)0x0) goto LAB_001014c3;
      *(undefined8*)( this + 0x588 ) = 0;
      cVar4 = RefCounted::unreference();
      if (cVar4 == '\0') goto LAB_001014c3;
      this_01 = (VelocityTracker3D*)0x0;
      cVar4 = predelete_handler(pOVar7);
      if (cVar4 == '\0') goto LAB_001014c3;
      LAB_001015f3:( **(code**)( *(long*)pOVar7 + 0x140 ) )(pOVar7);
      Memory::free_static(pOVar7, false);
      pOVar6 = (Object*)this_01;
      if (this_01 == (VelocityTracker3D*)0x0) goto LAB_001014c3;
   }
 else {
      pOVar7 = *(Object**)( this + 0x588 );
      pOVar6 = pOVar7;
      if (this_01 != (VelocityTracker3D*)pOVar7) {
         *(VelocityTracker3D**)( this + 0x588 ) = this_01;
         cVar4 = RefCounted::reference();
         if (cVar4 == '\0') {
            *(undefined8*)( this + 0x588 ) = 0;
         }

         pOVar6 = (Object*)this_01;
         if (( ( pOVar7 != (Object*)0x0 ) && ( cVar4 = RefCounted::unreference() ),cVar4 != '\0' )) goto LAB_001015f3;
      }

   }

   cVar4 = RefCounted::unreference();
   if (( cVar4 != '\0' ) && ( cVar4 = cVar4 != '\0' )) {
      ( **(code**)( *(long*)pOVar6 + 0x140 ) )(pOVar6);
      Memory::free_static(pOVar6, false);
   }

   LAB_001014c3:Node3D::set_disable_scale(SUB81(this, 0));
   ProjectSettings::get_singleton();
   StringName::StringName((StringName*)local_68, "audio/general/3d_panning_strength", false);
   ProjectSettings::get_setting_with_override((StringName*)local_58);
   fVar8 = Variant::operator_cast_to_float((Variant*)local_58);
   *(float*)( this + 0x598 ) = fVar8;
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (( StringName::configured != '\0' ) && ( local_68[0] != 0 )) {
      StringName::unref();
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* AudioStreamPlayer3D::_bind_compatibility_methods() */void AudioStreamPlayer3D::_bind_compatibility_methods(void) {
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
   D_METHODP((char*)local_68, (char***)"is_autoplay_enabled", 0);
   local_40 = (undefined1[16])0x0;
   local_48 = 0;
   pMVar4 = create_method_bind<AudioStreamPlayer3D,bool>(_is_autoplay_enabled_bind_compat_86907);
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
/* MethodBind* ClassDB::bind_method<MethodDefinition, void
   (AudioStreamPlayer3D::*)(float)>(MethodDefinition, void (AudioStreamPlayer3D::*)(float)) [clone
   .isra.0] */MethodBind *ClassDB::bind_method<MethodDefinition,void(AudioStreamPlayer3D::*)(float)>(MethodDefinition *param_1, _func_void_float *param_2) {
   long lVar1;
   MethodBind *pMVar2;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   pMVar2 = create_method_bind<AudioStreamPlayer3D,float>(param_2);
   ClassDB::bind_methodfi(1, pMVar2, false, param_1, (Variant**)0x0, 0);
   if (Variant::needs_deinit[0] != '\0') {
      Variant::_clear_internal();
   }

   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return (MethodBind*)0x0;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind* ClassDB::bind_method<MethodDefinition, float (AudioStreamPlayer3D::*)()
   const>(MethodDefinition, float (AudioStreamPlayer3D::*)() const) [clone .isra.0] */MethodBind *ClassDB::bind_method<MethodDefinition,float(AudioStreamPlayer3D::*)()const>(MethodDefinition *param_1, _func_float *param_2) {
   long lVar1;
   MethodBind *pMVar2;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   pMVar2 = create_method_bind<AudioStreamPlayer3D,float>(param_2);
   ClassDB::bind_methodfi(1, pMVar2, false, param_1, (Variant**)0x0, 0);
   if (Variant::needs_deinit[0] != '\0') {
      Variant::_clear_internal();
   }

   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return (MethodBind*)0x0;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* AudioStreamPlayer3D::_bind_methods() */void AudioStreamPlayer3D::_bind_methods(void) {
   long *plVar1;
   long lVar2;
   code *pcVar3;
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   int *piVar11;
   MethodBind *pMVar12;
   int *piVar13;
   long lVar14;
   long in_FS_OFFSET;
   undefined8 local_138;
   undefined8 local_130;
   undefined8 local_128;
   long local_120;
   long local_118;
   long local_110;
   char *local_108;
   undefined8 local_100;
   char *local_f8;
   undefined8 local_f0;
   undefined1 local_e8[16];
   undefined8 local_d8;
   undefined8 local_d0;
   undefined8 local_c8;
   undefined8 local_c0;
   undefined8 local_b8[2];
   int *local_a8;
   undefined8 local_a0;
   long local_90;
   Variant *local_88[2];
   int local_78[2];
   undefined1 local_70[16];
   undefined8 local_60;
   undefined1 local_58[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   D_METHOD<char_const*>((char*)&local_f8, "set_stream");
   local_70 = (undefined1[16])0x0;
   local_78[0] = 0;
   local_78[1] = 0;
   pMVar12 = create_method_bind<AudioStreamPlayer3D,Ref<AudioStream>>(set_stream);
   ClassDB::bind_methodfi(1, pMVar12, false, (MethodDefinition*)&local_f8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_f8);
   D_METHODP((char*)&local_f8, (char***)"get_stream", 0);
   local_70 = (undefined1[16])0x0;
   local_78[0] = 0;
   local_78[1] = 0;
   pMVar12 = create_method_bind<AudioStreamPlayer3D,Ref<AudioStream>>(get_stream);
   ClassDB::bind_methodfi(1, pMVar12, false, (MethodDefinition*)&local_f8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_f8);
   D_METHOD<char_const*>((char*)&local_f8, "set_volume_db");
   ClassDB::bind_method<MethodDefinition,void(AudioStreamPlayer3D::*)(float)>((MethodDefinition*)&local_f8, set_volume_db, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_f8);
   D_METHODP((char*)&local_f8, (char***)"get_volume_db", 0);
   ClassDB::bind_method<MethodDefinition,float(AudioStreamPlayer3D::*)()const>((MethodDefinition*)&local_f8, get_volume_db, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_f8);
   D_METHOD<char_const*>((char*)&local_f8, "set_volume_linear");
   ClassDB::bind_method<MethodDefinition,void(AudioStreamPlayer3D::*)(float)>((MethodDefinition*)&local_f8, set_volume_linear, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_f8);
   D_METHODP((char*)&local_f8, (char***)"get_volume_linear", 0);
   ClassDB::bind_method<MethodDefinition,float(AudioStreamPlayer3D::*)()const>((MethodDefinition*)&local_f8, get_volume_linear, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_f8);
   D_METHOD<char_const*>((char*)&local_f8, "set_unit_size");
   ClassDB::bind_method<MethodDefinition,void(AudioStreamPlayer3D::*)(float)>((MethodDefinition*)&local_f8, set_unit_size, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_f8);
   D_METHODP((char*)&local_f8, (char***)"get_unit_size", 0);
   ClassDB::bind_method<MethodDefinition,float(AudioStreamPlayer3D::*)()const>((MethodDefinition*)&local_f8, get_unit_size, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_f8);
   D_METHOD<char_const*>((char*)&local_f8, "set_max_db");
   ClassDB::bind_method<MethodDefinition,void(AudioStreamPlayer3D::*)(float)>((MethodDefinition*)&local_f8, set_max_db, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_f8);
   D_METHODP((char*)&local_f8, (char***)"get_max_db", 0);
   ClassDB::bind_method<MethodDefinition,float(AudioStreamPlayer3D::*)()const>((MethodDefinition*)&local_f8, get_max_db, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_f8);
   D_METHOD<char_const*>((char*)&local_f8, "set_pitch_scale");
   ClassDB::bind_method<MethodDefinition,void(AudioStreamPlayer3D::*)(float)>((MethodDefinition*)&local_f8, set_pitch_scale, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_f8);
   D_METHODP((char*)&local_f8, (char***)"get_pitch_scale", 0);
   ClassDB::bind_method<MethodDefinition,float(AudioStreamPlayer3D::*)()const>((MethodDefinition*)&local_f8, get_pitch_scale, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_f8);
   D_METHOD<char_const*>((char*)&local_f8, "play");
   Variant::Variant((Variant*)local_78, 0.0);
   local_58 = (undefined1[16])0x0;
   local_60 = 0;
   local_88[0] = (Variant*)local_78;
   pMVar12 = create_method_bind<AudioStreamPlayer3D,float>(play);
   ClassDB::bind_methodfi(1, pMVar12, false, (MethodDefinition*)&local_f8, local_88, 1);
   if (Variant::needs_deinit[(int)local_60] != '\0') {
      Variant::_clear_internal();
   }

   if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_f8);
   D_METHOD<char_const*>((char*)&local_f8, "seek");
   ClassDB::bind_method<MethodDefinition,void(AudioStreamPlayer3D::*)(float)>((MethodDefinition*)&local_f8, seek, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_f8);
   D_METHODP((char*)&local_f8, (char***)&_LC100, 0);
   local_70 = (undefined1[16])0x0;
   local_78[0] = 0;
   local_78[1] = 0;
   pMVar12 = create_method_bind<AudioStreamPlayer3D>(stop);
   ClassDB::bind_methodfi(1, pMVar12, false, (MethodDefinition*)&local_f8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_f8);
   D_METHODP((char*)&local_f8, (char***)"is_playing", 0);
   local_70 = (undefined1[16])0x0;
   local_78[0] = 0;
   local_78[1] = 0;
   pMVar12 = create_method_bind<AudioStreamPlayer3D,bool>(is_playing);
   ClassDB::bind_methodfi(1, pMVar12, false, (MethodDefinition*)&local_f8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_f8);
   D_METHODP((char*)&local_f8, (char***)"get_playback_position", 0);
   local_70 = (undefined1[16])0x0;
   local_78[0] = 0;
   local_78[1] = 0;
   pMVar12 = create_method_bind<AudioStreamPlayer3D,float>(get_playback_position);
   ClassDB::bind_methodfi(1, pMVar12, false, (MethodDefinition*)&local_f8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_f8);
   D_METHOD<char_const*>((char*)&local_f8, "set_bus");
   local_70 = (undefined1[16])0x0;
   local_78[0] = 0;
   local_78[1] = 0;
   pMVar12 = create_method_bind<AudioStreamPlayer3D,StringName_const&>(set_bus);
   ClassDB::bind_methodfi(1, pMVar12, false, (MethodDefinition*)&local_f8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_f8);
   D_METHODP((char*)&local_f8, (char***)"get_bus", 0);
   local_70 = (undefined1[16])0x0;
   local_78[0] = 0;
   local_78[1] = 0;
   pMVar12 = create_method_bind<AudioStreamPlayer3D,StringName>(get_bus);
   ClassDB::bind_methodfi(1, pMVar12, false, (MethodDefinition*)&local_f8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_f8);
   D_METHOD<char_const*>((char*)&local_f8, "set_autoplay");
   local_70 = (undefined1[16])0x0;
   local_78[0] = 0;
   local_78[1] = 0;
   pMVar12 = create_method_bind<AudioStreamPlayer3D,bool>(set_autoplay);
   ClassDB::bind_methodfi(1, pMVar12, false, (MethodDefinition*)&local_f8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_f8);
   D_METHODP((char*)&local_f8, (char***)"is_autoplay_enabled", 0);
   local_70 = (undefined1[16])0x0;
   local_78[0] = 0;
   local_78[1] = 0;
   pMVar12 = create_method_bind<AudioStreamPlayer3D,bool>(is_autoplay_enabled);
   ClassDB::bind_methodfi(1, pMVar12, false, (MethodDefinition*)&local_f8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_f8);
   D_METHOD<char_const*>((char*)&local_f8, "set_playing");
   local_70 = (undefined1[16])0x0;
   local_78[0] = 0;
   local_78[1] = 0;
   pMVar12 = create_method_bind<AudioStreamPlayer3D,bool>(_set_playing);
   ClassDB::bind_methodfi(1, pMVar12, false, (MethodDefinition*)&local_f8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_f8);
   D_METHOD<char_const*>((char*)&local_f8, "set_max_distance");
   ClassDB::bind_method<MethodDefinition,void(AudioStreamPlayer3D::*)(float)>((MethodDefinition*)&local_f8, set_max_distance, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_f8);
   D_METHODP((char*)&local_f8, (char***)"get_max_distance", 0);
   ClassDB::bind_method<MethodDefinition,float(AudioStreamPlayer3D::*)()const>((MethodDefinition*)&local_f8, get_max_distance, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_f8);
   D_METHOD<char_const*>((char*)&local_f8, "set_area_mask");
   local_70 = (undefined1[16])0x0;
   local_78[0] = 0;
   local_78[1] = 0;
   pMVar12 = create_method_bind<AudioStreamPlayer3D,unsigned_int>(set_area_mask);
   ClassDB::bind_methodfi(1, pMVar12, false, (MethodDefinition*)&local_f8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_f8);
   D_METHODP((char*)&local_f8, (char***)"get_area_mask", 0);
   local_70 = (undefined1[16])0x0;
   local_78[0] = 0;
   local_78[1] = 0;
   pMVar12 = create_method_bind<AudioStreamPlayer3D,unsigned_int>(get_area_mask);
   ClassDB::bind_methodfi(1, pMVar12, false, (MethodDefinition*)&local_f8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_f8);
   D_METHOD<char_const*>((char*)&local_f8, "set_emission_angle");
   ClassDB::bind_method<MethodDefinition,void(AudioStreamPlayer3D::*)(float)>((MethodDefinition*)&local_f8, set_emission_angle, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_f8);
   D_METHODP((char*)&local_f8, (char***)"get_emission_angle", 0);
   ClassDB::bind_method<MethodDefinition,float(AudioStreamPlayer3D::*)()const>((MethodDefinition*)&local_f8, get_emission_angle, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_f8);
   D_METHOD<char_const*>((char*)&local_f8, "set_emission_angle_enabled");
   local_70 = (undefined1[16])0x0;
   local_78[0] = 0;
   local_78[1] = 0;
   pMVar12 = create_method_bind<AudioStreamPlayer3D,bool>(set_emission_angle_enabled);
   ClassDB::bind_methodfi(1, pMVar12, false, (MethodDefinition*)&local_f8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_f8);
   D_METHODP((char*)&local_f8, (char***)"is_emission_angle_enabled", 0);
   local_70 = (undefined1[16])0x0;
   local_78[0] = 0;
   local_78[1] = 0;
   pMVar12 = create_method_bind<AudioStreamPlayer3D,bool>(is_emission_angle_enabled);
   ClassDB::bind_methodfi(1, pMVar12, false, (MethodDefinition*)&local_f8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_f8);
   D_METHOD<char_const*>((char*)&local_f8, "set_emission_angle_filter_attenuation_db");
   ClassDB::bind_method<MethodDefinition,void(AudioStreamPlayer3D::*)(float)>((MethodDefinition*)&local_f8, set_emission_angle_filter_attenuation_db, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_f8);
   D_METHODP((char*)&local_f8, (char***)"get_emission_angle_filter_attenuation_db", 0);
   ClassDB::bind_method<MethodDefinition,float(AudioStreamPlayer3D::*)()const>((MethodDefinition*)&local_f8, get_emission_angle_filter_attenuation_db, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_f8);
   D_METHOD<char_const*>((char*)&local_f8, "set_attenuation_filter_cutoff_hz");
   ClassDB::bind_method<MethodDefinition,void(AudioStreamPlayer3D::*)(float)>((MethodDefinition*)&local_f8, set_attenuation_filter_cutoff_hz, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_f8);
   D_METHODP((char*)&local_f8, (char***)"get_attenuation_filter_cutoff_hz", 0);
   ClassDB::bind_method<MethodDefinition,float(AudioStreamPlayer3D::*)()const>((MethodDefinition*)&local_f8, get_attenuation_filter_cutoff_hz, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_f8);
   D_METHOD<char_const*>((char*)&local_f8, "set_attenuation_filter_db");
   ClassDB::bind_method<MethodDefinition,void(AudioStreamPlayer3D::*)(float)>((MethodDefinition*)&local_f8, set_attenuation_filter_db, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_f8);
   D_METHODP((char*)&local_f8, (char***)"get_attenuation_filter_db", 0);
   ClassDB::bind_method<MethodDefinition,float(AudioStreamPlayer3D::*)()const>((MethodDefinition*)&local_f8, get_attenuation_filter_db, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_f8);
   D_METHOD<char_const*>((char*)&local_f8, "set_attenuation_model");
   local_70 = (undefined1[16])0x0;
   local_78[0] = 0;
   local_78[1] = 0;
   pMVar12 = create_method_bind<AudioStreamPlayer3D,AudioStreamPlayer3D::AttenuationModel>(set_attenuation_model);
   ClassDB::bind_methodfi(1, pMVar12, false, (MethodDefinition*)&local_f8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_f8);
   D_METHODP((char*)&local_f8, (char***)"get_attenuation_model", 0);
   local_70 = (undefined1[16])0x0;
   local_78[0] = 0;
   local_78[1] = 0;
   pMVar12 = create_method_bind<AudioStreamPlayer3D,AudioStreamPlayer3D::AttenuationModel>(get_attenuation_model);
   ClassDB::bind_methodfi(1, pMVar12, false, (MethodDefinition*)&local_f8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_f8);
   D_METHOD<char_const*>((char*)&local_f8, "set_doppler_tracking");
   local_70 = (undefined1[16])0x0;
   local_78[0] = 0;
   local_78[1] = 0;
   pMVar12 = create_method_bind<AudioStreamPlayer3D,AudioStreamPlayer3D::DopplerTracking>(set_doppler_tracking);
   ClassDB::bind_methodfi(1, pMVar12, false, (MethodDefinition*)&local_f8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_f8);
   D_METHODP((char*)&local_f8, (char***)"get_doppler_tracking", 0);
   local_70 = (undefined1[16])0x0;
   local_78[0] = 0;
   local_78[1] = 0;
   pMVar12 = create_method_bind<AudioStreamPlayer3D,AudioStreamPlayer3D::DopplerTracking>(get_doppler_tracking);
   ClassDB::bind_methodfi(1, pMVar12, false, (MethodDefinition*)&local_f8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_f8);
   D_METHOD<char_const*>((char*)&local_f8, "set_stream_paused");
   local_70 = (undefined1[16])0x0;
   local_78[0] = 0;
   local_78[1] = 0;
   pMVar12 = create_method_bind<AudioStreamPlayer3D,bool>(set_stream_paused);
   ClassDB::bind_methodfi(1, pMVar12, false, (MethodDefinition*)&local_f8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_f8);
   D_METHODP((char*)&local_f8, (char***)"get_stream_paused", 0);
   local_70 = (undefined1[16])0x0;
   local_78[0] = 0;
   local_78[1] = 0;
   pMVar12 = create_method_bind<AudioStreamPlayer3D,bool>(get_stream_paused);
   ClassDB::bind_methodfi(1, pMVar12, false, (MethodDefinition*)&local_f8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_f8);
   D_METHOD<char_const*>((char*)&local_f8, "set_max_polyphony");
   local_70 = (undefined1[16])0x0;
   local_78[0] = 0;
   local_78[1] = 0;
   pMVar12 = create_method_bind<AudioStreamPlayer3D,int>(set_max_polyphony);
   ClassDB::bind_methodfi(1, pMVar12, false, (MethodDefinition*)&local_f8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_f8);
   D_METHODP((char*)&local_f8, (char***)"get_max_polyphony", 0);
   local_70 = (undefined1[16])0x0;
   local_78[0] = 0;
   local_78[1] = 0;
   pMVar12 = create_method_bind<AudioStreamPlayer3D,int>(get_max_polyphony);
   ClassDB::bind_methodfi(1, pMVar12, false, (MethodDefinition*)&local_f8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_f8);
   D_METHOD<char_const*>((char*)&local_f8, "set_panning_strength");
   ClassDB::bind_method<MethodDefinition,void(AudioStreamPlayer3D::*)(float)>((MethodDefinition*)&local_f8, set_panning_strength, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_f8);
   D_METHODP((char*)&local_f8, (char***)"get_panning_strength", 0);
   ClassDB::bind_method<MethodDefinition,float(AudioStreamPlayer3D::*)()const>((MethodDefinition*)&local_f8, get_panning_strength, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_f8);
   D_METHODP((char*)&local_f8, (char***)"has_stream_playback", 0);
   local_70 = (undefined1[16])0x0;
   local_78[0] = 0;
   local_78[1] = 0;
   pMVar12 = create_method_bind<AudioStreamPlayer3D,bool>(has_stream_playback);
   ClassDB::bind_methodfi(1, pMVar12, false, (MethodDefinition*)&local_f8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_f8);
   D_METHODP((char*)&local_f8, (char***)"get_stream_playback", 0);
   local_70 = (undefined1[16])0x0;
   local_78[0] = 0;
   local_78[1] = 0;
   pMVar12 = create_method_bind<AudioStreamPlayer3D,Ref<AudioStreamPlayback>>(get_stream_playback);
   ClassDB::bind_methodfi(1, pMVar12, false, (MethodDefinition*)&local_f8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_f8);
   D_METHOD<char_const*>((char*)&local_f8, "set_playback_type");
   local_70 = (undefined1[16])0x0;
   local_78[0] = 0;
   local_78[1] = 0;
   pMVar12 = create_method_bind<AudioStreamPlayer3D,AudioServer::PlaybackType>(set_playback_type);
   ClassDB::bind_methodfi(1, pMVar12, false, (MethodDefinition*)&local_f8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_f8);
   D_METHODP((char*)&local_f8, (char***)"get_playback_type", 0);
   local_70 = (undefined1[16])0x0;
   local_78[0] = 0;
   local_78[1] = 0;
   pMVar12 = create_method_bind<AudioStreamPlayer3D,AudioServer::PlaybackType>(get_playback_type);
   ClassDB::bind_methodfi(1, pMVar12, false, (MethodDefinition*)&local_f8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_f8);
   _scs_create((char*)&local_110, true);
   _scs_create((char*)&local_118, true);
   local_120 = 0;
   local_f8 = "AudioStream";
   local_128 = 0;
   local_f0 = 0xb;
   String::parse_latin1((StrRange*)&local_128);
   local_f8 = "stream";
   local_130 = 0;
   local_f0 = 6;
   String::parse_latin1((StrRange*)&local_130);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_f8, 0x18, (StrRange*)&local_130, 0x11, (StrRange*)&local_128, 6, (String*)&local_120);
   local_138 = 0;
   local_100 = 0x13;
   local_108 = "AudioStreamPlayer3D";
   String::parse_latin1((StrRange*)&local_138);
   StringName::StringName((StringName*)&local_108, (String*)&local_138, false);
   ClassDB::add_property((StringName*)&local_108, (PropertyInfo*)&local_f8, (StringName*)&local_118, (StringName*)&local_110, -1);
   if (( StringName::configured != '\0' ) && ( local_108 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_130);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
   if (StringName::configured != '\0') {
      if (local_120 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00102b00;
      }

      if (local_118 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00102b00;
      }

      if (local_110 != 0) {
         StringName::unref();
      }

   }

   LAB_00102b00:_scs_create((char*)&local_110, true);
   _scs_create((char*)&local_118, true);
   local_f8 = "Inverse,Inverse Square,Logarithmic,Disabled";
   local_120 = 0;
   local_128 = 0;
   local_f0 = 0x2b;
   String::parse_latin1((StrRange*)&local_128);
   local_f8 = "attenuation_model";
   local_130 = 0;
   local_f0 = 0x11;
   String::parse_latin1((StrRange*)&local_130);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_f8, 2, (StrRange*)&local_130, 2, (StrRange*)&local_128, 6, (String*)&local_120);
   local_108 = "AudioStreamPlayer3D";
   local_138 = 0;
   local_100 = 0x13;
   String::parse_latin1((StrRange*)&local_138);
   StringName::StringName((StringName*)&local_108, (String*)&local_138, false);
   ClassDB::add_property((StringName*)&local_108, (PropertyInfo*)&local_f8, (StringName*)&local_118, (StringName*)&local_110, -1);
   if (( StringName::configured != '\0' ) && ( local_108 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_130);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
   if (StringName::configured != '\0') {
      if (local_120 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00102c7e;
      }

      if (local_118 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00102c7e;
      }

      if (local_110 != 0) {
         StringName::unref();
      }

   }

   LAB_00102c7e:_scs_create((char*)&local_110, true);
   _scs_create((char*)&local_118, true);
   local_f8 = "-80,80,suffix:dB";
   local_120 = 0;
   local_128 = 0;
   local_f0 = 0x10;
   String::parse_latin1((StrRange*)&local_128);
   local_f8 = "volume_db";
   local_130 = 0;
   local_f0 = 9;
   String::parse_latin1((StrRange*)&local_130);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_f8, 3, (StrRange*)&local_130, 1, (StrRange*)&local_128, 6, (String*)&local_120);
   local_108 = "AudioStreamPlayer3D";
   local_138 = 0;
   local_100 = 0x13;
   String::parse_latin1((StrRange*)&local_138);
   StringName::StringName((StringName*)&local_108, (String*)&local_138, false);
   ClassDB::add_property((StringName*)&local_108, (PropertyInfo*)&local_f8, (StringName*)&local_118, (StringName*)&local_110, -1);
   if (( StringName::configured != '\0' ) && ( local_108 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_130);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
   if (StringName::configured != '\0') {
      if (local_120 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00102dfd;
      }

      if (local_118 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00102dfd;
      }

      if (local_110 != 0) {
         StringName::unref();
      }

   }

   LAB_00102dfd:_scs_create((char*)&local_110, true);
   _scs_create((char*)&local_118, true);
   local_f8 = "";
   local_120 = 0;
   local_128 = 0;
   local_f0 = 0;
   String::parse_latin1((StrRange*)&local_128);
   local_f8 = "volume_linear";
   local_130 = 0;
   local_f0 = 0xd;
   String::parse_latin1((StrRange*)&local_130);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_f8, 3, (StrRange*)&local_130, 0, (StrRange*)&local_128, 0, (String*)&local_120);
   local_108 = "AudioStreamPlayer3D";
   local_138 = 0;
   local_100 = 0x13;
   String::parse_latin1((StrRange*)&local_138);
   StringName::StringName((StringName*)&local_108, (String*)&local_138, false);
   ClassDB::add_property((StringName*)&local_108, (PropertyInfo*)&local_f8, (StringName*)&local_118, (StringName*)&local_110, -1);
   if (( StringName::configured != '\0' ) && ( local_108 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_130);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
   if (StringName::configured != '\0') {
      if (local_120 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00102f77;
      }

      if (local_118 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00102f77;
      }

      if (local_110 != 0) {
         StringName::unref();
      }

   }

   LAB_00102f77:_scs_create((char*)&local_110, true);
   _scs_create((char*)&local_118, true);
   local_f8 = "0.1,100,0.01,or_greater";
   local_120 = 0;
   local_128 = 0;
   local_f0 = 0x17;
   String::parse_latin1((StrRange*)&local_128);
   local_130 = 0;
   local_f8 = "unit_size";
   local_f0 = 9;
   String::parse_latin1((StrRange*)&local_130);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_f8, 3, (StrRange*)&local_130, 1, (StrRange*)&local_128, 6, (String*)&local_120);
   local_138 = 0;
   String::parse_latin1((String*)&local_138, "AudioStreamPlayer3D");
   StringName::StringName((StringName*)&local_108, (String*)&local_138, false);
   ClassDB::add_property((StringName*)&local_108, (PropertyInfo*)&local_f8, (StringName*)&local_118, (StringName*)&local_110, -1);
   if (( StringName::configured != '\0' ) && ( local_108 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_130);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
   if (StringName::configured != '\0') {
      if (local_120 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_001030e5;
      }

      if (local_118 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_001030e5;
      }

      if (local_110 != 0) {
         StringName::unref();
      }

   }

   LAB_001030e5:_scs_create((char*)&local_110, true);
   _scs_create((char*)&local_118, true);
   local_120 = 0;
   local_128 = 0;
   String::parse_latin1((String*)&local_128, "-24,6,suffix:dB");
   local_f8 = "max_db";
   local_130 = 0;
   local_f0 = 6;
   String::parse_latin1((StrRange*)&local_130);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_f8, 3, (StrRange*)&local_130, 1, (StrRange*)&local_128, 6, (String*)&local_120);
   local_108 = "AudioStreamPlayer3D";
   local_138 = 0;
   local_100 = 0x13;
   String::parse_latin1((StrRange*)&local_138);
   StringName::StringName((StringName*)&local_108, (String*)&local_138, false);
   ClassDB::add_property((StringName*)&local_108, (PropertyInfo*)&local_f8, (StringName*)&local_118, (StringName*)&local_110, -1);
   if (( StringName::configured != '\0' ) && ( local_108 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_130);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
   if (StringName::configured != '\0') {
      if (local_120 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00103252;
      }

      if (local_118 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00103252;
      }

      if (local_110 != 0) {
         StringName::unref();
      }

   }

   LAB_00103252:_scs_create((char*)&local_110, true);
   _scs_create((char*)&local_118, true);
   local_120 = 0;
   local_128 = 0;
   String::parse_latin1((String*)&local_128, "0.01,4,0.01,or_greater");
   local_f8 = "pitch_scale";
   local_130 = 0;
   local_f0 = 0xb;
   String::parse_latin1((StrRange*)&local_130);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_f8, 3, (StrRange*)&local_130, 1, (StrRange*)&local_128, 6, (String*)&local_120);
   local_108 = "AudioStreamPlayer3D";
   local_138 = 0;
   local_100 = 0x13;
   String::parse_latin1((StrRange*)&local_138);
   StringName::StringName((StringName*)&local_108, (String*)&local_138, false);
   ClassDB::add_property((StringName*)&local_108, (PropertyInfo*)&local_f8, (StringName*)&local_118, (StringName*)&local_110, -1);
   if (( StringName::configured != '\0' ) && ( local_108 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_130);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
   if (StringName::configured != '\0') {
      if (local_120 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_001033bf;
      }

      if (local_118 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_001033bf;
      }

      if (local_110 != 0) {
         StringName::unref();
      }

   }

   LAB_001033bf:_scs_create((char*)&local_110, true);
   _scs_create((char*)&local_118, true);
   local_f8 = "";
   local_120 = 0;
   local_128 = 0;
   local_f0 = 0;
   String::parse_latin1((StrRange*)&local_128);
   local_f8 = "playing";
   local_130 = 0;
   local_f0 = 7;
   String::parse_latin1((StrRange*)&local_130);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_f8, 1, (StrRange*)&local_130, 0x28, (StrRange*)&local_128, 4, (String*)&local_120);
   local_108 = "AudioStreamPlayer3D";
   local_138 = 0;
   local_100 = 0x13;
   String::parse_latin1((StrRange*)&local_138);
   StringName::StringName((StringName*)&local_108, (String*)&local_138, false);
   ClassDB::add_property((StringName*)&local_108, (PropertyInfo*)&local_f8, (StringName*)&local_118, (StringName*)&local_110, -1);
   if (( StringName::configured != '\0' ) && ( local_108 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_130);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
   if (StringName::configured != '\0') {
      if (local_120 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010353e;
      }

      if (local_118 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010353e;
      }

      if (local_110 != 0) {
         StringName::unref();
      }

   }

   LAB_0010353e:_scs_create((char*)&local_110, true);
   _scs_create((char*)&local_118, true);
   local_120 = 0;
   local_128 = 0;
   String::parse_latin1((String*)&local_128, "");
   local_f8 = "autoplay";
   local_130 = 0;
   local_f0 = 8;
   String::parse_latin1((StrRange*)&local_130);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_f8, 1, (StrRange*)&local_130, 0, (StrRange*)&local_128, 6, (String*)&local_120);
   local_108 = "AudioStreamPlayer3D";
   local_138 = 0;
   local_100 = 0x13;
   String::parse_latin1((StrRange*)&local_138);
   StringName::StringName((StringName*)&local_108, (String*)&local_138, false);
   ClassDB::add_property((StringName*)&local_108, (PropertyInfo*)&local_f8, (StringName*)&local_118, (StringName*)&local_110, -1);
   if (( StringName::configured != '\0' ) && ( local_108 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_130);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
   if (StringName::configured != '\0') {
      if (local_120 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_001036aa;
      }

      if (local_118 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_001036aa;
      }

      if (local_110 != 0) {
         StringName::unref();
      }

   }

   LAB_001036aa:_scs_create((char*)&local_110, true);
   _scs_create((char*)&local_118, true);
   local_f8 = "";
   local_120 = 0;
   local_128 = 0;
   local_f0 = 0;
   String::parse_latin1((StrRange*)&local_128);
   local_f8 = "stream_paused";
   local_130 = 0;
   local_f0 = 0xd;
   String::parse_latin1((StrRange*)&local_130);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_f8, 1, (StrRange*)&local_130, 0, (StrRange*)&local_128, 6, (String*)&local_120);
   local_108 = "AudioStreamPlayer3D";
   local_138 = 0;
   local_100 = 0x13;
   String::parse_latin1((StrRange*)&local_138);
   StringName::StringName((StringName*)&local_108, (String*)&local_138, false);
   ClassDB::add_property((StringName*)&local_108, (PropertyInfo*)&local_f8, (StringName*)&local_118, (StringName*)&local_110, -1);
   if (( StringName::configured != '\0' ) && ( local_108 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_130);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
   if (StringName::configured != '\0') {
      if (local_120 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00103826;
      }

      if (local_118 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00103826;
      }

      if (local_110 != 0) {
         StringName::unref();
      }

   }

   LAB_00103826:_scs_create((char*)&local_110, true);
   _scs_create((char*)&local_118, true);
   local_f8 = "0,4096,0.01,or_greater,suffix:m";
   local_120 = 0;
   local_128 = 0;
   local_f0 = 0x1f;
   String::parse_latin1((StrRange*)&local_128);
   local_f8 = "max_distance";
   local_130 = 0;
   local_f0 = 0xc;
   String::parse_latin1((StrRange*)&local_130);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_f8, 3, (StrRange*)&local_130, 1, (StrRange*)&local_128, 6, (String*)&local_120);
   local_108 = "AudioStreamPlayer3D";
   local_138 = 0;
   local_100 = 0x13;
   String::parse_latin1((StrRange*)&local_138);
   StringName::StringName((StringName*)&local_108, (String*)&local_138, false);
   ClassDB::add_property((StringName*)&local_108, (PropertyInfo*)&local_f8, (StringName*)&local_118, (StringName*)&local_110, -1);
   if (( StringName::configured != '\0' ) && ( local_108 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_130);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
   if (StringName::configured != '\0') {
      if (local_120 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_001039a4;
      }

      if (local_118 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_001039a4;
      }

      if (local_110 != 0) {
         StringName::unref();
      }

   }

   LAB_001039a4:_scs_create((char*)&local_110, true);
   _scs_create((char*)&local_118, true);
   local_120 = 0;
   local_128 = 0;
   String::parse_latin1((String*)&local_128, "");
   local_f8 = "max_polyphony";
   local_130 = 0;
   local_f0 = 0xd;
   String::parse_latin1((StrRange*)&local_130);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_f8, 2, (StrRange*)&local_130, 0, (StrRange*)&local_128, 6, (String*)&local_120);
   local_108 = "AudioStreamPlayer3D";
   local_138 = 0;
   local_100 = 0x13;
   String::parse_latin1((StrRange*)&local_138);
   StringName::StringName((StringName*)&local_108, (String*)&local_138, false);
   ClassDB::add_property((StringName*)&local_108, (PropertyInfo*)&local_f8, (StringName*)&local_118, (StringName*)&local_110, -1);
   if (( StringName::configured != '\0' ) && ( local_108 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_130);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
   if (StringName::configured != '\0') {
      if (local_120 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00103b0e;
      }

      if (local_118 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00103b0e;
      }

      if (local_110 != 0) {
         StringName::unref();
      }

   }

   LAB_00103b0e:_scs_create((char*)&local_110, true);
   _scs_create((char*)&local_118, true);
   local_f8 = "0,3,0.01,or_greater";
   local_120 = 0;
   local_128 = 0;
   local_f0 = 0x13;
   String::parse_latin1((StrRange*)&local_128);
   local_f8 = "panning_strength";
   local_130 = 0;
   local_f0 = 0x10;
   String::parse_latin1((StrRange*)&local_130);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_f8, 3, (StrRange*)&local_130, 1, (StrRange*)&local_128, 6, (String*)&local_120);
   local_108 = "AudioStreamPlayer3D";
   local_138 = 0;
   local_100 = 0x13;
   String::parse_latin1((StrRange*)&local_138);
   StringName::StringName((StringName*)&local_108, (String*)&local_138, false);
   ClassDB::add_property((StringName*)&local_108, (PropertyInfo*)&local_f8, (StringName*)&local_118, (StringName*)&local_110, -1);
   if (( StringName::configured != '\0' ) && ( local_108 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_130);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
   if (StringName::configured != '\0') {
      if (local_120 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00103c8d;
      }

      if (local_118 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00103c8d;
      }

      if (local_110 != 0) {
         StringName::unref();
      }

   }

   LAB_00103c8d:_scs_create((char*)&local_110, true);
   _scs_create((char*)&local_118, true);
   local_120 = 0;
   local_128 = 0;
   String::parse_latin1((String*)&local_128, "");
   local_f8 = "bus";
   local_130 = 0;
   local_f0 = 3;
   String::parse_latin1((StrRange*)&local_130);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_f8, 0x15, (StrRange*)&local_130, 2, (StrRange*)&local_128, 6, (String*)&local_120);
   local_108 = "AudioStreamPlayer3D";
   local_138 = 0;
   local_100 = 0x13;
   String::parse_latin1((StrRange*)&local_138);
   StringName::StringName((StringName*)&local_108, (String*)&local_138, false);
   ClassDB::add_property((StringName*)&local_108, (PropertyInfo*)&local_f8, (StringName*)&local_118, (StringName*)&local_110, -1);
   if (( StringName::configured != '\0' ) && ( local_108 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_130);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
   if (StringName::configured != '\0') {
      if (local_120 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00103dfc;
      }

      if (local_118 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00103dfc;
      }

      if (local_110 != 0) {
         StringName::unref();
      }

   }

   LAB_00103dfc:_scs_create((char*)&local_110, true);
   _scs_create((char*)&local_118, true);
   local_120 = 0;
   local_128 = 0;
   String::parse_latin1((String*)&local_128, "");
   local_f8 = "area_mask";
   local_130 = 0;
   local_f0 = 9;
   String::parse_latin1((StrRange*)&local_130);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_f8, 2, (StrRange*)&local_130, 8, (StrRange*)&local_128, 6, (String*)&local_120);
   local_108 = "AudioStreamPlayer3D";
   local_138 = 0;
   local_100 = 0x13;
   String::parse_latin1((StrRange*)&local_138);
   StringName::StringName((StringName*)&local_108, (String*)&local_138, false);
   ClassDB::add_property((StringName*)&local_108, (PropertyInfo*)&local_f8, (StringName*)&local_118, (StringName*)&local_110, -1);
   if (( StringName::configured != '\0' ) && ( local_108 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_130);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
   if (StringName::configured != '\0') {
      if (local_120 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00103f6a;
      }

      if (local_118 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00103f6a;
      }

      if (local_110 != 0) {
         StringName::unref();
      }

   }

   LAB_00103f6a:_scs_create((char*)&local_110, true);
   _scs_create((char*)&local_118, true);
   local_f8 = "Default,Stream,Sample";
   local_120 = 0;
   local_128 = 0;
   local_f0 = 0x15;
   String::parse_latin1((StrRange*)&local_128);
   local_f8 = "playback_type";
   local_130 = 0;
   local_f0 = 0xd;
   String::parse_latin1((StrRange*)&local_130);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_f8, 2, (StrRange*)&local_130, 2, (StrRange*)&local_128, 6, (String*)&local_120);
   local_108 = "AudioStreamPlayer3D";
   local_138 = 0;
   local_100 = 0x13;
   String::parse_latin1((StrRange*)&local_138);
   StringName::StringName((StringName*)&local_108, (String*)&local_138, false);
   ClassDB::add_property((StringName*)&local_108, (PropertyInfo*)&local_f8, (StringName*)&local_118, (StringName*)&local_110, -1);
   if (( StringName::configured != '\0' ) && ( local_108 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_130);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
   if (StringName::configured != '\0') {
      if (local_120 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_001040e8;
      }

      if (local_118 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_001040e8;
      }

      if (local_110 != 0) {
         StringName::unref();
      }

   }

   LAB_001040e8:local_108 = (char*)0x0;
   local_f8 = "emission_angle";
   local_f0 = 0xe;
   String::parse_latin1((StrRange*)&local_108);
   local_f8 = "Emission Angle";
   local_110 = 0;
   local_f0 = 0xe;
   String::parse_latin1((StrRange*)&local_110);
   local_f8 = "AudioStreamPlayer3D";
   local_118 = 0;
   local_f0 = 0x13;
   String::parse_latin1((StrRange*)&local_118);
   StringName::StringName((StringName*)&local_f8, (String*)&local_118, false);
   ClassDB::add_property_group((StringName*)&local_f8, (String*)&local_110, (String*)&local_108, 0);
   if (( StringName::configured != '\0' ) && ( local_f8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_110);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
   _scs_create((char*)&local_110, true);
   _scs_create((char*)&local_118, true);
   local_f8 = "";
   local_120 = 0;
   local_128 = 0;
   local_f0 = 0;
   String::parse_latin1((StrRange*)&local_128);
   local_f8 = "emission_angle_enabled";
   local_130 = 0;
   local_f0 = 0x16;
   String::parse_latin1((StrRange*)&local_130);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_f8, 1, (StrRange*)&local_130, 0, (StrRange*)&local_128, 6, (String*)&local_120);
   local_108 = "AudioStreamPlayer3D";
   local_138 = 0;
   local_100 = 0x13;
   String::parse_latin1((StrRange*)&local_138);
   StringName::StringName((StringName*)&local_108, (String*)&local_138, false);
   ClassDB::add_property((StringName*)&local_108, (PropertyInfo*)&local_f8, (StringName*)&local_118, (StringName*)&local_110, -1);
   if (( StringName::configured != '\0' ) && ( local_108 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_130);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
   if (StringName::configured != '\0') {
      if (local_120 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010432c;
      }

      if (local_118 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010432c;
      }

      if (local_110 != 0) {
         StringName::unref();
      }

   }

   LAB_0010432c:_scs_create((char*)&local_110, true);
   _scs_create((char*)&local_118, true);
   local_f8 = "0.1,90,0.1,degrees";
   local_120 = 0;
   local_128 = 0;
   local_f0 = 0x12;
   String::parse_latin1((StrRange*)&local_128);
   local_f8 = "emission_angle_degrees";
   local_130 = 0;
   local_f0 = 0x16;
   String::parse_latin1((StrRange*)&local_130);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_f8, 3, (StrRange*)&local_130, 1, (StrRange*)&local_128, 6, (String*)&local_120);
   local_108 = "AudioStreamPlayer3D";
   local_138 = 0;
   local_100 = 0x13;
   String::parse_latin1((StrRange*)&local_138);
   StringName::StringName((StringName*)&local_108, (String*)&local_138, false);
   ClassDB::add_property((StringName*)&local_108, (PropertyInfo*)&local_f8, (StringName*)&local_118, (StringName*)&local_110, -1);
   if (( StringName::configured != '\0' ) && ( local_108 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_130);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
   if (StringName::configured != '\0') {
      if (local_120 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_001044ab;
      }

      if (local_118 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_001044ab;
      }

      if (local_110 != 0) {
         StringName::unref();
      }

   }

   LAB_001044ab:_scs_create((char*)&local_110, true);
   _scs_create((char*)&local_118, true);
   local_f8 = "-80,0,0.1,suffix:dB";
   local_120 = 0;
   local_128 = 0;
   local_f0 = 0x13;
   String::parse_latin1((StrRange*)&local_128);
   local_f8 = "emission_angle_filter_attenuation_db";
   local_130 = 0;
   local_f0 = 0x24;
   String::parse_latin1((StrRange*)&local_130);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_f8, 3, (StrRange*)&local_130, 1, (StrRange*)&local_128, 6, (String*)&local_120);
   local_108 = "AudioStreamPlayer3D";
   local_138 = 0;
   local_100 = 0x13;
   String::parse_latin1((StrRange*)&local_138);
   StringName::StringName((StringName*)&local_108, (String*)&local_138, false);
   ClassDB::add_property((StringName*)&local_108, (PropertyInfo*)&local_f8, (StringName*)&local_118, (StringName*)&local_110, -1);
   if (( StringName::configured != '\0' ) && ( local_108 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_130);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
   if (StringName::configured != '\0') {
      if (local_120 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010462b;
      }

      if (local_118 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010462b;
      }

      if (local_110 != 0) {
         StringName::unref();
      }

   }

   LAB_0010462b:local_108 = (char*)0x0;
   local_f8 = "attenuation_filter_";
   local_f0 = 0x13;
   String::parse_latin1((StrRange*)&local_108);
   local_f8 = "Attenuation Filter";
   local_110 = 0;
   local_f0 = 0x12;
   String::parse_latin1((StrRange*)&local_110);
   local_f8 = "AudioStreamPlayer3D";
   local_118 = 0;
   local_f0 = 0x13;
   String::parse_latin1((StrRange*)&local_118);
   StringName::StringName((StringName*)&local_f8, (String*)&local_118, false);
   ClassDB::add_property_group((StringName*)&local_f8, (String*)&local_110, (String*)&local_108, 0);
   if (( StringName::configured != '\0' ) && ( local_f8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_110);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
   _scs_create((char*)&local_110, true);
   _scs_create((char*)&local_118, true);
   local_f8 = "1,20500,1,suffix:Hz";
   local_120 = 0;
   local_128 = 0;
   local_f0 = 0x13;
   String::parse_latin1((StrRange*)&local_128);
   local_f8 = "attenuation_filter_cutoff_hz";
   local_130 = 0;
   local_f0 = 0x1c;
   String::parse_latin1((StrRange*)&local_130);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_f8, 3, (StrRange*)&local_130, 1, (StrRange*)&local_128, 6, (String*)&local_120);
   local_108 = "AudioStreamPlayer3D";
   local_138 = 0;
   local_100 = 0x13;
   String::parse_latin1((StrRange*)&local_138);
   StringName::StringName((StringName*)&local_108, (String*)&local_138, false);
   ClassDB::add_property((StringName*)&local_108, (PropertyInfo*)&local_f8, (StringName*)&local_118, (StringName*)&local_110, -1);
   if (( StringName::configured != '\0' ) && ( local_108 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_130);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
   if (StringName::configured != '\0') {
      if (local_120 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00104873;
      }

      if (local_118 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00104873;
      }

      if (local_110 != 0) {
         StringName::unref();
      }

   }

   LAB_00104873:_scs_create((char*)&local_110, true);
   _scs_create((char*)&local_118, true);
   local_f8 = "-80,0,0.1,suffix:dB";
   local_120 = 0;
   local_128 = 0;
   local_f0 = 0x13;
   String::parse_latin1((StrRange*)&local_128);
   local_f8 = "attenuation_filter_db";
   local_130 = 0;
   local_f0 = 0x15;
   String::parse_latin1((StrRange*)&local_130);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_f8, 3, (StrRange*)&local_130, 1, (StrRange*)&local_128, 6, (String*)&local_120);
   local_108 = "AudioStreamPlayer3D";
   local_138 = 0;
   local_100 = 0x13;
   String::parse_latin1((StrRange*)&local_138);
   StringName::StringName((StringName*)&local_108, (String*)&local_138, false);
   ClassDB::add_property((StringName*)&local_108, (PropertyInfo*)&local_f8, (StringName*)&local_118, (StringName*)&local_110, -1);
   if (( StringName::configured != '\0' ) && ( local_108 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_130);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
   if (StringName::configured != '\0') {
      if (local_120 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_001049f1;
      }

      if (local_118 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_001049f1;
      }

      if (local_110 != 0) {
         StringName::unref();
      }

   }

   LAB_001049f1:local_108 = (char*)0x0;
   String::parse_latin1((String*)&local_108, "doppler_");
   local_f8 = "Doppler";
   local_110 = 0;
   local_f0 = 7;
   String::parse_latin1((StrRange*)&local_110);
   local_118 = 0;
   String::parse_latin1((String*)&local_118, "AudioStreamPlayer3D");
   StringName::StringName((StringName*)&local_f8, (String*)&local_118, false);
   ClassDB::add_property_group((StringName*)&local_f8, (String*)&local_110, (String*)&local_108, 0);
   if (( StringName::configured != '\0' ) && ( local_f8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_110);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
   _scs_create((char*)&local_110, true);
   _scs_create((char*)&local_118, true);
   local_120 = 0;
   local_128 = 0;
   String::parse_latin1((String*)&local_128, "Disabled,Idle,Physics");
   local_130 = 0;
   local_f8 = "doppler_tracking";
   local_f0 = 0x10;
   String::parse_latin1((StrRange*)&local_130);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_f8, 2, (StrRange*)&local_130, 2, (StrRange*)&local_128, 6, (String*)&local_120);
   local_138 = 0;
   String::parse_latin1((String*)&local_138, "AudioStreamPlayer3D");
   StringName::StringName((StringName*)&local_108, (String*)&local_138, false);
   ClassDB::add_property((StringName*)&local_108, (PropertyInfo*)&local_f8, (StringName*)&local_118, (StringName*)&local_110, -1);
   if (( StringName::configured != '\0' ) && ( local_108 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_130);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
   if (StringName::configured != '\0') {
      if (local_120 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00104bf4;
      }

      if (local_118 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00104bf4;
      }

      if (local_110 != 0) {
         StringName::unref();
      }

   }

   LAB_00104bf4:StringName::StringName((StringName*)&local_108, "ATTENUATION_INVERSE_DISTANCE", false);
   local_118 = 0;
   String::parse_latin1((String*)&local_118, "ATTENUATION_INVERSE_DISTANCE");
   GetTypeInfo<AudioStreamPlayer3D::AttenuationModel,void>::get_class_info((GetTypeInfo<AudioStreamPlayer3D::AttenuationModel,void>*)&local_f8);
   local_110 = local_e8._0_8_;
   auVar4._8_8_ = 0;
   auVar4._0_8_ = local_e8._8_8_;
   local_e8 = auVar4 << 0x40;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_f8);
   local_120 = 0;
   String::parse_latin1((String*)&local_120, "AudioStreamPlayer3D");
   StringName::StringName((StringName*)&local_f8, (String*)&local_120, false);
   ClassDB::bind_integer_constant((StringName*)&local_f8, (StringName*)&local_110, (StringName*)&local_108, 0, false);
   if (( StringName::configured != '\0' ) && ( local_f8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_120);
   if (( StringName::configured != '\0' ) && ( local_110 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
   if (( StringName::configured != '\0' ) && ( local_108 != (char*)0x0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_108, "ATTENUATION_INVERSE_SQUARE_DISTANCE", false);
   local_118 = 0;
   String::parse_latin1((String*)&local_118, "ATTENUATION_INVERSE_SQUARE_DISTANCE");
   GetTypeInfo<AudioStreamPlayer3D::AttenuationModel,void>::get_class_info((GetTypeInfo<AudioStreamPlayer3D::AttenuationModel,void>*)&local_f8);
   local_110 = local_e8._0_8_;
   auVar5._8_8_ = 0;
   auVar5._0_8_ = local_e8._8_8_;
   local_e8 = auVar5 << 0x40;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_f8);
   local_f8 = "AudioStreamPlayer3D";
   local_120 = 0;
   local_f0 = 0x13;
   String::parse_latin1((StrRange*)&local_120);
   StringName::StringName((StringName*)&local_f8, (String*)&local_120, false);
   ClassDB::bind_integer_constant((StringName*)&local_f8, (StringName*)&local_110, (StringName*)&local_108, 1, false);
   if (( StringName::configured != '\0' ) && ( local_f8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_120);
   if (( StringName::configured != '\0' ) && ( local_110 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
   if (( StringName::configured != '\0' ) && ( local_108 != (char*)0x0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_108, "ATTENUATION_LOGARITHMIC", false);
   local_118 = 0;
   String::parse_latin1((String*)&local_118, "ATTENUATION_LOGARITHMIC");
   GetTypeInfo<AudioStreamPlayer3D::AttenuationModel,void>::get_class_info((GetTypeInfo<AudioStreamPlayer3D::AttenuationModel,void>*)&local_f8);
   local_110 = local_e8._0_8_;
   auVar6._8_8_ = 0;
   auVar6._0_8_ = local_e8._8_8_;
   local_e8 = auVar6 << 0x40;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_f8);
   local_f8 = "AudioStreamPlayer3D";
   local_120 = 0;
   local_f0 = 0x13;
   String::parse_latin1((StrRange*)&local_120);
   StringName::StringName((StringName*)&local_f8, (String*)&local_120, false);
   ClassDB::bind_integer_constant((StringName*)&local_f8, (StringName*)&local_110, (StringName*)&local_108, 2, false);
   if (( StringName::configured != '\0' ) && ( local_f8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_120);
   if (( StringName::configured != '\0' ) && ( local_110 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
   if (( StringName::configured != '\0' ) && ( local_108 != (char*)0x0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_108, "ATTENUATION_DISABLED", false);
   local_118 = 0;
   String::parse_latin1((String*)&local_118, "ATTENUATION_DISABLED");
   GetTypeInfo<AudioStreamPlayer3D::AttenuationModel,void>::get_class_info((GetTypeInfo<AudioStreamPlayer3D::AttenuationModel,void>*)&local_f8);
   local_110 = local_e8._0_8_;
   auVar7._8_8_ = 0;
   auVar7._0_8_ = local_e8._8_8_;
   local_e8 = auVar7 << 0x40;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_f8);
   local_120 = 0;
   String::parse_latin1((String*)&local_120, "AudioStreamPlayer3D");
   StringName::StringName((StringName*)&local_f8, (String*)&local_120, false);
   ClassDB::bind_integer_constant((StringName*)&local_f8, (StringName*)&local_110, (StringName*)&local_108, 3, false);
   if (( StringName::configured != '\0' ) && ( local_f8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_120);
   if (( StringName::configured != '\0' ) && ( local_110 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
   if (( StringName::configured != '\0' ) && ( local_108 != (char*)0x0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_108, "DOPPLER_TRACKING_DISABLED", false);
   local_f8 = "DOPPLER_TRACKING_DISABLED";
   local_118 = 0;
   local_f0 = 0x19;
   String::parse_latin1((StrRange*)&local_118);
   GetTypeInfo<AudioStreamPlayer3D::DopplerTracking,void>::get_class_info((GetTypeInfo<AudioStreamPlayer3D::DopplerTracking,void>*)&local_f8);
   local_110 = local_e8._0_8_;
   auVar8._8_8_ = 0;
   auVar8._0_8_ = local_e8._8_8_;
   local_e8 = auVar8 << 0x40;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_f8);
   local_f8 = "AudioStreamPlayer3D";
   local_120 = 0;
   local_f0 = 0x13;
   String::parse_latin1((StrRange*)&local_120);
   StringName::StringName((StringName*)&local_f8, (String*)&local_120, false);
   ClassDB::bind_integer_constant((StringName*)&local_f8, (StringName*)&local_110, (StringName*)&local_108, 0, false);
   if (( StringName::configured != '\0' ) && ( local_f8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_120);
   if (( StringName::configured != '\0' ) && ( local_110 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
   if (( StringName::configured != '\0' ) && ( local_108 != (char*)0x0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_108, "DOPPLER_TRACKING_IDLE_STEP", false);
   local_f8 = "DOPPLER_TRACKING_IDLE_STEP";
   local_118 = 0;
   local_f0 = 0x1a;
   String::parse_latin1((StrRange*)&local_118);
   GetTypeInfo<AudioStreamPlayer3D::DopplerTracking,void>::get_class_info((GetTypeInfo<AudioStreamPlayer3D::DopplerTracking,void>*)&local_f8);
   local_110 = local_e8._0_8_;
   auVar9._8_8_ = 0;
   auVar9._0_8_ = local_e8._8_8_;
   local_e8 = auVar9 << 0x40;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_f8);
   local_f8 = "AudioStreamPlayer3D";
   local_120 = 0;
   local_f0 = 0x13;
   String::parse_latin1((StrRange*)&local_120);
   StringName::StringName((StringName*)&local_f8, (String*)&local_120, false);
   ClassDB::bind_integer_constant((StringName*)&local_f8, (StringName*)&local_110, (StringName*)&local_108, 1, false);
   if (( StringName::configured != '\0' ) && ( local_f8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_120);
   if (( StringName::configured != '\0' ) && ( local_110 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
   if (( StringName::configured != '\0' ) && ( local_108 != (char*)0x0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_108, "DOPPLER_TRACKING_PHYSICS_STEP", false);
   local_118 = 0;
   String::parse_latin1((String*)&local_118, "DOPPLER_TRACKING_PHYSICS_STEP");
   GetTypeInfo<AudioStreamPlayer3D::DopplerTracking,void>::get_class_info((GetTypeInfo<AudioStreamPlayer3D::DopplerTracking,void>*)&local_f8);
   local_110 = local_e8._0_8_;
   auVar10._8_8_ = 0;
   auVar10._0_8_ = local_e8._8_8_;
   local_e8 = auVar10 << 0x40;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_f8);
   local_120 = 0;
   String::parse_latin1((String*)&local_120, "AudioStreamPlayer3D");
   StringName::StringName((StringName*)&local_f8, (String*)&local_120, false);
   ClassDB::bind_integer_constant((StringName*)&local_f8, (StringName*)&local_110, (StringName*)&local_108, 2, false);
   if (( StringName::configured != '\0' ) && ( local_f8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_120);
   if (( StringName::configured != '\0' ) && ( local_110 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
   if (( StringName::configured != '\0' ) && ( local_108 != (char*)0x0 )) {
      StringName::unref();
   }

   local_110 = 0;
   local_f8 = "finished";
   local_f0 = 8;
   String::parse_latin1((StrRange*)&local_110);
   local_f8 = (char*)0x0;
   local_f0 = 0;
   local_d8 = 0;
   local_d0 = 0;
   local_c8 = 6;
   local_c0 = 1;
   local_b8[0] = 0;
   local_a8 = (int*)0x0;
   local_a0 = 0;
   local_90 = 0;
   local_e8 = (undefined1[16])0x0;
   if (local_110 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_f8, (CowData*)&local_110);
   }

   local_118 = 0;
   String::parse_latin1((String*)&local_118, "AudioStreamPlayer3D");
   StringName::StringName((StringName*)&local_108, (String*)&local_118, false);
   ClassDB::add_signal((StringName*)&local_108, (MethodInfo*)&local_f8);
   if (( StringName::configured != '\0' ) && ( local_108 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
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

   piVar11 = local_a8;
   if (local_a8 != (int*)0x0) {
      LOCK();
      plVar1 = (long*)( local_a8 + -4 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         if (local_a8 == (int*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = *(long*)( local_a8 + -2 );
         lVar14 = 0;
         local_a8 = (int*)0x0;
         piVar13 = piVar11;
         if (lVar2 != 0) {
            do {
               if (Variant::needs_deinit[*piVar13] != '\0') {
                  Variant::_clear_internal();
               }

               lVar14 = lVar14 + 1;
               piVar13 = piVar13 + 6;
            }
 while ( lVar2 != lVar14 );
         }

         Memory::free_static(piVar11 + -4, false);
      }

   }

   List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator>*)local_b8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_f0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_110);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* CowData<AudioFrame>::_copy_on_write() [clone .isra.0] */void CowData<AudioFrame>::_copy_on_write(CowData<AudioFrame> *this) {
   long lVar1;
   code *pcVar2;
   undefined8 *puVar3;
   long lVar4;
   long lVar5;
   ulong uVar6;
   if (( *(long*)this == 0 ) || ( *(ulong*)( *(long*)this + -0x10 ) < 2 )) {
      return;
   }

   if (*(long*)this == 0) {
      /* WARNING: Does not return */
      pcVar2 = (code*)invalidInstructionException();
      ( *pcVar2 )();
   }

   lVar1 = *(long*)( *(long*)this + -8 );
   uVar6 = 0x10;
   lVar5 = lVar1 * 8;
   if (lVar5 != 0) {
      uVar6 = lVar5 - 1U | lVar5 - 1U >> 1;
      uVar6 = uVar6 | uVar6 >> 2;
      uVar6 = uVar6 | uVar6 >> 4;
      uVar6 = uVar6 | uVar6 >> 8;
      uVar6 = uVar6 | uVar6 >> 0x10;
      uVar6 = ( uVar6 | uVar6 >> 0x20 ) + 0x11;
   }

   puVar3 = (undefined8*)Memory::alloc_static(uVar6, false);
   if (puVar3 != (undefined8*)0x0) {
      *puVar3 = 1;
      puVar3[1] = lVar1;
      if (lVar1 != 0) {
         lVar1 = *(long*)this;
         lVar4 = 0;
         do {
            *(undefined8*)( (long)puVar3 + lVar4 + 0x10 ) = *(undefined8*)( lVar1 + lVar4 );
            lVar4 = lVar4 + 8;
         }
 while ( lVar5 != lVar4 );
      }

      _unref(this);
      *(undefined8**)this = puVar3 + 2;
      return;
   }

   _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
   return;
}
/* AudioStreamPlayer3D::_calc_output_vol(Vector3 const&, float, Vector<AudioFrame>&) */void AudioStreamPlayer3D::_calc_output_vol(Vector3 *param_1, float param_2, Vector *param_3) {
   float fVar1;
   float fVar2;
   code *pcVar3;
   double dVar4;
   double dVar5;
   uint uVar6;
   long *plVar7;
   ulong uVar8;
   undefined8 *puVar9;
   float *pfVar10;
   long lVar11;
   long lVar12;
   float *pfVar13;
   float *pfVar14;
   uint uVar15;
   float *pfVar16;
   ulong uVar17;
   long in_FS_OFFSET;
   float fVar18;
   float fVar19;
   float fVar20;
   undefined1 auVar21[16];
   undefined1 auVar22[16];
   float *local_70;
   float local_68[4];
   undefined4 local_58;
   undefined4 local_54;
   undefined4 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   plVar7 = (long*)AudioServer::get_singleton();
   uVar6 = ( **(code**)( *plVar7 + 0x180 ) )(plVar7);
   if (uVar6 < 4) {
      local_70 = (float*)0x0;
      uVar6 = *(uint*)( CSWTCH_5088 + (ulong)uVar6 * 4 );
      if (uVar6 == 0) {
         CowData<Spcap::Speaker>::_copy_on_write((CowData<Spcap::Speaker>*)&local_70);
      }
 else {
         uVar17 = (ulong)uVar6;
         CowData<Spcap::Speaker>::_copy_on_write((CowData<Spcap::Speaker>*)&local_70);
         uVar8 = uVar17 * 0x14 - 1;
         uVar8 = uVar8 | uVar8 >> 1;
         uVar8 = uVar8 | uVar8 >> 2;
         uVar8 = uVar8 | uVar8 >> 4;
         uVar8 = uVar8 | uVar8 >> 8;
         uVar8 = uVar8 | uVar8 >> 0x10;
         puVar9 = (undefined8*)Memory::alloc_static(( uVar8 | uVar8 >> 0x20 ) + 0x11, false);
         if (puVar9 == (undefined8*)0x0) {
            _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
         }
 else {
            local_70 = (float*)( puVar9 + 2 );
            *puVar9 = 1;
            pfVar13 = local_70;
            do {
               pfVar13[0] = 0.0;
               pfVar13[1] = 0.0;
               pfVar10 = pfVar13 + 5;
               for (int i = 0; i < 3; i++) {
                  pfVar13[( i + 2 )] = 0;
               }

               pfVar13 = pfVar10;
            }
 while ( (float*)( (long)puVar9 + uVar17 * 0x14 + 0x10 ) != pfVar10 );
            puVar9[1] = uVar17;
         }

         CowData<Spcap::Speaker>::_copy_on_write((CowData<Spcap::Speaker>*)&local_70);
         dVar5 = _LC187;
         dVar4 = _LC31;
         puVar9 = &speaker_directions;
         pfVar13 = local_70;
         do {
            auVar21 = (undefined1[16])0x0;
            *(undefined8*)pfVar13 = *puVar9;
            fVar19 = *(float*)( puVar9 + 1 );
            pfVar13[4] = 0.0;
            pfVar13[2] = fVar19;
            pfVar10 = local_70;
            do {
               auVar22._8_8_ = auVar21._8_8_;
               pfVar14 = pfVar10 + 5;
               auVar22._0_8_ = (double)auVar21._0_4_ + ( (double)( pfVar10[2] * pfVar13[2] + *pfVar10 * *pfVar13 + pfVar10[1] * pfVar13[1] ) + dVar4 ) * dVar5;
               auVar21._4_12_ = auVar22._4_12_;
               auVar21._0_4_ = (float)auVar22._0_8_;
               pfVar10 = pfVar14;
            }
 while ( pfVar14 != local_70 + uVar17 * 5 );
            pfVar13[3] = auVar21._0_4_;
            pfVar13 = pfVar13 + 5;
            puVar9 = (undefined8*)( (long)puVar9 + 0xc );
         }
 while ( pfVar13 != local_70 + uVar17 * 5 );
      }

   }
 else {
      uVar6 = 0;
      local_70 = (float*)0x0;
      CowData<Spcap::Speaker>::_copy_on_write((CowData<Spcap::Speaker>*)&local_70);
   }

   pfVar13 = local_70;
   dVar4 = _LC187;
   fVar19 = *(float*)param_1;
   fVar1 = *(float*)( param_1 + 4 );
   fVar2 = *(float*)( param_1 + 8 );
   if (local_70 == (float*)0x0) {
      plVar7 = (long*)AudioServer::get_singleton();
      uVar6 = ( **(code**)( *plVar7 + 0x180 ) )(plVar7);
      if (uVar6 == 2) goto LAB_00105cc2;
      if (uVar6 < 3) goto LAB_00105938;
      if (uVar6 == 3) goto LAB_00105bd8;
   }
 else {
      uVar15 = ( uint ) * (undefined8*)( local_70 + -2 );
      if (uVar15 != 0) {
         fVar20 = 0.0;
         pfVar10 = local_70 + ( ulong )(uVar15 - 1) * 5 + 5;
         pfVar14 = local_70;
         do {
            pfVar16 = pfVar14 + 5;
            fVar18 = powf(fVar19 * *pfVar14 + fVar1 * pfVar14[1] + fVar2 * pfVar14[2] + _LC188, param_2);
            fVar18 = (float)( ( (double)fVar18 * dVar4 ) / (double)pfVar14[3] );
            fVar18 = fVar18 * fVar18;
            pfVar14[4] = fVar18;
            fVar20 = fVar20 + fVar18;
            pfVar14 = pfVar16;
         }
 while ( pfVar10 != pfVar16 );
         if (uVar15 < uVar6) {
            uVar6 = uVar15;
         }

         if (uVar6 != 0) {
            pfVar14 = local_68;
            pfVar10 = pfVar13 + 4;
            pfVar16 = pfVar14 + uVar6;
            do {
               fVar19 = *pfVar10 / fVar20;
               if (fVar19 < 0.0) {
                  fVar19 = sqrtf(fVar19);
               }
 else {
                  fVar19 = SQRT(fVar19);
               }

               *pfVar14 = fVar19;
               pfVar14 = pfVar14 + 1;
               pfVar10 = pfVar10 + 5;
            }
 while ( pfVar14 != pfVar16 );
         }

      }

      plVar7 = (long*)AudioServer::get_singleton();
      uVar6 = ( **(code**)( *plVar7 + 0x180 ) )(plVar7);
      if (uVar6 == 2) {
         LAB_00105cc2:lVar11 = *(long*)( param_3 + 8 );
         if (lVar11 == 0) {
            lVar11 = 0;
         }
 else {
            LAB_00105c34:lVar11 = *(long*)( lVar11 + -8 );
            if (2 < lVar11) {
               CowData<AudioFrame>::_copy_on_write((CowData<AudioFrame>*)( param_3 + 8 ));
               lVar11 = *(long*)( *(long*)( param_3 + 8 ) + -8 );
               *(float*)( *(long*)( param_3 + 8 ) + 0x10 ) = local_68[3];
               if (2 < lVar11) {
                  CowData<AudioFrame>::_copy_on_write((CowData<AudioFrame>*)( param_3 + 8 ));
                  lVar11 = *(long*)( param_3 + 8 );
                  *(undefined4*)( lVar11 + 0x14 ) = local_58;
                  LAB_0010594d:lVar11 = *(long*)( lVar11 + -8 );
                  if (1 < lVar11) {
                     CowData<AudioFrame>::_copy_on_write((CowData<AudioFrame>*)( param_3 + 8 ));
                     lVar11 = *(long*)( *(long*)( param_3 + 8 ) + -8 );
                     *(undefined4*)( *(long*)( param_3 + 8 ) + 0xc ) = 0x3f800000;
                     if (1 < lVar11) {
                        CowData<AudioFrame>::_copy_on_write((CowData<AudioFrame>*)( param_3 + 8 ));
                        lVar11 = *(long*)( param_3 + 8 );
                        *(float*)( lVar11 + 8 ) = local_68[2];
                        goto LAB_001059a8;
                     }

                  }

                  goto LAB_00105d51;
               }

            }

         }

         lVar12 = 2;
         goto LAB_00105d2b;
      }

      if (uVar6 < 3) {
         LAB_00105938:if (uVar6 != 0) {
            lVar11 = *(long*)( param_3 + 8 );
            if (lVar11 != 0) goto LAB_0010594d;
            lVar11 = 0;
            LAB_00105d51:lVar12 = 1;
            goto LAB_00105d2b;
         }

         lVar11 = *(long*)( param_3 + 8 );
         if (lVar11 == 0) {
            lVar11 = 0;
         }
 else {
            LAB_001059a8:lVar11 = *(long*)( lVar11 + -8 );
            if (0 < lVar11) {
               CowData<AudioFrame>::_copy_on_write((CowData<AudioFrame>*)( param_3 + 8 ));
               lVar11 = *(long*)( *(long*)( param_3 + 8 ) + -8 );
               *(float*)( *(long*)( param_3 + 8 ) + 4 ) = local_68[1];
               if (0 < lVar11) {
                  CowData<AudioFrame>::_copy_on_write((CowData<AudioFrame>*)( param_3 + 8 ));
                  **(float**)( param_3 + 8 ) = local_68[0];
                  if (pfVar13 == (float*)0x0) goto LAB_00105c9f;
                  goto LAB_001059f3;
               }

            }

         }

         lVar12 = 0;
         LAB_00105d2b:_err_print_index_error("operator[]", "./core/templates/vector.h", 0x38, lVar12, lVar11, "p_index", "((Vector<T> *)(this))->_cowdata.size()", "", false, true);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar3 = (code*)invalidInstructionException();
         ( *pcVar3 )();
      }

      if (uVar6 == 3) {
         LAB_00105bd8:if (*(long*)( param_3 + 8 ) == 0) {
            lVar11 = 0;
         }
 else {
            lVar11 = *(long*)( *(long*)( param_3 + 8 ) + -8 );
            if (3 < lVar11) {
               CowData<AudioFrame>::_copy_on_write((CowData<AudioFrame>*)( param_3 + 8 ));
               lVar11 = *(long*)( *(long*)( param_3 + 8 ) + -8 );
               *(undefined4*)( *(long*)( param_3 + 8 ) + 0x18 ) = local_54;
               if (3 < lVar11) {
                  CowData<AudioFrame>::_copy_on_write((CowData<AudioFrame>*)( param_3 + 8 ));
                  lVar11 = *(long*)( param_3 + 8 );
                  *(undefined4*)( lVar11 + 0x1c ) = local_50;
                  goto LAB_00105c34;
               }

            }

         }

         lVar12 = 3;
         goto LAB_00105d2b;
      }

      LAB_001059f3:LOCK();
      pfVar13 = pfVar13 + -4;
      *(long*)pfVar13 = *(long*)pfVar13 + -1;
      UNLOCK();
      if (*(long*)pfVar13 == 0) {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            Memory::free_static(local_70 + -4, false);
            return;
         }

         goto LAB_00105dff;
      }

   }

   LAB_00105c9f:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_00105dff:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* Error CowData<AudioFrame>::resize<false>(long) [clone .isra.0] */void CowData<AudioFrame>::resize<false>(CowData<AudioFrame> *this, long param_1) {
   long *plVar1;
   int iVar2;
   CowData<AudioFrame> *pCVar3;
   ulong uVar4;
   undefined8 *puVar5;
   char *pcVar6;
   undefined8 uVar7;
   CowData<AudioFrame> *pCVar8;
   CowData<AudioFrame> *pCVar9;
   long lVar10;
   long lVar11;
   undefined8 *puVar12;
   if (param_1 < 0) {
      _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      return;
   }

   lVar10 = *(long*)this;
   if (lVar10 == 0) {
      if (param_1 == 0) {
         return;
      }

      _copy_on_write(this);
      lVar11 = 0;
      pCVar3 = (CowData<AudioFrame>*)0x0;
   }
 else {
      lVar11 = *(long*)( lVar10 + -8 );
      if (param_1 == lVar11) {
         return;
      }

      if (param_1 == 0) {
         LOCK();
         plVar1 = (long*)( lVar10 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 != 0) {
            *(undefined8*)this = 0;
            return;
         }

         lVar10 = *(long*)this;
         *(undefined8*)this = 0;
         Memory::free_static((void*)( lVar10 + -0x10 ), false);
         return;
      }

      _copy_on_write(this);
      pCVar3 = (CowData<AudioFrame>*)( lVar11 * 8 );
      if (pCVar3 != (CowData<AudioFrame>*)0x0) {
         uVar4 = ( ulong )(pCVar3 + -1) | ( ulong )(pCVar3 + -1) >> 1;
         uVar4 = uVar4 | uVar4 >> 2;
         uVar4 = uVar4 | uVar4 >> 4;
         uVar4 = uVar4 | uVar4 >> 8;
         uVar4 = uVar4 | uVar4 >> 0x10;
         pCVar3 = (CowData<AudioFrame>*)( ( uVar4 | uVar4 >> 0x20 ) + 1 );
      }

   }

   if (param_1 * 8 != 0) {
      uVar4 = param_1 * 8 - 1;
      uVar4 = uVar4 | uVar4 >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      pCVar9 = (CowData<AudioFrame>*)( uVar4 | uVar4 >> 0x20 );
      pCVar8 = pCVar9 + 1;
      if (pCVar8 != (CowData<AudioFrame>*)0x0) {
         if (param_1 <= lVar11) {
            if (( pCVar8 != pCVar3 ) && ( iVar2 = iVar2 != 0 )) {
               return;
            }

            if (*(long*)this != 0) {
               *(long*)( *(long*)this + -8 ) = param_1;
               return;
            }

            FUN_0010a1ee();
            return;
         }

         if (pCVar8 == pCVar3) {
            LAB_00105fbc:puVar12 = *(undefined8**)this;
            if (puVar12 == (undefined8*)0x0) {
               resize<false>((long)pCVar9);
               return;
            }

            lVar10 = puVar12[-1];
            if (param_1 <= lVar10) goto LAB_00105f4d;
         }
 else {
            if (lVar11 != 0) {
               pCVar9 = this;
               iVar2 = _realloc(this, (long)pCVar8);
               if (iVar2 != 0) {
                  return;
               }

               goto LAB_00105fbc;
            }

            puVar5 = (undefined8*)Memory::alloc_static(( ulong )(pCVar9 + 0x11), false);
            if (puVar5 == (undefined8*)0x0) {
               uVar7 = 0x171;
               pcVar6 = "Parameter \"mem_new\" is null.";
               goto LAB_00106062;
            }

            puVar12 = puVar5 + 2;
            *puVar5 = 1;
            puVar5[1] = 0;
            *(undefined8**)this = puVar12;
            lVar10 = 0;
         }

         memset(puVar12 + lVar10, 0, ( param_1 - lVar10 ) * 8);
         LAB_00105f4d:puVar12[-1] = param_1;
         return;
      }

   }

   uVar7 = 0x16a;
   pcVar6 = "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY";
   LAB_00106062:_err_print_error("resize", "./core/templates/cowdata.h", uVar7, pcVar6, 0, 0);
   return;
}
/* AudioStreamPlayer3D::_calc_reverb_vol(Area3D*, Vector3, Vector<AudioFrame>, Vector<AudioFrame>&)
    */void AudioStreamPlayer3D::_calc_reverb_vol(undefined8 param_1_00, float param_2, AudioStreamPlayer3D *param_1, undefined8 param_4, long param_5, long param_6) {
   CowData<AudioFrame> *this;
   long lVar1;
   undefined8 uVar2;
   long lVar3;
   long lVar4;
   code *pcVar5;
   float fVar6;
   uint uVar7;
   long *plVar8;
   long lVar9;
   long lVar10;
   long lVar11;
   long lVar12;
   long in_FS_OFFSET;
   float fVar13;
   float fVar14;
   float fVar15;
   float fVar16;
   float fVar17;
   float fVar18;
   float fVar19;
   float local_78;
   float local_74;
   float local_70;
   float local_68;
   float fStack_64;
   float local_40;
   this(CowData<AudioFrame> * )(param_6 + 8);
   local_68 = (float)param_1_00;
   fStack_64 = (float)( (ulong)param_1_00 >> 0x20 );
   lVar3 = *(long*)( in_FS_OFFSET + 0x28 );
   CowData<AudioFrame>::resize<false>(this, 4);
   if (*(long*)( param_6 + 8 ) == 0) {
      LAB_001063d8:lVar9 = 0;
   }
 else {
      lVar9 = *(long*)( *(long*)( param_6 + 8 ) + -8 );
      if (0 < lVar9) {
         CowData<AudioFrame>::_copy_on_write(this);
         lVar9 = ( *(undefined8**)( param_6 + 8 ) )[-1];
         **(undefined8**)( param_6 + 8 ) = 0;
         if (lVar9 < 2) goto LAB_001066a0;
         CowData<AudioFrame>::_copy_on_write(this);
         lVar9 = *(long*)( *(long*)( param_6 + 8 ) + -8 );
         *(undefined8*)( *(long*)( param_6 + 8 ) + 8 ) = 0;
         if (lVar9 < 3) goto LAB_001066c8;
         CowData<AudioFrame>::_copy_on_write(this);
         lVar9 = *(long*)( *(long*)( param_6 + 8 ) + -8 );
         *(undefined8*)( *(long*)( param_6 + 8 ) + 0x10 ) = 0;
         if (lVar9 < 4) goto LAB_00106840;
         CowData<AudioFrame>::_copy_on_write(this);
         *(undefined8*)( *(long*)( param_6 + 8 ) + 0x18 ) = 0;
         fVar13 = (float)Area3D::get_reverb_uniformity();
         fVar14 = (float)Area3D::get_reverb_amount();
         if (fVar13 <= 0.0) {
            lVar11 = 0;
            do {
               lVar9 = *(long*)( param_5 + 8 );
               if (lVar9 == 0) {
                  lVar10 = 0;
                  goto LAB_00106711;
               }

               lVar10 = *(long*)( lVar9 + -8 );
               if (lVar10 <= lVar11) goto LAB_00106711;
               uVar2 = *(undefined8*)( lVar9 + lVar11 * 8 );
               lVar10 = lVar11 * 8;
               if (*(long*)( param_6 + 8 ) == 0) {
                  lVar9 = 0;
                  goto LAB_00106390;
               }

               lVar9 = *(long*)( *(long*)( param_6 + 8 ) + -8 );
               if (lVar9 <= lVar11) goto LAB_00106390;
               lVar11 = lVar11 + 1;
               CowData<AudioFrame>::_copy_on_write(this);
               *(ulong*)( *(long*)( param_6 + 8 ) + lVar10 ) = CONCAT44((float)( (ulong)uVar2 >> 0x20 ) * fVar14, (float)uVar2 * fVar14);
            }
 while ( lVar11 != 4 );
            goto LAB_0010624a;
         }

         fVar15 = (float)_get_attenuation_db(param_1, SQRT(fStack_64 * fStack_64 + local_68 * local_68 + param_2 * param_2));
         fVar15 = expf(fVar15 * _LC0);
         plVar8 = (long*)AudioServer::get_singleton();
         uVar7 = ( **(code**)( *plVar8 + 0x180 ) )(plVar8);
         if (uVar7 == 2) {
            lVar12 = 3;
            local_40 = _LC197;
         }
 else if (uVar7 < 3) {
            if (uVar7 == 0) {
               LAB_001068d9:lVar12 = 1;
               local_40 = _LC43._4_4_;
            }
 else {
               lVar12 = 2;
               local_40 = _LC195;
            }

         }
 else {
            if (uVar7 != 3) {
               _err_print_error("get_channel_count", "./servers/audio_server.h", 0x169, "Method/function failed. Returning: 1", 0, 0);
               goto LAB_001068d9;
            }

            local_40 = (float)lVar3;
            lVar12 = 4;
         }

         lVar11 = 0;
         lVar9 = *(long*)( param_6 + 8 );
         if (_LC188 <= fVar15) {
            do {
               if (lVar9 == 0) {
                  lVar9 = 0;
                  goto LAB_00106390;
               }

               lVar9 = *(long*)( lVar9 + -8 );
               if (lVar9 <= lVar11) goto LAB_00106390;
               CowData<AudioFrame>::_copy_on_write(this);
               lVar9 = *(long*)( param_6 + 8 );
               *(ulong*)( lVar9 + lVar11 * 8 ) = CONCAT44(local_40, local_40);
               lVar11 = lVar11 + 1;
            }
 while ( lVar11 != lVar12 );
            LAB_00106738:lVar11 = 0;
            do {
               lVar4 = *(long*)( param_5 + 8 );
               if (lVar4 == 0) {
                  LAB_00106868:lVar10 = 0;
                  LAB_00106711:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar11, lVar10, "p_index", "size()", "", false, true);
                  _err_flush_stdout();
                  /* WARNING: Does not return */
                  pcVar5 = (code*)invalidInstructionException();
                  ( *pcVar5 )();
               }

               lVar10 = *(long*)( lVar4 + -8 );
               if (lVar10 <= lVar11) goto LAB_00106711;
               lVar1 = lVar11 * 8;
               if (lVar9 == 0) goto LAB_00106868;
               lVar10 = *(long*)( lVar9 + -8 );
               if (lVar10 <= lVar11) goto LAB_00106711;
               uVar2 = *(undefined8*)( lVar9 + lVar1 );
               fVar17 = (float)*(undefined8*)( lVar4 + lVar1 );
               fVar19 = (float)( ( ulong ) * (undefined8*)( lVar4 + lVar1 ) >> 0x20 );
               CowData<AudioFrame>::_copy_on_write(this);
               lVar9 = *(long*)( param_6 + 8 );
               *(ulong*)( lVar9 + lVar1 ) = CONCAT44(fVar19 + ( (float)( (ulong)uVar2 >> 0x20 ) * fVar15 - fVar19 ) * fVar13, fVar17 + ( (float)uVar2 * fVar15 - fVar17 ) * fVar13);
               if (lVar9 == 0) {
                  lVar9 = 0;
                  goto LAB_00106390;
               }

               lVar9 = *(long*)( lVar9 + -8 );
               if (lVar9 <= lVar11) goto LAB_00106390;
               lVar11 = lVar11 + 1;
               CowData<AudioFrame>::_copy_on_write(this);
               lVar9 = *(long*)( param_6 + 8 );
               uVar2 = *(undefined8*)( lVar9 + lVar1 );
               *(undefined8*)( lVar9 + lVar1 ) = CONCAT44((float)( (ulong)uVar2 >> 0x20 ) * fVar14, (float)uVar2 * fVar14);
            }
 while ( lVar11 != lVar12 );
            LAB_0010624a:if (lVar3 == *(long*)( in_FS_OFFSET + 0x28 )) {
               return;
            }

            /* WARNING: Subroutine does not return */
            __stack_chk_fail();
         }

         local_78 = local_68 * local_68 + 0.0 + param_2 * param_2;
         if (local_78 == 0.0) {
            local_78 = 0.0;
            local_74 = 0.0;
            local_70 = 0.0;
            fVar19 = _LC43._4_4_;
            fVar17 = _LC43._4_4_;
         }
 else {
            local_78 = SQRT(local_78);
            local_74 = 0.0 / local_78;
            local_70 = local_68 / local_78;
            local_78 = param_2 / local_78;
            fVar17 = (float)( (double)local_70 * _LC187 + _LC187 );
            fVar19 = _LC188 - fVar17;
         }

         if (lVar9 == 0) goto LAB_001063d8;
         lVar9 = *(long*)( lVar9 + -8 );
         if (0 < lVar9) {
            CowData<AudioFrame>::_copy_on_write(this);
            lVar9 = *(long*)( *(float**)( param_6 + 8 ) + -2 );
            **(float**)( param_6 + 8 ) = fVar19;
            if (0 < lVar9) {
               CowData<AudioFrame>::_copy_on_write(this);
               lVar9 = *(long*)( param_6 + 8 );
               *(float*)( lVar9 + 4 ) = fVar17;
               if ((uint)lVar12 < 3) goto LAB_00106618;
               lVar9 = *(long*)( lVar9 + -8 );
               fVar18 = (float)( (double)( local_70 * _LC201 + local_74 * 0.0 + local_78 * _LC201 ) * _LC187 + _LC187 );
               fVar16 = (float)( (double)( ( local_74 * 0.0 - local_70 * _LC201 ) + local_78 * _LC201 ) * _LC187 + _LC187 );
               if (1 < lVar9) {
                  CowData<AudioFrame>::_copy_on_write(this);
                  lVar9 = *(long*)( *(long*)( param_6 + 8 ) + -8 );
                  *(float*)( *(long*)( param_6 + 8 ) + 8 ) = fVar18;
                  if (1 < lVar9) {
                     CowData<AudioFrame>::_copy_on_write(this);
                     fVar6 = _LC188;
                     lVar9 = *(long*)( *(long*)( param_6 + 8 ) + -8 );
                     *(float*)( *(long*)( param_6 + 8 ) + 0xc ) = fVar16;
                     if (2 < lVar9) {
                        CowData<AudioFrame>::_copy_on_write(this);
                        lVar9 = *(long*)( *(long*)( param_6 + 8 ) + -8 );
                        *(float*)( *(long*)( param_6 + 8 ) + 0x10 ) = fVar6 - fVar16;
                        fVar18 = _LC188 - fVar18;
                        if (2 < lVar9) {
                           CowData<AudioFrame>::_copy_on_write(this);
                           lVar9 = *(long*)( param_6 + 8 );
                           *(float*)( lVar9 + 0x14 ) = fVar18;
                           if ((uint)lVar12 == 4) {
                              lVar9 = *(long*)( lVar9 + -8 );
                              if (3 < lVar9) {
                                 CowData<AudioFrame>::_copy_on_write(this);
                                 lVar9 = *(long*)( *(long*)( param_6 + 8 ) + -8 );
                                 *(float*)( *(long*)( param_6 + 8 ) + 0x18 ) = fVar19;
                                 if (3 < lVar9) {
                                    CowData<AudioFrame>::_copy_on_write(this);
                                    lVar9 = *(long*)( param_6 + 8 );
                                    *(float*)( lVar9 + 0x1c ) = fVar17;
                                    goto LAB_00106618;
                                 }

                              }

                              LAB_00106840:lVar11 = 3;
                              goto LAB_00106390;
                           }

                           LAB_00106618:lVar11 = 0;
                           do {
                              if (lVar9 == 0) {
                                 lVar10 = 0;
                                 goto LAB_00106711;
                              }

                              lVar10 = *(long*)( lVar9 + -8 );
                              if (lVar10 <= lVar11) goto LAB_00106711;
                              uVar2 = *(undefined8*)( lVar9 + lVar11 * 8 );
                              fVar17 = (float)uVar2;
                              fVar19 = (float)( (ulong)uVar2 >> 0x20 );
                              CowData<AudioFrame>::_copy_on_write(this);
                              lVar9 = *(long*)( param_6 + 8 );
                              *(ulong*)( lVar9 + lVar11 * 8 ) = CONCAT44(( local_40 - fVar19 ) * fVar15 + fVar19, ( local_40 - fVar17 ) * fVar15 + fVar17);
                              lVar11 = lVar11 + 1;
                           }
 while ( lVar12 != lVar11 );
                           goto LAB_00106738;
                        }

                     }

                     LAB_001066c8:lVar11 = 2;
                     goto LAB_00106390;
                  }

               }

               LAB_001066a0:lVar11 = 1;
               goto LAB_00106390;
            }

         }

      }

   }

   lVar11 = 0;
   LAB_00106390:_err_print_index_error("operator[]", "./core/templates/vector.h", 0x38, lVar11, lVar9, "p_index", "((Vector<T> *)(this))->_cowdata.size()", "", false, true);
   _err_flush_stdout();
   /* WARNING: Does not return */
   pcVar5 = (code*)invalidInstructionException();
   ( *pcVar5 )();
}
/* CowData<Ref<AudioStreamPlayback> >::_copy_on_write() [clone .isra.0] */void CowData<Ref<AudioStreamPlayback>>::_copy_on_write(CowData<Ref<AudioStreamPlayback>> *this) {
   long lVar1;
   long lVar2;
   code *pcVar3;
   char cVar4;
   undefined8 *puVar5;
   long *plVar6;
   ulong uVar7;
   long lVar8;
   if (( *(long*)this == 0 ) || ( *(ulong*)( *(long*)this + -0x10 ) < 2 )) {
      return;
   }

   if (*(long*)this == 0) {
      /* WARNING: Does not return */
      pcVar3 = (code*)invalidInstructionException();
      ( *pcVar3 )();
   }

   lVar1 = *(long*)( *(long*)this + -8 );
   uVar7 = 0x10;
   if (lVar1 * 8 != 0) {
      uVar7 = lVar1 * 8 - 1;
      uVar7 = uVar7 | uVar7 >> 1;
      uVar7 = uVar7 | uVar7 >> 2;
      uVar7 = uVar7 | uVar7 >> 4;
      uVar7 = uVar7 | uVar7 >> 8;
      uVar7 = uVar7 | uVar7 >> 0x10;
      uVar7 = ( uVar7 | uVar7 >> 0x20 ) + 0x11;
   }

   puVar5 = (undefined8*)Memory::alloc_static(uVar7, false);
   if (puVar5 == (undefined8*)0x0) {
      _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
      return;
   }

   lVar8 = 0;
   *puVar5 = 1;
   puVar5[1] = lVar1;
   plVar6 = puVar5 + 2;
   if (lVar1 != 0) {
      do {
         lVar2 = *(long*)this;
         *plVar6 = 0;
         lVar2 = *(long*)( lVar2 + lVar8 * 8 );
         if (lVar2 != 0) {
            *plVar6 = lVar2;
            cVar4 = RefCounted::reference();
            if (cVar4 == '\0') {
               *plVar6 = 0;
            }

         }

         lVar8 = lVar8 + 1;
         plVar6 = plVar6 + 1;
      }
 while ( lVar1 != lVar8 );
   }

   _unref(this);
   *(undefined8**)this = puVar5 + 2;
   return;
}
/* AudioStreamPlayer3D::_update_panning() */void AudioStreamPlayer3D::_update_panning(void) {
   CowData<AudioFrame> *this;
   ulong uVar1;
   uint uVar2;
   code *pcVar3;
   undefined1 auVar4[12];
   Object *pOVar5;
   undefined8 uVar6;
   int iVar7;
   float fVar8;
   float fVar9;
   float fVar10;
   char cVar11;
   char cVar12;
   undefined8 *puVar13;
   undefined8 *puVar14;
   long *plVar15;
   long lVar16;
   long lVar17;
   long lVar18;
   long lVar19;
   ulong uVar20;
   Ref *pRVar21;
   undefined8 uVar22;
   long lVar23;
   undefined8 *puVar24;
   void *pvVar25;
   long lVar26;
   long *plVar27;
   void *pvVar28;
   long lVar29;
   AudioStreamPlayer3D *in_RSI;
   Vector *in_RDI;
   long *plVar30;
   long in_FS_OFFSET;
   bool bVar31;
   float fVar32;
   float fVar33;
   float fVar34;
   float fVar35;
   float fVar36;
   float fVar37;
   uint uVar38;
   float fVar39;
   double dVar40;
   undefined1 auVar41[12];
   float local_260;
   float local_258;
   float local_240;
   float local_220;
   float local_208;
   float local_1e8;
   float local_1dc;
   undefined8 local_1d8;
   float local_1d0;
   float local_1cc;
   float local_1c0;
   float local_1bc;
   float local_1b8;
   Object *local_1a8;
   long local_1a0;
   undefined1 local_198[8];
   long local_190;
   Object *local_188;
   undefined8 local_180;
   undefined1 local_178[16];
   undefined1 local_168[16];
   undefined8 local_158;
   Object *local_148;
   undefined1 local_140[16];
   undefined1 local_130[16];
   undefined8 local_120;
   undefined1 local_110[12];
   undefined8 local_100;
   float local_f8;
   undefined1 local_f0[8];
   undefined4 local_e8;
   undefined1 local_e4[12];
   float local_78;
   float fStack_74;
   float local_70;
   float fStack_6c;
   float local_68;
   float fStack_64;
   float local_60;
   float local_5c;
   float local_58;
   float local_54;
   float fStack_50;
   float local_4c;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)( in_RDI + 8 ) = 0;
   this(CowData<AudioFrame> * )(in_RDI + 8);
   CowData<AudioFrame>::resize<false>(this, 4);
   CowData<AudioFrame>::_copy_on_write(this);
   puVar14 = *(undefined8**)( in_RDI + 8 );
   CowData<AudioFrame>::_copy_on_write(this);
   auVar4._8_4_ = local_e4._8_4_;
   auVar4._0_8_ = local_e4._0_8_;
   auVar41._8_4_ = local_110._8_4_;
   auVar41._0_8_ = local_110._0_8_;
   puVar24 = *(undefined8**)( in_RDI + 8 );
   if (puVar24 != (undefined8*)0x0) {
      puVar24 = puVar24 + puVar24[-1];
   }

   if (puVar14 != puVar24) {
      puVar13 = puVar14;
      if (( (int)puVar24 - (int)puVar14 & 8U ) != 0) {
         puVar13 = puVar14 + 1;
         *puVar14 = 0;
         if (puVar24 == puVar13) goto LAB_00106b78;
      }

      do {
         *puVar13 = 0;
         puVar14 = puVar13 + 2;
         puVar13[1] = 0;
         puVar13 = puVar14;
      }
 while ( puVar24 != puVar14 );
   }

   LAB_00106b78:if (( *(char*)( *(long*)( in_RSI + 0x528 ) + 0x1f0 ) == '\0' ) || ( local_110 = auVar41 ),local_e4 = auVar4,*(long*)( *(long*)( in_RSI + 0x528 ) + 0x1e8 ) == 0) goto LAB_00106fc0;
   if (*(int*)( in_RSI + 0x590 ) == 0) {
      local_1cc = 0.0;
      local_1d0 = 0.0;
      local_1c0 = 0.0;
   }
 else {
      _local_f0 = VelocityTracker3D::get_tracked_linear_velocity();
      local_1cc = SUB124(_local_f0, 8);
      local_1c0 = (float)local_f0._0_4_;
      local_1d0 = (float)local_f0._4_4_;
   }

   Node3D::get_global_transform();
   fVar10 = local_4c;
   fVar9 = fStack_50;
   fVar8 = local_54;
   Node3D::get_world_3d();
   if (local_1a8 == (Object*)0x0) {
      _err_print_error("_update_panning", "scene/3d/audio_stream_player_3d.cpp", 0x164, "Condition \"world_3d.is_null()\" is true. Returning: output_volume_vector", 0, 0);
   }
 else {
      local_178 = (undefined1[16])0x0;
      local_168 = (undefined1[16])0x0;
      local_158 = *(ulong*)( local_1a8 + 0x298 );
      uVar38 = ( uint )(local_158 >> 0x20);
      if (uVar38 != 0) {
         uVar2 = *(uint*)( hash_table_size_primes + ( local_158 & 0xffffffff ) * 4 );
         uVar1 = (ulong)uVar2 * 4;
         lVar23 = Memory::alloc_static(uVar1, false);
         local_168._8_8_ = lVar23;
         lVar26 = Memory::alloc_static((ulong)uVar2 * 8, false);
         local_178._0_8_ = lVar26;
         lVar17 = Memory::alloc_static(uVar1, false);
         local_168._0_8_ = lVar17;
         lVar18 = Memory::alloc_static(uVar1, false);
         lVar29 = *(long*)( local_1a8 + 0x278 );
         lVar16 = *(long*)( local_1a8 + 0x288 );
         local_178._8_8_ = lVar18;
         lVar19 = 0;
         do {
            *(undefined8*)( lVar26 + lVar19 * 2 ) = *(undefined8*)( lVar29 + lVar19 * 2 );
            *(undefined4*)( lVar17 + lVar19 ) = *(undefined4*)( lVar16 + lVar19 );
            lVar19 = lVar19 + 4;
         }
 while ( (ulong)uVar38 << 2 != lVar19 );
         if (uVar2 != 0) {
            lVar29 = *(long*)( local_1a8 + 0x290 );
            lVar16 = *(long*)( local_1a8 + 0x280 );
            uVar20 = 0;
            do {
               *(undefined4*)( lVar23 + uVar20 ) = *(undefined4*)( lVar29 + uVar20 );
               *(undefined4*)( lVar18 + uVar20 ) = *(undefined4*)( lVar16 + uVar20 );
               uVar20 = uVar20 + 4;
            }
 while ( uVar20 != uVar1 );
         }

      }

      local_188 = (Object*)Viewport::get_camera_3d();
      HashSet<Camera3D*,HashMapHasherDefault,HashMapComparatorDefault<Camera3D*>>::insert((Camera3D**)&local_148);
      plVar15 = (long*)PhysicsServer3D::get_singleton();
      pcVar3 = *(code**)( *plVar15 + 0x208 );
      World3D::get_space();
      plVar15 = (long*)( *pcVar3 )(plVar15);
      iVar7 = local_158._4_4_;
      uVar6 = local_178._0_8_;
      if (local_158._4_4_ != 0) {
         lVar29 = 0;
         do {
            lVar16 = *(long*)( uVar6 + lVar29 * 8 );
            if (( lVar16 != 0 ) && ( *(long*)( lVar16 + 600 ) != 0 )) {
               cVar11 = Viewport::is_audio_listener_3d();
               if (cVar11 != '\0') {
                  lVar16 = Viewport::get_audio_listener_3d();
                  if (lVar16 != 0) {
                     cVar11 = '\0';
                  }

                  Node3D::get_global_transform();
                  Transform3D::orthonormalized();
                  Transform3D::affine_inverse();
                  local_1e8 = local_4c + local_60 * fVar8 + local_5c * fVar9 + local_58 * fVar10;
                  local_220 = fStack_50 + fStack_6c * fVar8 + local_68 * fVar9 + fStack_64 * fVar10;
                  fVar32 = fVar8 * local_78 + fVar9 * fStack_74 + fVar10 * local_70 + local_54;
                  fVar33 = fVar32 * fVar32 + local_220 * local_220 + local_1e8 * local_1e8;
                  fVar34 = SQRT(fVar33);
                  lVar16 = _get_overriding_area(in_RSI);
                  if (lVar16 == 0) {
                     if (( *(float*)( in_RSI + 0x57c ) <= 0.0 ) || ( fVar34 <= *(float*)( in_RSI + 0x57c ) )) {
                        LAB_00107181:local_1d8 = 0;
                        local_1dc = 0.0;
                        LAB_00107198:in_RSI[0x580] = (AudioStreamPlayer3D)0x0;
                        fVar35 = (float)_get_attenuation_db(in_RSI, fVar34);
                        fVar35 = expf(fVar35 * _LC0);
                        if (0.0 < *(float*)( in_RSI + 0x57c )) {
                           dVar40 = _LC31 - (double)( fVar34 / *(float*)( in_RSI + 0x57c ) );
                           if (dVar40 < 0.0) {
                              dVar40 = 0.0;
                           }

                           fVar35 = (float)( (double)fVar35 * dVar40 );
                        }

                        dVar40 = 0.0;
                        if (fVar35 <= _LC188) {
                           dVar40 = _LC31 - (double)fVar35;
                        }

                        fVar39 = (float)( (double)*(float*)( in_RSI + 0x574 ) * dVar40 );
                        if (in_RSI[0x564] == (AudioStreamPlayer3D)0x0) goto LAB_0010724d;
                        Node3D::get_global_transform();
                        local_1bc = fVar9 - fStack_50;
                        local_258 = fVar8 - local_54;
                        local_1b8 = fVar10 - local_4c;
                        fVar36 = local_258 * local_258 + local_1bc * local_1bc + local_1b8 * local_1b8;
                        if (fVar36 == 0.0) {
                           local_1b8 = 0.0;
                           local_1bc = 0.0;
                           local_258 = 0.0;
                        }
 else {
                           fVar36 = SQRT(fVar36);
                           local_258 = local_258 / fVar36;
                           local_1bc = local_1bc / fVar36;
                           local_1b8 = local_1b8 / fVar36;
                        }

                        Node3D::get_global_transform();
                        fVar36 = local_70 * local_70 + fStack_64 * fStack_64 + local_58 * local_58;
                        if (fVar36 == 0.0) {
                           fVar37 = local_1bc * 0.0 + local_258 * 0.0 + local_1b8 * 0.0;
                           LAB_00107d99:fVar36 = acosf(fVar37);
                           fVar36 = _LC210 * fVar36;
                        }
 else {
                           fVar36 = SQRT(fVar36);
                           fVar37 = ( local_70 / fVar36 ) * local_258 + ( fStack_64 / fVar36 ) * local_1bc + ( local_58 / fVar36 ) * local_1b8;
                           fVar36 = _LC204;
                           if (_LC209 <= fVar37) {
                              if (fVar37 <= _LC188) goto LAB_00107d99;
                              fVar36 = 0.0;
                           }

                        }

                        if (*(float*)( in_RSI + 0x568 ) <= fVar36 && fVar36 != *(float*)( in_RSI + 0x568 )) {
                           fVar39 = fVar39 + *(float*)( in_RSI + 0x56c );
                        }

                        LAB_0010724d:fVar39 = expf(_LC0 * fVar39);
                        lVar23 = *(long*)( in_RSI + 0x528 );
                        *(float*)( in_RSI + 0x578 ) = fVar39;
                        CowData<Ref<AudioStreamPlayback>>::_copy_on_write((CowData<Ref<AudioStreamPlayback>>*)( lVar23 + 0x1e0 ));
                        plVar27 = *(long**)( lVar23 + 0x1e0 );
                        CowData<Ref<AudioStreamPlayback>>::_copy_on_write((CowData<Ref<AudioStreamPlayback>>*)( lVar23 + 0x1e0 ));
                        plVar30 = *(long**)( lVar23 + 0x1e0 );
                        if (plVar30 != (long*)0x0) {
                           plVar30 = plVar30 + plVar30[-1];
                        }

                        joined_r0x001072b1:if (plVar27 != plVar30) {
                           do {
                              uVar22 = AudioServer::get_singleton();
                              local_148 = (Object*)0x0;
                              if ((Object*)*plVar27 != (Object*)0x0) {
                                 local_148 = (Object*)*plVar27;
                                 cVar12 = RefCounted::reference();
                                 if (cVar12 == '\0') {
                                    local_148 = (Object*)0x0;
                                 }

                              }

                              AudioServer::set_playback_highshelf_params(uVar22);
                              if (local_148 != (Object*)0x0) {
                                 cVar12 = RefCounted::unreference();
                                 pOVar5 = local_148;
                                 if (cVar12 != '\0') {
                                    cVar12 = predelete_handler(local_148);
                                    if (cVar12 != '\0') goto code_r0x00107391;
                                 }

                              }

                              plVar27 = plVar27 + 1;
                              if (plVar30 == plVar27) break;
                           }
 while ( true );
                        }

                        if (fVar33 == 0.0) {
                           local_1e8 = 0.0;
                           local_220 = 0.0;
                           local_258 = 0.0;
                        }
 else {
                           local_258 = fVar32 / fVar34;
                           local_220 = local_220 / fVar34;
                           local_1e8 = local_1e8 / fVar34;
                        }

                        lVar26 = 0;
                        local_78 = local_258;
                        fStack_74 = local_220;
                        local_70 = local_1e8;
                        _calc_output_vol((Vector3*)&local_78, ( *(float*)( in_RSI + 0x598 ) + *(float*)( in_RSI + 0x598 ) ) * *(float*)( in_RSI + 0x594 ), in_RDI);
                        lVar23 = *(long*)( in_RDI + 8 );
                        do {
                           if (lVar23 == 0) {
                              lVar17 = 0;
                              LAB_00108044:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar26, lVar17, "p_index", "size()", "", false, true);
                              _err_flush_stdout();
                              /* WARNING: Does not return */
                              pcVar3 = (code*)invalidInstructionException();
                              ( *pcVar3 )();
                           }

                           lVar17 = *(long*)( lVar23 + -8 );
                           if (lVar17 <= lVar26) goto LAB_00108044;
                           uVar22 = *(undefined8*)( lVar23 + lVar26 * 8 );
                           CowData<AudioFrame>::_copy_on_write(this);
                           lVar23 = *(long*)( in_RDI + 8 );
                           *(ulong*)( lVar23 + lVar26 * 8 ) = CONCAT44((float)( (ulong)uVar22 >> 0x20 ) * fVar35, (float)uVar22 * fVar35);
                           lVar26 = lVar26 + 1;
                        }
 while ( lVar26 != 4 );
                        local_140 = (undefined1[16])0x0;
                        local_120 = _LC38;
                        local_130 = (undefined1[16])0x0;
                        if (lVar16 == 0) {
                           lVar16 = HashMap<StringName,Vector<AudioFrame>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Vector<AudioFrame>>>>::operator []((HashMap<StringName,Vector<AudioFrame>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Vector<AudioFrame>>>>*)&local_148, (StringName*)( *(long*)( in_RSI + 0x528 ) + 0x200 ));
                           if (*(long*)( lVar16 + 8 ) != *(long*)( in_RDI + 8 )) {
                              CowData<AudioFrame>::_ref((CowData<AudioFrame>*)( lVar16 + 8 ), (CowData*)this);
                           }

                        }
 else {
                           cVar12 = Area3D::is_overriding_audio_bus();
                           if (cVar12 != '\0') {
                              Area3D::get_audio_bus_name();
                              lVar23 = HashMap<StringName,Vector<AudioFrame>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Vector<AudioFrame>>>>::operator []((HashMap<StringName,Vector<AudioFrame>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Vector<AudioFrame>>>>*)&local_148, (StringName*)&local_188);
                              if (*(long*)( lVar23 + 8 ) != *(long*)( in_RDI + 8 )) {
                                 CowData<AudioFrame>::_ref((CowData<AudioFrame>*)( lVar23 + 8 ), (CowData*)this);
                              }

                              if (( StringName::configured != '\0' ) && ( local_188 != (Object*)0x0 )) {
                                 StringName::unref();
                              }

                           }

                           cVar12 = Area3D::is_using_reverb_bus();
                           if (cVar12 != '\0') {
                              Area3D::get_reverb_bus_name();
                              local_190 = 0;
                              local_180 = 0;
                              if (*(long*)( in_RDI + 8 ) != 0) {
                                 CowData<AudioFrame>::_ref((CowData<AudioFrame>*)&local_180, (CowData*)this);
                              }

                              local_100 = local_1d8;
                              local_f8 = local_1dc;
                              _calc_reverb_vol(local_1d8, local_1dc, in_RSI, lVar16, (StringName*)&local_188, local_198);
                              CowData<AudioFrame>::_unref((CowData<AudioFrame>*)&local_180);
                              lVar16 = HashMap<StringName,Vector<AudioFrame>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Vector<AudioFrame>>>>::operator []((HashMap<StringName,Vector<AudioFrame>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Vector<AudioFrame>>>>*)&local_148, (StringName*)&local_1a0);
                              if (*(long*)( lVar16 + 8 ) != local_190) {
                                 CowData<AudioFrame>::_ref((CowData<AudioFrame>*)( lVar16 + 8 ), (CowData*)&local_190);
                              }

                              CowData<AudioFrame>::_unref((CowData<AudioFrame>*)&local_190);
                              if (( StringName::configured != '\0' ) && ( local_1a0 != 0 )) {
                                 StringName::unref();
                              }

                           }

                        }

                        lVar16 = *(long*)( in_RSI + 0x528 );
                        CowData<Ref<AudioStreamPlayback>>::_copy_on_write((CowData<Ref<AudioStreamPlayback>>*)( lVar16 + 0x1e0 ));
                        plVar27 = *(long**)( lVar16 + 0x1e0 );
                        CowData<Ref<AudioStreamPlayback>>::_copy_on_write((CowData<Ref<AudioStreamPlayback>>*)( lVar16 + 0x1e0 ));
                        plVar30 = *(long**)( lVar16 + 0x1e0 );
                        auVar41 = local_e4;
                        if (plVar30 != (long*)0x0) {
                           plVar30 = plVar30 + plVar30[-1];
                        }

                        joined_r0x00107546:if (plVar27 != plVar30) {
                           do {
                              local_e4 = auVar41;
                              uVar22 = AudioServer::get_singleton();
                              local_188 = (Object*)0x0;
                              if ((Object*)*plVar27 != (Object*)0x0) {
                                 local_188 = (Object*)*plVar27;
                                 cVar12 = RefCounted::reference();
                                 if (cVar12 == '\0') {
                                    local_188 = (Object*)0x0;
                                 }

                              }

                              AudioServer::set_playback_bus_volumes_linear(uVar22, (StringName*)&local_188, (HashMap<StringName,Vector<AudioFrame>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Vector<AudioFrame>>>>*)&local_148);
                              auVar41 = local_e4;
                              if (local_188 != (Object*)0x0) {
                                 cVar12 = RefCounted::unreference();
                                 pOVar5 = local_188;
                                 auVar41 = local_e4;
                                 if (cVar12 != '\0') {
                                    cVar12 = predelete_handler(local_188);
                                    auVar41 = local_e4;
                                    if (cVar12 != '\0') goto code_r0x001075ee;
                                 }

                              }

                              plVar27 = plVar27 + 1;
                              if (plVar30 == plVar27) break;
                           }
 while ( true );
                        }

                        local_e4 = auVar41;
                        if (*(int*)( in_RSI + 0x590 ) == 0) {
                           LAB_00107940:lVar16 = *(long*)( in_RSI + 0x528 );
                           fVar32 = *(float*)( lVar16 + 500 );
                        }
 else {
                           if (cVar11 == '\0') {
                              local_260 = 0.0;
                              local_208 = 0.0;
                              local_240 = 0.0;
                           }
 else {
                              auVar41 = Camera3D::get_doppler_tracked_velocity();
                              local_260 = auVar41._8_4_;
                              local_240 = auVar41._0_4_;
                              local_208 = auVar41._4_4_;
                           }

                           local_e4 = auVar41;
                           Node3D::get_global_transform();
                           Transform3D::orthonormalized();
                           local_208 = local_1d0 - local_208;
                           local_240 = local_1c0 - local_240;
                           local_260 = local_1cc - local_260;
                           fVar34 = local_70 * local_240 + fStack_64 * local_208 + local_58 * local_260;
                           fVar33 = fStack_74 * local_240 + local_68 * local_208 + local_5c * local_260;
                           fVar32 = local_240 * local_78 + local_208 * fStack_6c + local_260 * local_60;
                           if (( fVar32 == 0.0 && fVar33 == 0.0 ) && ( fVar34 == 0.0 )) goto LAB_00107940;
                           fVar35 = fVar32 * fVar32 + fVar33 * fVar33 + fVar34 * fVar34;
                           fVar39 = SQRT(fVar35);
                           if (fVar35 == 0.0) {
                              fVar34 = 0.0;
                              fVar33 = 0.0;
                              fVar32 = 0.0;
                           }
 else {
                              fVar32 = fVar32 / fVar39;
                              fVar33 = fVar33 / fVar39;
                              fVar34 = fVar34 / fVar39;
                           }

                           lVar16 = *(long*)( in_RSI + 0x528 );
                           fVar33 = ( *(float*)( lVar16 + 500 ) * _LC211 ) / ( ( fVar32 * local_258 + fVar33 * local_220 + local_1e8 * fVar34 ) * fVar39 + _LC211 );
                           fVar32 = _LC205;
                           if (( _LC205 <= fVar33 ) && ( fVar32 = _LC206 < fVar33 )) {
                              fVar32 = _LC206;
                           }

                        }

                        *(float*)( in_RSI + 0x54c ) = fVar32;
                        CowData<Ref<AudioStreamPlayback>>::_copy_on_write((CowData<Ref<AudioStreamPlayback>>*)( lVar16 + 0x1e0 ));
                        plVar27 = *(long**)( lVar16 + 0x1e0 );
                        CowData<Ref<AudioStreamPlayback>>::_copy_on_write((CowData<Ref<AudioStreamPlayback>>*)( lVar16 + 0x1e0 ));
                        plVar30 = *(long**)( lVar16 + 0x1e0 );
                        uVar1 = local_120;
                        if (plVar30 != (long*)0x0) {
                           plVar30 = plVar30 + plVar30[-1];
                        }

                        for (; local_120 = uVar1,plVar27 != plVar30; plVar27 = plVar27 + 1) {
                           uVar22 = AudioServer::get_singleton();
                           local_188 = (Object*)0x0;
                           if ((Object*)*plVar27 != (Object*)0x0) {
                              local_188 = (Object*)*plVar27;
                              cVar11 = RefCounted::reference();
                              if (cVar11 == '\0') {
                                 local_188 = (Object*)0x0;
                              }

                           }

                           AudioServer::set_playback_pitch_scale(uVar22);
                           if (local_188 != (Object*)0x0) {
                              cVar11 = RefCounted::unreference();
                              pOVar5 = local_188;
                              if (cVar11 != '\0') {
                                 cVar11 = predelete_handler(local_188);
                                 if (cVar11 != '\0') {
                                    ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
                                    Memory::free_static(pOVar5, false);
                                 }

                              }

                           }

                           if (*(code**)( *(long*)*plVar27 + 0x1a8 ) != AudioStreamPlayback::get_is_sample) {
                              cVar11 = ( **(code**)( *(long*)*plVar27 + 0x1a8 ) )();
                              if (cVar11 != '\0') {
                                 ( **(code**)( *(long*)*plVar27 + 0x1b0 ) )((StringName*)&local_188);
                                 if (local_188 != (Object*)0x0) {
                                    pRVar21 = (Ref*)AudioServer::get_singleton();
                                    AudioServer::update_sample_playback_pitch_scale(pRVar21, *(float*)( in_RSI + 0x54c ));
                                    if (local_188 != (Object*)0x0) {
                                       cVar11 = RefCounted::unreference();
                                       pOVar5 = local_188;
                                       if (cVar11 != '\0') {
                                          cVar11 = predelete_handler(local_188);
                                          if (cVar11 != '\0') {
                                             ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
                                             Memory::free_static(pOVar5, false);
                                          }

                                       }

                                    }

                                 }

                              }

                           }

                           uVar1 = local_120;
                        }

                        if ((void*)local_140._0_8_ != (void*)0x0) {
                           local_120._4_4_ = (int)( uVar1 >> 0x20 );
                           bVar31 = local_120._4_4_ != 0;
                           pvVar25 = (void*)local_140._0_8_;
                           if (bVar31) {
                              uVar38 = *(uint*)( hash_table_size_primes + ( uVar1 & 0xffffffff ) * 4 );
                              if (uVar38 != 0) {
                                 lVar16 = 0;
                                 do {
                                    if (*(int*)( local_140._8_8_ + lVar16 ) != 0) {
                                       pvVar25 = *(void**)( (long)pvVar25 + lVar16 * 2 );
                                       *(int*)( local_140._8_8_ + lVar16 ) = 0;
                                       if (*(long*)( (long)pvVar25 + 0x20 ) != 0) {
                                          LOCK();
                                          plVar30 = (long*)( *(long*)( (long)pvVar25 + 0x20 ) + -0x10 );
                                          *plVar30 = *plVar30 + -1;
                                          UNLOCK();
                                          if (*plVar30 == 0) {
                                             lVar23 = *(long*)( (long)pvVar25 + 0x20 );
                                             *(undefined8*)( (long)pvVar25 + 0x20 ) = 0;
                                             Memory::free_static((void*)( lVar23 + -0x10 ), false);
                                          }

                                       }

                                       if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar25 + 0x10 ) != 0 )) {
                                          StringName::unref();
                                       }

                                       Memory::free_static(pvVar25, false);
                                       *(undefined8*)( local_140._0_8_ + lVar16 * 2 ) = 0;
                                       pvVar25 = (void*)local_140._0_8_;
                                    }

                                    lVar16 = lVar16 + 4;
                                 }
 while ( (ulong)uVar38 * 4 - lVar16 != 0 );
                                 goto LAB_00107bf7;
                              }

                              goto LAB_0010846f;
                           }

                           goto LAB_00107c1c;
                        }

                        goto LAB_00106f20;
                     }

                  }
 else {
                     cVar12 = Area3D::is_using_reverb_bus();
                     if (cVar12 != '\0') {
                        fVar35 = (float)Area3D::get_reverb_uniformity();
                        if (fVar35 <= 0.0) {
                           fVar35 = *(float*)( in_RSI + 0x57c );
                           goto joined_r0x001078c2;
                        }

                        pcVar3 = *(code**)( *plVar15 + 0x180 );
                        Node3D::get_global_transform();
                        auVar41 = ( *pcVar3 )(CONCAT44(fStack_50, local_54), local_4c, plVar15, *(undefined8*)( lVar16 + 0x538 ));
                        fVar37 = auVar41._8_4_;
                        fVar39 = auVar41._0_4_;
                        fVar36 = auVar41._4_4_;
                        local_110 = auVar41;
                        Node3D::get_global_transform();
                        Transform3D::affine_inverse();
                        fVar35 = *(float*)( in_RSI + 0x57c );
                        local_1dc = fVar36 * local_5c + local_60 * fVar39 + fVar37 * local_58 + local_4c;
                        local_1d8 = CONCAT44(local_68 * fVar36 + fStack_6c * fVar39 + fStack_64 * fVar37 + fStack_50, fStack_74 * fVar36 + local_78 * fVar39 + local_70 * fVar37 + local_54);
                        if (0.0 < fVar35) goto LAB_00106edf;
                        goto LAB_00107198;
                     }

                     fVar35 = *(float*)( in_RSI + 0x57c );
                     joined_r0x001078c2:local_1d8 = 0;
                     local_1dc = 0.0;
                     if (fVar35 <= 0.0) goto LAB_00107181;
                     LAB_00106edf:cVar12 = Area3D::is_using_reverb_bus();
                     if (cVar12 == '\0') {
                        LAB_00106ef1:fVar39 = fVar35;
                     }
 else {
                        fVar39 = (float)Area3D::get_reverb_uniformity();
                        if (fVar39 <= 0.0) goto LAB_00106ef1;
                        fVar39 = SQRT(local_1d8._4_4_ * local_1d8._4_4_ + (float)local_1d8 * (float)local_1d8 + local_1dc * local_1dc);
                        if (fVar39 < fVar35) goto LAB_00106ef1;
                     }

                     if (( fVar34 <= fVar39 ) && ( fVar39 < *(float*)( in_RSI + 0x57c ) || fVar39 == *(float*)( in_RSI + 0x57c ) )) goto LAB_00107198;
                  }

                  if (in_RSI[0x580] == (AudioStreamPlayer3D)0x0) {
                     lVar16 = *(long*)( in_RSI + 0x528 );
                     local_120 = 2;
                     local_140 = (undefined1[16])0x0;
                     local_130 = (undefined1[16])0x0;
                     CowData<Ref<AudioStreamPlayback>>::_copy_on_write((CowData<Ref<AudioStreamPlayback>>*)( lVar16 + 0x1e0 ));
                     plVar27 = *(long**)( lVar16 + 0x1e0 );
                     CowData<Ref<AudioStreamPlayback>>::_copy_on_write((CowData<Ref<AudioStreamPlayback>>*)( lVar16 + 0x1e0 ));
                     plVar30 = *(long**)( lVar16 + 0x1e0 );
                     uVar1 = local_120;
                     if (plVar30 != (long*)0x0) {
                        plVar30 = plVar30 + plVar30[-1];
                     }

                     for (; local_120 = uVar1,plVar27 != plVar30; plVar27 = plVar27 + 1) {
                        uVar22 = AudioServer::get_singleton();
                        local_188 = (Object*)0x0;
                        if ((Object*)*plVar27 != (Object*)0x0) {
                           local_188 = (Object*)*plVar27;
                           cVar11 = RefCounted::reference();
                           if (cVar11 == '\0') {
                              local_188 = (Object*)0x0;
                           }

                        }

                        AudioServer::set_playback_bus_volumes_linear(uVar22, (StringName*)&local_188, (HashMap<StringName,Vector<AudioFrame>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Vector<AudioFrame>>>>*)&local_148);
                        if (local_188 != (Object*)0x0) {
                           cVar11 = RefCounted::unreference();
                           pOVar5 = local_188;
                           if (cVar11 != '\0') {
                              cVar11 = predelete_handler(local_188);
                              if (cVar11 != '\0') {
                                 ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
                                 Memory::free_static(pOVar5, false);
                              }

                           }

                        }

                        uVar1 = local_120;
                     }

                     in_RSI[0x580] = (AudioStreamPlayer3D)0x1;
                     if ((void*)local_140._0_8_ != (void*)0x0) {
                        local_120._4_4_ = (int)( uVar1 >> 0x20 );
                        bVar31 = local_120._4_4_ != 0;
                        pvVar25 = (void*)local_140._0_8_;
                        if (bVar31) {
                           uVar38 = *(uint*)( hash_table_size_primes + ( uVar1 & 0xffffffff ) * 4 );
                           if (uVar38 == 0) {
                              LAB_0010846f:local_120 = local_120 & 0xffffffff;
                              local_130 = (undefined1[16])0x0;
                              pvVar25 = (void*)local_140._0_8_;
                           }
 else {
                              lVar16 = 0;
                              do {
                                 if (*(int*)( local_140._8_8_ + lVar16 ) != 0) {
                                    pvVar25 = *(void**)( (long)pvVar25 + lVar16 * 2 );
                                    *(int*)( local_140._8_8_ + lVar16 ) = 0;
                                    if (*(long*)( (long)pvVar25 + 0x20 ) != 0) {
                                       LOCK();
                                       plVar30 = (long*)( *(long*)( (long)pvVar25 + 0x20 ) + -0x10 );
                                       *plVar30 = *plVar30 + -1;
                                       UNLOCK();
                                       if (*plVar30 == 0) {
                                          lVar23 = *(long*)( (long)pvVar25 + 0x20 );
                                          *(undefined8*)( (long)pvVar25 + 0x20 ) = 0;
                                          Memory::free_static((void*)( lVar23 + -0x10 ), false);
                                       }

                                    }

                                    if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar25 + 0x10 ) != 0 )) {
                                       StringName::unref();
                                    }

                                    Memory::free_static(pvVar25, false);
                                    *(undefined8*)( local_140._0_8_ + lVar16 * 2 ) = 0;
                                    pvVar25 = (void*)local_140._0_8_;
                                 }

                                 lVar16 = lVar16 + 4;
                              }
 while ( (ulong)uVar38 * 4 - lVar16 != 0 );
                              LAB_00107bf7:local_120 = local_120 & 0xffffffff;
                              local_130 = (undefined1[16])0x0;
                              if (pvVar25 == (void*)0x0) goto LAB_00106f20;
                           }

                        }

                        LAB_00107c1c:Memory::free_static(pvVar25, false);
                        Memory::free_static((void*)local_140._8_8_, false);
                     }

                  }

               }

            }

            LAB_00106f20:if (iVar7 <= (int)lVar29 + 1) goto code_r0x00106f2d;
            lVar29 = lVar29 + 1;
         }
 while ( true );
      }

      if ((void*)local_178._0_8_ != (void*)0x0) {
         pvVar25 = (void*)local_178._0_8_;
         pvVar28 = (void*)local_168._8_8_;
         goto LAB_00106f78;
      }

   }

   joined_r0x00106fb5:if (local_1a8 != (Object*)0x0) {
      cVar11 = RefCounted::unreference();
      if (cVar11 != '\0') {
         cVar11 = predelete_handler(local_1a8);
         if (cVar11 != '\0') {
            ( **(code**)( *(long*)local_1a8 + 0x140 ) )(local_1a8);
            Memory::free_static(local_1a8, false);
         }

      }

   }

   LAB_00106fc0:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
   code_r0x00107391:plVar27 = plVar27 + 1;
   ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
   Memory::free_static(pOVar5, false);
   goto joined_r0x001072b1;
   code_r0x001075ee:plVar27 = plVar27 + 1;
   ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
   Memory::free_static(pOVar5, false);
   auVar41 = local_e4;
   goto joined_r0x00107546;
   code_r0x00106f2d:pvVar25 = (void*)local_178._0_8_;
   if ((void*)local_178._0_8_ != (void*)0x0) {
      pvVar28 = (void*)local_168._8_8_;
      if (( local_158._4_4_ != 0 ) && ( *(uint*)( hash_table_size_primes + ( local_158 & 0xffffffff ) * 4 ) != 0 )) {
         memset((void*)local_168._8_8_, 0, ( ulong ) * (uint*)( hash_table_size_primes + ( local_158 & 0xffffffff ) * 4 ) * 4);
      }

      LAB_00106f78:Memory::free_static(pvVar25, false);
      Memory::free_static((void*)local_168._0_8_, false);
      Memory::free_static((void*)local_178._8_8_, false);
      Memory::free_static(pvVar28, false);
   }

   goto joined_r0x00106fb5;
}
/* AudioStreamPlayer3D::_notification(int) */void AudioStreamPlayer3D::_notification(AudioStreamPlayer3D *this, int param_1) {
   uint uVar1;
   Vector3 *pVVar2;
   undefined1 auVar3[16];
   char cVar4;
   _func_void_void_ptr *p_Var5;
   long lVar6;
   undefined8 uVar7;
   long lVar8;
   void *pvVar9;
   long in_FS_OFFSET;
   long local_c0[2];
   long local_b0;
   HashMap<StringName,Vector<AudioFrame>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Vector<AudioFrame>>>> local_a8[8];
   undefined1 local_a0[16];
   undefined1 local_90[16];
   undefined8 local_80;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   AudioStreamPlayerInternal::notification((int)*(undefined8*)( this + 0x528 ));
   if (param_1 == 0x1a) {
      local_b0 = 0;
      if (*(float*)( this + 0x530 ) <= 0.0) {
         if (*(char*)( *(long*)( this + 0x528 ) + 0x1f0 ) != '\0') {
            lVar6 = *(long*)( this + 0x550 );
            AudioServer::get_singleton();
            lVar8 = AudioServer::get_mix_count();
            if (lVar6 != lVar8) goto LAB_0010859e;
         }

         if (this[0x558] != (AudioStreamPlayer3D)0x0) goto LAB_0010859e;
      }
 else {
         LAB_0010859e:this[0x558] = (AudioStreamPlayer3D)0x0;
         _update_panning();
         if (local_b0 != local_a0._0_8_) {
            CowData<AudioFrame>::_unref((CowData<AudioFrame>*)&local_b0);
            local_b0 = local_a0._0_8_;
            auVar3._8_8_ = 0;
            auVar3._0_8_ = local_a0._8_8_;
            local_a0 = auVar3 << 0x40;
         }

         CowData<AudioFrame>::_unref((CowData<AudioFrame>*)local_a0);
      }

      if (( *(long*)( this + 0x538 ) != 0 ) && ( 0.0 <= *(float*)( this + 0x530 ) )) {
         *(undefined1*)( *(long*)( this + 0x528 ) + 0x1f0 ) = 1;
         local_a0 = (undefined1[16])0x0;
         local_90 = (undefined1[16])0x0;
         local_80 = 2;
         _get_actual_bus();
         lVar6 = HashMap<StringName,Vector<AudioFrame>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Vector<AudioFrame>>>>::operator [](local_a8, (StringName*)local_c0);
         if (*(long*)( lVar6 + 8 ) != local_b0) {
            CowData<AudioFrame>::_ref((CowData<AudioFrame>*)( lVar6 + 8 ), (CowData*)&local_b0);
         }

         if (( StringName::configured != '\0' ) && ( local_c0[0] != 0 )) {
            StringName::unref();
         }

         uVar7 = AudioServer::get_singleton();
         local_c0[0] = 0;
         if (( *(long*)( this + 0x538 ) != 0 ) && ( local_c0[0] = *(long*)( this + 0x538 ) ),cVar4 = RefCounted::reference(),cVar4 == '\0') {
            local_c0[0] = 0;
         }

         AudioServer::start_playback_stream(uVar7, (Ref<AudioStreamPlayback>*)local_c0, local_a8);
         Ref<AudioStreamPlayback>::unref((Ref<AudioStreamPlayback>*)local_c0);
         Ref<AudioStreamPlayback>::unref((Ref<AudioStreamPlayback>*)( this + 0x538 ));
         *(undefined4*)( this + 0x530 ) = 0xbf800000;
         if ((void*)local_a0._0_8_ != (void*)0x0) {
            pvVar9 = (void*)local_a0._0_8_;
            if (local_80._4_4_ != 0) {
               uVar1 = *(uint*)( hash_table_size_primes + ( local_80 & 0xffffffff ) * 4 );
               if (uVar1 == 0) {
                  local_80 = local_80 & 0xffffffff;
                  local_90 = (undefined1[16])0x0;
               }
 else {
                  lVar6 = 0;
                  do {
                     if (*(int*)( local_a0._8_8_ + lVar6 ) != 0) {
                        pvVar9 = *(void**)( (long)pvVar9 + lVar6 * 2 );
                        *(int*)( local_a0._8_8_ + lVar6 ) = 0;
                        CowData<AudioFrame>::_unref((CowData<AudioFrame>*)( (long)pvVar9 + 0x20 ));
                        if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar9 + 0x10 ) != 0 )) {
                           StringName::unref();
                        }

                        Memory::free_static(pvVar9, false);
                        *(undefined8*)( local_a0._0_8_ + lVar6 * 2 ) = 0;
                        pvVar9 = (void*)local_a0._0_8_;
                     }

                     lVar6 = lVar6 + 4;
                  }
 while ( lVar6 != (ulong)uVar1 << 2 );
                  local_80 = local_80 & 0xffffffff;
                  local_90 = (undefined1[16])0x0;
                  if (pvVar9 == (void*)0x0) goto LAB_00108602;
               }

            }

            Memory::free_static(pvVar9, false);
            Memory::free_static((void*)local_a0._8_8_, false);
         }

      }

      LAB_00108602:if (( *(long*)( *(long*)( this + 0x528 ) + 0x1e0 ) != 0 ) && ( *(char*)( *(long*)( this + 0x528 ) + 0x1f0 ) != '\0' )) {
         AudioStreamPlayerInternal::process();
      }

      AudioStreamPlayerInternal::ensure_playback_limit();
      CowData<AudioFrame>::_unref((CowData<AudioFrame>*)&local_b0);
   }
 else if (param_1 < 0x1b) {
      if (param_1 == 10) {
         pVVar2 = *(Vector3**)( this + 0x588 );
         Node3D::get_global_transform();
         VelocityTracker3D::reset(pVVar2);
         p_Var5 = (_func_void_void_ptr*)AudioServer::get_singleton();
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            AudioServer::add_listener_changed_callback(p_Var5, _listener_changed_cb);
            return;
         }

         goto LAB_001086f9;
      }

      if (param_1 == 0xb) {
         p_Var5 = (_func_void_void_ptr*)AudioServer::get_singleton();
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            AudioServer::remove_listener_changed_callback(p_Var5, _listener_changed_cb);
            return;
         }

         goto LAB_001086f9;
      }

   }
 else if (( param_1 == 2000 ) && ( *(int*)( this + 0x590 ) != 0 )) {
      pVVar2 = *(Vector3**)( this + 0x588 );
      Node3D::get_global_transform();
      VelocityTracker3D::update_position(pVVar2);
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_001086f9:/* WARNING: Subroutine does not return */__stack_chk_fail();
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
/* Object::_validate_property(PropertyInfo&) const */void Object::_validate_property(PropertyInfo *param_1) {
   return;
}
/* Object::_property_can_revert(StringName const&) const */undefined8 Object::_property_can_revert(StringName *param_1) {
   return 0;
}
/* Object::_property_get_revert(StringName const&, Variant&) const */undefined8 Object::_property_get_revert(StringName *param_1, Variant *param_2) {
   return 0;
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
/* Node3D::set_transform_gizmo_visible(bool) */void Node3D::set_transform_gizmo_visible(Node3D *this, bool param_1) {
   this[0x518] = ( Node3D )((byte)this[0x518] & 0xfb | param_1 * '\x04');
   return;
}
/* Node3D::is_transform_gizmo_visible() const */byte Node3D::is_transform_gizmo_visible(Node3D *this) {
   return (byte)this[0x518] >> 2 & 1;
}
/* AudioStreamPlayer3D::is_class_ptr(void*) const */uint AudioStreamPlayer3D::is_class_ptr(AudioStreamPlayer3D *this, void *param_1) {
   return (uint)CONCAT71(0x11cb, (undefined4*)param_1 == &Node3D::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x11cb, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x11cb, (undefined4*)param_1 == &Node::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x11cb, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr);
}
/* AudioStreamPlayer3D::_listener_changed_cb(void*) */void AudioStreamPlayer3D::_listener_changed_cb(void *param_1) {
   *(undefined1*)( (long)param_1 + 0x558 ) = 1;
   return;
}
/* AudioStreamPlayback::get_is_sample() const */undefined8 AudioStreamPlayback::get_is_sample(void) {
   return 0;
}
/* CallableCustomMethodPointer<AudioStreamPlayer3D, void>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<AudioStreamPlayer3D,void>::~CallableCustomMethodPointer(CallableCustomMethodPointer<AudioStreamPlayer3D,void> *this) {
   return;
}
/* CallableCustomMethodPointer<AudioStreamPlayer3D, void, float>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<AudioStreamPlayer3D,void,float>::~CallableCustomMethodPointer(CallableCustomMethodPointer<AudioStreamPlayer3D,void,float> *this) {
   return;
}
/* MethodBindTRC<AudioServer::PlaybackType>::_gen_argument_type(int) const */undefined8 MethodBindTRC<AudioServer::PlaybackType>::_gen_argument_type(int param_1) {
   return 2;
}
/* MethodBindTRC<AudioServer::PlaybackType>::get_argument_meta(int) const */undefined8 MethodBindTRC<AudioServer::PlaybackType>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindT<AudioServer::PlaybackType>::_gen_argument_type(int) const */char MethodBindT<AudioServer::PlaybackType>::_gen_argument_type(MethodBindT<AudioServer::PlaybackType> *this, int param_1) {
   return ( param_1 == 0 ) * '\x02';
}
/* MethodBindT<AudioServer::PlaybackType>::get_argument_meta(int) const */undefined8 MethodBindT<AudioServer::PlaybackType>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTR<Ref<AudioStreamPlayback>>::_gen_argument_type(int) const */undefined8 MethodBindTR<Ref<AudioStreamPlayback>>::_gen_argument_type(int param_1) {
   return 0x18;
}
/* MethodBindTR<Ref<AudioStreamPlayback>>::get_argument_meta(int) const */undefined8 MethodBindTR<Ref<AudioStreamPlayback>>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTRC<int>::_gen_argument_type(int) const */undefined8 MethodBindTRC<int>::_gen_argument_type(int param_1) {
   return 2;
}
/* MethodBindTRC<int>::get_argument_meta(int) const */uint MethodBindTRC<int>::get_argument_meta(MethodBindTRC<int> *this, int param_1) {
   return param_1 >> 0x1f & 3;
}
/* MethodBindT<int>::_gen_argument_type(int) const */char MethodBindT<int>::_gen_argument_type(MethodBindT<int> *this, int param_1) {
   return ( param_1 == 0 ) * '\x02';
}
/* MethodBindT<int>::get_argument_meta(int) const */byte MethodBindT<int>::get_argument_meta(MethodBindT<int> *this, int param_1) {
   return -(param_1 == 0) & 3;
}
/* MethodBindTRC<AudioStreamPlayer3D::DopplerTracking>::_gen_argument_type(int) const */undefined8 MethodBindTRC<AudioStreamPlayer3D::DopplerTracking>::_gen_argument_type(int param_1) {
   return 2;
}
/* MethodBindTRC<AudioStreamPlayer3D::DopplerTracking>::get_argument_meta(int) const */undefined8 MethodBindTRC<AudioStreamPlayer3D::DopplerTracking>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindT<AudioStreamPlayer3D::DopplerTracking>::_gen_argument_type(int) const */char MethodBindT<AudioStreamPlayer3D::DopplerTracking>::_gen_argument_type(MethodBindT<AudioStreamPlayer3D::DopplerTracking> *this, int param_1) {
   return ( param_1 == 0 ) * '\x02';
}
/* MethodBindT<AudioStreamPlayer3D::DopplerTracking>::get_argument_meta(int) const */undefined8 MethodBindT<AudioStreamPlayer3D::DopplerTracking>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTRC<AudioStreamPlayer3D::AttenuationModel>::_gen_argument_type(int) const */undefined8 MethodBindTRC<AudioStreamPlayer3D::AttenuationModel>::_gen_argument_type(int param_1) {
   return 2;
}
/* MethodBindTRC<AudioStreamPlayer3D::AttenuationModel>::get_argument_meta(int) const */undefined8 MethodBindTRC<AudioStreamPlayer3D::AttenuationModel>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindT<AudioStreamPlayer3D::AttenuationModel>::_gen_argument_type(int) const */char MethodBindT<AudioStreamPlayer3D::AttenuationModel>::_gen_argument_type(MethodBindT<AudioStreamPlayer3D::AttenuationModel> *this, int param_1) {
   return ( param_1 == 0 ) * '\x02';
}
/* MethodBindT<AudioStreamPlayer3D::AttenuationModel>::get_argument_meta(int) const */undefined8 MethodBindT<AudioStreamPlayer3D::AttenuationModel>::get_argument_meta(int param_1) {
   return 0;
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
/* MethodBindT<bool>::_gen_argument_type(int) const */bool MethodBindT<bool>::_gen_argument_type(MethodBindT<bool> *this, int param_1) {
   return param_1 == 0;
}
/* MethodBindT<bool>::get_argument_meta(int) const */undefined8 MethodBindT<bool>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTRC<StringName>::_gen_argument_type(int) const */undefined8 MethodBindTRC<StringName>::_gen_argument_type(int param_1) {
   return 0x15;
}
/* MethodBindTRC<StringName>::get_argument_meta(int) const */undefined8 MethodBindTRC<StringName>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindT<StringName const&>::_gen_argument_type(int) const */byte MethodBindT<StringName_const&>::_gen_argument_type(MethodBindT<StringName_const&> *this, int param_1) {
   return -(param_1 == 0) & 0x15;
}
/* MethodBindT<StringName const&>::get_argument_meta(int) const */undefined8 MethodBindT<StringName_const&>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTR<float>::_gen_argument_type(int) const */undefined8 MethodBindTR<float>::_gen_argument_type(int param_1) {
   return 3;
}
/* MethodBindTR<float>::get_argument_meta(int) const */uint MethodBindTR<float>::get_argument_meta(MethodBindTR<float> *this, int param_1) {
   return param_1 >> 0x1f & 9;
}
/* MethodBindTRC<bool>::_gen_argument_type(int) const */undefined8 MethodBindTRC<bool>::_gen_argument_type(int param_1) {
   return 1;
}
/* MethodBindTRC<bool>::get_argument_meta(int) const */undefined8 MethodBindTRC<bool>::get_argument_meta(int param_1) {
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
/* MethodBindTRC<float>::_gen_argument_type(int) const */undefined8 MethodBindTRC<float>::_gen_argument_type(int param_1) {
   return 3;
}
/* MethodBindTRC<float>::get_argument_meta(int) const */uint MethodBindTRC<float>::get_argument_meta(MethodBindTRC<float> *this, int param_1) {
   return param_1 >> 0x1f & 9;
}
/* MethodBindT<float>::_gen_argument_type(int) const */byte MethodBindT<float>::_gen_argument_type(MethodBindT<float> *this, int param_1) {
   return -(param_1 == 0) & 3;
}
/* MethodBindT<float>::get_argument_meta(int) const */byte MethodBindT<float>::get_argument_meta(MethodBindT<float> *this, int param_1) {
   return -(param_1 == 0) & 9;
}
/* MethodBindTRC<Ref<AudioStream>>::_gen_argument_type(int) const */undefined8 MethodBindTRC<Ref<AudioStream>>::_gen_argument_type(int param_1) {
   return 0x18;
}
/* MethodBindTRC<Ref<AudioStream>>::get_argument_meta(int) const */undefined8 MethodBindTRC<Ref<AudioStream>>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindT<Ref<AudioStream> >::_gen_argument_type(int) const */byte MethodBindT<Ref<AudioStream>>::_gen_argument_type(MethodBindT<Ref<AudioStream>> *this, int param_1) {
   return -(param_1 == 0) & 0x18;
}
/* MethodBindT<Ref<AudioStream> >::get_argument_meta(int) const */undefined8 MethodBindT<Ref<AudioStream>>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTR<bool>::_gen_argument_type(int) const */undefined8 MethodBindTR<bool>::_gen_argument_type(int param_1) {
   return 1;
}
/* MethodBindTR<bool>::get_argument_meta(int) const */undefined8 MethodBindTR<bool>::get_argument_meta(int param_1) {
   return 0;
}
/* CallableCustomMethodPointer<AudioStreamPlayer3D, void>::get_argument_count(bool&) const */undefined8 CallableCustomMethodPointer<AudioStreamPlayer3D,void>::get_argument_count(CallableCustomMethodPointer<AudioStreamPlayer3D,void> *this, bool *param_1) {
   *param_1 = true;
   return 0;
}
/* CallableCustomMethodPointer<AudioStreamPlayer3D, void, float>::get_argument_count(bool&) const */undefined8 CallableCustomMethodPointer<AudioStreamPlayer3D,void,float>::get_argument_count(CallableCustomMethodPointer<AudioStreamPlayer3D,void,float> *this, bool *param_1) {
   *param_1 = true;
   return 1;
}
/* CallableCustomMethodPointer<AudioStreamPlayer3D, void>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<AudioStreamPlayer3D,void>::~CallableCustomMethodPointer(CallableCustomMethodPointer<AudioStreamPlayer3D,void> *this) {
   operator_delete(this, 0x48);
   return;
}
/* CallableCustomMethodPointer<AudioStreamPlayer3D, void, float>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<AudioStreamPlayer3D,void,float>::~CallableCustomMethodPointer(CallableCustomMethodPointer<AudioStreamPlayer3D,void,float> *this) {
   operator_delete(this, 0x48);
   return;
}
/* MethodBindTR<bool>::~MethodBindTR() */void MethodBindTR<bool>::~MethodBindTR(MethodBindTR<bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011c348;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTR<bool>::~MethodBindTR() */void MethodBindTR<bool>::~MethodBindTR(MethodBindTR<bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011c348;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<Ref<AudioStream> >::~MethodBindT() */void MethodBindT<Ref<AudioStream>>::~MethodBindT(MethodBindT<Ref<AudioStream>> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011c3a8;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<Ref<AudioStream> >::~MethodBindT() */void MethodBindT<Ref<AudioStream>>::~MethodBindT(MethodBindT<Ref<AudioStream>> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011c3a8;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<Ref<AudioStream>>::~MethodBindTRC() */void MethodBindTRC<Ref<AudioStream>>::~MethodBindTRC(MethodBindTRC<Ref<AudioStream>> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011c408;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<Ref<AudioStream>>::~MethodBindTRC() */void MethodBindTRC<Ref<AudioStream>>::~MethodBindTRC(MethodBindTRC<Ref<AudioStream>> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011c408;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<float>::~MethodBindT() */void MethodBindT<float>::~MethodBindT(MethodBindT<float> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011c468;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<float>::~MethodBindT() */void MethodBindT<float>::~MethodBindT(MethodBindT<float> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011c468;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<>::~MethodBindT() */void MethodBindT<>::~MethodBindT(MethodBindT<> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011c528;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<>::~MethodBindT() */void MethodBindT<>::~MethodBindT(MethodBindT<> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011c528;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTR<float>::~MethodBindTR() */void MethodBindTR<float>::~MethodBindTR(MethodBindTR<float> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011c5e8;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTR<float>::~MethodBindTR() */void MethodBindTR<float>::~MethodBindTR(MethodBindTR<float> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011c5e8;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<StringName const&>::~MethodBindT() */void MethodBindT<StringName_const&>::~MethodBindT(MethodBindT<StringName_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011c648;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<StringName const&>::~MethodBindT() */void MethodBindT<StringName_const&>::~MethodBindT(MethodBindT<StringName_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011c648;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<StringName>::~MethodBindTRC() */void MethodBindTRC<StringName>::~MethodBindTRC(MethodBindTRC<StringName> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011c6a8;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<StringName>::~MethodBindTRC() */void MethodBindTRC<StringName>::~MethodBindTRC(MethodBindTRC<StringName> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011c6a8;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<unsigned int>::~MethodBindT() */void MethodBindT<unsigned_int>::~MethodBindT(MethodBindT<unsigned_int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011c768;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<unsigned int>::~MethodBindT() */void MethodBindT<unsigned_int>::~MethodBindT(MethodBindT<unsigned_int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011c768;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<unsigned int>::~MethodBindTRC() */void MethodBindTRC<unsigned_int>::~MethodBindTRC(MethodBindTRC<unsigned_int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011c7c8;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<unsigned int>::~MethodBindTRC() */void MethodBindTRC<unsigned_int>::~MethodBindTRC(MethodBindTRC<unsigned_int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011c7c8;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<AudioStreamPlayer3D::AttenuationModel>::~MethodBindT() */void MethodBindT<AudioStreamPlayer3D::AttenuationModel>::~MethodBindT(MethodBindT<AudioStreamPlayer3D::AttenuationModel> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011c828;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<AudioStreamPlayer3D::AttenuationModel>::~MethodBindT() */void MethodBindT<AudioStreamPlayer3D::AttenuationModel>::~MethodBindT(MethodBindT<AudioStreamPlayer3D::AttenuationModel> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011c828;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<AudioStreamPlayer3D::AttenuationModel>::~MethodBindTRC() */void MethodBindTRC<AudioStreamPlayer3D::AttenuationModel>::~MethodBindTRC(MethodBindTRC<AudioStreamPlayer3D::AttenuationModel> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011c888;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<AudioStreamPlayer3D::AttenuationModel>::~MethodBindTRC() */void MethodBindTRC<AudioStreamPlayer3D::AttenuationModel>::~MethodBindTRC(MethodBindTRC<AudioStreamPlayer3D::AttenuationModel> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011c888;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<AudioStreamPlayer3D::DopplerTracking>::~MethodBindT() */void MethodBindT<AudioStreamPlayer3D::DopplerTracking>::~MethodBindT(MethodBindT<AudioStreamPlayer3D::DopplerTracking> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011c8e8;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<AudioStreamPlayer3D::DopplerTracking>::~MethodBindT() */void MethodBindT<AudioStreamPlayer3D::DopplerTracking>::~MethodBindT(MethodBindT<AudioStreamPlayer3D::DopplerTracking> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011c8e8;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<AudioStreamPlayer3D::DopplerTracking>::~MethodBindTRC() */void MethodBindTRC<AudioStreamPlayer3D::DopplerTracking>::~MethodBindTRC(MethodBindTRC<AudioStreamPlayer3D::DopplerTracking> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011c948;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<AudioStreamPlayer3D::DopplerTracking>::~MethodBindTRC() */void MethodBindTRC<AudioStreamPlayer3D::DopplerTracking>::~MethodBindTRC(MethodBindTRC<AudioStreamPlayer3D::DopplerTracking> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011c948;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<bool>::~MethodBindT() */void MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011c708;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<bool>::~MethodBindT() */void MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011c708;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<bool>::~MethodBindTRC() */void MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011c588;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<bool>::~MethodBindTRC() */void MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011c588;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<int>::~MethodBindT() */void MethodBindT<int>::~MethodBindT(MethodBindT<int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011c9a8;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<int>::~MethodBindT() */void MethodBindT<int>::~MethodBindT(MethodBindT<int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011c9a8;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<int>::~MethodBindTRC() */void MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011ca08;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<int>::~MethodBindTRC() */void MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011ca08;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<float>::~MethodBindTRC() */void MethodBindTRC<float>::~MethodBindTRC(MethodBindTRC<float> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011c4c8;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<float>::~MethodBindTRC() */void MethodBindTRC<float>::~MethodBindTRC(MethodBindTRC<float> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011c4c8;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTR<Ref<AudioStreamPlayback>>::~MethodBindTR() */void MethodBindTR<Ref<AudioStreamPlayback>>::~MethodBindTR(MethodBindTR<Ref<AudioStreamPlayback>> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011ca68;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTR<Ref<AudioStreamPlayback>>::~MethodBindTR() */void MethodBindTR<Ref<AudioStreamPlayback>>::~MethodBindTR(MethodBindTR<Ref<AudioStreamPlayback>> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011ca68;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<AudioServer::PlaybackType>::~MethodBindT() */void MethodBindT<AudioServer::PlaybackType>::~MethodBindT(MethodBindT<AudioServer::PlaybackType> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011cac8;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<AudioServer::PlaybackType>::~MethodBindT() */void MethodBindT<AudioServer::PlaybackType>::~MethodBindT(MethodBindT<AudioServer::PlaybackType> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011cac8;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<AudioServer::PlaybackType>::~MethodBindTRC() */void MethodBindTRC<AudioServer::PlaybackType>::~MethodBindTRC(MethodBindTRC<AudioServer::PlaybackType> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011cb28;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<AudioServer::PlaybackType>::~MethodBindTRC() */void MethodBindTRC<AudioServer::PlaybackType>::~MethodBindTRC(MethodBindTRC<AudioServer::PlaybackType> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011cb28;
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
/* AudioStreamPlayer3D::_setv(StringName const&, Variant const&) */void AudioStreamPlayer3D::_setv(StringName *param_1, Variant *param_2) {
   AudioStreamPlayerInternal::set(*(StringName**)( param_1 + 0x528 ), param_2);
   return;
}
/* AudioStreamPlayer3D::_getv(StringName const&, Variant&) const */void AudioStreamPlayer3D::_getv(StringName *param_1, Variant *param_2) {
   AudioStreamPlayerInternal::get(*(StringName**)( param_1 + 0x528 ), param_2);
   return;
}
/* AudioStreamPlayer3D::_property_get_revertv(StringName const&, Variant&) const */undefined8 AudioStreamPlayer3D::_property_get_revertv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   if ((code*)_GLOBAL_OFFSET_TABLE_ != Object::_property_get_revert) {
      uVar1 = Node3D::_property_get_revert(param_1, param_2);
      return uVar1;
   }

   return 0;
}
/* AudioStreamPlayer3D::_property_can_revertv(StringName const&) const */undefined8 AudioStreamPlayer3D::_property_can_revertv(StringName *param_1) {
   undefined8 uVar1;
   if ((code*)PTR__property_can_revert_00123008 != Object::_property_can_revert) {
      uVar1 = Node3D::_property_can_revert(param_1);
      return uVar1;
   }

   return 0;
}
/* CowData<Spcap::Speaker>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<Spcap::Speaker>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* AudioStreamPlayer3D::_bind_compatibility_methods() [clone .cold] */void AudioStreamPlayer3D::_bind_compatibility_methods(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* AudioStreamPlayer3D::_bind_methods() [clone .cold] */void AudioStreamPlayer3D::_bind_methods(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<AudioFrame>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<AudioFrame>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* Error CowData<AudioFrame>::resize<false>(long) [clone .isra.0] [clone .cold] */void CowData<AudioFrame>::resize<false>(long param_1) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void FUN_0010a1ee(void) {
   code *pcVar1;
   _DAT_00000000 = 0;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<Ref<AudioStreamPlayback> >::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<Ref<AudioStreamPlayback>>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CallableCustomMethodPointer<AudioStreamPlayer3D, void, float>::get_object() const */undefined8 CallableCustomMethodPointer<AudioStreamPlayer3D,void,float>::get_object(CallableCustomMethodPointer<AudioStreamPlayer3D,void,float> *this) {
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
         goto LAB_0010a2fd;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] != 0) {
         uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
         goto LAB_0010a2fd;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   uVar2 = 0;
   LAB_0010a2fd:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
/* CallableCustomMethodPointer<AudioStreamPlayer3D, void>::get_object() const */undefined8 CallableCustomMethodPointer<AudioStreamPlayer3D,void>::get_object(CallableCustomMethodPointer<AudioStreamPlayer3D,void> *this) {
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
         goto LAB_0010a3fd;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] != 0) {
         uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
         goto LAB_0010a3fd;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   uVar2 = 0;
   LAB_0010a3fd:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
/* AudioStreamPlayer3D::_validate_propertyv(PropertyInfo&) const */void AudioStreamPlayer3D::_validate_propertyv(PropertyInfo *param_1) {
   Node::_validate_property(param_1);
   if ((code*)PTR__validate_property_00123010 != Node::_validate_property) {
      Node3D::_validate_property(param_1);
   }

   AudioStreamPlayerInternal::validate_property(*(PropertyInfo**)( param_1 + 0x528 ));
   return;
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
/* AudioStreamPlayer3D::_get_class_namev() const */undefined8 *AudioStreamPlayer3D::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_0010a573:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_0010a573;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "AudioStreamPlayer3D");
         goto LAB_0010a5de;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "AudioStreamPlayer3D");
   LAB_0010a5de:return &_get_class_namev();
}
/* String::~String() */void String::~String(String *this) {
   long *plVar1;
   long lVar2;
   if (*(long*)this != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)this + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)this;
         *(undefined8*)this = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
         return;
      }

   }

   return;
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
/* AudioStreamPlayer3D::get_class() const */void AudioStreamPlayer3D::get_class(void) {
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
   local_48 = &_LC13;
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
         StringName::StringName((StringName*)&local_48, (String*)( puVar3 + 8 ), false);
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

         goto joined_r0x0010a96c;
      }

   }

   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x0010a96c:local_58 = lVar2;
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
   local_48 = &_LC13;
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
         StringName::StringName((StringName*)&local_48, (String*)( puVar3 + 8 ), false);
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

         goto joined_r0x0010aaec;
      }

   }

   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x0010aaec:local_58 = lVar2;
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
   local_48 = &_LC13;
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
         StringName::StringName((StringName*)&local_48, (String*)( puVar3 + 8 ), false);
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

         goto joined_r0x0010ac6c;
      }

   }

   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x0010ac6c:local_58 = lVar2;
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
/* MethodBindTR<bool>::_gen_argument_type_info(int) const */undefined4 *MethodBindTR<bool>::_gen_argument_type_info(int param_1) {
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
   local_48 = &_LC13;
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
         StringName::StringName((StringName*)&local_48, (String*)( puVar3 + 8 ), false);
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

         goto joined_r0x0010adec;
      }

   }

   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x0010adec:local_58 = lVar2;
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
/* MethodBindTRC<Ref<AudioStream>>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<Ref<AudioStream>>::_gen_argument_type_info(int param_1) {
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
   local_48 = "AudioStream";
   local_40 = 0xb;
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
         goto LAB_0010aef0;
      }

   }

   StringName::StringName((StringName*)&local_48, (String*)( puVar3 + 8 ), false);
   if (*(char**)( puVar3 + 4 ) == local_48) {
      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }
 else {
      StringName::unref();
      *(char**)( puVar3 + 4 ) = local_48;
   }

   LAB_0010aef0:lVar2 = local_58;
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
/* MethodBindTRC<StringName>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<StringName>::_gen_argument_type_info(int param_1) {
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
   local_48 = &_LC13;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   *puVar3 = 0x15;
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
         StringName::StringName((StringName*)&local_48, (String*)( puVar3 + 8 ), false);
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

         goto joined_r0x0010b10c;
      }

   }

   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x0010b10c:local_58 = lVar2;
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
/* MethodBindTR<Ref<AudioStreamPlayback>>::_gen_argument_type_info(int) const */undefined4 *MethodBindTR<Ref<AudioStreamPlayback>>::_gen_argument_type_info(int param_1) {
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
   local_48 = "AudioStreamPlayback";
   local_40 = 0x13;
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
         goto LAB_0010b220;
      }

   }

   StringName::StringName((StringName*)&local_48, (String*)( puVar3 + 8 ), false);
   if (*(char**)( puVar3 + 4 ) == local_48) {
      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }
 else {
      StringName::unref();
      *(char**)( puVar3 + 4 ) = local_48;
   }

   LAB_0010b220:lVar2 = local_58;
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
   local_48 = &_LC13;
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
         StringName::StringName((StringName*)&local_48, (String*)( puVar3 + 8 ), false);
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

         goto joined_r0x0010b43c;
      }

   }

   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x0010b43c:local_58 = lVar2;
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
/* MethodBindTR<float>::_gen_argument_type_info(int) const */undefined4 *MethodBindTR<float>::_gen_argument_type_info(int param_1) {
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
   local_48 = &_LC13;
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
         StringName::StringName((StringName*)&local_48, (String*)( puVar3 + 8 ), false);
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

         goto joined_r0x0010b5bc;
      }

   }

   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x0010b5bc:local_58 = lVar2;
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
/* PropertyListHelper::~PropertyListHelper() */void PropertyListHelper::~PropertyListHelper(PropertyListHelper *this) {
   long *plVar1;
   uint uVar2;
   long lVar3;
   long lVar4;
   void *pvVar5;
   pvVar5 = *(void**)( this + 0x18 );
   if (pvVar5 != (void*)0x0) {
      if (*(int*)( this + 0x3c ) != 0) {
         uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x38 ) * 4 );
         if (uVar2 == 0) {
            *(undefined4*)( this + 0x3c ) = 0;
            *(undefined1(*) [16])( this + 0x28 ) = (undefined1[16])0x0;
         }
 else {
            lVar4 = 0;
            do {
               if (*(int*)( *(long*)( this + 0x20 ) + lVar4 ) != 0) {
                  pvVar5 = *(void**)( (long)pvVar5 + lVar4 * 2 );
                  *(int*)( *(long*)( this + 0x20 ) + lVar4 ) = 0;
                  if (Variant::needs_deinit[*(int*)( (long)pvVar5 + 0x48 )] != '\0') {
                     Variant::_clear_internal();
                  }

                  if (*(long*)( (long)pvVar5 + 0x38 ) != 0) {
                     LOCK();
                     plVar1 = (long*)( *(long*)( (long)pvVar5 + 0x38 ) + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        lVar3 = *(long*)( (long)pvVar5 + 0x38 );
                        *(undefined8*)( (long)pvVar5 + 0x38 ) = 0;
                        Memory::free_static((void*)( lVar3 + -0x10 ), false);
                     }

                  }

                  if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar5 + 0x28 ) != 0 )) {
                     StringName::unref();
                  }

                  if (*(long*)( (long)pvVar5 + 0x20 ) != 0) {
                     LOCK();
                     plVar1 = (long*)( *(long*)( (long)pvVar5 + 0x20 ) + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        lVar3 = *(long*)( (long)pvVar5 + 0x20 );
                        *(undefined8*)( (long)pvVar5 + 0x20 ) = 0;
                        Memory::free_static((void*)( lVar3 + -0x10 ), false);
                     }

                  }

                  if (*(long*)( (long)pvVar5 + 0x10 ) != 0) {
                     LOCK();
                     plVar1 = (long*)( *(long*)( (long)pvVar5 + 0x10 ) + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        lVar3 = *(long*)( (long)pvVar5 + 0x10 );
                        *(undefined8*)( (long)pvVar5 + 0x10 ) = 0;
                        Memory::free_static((void*)( lVar3 + -0x10 ), false);
                     }

                  }

                  Memory::free_static(pvVar5, false);
                  pvVar5 = *(void**)( this + 0x18 );
                  *(undefined8*)( (long)pvVar5 + lVar4 * 2 ) = 0;
               }

               lVar4 = lVar4 + 4;
            }
 while ( lVar4 != (ulong)uVar2 << 2 );
            *(undefined4*)( this + 0x3c ) = 0;
            *(undefined1(*) [16])( this + 0x28 ) = (undefined1[16])0x0;
            if (pvVar5 == (void*)0x0) goto LAB_0010b754;
         }

      }

      Memory::free_static(pvVar5, false);
      Memory::free_static(*(void**)( this + 0x20 ), false);
   }

   LAB_0010b754:if (*(long*)this != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)this + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar4 = *(long*)this;
         *(undefined8*)this = 0;
         Memory::free_static((void*)( lVar4 + -0x10 ), false);
         return;
      }

   }

   return;
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
      StringName::StringName((StringName*)&local_48, (String*)( this + 0x20 ), false);
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
/* Object::is_class(String const&) const */ulong Object::is_class(Object *this, String *param_1) {
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
   lVar2 = *(long*)( this + 8 );
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   do {
      if (lVar2 == 0) {
         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar7 = String::operator ==(param_1, "Object");
            return uVar7;
         }

         LAB_0010bb4f:/* WARNING: Subroutine does not return */__stack_chk_fail();
      }

      lVar3 = *(long*)( lVar2 + 0x20 );
      if (lVar3 == 0) {
         local_50 = 0;
      }
 else {
         __s = *(char**)( lVar3 + 8 );
         local_50 = 0;
         if (__s == (char*)0x0) {
            plVar1 = (long*)( *(long*)( lVar3 + 0x10 ) + -0x10 );
            if (*(long*)( lVar3 + 0x10 ) != 0) {
               do {
                  lVar4 = *plVar1;
                  if (lVar4 == 0) goto LAB_0010ba63;
                  LOCK();
                  lVar6 = *plVar1;
                  bVar8 = lVar4 == lVar6;
                  if (bVar8) {
                     *plVar1 = lVar4 + 1;
                     lVar6 = lVar4;
                  }

                  UNLOCK();
               }
 while ( !bVar8 );
               if (lVar6 != -1) {
                  local_50 = *(long*)( lVar3 + 0x10 );
               }

            }

         }
 else {
            local_40 = strlen(__s);
            local_48 = __s;
            String::parse_latin1((StrRange*)&local_50);
         }

      }

      LAB_0010ba63:uVar5 = String::operator ==(param_1, (String*)&local_50);
      lVar3 = local_50;
      if (local_50 != 0) {
         LOCK();
         plVar1 = (long*)( local_50 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_50 = 0;
            Memory::free_static((void*)( lVar3 + -0x10 ), false);
         }

      }

      if ((char)uVar5 != '\0') {
         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return (ulong)uVar5;
         }

         goto LAB_0010bb4f;
      }

      lVar2 = *(long*)( lVar2 + 8 );
   }
 while ( true );
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<StringName, Vector<AudioFrame>, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   Vector<AudioFrame> > > >::operator[](StringName const&) */undefined8 * __thiscallHashMap<StringName,Vector<AudioFrame>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Vector<AudioFrame>>>>::operator [](HashMap<StringName,Vector<AudioFrame>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Vector<AudioFrame>>>> * this, StringName * param_1) * plVar1 ;uint *puVar2undefined8 *puVar3void *pvVar4void *__sundefined8 *puVar5long lVar6undefined1 auVar7[16]undefined1 auVar8[16]undefined1 auVar9[16]undefined1 auVar10[16]undefined1 auVar11[16]undefined1 auVar12[16]undefined1 auVar13[16]undefined1 auVar14[16]undefined1 auVar15[16]undefined1 auVar16[16]undefined1 auVar17[16]undefined1 auVar18[16]undefined1 auVar19[16]undefined1 auVar20[16]undefined1 auVar21[16]undefined1 auVar22[16]undefined1 auVar23[16]undefined1 auVar24[16]undefined1 auVar25[16]undefined1 auVar26[16]undefined1 auVar27[16]undefined1 auVar28[16]undefined1 auVar29[16]undefined1 auVar30[16]undefined1 auVar31[16]undefined1 auVar32[16]undefined1 auVar33[16]undefined1 auVar34[16]undefined1 auVar35[16]undefined1 auVar36[16]undefined1 auVar37[16]undefined1 auVar38[16]uint uVar39uint uVar40uint uVar41ulong uVar42undefined8 uVar43void *__s_00undefined8 *puVar44void *pvVar45ulong uVar46int iVar47long lVar48long lVar49long lVar50ulong uVar51undefined8 uVar52uint uVar53uint uVar54uint uVar55long lVar56undefined8 *puVar57long in_FS_OFFSETlong local_70undefined1 local_68[16]long local_58[2]long local_48long local_40lVar56 = *(long*)( this + 8 );local_40 = *(long*)( in_FS_OFFSET + 0x28 );uVar40 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );uVar42 = CONCAT44(0, uVar40);if (lVar56 == 0) {
   LAB_0010c628:local_70 = 0;
   uVar46 = uVar42 * 4;
   uVar51 = uVar42 * 8;
   uVar43 = Memory::alloc_static(uVar46, false);
   *(undefined8*)( this + 0x10 ) = uVar43;
   pvVar45 = (void*)Memory::alloc_static(uVar51, false);
   *(void**)( this + 8 ) = pvVar45;
   if ((int)uVar42 != 0) {
      pvVar4 = *(void**)( this + 0x10 );
      if (( pvVar4 < (void*)( (long)pvVar45 + uVar51 ) ) && ( pvVar45 < (void*)( (long)pvVar4 + uVar46 ) )) {
         uVar46 = 0;
         do {
            *(undefined4*)( (long)pvVar4 + uVar46 * 4 ) = 0;
            *(undefined8*)( (long)pvVar45 + uVar46 * 8 ) = 0;
            uVar46 = uVar46 + 1;
         }
 while ( uVar42 != uVar46 );
      }
 else {
         memset(pvVar4, 0, uVar46);
         memset(pvVar45, 0, uVar51);
      }

      LAB_0010c029:iVar47 = *(int*)( this + 0x2c );
      if (iVar47 != 0) {
         LAB_0010c035:uVar40 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
         uVar46 = CONCAT44(0, uVar40);
         lVar56 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
         if (*(long*)param_1 == 0) {
            uVar41 = StringName::get_empty_hash();
         }
 else {
            uVar41 = *(uint*)( *(long*)param_1 + 0x20 );
         }

         if (uVar41 == 0) {
            uVar41 = 1;
         }

         uVar55 = 0;
         auVar11._8_8_ = 0;
         auVar11._0_8_ = (ulong)uVar41 * lVar56;
         auVar27._8_8_ = 0;
         auVar27._0_8_ = uVar46;
         lVar49 = SUB168(auVar11 * auVar27, 8);
         uVar53 = *(uint*)( *(long*)( this + 0x10 ) + lVar49 * 4 );
         uVar54 = SUB164(auVar11 * auVar27, 8);
         if (uVar53 != 0) {
            do {
               if (( uVar41 == uVar53 ) && ( *(long*)( *(long*)( *(long*)( this + 8 ) + lVar49 * 8 ) + 0x10 ) == *(long*)param_1 )) {
                  puVar44 = *(undefined8**)( *(long*)( this + 8 ) + (ulong)uVar54 * 8 );
                  if (puVar44[4] != 0) {
                     CowData<AudioFrame>::_ref((CowData<AudioFrame>*)( puVar44 + 4 ), (CowData*)&local_70);
                     puVar44 = *(undefined8**)( *(long*)( this + 8 ) + (ulong)uVar54 * 8 );
                  }

                  goto LAB_0010bfdc;
               }

               uVar55 = uVar55 + 1;
               auVar12._8_8_ = 0;
               auVar12._0_8_ = ( ulong )(uVar54 + 1) * lVar56;
               auVar28._8_8_ = 0;
               auVar28._0_8_ = uVar46;
               lVar49 = SUB168(auVar12 * auVar28, 8);
               uVar53 = *(uint*)( *(long*)( this + 0x10 ) + lVar49 * 4 );
               uVar54 = SUB164(auVar12 * auVar28, 8);
            }
 while ( ( uVar53 != 0 ) && ( auVar13._8_8_ = 0 ),auVar13._0_8_ = (ulong)uVar53 * lVar56,auVar29._8_8_ = 0,auVar29._0_8_ = uVar46,auVar14._8_8_ = 0,auVar14._0_8_ = ( ulong )(( uVar40 + uVar54 ) - SUB164(auVar13 * auVar29, 8)) * lVar56,auVar30._8_8_ = 0,auVar30._0_8_ = uVar46,uVar55 <= SUB164(auVar14 * auVar30, 8) );
         }

         iVar47 = *(int*)( this + 0x2c );
      }

      goto LAB_0010c13c;
   }

   iVar47 = *(int*)( this + 0x2c );
   if (pvVar45 == (void*)0x0) goto LAB_0010c13c;
   if (*(int*)( this + 0x2c ) != 0) goto LAB_0010c035;
   LAB_0010c162:uVar40 = *(uint*)( this + 0x28 );
   if (uVar40 == 0x1c) {
      _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
      puVar44 = (undefined8*)0x0;
      goto LAB_0010bfdc;
   }

   uVar42 = ( ulong )(uVar40 + 1);
   *(undefined4*)( this + 0x2c ) = 0;
   uVar41 = *(uint*)( hash_table_size_primes + (ulong)uVar40 * 4 );
   if (uVar40 + 1 < 2) {
      uVar42 = 2;
   }

   uVar40 = *(uint*)( hash_table_size_primes + uVar42 * 4 );
   uVar51 = (ulong)uVar40;
   *(int*)( this + 0x28 ) = (int)uVar42;
   pvVar45 = *(void**)( this + 8 );
   uVar42 = uVar51 * 4;
   uVar46 = uVar51 * 8;
   pvVar4 = *(void**)( this + 0x10 );
   uVar43 = Memory::alloc_static(uVar42, false);
   *(undefined8*)( this + 0x10 ) = uVar43;
   __s_00 = (void*)Memory::alloc_static(uVar46, false);
   *(void**)( this + 8 ) = __s_00;
   if (uVar40 != 0) {
      __s = *(void**)( this + 0x10 );
      if (( __s < (void*)( (long)__s_00 + uVar46 ) ) && ( __s_00 < (void*)( (long)__s + uVar42 ) )) {
         uVar42 = 0;
         do {
            *(undefined4*)( (long)__s + uVar42 * 4 ) = 0;
            *(undefined8*)( (long)__s_00 + uVar42 * 8 ) = 0;
            uVar42 = uVar42 + 1;
         }
 while ( uVar42 != uVar51 );
      }
 else {
         memset(__s, 0, uVar42);
         memset(__s_00, 0, uVar46);
      }

   }

   if (uVar41 != 0) {
      uVar42 = 0;
      do {
         uVar40 = *(uint*)( (long)pvVar4 + uVar42 * 4 );
         if (uVar40 != 0) {
            lVar56 = *(long*)( this + 0x10 );
            uVar55 = 0;
            uVar53 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
            uVar46 = CONCAT44(0, uVar53);
            lVar49 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
            auVar15._8_8_ = 0;
            auVar15._0_8_ = (ulong)uVar40 * lVar49;
            auVar31._8_8_ = 0;
            auVar31._0_8_ = uVar46;
            lVar48 = SUB168(auVar15 * auVar31, 8);
            puVar2 = (uint*)( lVar56 + lVar48 * 4 );
            iVar47 = SUB164(auVar15 * auVar31, 8);
            uVar54 = *puVar2;
            uVar43 = *(undefined8*)( (long)pvVar45 + uVar42 * 8 );
            while (uVar54 != 0) {
               auVar16._8_8_ = 0;
               auVar16._0_8_ = (ulong)uVar54 * lVar49;
               auVar32._8_8_ = 0;
               auVar32._0_8_ = uVar46;
               auVar17._8_8_ = 0;
               auVar17._0_8_ = ( ulong )(( uVar53 + iVar47 ) - SUB164(auVar16 * auVar32, 8)) * lVar49;
               auVar33._8_8_ = 0;
               auVar33._0_8_ = uVar46;
               uVar39 = SUB164(auVar17 * auVar33, 8);
               uVar52 = uVar43;
               if (uVar39 < uVar55) {
                  *puVar2 = uVar40;
                  puVar44 = (undefined8*)( (long)__s_00 + lVar48 * 8 );
                  uVar52 = *puVar44;
                  *puVar44 = uVar43;
                  uVar40 = uVar54;
                  uVar55 = uVar39;
               }

               uVar55 = uVar55 + 1;
               auVar18._8_8_ = 0;
               auVar18._0_8_ = ( ulong )(iVar47 + 1) * lVar49;
               auVar34._8_8_ = 0;
               auVar34._0_8_ = uVar46;
               lVar48 = SUB168(auVar18 * auVar34, 8);
               puVar2 = (uint*)( lVar56 + lVar48 * 4 );
               iVar47 = SUB164(auVar18 * auVar34, 8);
               uVar43 = uVar52;
               uVar54 = *puVar2;
            }
;
            *(undefined8*)( (long)__s_00 + lVar48 * 8 ) = uVar43;
            *puVar2 = uVar40;
            *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
         }

         uVar42 = uVar42 + 1;
      }
 while ( uVar41 != uVar42 );
      Memory::free_static(pvVar45, false);
      Memory::free_static(pvVar4, false);
   }

}
 else {
   if (*(int*)( this + 0x2c ) != 0) {
      lVar49 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
      if (*(long*)param_1 == 0) {
         uVar41 = StringName::get_empty_hash();
         lVar56 = *(long*)( this + 8 );
      }
 else {
         uVar41 = *(uint*)( *(long*)param_1 + 0x20 );
      }

      if (uVar41 == 0) {
         uVar41 = 1;
      }

      auVar7._8_8_ = 0;
      auVar7._0_8_ = (ulong)uVar41 * lVar49;
      auVar23._8_8_ = 0;
      auVar23._0_8_ = uVar42;
      lVar48 = SUB168(auVar7 * auVar23, 8);
      uVar53 = *(uint*)( *(long*)( this + 0x10 ) + lVar48 * 4 );
      uVar54 = SUB164(auVar7 * auVar23, 8);
      if (uVar53 != 0) {
         uVar55 = 0;
         do {
            if (( uVar53 == uVar41 ) && ( *(long*)( *(long*)( lVar56 + lVar48 * 8 ) + 0x10 ) == *(long*)param_1 )) {
               puVar44 = *(undefined8**)( lVar56 + (ulong)uVar54 * 8 );
               goto LAB_0010bfdc;
            }

            uVar55 = uVar55 + 1;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = ( ulong )(uVar54 + 1) * lVar49;
            auVar24._8_8_ = 0;
            auVar24._0_8_ = uVar42;
            lVar48 = SUB168(auVar8 * auVar24, 8);
            uVar53 = *(uint*)( *(long*)( this + 0x10 ) + lVar48 * 4 );
            uVar54 = SUB164(auVar8 * auVar24, 8);
         }
 while ( ( uVar53 != 0 ) && ( auVar9._8_8_ = 0 ),auVar9._0_8_ = (ulong)uVar53 * lVar49,auVar25._8_8_ = 0,auVar25._0_8_ = uVar42,auVar10._8_8_ = 0,auVar10._0_8_ = ( ulong )(( uVar54 + uVar40 ) - SUB164(auVar9 * auVar25, 8)) * lVar49,auVar26._8_8_ = 0,auVar26._0_8_ = uVar42,uVar55 <= SUB164(auVar10 * auVar26, 8) );
      }

      local_70 = 0;
      uVar42 = ( ulong ) * (uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
      if (lVar56 == 0) goto LAB_0010c628;
      goto LAB_0010c029;
   }

   local_70 = 0;
   iVar47 = 0;
   LAB_0010c13c:if ((float)uVar42 * __LC53 < (float)( iVar47 + 1 )) goto LAB_0010c162;
}
local_68 = (undefined1[16])0x0;StringName::StringName((StringName*)local_58, param_1);local_48 = 0;puVar44 = (undefined8*)operator_new(0x28, "");*puVar44 = local_68._0_8_;puVar44[1] = local_68._8_8_;StringName::StringName((StringName*)( puVar44 + 2 ), (StringName*)local_58);puVar44[4] = 0;if (( local_48 == 0 ) || ( CowData<AudioFrame>::_ref((CowData<AudioFrame>*)( puVar44 + 4 ), (CowData*)&local_48),lVar56 = local_48,local_48 == 0 )) {
   lVar49 = 0;
}
 else {
   LOCK();
   plVar1 = (long*)( local_48 + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   lVar49 = local_70;
   if (*plVar1 == 0) {
      local_48 = 0;
      Memory::free_static((void*)( lVar56 + -0x10 ), false);
      lVar49 = local_70;
   }

}
if (( StringName::configured != '\0' ) && ( local_58[0] != 0 )) {
   StringName::unref();
}
puVar5 = *(undefined8**)( this + 0x20 );if (puVar5 == (undefined8*)0x0) {
   *(undefined8**)( this + 0x18 ) = puVar44;
}
 else {
   *puVar5 = puVar44;
   puVar44[1] = puVar5;
}
*(undefined8**)( this + 0x20 ) = puVar44;if (*(long*)param_1 == 0) {
   uVar40 = StringName::get_empty_hash();
}
 else {
   uVar40 = *(uint*)( *(long*)param_1 + 0x20 );
}
lVar56 = *(long*)( this + 0x10 );if (uVar40 == 0) {
   uVar40 = 1;
}
uVar42 = (ulong)uVar40;uVar54 = 0;uVar41 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );uVar46 = CONCAT44(0, uVar41);lVar48 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );auVar19._8_8_ = 0;auVar19._0_8_ = uVar42 * lVar48;auVar35._8_8_ = 0;auVar35._0_8_ = uVar46;lVar50 = SUB168(auVar19 * auVar35, 8);lVar6 = *(long*)( this + 8 );puVar2 = (uint*)( lVar56 + lVar50 * 4 );iVar47 = SUB164(auVar19 * auVar35, 8);uVar53 = *puVar2;puVar5 = puVar44;while (uVar53 != 0) {
   auVar20._8_8_ = 0;
   auVar20._0_8_ = (ulong)uVar53 * lVar48;
   auVar36._8_8_ = 0;
   auVar36._0_8_ = uVar46;
   auVar21._8_8_ = 0;
   auVar21._0_8_ = ( ulong )(( uVar41 + iVar47 ) - SUB164(auVar20 * auVar36, 8)) * lVar48;
   auVar37._8_8_ = 0;
   auVar37._0_8_ = uVar46;
   uVar40 = SUB164(auVar21 * auVar37, 8);
   puVar57 = puVar5;
   if (uVar40 < uVar54) {
      *puVar2 = (uint)uVar42;
      uVar42 = (ulong)uVar53;
      puVar3 = (undefined8*)( lVar6 + lVar50 * 8 );
      puVar57 = (undefined8*)*puVar3;
      *puVar3 = puVar5;
      uVar54 = uVar40;
   }

   uVar40 = (uint)uVar42;
   uVar54 = uVar54 + 1;
   auVar22._8_8_ = 0;
   auVar22._0_8_ = ( ulong )(iVar47 + 1) * lVar48;
   auVar38._8_8_ = 0;
   auVar38._0_8_ = uVar46;
   lVar50 = SUB168(auVar22 * auVar38, 8);
   puVar2 = (uint*)( lVar56 + lVar50 * 4 );
   iVar47 = SUB164(auVar22 * auVar38, 8);
   puVar5 = puVar57;
   uVar53 = *puVar2;
}
;*(undefined8**)( lVar6 + lVar50 * 8 ) = puVar5;*puVar2 = uVar40;*(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;if (lVar49 != 0) {
   LOCK();
   plVar1 = (long*)( lVar49 + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   if (*plVar1 == 0) {
      Memory::free_static((void*)( local_70 + -0x10 ), false);
   }

}
LAB_0010bfdc:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return puVar44 + 3;
}
/* WARNING: Subroutine does not return */__stack_chk_fail();}/* Ref<AudioStreamPlayback>::unref() */void Ref<AudioStreamPlayback>::unref(Ref<AudioStreamPlayback> *this) {
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashSet<Camera3D*, HashMapHasherDefault, HashMapComparatorDefault<Camera3D*> >::insert(Camera3D*
   const&) */undefined1[16];HashSet<Camera3D*,HashMapHasherDefault,HashMapComparatorDefault<Camera3D*>>::insert(Camera3D **param_1) {
   uint *puVar1;
   long lVar2;
   long lVar3;
   void *pvVar4;
   void *pvVar5;
   long lVar6;
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   undefined1 auVar11[16];
   undefined1 auVar12[16];
   undefined1 auVar13[16];
   undefined1 auVar14[16];
   undefined1 auVar15[16];
   undefined1 auVar16[16];
   undefined1 auVar17[16];
   undefined1 auVar18[16];
   undefined1 auVar19[16];
   undefined1 auVar20[16];
   undefined1 auVar21[16];
   undefined1 auVar22[16];
   undefined1 auVar23[16];
   undefined1 auVar24[16];
   undefined1 auVar25[16];
   undefined1 auVar26[16];
   undefined1 auVar27[16];
   undefined1 auVar28[16];
   undefined1 auVar29[16];
   undefined1 auVar30[16];
   uint uVar31;
   uint uVar32;
   ulong uVar33;
   long lVar34;
   int iVar35;
   long *in_RDX;
   long lVar36;
   long *in_RSI;
   uint uVar37;
   ulong uVar38;
   uint uVar39;
   ulong uVar40;
   undefined4 uVar41;
   ulong uVar42;
   ulong uVar43;
   uint uVar44;
   undefined1 auVar45[16];
   ulong uStack_98;
   Camera3D *local_88;
   ulong local_70;
   uVar32 = *(uint*)( in_RSI + 4 );
   uVar31 = *(uint*)( hash_table_size_primes + (ulong)uVar32 * 4 );
   local_88 = (Camera3D*)*in_RSI;
   if (local_88 == (Camera3D*)0x0) {
      uVar33 = (ulong)uVar31 * 4;
      lVar34 = Memory::alloc_static(uVar33, false);
      in_RSI[3] = lVar34;
      lVar34 = Memory::alloc_static((ulong)uVar31 * 8, false);
      *in_RSI = lVar34;
      lVar34 = Memory::alloc_static(uVar33, false);
      in_RSI[2] = lVar34;
      lVar34 = Memory::alloc_static(uVar33, false);
      in_RSI[1] = lVar34;
      if (uVar31 != 0) {
         memset((void*)in_RSI[3], 0, uVar33);
      }

      uVar44 = *(uint*)( (long)in_RSI + 0x24 );
      uVar32 = *(uint*)( in_RSI + 4 );
      lVar34 = *in_RDX;
      local_88 = (Camera3D*)*in_RSI;
      if (local_88 != (Camera3D*)0x0) goto LAB_0010c86f;
   }
 else {
      uVar44 = *(uint*)( (long)in_RSI + 0x24 );
      lVar34 = *in_RDX;
      LAB_0010c86f:if (uVar44 != 0) {
         uVar43 = CONCAT44(0, *(uint*)( hash_table_size_primes + (ulong)uVar32 * 4 ));
         lVar3 = *(long*)( hash_table_size_primes_inv + (ulong)uVar32 * 8 );
         uVar33 = lVar34 * 0x3ffff - 1;
         uVar33 = ( uVar33 ^ uVar33 >> 0x1f ) * 0x15;
         uVar33 = ( uVar33 ^ uVar33 >> 0xb ) * 0x41;
         uVar33 = uVar33 >> 0x16 ^ uVar33;
         uVar42 = uVar33 & 0xffffffff;
         if ((int)uVar33 == 0) {
            uVar42 = 1;
         }

         auVar7._8_8_ = 0;
         auVar7._0_8_ = uVar42 * lVar3;
         auVar19._8_8_ = 0;
         auVar19._0_8_ = uVar43;
         lVar36 = SUB168(auVar7 * auVar19, 8);
         uVar39 = *(uint*)( in_RSI[3] + lVar36 * 4 );
         uVar33 = (ulong)uVar39;
         iVar35 = SUB164(auVar7 * auVar19, 8);
         if (uVar39 != 0) {
            uVar39 = 0;
            do {
               if ((int)uVar42 == (int)uVar33) {
                  uVar37 = *(uint*)( in_RSI[1] + lVar36 * 4 );
                  uStack_98 = (ulong)uVar37;
                  if (*(long*)( local_88 + uStack_98 * 8 ) == lVar34) goto LAB_0010cd11;
               }

               uVar39 = uVar39 + 1;
               auVar8._8_8_ = 0;
               auVar8._0_8_ = ( ulong )(iVar35 + 1) * lVar3;
               auVar20._8_8_ = 0;
               auVar20._0_8_ = uVar43;
               lVar36 = SUB168(auVar8 * auVar20, 8);
               uVar37 = *(uint*)( in_RSI[3] + lVar36 * 4 );
               uVar33 = (ulong)uVar37;
               iVar35 = SUB164(auVar8 * auVar20, 8);
            }
 while ( ( uVar37 != 0 ) && ( auVar9._8_8_ = 0 ),auVar9._0_8_ = uVar33 * lVar3,auVar21._8_8_ = 0,auVar21._0_8_ = uVar43,auVar10._8_8_ = 0,auVar10._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + (ulong)uVar32 * 4 ) + iVar35 ) - SUB164(auVar9 * auVar21, 8)) * lVar3,auVar22._8_8_ = 0,auVar22._0_8_ = uVar43,uVar39 <= SUB164(auVar10 * auVar22, 8) );
         }

      }

   }

   if ((float)uVar31 * __LC53 < (float)( uVar44 + 1 )) {
      if (uVar32 == 0x1c) {
         uStack_98 = 0;
         _err_print_error("_insert", "./core/templates/hash_set.h", 0xbf, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: -1", "Hash table maximum capacity reached, aborting insertion.", 0);
         uVar44 = *(uint*)( (long)in_RSI + 0x24 );
         uVar37 = 0xffffffff;
         local_88 = (Camera3D*)*in_RSI;
         goto LAB_0010cd11;
      }

      uVar33 = ( ulong )(uVar32 + 1);
      if (uVar32 + 1 < 2) {
         uVar33 = 2;
      }

      uVar31 = *(uint*)( hash_table_size_primes + uVar33 * 4 );
      *(int*)( in_RSI + 4 ) = (int)uVar33;
      pvVar4 = (void*)in_RSI[3];
      uVar33 = (ulong)uVar31 * 4;
      pvVar5 = (void*)in_RSI[2];
      lVar34 = Memory::alloc_static(uVar33, false);
      in_RSI[3] = lVar34;
      lVar34 = Memory::realloc_static((void*)*in_RSI, (ulong)uVar31 * 8, false);
      *in_RSI = lVar34;
      lVar34 = Memory::alloc_static(uVar33, false);
      in_RSI[2] = lVar34;
      lVar34 = Memory::realloc_static((void*)in_RSI[1], uVar33, false);
      in_RSI[1] = lVar34;
      if (uVar31 != 0) {
         memset((void*)in_RSI[3], 0, uVar33);
      }

      if (*(int*)( (long)in_RSI + 0x24 ) != 0) {
         lVar3 = in_RSI[2];
         lVar36 = in_RSI[3];
         local_70 = 0;
         do {
            uVar39 = 0;
            uVar43 = local_70 & 0xffffffff;
            uVar41 = (undefined4)local_70;
            uVar31 = *(uint*)( (long)pvVar4 + ( ulong ) * (uint*)( (long)pvVar5 + local_70 * 4 ) * 4 );
            uVar33 = (ulong)uVar31;
            uVar32 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( in_RSI + 4 ) * 4 );
            uVar38 = CONCAT44(0, uVar32);
            lVar6 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( in_RSI + 4 ) * 8 );
            auVar11._8_8_ = 0;
            auVar11._0_8_ = uVar33 * lVar6;
            auVar23._8_8_ = 0;
            auVar23._0_8_ = uVar38;
            lVar2 = SUB168(auVar11 * auVar23, 8) * 4;
            iVar35 = SUB164(auVar11 * auVar23, 8);
            puVar1 = (uint*)( lVar36 + lVar2 );
            uVar44 = *puVar1;
            uVar42 = local_70;
            while (uVar44 != 0) {
               auVar12._8_8_ = 0;
               auVar12._0_8_ = (ulong)uVar44 * lVar6;
               auVar24._8_8_ = 0;
               auVar24._0_8_ = uVar38;
               auVar13._8_8_ = 0;
               auVar13._0_8_ = ( ulong )(( uVar32 + iVar35 ) - SUB164(auVar12 * auVar24, 8)) * lVar6;
               auVar25._8_8_ = 0;
               auVar25._0_8_ = uVar38;
               uVar31 = SUB164(auVar13 * auVar25, 8);
               if (uVar31 < uVar39) {
                  *(int*)( lVar3 + uVar43 * 4 ) = iVar35;
                  uVar44 = *puVar1;
                  *puVar1 = (uint)uVar33;
                  uVar39 = *(uint*)( lVar2 + lVar34 );
                  uVar33 = (ulong)uVar44;
                  *(uint*)( lVar2 + lVar34 ) = (uint)uVar43;
                  uVar43 = (ulong)uVar39;
                  uVar39 = uVar31;
               }

               uVar41 = (undefined4)uVar43;
               uVar31 = (uint)uVar33;
               uVar39 = uVar39 + 1;
               auVar14._8_8_ = 0;
               auVar14._0_8_ = ( ulong )(iVar35 + 1) * lVar6;
               auVar26._8_8_ = 0;
               auVar26._0_8_ = uVar38;
               lVar2 = SUB168(auVar14 * auVar26, 8) * 4;
               iVar35 = SUB164(auVar14 * auVar26, 8);
               puVar1 = (uint*)( lVar36 + lVar2 );
               uVar42 = uVar43;
               uVar44 = *puVar1;
            }
;
            *puVar1 = uVar31;
            *(int*)( lVar3 + uVar42 * 4 ) = iVar35;
            local_70 = local_70 + 1;
            *(undefined4*)( lVar34 + lVar2 ) = uVar41;
         }
 while ( (uint)local_70 < *(uint*)( (long)in_RSI + 0x24 ) );
      }

      Memory::free_static(pvVar4, false);
      Memory::free_static(pvVar5, false);
      uVar32 = *(uint*)( in_RSI + 4 );
      uVar44 = *(uint*)( (long)in_RSI + 0x24 );
      local_88 = (Camera3D*)*in_RSI;
      lVar34 = *in_RDX;
   }

   uVar42 = (ulong)uVar44;
   lVar3 = in_RSI[3];
   *(long*)( local_88 + uVar42 * 8 ) = lVar34;
   uVar33 = lVar34 * 0x3ffff - 1;
   uVar33 = ( uVar33 ^ uVar33 >> 0x1f ) * 0x15;
   uVar33 = ( uVar33 ^ uVar33 >> 0xb ) * 0x41;
   uVar33 = uVar33 >> 0x16 ^ uVar33;
   uVar43 = uVar33 & 0xffffffff;
   if ((int)uVar33 == 0) {
      uVar43 = 1;
   }

   uVar37 = 0;
   uVar31 = *(uint*)( hash_table_size_primes + (ulong)uVar32 * 4 );
   uVar40 = CONCAT44(0, uVar31);
   uVar39 = (uint)uVar43;
   lVar36 = *(long*)( hash_table_size_primes_inv + (ulong)uVar32 * 8 );
   auVar15._8_8_ = 0;
   auVar15._0_8_ = uVar43 * lVar36;
   auVar27._8_8_ = 0;
   auVar27._0_8_ = uVar40;
   lVar34 = SUB168(auVar15 * auVar27, 8) * 4;
   iVar35 = SUB164(auVar15 * auVar27, 8);
   lVar2 = in_RSI[2];
   puVar1 = (uint*)( lVar3 + lVar34 );
   uVar33 = in_RSI[1];
   uVar32 = *puVar1;
   uStack_98 = uVar33;
   uVar38 = uVar42;
   while (uVar32 != 0) {
      auVar16._8_8_ = 0;
      auVar16._0_8_ = (ulong)uVar32 * lVar36;
      auVar28._8_8_ = 0;
      auVar28._0_8_ = uVar40;
      auVar17._8_8_ = 0;
      auVar17._0_8_ = ( ulong )(( uVar31 + iVar35 ) - SUB164(auVar16 * auVar28, 8)) * lVar36;
      auVar29._8_8_ = 0;
      auVar29._0_8_ = uVar40;
      uVar32 = SUB164(auVar17 * auVar29, 8);
      if (uVar32 < uVar37) {
         *(int*)( lVar2 + uVar42 * 4 ) = iVar35;
         uVar44 = *puVar1;
         *puVar1 = (uint)uVar43;
         uVar39 = *(uint*)( lVar34 + uVar33 );
         uVar43 = (ulong)uVar44;
         *(uint*)( lVar34 + uVar33 ) = (uint)uVar38;
         uVar42 = (ulong)uVar39;
         uVar38 = uVar42;
         uVar37 = uVar32;
      }

      uVar44 = (uint)uVar38;
      uVar39 = (uint)uVar43;
      uVar37 = uVar37 + 1;
      auVar18._8_8_ = 0;
      auVar18._0_8_ = ( ulong )(iVar35 + 1) * lVar36;
      auVar30._8_8_ = 0;
      auVar30._0_8_ = uVar40;
      uStack_98 = SUB168(auVar18 * auVar30, 8);
      lVar34 = uStack_98 * 4;
      iVar35 = SUB164(auVar18 * auVar30, 8);
      puVar1 = (uint*)( lVar3 + lVar34 );
      uVar32 = *puVar1;
   }
;
   *puVar1 = uVar39;
   *(int*)( lVar2 + uVar42 * 4 ) = iVar35;
   *(uint*)( uVar33 + lVar34 ) = uVar44;
   uVar37 = *(uint*)( (long)in_RSI + 0x24 );
   uVar44 = uVar37 + 1;
   *(uint*)( (long)in_RSI + 0x24 ) = uVar44;
   LAB_0010cd11:*(uint*)( (long)param_1 + 0xc ) = uVar37;
   *param_1 = local_88;
   *(uint*)( param_1 + 1 ) = uVar44;
   auVar45._8_8_ = uStack_98;
   auVar45._0_8_ = param_1;
   return auVar45;
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
/* godot::details::enum_qualified_name_to_class_info_name(String const&) */details * __thiscall
godot::details::enum_qualified_name_to_class_info_name(details *this,String *param_1){
   long *plVar1;
   long lVar2;
   code *pcVar3;
   long *plVar4;
   long *plVar5;
   long lVar6;
   long lVar7;
   long in_FS_OFFSET;
   undefined8 local_60;
   char local_58[8];
   long *local_50;
   undefined *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   String::split(local_58, SUB81(param_1, 0), 0x10cedd);
   if (( local_50 != (long*)0x0 ) && ( 2 < local_50[-1] )) {
      local_60 = 0;
      local_48 = &_LC61;
      local_40 = 1;
      String::parse_latin1((StrRange*)&local_60);
      if (local_50 == (long*)0x0) {
         lVar7 = 0;
         lVar6 = -2;
      }
 else {
         lVar7 = local_50[-1];
         lVar6 = lVar7 + -2;
         if (-1 < lVar6) {
            String::operator +((String*)&local_48, (String*)( local_50 + lVar6 ));
            String::operator +((String*)this, (String*)&local_48);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
            goto LAB_0010cf9a;
         }

      }

      _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar6, lVar7, "p_index", "size()", "", false, true);
      _err_flush_stdout();
      /* WARNING: Does not return */
      pcVar3 = (code*)invalidInstructionException();
      ( *pcVar3 )();
   }

   local_60 = 0;
   local_48 = &_LC61;
   local_40 = 1;
   String::parse_latin1((StrRange*)&local_60);
   String::join((Vector*)this);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   LAB_0010cf9a:plVar4 = local_50;
   if (local_50 != (long*)0x0) {
      LOCK();
      plVar5 = local_50 + -2;
      *plVar5 = *plVar5 + -1;
      UNLOCK();
      if (*plVar5 == 0) {
         if (local_50 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar7 = local_50[-1];
         local_50 = (long*)0x0;
         if (lVar7 != 0) {
            lVar6 = 0;
            plVar5 = plVar4;
            do {
               if (*plVar5 != 0) {
                  LOCK();
                  plVar1 = (long*)( *plVar5 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     lVar2 = *plVar5;
                     *plVar5 = 0;
                     Memory::free_static((void*)( lVar2 + -0x10 ), false);
                  }

               }

               lVar6 = lVar6 + 1;
               plVar5 = plVar5 + 1;
            }
 while ( lVar7 != lVar6 );
         }

         Memory::free_static(plVar4 + -2, false);
      }

   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GetTypeInfo<AudioStreamPlayer3D::AttenuationModel, void>::get_class_info() */GetTypeInfo<AudioStreamPlayer3D::AttenuationModel,void> * __thiscall
GetTypeInfo<AudioStreamPlayer3D::AttenuationModel,void>::get_class_info
          (GetTypeInfo<AudioStreamPlayer3D::AttenuationModel,void> *this){
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
   local_48 = "AudioStreamPlayer3D::AttenuationModel";
   local_40 = 0x25;
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
}
/* GetTypeInfo<AudioStreamPlayer3D::DopplerTracking, void>::get_class_info() */GetTypeInfo<AudioStreamPlayer3D::DopplerTracking,void> * __thiscall
GetTypeInfo<AudioStreamPlayer3D::DopplerTracking,void>::get_class_info
          (GetTypeInfo<AudioStreamPlayer3D::DopplerTracking,void> *this){
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
   local_48 = "AudioStreamPlayer3D::DopplerTracking";
   local_40 = 0x24;
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
}
/* MethodBindTRC<AudioServer::PlaybackType>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<AudioServer::PlaybackType>::_gen_argument_type_info(int param_1) {
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
   local_48 = "AudioServer::PlaybackType";
   local_40 = 0x19;
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
}
/* MethodBindTRC<AudioStreamPlayer3D::AttenuationModel>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<AudioStreamPlayer3D::AttenuationModel>::_gen_argument_type_info(int param_1) {
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
   puVar4 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_40 = 0;
   local_30 = 0x25;
   local_38 = "AudioStreamPlayer3D::AttenuationModel";
   String::parse_latin1((StrRange*)&local_40);
   godot::details::enum_qualified_name_to_class_info_name((details*)&local_38, (String*)&local_40);
   StringName::StringName((StringName*)&local_48, (String*)&local_38, false);
   *puVar4 = 2;
   puVar4[6] = 0;
   *(undefined8*)( puVar4 + 8 ) = 0;
   puVar4[10] = 0x10006;
   *(undefined1(*) [16])( puVar4 + 2 ) = (undefined1[16])0x0;
   StringName::operator =((StringName*)( puVar4 + 4 ), (StringName*)&local_48);
   if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
      StringName::unref();
   }

   pcVar3 = local_38;
   if (local_38 != (char*)0x0) {
      LOCK();
      plVar1 = (long*)( local_38 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_38 = (char*)0x0;
         Memory::free_static(pcVar3 + -0x10, false);
      }

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
      return puVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<AudioStreamPlayer3D::DopplerTracking>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<AudioStreamPlayer3D::DopplerTracking>::_gen_argument_type_info(int param_1) {
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
   puVar4 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_40 = 0;
   local_30 = 0x24;
   local_38 = "AudioStreamPlayer3D::DopplerTracking";
   String::parse_latin1((StrRange*)&local_40);
   godot::details::enum_qualified_name_to_class_info_name((details*)&local_38, (String*)&local_40);
   StringName::StringName((StringName*)&local_48, (String*)&local_38, false);
   *puVar4 = 2;
   puVar4[6] = 0;
   *(undefined8*)( puVar4 + 8 ) = 0;
   puVar4[10] = 0x10006;
   *(undefined1(*) [16])( puVar4 + 2 ) = (undefined1[16])0x0;
   StringName::operator =((StringName*)( puVar4 + 4 ), (StringName*)&local_48);
   if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
      StringName::unref();
   }

   pcVar3 = local_38;
   if (local_38 != (char*)0x0) {
      LOCK();
      plVar1 = (long*)( local_38 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_38 = (char*)0x0;
         Memory::free_static(pcVar3 + -0x10, false);
      }

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
      return puVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* CallableCustomMethodPointer<AudioStreamPlayer3D, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */void CallableCustomMethodPointer<AudioStreamPlayer3D,void>::call(CallableCustomMethodPointer<AudioStreamPlayer3D,void> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
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
         goto LAB_0010d9bf;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] == 0) goto LAB_0010d9bf;
      lVar1 = *(long*)( this + 0x28 );
      UNRECOVERED_JUMPTABLE = *(code**)( this + 0x38 );
      lVar2 = *(long*)( this + 0x40 );
      if (param_2 == 0) {
         *(undefined4*)param_4 = 0;
         if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
            UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( lVar1 + lVar2 ) + -1 );
         }

         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            /* WARNING: Could not recover jumptable at 0x0010d998. Too many branches */
            /* WARNING: Treating indirect jump as call */
            ( *UNRECOVERED_JUMPTABLE )((long*)( lVar1 + lVar2 ), uVar5, UNRECOVERED_JUMPTABLE);
            return;
         }

         goto LAB_0010da81;
      }

      *(undefined4*)param_4 = 3;
      *(undefined4*)( param_4 + 8 ) = 0;
   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
      LAB_0010d9bf:local_50 = 0;
      local_48 = "\', can\'t call method.";
      local_40 = 0x15;
      String::parse_latin1((StrRange*)&local_50);
      uitos((ulong)local_60);
      operator+((char *)
      local_58,(String*)"Invalid Object id \'";
      String::operator +((String*)&local_48, (String*)local_58);
      _err_print_error(&_LC72, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", (String*)&local_48, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
      CowData<char32_t>::_unref(local_58);
      CowData<char32_t>::_unref(local_60);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_0010da81:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* CallableCustomMethodPointer<AudioStreamPlayer3D, void, float>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */void CallableCustomMethodPointer<AudioStreamPlayer3D,void,float>::call(CallableCustomMethodPointer<AudioStreamPlayer3D,void,float> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
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
   CowData<char32_t> local_60[8];
   CowData<char32_t> local_58[8];
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar6 = ( uint ) * (ulong*)( this + 0x30 ) & 0xffffff;
   if (uVar6 < (uint)ObjectDB::slot_max) {
      while (true) {
         uVar3 = (ulong)local_48 >> 8;
         local_48 = (char*)( uVar3 << 8 );
         LOCK();
         bVar8 = (char)ObjectDB::spin_lock == '\0';
         if (bVar8) {
            ObjectDB::spin_lock._0_1_ = '\x01';
         }

         UNLOCK();
         if (bVar8) break;
         local_48 = (char*)( uVar3 << 8 );
         do {} while ( (char)ObjectDB::spin_lock != '\0' );
      }
;
      puVar7 = (ulong*)( (ulong)uVar6 * 0x10 + ObjectDB::object_slots );
      if (( *(ulong*)( this + 0x30 ) >> 0x18 & 0x7fffffffff ) != ( *puVar7 & 0x7fffffffff )) {
         ObjectDB::spin_lock._0_1_ = '\0';
         goto LAB_0010dc46;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar7[1] == 0) goto LAB_0010dc46;
      lVar1 = *(long*)( this + 0x28 );
      UNRECOVERED_JUMPTABLE = *(code**)( this + 0x38 );
      lVar2 = *(long*)( this + 0x40 );
      if ((uint)param_2 < 2) {
         if (param_2 != 0) {
            *(undefined4*)param_4 = 0;
            if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
               UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( lVar1 + lVar2 ) + -1 );
            }

            cVar5 = Variant::can_convert_strict(*(undefined4*)*param_1, 3);
            uVar4 = _LC73;
            if (cVar5 == '\0') {
               *(undefined4*)param_4 = 2;
               *(undefined8*)( param_4 + 4 ) = uVar4;
            }

            Variant::operator_cast_to_float(*param_1);
            if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
               /* WARNING: Could not recover jumptable at 0x0010dbf5. Too many branches */
               /* WARNING: Treating indirect jump as call */
               ( *UNRECOVERED_JUMPTABLE )((long*)( lVar1 + lVar2 ));
               return;
            }

            goto LAB_0010dd08;
         }

         *(undefined4*)param_4 = 4;
         *(undefined4*)( param_4 + 8 ) = 1;
      }
 else {
         *(undefined4*)param_4 = 3;
         *(undefined4*)( param_4 + 8 ) = 1;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
      LAB_0010dc46:local_50 = 0;
      local_48 = "\', can\'t call method.";
      local_40 = 0x15;
      String::parse_latin1((StrRange*)&local_50);
      uitos((ulong)local_60);
      operator+((char *)
      local_58,(String*)"Invalid Object id \'";
      String::operator +((String*)&local_48, (String*)local_58);
      _err_print_error(&_LC72, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", (String*)&local_48, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
      CowData<char32_t>::_unref(local_58);
      CowData<char32_t>::_unref(local_60);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_0010dd08:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<AudioServer::PlaybackType>::_gen_argument_type_info(int) const */undefined4 *MethodBindT<AudioServer::PlaybackType>::_gen_argument_type_info(int param_1) {
   undefined1 auVar1[16];
   undefined8 uVar2;
   long lVar3;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar4;
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
   puVar4 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *puVar4 = 0;
   puVar4[6] = 0;
   *(undefined8*)( puVar4 + 8 ) = 0;
   puVar4[10] = 6;
   *(undefined1(*) [16])( puVar4 + 2 ) = (undefined1[16])0x0;
   if (in_EDX == 0) {
      local_80 = 0;
      local_60._0_8_ = 0x19;
      local_68 = "AudioServer::PlaybackType";
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

      puVar4[6] = (undefined4)local_50;
      if (*(long*)( puVar4 + 8 ) != local_48) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( puVar4 + 8 ));
         lVar3 = local_48;
         local_48 = 0;
         *(long*)( puVar4 + 8 ) = lVar3;
      }

      puVar4[10] = local_40;
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_68);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* AudioStreamPlayer3D::is_class(String const&) const */undefined8 AudioStreamPlayer3D::is_class(AudioStreamPlayer3D *this, String *param_1) {
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
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
      lVar5 = *(long*)( lVar2 + 0x20 );
      if (lVar5 == 0) {
         local_60 = 0;
      }
 else {
         pcVar4 = *(char**)( lVar5 + 8 );
         local_60 = 0;
         if (pcVar4 == (char*)0x0) {
            plVar1 = (long*)( *(long*)( lVar5 + 0x10 ) + -0x10 );
            if (*(long*)( lVar5 + 0x10 ) != 0) {
               do {
                  lVar3 = *plVar1;
                  if (lVar3 == 0) goto LAB_0010df7f;
                  LOCK();
                  lVar8 = *plVar1;
                  bVar9 = lVar3 == lVar8;
                  if (bVar9) {
                     *plVar1 = lVar3 + 1;
                     lVar8 = lVar3;
                  }

                  UNLOCK();
               }
 while ( !bVar9 );
               if (lVar8 != -1) {
                  local_60 = *(long*)( lVar5 + 0x10 );
               }

            }

         }
 else {
            local_50 = strlen(pcVar4);
            local_58 = pcVar4;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      LAB_0010df7f:cVar6 = String::operator ==(param_1, (String*)&local_60);
      lVar5 = local_60;
      if (local_60 != 0) {
         LOCK();
         plVar1 = (long*)( local_60 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_60 = 0;
            Memory::free_static((void*)( lVar5 + -0x10 ), false);
         }

      }

      if (cVar6 != '\0') goto LAB_0010e033;
   }

   cVar6 = String::operator ==(param_1, "AudioStreamPlayer3D");
   if (cVar6 == '\0') {
      for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
         lVar5 = *(long*)( lVar2 + 0x20 );
         if (lVar5 == 0) {
            local_60 = 0;
         }
 else {
            pcVar4 = *(char**)( lVar5 + 8 );
            local_60 = 0;
            if (pcVar4 == (char*)0x0) {
               plVar1 = (long*)( *(long*)( lVar5 + 0x10 ) + -0x10 );
               if (*(long*)( lVar5 + 0x10 ) != 0) {
                  do {
                     lVar3 = *plVar1;
                     if (lVar3 == 0) goto LAB_0010e11b;
                     LOCK();
                     lVar8 = *plVar1;
                     bVar9 = lVar3 == lVar8;
                     if (bVar9) {
                        *plVar1 = lVar3 + 1;
                        lVar8 = lVar3;
                     }

                     UNLOCK();
                  }
 while ( !bVar9 );
                  if (lVar8 != -1) {
                     local_60 = *(long*)( lVar5 + 0x10 );
                  }

               }

            }
 else {
               local_50 = strlen(pcVar4);
               local_58 = pcVar4;
               String::parse_latin1((StrRange*)&local_60);
            }

         }

         LAB_0010e11b:cVar6 = String::operator ==(param_1, (String*)&local_60);
         lVar5 = local_60;
         if (local_60 != 0) {
            LOCK();
            plVar1 = (long*)( local_60 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_60 = 0;
               Memory::free_static((void*)( lVar5 + -0x10 ), false);
            }

         }

         if (cVar6 != '\0') goto LAB_0010e033;
      }

      cVar6 = String::operator ==(param_1, "Node3D");
      if (cVar6 == '\0') {
         for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
            lVar5 = *(long*)( lVar2 + 0x20 );
            if (lVar5 == 0) {
               local_60 = 0;
            }
 else {
               pcVar4 = *(char**)( lVar5 + 8 );
               local_60 = 0;
               if (pcVar4 == (char*)0x0) {
                  if (*(long*)( lVar5 + 0x10 ) != 0) {
                     CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar5 + 0x10 ));
                  }

               }
 else {
                  local_50 = strlen(pcVar4);
                  local_58 = pcVar4;
                  String::parse_latin1((StrRange*)&local_60);
               }

            }

            cVar6 = String::operator ==(param_1, (String*)&local_60);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
            if (cVar6 != '\0') goto LAB_0010e033;
         }

         cVar6 = String::operator ==(param_1, "Node");
         if (cVar6 == '\0') {
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               uVar7 = Object::is_class((Object*)this, param_1);
               return uVar7;
            }

            goto LAB_0010e255;
         }

      }

   }

   LAB_0010e033:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_0010e255:/* WARNING: Subroutine does not return */__stack_chk_fail();
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
   if (in_EDX != 0) goto LAB_0010e2ab;
   local_78 = 0;
   local_80 = 0;
   local_68 = &_LC13;
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
      LAB_0010e3a0:local_40 = 6;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_0010e3a0;
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
   LAB_0010e2ab:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return puVar5;
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
   if (in_EDX != 0) goto LAB_0010e4eb;
   local_78 = 0;
   local_80 = 0;
   local_68 = &_LC13;
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
      LAB_0010e5e0:local_40 = 6;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_0010e5e0;
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
   LAB_0010e4eb:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return puVar5;
}
/* MethodBindT<StringName const&>::_gen_argument_type_info(int) const */undefined4 *MethodBindT<StringName_const&>::_gen_argument_type_info(int param_1) {
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
   if (in_EDX != 0) goto LAB_0010e72b;
   local_78 = 0;
   local_80 = 0;
   local_68 = &_LC13;
   auVar1._8_8_ = 0;
   auVar1._0_8_ = local_60._8_8_;
   local_60 = auVar1 << 0x40;
   String::parse_latin1((StrRange*)&local_80);
   local_88 = 0;
   local_68 = (undefined*)CONCAT44(local_68._4_4_, 0x15);
   local_50 = 0;
   local_48 = 0;
   local_60 = (undefined1[16])0x0;
   if (local_80 == 0) {
      LAB_0010e820:local_40 = 6;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_0010e820;
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
   LAB_0010e72b:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return puVar5;
}
/* MethodBindT<Ref<AudioStream> >::_gen_argument_type_info(int) const */undefined4 *MethodBindT<Ref<AudioStream>>::_gen_argument_type_info(int param_1) {
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
   if (in_EDX != 0) goto LAB_0010e96b;
   local_78 = 0;
   local_80 = 0;
   local_68 = "AudioStream";
   local_60._0_8_ = 0xb;
   String::parse_latin1((StrRange*)&local_80);
   local_88 = 0;
   local_68 = (char*)CONCAT44(local_68._4_4_, 0x18);
   local_50 = 0x11;
   local_48 = 0;
   local_60 = (undefined1[16])0x0;
   if (local_80 == 0) {
      LAB_0010eb05:local_40 = 6;
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
      if (local_50 == 0x11) goto LAB_0010eb05;
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
   LAB_0010e96b:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return puVar4;
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
   if (in_EDX != 0) goto LAB_0010ebbb;
   local_78 = 0;
   local_80 = 0;
   local_68 = &_LC13;
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
      LAB_0010ecb0:local_40 = 6;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_0010ecb0;
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
   LAB_0010ebbb:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
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
   if (in_EDX != 0) goto LAB_0010edfb;
   local_78 = 0;
   local_80 = 0;
   local_68 = &_LC13;
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
      LAB_0010eef0:local_40 = 6;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_0010eef0;
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
   LAB_0010edfb:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return puVar5;
}
/* MethodBindT<AudioStreamPlayer3D::DopplerTracking>::_gen_argument_type_info(int) const */undefined4 *MethodBindT<AudioStreamPlayer3D::DopplerTracking>::_gen_argument_type_info(int param_1) {
   undefined1 auVar1[16];
   undefined8 uVar2;
   long lVar3;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar4;
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
   puVar4 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *puVar4 = 0;
   puVar4[6] = 0;
   *(undefined8*)( puVar4 + 8 ) = 0;
   puVar4[10] = 6;
   *(undefined1(*) [16])( puVar4 + 2 ) = (undefined1[16])0x0;
   if (in_EDX == 0) {
      local_80 = 0;
      local_60._0_8_ = 0x24;
      local_68 = "AudioStreamPlayer3D::DopplerTracking";
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

      puVar4[6] = (undefined4)local_50;
      if (*(long*)( puVar4 + 8 ) != local_48) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( puVar4 + 8 ));
         lVar3 = local_48;
         local_48 = 0;
         *(long*)( puVar4 + 8 ) = lVar3;
      }

      puVar4[10] = local_40;
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_68);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<AudioStreamPlayer3D::AttenuationModel>::_gen_argument_type_info(int) const */undefined4 *MethodBindT<AudioStreamPlayer3D::AttenuationModel>::_gen_argument_type_info(int param_1) {
   undefined1 auVar1[16];
   undefined8 uVar2;
   long lVar3;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar4;
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
   puVar4 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *puVar4 = 0;
   puVar4[6] = 0;
   *(undefined8*)( puVar4 + 8 ) = 0;
   puVar4[10] = 6;
   *(undefined1(*) [16])( puVar4 + 2 ) = (undefined1[16])0x0;
   if (in_EDX == 0) {
      local_80 = 0;
      local_60._0_8_ = 0x25;
      local_68 = "AudioStreamPlayer3D::AttenuationModel";
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

      puVar4[6] = (undefined4)local_50;
      if (*(long*)( puVar4 + 8 ) != local_48) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( puVar4 + 8 ));
         lVar3 = local_48;
         local_48 = 0;
         *(long*)( puVar4 + 8 ) = lVar3;
      }

      puVar4[10] = local_40;
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_68);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Node3D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void Node3D::_get_property_listv(Node3D *this, List *param_1, bool param_2) {
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
   local_78 = "Node3D";
   local_70 = 6;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "Node3D";
   local_98 = 0;
   local_70 = 6;
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
      LAB_0010f568:local_50 = 0x80;
      StringName::operator =(local_b8, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_0010f568;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x0010f583;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)param_1;
   joined_r0x0010f583:if (lVar2 == 0) {
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

   StringName::StringName((StringName*)&local_78, "Node3D", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (undefined*)0x0 )) {
      StringName::unref();
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
/* AudioStreamPlayer3D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void AudioStreamPlayer3D::_get_property_listv(AudioStreamPlayer3D *this, List *param_1, bool param_2) {
   long *plVar1;
   long lVar2;
   undefined1(*pauVar3)[16];
   undefined4 *puVar4;
   long in_FS_OFFSET;
   CowData *local_c0;
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
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_2) {
      Node3D::_get_property_listv((Node3D*)this, param_1, false);
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "AudioStreamPlayer3D";
   local_70 = 0x13;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "AudioStreamPlayer3D";
   local_98 = 0;
   local_70 = 0x13;
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
      LAB_0010fb7a:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_0010fb7a;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x0010fb9c;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)param_1;
   joined_r0x0010fb9c:if (lVar2 == 0) {
      pauVar3 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])param_1 = pauVar3;
      *(undefined4*)pauVar3[1] = 0;
      *pauVar3 = (undefined1[16])0x0;
   }

   local_a8 = (StringName*)&local_68;
   local_c0 = (CowData*)&local_58;
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

   StringName::operator =((StringName*)( puVar4 + 4 ), local_a8);
   puVar4[6] = local_60;
   if (*(long*)( puVar4 + 8 ) != local_58) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar4 + 8 ), local_c0);
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
   CowData<char32_t>::_unref((CowData<char32_t>*)local_c0);
   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_78, "AudioStreamPlayer3D", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   AudioStreamPlayerInternal::get_property_list(*(List**)( this + 0x528 ));
   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         Node3D::_get_property_listv((Node3D*)this, param_1, true);
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind* create_method_bind<AudioStreamPlayer3D, bool>(bool (AudioStreamPlayer3D::*)()) */MethodBind *create_method_bind<AudioStreamPlayer3D,bool>(_func_bool *param_1) {
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
   *(undefined***)this = &PTR__gen_argument_type_0011c348;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "AudioStreamPlayer3D";
   local_30 = 0x13;
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
}
/* MethodBind* create_method_bind<AudioStreamPlayer3D, Ref<AudioStream> >(void
   (AudioStreamPlayer3D::*)(Ref<AudioStream>)) */MethodBind *create_method_bind<AudioStreamPlayer3D,Ref<AudioStream>>(_func_void_Ref *param_1) {
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
   *(undefined***)this = &PTR__gen_argument_type_0011c3a8;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "AudioStreamPlayer3D";
   local_30 = 0x13;
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
}
/* MethodBind* create_method_bind<AudioStreamPlayer3D, Ref<AudioStream>>(Ref<AudioStream>
   (AudioStreamPlayer3D::*)() const) */MethodBind *create_method_bind<AudioStreamPlayer3D,Ref<AudioStream>>(_func_Ref *param_1) {
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
   *(undefined***)this = &PTR__gen_argument_type_0011c408;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "AudioStreamPlayer3D";
   local_30 = 0x13;
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
}
/* MethodBind* create_method_bind<AudioStreamPlayer3D, float>(void (AudioStreamPlayer3D::*)(float))
    */MethodBind *create_method_bind<AudioStreamPlayer3D,float>(_func_void_float *param_1) {
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
   *(undefined***)this = &PTR__gen_argument_type_0011c468;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "AudioStreamPlayer3D";
   local_30 = 0x13;
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
}
/* MethodBind* create_method_bind<AudioStreamPlayer3D, float>(float (AudioStreamPlayer3D::*)()
   const) */MethodBind *create_method_bind<AudioStreamPlayer3D,float>(_func_float *param_1) {
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
   *(undefined***)this = &PTR__gen_argument_type_0011c4c8;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "AudioStreamPlayer3D";
   local_30 = 0x13;
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
}
/* MethodBind* create_method_bind<AudioStreamPlayer3D>(void (AudioStreamPlayer3D::*)()) */MethodBind *create_method_bind<AudioStreamPlayer3D>(_func_void *param_1) {
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
   *(undefined***)this = &PTR__gen_argument_type_0011c528;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "AudioStreamPlayer3D";
   local_30 = 0x13;
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
}
/* MethodBind* create_method_bind<AudioStreamPlayer3D, bool>(bool (AudioStreamPlayer3D::*)() const)
    */MethodBind *create_method_bind<AudioStreamPlayer3D,bool>(_func_bool *param_1) {
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
   *(undefined***)this = &PTR__gen_argument_type_0011c588;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "AudioStreamPlayer3D";
   local_30 = 0x13;
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
}
/* MethodBind* create_method_bind<AudioStreamPlayer3D, float>(float (AudioStreamPlayer3D::*)()) */MethodBind *create_method_bind<AudioStreamPlayer3D,float>(_func_float *param_1) {
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
   *(undefined***)this = &PTR__gen_argument_type_0011c5e8;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "AudioStreamPlayer3D";
   local_30 = 0x13;
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
}
/* MethodBind* create_method_bind<AudioStreamPlayer3D, StringName const&>(void
   (AudioStreamPlayer3D::*)(StringName const&)) */MethodBind *create_method_bind<AudioStreamPlayer3D,StringName_const&>(_func_void_StringName_ptr *param_1) {
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
   *(_func_void_StringName_ptr**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0011c648;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "AudioStreamPlayer3D";
   local_30 = 0x13;
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
}
/* MethodBind* create_method_bind<AudioStreamPlayer3D, StringName>(StringName
   (AudioStreamPlayer3D::*)() const) */MethodBind *create_method_bind<AudioStreamPlayer3D,StringName>(_func_StringName *param_1) {
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
   *(_func_StringName**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0011c6a8;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "AudioStreamPlayer3D";
   local_30 = 0x13;
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
}
/* MethodBind* create_method_bind<AudioStreamPlayer3D, bool>(void (AudioStreamPlayer3D::*)(bool)) */MethodBind *create_method_bind<AudioStreamPlayer3D,bool>(_func_void_bool *param_1) {
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
   *(undefined***)this = &PTR__gen_argument_type_0011c708;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "AudioStreamPlayer3D";
   local_30 = 0x13;
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
}
/* MethodBind* create_method_bind<AudioStreamPlayer3D, unsigned int>(void
   (AudioStreamPlayer3D::*)(unsigned int)) */MethodBind *create_method_bind<AudioStreamPlayer3D,unsigned_int>(_func_void_uint *param_1) {
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
   *(undefined***)this = &PTR__gen_argument_type_0011c768;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "AudioStreamPlayer3D";
   local_30 = 0x13;
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
}
/* MethodBind* create_method_bind<AudioStreamPlayer3D, unsigned int>(unsigned int
   (AudioStreamPlayer3D::*)() const) */MethodBind *create_method_bind<AudioStreamPlayer3D,unsigned_int>(_func_uint *param_1) {
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
   *(undefined***)this = &PTR__gen_argument_type_0011c7c8;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "AudioStreamPlayer3D";
   local_30 = 0x13;
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
}
/* MethodBind* create_method_bind<AudioStreamPlayer3D, AudioStreamPlayer3D::AttenuationModel>(void
   (AudioStreamPlayer3D::*)(AudioStreamPlayer3D::AttenuationModel)) */MethodBind *create_method_bind<AudioStreamPlayer3D,AudioStreamPlayer3D::AttenuationModel>(_func_void_AttenuationModel *param_1) {
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
   *(_func_void_AttenuationModel**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0011c828;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "AudioStreamPlayer3D";
   local_30 = 0x13;
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
}
/* MethodBind* create_method_bind<AudioStreamPlayer3D,
   AudioStreamPlayer3D::AttenuationModel>(AudioStreamPlayer3D::AttenuationModel
   (AudioStreamPlayer3D::*)() const) */MethodBind *create_method_bind<AudioStreamPlayer3D,AudioStreamPlayer3D::AttenuationModel>(_func_AttenuationModel *param_1) {
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
   *(_func_AttenuationModel**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0011c888;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "AudioStreamPlayer3D";
   local_30 = 0x13;
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
}
/* MethodBind* create_method_bind<AudioStreamPlayer3D, AudioStreamPlayer3D::DopplerTracking>(void
   (AudioStreamPlayer3D::*)(AudioStreamPlayer3D::DopplerTracking)) */MethodBind *create_method_bind<AudioStreamPlayer3D,AudioStreamPlayer3D::DopplerTracking>(_func_void_DopplerTracking *param_1) {
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
   *(_func_void_DopplerTracking**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0011c8e8;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "AudioStreamPlayer3D";
   local_30 = 0x13;
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
}
/* MethodBind* create_method_bind<AudioStreamPlayer3D,
   AudioStreamPlayer3D::DopplerTracking>(AudioStreamPlayer3D::DopplerTracking
   (AudioStreamPlayer3D::*)() const) */MethodBind *create_method_bind<AudioStreamPlayer3D,AudioStreamPlayer3D::DopplerTracking>(_func_DopplerTracking *param_1) {
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
   *(_func_DopplerTracking**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0011c948;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "AudioStreamPlayer3D";
   local_30 = 0x13;
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
}
/* MethodBind* create_method_bind<AudioStreamPlayer3D, int>(void (AudioStreamPlayer3D::*)(int)) */MethodBind *create_method_bind<AudioStreamPlayer3D,int>(_func_void_int *param_1) {
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
   *(undefined***)this = &PTR__gen_argument_type_0011c9a8;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "AudioStreamPlayer3D";
   local_30 = 0x13;
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
}
/* MethodBind* create_method_bind<AudioStreamPlayer3D, int>(int (AudioStreamPlayer3D::*)() const) */MethodBind *create_method_bind<AudioStreamPlayer3D,int>(_func_int *param_1) {
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
   *(undefined***)this = &PTR__gen_argument_type_0011ca08;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "AudioStreamPlayer3D";
   local_30 = 0x13;
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
}
/* MethodBind* create_method_bind<AudioStreamPlayer3D,
   Ref<AudioStreamPlayback>>(Ref<AudioStreamPlayback> (AudioStreamPlayer3D::*)()) */MethodBind *create_method_bind<AudioStreamPlayer3D,Ref<AudioStreamPlayback>>(_func_Ref *param_1) {
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
   *(undefined***)this = &PTR__gen_argument_type_0011ca68;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "AudioStreamPlayer3D";
   local_30 = 0x13;
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
}
/* MethodBind* create_method_bind<AudioStreamPlayer3D, AudioServer::PlaybackType>(void
   (AudioStreamPlayer3D::*)(AudioServer::PlaybackType)) */MethodBind *create_method_bind<AudioStreamPlayer3D,AudioServer::PlaybackType>(_func_void_PlaybackType *param_1) {
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
   *(_func_void_PlaybackType**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0011cac8;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "AudioStreamPlayer3D";
   local_30 = 0x13;
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
}
/* MethodBind* create_method_bind<AudioStreamPlayer3D,
   AudioServer::PlaybackType>(AudioServer::PlaybackType (AudioStreamPlayer3D::*)() const) */MethodBind *create_method_bind<AudioStreamPlayer3D,AudioServer::PlaybackType>(_func_PlaybackType *param_1) {
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
   *(_func_PlaybackType**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0011cb28;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "AudioStreamPlayer3D";
   local_30 = 0x13;
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
}
/* AudioStreamPlayer3D::_initialize_classv() */void AudioStreamPlayer3D::_initialize_classv(void) {
   long in_FS_OFFSET;
   undefined8 local_70;
   undefined8 local_68;
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (initialize_class() == '\0') {
      if (Node3D::initialize_class() == '\0') {
         if (Node::initialize_class() == '\0') {
            Object::initialize_class();
            local_68 = 0;
            local_50 = 6;
            local_58 = "Object";
            String::parse_latin1((StrRange*)&local_68);
            StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
            local_58 = "Node";
            local_70 = 0;
            local_50 = 4;
            String::parse_latin1((StrRange*)&local_70);
            StringName::StringName((StringName*)&local_58, (String*)&local_70, false);
            ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_60);
            if (( StringName::configured != '\0' ) && ( local_58 != (undefined*)0x0 )) {
               StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
            if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
               StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
            if ((code*)PTR__bind_methods_00123020 != Node::_bind_methods) {
               Node::_bind_methods();
            }

            Node::initialize_class()::initialized =
            '\x01';
         }

         local_58 = "Node";
         local_68 = 0;
         local_50 = 4;
         String::parse_latin1((StrRange*)&local_68);
         StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
         local_58 = "Node3D";
         local_70 = 0;
         local_50 = 6;
         String::parse_latin1((StrRange*)&local_70);
         StringName::StringName((StringName*)&local_58, (String*)&local_70, false);
         ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         if ((code*)PTR__bind_methods_00123018 != Node::_bind_methods) {
            Node3D::_bind_methods();
         }

         Node3D::initialize_class()::initialized =
         '\x01';
      }

      local_58 = "Node3D";
      local_68 = 0;
      local_50 = 6;
      String::parse_latin1((StrRange*)&local_68);
      StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
      local_58 = "AudioStreamPlayer3D";
      local_70 = 0;
      local_50 = 0x13;
      String::parse_latin1((StrRange*)&local_70);
      StringName::StringName((StringName*)&local_58, (String*)&local_70, false);
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

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* CowData<AudioFrame>::_unref() */void CowData<AudioFrame>::_unref(CowData<AudioFrame> *this) {
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
/* CowData<Spcap::Speaker>::_realloc(long) */undefined8 CowData<Spcap::Speaker>::_realloc(CowData<Spcap::Speaker> *this, long param_1) {
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
/* CowData<AudioFrame>::_realloc(long) */undefined8 CowData<AudioFrame>::_realloc(CowData<AudioFrame> *this, long param_1) {
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
/* CowData<Ref<AudioStreamPlayback> >::_unref() */void CowData<Ref<AudioStreamPlayback>>::_unref(CowData<Ref<AudioStreamPlayback>> *this) {
   long *plVar1;
   long lVar2;
   Object *pOVar3;
   code *pcVar4;
   char cVar5;
   long *plVar6;
   long lVar7;
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

   plVar1 = *(long**)this;
   if (plVar1 == (long*)0x0) {
      /* WARNING: Does not return */
      pcVar4 = (code*)invalidInstructionException();
      ( *pcVar4 )();
   }

   lVar2 = plVar1[-1];
   *(undefined8*)this = 0;
   if (lVar2 != 0) {
      lVar7 = 0;
      plVar6 = plVar1;
      LAB_00111c0d:do {
         if (*plVar6 != 0) {
            cVar5 = RefCounted::unreference();
            if (cVar5 != '\0') {
               pOVar3 = (Object*)*plVar6;
               cVar5 = predelete_handler(pOVar3);
               if (cVar5 != '\0') {
                  lVar7 = lVar7 + 1;
                  plVar6 = plVar6 + 1;
                  ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
                  Memory::free_static(pOVar3, false);
                  if (lVar2 == lVar7) break;
                  goto LAB_00111c0d;
               }

            }

         }

         lVar7 = lVar7 + 1;
         plVar6 = plVar6 + 1;
      }
 while ( lVar2 != lVar7 );
   }

   Memory::free_static(plVar1 + -2, false);
   return;
}
/* WARNING: Removing unreachable block (ram,0x00111ce0) *//* AudioStreamPlayer3D::_notificationv(int, bool) */void AudioStreamPlayer3D::_notificationv(AudioStreamPlayer3D *this, int param_1, bool param_2) {
   int iVar1;
   iVar1 = (int)this;
   if (param_2) {
      _notification(this, param_1);
      if ((code*)PTR__notification_00123028 != Node::_notification) {
         Node3D::_notification(iVar1);
      }

      Node::_notification(iVar1);
      return;
   }

   Node::_notification(iVar1);
   if ((code*)PTR__notification_00123028 != Node::_notification) {
      Node3D::_notification(iVar1);
   }

   _notification(this, param_1);
   return;
}
/* WARNING: Removing unreachable block (ram,0x00111eb8) *//* WARNING: Removing unreachable block (ram,0x0011204d) *//* WARNING: Removing unreachable block (ram,0x00112059) *//* String vformat<StringName>(String const&, StringName const) */undefined8 *vformat<StringName>(undefined8 *param_1, bool *param_2, StringName *param_3) {
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
/* MethodBindTRC<AudioServer::PlaybackType>::call(Object*, Variant const**, int,
   Callable::CallError&) const */Object *MethodBindTRC<AudioServer::PlaybackType>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
         _err_print_error(&_LC72, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_00112250;
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

   LAB_00112250:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<AudioServer::PlaybackType>::validated_call(Object*, Variant const**, Variant*)
   const */void MethodBindTRC<AudioServer::PlaybackType>::validated_call(MethodBindTRC<AudioServer::PlaybackType> *this, Object *param_1, Variant **param_2, Variant *param_3) {
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

         goto LAB_001124f4;
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
   LAB_001124f4:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<AudioServer::PlaybackType>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<AudioServer::PlaybackType>::ptrcall(MethodBindTRC<AudioServer::PlaybackType> *this, Object *param_1, void **param_2, void *param_3) {
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

         goto LAB_001126b3;
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
   LAB_001126b3:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<AudioServer::PlaybackType>::validated_call(Object*, Variant const**, Variant*) const
    */void MethodBindT<AudioServer::PlaybackType>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
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

         goto LAB_001129f1;
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
      /* WARNING: Could not recover jumptable at 0x0011287c. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(undefined4*)( *(long*)param_3 + 8 ));
      return;
   }

   LAB_001129f1:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<AudioServer::PlaybackType>::ptrcall(Object*, void const**, void*) const */void MethodBindT<AudioServer::PlaybackType>::ptrcall(Object *param_1, void **param_2, void *param_3) {
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

         goto LAB_00112bd1;
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
      /* WARNING: Could not recover jumptable at 0x00112a5b. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), **param_3);
      return;
   }

   LAB_00112bd1:/* WARNING: Subroutine does not return */__stack_chk_fail();
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
         _err_print_error(&_LC72, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_00112ca0;
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

   LAB_00112ca0:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
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

         goto LAB_00112eb4;
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
   LAB_00112eb4:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
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

         goto LAB_00113063;
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
   LAB_00113063:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
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

         goto LAB_001133a1;
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
      /* WARNING: Could not recover jumptable at 0x0011322c. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(undefined4*)( *(long*)param_3 + 8 ));
      return;
   }

   LAB_001133a1:/* WARNING: Subroutine does not return */__stack_chk_fail();
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

         goto LAB_00113581;
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
      /* WARNING: Could not recover jumptable at 0x0011340b. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), **param_3);
      return;
   }

   LAB_00113581:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindTRC<AudioStreamPlayer3D::DopplerTracking>::call(Object*, Variant const**, int,
   Callable::CallError&) const */Object *MethodBindTRC<AudioStreamPlayer3D::DopplerTracking>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
         _err_print_error(&_LC72, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_00113650;
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

   LAB_00113650:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<AudioStreamPlayer3D::DopplerTracking>::validated_call(Object*, Variant const**,
   Variant*) const */void MethodBindTRC<AudioStreamPlayer3D::DopplerTracking>::validated_call(MethodBindTRC<AudioStreamPlayer3D::DopplerTracking> *this, Object *param_1, Variant **param_2, Variant *param_3) {
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

         goto LAB_00113864;
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
   LAB_00113864:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<AudioStreamPlayer3D::DopplerTracking>::ptrcall(Object*, void const**, void*) const
    */void MethodBindTRC<AudioStreamPlayer3D::DopplerTracking>::ptrcall(MethodBindTRC<AudioStreamPlayer3D::DopplerTracking> *this, Object *param_1, void **param_2, void *param_3) {
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

         goto LAB_00113a13;
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
   LAB_00113a13:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<AudioStreamPlayer3D::DopplerTracking>::validated_call(Object*, Variant const**,
   Variant*) const */void MethodBindT<AudioStreamPlayer3D::DopplerTracking>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
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

         goto LAB_00113d51;
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
      /* WARNING: Could not recover jumptable at 0x00113bdc. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(undefined4*)( *(long*)param_3 + 8 ));
      return;
   }

   LAB_00113d51:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<AudioStreamPlayer3D::DopplerTracking>::ptrcall(Object*, void const**, void*) const */void MethodBindT<AudioStreamPlayer3D::DopplerTracking>::ptrcall(Object *param_1, void **param_2, void *param_3) {
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

         goto LAB_00113f31;
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
      /* WARNING: Could not recover jumptable at 0x00113dbb. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), **param_3);
      return;
   }

   LAB_00113f31:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindTRC<AudioStreamPlayer3D::AttenuationModel>::call(Object*, Variant const**, int,
   Callable::CallError&) const */Object *MethodBindTRC<AudioStreamPlayer3D::AttenuationModel>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
         _err_print_error(&_LC72, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_00114000;
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

   LAB_00114000:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<AudioStreamPlayer3D::AttenuationModel>::validated_call(Object*, Variant const**,
   Variant*) const */void MethodBindTRC<AudioStreamPlayer3D::AttenuationModel>::validated_call(MethodBindTRC<AudioStreamPlayer3D::AttenuationModel> *this, Object *param_1, Variant **param_2, Variant *param_3) {
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

         goto LAB_00114214;
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
   LAB_00114214:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<AudioStreamPlayer3D::AttenuationModel>::ptrcall(Object*, void const**, void*) const
    */void MethodBindTRC<AudioStreamPlayer3D::AttenuationModel>::ptrcall(MethodBindTRC<AudioStreamPlayer3D::AttenuationModel> *this, Object *param_1, void **param_2, void *param_3) {
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

         goto LAB_001143c3;
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
   LAB_001143c3:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<AudioStreamPlayer3D::AttenuationModel>::validated_call(Object*, Variant const**,
   Variant*) const */void MethodBindT<AudioStreamPlayer3D::AttenuationModel>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
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

         goto LAB_00114701;
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
      /* WARNING: Could not recover jumptable at 0x0011458c. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(undefined4*)( *(long*)param_3 + 8 ));
      return;
   }

   LAB_00114701:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<AudioStreamPlayer3D::AttenuationModel>::ptrcall(Object*, void const**, void*) const
    */void MethodBindT<AudioStreamPlayer3D::AttenuationModel>::ptrcall(Object *param_1, void **param_2, void *param_3) {
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

         goto LAB_001148e1;
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
      /* WARNING: Could not recover jumptable at 0x0011476b. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), **param_3);
      return;
   }

   LAB_001148e1:/* WARNING: Subroutine does not return */__stack_chk_fail();
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
         _err_print_error(&_LC72, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_001149b0;
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

   LAB_001149b0:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
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

         goto LAB_00114bc4;
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
   LAB_00114bc4:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
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

         goto LAB_00114d73;
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
   LAB_00114d73:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
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

         goto LAB_001150b1;
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
      /* WARNING: Could not recover jumptable at 0x00114f3c. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(undefined4*)( *(long*)param_3 + 8 ));
      return;
   }

   LAB_001150b1:/* WARNING: Subroutine does not return */__stack_chk_fail();
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

         goto LAB_00115291;
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
      /* WARNING: Could not recover jumptable at 0x0011511b. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), **param_3);
      return;
   }

   LAB_00115291:/* WARNING: Subroutine does not return */__stack_chk_fail();
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

         goto LAB_00115471;
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
      /* WARNING: Could not recover jumptable at 0x001152fd. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(undefined1*)( *(long*)param_3 + 8 ));
      return;
   }

   LAB_00115471:/* WARNING: Subroutine does not return */__stack_chk_fail();
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

         goto LAB_00115659;
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
      /* WARNING: Could not recover jumptable at 0x001154e2. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), **param_3 != '\0');
      return;
   }

   LAB_00115659:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindTRC<StringName>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindTRC<StringName>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
         _err_print_error(&_LC72, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_00115740;
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

         ( *(code*)pVVar2 )((StringName*)&local_58);
         Variant::Variant((Variant*)local_48, (StringName*)&local_58);
         if (Variant::needs_deinit[*(int*)param_1] != '\0') {
            Variant::_clear_internal();
         }

         bVar5 = StringName::configured != '\0';
         *(undefined4*)param_1 = local_48[0];
         *(undefined8*)( param_1 + 8 ) = local_40;
         *(undefined8*)( param_1 + 0x10 ) = uStack_38;
         if (( bVar5 ) && ( local_58 != (char*)0x0 )) {
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

   LAB_00115740:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<StringName>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTRC<StringName>::validated_call(MethodBindTRC<StringName> *this, Object *param_1, Variant **param_2, Variant *param_3) {
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
         local_48 = (Variant**)0x1120a8;
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

         goto LAB_0011597a;
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

   ( *pcVar1 )((StringName*)&local_48, param_1 + *(long*)( this + 0x60 ), param_2);
   StringName::operator =((StringName*)( param_3 + 8 ), (StringName*)&local_48);
   if (( StringName::configured != '\0' ) && ( local_48 != (Variant**)0x0 )) {
      StringName::unref();
   }

   LAB_0011597a:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<StringName>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<StringName>::ptrcall(MethodBindTRC<StringName> *this, Object *param_1, void **param_2, void *param_3) {
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
         local_48 = (void**)0x1120a8;
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

         goto LAB_00115b5b;
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

   ( *pcVar1 )((StringName*)&local_48, param_1 + *(long*)( this + 0x60 ), param_2);
   StringName::operator =((StringName*)param_3, (StringName*)&local_48);
   if (( StringName::configured != '\0' ) && ( local_48 != (void**)0x0 )) {
      StringName::unref();
   }

   LAB_00115b5b:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<StringName const&>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindT<StringName_const&>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
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

         goto LAB_00115ea1;
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
      /* WARNING: Could not recover jumptable at 0x00115d2d. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(long*)param_3 + 8);
      return;
   }

   LAB_00115ea1:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<StringName const&>::ptrcall(Object*, void const**, void*) const */void MethodBindT<StringName_const&>::ptrcall(Object *param_1, void **param_2, void *param_3) {
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

         goto LAB_00116081;
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
      /* WARNING: Could not recover jumptable at 0x00115f09. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *param_3);
      return;
   }

   LAB_00116081:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindTR<float>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindTR<float>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
         _err_print_error(&_LC72, "./core/object/method_bind.h", 0x207, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_00116150;
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

   LAB_00116150:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTR<float>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTR<float>::validated_call(MethodBindTR<float> *this, Object *param_1, Variant **param_2, Variant *param_3) {
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
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x213, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00116368;
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
   LAB_00116368:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTR<float>::ptrcall(Object*, void const**, void*) const */void MethodBindTR<float>::ptrcall(MethodBindTR<float> *this, Object *param_1, void **param_2, void *param_3) {
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
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x21e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00116527;
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
   LAB_00116527:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
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
         _err_print_error(&_LC72, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_00116760;
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

   LAB_00116760:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
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

         goto LAB_00116972;
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
   LAB_00116972:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
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

         goto LAB_00116b21;
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
   LAB_00116b21:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
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
         _err_print_error(&_LC72, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00116da0;
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

   LAB_00116da0:*(undefined4*)param_1 = 0;
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

         goto LAB_0011711f;
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
      /* WARNING: Could not recover jumptable at 0x00116fc6. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ));
      return;
   }

   LAB_0011711f:/* WARNING: Subroutine does not return */__stack_chk_fail();
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

         goto LAB_001172df;
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
      /* WARNING: Could not recover jumptable at 0x00117186. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ));
      return;
   }

   LAB_001172df:/* WARNING: Subroutine does not return */__stack_chk_fail();
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
         _err_print_error(&_LC72, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_001173b0;
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

   LAB_001173b0:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
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

         goto LAB_001175c8;
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
   LAB_001175c8:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
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

         goto LAB_00117787;
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
   LAB_00117787:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
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

         goto LAB_00117ad9;
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
      /* WARNING: Could not recover jumptable at 0x00117962. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )(auVar2._0_8_, (long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ));
      return;
   }

   LAB_00117ad9:/* WARNING: Subroutine does not return */__stack_chk_fail();
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

         goto LAB_00117cb9;
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
      /* WARNING: Could not recover jumptable at 0x00117b41. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )(auVar2._0_8_, (long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ));
      return;
   }

   LAB_00117cb9:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindTR<bool>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindTR<bool>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
         _err_print_error(&_LC72, "./core/object/method_bind.h", 0x207, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_00117d80;
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

   LAB_00117d80:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTR<bool>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTR<bool>::validated_call(MethodBindTR<bool> *this, Object *param_1, Variant **param_2, Variant *param_3) {
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
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x213, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00117f92;
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
   LAB_00117f92:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTR<bool>::ptrcall(Object*, void const**, void*) const */void MethodBindTR<bool>::ptrcall(MethodBindTR<bool> *this, Object *param_1, void **param_2, void *param_3) {
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
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x21e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00118141;
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
   LAB_00118141:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTR<Ref<AudioStreamPlayback>>::call(Object*, Variant const**, int, Callable::CallError&)
   const */Object *MethodBindTR<Ref<AudioStreamPlayback>>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
         local_58 = (Object*)0x1120a8;
         local_60 = 0;
         local_50 = 0x35;
         String::parse_latin1((StrRange*)&local_60);
         vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
         _err_print_error(&_LC72, "./core/object/method_bind.h", 0x207, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_001183c0;
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

   LAB_001183c0:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTR<Ref<AudioStreamPlayback>>::ptrcall(Object*, void const**, void*) const */void MethodBindTR<Ref<AudioStreamPlayback>>::ptrcall(MethodBindTR<Ref<AudioStreamPlayback>> *this, Object *param_1, void **param_2, void *param_3) {
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
         local_48 = (Object*)0x1120a8;
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x21e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00118646;
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
      if (pOVar5 == (Object*)0x0) goto LAB_00118646;
      *(undefined8*)param_3 = 0;
      goto LAB_00118689;
   }

   pOVar3 = (Object*)__dynamic_cast(local_48, &Object::typeinfo, &RefCounted::typeinfo, 0);
   /* WARNING: Load size is inaccurate */
   pOVar5 = *param_3;
   if (pOVar5 != pOVar3) {
      *(Object**)param_3 = pOVar3;
      if (pOVar3 == (Object*)0x0) {
         if (pOVar5 != (Object*)0x0) goto LAB_00118689;
      }
 else {
         cVar1 = RefCounted::reference();
         if (cVar1 == '\0') {
            *(undefined8*)param_3 = 0;
         }

         if (pOVar5 != (Object*)0x0) {
            LAB_00118689:cVar1 = RefCounted::unreference();
            if (cVar1 != '\0') {
               cVar1 = predelete_handler(pOVar5);
               if (cVar1 != '\0') {
                  ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
                  Memory::free_static(pOVar5, false);
               }

            }

         }

         if (local_48 == (Object*)0x0) goto LAB_00118646;
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

   LAB_00118646:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Ref<AudioStream>>::call(Object*, Variant const**, int, Callable::CallError&) const
    */Object *MethodBindTRC<Ref<AudioStream>>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
         local_58 = (Object*)0x1120a8;
         local_60 = 0;
         local_50 = 0x35;
         String::parse_latin1((StrRange*)&local_60);
         vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
         _err_print_error(&_LC72, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_00118960;
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

   LAB_00118960:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Ref<AudioStream>>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<Ref<AudioStream>>::ptrcall(MethodBindTRC<Ref<AudioStream>> *this, Object *param_1, void **param_2, void *param_3) {
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
         local_48 = (Object*)0x1120a8;
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

         goto LAB_00118be6;
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
      if (pOVar5 == (Object*)0x0) goto LAB_00118be6;
      *(undefined8*)param_3 = 0;
      goto LAB_00118c29;
   }

   pOVar3 = (Object*)__dynamic_cast(local_48, &Object::typeinfo, &RefCounted::typeinfo, 0);
   /* WARNING: Load size is inaccurate */
   pOVar5 = *param_3;
   if (pOVar5 != pOVar3) {
      *(Object**)param_3 = pOVar3;
      if (pOVar3 == (Object*)0x0) {
         if (pOVar5 != (Object*)0x0) goto LAB_00118c29;
      }
 else {
         cVar1 = RefCounted::reference();
         if (cVar1 == '\0') {
            *(undefined8*)param_3 = 0;
         }

         if (pOVar5 != (Object*)0x0) {
            LAB_00118c29:cVar1 = RefCounted::unreference();
            if (cVar1 != '\0') {
               cVar1 = predelete_handler(pOVar5);
               if (cVar1 != '\0') {
                  ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
                  Memory::free_static(pOVar5, false);
               }

            }

         }

         if (local_48 == (Object*)0x0) goto LAB_00118be6;
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

   LAB_00118be6:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<Ref<AudioStream> >::validated_call(Object*, Variant const**, Variant*) const */void MethodBindT<Ref<AudioStream>>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
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
         local_58 = (Object*)0x1120a8;
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

         goto LAB_00118ee8;
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
            LAB_00118ea6:cVar3 = RefCounted::unreference();
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
         pOVar4 = (Object*)__dynamic_cast(pOVar4, &Object::typeinfo, &AudioStream::typeinfo, 0);
         if (pOVar2 != pOVar4) {
            local_58 = pOVar4;
            if (pOVar4 != (Object*)0x0) {
               cVar3 = RefCounted::reference();
               if (cVar3 == '\0') {
                  local_58 = (Object*)0x0;
               }

            }

            if (pOVar2 != (Object*)0x0) goto LAB_00118ea6;
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

   LAB_00118ee8:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<Ref<AudioStream> >::ptrcall(Object*, void const**, void*) const */void MethodBindT<Ref<AudioStream>>::ptrcall(Object *param_1, void **param_2, void *param_3) {
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
         local_48 = (Object*)0x1120a8;
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

         goto LAB_001191ac;
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
      LAB_00119188:local_48 = (Object*)0x0;
   }
 else {
      cVar3 = RefCounted::init_ref();
      if (cVar3 == '\0') goto LAB_00119188;
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

   LAB_001191ac:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<StringName const&>::call(Object*, Variant const**, int, Callable::CallError&) const
    */Object *MethodBindT<StringName_const&>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
         _err_print_error(&_LC72, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00119470;
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
         if (in_R8D != 1) goto LAB_001194c0;
         LAB_001194b0:pVVar10 = *(Variant**)param_4;
      }
 else {
         lVar2 = *(long*)( pVVar10 + -8 );
         if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
            LAB_001194c0:uVar6 = 4;
            goto LAB_00119465;
         }

         if (in_R8D == 1) goto LAB_001194b0;
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

      cVar5 = Variant::can_convert_strict(*(undefined4*)pVVar10, 0x15);
      uVar4 = _LC224;
      if (cVar5 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = uVar4;
      }

      Variant::operator_cast_to_StringName((Variant*)&local_48);
      ( *(code*)pVVar11 )((Variant*)( (long)plVar9 + (long)pVVar1 ), (Variant*)&local_48);
      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }
 else {
      uVar6 = 3;
      LAB_00119465:*in_R9 = uVar6;
      in_R9[2] = 1;
   }

   LAB_00119470:*(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<Ref<AudioStream> >::call(Object*, Variant const**, int, Callable::CallError&) const
    */Object *MethodBindT<Ref<AudioStream>>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
         local_48 = (Object*)0x1120a8;
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error(&_LC72, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00119840;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (Object*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar13 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (1 < in_R8D) {
      uVar7 = 3;
      LAB_00119835:*in_R9 = uVar7;
      in_R9[2] = 1;
      goto LAB_00119840;
   }

   pVVar12 = param_2[5];
   if (pVVar12 == (Variant*)0x0) {
      if (in_R8D != 1) goto LAB_00119890;
      LAB_00119880:pVVar12 = *(Variant**)param_4;
   }
 else {
      lVar2 = *(long*)( pVVar12 + -8 );
      if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
         LAB_00119890:uVar7 = 4;
         goto LAB_00119835;
      }

      if (in_R8D == 1) goto LAB_00119880;
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
   uVar4 = _LC225;
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
            LAB_001199ad:cVar6 = RefCounted::unreference();
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
         pOVar8 = (Object*)__dynamic_cast(pOVar8, &Object::typeinfo, &AudioStream::typeinfo, 0);
         if (pOVar5 != pOVar8) {
            local_48 = pOVar8;
            if (pOVar8 != (Object*)0x0) {
               cVar6 = RefCounted::reference();
               if (cVar6 == '\0') {
                  local_48 = (Object*)0x0;
               }

            }

            if (pOVar5 != (Object*)0x0) goto LAB_001199ad;
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

   LAB_00119840:*(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTR<Ref<AudioStreamPlayback>>::validated_call(Object*, Variant const**, Variant*) const
    */void MethodBindTR<Ref<AudioStreamPlayback>>::validated_call(MethodBindTR<Ref<AudioStreamPlayback>> *this, Object *param_1, Variant **param_2, Variant *param_3) {
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
         local_48 = (Variant**)0x1120a8;
         local_50 = (Object*)0x0;
         local_40 = (Object*)0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x213, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00119b56;
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

   LAB_00119b56:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Ref<AudioStream>>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTRC<Ref<AudioStream>>::validated_call(MethodBindTRC<Ref<AudioStream>> *this, Object *param_1, Variant **param_2, Variant *param_3) {
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
         local_48 = (Variant**)0x1120a8;
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

         goto LAB_00119d86;
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

   LAB_00119d86:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void call_with_variant_args_dv<__UnexistingClass, AudioServer::PlaybackType>(__UnexistingClass*,
   void (__UnexistingClass::*)(AudioServer::PlaybackType), Variant const**, int,
   Callable::CallError&, Vector<Variant> const&) */void call_with_variant_args_dv<__UnexistingClass,AudioServer::PlaybackType>(__UnexistingClass *param_1, _func_void_PlaybackType *param_2, Variant **param_3, int param_4, CallError *param_5, Vector *param_6) {
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
      goto LAB_0011a02d;
   }

   lVar1 = *(long*)( in_stack_00000008 + 8 );
   if (lVar1 == 0) {
      if (uVar8 != 1) goto LAB_0011a090;
   }
 else {
      lVar2 = *(long*)( lVar1 + -8 );
      if ((int)lVar2 < (int)( uVar8 ^ 1 )) {
         LAB_0011a090:uVar6 = 4;
         LAB_0011a02d:*(undefined4*)param_6 = uVar6;
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
         goto LAB_00119fab;
      }

   }

   this * (Variant**)CONCAT44(in_register_0000000c, param_4);
   LAB_00119fab:*(undefined4*)param_6 = 0;
   if (( (ulong)param_2 & 1 ) != 0) {
      param_2 = *(_func_void_PlaybackType**)( param_2 + *(long*)( param_1 + (long)param_3 ) + -1 );
   }

   cVar5 = Variant::can_convert_strict(*(undefined4*)this, 2);
   uVar4 = _LC226;
   if (cVar5 == '\0') {
      *(undefined4*)param_6 = 2;
      *(undefined8*)( param_6 + 4 ) = uVar4;
   }

   Variant::operator_cast_to_long(this);
   /* WARNING: Could not recover jumptable at 0x0011a006. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( *param_2 )((char)( param_1 + (long)param_3 ));
   return;
}
/* MethodBindT<AudioServer::PlaybackType>::call(Object*, Variant const**, int, Callable::CallError&)
   const */Object *MethodBindT<AudioServer::PlaybackType>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
   p_Var2 = (__UnexistingClass*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( p_Var2 != (__UnexistingClass*)0x0 ) && ( *(long*)( p_Var2 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( p_Var2 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_2 + 3 ));
      if (*(long*)( p_Var2 + 8 ) == 0) {
         plVar1 = *(long**)( p_Var2 + 0x118 );
         if (plVar1 == (long*)0x0) {
            plVar1 = (long*)( **(code**)( *(long*)p_Var2 + 0x40 ) )(p_Var2);
         }

      }
 else {
         plVar1 = (long*)( *(long*)( p_Var2 + 8 ) + 0x20 );
      }

      in_R8 = (CallError*)( (ulong)in_R8 & 0xffffffff );
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
         _err_print_error(&_LC72, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         *(undefined4*)param_1 = 0;
         *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
         goto LAB_0011a0f6;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   call_with_variant_args_dv<__UnexistingClass,AudioServer::PlaybackType>(p_Var2, (_func_void_PlaybackType*)param_2[0xb], (Variant**)param_2[0xc], (int)param_4, in_R8, in_R9);
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   LAB_0011a0f6:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
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
      goto LAB_0011a3bd;
   }

   lVar1 = *(long*)( in_stack_00000008 + 8 );
   if (lVar1 == 0) {
      if (uVar8 != 1) goto LAB_0011a420;
   }
 else {
      lVar2 = *(long*)( lVar1 + -8 );
      if ((int)lVar2 < (int)( uVar8 ^ 1 )) {
         LAB_0011a420:uVar6 = 4;
         LAB_0011a3bd:*(undefined4*)param_6 = uVar6;
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
         goto LAB_0011a33b;
      }

   }

   this * (Variant**)CONCAT44(in_register_0000000c, param_4);
   LAB_0011a33b:*(undefined4*)param_6 = 0;
   if (( (ulong)param_2 & 1 ) != 0) {
      param_2 = *(_func_void_int**)( param_2 + *(long*)( param_1 + (long)param_3 ) + -1 );
   }

   cVar5 = Variant::can_convert_strict(*(undefined4*)this, 2);
   uVar4 = _LC226;
   if (cVar5 == '\0') {
      *(undefined4*)param_6 = 2;
      *(undefined8*)( param_6 + 4 ) = uVar4;
   }

   Variant::operator_cast_to_int(this);
   /* WARNING: Could not recover jumptable at 0x0011a396. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( *param_2 )((int)( param_1 + (long)param_3 ));
   return;
}
/* MethodBindT<int>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindT<int>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
   p_Var2 = (__UnexistingClass*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( p_Var2 != (__UnexistingClass*)0x0 ) && ( *(long*)( p_Var2 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( p_Var2 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_2 + 3 ));
      if (*(long*)( p_Var2 + 8 ) == 0) {
         plVar1 = *(long**)( p_Var2 + 0x118 );
         if (plVar1 == (long*)0x0) {
            plVar1 = (long*)( **(code**)( *(long*)p_Var2 + 0x40 ) )(p_Var2);
         }

      }
 else {
         plVar1 = (long*)( *(long*)( p_Var2 + 8 ) + 0x20 );
      }

      in_R8 = (CallError*)( (ulong)in_R8 & 0xffffffff );
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
         _err_print_error(&_LC72, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         *(undefined4*)param_1 = 0;
         *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
         goto LAB_0011a486;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   call_with_variant_args_dv<__UnexistingClass,int>(p_Var2, (_func_void_int*)param_2[0xb], (Variant**)param_2[0xc], (int)param_4, in_R8, in_R9);
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   LAB_0011a486:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void call_with_variant_args_dv<__UnexistingClass,
   AudioStreamPlayer3D::DopplerTracking>(__UnexistingClass*, void
   (__UnexistingClass::*)(AudioStreamPlayer3D::DopplerTracking), Variant const**, int,
   Callable::CallError&, Vector<Variant> const&) */void call_with_variant_args_dv<__UnexistingClass,AudioStreamPlayer3D::DopplerTracking>(__UnexistingClass *param_1, _func_void_DopplerTracking *param_2, Variant **param_3, int param_4, CallError *param_5, Vector *param_6) {
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
      goto LAB_0011a74d;
   }

   lVar1 = *(long*)( in_stack_00000008 + 8 );
   if (lVar1 == 0) {
      if (uVar8 != 1) goto LAB_0011a7b0;
   }
 else {
      lVar2 = *(long*)( lVar1 + -8 );
      if ((int)lVar2 < (int)( uVar8 ^ 1 )) {
         LAB_0011a7b0:uVar6 = 4;
         LAB_0011a74d:*(undefined4*)param_6 = uVar6;
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
         goto LAB_0011a6cb;
      }

   }

   this * (Variant**)CONCAT44(in_register_0000000c, param_4);
   LAB_0011a6cb:*(undefined4*)param_6 = 0;
   if (( (ulong)param_2 & 1 ) != 0) {
      param_2 = *(_func_void_DopplerTracking**)( param_2 + *(long*)( param_1 + (long)param_3 ) + -1 );
   }

   cVar5 = Variant::can_convert_strict(*(undefined4*)this, 2);
   uVar4 = _LC226;
   if (cVar5 == '\0') {
      *(undefined4*)param_6 = 2;
      *(undefined8*)( param_6 + 4 ) = uVar4;
   }

   Variant::operator_cast_to_long(this);
   /* WARNING: Could not recover jumptable at 0x0011a726. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( *param_2 )((char)( param_1 + (long)param_3 ));
   return;
}
/* MethodBindT<AudioStreamPlayer3D::DopplerTracking>::call(Object*, Variant const**, int,
   Callable::CallError&) const */Object *MethodBindT<AudioStreamPlayer3D::DopplerTracking>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
   p_Var2 = (__UnexistingClass*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( p_Var2 != (__UnexistingClass*)0x0 ) && ( *(long*)( p_Var2 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( p_Var2 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_2 + 3 ));
      if (*(long*)( p_Var2 + 8 ) == 0) {
         plVar1 = *(long**)( p_Var2 + 0x118 );
         if (plVar1 == (long*)0x0) {
            plVar1 = (long*)( **(code**)( *(long*)p_Var2 + 0x40 ) )(p_Var2);
         }

      }
 else {
         plVar1 = (long*)( *(long*)( p_Var2 + 8 ) + 0x20 );
      }

      in_R8 = (CallError*)( (ulong)in_R8 & 0xffffffff );
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
         _err_print_error(&_LC72, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         *(undefined4*)param_1 = 0;
         *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
         goto LAB_0011a816;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   call_with_variant_args_dv<__UnexistingClass,AudioStreamPlayer3D::DopplerTracking>(p_Var2, (_func_void_DopplerTracking*)param_2[0xb], (Variant**)param_2[0xc], (int)param_4, in_R8, in_R9);
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   LAB_0011a816:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void call_with_variant_args_dv<__UnexistingClass,
   AudioStreamPlayer3D::AttenuationModel>(__UnexistingClass*, void
   (__UnexistingClass::*)(AudioStreamPlayer3D::AttenuationModel), Variant const**, int,
   Callable::CallError&, Vector<Variant> const&) */void call_with_variant_args_dv<__UnexistingClass,AudioStreamPlayer3D::AttenuationModel>(__UnexistingClass *param_1, _func_void_AttenuationModel *param_2, Variant **param_3, int param_4, CallError *param_5, Vector *param_6) {
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
      goto LAB_0011aadd;
   }

   lVar1 = *(long*)( in_stack_00000008 + 8 );
   if (lVar1 == 0) {
      if (uVar8 != 1) goto LAB_0011ab40;
   }
 else {
      lVar2 = *(long*)( lVar1 + -8 );
      if ((int)lVar2 < (int)( uVar8 ^ 1 )) {
         LAB_0011ab40:uVar6 = 4;
         LAB_0011aadd:*(undefined4*)param_6 = uVar6;
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
         goto LAB_0011aa5b;
      }

   }

   this * (Variant**)CONCAT44(in_register_0000000c, param_4);
   LAB_0011aa5b:*(undefined4*)param_6 = 0;
   if (( (ulong)param_2 & 1 ) != 0) {
      param_2 = *(_func_void_AttenuationModel**)( param_2 + *(long*)( param_1 + (long)param_3 ) + -1 );
   }

   cVar5 = Variant::can_convert_strict(*(undefined4*)this, 2);
   uVar4 = _LC226;
   if (cVar5 == '\0') {
      *(undefined4*)param_6 = 2;
      *(undefined8*)( param_6 + 4 ) = uVar4;
   }

   Variant::operator_cast_to_long(this);
   /* WARNING: Could not recover jumptable at 0x0011aab6. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( *param_2 )((char)( param_1 + (long)param_3 ));
   return;
}
/* MethodBindT<AudioStreamPlayer3D::AttenuationModel>::call(Object*, Variant const**, int,
   Callable::CallError&) const */Object *MethodBindT<AudioStreamPlayer3D::AttenuationModel>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
   p_Var2 = (__UnexistingClass*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( p_Var2 != (__UnexistingClass*)0x0 ) && ( *(long*)( p_Var2 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( p_Var2 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_2 + 3 ));
      if (*(long*)( p_Var2 + 8 ) == 0) {
         plVar1 = *(long**)( p_Var2 + 0x118 );
         if (plVar1 == (long*)0x0) {
            plVar1 = (long*)( **(code**)( *(long*)p_Var2 + 0x40 ) )(p_Var2);
         }

      }
 else {
         plVar1 = (long*)( *(long*)( p_Var2 + 8 ) + 0x20 );
      }

      in_R8 = (CallError*)( (ulong)in_R8 & 0xffffffff );
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
         _err_print_error(&_LC72, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         *(undefined4*)param_1 = 0;
         *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
         goto LAB_0011aba6;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   call_with_variant_args_dv<__UnexistingClass,AudioStreamPlayer3D::AttenuationModel>(p_Var2, (_func_void_AttenuationModel*)param_2[0xb], (Variant**)param_2[0xc], (int)param_4, in_R8, in_R9);
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   LAB_0011aba6:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
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
      goto LAB_0011ae6d;
   }

   lVar1 = *(long*)( in_stack_00000008 + 8 );
   if (lVar1 == 0) {
      if (uVar8 != 1) goto LAB_0011aed0;
   }
 else {
      lVar2 = *(long*)( lVar1 + -8 );
      if ((int)lVar2 < (int)( uVar8 ^ 1 )) {
         LAB_0011aed0:uVar6 = 4;
         LAB_0011ae6d:*(undefined4*)param_6 = uVar6;
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
         goto LAB_0011adeb;
      }

   }

   this * (Variant**)CONCAT44(in_register_0000000c, param_4);
   LAB_0011adeb:*(undefined4*)param_6 = 0;
   if (( (ulong)param_2 & 1 ) != 0) {
      param_2 = *(_func_void_uint**)( param_2 + *(long*)( param_1 + (long)param_3 ) + -1 );
   }

   cVar5 = Variant::can_convert_strict(*(undefined4*)this, 2);
   uVar4 = _LC226;
   if (cVar5 == '\0') {
      *(undefined4*)param_6 = 2;
      *(undefined8*)( param_6 + 4 ) = uVar4;
   }

   Variant::operator_cast_to_unsigned_int(this);
   /* WARNING: Could not recover jumptable at 0x0011ae46. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( *param_2 )(( uint )(param_1 + (long)param_3));
   return;
}
/* MethodBindT<unsigned int>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindT<unsigned_int>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
   p_Var2 = (__UnexistingClass*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( p_Var2 != (__UnexistingClass*)0x0 ) && ( *(long*)( p_Var2 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( p_Var2 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_2 + 3 ));
      if (*(long*)( p_Var2 + 8 ) == 0) {
         plVar1 = *(long**)( p_Var2 + 0x118 );
         if (plVar1 == (long*)0x0) {
            plVar1 = (long*)( **(code**)( *(long*)p_Var2 + 0x40 ) )(p_Var2);
         }

      }
 else {
         plVar1 = (long*)( *(long*)( p_Var2 + 8 ) + 0x20 );
      }

      in_R8 = (CallError*)( (ulong)in_R8 & 0xffffffff );
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
         _err_print_error(&_LC72, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         *(undefined4*)param_1 = 0;
         *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
         goto LAB_0011af36;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   call_with_variant_args_dv<__UnexistingClass,unsigned_int>(p_Var2, (_func_void_uint*)param_2[0xb], (Variant**)param_2[0xc], (int)param_4, in_R8, in_R9);
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   LAB_0011af36:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
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
      goto LAB_0011b1fd;
   }

   lVar1 = *(long*)( in_stack_00000008 + 8 );
   if (lVar1 == 0) {
      if (uVar8 != 1) goto LAB_0011b260;
   }
 else {
      lVar2 = *(long*)( lVar1 + -8 );
      if ((int)lVar2 < (int)( uVar8 ^ 1 )) {
         LAB_0011b260:uVar6 = 4;
         LAB_0011b1fd:*(undefined4*)param_6 = uVar6;
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
         goto LAB_0011b17b;
      }

   }

   this * (Variant**)CONCAT44(in_register_0000000c, param_4);
   LAB_0011b17b:*(undefined4*)param_6 = 0;
   if (( (ulong)param_2 & 1 ) != 0) {
      param_2 = *(_func_void_bool**)( param_2 + *(long*)( param_1 + (long)param_3 ) + -1 );
   }

   cVar5 = Variant::can_convert_strict(*(undefined4*)this, 1);
   uVar4 = _LC227;
   if (cVar5 == '\0') {
      *(undefined4*)param_6 = 2;
      *(undefined8*)( param_6 + 4 ) = uVar4;
   }

   Variant::operator_cast_to_bool(this);
   /* WARNING: Could not recover jumptable at 0x0011b1d7. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( *param_2 )(SUB81(param_1 + (long)param_3, 0));
   return;
}
/* MethodBindT<bool>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindT<bool>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
   p_Var2 = (__UnexistingClass*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( p_Var2 != (__UnexistingClass*)0x0 ) && ( *(long*)( p_Var2 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( p_Var2 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_2 + 3 ));
      if (*(long*)( p_Var2 + 8 ) == 0) {
         plVar1 = *(long**)( p_Var2 + 0x118 );
         if (plVar1 == (long*)0x0) {
            plVar1 = (long*)( **(code**)( *(long*)p_Var2 + 0x40 ) )(p_Var2);
         }

      }
 else {
         plVar1 = (long*)( *(long*)( p_Var2 + 8 ) + 0x20 );
      }

      in_R8 = (CallError*)( (ulong)in_R8 & 0xffffffff );
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
         _err_print_error(&_LC72, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         *(undefined4*)param_1 = 0;
         *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
         goto LAB_0011b2c6;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   call_with_variant_args_dv<__UnexistingClass,bool>(p_Var2, (_func_void_bool*)param_2[0xb], (Variant**)param_2[0xc], (int)param_4, in_R8, in_R9);
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   LAB_0011b2c6:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
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
      goto LAB_0011b58d;
   }

   lVar1 = *(long*)( in_stack_00000008 + 8 );
   if (lVar1 == 0) {
      if (uVar8 != 1) goto LAB_0011b5f0;
   }
 else {
      lVar2 = *(long*)( lVar1 + -8 );
      if ((int)lVar2 < (int)( uVar8 ^ 1 )) {
         LAB_0011b5f0:uVar6 = 4;
         LAB_0011b58d:*(undefined4*)param_6 = uVar6;
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
         goto LAB_0011b50b;
      }

   }

   this * (Variant**)CONCAT44(in_register_0000000c, param_4);
   LAB_0011b50b:*(undefined4*)param_6 = 0;
   if (( (ulong)param_2 & 1 ) != 0) {
      param_2 = *(_func_void_float**)( param_2 + *(long*)( param_1 + (long)param_3 ) + -1 );
   }

   cVar5 = Variant::can_convert_strict(*(undefined4*)this, 3);
   uVar4 = _LC73;
   if (cVar5 == '\0') {
      *(undefined4*)param_6 = 2;
      *(undefined8*)( param_6 + 4 ) = uVar4;
   }

   fVar9 = Variant::operator_cast_to_float(this);
   /* WARNING: Could not recover jumptable at 0x0011b564. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( *param_2 )(fVar9);
   return;
}
/* MethodBindT<float>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindT<float>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
   p_Var2 = (__UnexistingClass*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( p_Var2 != (__UnexistingClass*)0x0 ) && ( *(long*)( p_Var2 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( p_Var2 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_2 + 3 ));
      if (*(long*)( p_Var2 + 8 ) == 0) {
         plVar1 = *(long**)( p_Var2 + 0x118 );
         if (plVar1 == (long*)0x0) {
            plVar1 = (long*)( **(code**)( *(long*)p_Var2 + 0x40 ) )(p_Var2);
         }

      }
 else {
         plVar1 = (long*)( *(long*)( p_Var2 + 8 ) + 0x20 );
      }

      in_R8 = (CallError*)( (ulong)in_R8 & 0xffffffff );
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
         _err_print_error(&_LC72, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         *(undefined4*)param_1 = 0;
         *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
         goto LAB_0011b656;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   call_with_variant_args_dv<__UnexistingClass,float>(p_Var2, (_func_void_float*)param_2[0xb], (Variant**)param_2[0xc], (int)param_4, in_R8, in_R9);
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   LAB_0011b656:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* AudioStreamPlayer3D::_is_autoplay_enabled_bind_compat_86907() */void AudioStreamPlayer3D::_GLOBAL__sub_I__is_autoplay_enabled_bind_compat_86907(void) {
   if (AudioStreamPlayerInternal::PARAM_PREFIX == '\0') {
      AudioStreamPlayerInternal::PARAM_PREFIX = '\x01';
      AudioStreamPlayerInternal::PARAM_PREFIX = 0;
      String::parse_latin1((String*)&AudioStreamPlayerInternal::PARAM_PREFIX, "parameters/");
      __cxa_atexit(String::~String, &AudioStreamPlayerInternal::PARAM_PREFIX, &__dso_handle);
   }

   if (AudioStreamRandomizer::base_property_helper == '\0') {
      AudioStreamRandomizer::base_property_helper = '\x01';
      AudioStreamRandomizer::base_property_helper._0_16_ = (undefined1[16])0x0;
      AudioStreamRandomizer::base_property_helper._24_16_ = (undefined1[16])0x0;
      AudioStreamRandomizer::base_property_helper._40_16_ = (undefined1[16])0x0;
      AudioStreamRandomizer::base_property_helper._56_8_ = 2;
      AudioStreamRandomizer::base_property_helper._64_8_ = 0;
      __cxa_atexit(PropertyListHelper::~PropertyListHelper, AudioStreamRandomizer::base_property_helper, &__dso_handle);
   }

   _DAT_001089b0 = 0;
   speaker_directions = __LC201;
   _DAT_00108968 = _UNK_0011ce68;
   ram0x00108970 = __LC230;
   uRam0000000000108978 = _UNK_0011ce78;
   _DAT_00108980 = __LC209;
   uRam0000000000108988 = _UNK_0011ce88;
   _DAT_00108990 = __LC232;
   uRam0000000000108998 = _UNK_0011ce98;
   _DAT_001089a0 = __LC233;
   uRam00000000001089a8 = __LC188;
   return;
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
/* WARNING: Control flow encountered bad instruction data *//* PropertyListHelper::~PropertyListHelper() */void PropertyListHelper::~PropertyListHelper(PropertyListHelper *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* String::~String() */void String::~String(String *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<AudioServer::PlaybackType>::~MethodBindTRC() */void MethodBindTRC<AudioServer::PlaybackType>::~MethodBindTRC(MethodBindTRC<AudioServer::PlaybackType> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<AudioServer::PlaybackType>::~MethodBindT() */void MethodBindT<AudioServer::PlaybackType>::~MethodBindT(MethodBindT<AudioServer::PlaybackType> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTR<Ref<AudioStreamPlayback>>::~MethodBindTR() */void MethodBindTR<Ref<AudioStreamPlayback>>::~MethodBindTR(MethodBindTR<Ref<AudioStreamPlayback>> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<float>::~MethodBindTRC() */void MethodBindTRC<float>::~MethodBindTRC(MethodBindTRC<float> *this) {
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
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<bool>::~MethodBindTRC() */void MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<bool>::~MethodBindT() */void MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<AudioStreamPlayer3D::DopplerTracking>::~MethodBindTRC() */void MethodBindTRC<AudioStreamPlayer3D::DopplerTracking>::~MethodBindTRC(MethodBindTRC<AudioStreamPlayer3D::DopplerTracking> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<AudioStreamPlayer3D::DopplerTracking>::~MethodBindT() */void MethodBindT<AudioStreamPlayer3D::DopplerTracking>::~MethodBindT(MethodBindT<AudioStreamPlayer3D::DopplerTracking> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<AudioStreamPlayer3D::AttenuationModel>::~MethodBindTRC() */void MethodBindTRC<AudioStreamPlayer3D::AttenuationModel>::~MethodBindTRC(MethodBindTRC<AudioStreamPlayer3D::AttenuationModel> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<AudioStreamPlayer3D::AttenuationModel>::~MethodBindT() */void MethodBindT<AudioStreamPlayer3D::AttenuationModel>::~MethodBindT(MethodBindT<AudioStreamPlayer3D::AttenuationModel> *this) {
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
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<StringName>::~MethodBindTRC() */void MethodBindTRC<StringName>::~MethodBindTRC(MethodBindTRC<StringName> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<StringName const&>::~MethodBindT() */void MethodBindT<StringName_const&>::~MethodBindT(MethodBindT<StringName_const&> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTR<float>::~MethodBindTR() */void MethodBindTR<float>::~MethodBindTR(MethodBindTR<float> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<>::~MethodBindT() */void MethodBindT<>::~MethodBindT(MethodBindT<> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<float>::~MethodBindT() */void MethodBindT<float>::~MethodBindT(MethodBindT<float> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<Ref<AudioStream>>::~MethodBindTRC() */void MethodBindTRC<Ref<AudioStream>>::~MethodBindTRC(MethodBindTRC<Ref<AudioStream>> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<Ref<AudioStream> >::~MethodBindT() */void MethodBindT<Ref<AudioStream>>::~MethodBindT(MethodBindT<Ref<AudioStream>> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTR<bool>::~MethodBindTR() */void MethodBindTR<bool>::~MethodBindTR(MethodBindTR<bool> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* CallableCustomMethodPointer<AudioStreamPlayer3D, void, float>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<AudioStreamPlayer3D,void,float>::~CallableCustomMethodPointer(CallableCustomMethodPointer<AudioStreamPlayer3D,void,float> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* CallableCustomMethodPointer<AudioStreamPlayer3D, void>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<AudioStreamPlayer3D,void>::~CallableCustomMethodPointer(CallableCustomMethodPointer<AudioStreamPlayer3D,void> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* StringName::~StringName() */void StringName::~StringName(StringName *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}


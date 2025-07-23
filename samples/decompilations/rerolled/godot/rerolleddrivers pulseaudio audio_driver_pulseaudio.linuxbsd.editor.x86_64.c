/* AudioDriverPulseAudio::get_mix_rate() const */undefined4 AudioDriverPulseAudio::get_mix_rate(AudioDriverPulseAudio *this) {
   return *(undefined4*)( this + 0x1f0 );
}
/* AudioDriverPulseAudio::get_speaker_mode() const */void AudioDriverPulseAudio::get_speaker_mode(AudioDriverPulseAudio *this) {
   AudioDriver::get_speaker_mode_by_total_channels((int)this);
   return;
}
/* AudioDriverPulseAudio::unlock() */void AudioDriverPulseAudio::unlock(AudioDriverPulseAudio *this) {
   pthread_mutex_unlock((pthread_mutex_t*)( this + 0x50 ));
   return;
}
/* CowData<short>::_copy_on_write() [clone .isra.0] */void CowData<short>::_copy_on_write(CowData<short> *this) {
   long *plVar1;
   long lVar2;
   code *pcVar3;
   size_t __n;
   undefined8 *puVar4;
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
   __n = lVar2 * 2;
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
/* AudioDriverPulseAudio::start() */void AudioDriverPulseAudio::start(AudioDriverPulseAudio *this) {
   this[0x228] = (AudioDriverPulseAudio)0x1;
   return;
}
/* AudioDriverPulseAudio::lock() */void AudioDriverPulseAudio::lock(AudioDriverPulseAudio *this) {
   int iVar1;
   iVar1 = pthread_mutex_lock((pthread_mutex_t*)( this + 0x50 ));
   if (iVar1 == 0) {
      return;
   }

   /* WARNING: Subroutine does not return */
   std::__throw_system_error(iVar1);
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* AudioDriverPulseAudio::get_latency() */void AudioDriverPulseAudio::get_latency(AudioDriverPulseAudio *this) {
   int iVar1;
   long in_FS_OFFSET;
   int local_1c;
   ulong local_18;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(code**)( *(long*)this + 0x38 ) == lock) {
      iVar1 = pthread_mutex_lock((pthread_mutex_t*)( this + 0x50 ));
      if (iVar1 != 0) {
         /* WARNING: Subroutine does not return */
         std::__throw_system_error(iVar1);
      }

   }
 else {
      ( **(code**)( *(long*)this + 0x38 ) )();
   }

   local_18 = 0;
   iVar1 = ( *_pa_stream_get_state_dylibloader_wrapper_pulse )(*(undefined8*)( this + 0x88 ));
   if (iVar1 == 2) {
      local_1c = 0;
      iVar1 = ( *_pa_stream_get_latency_dylibloader_wrapper_pulse )(*(undefined8*)( this + 0x88 ), &local_18, &local_1c);
      if (( -1 < iVar1 ) && ( local_1c != 0 )) {
         local_18 = 0;
         goto LAB_0010033a;
      }

   }

   if (local_18 != 0) {
      *(float*)( this + 0x22c ) = (float)( (double)local_18 / __LC7 );
   }

   LAB_0010033a:if (*(code**)( *(long*)this + 0x40 ) == unlock) {
      pthread_mutex_unlock((pthread_mutex_t*)( this + 0x50 ));
   }
 else {
      ( **(code**)( *(long*)this + 0x40 ) )(this);
   }

   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* AudioDriverPulseAudio::pa_server_info_cb(pa_context*, pa_server_info const*, void*) */void AudioDriverPulseAudio::pa_server_info_cb(pa_context *param_1, pa_server_info *param_2, void *param_3) {
   long lVar1;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_2 == (pa_server_info*)0x0) {
      _err_print_error("pa_server_info_cb", "drivers/pulseaudio/audio_driver_pulseaudio.cpp", 0x6e, "Parameter \"i\" is null.", "PulseAudio server info is null.", 0, 0);
   }
 else {
      if (*(char**)( param_2 + 0x38 ) != (char*)0x0) {
         strlen(*(char**)( param_2 + 0x38 ));
      }

      String::parse_latin1((StrRange*)( (long)param_3 + 0x1c8 ));
      if (*(char**)( param_2 + 0x30 ) != (char*)0x0) {
         strlen(*(char**)( param_2 + 0x30 ));
      }

      String::parse_latin1((StrRange*)( (long)param_3 + 0x1b0 ));
      *(int*)( (long)param_3 + 0x204 ) = *(int*)( (long)param_3 + 0x204 ) + 1;
   }

   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* AudioDriverPulseAudio::finish() */void AudioDriverPulseAudio::finish(AudioDriverPulseAudio *this) {
   char cVar1;
   cVar1 = Thread::is_started();
   if (cVar1 != '\0') {
      this[0x229] = (AudioDriverPulseAudio)0x1;
      cVar1 = Thread::is_started();
      if (cVar1 != '\0') {
         Thread::wait_to_finish();
      }

      if (*(long*)( this + 0x88 ) != 0) {
         ( *_pa_stream_disconnect_dylibloader_wrapper_pulse )();
         ( *_pa_stream_unref_dylibloader_wrapper_pulse )(*(undefined8*)( this + 0x88 ));
         *(undefined8*)( this + 0x88 ) = 0;
      }

      if (*(long*)( this + 0x80 ) != 0) {
         ( *_pa_context_disconnect_dylibloader_wrapper_pulse )();
         ( *_pa_context_unref_dylibloader_wrapper_pulse )(*(undefined8*)( this + 0x80 ));
         *(undefined8*)( this + 0x80 ) = 0;
      }

      if (*(long*)( this + 0x78 ) != 0) {
         ( *_pa_mainloop_free_dylibloader_wrapper_pulse )();
         *(undefined8*)( this + 0x78 ) = 0;
         return;
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
/* AudioDriverPulseAudio::get_output_device() */void AudioDriverPulseAudio::get_output_device(void) {
   long in_RSI;
   CowData<char32_t> *in_RDI;
   *(undefined8*)in_RDI = 0;
   if (*(long*)( in_RSI + 0x1a0 ) != 0) {
      CowData<char32_t>::_ref(in_RDI, (CowData*)( in_RSI + 0x1a0 ));
   }

   return;
}
/* AudioDriverPulseAudio::set_input_device(String const&) */void AudioDriverPulseAudio::set_input_device(AudioDriverPulseAudio *this, String *param_1) {
   int iVar1;
   if (*(code**)( *(long*)this + 0x38 ) == lock) {
      iVar1 = pthread_mutex_lock((pthread_mutex_t*)( this + 0x50 ));
      if (iVar1 != 0) {
         /* WARNING: Subroutine does not return */
         std::__throw_system_error(iVar1);
      }

   }
 else {
      ( **(code**)( *(long*)this + 0x38 ) )();
   }

   if (*(long*)( this + 0x1c0 ) != *(long*)param_1) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0x1c0 ), (CowData*)param_1);
   }

   if (*(code**)( *(long*)this + 0x40 ) == unlock) {
      pthread_mutex_unlock((pthread_mutex_t*)( this + 0x50 ));
      return;
   }

   /* WARNING: Could not recover jumptable at 0x001006f1. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( **(code**)( *(long*)this + 0x40 ) )(this);
   return;
}
/* AudioDriverPulseAudio::set_output_device(String const&) */void AudioDriverPulseAudio::set_output_device(AudioDriverPulseAudio *this, String *param_1) {
   int iVar1;
   if (*(code**)( *(long*)this + 0x38 ) == lock) {
      iVar1 = pthread_mutex_lock((pthread_mutex_t*)( this + 0x50 ));
      if (iVar1 != 0) {
         /* WARNING: Subroutine does not return */
         std::__throw_system_error(iVar1);
      }

   }
 else {
      ( **(code**)( *(long*)this + 0x38 ) )();
   }

   if (*(long*)( this + 0x1a8 ) != *(long*)param_1) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0x1a8 ), (CowData*)param_1);
   }

   if (*(code**)( *(long*)this + 0x40 ) == unlock) {
      pthread_mutex_unlock((pthread_mutex_t*)( this + 0x50 ));
      return;
   }

   /* WARNING: Could not recover jumptable at 0x00100781. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( **(code**)( *(long*)this + 0x40 ) )(this);
   return;
}
/* AudioDriverPulseAudio::get_input_device() */void AudioDriverPulseAudio::get_input_device(void) {
   int iVar1;
   long *in_RSI;
   CowData<char32_t> *in_RDI;
   if (*(code**)( *in_RSI + 0x38 ) == lock) {
      iVar1 = pthread_mutex_lock((pthread_mutex_t*)( in_RSI + 10 ));
      if (iVar1 != 0) {
         /* WARNING: Subroutine does not return */
         std::__throw_system_error(iVar1);
      }

   }
 else {
      ( **(code**)( *in_RSI + 0x38 ) )();
   }

   *(undefined8*)in_RDI = 0;
   if (in_RSI[0x37] != 0) {
      CowData<char32_t>::_ref(in_RDI, (CowData*)( in_RSI + 0x37 ));
   }

   if (*(code**)( *in_RSI + 0x40 ) == unlock) {
      pthread_mutex_unlock((pthread_mutex_t*)( in_RSI + 10 ));
      return;
   }

   ( **(code**)( *in_RSI + 0x40 ) )();
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* AudioDriverPulseAudio::pa_sink_info_cb(pa_context*, pa_sink_info const*, int, void*) */void AudioDriverPulseAudio::pa_sink_info_cb(pa_context *param_1, pa_sink_info *param_2, int param_3, void *param_4) {
   long *plVar1;
   undefined8 uVar2;
   code *pcVar3;
   long lVar4;
   char *pcVar5;
   undefined4 uVar6;
   long in_FS_OFFSET;
   long local_40;
   char *local_38;
   size_t local_30;
   long local_20;
   pcVar3 = _pa_strerror_dylibloader_wrapper_pulse;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_3 < 1) {
      if (param_3 == 0) {
         for (int i = 0; i < 8; i++) {
            uVar2 = *(undefined8*)( param_2 + ( 16*i + 44 ) );
            *(undefined8*)( (long)param_4 + ( 16*i + 152 ) ) = *(undefined8*)( param_2 + ( 16*i + 36 ) );
            *(undefined8*)( (long)param_4 + ( 16*i + 160 ) ) = uVar2;
         }

         uVar6 = *(undefined4*)( param_2 + 0xa4 );
         *(int*)( (long)param_4 + 0x204 ) = *(int*)( (long)param_4 + 0x204 ) + 1;
         *(undefined4*)( (long)param_4 + 0x118 ) = uVar6;
      }
 else {
         uVar6 = ( *_pa_context_errno_dylibloader_wrapper_pulse )();
         local_38 = (char*)( *pcVar3 )(uVar6);
         local_40 = 0;
         local_30 = 0;
         if (local_38 != (char*)0x0) {
            local_30 = strlen(local_38);
         }

         String::parse_latin1((StrRange*)&local_40);
         operator+((char *)&
         local_38,(String*)"PulseAudio: sink info error: ";
         _err_print_error("pa_sink_info_cb", "drivers/pulseaudio/audio_driver_pulseaudio.cpp", 0x51, &local_38, 0, 0);
         pcVar5 = local_38;
         if (local_38 != (char*)0x0) {
            LOCK();
            plVar1 = (long*)( local_38 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_38 = (char*)0x0;
               Memory::free_static(pcVar5 + -0x10, false);
            }

         }

         lVar4 = local_40;
         if (local_40 != 0) {
            LOCK();
            plVar1 = (long*)( local_40 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_40 = 0;
               Memory::free_static((void*)( lVar4 + -0x10 ), false);
            }

         }

         *(int*)( (long)param_4 + 0x204 ) = *(int*)( (long)param_4 + 0x204 ) + -1;
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* AudioDriverPulseAudio::pa_source_info_cb(pa_context*, pa_source_info const*, int, void*) */void AudioDriverPulseAudio::pa_source_info_cb(pa_context *param_1, pa_source_info *param_2, int param_3, void *param_4) {
   long *plVar1;
   undefined8 uVar2;
   code *pcVar3;
   long lVar4;
   char *pcVar5;
   undefined4 uVar6;
   long in_FS_OFFSET;
   long local_40;
   char *local_38;
   size_t local_30;
   long local_20;
   pcVar3 = _pa_strerror_dylibloader_wrapper_pulse;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_3 < 1) {
      if (param_3 == 0) {
         for (int i = 0; i < 8; i++) {
            uVar2 = *(undefined8*)( param_2 + ( 16*i + 44 ) );
            *(undefined8*)( (long)param_4 + ( 16*i + 284 ) ) = *(undefined8*)( param_2 + ( 16*i + 36 ) );
            *(undefined8*)( (long)param_4 + ( 16*i + 292 ) ) = uVar2;
         }

         uVar6 = *(undefined4*)( param_2 + 0xa4 );
         *(int*)( (long)param_4 + 0x204 ) = *(int*)( (long)param_4 + 0x204 ) + 1;
         *(undefined4*)( (long)param_4 + 0x19c ) = uVar6;
      }
 else {
         uVar6 = ( *_pa_context_errno_dylibloader_wrapper_pulse )();
         local_38 = (char*)( *pcVar3 )(uVar6);
         local_40 = 0;
         local_30 = 0;
         if (local_38 != (char*)0x0) {
            local_30 = strlen(local_38);
         }

         String::parse_latin1((StrRange*)&local_40);
         operator+((char *)&
         local_38,(String*)"PulseAudio: sink info error: ";
         _err_print_error("pa_source_info_cb", "drivers/pulseaudio/audio_driver_pulseaudio.cpp", 100, &local_38, 0, 0);
         pcVar5 = local_38;
         if (local_38 != (char*)0x0) {
            LOCK();
            plVar1 = (long*)( local_38 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_38 = (char*)0x0;
               Memory::free_static(pcVar5 + -0x10, false);
            }

         }

         lVar4 = local_40;
         if (local_40 != 0) {
            LOCK();
            plVar1 = (long*)( local_40 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_40 = 0;
               Memory::free_static((void*)( lVar4 + -0x10 ), false);
            }

         }

         *(int*)( (long)param_4 + 0x204 ) = *(int*)( (long)param_4 + 0x204 ) + -1;
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* AudioDriverPulseAudio::pa_state_cb(pa_context*, void*) */void AudioDriverPulseAudio::pa_state_cb(pa_context *param_1, void *param_2) {
   long *plVar1;
   long lVar2;
   char cVar3;
   int iVar4;
   char *pcVar5;
   long in_FS_OFFSET;
   long local_40;
   int local_38[6];
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar4 = ( *_pa_context_get_state_dylibloader_wrapper_pulse )();
   if (iVar4 == 5) {
      cVar3 = is_print_verbose_enabled();
      if (cVar3 != '\0') {
         pcVar5 = "PulseAudio: context failed";
         LAB_00100c45:Variant::Variant((Variant*)local_38, pcVar5);
         stringify_variants((Variant*)&local_40);
         __print_line((String*)&local_40);
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

         if (Variant::needs_deinit[local_38[0]] != '\0') {
            Variant::_clear_internal();
         }

      }

   }
 else {
      if (iVar4 != 6) {
         if (iVar4 == 4) {
            cVar3 = is_print_verbose_enabled();
            if (cVar3 != '\0') {
               Variant::Variant((Variant*)local_38, "PulseAudio: context ready");
               stringify_variants((Variant*)&local_40);
               __print_line((String*)&local_40);
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

               if (Variant::needs_deinit[local_38[0]] != '\0') {
                  Variant::_clear_internal();
               }

            }

            *(undefined4*)( (long)param_2 + 0x200 ) = 1;
         }
 else {
            cVar3 = is_print_verbose_enabled();
            if (cVar3 != '\0') {
               Variant::Variant((Variant*)local_38, "PulseAudio: context other");
               stringify_variants((Variant*)&local_40);
               __print_line((String*)&local_40);
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

               if (Variant::needs_deinit[local_38[0]] != '\0') {
                  Variant::_clear_internal();
               }

            }

         }

         goto LAB_00100be8;
      }

      cVar3 = is_print_verbose_enabled();
      pcVar5 = "PulseAudio: context terminated";
      if (cVar3 != '\0') goto LAB_00100c45;
   }

   *(undefined4*)( (long)param_2 + 0x200 ) = 0xffffffff;
   LAB_00100be8:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* AudioDriverPulseAudio::detect_channels(bool) */bool AudioDriverPulseAudio::detect_channels(AudioDriverPulseAudio *this, bool param_1) {
   long *plVar1;
   code *pcVar2;
   char *pcVar3;
   char cVar4;
   int iVar5;
   undefined4 uVar6;
   long lVar7;
   long lVar8;
   undefined8 uVar9;
   AudioDriverPulseAudio *pAVar10;
   long in_FS_OFFSET;
   bool bVar11;
   long local_490;
   long local_488;
   long local_480;
   char *local_478;
   size_t local_470;
   int local_468[8];
   char local_448[1032];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1) {
      ( *_pa_channel_map_init_stereo_dylibloader_wrapper_pulse )(this + 0x11c);
      pAVar10 = this + 0x1b8;
   }
 else {
      ( *_pa_channel_map_init_stereo_dylibloader_wrapper_pulse )(this + 0x98);
      pAVar10 = this + 0x1a0;
   }

   local_490 = 0;
   plVar1 = (long*)( *(long*)pAVar10 + -0x10 );
   if (*(long*)pAVar10 != 0) {
      do {
         lVar8 = *plVar1;
         if (lVar8 == 0) goto LAB_00100e71;
         LOCK();
         lVar7 = *plVar1;
         bVar11 = lVar8 == lVar7;
         if (bVar11) {
            *plVar1 = lVar8 + 1;
            lVar7 = lVar8;
         }

         UNLOCK();
      }
 while ( !bVar11 );
      if (lVar7 != -1) {
         local_490 = *(long*)pAVar10;
      }

   }

   LAB_00100e71:cVar4 = String::operator ==((String*)&local_490, "Default");
   if (cVar4 != '\0') {
      *(undefined4*)( this + 0x204 ) = 0;
      lVar8 = ( *_pa_context_get_server_info_dylibloader_wrapper_pulse )(*(undefined8*)( this + 0x80 ), pa_server_info_cb, this);
      pcVar2 = _pa_strerror_dylibloader_wrapper_pulse;
      if (lVar8 == 0) {
         uVar6 = ( *_pa_context_errno_dylibloader_wrapper_pulse )(*(undefined8*)( this + 0x80 ));
         local_478 = (char*)( *pcVar2 )(uVar6);
         local_480 = 0;
         local_470 = 0;
         if (local_478 != (char*)0x0) {
            local_470 = strlen(local_478);
         }

         String::parse_latin1((StrRange*)&local_480);
         operator+((char *)&
         local_478,(String*)"pa_context_get_server_info error: ";
         _err_print_error("detect_channels", "drivers/pulseaudio/audio_driver_pulseaudio.cpp", 0x88, &local_478, 0, 0);
         pcVar3 = local_478;
         if (local_478 != (char*)0x0) {
            LOCK();
            plVar1 = (long*)( local_478 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_478 = (char*)0x0;
               Memory::free_static(pcVar3 + -0x10, false);
            }

         }

         lVar8 = local_480;
         if (local_480 != 0) {
            LOCK();
            plVar1 = (long*)( local_480 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_480 = 0;
               Memory::free_static((void*)( lVar8 + -0x10 ), false);
            }

         }

         bVar11 = true;
         goto LAB_0010112d;
      }

      while (*(int*)( this + 0x204 ) == 0) {
         iVar5 = ( *_pa_mainloop_iterate_dylibloader_wrapper_pulse )(*(undefined8*)( this + 0x78 ), 1, 0);
         if (iVar5 < 0) {
            _err_print_error("detect_channels", "drivers/pulseaudio/audio_driver_pulseaudio.cpp", 0x82, "pa_mainloop_iterate error", 0, 0);
         }

      }
;
      ( *_pa_operation_unref_dylibloader_wrapper_pulse )(lVar8);
   }

   cVar4 = String::operator ==((String*)&local_490, "Default");
   if (cVar4 == '\0') {
      String::utf8();
      uVar9 = CharString::get_data();
      __strcpy_chk(local_448, uVar9, 0x400);
      pcVar3 = local_478;
      if (local_478 != (char*)0x0) {
         LOCK();
         plVar1 = (long*)( local_478 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_478 = (char*)0x0;
            Memory::free_static(pcVar3 + -0x10, false);
         }

      }

      cVar4 = is_print_verbose_enabled();
      if (cVar4 != '\0') goto LAB_001011b8;
      LAB_001010bb:*(undefined4*)( this + 0x204 ) = 0;
      uVar9 = *(undefined8*)( this + 0x80 );
      if (param_1) goto LAB_001010d5;
      LAB_00101020:lVar8 = ( *_pa_context_get_sink_info_by_name_dylibloader_wrapper_pulse )(uVar9, local_448, pa_sink_info_cb, this);
      if (lVar8 == 0) {
         bVar11 = false;
         _err_print_error("detect_channels", "drivers/pulseaudio/audio_driver_pulseaudio.cpp", 0xaf, "pa_context_get_sink_info_by_name error", 0, 0);
         goto LAB_0010112d;
      }

   }
 else {
      if (!param_1) {
         String::utf8();
         uVar9 = CharString::get_data();
         __strcpy_chk(local_448, uVar9, 0x400);
         pcVar3 = local_478;
         if (local_478 != (char*)0x0) {
            LOCK();
            plVar1 = (long*)( local_478 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_478 = (char*)0x0;
               Memory::free_static(pcVar3 + -0x10, false);
            }

         }

         cVar4 = is_print_verbose_enabled();
         if (cVar4 != '\0') goto LAB_001011b8;
         *(undefined4*)( this + 0x204 ) = 0;
         uVar9 = *(undefined8*)( this + 0x80 );
         goto LAB_00101020;
      }

      String::utf8();
      uVar9 = CharString::get_data();
      __strcpy_chk(local_448, uVar9, 0x400);
      pcVar3 = local_478;
      if (local_478 != (char*)0x0) {
         LOCK();
         plVar1 = (long*)( local_478 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_478 = (char*)0x0;
            Memory::free_static(pcVar3 + -0x10, false);
         }

      }

      cVar4 = is_print_verbose_enabled();
      if (cVar4 != '\0') {
         LAB_001011b8:local_488 = 0;
         local_470 = strlen(local_448);
         local_478 = local_448;
         String::parse_latin1((StrRange*)&local_488);
         operator+((char *)&
         local_480,(String*)"PulseAudio: Detecting channels for device: ";
         Variant::Variant((Variant*)local_468, (String*)&local_480);
         stringify_variants((Variant*)&local_478);
         __print_line((String*)&local_478);
         if (local_478 != (char*)0x0) {
            LOCK();
            plVar1 = (long*)( local_478 + -0x10 );
            *plVar1 = *plVar1 + -1;
            pcVar3 = local_478;
            UNLOCK();
            if (*plVar1 == 0) {
               local_478 = (char*)0x0;
               Memory::free_static(pcVar3 + -0x10, false);
            }

         }

         if (Variant::needs_deinit[local_468[0]] != '\0') {
            Variant::_clear_internal();
         }

         lVar8 = local_480;
         if (local_480 != 0) {
            LOCK();
            plVar1 = (long*)( local_480 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_480 = 0;
               Memory::free_static((void*)( lVar8 + -0x10 ), false);
            }

         }

         lVar8 = local_488;
         if (local_488 != 0) {
            LOCK();
            plVar1 = (long*)( local_488 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_488 = 0;
               Memory::free_static((void*)( lVar8 + -0x10 ), false);
            }

         }

         goto LAB_001010bb;
      }

      *(undefined4*)( this + 0x204 ) = 0;
      uVar9 = *(undefined8*)( this + 0x80 );
      LAB_001010d5:lVar8 = ( *_pa_context_get_source_info_by_name_dylibloader_wrapper_pulse )(uVar9, local_448, pa_source_info_cb, this);
      if (lVar8 == 0) {
         bVar11 = false;
         _err_print_error("detect_channels", "drivers/pulseaudio/audio_driver_pulseaudio.cpp", 0xad, "pa_context_get_source_info_by_name error", 0, 0);
         goto LAB_0010112d;
      }

   }

   while (*(int*)( this + 0x204 ) == 0) {
      iVar5 = ( *_pa_mainloop_iterate_dylibloader_wrapper_pulse )(*(undefined8*)( this + 0x78 ), 1, 0);
      if (iVar5 < 0) {
         _err_print_error("detect_channels", "drivers/pulseaudio/audio_driver_pulseaudio.cpp", 0xa2, "pa_mainloop_iterate error", 0, 0);
      }

   }
;
   ( *_pa_operation_unref_dylibloader_wrapper_pulse )(lVar8);
   bVar11 = *(int*)( this + 0x204 ) == -1;
   LAB_0010112d:lVar8 = local_490;
   if (local_490 != 0) {
      LOCK();
      plVar1 = (long*)( local_490 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_490 = 0;
         Memory::free_static((void*)( lVar8 + -0x10 ), false);
      }

   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return bVar11;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* AudioDriverPulseAudio::finish_output_device() */void AudioDriverPulseAudio::finish_output_device(AudioDriverPulseAudio *this) {
   if (*(long*)( this + 0x88 ) != 0) {
      ( *_pa_stream_disconnect_dylibloader_wrapper_pulse )();
      ( *_pa_stream_unref_dylibloader_wrapper_pulse )(*(undefined8*)( this + 0x88 ));
      *(undefined8*)( this + 0x88 ) = 0;
   }

   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* AudioDriverPulseAudio::finish_input_device() */void AudioDriverPulseAudio::finish_input_device(AudioDriverPulseAudio *this) {
   long *plVar1;
   long lVar2;
   char *pcVar3;
   int iVar4;
   long in_FS_OFFSET;
   long local_40;
   char *local_38;
   size_t local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( this + 0x90 ) != 0) {
      iVar4 = ( *_pa_stream_disconnect_dylibloader_wrapper_pulse )();
      if (iVar4 != 0) {
         local_38 = (char*)( *_pa_strerror_dylibloader_wrapper_pulse )(iVar4);
         local_40 = 0;
         local_30 = 0;
         if (local_38 != (char*)0x0) {
            local_30 = strlen(local_38);
         }

         String::parse_latin1((StrRange*)&local_40);
         operator+((char *)&
         local_38,(String*)"PulseAudio: pa_stream_disconnect error: ";
         _err_print_error("finish_input_device", "drivers/pulseaudio/audio_driver_pulseaudio.cpp", 0x2f6, &local_38, 0, 0);
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

      }

      ( *_pa_stream_unref_dylibloader_wrapper_pulse )(*(undefined8*)( this + 0x90 ));
      *(undefined8*)( this + 0x90 ) = 0;
   }

   if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* AudioDriverPulseAudio::input_stop() */undefined8 AudioDriverPulseAudio::input_stop(AudioDriverPulseAudio *this) {
   int iVar1;
   if (*(code**)( *(long*)this + 0x38 ) == lock) {
      iVar1 = pthread_mutex_lock((pthread_mutex_t*)( this + 0x50 ));
      if (iVar1 != 0) {
         /* WARNING: Subroutine does not return */
         std::__throw_system_error(iVar1);
      }

   }
 else {
      ( **(code**)( *(long*)this + 0x38 ) )();
   }

   finish_input_device(this);
   if (*(code**)( *(long*)this + 0x40 ) == unlock) {
      pthread_mutex_unlock((pthread_mutex_t*)( this + 0x50 ));
      return 0;
   }

   ( **(code**)( *(long*)this + 0x40 ) )(this);
   return 0;
}
/* CowData<String>::_ref(CowData<String> const&) [clone .part.0] */void CowData<String>::_ref(CowData<String> *this, CowData *param_1) {
   long *plVar1;
   long lVar2;
   long lVar3;
   bool bVar4;
   _unref(this);
   if (*(long*)param_1 != 0) {
      plVar1 = (long*)( *(long*)param_1 + -0x10 );
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
/* AudioDriverPulseAudio::pa_sinklist_cb(pa_context*, pa_sink_info const*, int, void*) */void AudioDriverPulseAudio::pa_sinklist_cb(pa_context *param_1, pa_sink_info *param_2, int param_3, void *param_4) {
   long *plVar1;
   char *__s;
   long lVar2;
   size_t sVar3;
   long in_FS_OFFSET;
   long local_40;
   char *local_38;
   size_t local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   sVar3 = 0;
   if (param_3 < 1) {
      __s = *(char**)param_2;
      local_40 = 0;
      if (__s != (char*)0x0) {
         sVar3 = strlen(__s);
      }

      local_38 = __s;
      local_30 = sVar3;
      String::parse_latin1((StrRange*)&local_40);
      Vector<String>::push_back((Vector<String>*)( (long)param_4 + 0x208 ));
      lVar2 = local_40;
      if (local_40 != 0) {
         LOCK();
         plVar1 = (long*)( local_40 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_40 = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
            *(int*)( (long)param_4 + 0x204 ) = *(int*)( (long)param_4 + 0x204 ) + 1;
            goto LAB_00101910;
         }

      }

      *(int*)( (long)param_4 + 0x204 ) = *(int*)( (long)param_4 + 0x204 ) + 1;
   }

   LAB_00101910:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* AudioDriverPulseAudio::pa_sourcelist_cb(pa_context*, pa_source_info const*, int, void*) */void AudioDriverPulseAudio::pa_sourcelist_cb(pa_context *param_1, pa_source_info *param_2, int param_3, void *param_4) {
   long *plVar1;
   char *__s;
   long lVar2;
   size_t sVar3;
   long in_FS_OFFSET;
   long local_40;
   char *local_38;
   size_t local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   sVar3 = 0;
   if (param_3 < 1) {
      if (*(int*)( param_2 + 0x134 ) == -1) {
         __s = *(char**)param_2;
         local_40 = 0;
         if (__s != (char*)0x0) {
            sVar3 = strlen(__s);
         }

         local_38 = __s;
         local_30 = sVar3;
         String::parse_latin1((StrRange*)&local_40);
         Vector<String>::push_back((Vector<String>*)( (long)param_4 + 0x218 ));
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

      }

      *(int*)( (long)param_4 + 0x204 ) = *(int*)( (long)param_4 + 0x204 ) + 1;
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* AudioDriverPulseAudio::get_input_device_list() */void AudioDriverPulseAudio::get_input_device_list(void) {
   long *plVar1;
   int iVar2;
   long lVar3;
   long *in_RSI;
   long in_RDI;
   long in_FS_OFFSET;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( in_RSI[0x44] != 0 ) && ( *(long*)( in_RSI[0x44] + -8 ) != 0 )) {
      CowData<String>::_unref((CowData<String>*)( in_RSI + 0x44 ));
   }

   local_50 = 0;
   local_48 = "Default";
   local_40 = 7;
   String::parse_latin1((StrRange*)&local_50);
   Vector<String>::push_back((Vector<String>*)( in_RSI + 0x43 ));
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

   if (in_RSI[0x10] != 0) {
      if (*(code**)( *in_RSI + 0x38 ) == lock) {
         iVar2 = pthread_mutex_lock((pthread_mutex_t*)( in_RSI + 10 ));
         if (iVar2 != 0) {
            /* WARNING: Subroutine does not return */
            std::__throw_system_error(iVar2);
         }

      }
 else {
         ( **(code**)( *in_RSI + 0x38 ) )();
      }

      *(undefined4*)( (long)in_RSI + 0x204 ) = 0;
      lVar3 = ( *_pa_context_get_source_info_list_dylibloader_wrapper_pulse )(in_RSI[0x10], pa_sourcelist_cb);
      if (lVar3 == 0) {
         _err_print_error("get_input_device_list", "drivers/pulseaudio/audio_driver_pulseaudio.cpp", 0x333, "pa_context_get_server_info error", 0, 0);
      }
 else {
         while (*(int*)( (long)in_RSI + 0x204 ) == 0) {
            iVar2 = ( *_pa_mainloop_iterate_dylibloader_wrapper_pulse )(in_RSI[0xf], 1, 0);
            if (iVar2 < 0) {
               _err_print_error("get_input_device_list", "drivers/pulseaudio/audio_driver_pulseaudio.cpp", 0x32d, "pa_mainloop_iterate error", 0, 0);
            }

         }
;
         ( *_pa_operation_unref_dylibloader_wrapper_pulse )(lVar3);
      }

      if (*(code**)( *in_RSI + 0x40 ) == unlock) {
         pthread_mutex_unlock((pthread_mutex_t*)( in_RSI + 10 ));
      }
 else {
         ( **(code**)( *in_RSI + 0x40 ) )();
      }

   }

   *(undefined8*)( in_RDI + 8 ) = 0;
   if (in_RSI[0x44] != 0) {
      CowData<String>::_ref((CowData<String>*)( in_RDI + 8 ), (CowData*)( in_RSI + 0x44 ));
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* AudioDriverPulseAudio::get_output_device_list() */void AudioDriverPulseAudio::get_output_device_list(void) {
   long *plVar1;
   int iVar2;
   long lVar3;
   long *in_RSI;
   long in_RDI;
   long in_FS_OFFSET;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( in_RSI[0x42] != 0 ) && ( *(long*)( in_RSI[0x42] + -8 ) != 0 )) {
      CowData<String>::_unref((CowData<String>*)( in_RSI + 0x42 ));
   }

   local_50 = 0;
   local_48 = "Default";
   local_40 = 7;
   String::parse_latin1((StrRange*)&local_50);
   Vector<String>::push_back((Vector<String>*)( in_RSI + 0x41 ));
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

   if (in_RSI[0x10] != 0) {
      if (*(code**)( *in_RSI + 0x38 ) == lock) {
         iVar2 = pthread_mutex_lock((pthread_mutex_t*)( in_RSI + 10 ));
         if (iVar2 != 0) {
            /* WARNING: Subroutine does not return */
            std::__throw_system_error(iVar2);
         }

      }
 else {
         ( **(code**)( *in_RSI + 0x38 ) )();
      }

      *(undefined4*)( (long)in_RSI + 0x204 ) = 0;
      lVar3 = ( *_pa_context_get_sink_info_list_dylibloader_wrapper_pulse )(in_RSI[0x10], pa_sinklist_cb);
      if (lVar3 == 0) {
         _err_print_error("get_output_device_list", "drivers/pulseaudio/audio_driver_pulseaudio.cpp", 0x27c, "pa_context_get_server_info error", 0, 0);
      }
 else {
         while (*(int*)( (long)in_RSI + 0x204 ) == 0) {
            iVar2 = ( *_pa_mainloop_iterate_dylibloader_wrapper_pulse )(in_RSI[0xf], 1, 0);
            if (iVar2 < 0) {
               _err_print_error("get_output_device_list", "drivers/pulseaudio/audio_driver_pulseaudio.cpp", 0x276, "pa_mainloop_iterate error", 0, 0);
            }

         }
;
         ( *_pa_operation_unref_dylibloader_wrapper_pulse )(lVar3);
      }

      if (*(code**)( *in_RSI + 0x40 ) == unlock) {
         pthread_mutex_unlock((pthread_mutex_t*)( in_RSI + 10 ));
      }
 else {
         ( **(code**)( *in_RSI + 0x40 ) )();
      }

   }

   *(undefined8*)( in_RDI + 8 ) = 0;
   if (in_RSI[0x42] != 0) {
      CowData<String>::_ref((CowData<String>*)( in_RDI + 8 ), (CowData*)( in_RSI + 0x42 ));
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* AudioDriverPulseAudio::init_input_device() */undefined8 AudioDriverPulseAudio::init_input_device(AudioDriverPulseAudio *this) {
   long *plVar1;
   String *this_00;
   code *pcVar2;
   char cVar3;
   undefined4 uVar4;
   long lVar5;
   char *pcVar6;
   undefined8 uVar7;
   uint uVar8;
   uint uVar9;
   int iVar10;
   long in_FS_OFFSET;
   long local_d8;
   long local_d0;
   long local_c8;
   long local_c0;
   long local_b8;
   long local_b0;
   long local_a8;
   long local_a0;
   undefined8 local_98;
   AudioDriverPulseAudio local_90;
   char *local_88;
   size_t local_80;
   undefined4 local_78;
   undefined4 uStack_74;
   undefined4 uStack_70;
   undefined4 uStack_6c;
   int local_68;
   int local_58[6];
   long local_40;
   this_00 = (String*)( this + 0x1b8 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   cVar3 = String::operator !=(this_00, "Default");
   if (cVar3 != '\0') {
      ( **(code**)( *(long*)this + 0x78 ) )(&local_88, this);
      lVar5 = CowData<String>::find((CowData<String>*)&local_80, this_00, 0);
      if (lVar5 == -1) {
         local_78 = 0x10531b;
         uStack_74 = 0;
         uStack_70 = 7;
         uStack_6c = 0;
         String::parse_latin1((StrRange*)this_00);
         local_78 = 0x10531b;
         uStack_74 = 0;
         uStack_70 = 7;
         uStack_6c = 0;
         String::parse_latin1((StrRange*)( this + 0x1c0 ));
         CowData<String>::_unref((CowData<String>*)&local_80);
      }
 else {
         CowData<String>::_unref((CowData<String>*)&local_80);
      }

   }

   detect_channels(this, true);
   if ((byte)this[0x11c] - 1 < 2) {
      cVar3 = is_print_verbose_enabled();
   }
 else {
      itos((long)&local_88);
      operator+((char *)&
      local_78,(String*)"PulseAudio: Unsupported number of input channels: ";
      _err_print_error("init_input_device", "drivers/pulseaudio/audio_driver_pulseaudio.cpp", 0x2c7, &local_78, 0, 1);
      if (CONCAT44(uStack_74, local_78) != 0) {
         LOCK();
         plVar1 = (long*)( CONCAT44(uStack_74, local_78) + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar5 = CONCAT44(uStack_74, local_78);
            local_78 = 0;
            uStack_74 = 0;
            Memory::free_static((void*)( lVar5 + -0x10 ), false);
         }

      }

      pcVar6 = local_88;
      if (local_88 == (char*)0x0) {
         LAB_001021bc:( *_pa_channel_map_init_stereo_dylibloader_wrapper_pulse )(this + 0x11c);
      }
 else {
         LOCK();
         plVar1 = (long*)( local_88 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 != 0) goto LAB_001021bc;
         local_88 = (char*)0x0;
         Memory::free_static(pcVar6 + -0x10, false);
         ( *_pa_channel_map_init_stereo_dylibloader_wrapper_pulse )(this + 0x11c);
      }

      cVar3 = is_print_verbose_enabled();
   }

   if (cVar3 != '\0') {
      local_98 = 0;
      local_78 = 0x1053d8;
      uStack_74 = 0;
      uStack_70 = 0xf;
      uStack_6c = 0;
      String::parse_latin1((StrRange*)&local_98);
      itos((long)&local_a8);
      operator+((char *)&
      local_a0,(String*)"PulseAudio: detected ";
      String::operator +((String*)&local_88, (String*)&local_a0);
      Variant::Variant((Variant*)local_58, (String*)&local_88);
      stringify_variants((Variant*)&local_78);
      __print_line((String*)&local_78);
      if (CONCAT44(uStack_74, local_78) != 0) {
         LOCK();
         plVar1 = (long*)( CONCAT44(uStack_74, local_78) + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar5 = CONCAT44(uStack_74, local_78);
            local_78 = 0;
            uStack_74 = 0;
            Memory::free_static((void*)( lVar5 + -0x10 ), false);
         }

      }

      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      pcVar6 = local_88;
      if (local_88 != (char*)0x0) {
         LOCK();
         plVar1 = (long*)( local_88 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_88 = (char*)0x0;
            Memory::free_static(pcVar6 + -0x10, false);
         }

      }

      lVar5 = local_a0;
      if (local_a0 != 0) {
         LOCK();
         plVar1 = (long*)( local_a0 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_a0 = 0;
            Memory::free_static((void*)( lVar5 + -0x10 ), false);
         }

      }

      lVar5 = local_a8;
      if (local_a8 != 0) {
         LOCK();
         plVar1 = (long*)( local_a8 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_a8 = 0;
            Memory::free_static((void*)( lVar5 + -0x10 ), false);
         }

      }

      lVar5 = local_98;
      if (local_98 != 0) {
         LOCK();
         plVar1 = (long*)( local_98 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_98 = 0;
            Memory::free_static((void*)( lVar5 + -0x10 ), false);
         }

      }

   }

   local_90 = this[0x11c];
   iVar10 = 0;
   uVar8 = *(int*)( this + 0x1f0 ) * 0x1e;
   local_98 = CONCAT44(*(int*)( this + 0x1f0 ), 3);
   if (999 < uVar8) {
      uVar9 = uVar8 / 1000 - 1;
      uVar9 = uVar9 | uVar9 >> 1;
      uVar9 = uVar9 | uVar9 >> 2;
      uVar9 = uVar9 | uVar9 >> 4;
      uVar9 = uVar9 | uVar9 >> 8;
      iVar10 = ( uVar9 | uVar9 >> 0x10 ) + 1;
   }

   uVar9 = uVar8 / 1000;
   uStack_74 = 0;
   uStack_70 = 0;
   uStack_6c = 0;
   uVar8 = uVar8 / 2000 | uVar9;
   local_78 = 0xffffffff;
   uVar8 = uVar8 | uVar8 >> 2;
   uVar8 = uVar8 | uVar8 >> 4;
   uVar8 = uVar8 >> 0x10 | uVar8 >> 8 | uVar8;
   if (uVar9 + ( ( uVar8 >> 1 ) - uVar8 ) < iVar10 - uVar9) {
      iVar10 = uVar8 - ( uVar8 >> 1 );
   }

   local_68 = (uint)(byte)local_90 * iVar10 * 2;
   lVar5 = ( *_pa_stream_new_dylibloader_wrapper_pulse )(*(undefined8*)( this + 0x80 ), "Record", &local_98, this + 0x11c);
   *(long*)( this + 0x90 ) = lVar5;
   pcVar2 = _pa_strerror_dylibloader_wrapper_pulse;
   if (lVar5 == 0) {
      uVar4 = ( *_pa_context_errno_dylibloader_wrapper_pulse )(*(undefined8*)( this + 0x80 ));
      pcVar6 = (char*)( *pcVar2 )(uVar4);
      local_a0 = 0;
      local_80 = 0;
      if (pcVar6 != (char*)0x0) {
         local_80 = strlen(pcVar6);
      }

      local_88 = pcVar6;
      String::parse_latin1((StrRange*)&local_a0);
      operator+((char *)&
      local_88,(String*)"PulseAudio: pa_stream_new error: ";
      _err_print_error("init_input_device", "drivers/pulseaudio/audio_driver_pulseaudio.cpp", 0x2de, &local_88, 0, 0);
      pcVar6 = local_88;
      if (local_88 != (char*)0x0) {
         LOCK();
         plVar1 = (long*)( local_88 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_88 = (char*)0x0;
            Memory::free_static(pcVar6 + -0x10, false);
         }

      }

      lVar5 = local_a0;
      if (local_a0 != 0) {
         LOCK();
         plVar1 = (long*)( local_a0 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_a0 = 0;
            Memory::free_static((void*)( lVar5 + -0x10 ), false);
         }

      }

      _err_print_error("init_input_device", "drivers/pulseaudio/audio_driver_pulseaudio.cpp", 0x2df, "Method/function failed. Returning: ERR_CANT_OPEN", 0, 0);
   }
 else {
      uVar7 = 0;
      cVar3 = String::operator ==(this_00, "Default");
      if (cVar3 == '\0') {
         String::utf8();
         uVar7 = CharString::get_data();
         pcVar6 = local_88;
         if (local_88 != (char*)0x0) {
            LOCK();
            plVar1 = (long*)( local_88 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_88 = (char*)0x0;
               Memory::free_static(pcVar6 + -0x10, false);
            }

         }

      }

      iVar10 = ( *_pa_stream_connect_record_dylibloader_wrapper_pulse )(*(undefined8*)( this + 0x90 ), uVar7, &local_78, 0x200a);
      if (-1 < iVar10) {
         AudioDriver::input_buffer_init((int)this);
         cVar3 = is_print_verbose_enabled();
         if (cVar3 != '\0') {
            local_a8 = 0;
            local_80 = 0xf;
            local_88 = " input channels";
            String::parse_latin1((StrRange*)&local_a8);
            itos((long)&local_b8);
            operator+((char *)&
            local_b0,(String*)"PulseAudio: detected ";
            String::operator +((String*)&local_a0, (String*)&local_b0);
            Variant::Variant((Variant*)local_58, (String*)&local_a0);
            stringify_variants((Variant*)&local_88);
            __print_line((String*)&local_88);
            pcVar6 = local_88;
            if (local_88 != (char*)0x0) {
               LOCK();
               plVar1 = (long*)( local_88 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_88 = (char*)0x0;
                  Memory::free_static(pcVar6 + -0x10, false);
               }

            }

            if (Variant::needs_deinit[local_58[0]] != '\0') {
               Variant::_clear_internal();
            }

            lVar5 = local_a0;
            if (local_a0 != 0) {
               LOCK();
               plVar1 = (long*)( local_a0 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_a0 = 0;
                  Memory::free_static((void*)( lVar5 + -0x10 ), false);
               }

            }

            lVar5 = local_b0;
            if (local_b0 != 0) {
               LOCK();
               plVar1 = (long*)( local_b0 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_b0 = 0;
                  Memory::free_static((void*)( lVar5 + -0x10 ), false);
               }

            }

            lVar5 = local_b8;
            if (local_b8 != 0) {
               LOCK();
               plVar1 = (long*)( local_b8 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_b8 = 0;
                  Memory::free_static((void*)( lVar5 + -0x10 ), false);
               }

            }

            lVar5 = local_a8;
            if (local_a8 != 0) {
               LOCK();
               plVar1 = (long*)( local_a8 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_a8 = 0;
                  Memory::free_static((void*)( lVar5 + -0x10 ), false);
               }

            }

         }

         cVar3 = is_print_verbose_enabled();
         if (cVar3 != '\0') {
            local_a8 = 0;
            local_80 = 2;
            local_88 = "ms";
            String::parse_latin1((StrRange*)&local_a8);
            itos((long)&local_b8);
            local_88 = " calculated latency: ";
            local_c8 = 0;
            local_80 = 0x15;
            String::parse_latin1((StrRange*)&local_c8);
            itos((long)&local_d8);
            operator+((char *)&
            local_d0,(String*)"PulseAudio: input buffer frames: ";
            String::operator +((String*)&local_c0, (String*)&local_d0);
            String::operator +((String*)&local_b0, (String*)&local_c0);
            String::operator +((String*)&local_a0, (String*)&local_b0);
            Variant::Variant((Variant*)local_58, (String*)&local_a0);
            stringify_variants((Variant*)&local_88);
            __print_line((String*)&local_88);
            pcVar6 = local_88;
            if (local_88 != (char*)0x0) {
               LOCK();
               plVar1 = (long*)( local_88 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_88 = (char*)0x0;
                  Memory::free_static(pcVar6 + -0x10, false);
               }

            }

            if (Variant::needs_deinit[local_58[0]] != '\0') {
               Variant::_clear_internal();
            }

            lVar5 = local_a0;
            if (local_a0 != 0) {
               LOCK();
               plVar1 = (long*)( local_a0 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_a0 = 0;
                  Memory::free_static((void*)( lVar5 + -0x10 ), false);
               }

            }

            lVar5 = local_b0;
            if (local_b0 != 0) {
               LOCK();
               plVar1 = (long*)( local_b0 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_b0 = 0;
                  Memory::free_static((void*)( lVar5 + -0x10 ), false);
               }

            }

            lVar5 = local_c0;
            if (local_c0 != 0) {
               LOCK();
               plVar1 = (long*)( local_c0 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_c0 = 0;
                  Memory::free_static((void*)( lVar5 + -0x10 ), false);
               }

            }

            lVar5 = local_d0;
            if (local_d0 != 0) {
               LOCK();
               plVar1 = (long*)( local_d0 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_d0 = 0;
                  Memory::free_static((void*)( lVar5 + -0x10 ), false);
               }

            }

            lVar5 = local_d8;
            if (local_d8 != 0) {
               LOCK();
               plVar1 = (long*)( local_d8 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_d8 = 0;
                  Memory::free_static((void*)( lVar5 + -0x10 ), false);
               }

            }

            lVar5 = local_c8;
            if (local_c8 != 0) {
               LOCK();
               plVar1 = (long*)( local_c8 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_c8 = 0;
                  Memory::free_static((void*)( lVar5 + -0x10 ), false);
               }

            }

            lVar5 = local_b8;
            if (local_b8 != 0) {
               LOCK();
               plVar1 = (long*)( local_b8 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_b8 = 0;
                  Memory::free_static((void*)( lVar5 + -0x10 ), false);
               }

            }

            lVar5 = local_a8;
            if (local_a8 != 0) {
               LOCK();
               plVar1 = (long*)( local_a8 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_a8 = 0;
                  Memory::free_static((void*)( lVar5 + -0x10 ), false);
               }

            }

         }

         uVar7 = 0;
         goto LAB_0010211b;
      }

      pcVar6 = (char*)( *_pa_strerror_dylibloader_wrapper_pulse )(iVar10);
      local_a0 = 0;
      local_80 = 0;
      if (pcVar6 != (char*)0x0) {
         local_80 = strlen(pcVar6);
      }

      local_88 = pcVar6;
      String::parse_latin1((StrRange*)&local_a0);
      operator+((char *)&
      local_88,(String*)"PulseAudio: pa_stream_connect_record error: ";
      _err_print_error("init_input_device", "drivers/pulseaudio/audio_driver_pulseaudio.cpp", 0x2e6, &local_88, 0, 0);
      pcVar6 = local_88;
      if (local_88 != (char*)0x0) {
         LOCK();
         plVar1 = (long*)( local_88 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_88 = (char*)0x0;
            Memory::free_static(pcVar6 + -0x10, false);
         }

      }

      lVar5 = local_a0;
      if (local_a0 != 0) {
         LOCK();
         plVar1 = (long*)( local_a0 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_a0 = 0;
            Memory::free_static((void*)( lVar5 + -0x10 ), false);
         }

      }

      _err_print_error("init_input_device", "drivers/pulseaudio/audio_driver_pulseaudio.cpp", 0x2e7, "Method/function failed. Returning: ERR_CANT_OPEN", 0, 0);
   }

   uVar7 = 0x13;
   LAB_0010211b:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar7;
}
/* AudioDriverPulseAudio::input_start() */undefined4 AudioDriverPulseAudio::input_start(AudioDriverPulseAudio *this) {
   int iVar1;
   undefined4 uVar2;
   if (*(code**)( *(long*)this + 0x38 ) == lock) {
      iVar1 = pthread_mutex_lock((pthread_mutex_t*)( this + 0x50 ));
      if (iVar1 != 0) {
         /* WARNING: Subroutine does not return */
         std::__throw_system_error(iVar1);
      }

   }
 else {
      ( **(code**)( *(long*)this + 0x38 ) )();
   }

   uVar2 = init_input_device(this);
   if (*(code**)( *(long*)this + 0x40 ) == unlock) {
      pthread_mutex_unlock((pthread_mutex_t*)( this + 0x50 ));
      return uVar2;
   }

   ( **(code**)( *(long*)this + 0x40 ) )(this);
   return uVar2;
}
/* Error CowData<int>::resize<false>(long) [clone .isra.0] */void CowData<int>::resize<false>(CowData<int> *this, long param_1) {
   long *plVar1;
   long lVar2;
   int iVar3;
   CowData<int> *pCVar4;
   ulong uVar5;
   undefined8 *puVar6;
   char *pcVar7;
   undefined8 *puVar8;
   undefined8 uVar9;
   CowData<int> *pCVar10;
   CowData<int> *pCVar11;
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
      pCVar4 = (CowData<int>*)0x0;
   }
 else {
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
      pCVar4 = (CowData<int>*)( lVar12 * 4 );
      if (pCVar4 != (CowData<int>*)0x0) {
         uVar5 = ( ulong )(pCVar4 + -1) | ( ulong )(pCVar4 + -1) >> 1;
         uVar5 = uVar5 | uVar5 >> 2;
         uVar5 = uVar5 | uVar5 >> 4;
         uVar5 = uVar5 | uVar5 >> 8;
         uVar5 = uVar5 | uVar5 >> 0x10;
         pCVar4 = (CowData<int>*)( ( uVar5 | uVar5 >> 0x20 ) + 1 );
      }

   }

   if (param_1 * 4 != 0) {
      uVar5 = param_1 * 4 - 1;
      uVar5 = uVar5 | uVar5 >> 1;
      uVar5 = uVar5 | uVar5 >> 2;
      uVar5 = uVar5 | uVar5 >> 4;
      uVar5 = uVar5 | uVar5 >> 8;
      uVar5 = uVar5 | uVar5 >> 0x10;
      pCVar11 = (CowData<int>*)( uVar5 | uVar5 >> 0x20 );
      pCVar10 = pCVar11 + 1;
      if (pCVar10 != (CowData<int>*)0x0) {
         if (param_1 <= lVar12) {
            if (( pCVar10 != pCVar4 ) && ( iVar3 = iVar3 != 0 )) {
               return;
            }

            if (*(long*)this != 0) {
               *(long*)( *(long*)this + -8 ) = param_1;
               return;
            }

            FUN_0010555e();
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
                  goto LAB_00102d01;
               }

               uVar9 = 0x171;
               pcVar7 = "Parameter \"mem_new\" is null.";
               goto LAB_00102df2;
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

         LAB_00102d01:puVar8[-1] = param_1;
         return;
      }

   }

   uVar9 = 0x16a;
   pcVar7 = "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY";
   LAB_00102df2:_err_print_error("resize", "./core/templates/cowdata.h", uVar9, pcVar7, 0, 0);
   return;
}
/* Error CowData<short>::resize<false>(long) [clone .isra.0] */void CowData<short>::resize<false>(CowData<short> *this, long param_1) {
   long *plVar1;
   long lVar2;
   int iVar3;
   ulong uVar4;
   CowData<short> *pCVar5;
   undefined8 *puVar6;
   char *pcVar7;
   undefined8 *puVar8;
   undefined8 uVar9;
   CowData<short> *pCVar10;
   CowData<short> *pCVar11;
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
      pCVar5 = (CowData<short>*)0x0;
   }
 else {
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
      pCVar5 = (CowData<short>*)( lVar12 * 2 );
      if (pCVar5 != (CowData<short>*)0x0) {
         uVar4 = ( ulong )(pCVar5 + -1) | ( ulong )(pCVar5 + -1) >> 1;
         uVar4 = uVar4 | uVar4 >> 2;
         uVar4 = uVar4 | uVar4 >> 4;
         uVar4 = uVar4 | uVar4 >> 8;
         uVar4 = uVar4 | uVar4 >> 0x10;
         pCVar5 = (CowData<short>*)( ( uVar4 | uVar4 >> 0x20 ) + 1 );
      }

   }

   uVar4 = param_1 * 2 - 1;
   uVar4 = uVar4 | uVar4 >> 1;
   uVar4 = uVar4 | uVar4 >> 2;
   uVar4 = uVar4 | uVar4 >> 4;
   uVar4 = uVar4 | uVar4 >> 8;
   uVar4 = uVar4 | uVar4 >> 0x10;
   pCVar11 = (CowData<short>*)( uVar4 | uVar4 >> 0x20 );
   pCVar10 = pCVar11 + 1;
   if (pCVar10 == (CowData<short>*)0x0) {
      uVar9 = 0x16a;
      pcVar7 = "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY";
      LAB_00103032:_err_print_error("resize", "./core/templates/cowdata.h", uVar9, pcVar7, 0, 0);
      return;
   }

   if (param_1 <= lVar12) {
      if (( pCVar10 != pCVar5 ) && ( iVar3 = iVar3 != 0 )) {
         return;
      }

      if (*(long*)this != 0) {
         *(long*)( *(long*)this + -8 ) = param_1;
         return;
      }

      FUN_00105576();
      return;
   }

   if (pCVar10 != pCVar5) {
      if (lVar12 == 0) {
         puVar6 = (undefined8*)Memory::alloc_static(( ulong )(pCVar11 + 0x11), false);
         if (puVar6 == (undefined8*)0x0) {
            uVar9 = 0x171;
            pcVar7 = "Parameter \"mem_new\" is null.";
            goto LAB_00103032;
         }

         puVar8 = puVar6 + 2;
         *puVar6 = 1;
         puVar6[1] = 0;
         *(undefined8**)this = puVar8;
         goto LAB_00102f44;
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

   LAB_00102f44:puVar8[-1] = param_1;
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* AudioDriverPulseAudio::init_output_device() */int AudioDriverPulseAudio::init_output_device(AudioDriverPulseAudio *this) {
   String *this_00;
   AudioDriverPulseAudio AVar1;
   code *pcVar2;
   char cVar3;
   int iVar4;
   uint uVar5;
   int iVar6;
   undefined4 uVar7;
   long lVar8;
   ulong uVar9;
   long *plVar10;
   undefined8 uVar11;
   char *pcVar12;
   size_t sVar13;
   uint uVar14;
   long in_FS_OFFSET;
   AudioDriverPulseAudio *local_f0;
   long local_c0;
   long local_b8;
   long local_b0;
   long local_a8;
   long local_a0;
   long local_98;
   long local_90;
   undefined8 local_88;
   AudioDriverPulseAudio local_80[8];
   undefined8 local_78;
   size_t local_70;
   int local_58[6];
   long local_40;
   this_00 = (String*)( this + 0x1a0 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   cVar3 = String::operator !=(this_00, "Default");
   if (cVar3 != '\0') {
      ( **(code**)( *(long*)this + 0x50 ) )(&local_88, this);
      lVar8 = CowData<String>::find((CowData<String>*)local_80, this_00, 0);
      if (lVar8 == -1) {
         local_78 = "Default";
         local_70 = 7;
         String::parse_latin1((StrRange*)this_00);
         local_78 = "Default";
         local_70 = 7;
         String::parse_latin1((StrRange*)( this + 0x1a8 ));
         CowData<String>::_unref((CowData<String>*)local_80);
      }
 else {
         CowData<String>::_unref((CowData<String>*)local_80);
      }

   }

   iVar4 = detect_channels(this, false);
   if (iVar4 != 0) {
      _err_print_error("init_output_device", "drivers/pulseaudio/audio_driver_pulseaudio.cpp", 199, "PulseAudio: init_output_device failed to detect number of output channels", 0, 0);
      goto LAB_00103309;
   }

   AVar1 = this[0x98];
   if ((byte)AVar1 < 9) {
      uVar9 = 1L << ( (byte)AVar1 & 0x3f );
      if (( uVar9 & 0x154 ) == 0) {
         if (( uVar9 & 0xaa ) == 0) goto LAB_00103360;
         uVar5 = (byte)AVar1 + 1;
      }
 else {
         uVar5 = (uint)(byte)AVar1;
      }

   }
 else {
      LAB_00103360:itos((long)&local_88);
      operator+((char *)&
      local_78,(String*)"PulseAudio: Unsupported number of output channels: ";
      _err_print_error("init_output_device", "drivers/pulseaudio/audio_driver_pulseaudio.cpp", 0xdb, &local_78, 0, 1);
      pcVar12 = local_78;
      if (local_78 != (char*)0x0) {
         LOCK();
         plVar10 = (long*)( local_78 + -0x10 );
         *plVar10 = *plVar10 + -1;
         UNLOCK();
         if (*plVar10 == 0) {
            local_78 = (char*)0x0;
            Memory::free_static(pcVar12 + -0x10, false);
         }

      }

      lVar8 = local_88;
      if (local_88 != 0) {
         LOCK();
         plVar10 = (long*)( local_88 + -0x10 );
         *plVar10 = *plVar10 + -1;
         UNLOCK();
         if (*plVar10 == 0) {
            local_88 = 0;
            Memory::free_static((void*)( lVar8 + -0x10 ), false);
         }

      }

      ( *_pa_channel_map_init_stereo_dylibloader_wrapper_pulse )(this + 0x98);
      uVar5 = 2;
   }

   local_f0 = this + 0x98;
   *(uint*)( this + 0x1fc ) = uVar5;
   plVar10 = (long*)Engine::get_singleton();
   iVar6 = ( **(code**)( *plVar10 + 0x38 ) )(plVar10);
   uVar5 = iVar6 * *(int*)( this + 0x1f0 );
   iVar6 = 0;
   if (999 < uVar5) {
      uVar14 = uVar5 / 1000 - 1;
      uVar14 = uVar14 | uVar14 >> 1;
      uVar14 = uVar14 | uVar14 >> 2;
      uVar14 = uVar14 | uVar14 >> 4;
      uVar14 = uVar14 | uVar14 >> 8;
      iVar6 = ( uVar14 | uVar14 >> 0x10 ) + 1;
   }

   uVar14 = uVar5 / 1000;
   uVar5 = uVar5 / 2000 | uVar14;
   uVar5 = uVar5 | uVar5 >> 2;
   uVar5 = uVar5 | uVar5 >> 4;
   uVar5 = uVar5 >> 0x10 | uVar5 >> 8 | uVar5;
   if (uVar14 + ( ( uVar5 >> 1 ) - uVar5 ) < iVar6 - uVar14) {
      iVar6 = uVar5 - ( uVar5 >> 1 );
   }

   *(int*)( this + 500 ) = iVar6;
   *(uint*)( this + 0x1f8 ) = (uint)(byte)this[0x98] * iVar6;
   cVar3 = is_print_verbose_enabled();
   if (cVar3 != '\0') {
      local_90 = 0;
      local_78 = " output channels";
      local_70 = 0x10;
      String::parse_latin1((StrRange*)&local_90);
      itos((long)&local_a0);
      operator+((char *)&
      local_98,(String*)"PulseAudio: detected ";
      String::operator +((String*)&local_88, (String*)&local_98);
      Variant::Variant((Variant*)local_58, (String*)&local_88);
      stringify_variants((Variant*)&local_78);
      __print_line((String*)&local_78);
      pcVar12 = local_78;
      if (local_78 != (char*)0x0) {
         LOCK();
         plVar10 = (long*)( local_78 + -0x10 );
         *plVar10 = *plVar10 + -1;
         UNLOCK();
         if (*plVar10 == 0) {
            local_78 = (char*)0x0;
            Memory::free_static(pcVar12 + -0x10, false);
         }

      }

      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      lVar8 = local_88;
      if (local_88 != 0) {
         LOCK();
         plVar10 = (long*)( local_88 + -0x10 );
         *plVar10 = *plVar10 + -1;
         UNLOCK();
         if (*plVar10 == 0) {
            local_88 = 0;
            Memory::free_static((void*)( lVar8 + -0x10 ), false);
         }

      }

      lVar8 = local_98;
      if (local_98 != 0) {
         LOCK();
         plVar10 = (long*)( local_98 + -0x10 );
         *plVar10 = *plVar10 + -1;
         UNLOCK();
         if (*plVar10 == 0) {
            local_98 = 0;
            Memory::free_static((void*)( lVar8 + -0x10 ), false);
         }

      }

      lVar8 = local_a0;
      if (local_a0 != 0) {
         LOCK();
         plVar10 = (long*)( local_a0 + -0x10 );
         *plVar10 = *plVar10 + -1;
         UNLOCK();
         if (*plVar10 == 0) {
            local_a0 = 0;
            Memory::free_static((void*)( lVar8 + -0x10 ), false);
         }

      }

      lVar8 = local_90;
      if (local_90 != 0) {
         LOCK();
         plVar10 = (long*)( local_90 + -0x10 );
         *plVar10 = *plVar10 + -1;
         UNLOCK();
         if (*plVar10 == 0) {
            local_90 = 0;
            Memory::free_static((void*)( lVar8 + -0x10 ), false);
         }

      }

   }

   cVar3 = is_print_verbose_enabled();
   if (cVar3 != '\0') {
      local_90 = 0;
      local_78 = &_LC57;
      local_70 = 2;
      String::parse_latin1((StrRange*)&local_90);
      itos((long)&local_a0);
      local_78 = " calculated output latency: ";
      local_b0 = 0;
      local_70 = 0x1c;
      String::parse_latin1((StrRange*)&local_b0);
      itos((long)&local_c0);
      operator+((char *)&
      local_b8,(String*)"PulseAudio: audio buffer frames: ";
      String::operator +((String*)&local_a8, (String*)&local_b8);
      String::operator +((String*)&local_98, (String*)&local_a8);
      String::operator +((String*)&local_88, (String*)&local_98);
      Variant::Variant((Variant*)local_58, (String*)&local_88);
      stringify_variants((Variant*)&local_78);
      __print_line((String*)&local_78);
      pcVar12 = local_78;
      if (local_78 != (char*)0x0) {
         LOCK();
         plVar10 = (long*)( local_78 + -0x10 );
         *plVar10 = *plVar10 + -1;
         UNLOCK();
         if (*plVar10 == 0) {
            local_78 = (char*)0x0;
            Memory::free_static(pcVar12 + -0x10, false);
         }

      }

      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      lVar8 = local_88;
      if (local_88 != 0) {
         LOCK();
         plVar10 = (long*)( local_88 + -0x10 );
         *plVar10 = *plVar10 + -1;
         UNLOCK();
         if (*plVar10 == 0) {
            local_88 = 0;
            Memory::free_static((void*)( lVar8 + -0x10 ), false);
         }

      }

      lVar8 = local_98;
      if (local_98 != 0) {
         LOCK();
         plVar10 = (long*)( local_98 + -0x10 );
         *plVar10 = *plVar10 + -1;
         UNLOCK();
         if (*plVar10 == 0) {
            local_98 = 0;
            Memory::free_static((void*)( lVar8 + -0x10 ), false);
         }

      }

      lVar8 = local_a8;
      if (local_a8 != 0) {
         LOCK();
         plVar10 = (long*)( local_a8 + -0x10 );
         *plVar10 = *plVar10 + -1;
         UNLOCK();
         if (*plVar10 == 0) {
            local_a8 = 0;
            Memory::free_static((void*)( lVar8 + -0x10 ), false);
         }

      }

      lVar8 = local_b8;
      if (local_b8 != 0) {
         LOCK();
         plVar10 = (long*)( local_b8 + -0x10 );
         *plVar10 = *plVar10 + -1;
         UNLOCK();
         if (*plVar10 == 0) {
            local_b8 = 0;
            Memory::free_static((void*)( lVar8 + -0x10 ), false);
         }

      }

      lVar8 = local_c0;
      if (local_c0 != 0) {
         LOCK();
         plVar10 = (long*)( local_c0 + -0x10 );
         *plVar10 = *plVar10 + -1;
         UNLOCK();
         if (*plVar10 == 0) {
            local_c0 = 0;
            Memory::free_static((void*)( lVar8 + -0x10 ), false);
         }

      }

      lVar8 = local_b0;
      if (local_b0 != 0) {
         LOCK();
         plVar10 = (long*)( local_b0 + -0x10 );
         *plVar10 = *plVar10 + -1;
         UNLOCK();
         if (*plVar10 == 0) {
            local_b0 = 0;
            Memory::free_static((void*)( lVar8 + -0x10 ), false);
         }

      }

      lVar8 = local_a0;
      if (local_a0 != 0) {
         LOCK();
         plVar10 = (long*)( local_a0 + -0x10 );
         *plVar10 = *plVar10 + -1;
         UNLOCK();
         if (*plVar10 == 0) {
            local_a0 = 0;
            Memory::free_static((void*)( lVar8 + -0x10 ), false);
         }

      }

      lVar8 = local_90;
      if (local_90 != 0) {
         LOCK();
         plVar10 = (long*)( local_90 + -0x10 );
         *plVar10 = *plVar10 + -1;
         UNLOCK();
         if (*plVar10 == 0) {
            local_90 = 0;
            Memory::free_static((void*)( lVar8 + -0x10 ), false);
         }

      }

   }

   uVar11 = _UNK_00106b38;
   local_80[0] = this[0x98];
   *(undefined8*)( this + 0x9c ) = __LC68;
   *(undefined8*)( this + 0xa4 ) = uVar11;
   uVar11 = _UNK_00106b48;
   local_88 = CONCAT44(*(undefined4*)( this + 0x1f0 ), 3);
   *(undefined8*)( this + 0xac ) = __LC69;
   *(undefined8*)( this + 0xb4 ) = uVar11;
   lVar8 = ( *_pa_stream_new_dylibloader_wrapper_pulse )(*(undefined8*)( this + 0x80 ), "Sound", (String*)&local_88, local_f0);
   *(long*)( this + 0x88 ) = lVar8;
   pcVar2 = _pa_strerror_dylibloader_wrapper_pulse;
   if (lVar8 == 0) {
      uVar7 = ( *_pa_context_errno_dylibloader_wrapper_pulse )(*(undefined8*)( this + 0x80 ));
      pcVar12 = (char*)( *pcVar2 )(uVar7);
      local_90 = 0;
      sVar13 = 0;
      if (pcVar12 != (char*)0x0) {
         sVar13 = strlen(pcVar12);
      }

      local_78 = pcVar12;
      local_70 = sVar13;
      String::parse_latin1((StrRange*)&local_90);
      operator+((char *)&
      local_78,(String*)"PulseAudio: pa_stream_new error: ";
      _err_print_error("init_output_device", "drivers/pulseaudio/audio_driver_pulseaudio.cpp", 0xf7, (Variant*)&local_78, 0, 0);
      pcVar12 = local_78;
      if (local_78 != (char*)0x0) {
         LOCK();
         plVar10 = (long*)( local_78 + -0x10 );
         *plVar10 = *plVar10 + -1;
         UNLOCK();
         if (*plVar10 == 0) {
            local_78 = (char*)0x0;
            Memory::free_static(pcVar12 + -0x10, false);
         }

      }

      lVar8 = local_90;
      if (local_90 != 0) {
         LOCK();
         plVar10 = (long*)( local_90 + -0x10 );
         *plVar10 = *plVar10 + -1;
         UNLOCK();
         if (*plVar10 == 0) {
            local_90 = 0;
            Memory::free_static((void*)( lVar8 + -0x10 ), false);
         }

      }

      _err_print_error("init_output_device", "drivers/pulseaudio/audio_driver_pulseaudio.cpp", 0xf8, "Method/function failed. Returning: ERR_CANT_OPEN", 0, 0);
   }
 else {
      uVar11 = 0;
      local_70 = 0xffffffffffffffff;
      local_78 = (char*)CONCAT44(*(int*)( this + 0x1f8 ) << 3, 0xffffffff);
      cVar3 = String::operator ==(this_00, "Default");
      if (cVar3 == '\0') {
         String::utf8();
         uVar11 = CharString::get_data();
         lVar8 = local_90;
         if (local_90 != 0) {
            LOCK();
            plVar10 = (long*)( local_90 + -0x10 );
            *plVar10 = *plVar10 + -1;
            UNLOCK();
            if (*plVar10 == 0) {
               local_90 = 0;
               Memory::free_static((void*)( lVar8 + -0x10 ), false);
            }

         }

      }

      iVar6 = ( *_pa_stream_connect_playback_dylibloader_wrapper_pulse )(*(undefined8*)( this + 0x88 ), uVar11, (Variant*)&local_78, 0x200a, 0, 0);
      if (-1 < iVar6) {
         CowData<int>::resize<false>((CowData<int>*)( this + 0x1d8 ), ( ulong )(uint)(*(int*)( this + 500 ) * *(int*)( this + 0x1fc )));
         CowData<short>::resize<false>((CowData<short>*)( this + 0x1e8 ), ( ulong ) * (uint*)( this + 0x1f8 ));
         *(undefined8*)( this + 0x38 ) = 0;
         goto LAB_00103309;
      }

      _err_print_error("init_output_device", "drivers/pulseaudio/audio_driver_pulseaudio.cpp", 0x10a, "Condition \"error_code < 0\" is true. Returning: ERR_CANT_OPEN", 0, 0);
   }

   iVar4 = 0x13;
   LAB_00103309:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* AudioDriverPulseAudio::init() */undefined8 AudioDriverPulseAudio::init(AudioDriverPulseAudio *this) {
   long *plVar1;
   bool bVar2;
   code *pcVar3;
   char *pcVar4;
   char *pcVar5;
   char cVar6;
   int iVar7;
   undefined4 uVar8;
   long lVar9;
   long lVar10;
   undefined8 uVar11;
   long in_FS_OFFSET;
   bool bVar12;
   char *local_98;
   long local_90;
   char *local_88;
   long local_80;
   char local_78[8];
   long local_70;
   char *local_68;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   uVar11 = 0x13;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   initialize_asound(1);
   iVar7 = initialize_pulse(1);
   if (iVar7 != 0) goto LAB_00103eca;
   iVar7 = ( *_pa_get_library_version_dylibloader_wrapper_pulse )();
   String::utf8((char*)&local_98, iVar7);
   String::split(local_78, SUB81(&local_98, 0), 0x1059dc);
   if (( local_70 == 0 ) || ( *(long*)( local_70 + -8 ) < 2 )) {
      cVar6 = is_print_verbose_enabled();
      if (cVar6 != '\0') {
         bVar2 = false;
         goto LAB_00103bd0;
      }

      LAB_00103e80:cVar6 = is_print_verbose_enabled();
      if (cVar6 != '\0') {
         Variant::Variant((Variant*)local_58, "Unsupported PulseAudio library version!");
         stringify_variants((Variant*)&local_68);
         __print_line((String*)&local_68);
         pcVar4 = local_68;
         if (local_68 != (char*)0x0) {
            LOCK();
            plVar1 = (long*)( local_68 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_68 = (char*)0x0;
               Memory::free_static(pcVar4 + -0x10, false);
            }

         }

         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

      }

      LAB_00103e8d:uVar11 = 0x13;
   }
 else {
      lVar10 = String::to_int();
      bVar2 = 7 < lVar10;
      cVar6 = is_print_verbose_enabled();
      if (cVar6 != '\0') {
         LAB_00103bd0:local_88 = (char*)0x0;
         plVar1 = (long*)( local_98 + -0x10 );
         if (local_98 != (char*)0x0) {
            do {
               lVar10 = *plVar1;
               if (lVar10 == 0) goto LAB_00103c08;
               LOCK();
               lVar9 = *plVar1;
               bVar12 = lVar10 == lVar9;
               if (bVar12) {
                  *plVar1 = lVar10 + 1;
                  lVar9 = lVar10;
               }

               UNLOCK();
            }
 while ( !bVar12 );
            if (lVar9 != -1) {
               local_88 = local_98;
            }

         }

         LAB_00103c08:local_90 = 0;
         local_60 = 0x17;
         local_68 = "PulseAudio %s detected.";
         String::parse_latin1((StrRange*)&local_90);
         vformat<String>((String*)&local_80, (StrRange*)&local_90, &local_88);
         Variant::Variant((Variant*)local_58, (String*)&local_80);
         stringify_variants((Variant*)&local_68);
         __print_line((String*)&local_68);
         pcVar4 = local_68;
         if (local_68 != (char*)0x0) {
            LOCK();
            plVar1 = (long*)( local_68 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_68 = (char*)0x0;
               Memory::free_static(pcVar4 + -0x10, false);
            }

         }

         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         lVar10 = local_80;
         if (local_80 != 0) {
            LOCK();
            plVar1 = (long*)( local_80 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_80 = 0;
               Memory::free_static((void*)( lVar10 + -0x10 ), false);
            }

         }

         lVar10 = local_90;
         if (local_90 != 0) {
            LOCK();
            plVar1 = (long*)( local_90 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_90 = 0;
               Memory::free_static((void*)( lVar10 + -0x10 ), false);
            }

         }

         pcVar4 = local_88;
         if (local_88 != (char*)0x0) {
            LOCK();
            plVar1 = (long*)( local_88 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_88 = (char*)0x0;
               Memory::free_static(pcVar4 + -0x10, false);
            }

         }

      }

      if (!bVar2) goto LAB_00103e80;
      this[0x228] = (AudioDriverPulseAudio)0x0;
      this[0x229] = (AudioDriverPulseAudio)0x0;
      uVar8 = AudioDriver::_get_configured_mix_rate();
      *(undefined4*)( this + 0x1f0 ) = uVar8;
      lVar10 = ( *_pa_mainloop_new_dylibloader_wrapper_pulse )();
      *(long*)( this + 0x78 ) = lVar10;
      if (lVar10 == 0) {
         _err_print_error(&_LC75, "drivers/pulseaudio/audio_driver_pulseaudio.cpp", 0x137, "Parameter \"pa_ml\" is null.", 0, 0);
         goto LAB_00103e8d;
      }

      local_88 = (char*)0x0;
      lVar10 = Engine::get_singleton();
      if (*(char*)( lVar10 + 0xc0 ) == '\0') {
         ProjectSettings::get_singleton();
         StringName::StringName((StringName*)&local_80, "application/config/name", false);
         ProjectSettings::get_setting_with_override((StringName*)local_58);
         Variant::operator_cast_to_String((Variant*)&local_68);
         pcVar5 = local_68;
         pcVar4 = local_88;
         if (local_88 == local_68) {
            if (local_88 != (char*)0x0) {
               LOCK();
               plVar1 = (long*)( local_88 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_68 = (char*)0x0;
                  Memory::free_static(pcVar5 + -0x10, false);
               }

            }

         }
 else {
            if (local_88 != (char*)0x0) {
               LOCK();
               plVar1 = (long*)( local_88 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_88 = (char*)0x0;
                  Memory::free_static(pcVar4 + -0x10, false);
               }

            }

            local_88 = local_68;
         }

         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
            StringName::unref();
         }

         if (( local_88 == (char*)0x0 ) || ( *(uint*)( local_88 + -8 ) < 2 )) {
            local_60 = 0x14;
            local_68 = "Godot Engine Project";
            String::parse_latin1((StrRange*)&local_88);
         }

      }
 else {
         local_60 = 0x13;
         local_68 = "Godot Engine Editor";
         String::parse_latin1((StrRange*)&local_88);
      }

      pcVar3 = _pa_context_new_dylibloader_wrapper_pulse;
      String::utf8();
      uVar11 = ( *_pa_mainloop_get_api_dylibloader_wrapper_pulse )(*(undefined8*)( this + 0x78 ));
      lVar10 = ( *pcVar3 )(uVar11);
      pcVar4 = local_68;
      *(long*)( this + 0x80 ) = lVar10;
      if (local_68 != (char*)0x0) {
         LOCK();
         plVar1 = (long*)( local_68 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_68 = (char*)0x0;
            Memory::free_static(pcVar4 + -0x10, false);
         }

         lVar10 = *(long*)( this + 0x80 );
      }

      if (lVar10 == 0) {
         _err_print_error(&_LC75, "drivers/pulseaudio/audio_driver_pulseaudio.cpp", 0x144, "Parameter \"pa_ctx\" is null.", 0, 0);
         LAB_00104121:uVar11 = 0x13;
      }
 else {
         *(undefined4*)( this + 0x200 ) = 0;
         ( *_pa_context_set_state_callback_dylibloader_wrapper_pulse )(lVar10, pa_state_cb, this);
         iVar7 = ( *_pa_context_connect_dylibloader_wrapper_pulse )(*(undefined8*)( this + 0x80 ), 0, 0, 0);
         if (iVar7 < 0) {
            if (*(long*)( this + 0x80 ) != 0) {
               ( *_pa_context_unref_dylibloader_wrapper_pulse )();
               *(undefined8*)( this + 0x80 ) = 0;
            }

            LAB_0010410a:if (*(long*)( this + 0x78 ) != 0) {
               ( *_pa_mainloop_free_dylibloader_wrapper_pulse )();
               *(undefined8*)( this + 0x78 ) = 0;
            }

            goto LAB_00104121;
         }

         while (*(int*)( this + 0x200 ) == 0) {
            iVar7 = ( *_pa_mainloop_iterate_dylibloader_wrapper_pulse )(*(undefined8*)( this + 0x78 ), 1, 0);
            if (iVar7 < 0) {
               _err_print_error(&_LC75, "drivers/pulseaudio/audio_driver_pulseaudio.cpp", 0x15b, "pa_mainloop_iterate error", 0, 0);
            }

         }
;
         if (*(int*)( this + 0x200 ) < 0) {
            if (*(long*)( this + 0x80 ) != 0) {
               ( *_pa_context_disconnect_dylibloader_wrapper_pulse )();
               ( *_pa_context_unref_dylibloader_wrapper_pulse )(*(undefined8*)( this + 0x80 ));
               *(undefined8*)( this + 0x80 ) = 0;
            }

            goto LAB_0010410a;
         }

         uVar11 = 0;
         init_output_device(this);
         local_68 = (char*)CONCAT44(local_68._4_4_, 1);
         Thread::start((_func_void_void_ptr*)( this + 0x40 ), thread_func, (Settings*)this);
      }

      pcVar4 = local_88;
      if (local_88 != (char*)0x0) {
         LOCK();
         plVar1 = (long*)( local_88 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_88 = (char*)0x0;
            Memory::free_static(pcVar4 + -0x10, false);
         }

      }

   }

   CowData<String>::_unref((CowData<String>*)&local_70);
   pcVar4 = local_98;
   if (local_98 != (char*)0x0) {
      LOCK();
      plVar1 = (long*)( local_98 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_98 = (char*)0x0;
         Memory::free_static(pcVar4 + -0x10, false);
      }

   }

   LAB_00103eca:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar11;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* AudioDriverPulseAudio::thread_func(void*) */void AudioDriverPulseAudio::thread_func(void *param_1) {
   uint uVar1;
   StrRange *pSVar2;
   String *pSVar3;
   String *this;
   undefined2 *puVar4;
   code *pcVar5;
   char cVar6;
   int iVar7;
   undefined4 uVar8;
   uint uVar9;
   int iVar10;
   long *plVar11;
   undefined8 uVar12;
   undefined2 *puVar13;
   undefined2 *puVar14;
   long lVar15;
   long lVar16;
   char *pcVar17;
   size_t sVar18;
   ulong uVar19;
   int iVar20;
   uint uVar21;
   ulong uVar22;
   char *pcVar23;
   long lVar24;
   ulong uVar25;
   ulong uVar26;
   int iVar27;
   long in_FS_OFFSET;
   bool bVar28;
   uint local_8c;
   ulong local_88;
   long local_68;
   ulong local_60;
   char *local_58;
   size_t local_50;
   long local_40;
   uVar22 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   OS::get_singleton();
   local_88 = OS::get_ticks_msec();
   local_8c = 0;
   do {
      if (*(char*)( (long)param_1 + 0x229 ) != '\0') {
         LAB_00104a41:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
            /* WARNING: Subroutine does not return */
            __stack_chk_fail();
         }

         return;
      }

      /* WARNING: Load size is inaccurate */
      lVar15 = *param_1;
      iVar10 = (int)param_1;
      if (uVar22 == 0) {
         if (*(code**)( lVar15 + 0x38 ) == lock) {
            iVar7 = pthread_mutex_lock((pthread_mutex_t*)( (long)param_1 + 0x50 ));
            if (iVar7 != 0) goto LAB_00104eec;
         }
 else {
            ( **(code**)( lVar15 + 0x38 ) )(param_1);
         }

         plVar11 = (long*)OS::get_singleton();
         uVar12 = ( **(code**)( *plVar11 + 0x208 ) )(plVar11);
         *(undefined8*)( (long)param_1 + 0x18 ) = uVar12;
         if (*(char*)( (long)param_1 + 0x228 ) == '\0') {
            CowData<short>::_copy_on_write((CowData<short>*)( (long)param_1 + 0x1e8 ));
            puVar4 = *(undefined2**)( (long)param_1 + 0x1e8 );
            if (( puVar4 != (undefined2*)0x0 ) && ( uVar22 = *(ulong*)( puVar4 + -4 ) ),0 < (long)uVar22) {
               puVar13 = puVar4;
               if (( uVar22 & 1 ) != 0) {
                  puVar13 = puVar4 + 1;
                  *puVar4 = 0;
                  if (puVar13 == puVar4 + uVar22) goto LAB_001043a9;
               }

               do {
                  puVar14 = puVar13 + 2;
                  *puVar13 = 0;
                  puVar13[1] = 0;
                  puVar13 = puVar14;
               }
 while ( puVar14 != puVar4 + uVar22 );
            }

            LAB_001043a9:uVar22 = ( ulong ) * (uint*)( (long)param_1 + 0x1f8 );
         }
 else {
            CowData<int>::_copy_on_write((CowData<int>*)( (long)param_1 + 0x1d8 ));
            AudioDriver::audio_server_process(iVar10, (int*)( ulong ) * (uint*)( (long)param_1 + 500 ), SUB81(*(undefined8*)( (long)param_1 + 0x1d8 ), 0));
            CowData<short>::_copy_on_write((CowData<short>*)( (long)param_1 + 0x1e8 ));
            lVar15 = *(long*)( (long)param_1 + 0x1e8 );
            if (*(uint*)( (long)param_1 + 0x1fc ) != ( uint ) * (byte*)( (long)param_1 + 0x98 )) {
               iVar7 = *(int*)( (long)param_1 + 500 );
               if (iVar7 != 0) {
                  lVar16 = *(long*)( (long)param_1 + 0x1d8 );
                  uVar22 = 0;
                  iVar27 = 0;
                  uVar26 = 0;
                  if (*(byte*)( (long)param_1 + 0x98 ) < 2) {
                     if (lVar16 != 0) {
                        lVar24 = *(long*)( lVar16 + -8 );
                        uVar25 = 0;
                        uVar21 = 0;
                        uVar19 = 1;
                        uVar26 = 0;
                        goto LAB_0010486b;
                     }

                     uVar26 = 0;
                     lVar24 = 0;
                  }
 else {
                     while (lVar16 != 0) {
                        lVar24 = *(long*)( lVar16 + -8 );
                        iVar20 = 0;
                        uVar1 = (uint)uVar26;
                        while (true) {
                           uVar21 = uVar1 + 1;
                           if (lVar24 <= (long)uVar26) goto LAB_00104aa3;
                           uVar25 = ( ulong )((int)uVar22 + 1);
                           iVar20 = iVar20 + 1;
                           *(undefined2*)( lVar15 + uVar22 * 2 ) = *(undefined2*)( lVar16 + 2 + uVar26 * 4 );
                           if ((int)( *(byte*)( (long)param_1 + 0x98 ) - 1 ) <= iVar20) break;
                           uVar26 = (ulong)uVar21;
                           uVar22 = uVar25;
                           uVar1 = uVar21;
                        }
;
                        uVar19 = ( ulong )(uVar1 + 2);
                        uVar26 = (ulong)uVar21;
                        LAB_0010486b:while (true) {
                           if (lVar24 <= (long)uVar26) goto LAB_00104aa3;
                           uVar1 = uVar21 + 2;
                           uVar26 = uVar19;
                           if (lVar24 <= (long)uVar19) goto LAB_00104aa3;
                           iVar27 = iVar27 + 1;
                           uVar9 = (int)uVar25 + 1;
                           uVar22 = (ulong)uVar9;
                           *(short*)( lVar15 + uVar25 * 2 ) = (short)( ( uint )((int)*(short*)( lVar16 + 2 + uVar19 * 4 ) + (int)*(short*)( lVar16 + 2 + (ulong)uVar21 * 4 )) >> 1 );
                           if (iVar27 == iVar7) goto LAB_001043a9;
                           uVar26 = (ulong)uVar1;
                           if (1 < *(byte*)( (long)param_1 + 0x98 )) break;
                           uVar19 = ( ulong )(uVar21 + 3);
                           uVar25 = (ulong)uVar9;
                           uVar21 = uVar1;
                        }
;
                     }
;
                     lVar24 = 0;
                  }

                  LAB_00104aa3:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, uVar26, lVar24, "p_index", "size()", "", false, true);
                  _err_flush_stdout();
                  /* WARNING: Does not return */
                  pcVar5 = (code*)invalidInstructionException();
                  ( *pcVar5 )();
               }

               goto LAB_001043a9;
            }

            uVar22 = ( ulong ) * (uint*)( (long)param_1 + 0x1f8 );
            if (*(uint*)( (long)param_1 + 0x1f8 ) == 0) {
               uVar22 = 0;
            }
 else {
               lVar16 = *(long*)( (long)param_1 + 0x1d8 );
               uVar26 = 0;
               if (lVar16 == 0) {
                  lVar24 = 0;
                  goto LAB_00104aa3;
               }

               lVar24 = *(long*)( lVar16 + -8 );
               uVar26 = 0;
               do {
                  if (lVar24 <= (long)uVar26) goto LAB_00104aa3;
                  *(undefined2*)( lVar15 + uVar26 * 2 ) = *(undefined2*)( lVar16 + 2 + uVar26 * 4 );
                  uVar26 = uVar26 + 1;
               }
 while ( uVar26 != uVar22 );
            }

         }

         uVar22 = uVar22 * 2;
         plVar11 = (long*)OS::get_singleton();
         lVar15 = ( **(code**)( *plVar11 + 0x208 ) )(plVar11);
         LOCK();
         *(long*)( (long)param_1 + 0x20 ) = *(long*)( (long)param_1 + 0x20 ) + ( lVar15 - *(long*)( (long)param_1 + 0x18 ) );
         UNLOCK();
         /* WARNING: Load size is inaccurate */
         if (*(code**)( *param_1 + 0x40 ) == unlock) {
            pthread_mutex_unlock((pthread_mutex_t*)( (long)param_1 + 0x50 ));
         }
 else {
            ( **(code**)( *param_1 + 0x40 ) )(param_1);
         }

         local_8c = 0;
         /* WARNING: Load size is inaccurate */
         lVar15 = *param_1;
      }

      if (*(code**)( lVar15 + 0x38 ) == lock) {
         iVar7 = pthread_mutex_lock((pthread_mutex_t*)( (long)param_1 + 0x50 ));
         if (iVar7 != 0) {
            LAB_00104eec:/* WARNING: Subroutine does not return */std::__throw_system_error(iVar7);
         }

      }
 else {
         ( **(code**)( lVar15 + 0x38 ) )(param_1);
      }

      plVar11 = (long*)OS::get_singleton();
      uVar12 = ( **(code**)( *plVar11 + 0x208 ) )(plVar11);
      *(undefined8*)( (long)param_1 + 0x18 ) = uVar12;
      do {
         iVar7 = ( *_pa_mainloop_iterate_dylibloader_wrapper_pulse )(*(undefined8*)( (long)param_1 + 0x78 ), 0, 0);
      }
 while ( 0 < iVar7 );
      uVar26 = 0;
      if (uVar22 != 0) {
         iVar7 = ( *_pa_stream_get_state_dylibloader_wrapper_pulse )(*(undefined8*)( (long)param_1 + 0x88 ));
         if (( iVar7 == 2 ) && ( uVar26 = ( *_pa_stream_writable_size_dylibloader_wrapper_pulse )(*(undefined8*)( (long)param_1 + 0x88 )) ),uVar26 != 0) {
            if (uVar22 <= uVar26) {
               uVar26 = uVar22;
            }

            iVar7 = ( *_pa_stream_write_dylibloader_wrapper_pulse )(*(undefined8*)( (long)param_1 + 0x88 ), (ulong)local_8c + *(long*)( (long)param_1 + 0x1e8 ), uVar26, 0);
            if (iVar7 == 0) {
               local_8c = local_8c + (int)uVar26;
               uVar22 = uVar22 - uVar26;
               goto LAB_00104470;
            }

            pcVar17 = (char*)( *_pa_strerror_dylibloader_wrapper_pulse )(iVar7);
            local_60 = 0;
            sVar18 = 0;
            if (pcVar17 != (char*)0x0) {
               sVar18 = strlen(pcVar17);
            }

            local_58 = pcVar17;
            local_50 = sVar18;
            String::parse_latin1((StrRange*)&local_60);
            operator+((char *)&
            local_58,(String*)"PulseAudio: pa_stream_write error: ";
            _err_print_error("thread_func", "drivers/pulseaudio/audio_driver_pulseaudio.cpp", 0x1c8, &local_58);
            pcVar17 = local_58;
            if (local_58 != (char*)0x0) {
               LOCK();
               plVar11 = (long*)( local_58 + -0x10 );
               *plVar11 = *plVar11 + -1;
               UNLOCK();
               if (*plVar11 == 0) {
                  local_58 = (char*)0x0;
                  Memory::free_static(pcVar17 + -0x10, false);
               }

            }

            uVar26 = local_60;
            if (local_60 != 0) {
               LOCK();
               plVar11 = (long*)( local_60 - 0x10 );
               *plVar11 = *plVar11 + -1;
               UNLOCK();
               if (*plVar11 == 0) {
                  local_60 = 0;
                  Memory::free_static((void*)( uVar26 - 0x10 ), false);
               }

            }

         }

         uVar26 = 0;
      }

      LAB_00104470:pSVar2 = (StrRange*)( (long)param_1 + 0x1a8 );
      pSVar3 = (String*)( (long)param_1 + 0x1a0 );
      cVar6 = String::operator !=(pSVar3, (String*)pSVar2);
      if (cVar6 != '\0') {
         if (*(long*)( (long)param_1 + 0x1a0 ) != *(long*)( (long)param_1 + 0x1a8 )) {
            CowData<char32_t>::_ref((CowData<char32_t>*)pSVar3, (CowData*)pSVar2);
         }

         if (*(long*)( (long)param_1 + 0x88 ) != 0) {
            ( *_pa_stream_disconnect_dylibloader_wrapper_pulse )();
            ( *_pa_stream_unref_dylibloader_wrapper_pulse )(*(undefined8*)( (long)param_1 + 0x88 ));
            *(undefined8*)( (long)param_1 + 0x88 ) = 0;
         }

         iVar7 = init_output_device((AudioDriverPulseAudio*)param_1);
         if (iVar7 == 0) {
            LAB_001044f0:local_8c = 0;
            uVar22 = 0;
            goto LAB_001044fa;
         }

         _err_print_error("thread_func", "drivers/pulseaudio/audio_driver_pulseaudio.cpp", 0x1d8, "PulseAudio: init_output_device error");
         local_58 = "Default";
         local_50 = 7;
         String::parse_latin1((StrRange*)pSVar3);
         local_58 = "Default";
         local_50 = 7;
         String::parse_latin1(pSVar2);
         iVar7 = init_output_device((AudioDriverPulseAudio*)param_1);
         if (iVar7 == 0) goto LAB_001044f0;
         LAB_00104a33:*(undefined1*)( (long)param_1 + 0x228 ) = 0;
         *(undefined1*)( (long)param_1 + 0x229 ) = 1;
         goto LAB_00104a41;
      }

      LAB_001044fa:cVar6 = String::operator ==(pSVar3, "Default");
      if (cVar6 != '\0') {
         OS::get_singleton();
         uVar19 = OS::get_ticks_msec();
         if (local_88 + 1000 < uVar19) {
            local_68 = 0;
            plVar11 = (long*)( *(long*)( (long)param_1 + 0x1b0 ) + -0x10 );
            if (*(long*)( (long)param_1 + 0x1b0 ) != 0) {
               do {
                  lVar15 = *plVar11;
                  if (lVar15 == 0) goto LAB_001045ea;
                  LOCK();
                  lVar16 = *plVar11;
                  bVar28 = lVar15 == lVar16;
                  if (bVar28) {
                     *plVar11 = lVar15 + 1;
                     lVar16 = lVar15;
                  }

                  UNLOCK();
               }
 while ( !bVar28 );
               if (lVar16 != -1) {
                  local_68 = *(long*)( (long)param_1 + 0x1b0 );
               }

            }

            LAB_001045ea:*(undefined4*)( (long)param_1 + 0x204 ) = 0;
            lVar15 = ( *_pa_context_get_server_info_dylibloader_wrapper_pulse )(*(undefined8*)( (long)param_1 + 0x80 ), pa_server_info_cb, param_1);
            pcVar5 = _pa_strerror_dylibloader_wrapper_pulse;
            if (lVar15 == 0) {
               uVar8 = ( *_pa_context_errno_dylibloader_wrapper_pulse )(*(undefined8*)( (long)param_1 + 0x80 ));
               pcVar17 = (char*)( *pcVar5 )(uVar8);
               local_60 = 0;
               sVar18 = 0;
               if (pcVar17 != (char*)0x0) {
                  sVar18 = strlen(pcVar17);
               }

               local_58 = pcVar17;
               local_50 = sVar18;
               String::parse_latin1((StrRange*)&local_60);
               operator+((char *)&
               local_58,(String*)"pa_context_get_server_info error: ";
               _err_print_error("thread_func", "drivers/pulseaudio/audio_driver_pulseaudio.cpp", 0x1fc, &local_58);
               pcVar17 = local_58;
               if (local_58 != (char*)0x0) {
                  LOCK();
                  plVar11 = (long*)( local_58 + -0x10 );
                  *plVar11 = *plVar11 + -1;
                  UNLOCK();
                  if (*plVar11 == 0) {
                     local_58 = (char*)0x0;
                     Memory::free_static(pcVar17 + -0x10, false);
                  }

               }

               uVar25 = local_60;
               if (local_60 != 0) {
                  LOCK();
                  plVar11 = (long*)( local_60 - 0x10 );
                  *plVar11 = *plVar11 + -1;
                  UNLOCK();
                  if (*plVar11 == 0) {
                     local_60 = 0;
                     Memory::free_static((void*)( uVar25 - 0x10 ), false);
                  }

               }

            }
 else {
               while (*(int*)( (long)param_1 + 0x204 ) == 0) {
                  iVar7 = ( *_pa_mainloop_iterate_dylibloader_wrapper_pulse )(*(undefined8*)( (long)param_1 + 0x78 ), 1, 0);
                  if (iVar7 < 0) {
                     _err_print_error("thread_func", "drivers/pulseaudio/audio_driver_pulseaudio.cpp", 0x1f6, "pa_mainloop_iterate error");
                  }

               }
;
               ( *_pa_operation_unref_dylibloader_wrapper_pulse )(lVar15);
            }

            cVar6 = String::operator !=((String*)&local_68, (String*)( (long)param_1 + 0x1b0 ));
            if (cVar6 != '\0') {
               if (*(long*)( (long)param_1 + 0x88 ) != 0) {
                  ( *_pa_stream_disconnect_dylibloader_wrapper_pulse )();
                  ( *_pa_stream_unref_dylibloader_wrapper_pulse )(*(undefined8*)( (long)param_1 + 0x88 ));
                  *(undefined8*)( (long)param_1 + 0x88 ) = 0;
               }

               iVar7 = init_output_device((AudioDriverPulseAudio*)param_1);
               if (iVar7 != 0) {
                  _err_print_error("thread_func", "drivers/pulseaudio/audio_driver_pulseaudio.cpp", 0x204, "PulseAudio: init_output_device error", 0, 0);
                  lVar15 = local_68;
                  *(undefined1*)( (long)param_1 + 0x228 ) = 0;
                  *(undefined1*)( (long)param_1 + 0x229 ) = 1;
                  if (local_68 != 0) {
                     LOCK();
                     plVar11 = (long*)( local_68 + -0x10 );
                     *plVar11 = *plVar11 + -1;
                     UNLOCK();
                     if (*plVar11 == 0) {
                        local_68 = 0;
                        Memory::free_static((void*)( lVar15 + -0x10 ), false);
                     }

                  }

                  goto LAB_00104a41;
               }

               uVar22 = 0;
               local_8c = 0;
            }

            lVar15 = local_68;
            local_88 = uVar19;
            if (local_68 != 0) {
               LOCK();
               plVar11 = (long*)( local_68 + -0x10 );
               *plVar11 = *plVar11 + -1;
               UNLOCK();
               if (*plVar11 == 0) {
                  local_68 = 0;
                  Memory::free_static((void*)( lVar15 + -0x10 ), false);
               }

            }

         }

      }

      if (( *(long*)( (long)param_1 + 0x90 ) != 0 ) && ( iVar7 = ( *_pa_stream_get_state_dylibloader_wrapper_pulse )() ),iVar7 == 2) {
         uVar19 = ( *_pa_stream_readable_size_dylibloader_wrapper_pulse )(*(undefined8*)( (long)param_1 + 0x90 ));
         local_60 = uVar19;
         if (uVar19 != 0) {
            local_58 = (char*)0x0;
            if (*(long*)( (long)param_1 + 0x30 ) == 0) {
               local_60 = 0;
            }
 else {
               local_60 = *(long*)( *(long*)( (long)param_1 + 0x30 ) + -8 ) * 2;
               if (uVar19 < local_60) {
                  local_60 = uVar19;
               }

            }

            iVar7 = ( *_pa_stream_peek_dylibloader_wrapper_pulse )(*(undefined8*)( (long)param_1 + 0x90 ), &local_58, &local_60);
            if (iVar7 == 0) {
               if (local_60 >> 1 != 0) {
                  pcVar17 = local_58 + ( local_60 >> 1 ) * 2;
                  pcVar23 = local_58;
                  do {
                     while (true) {
                        pcVar23 = pcVar23 + 2;
                        AudioDriver::input_buffer_write(iVar10);
                        if (*(char*)( (long)param_1 + 0x11c ) != '\x01') break;
                        AudioDriver::input_buffer_write(iVar10);
                        if (pcVar23 == pcVar17) goto LAB_00104dc0;
                     }
;
                  }
 while ( pcVar23 != pcVar17 );
               }

               LAB_00104dc0:uVar19 = local_60;
               iVar10 = ( *_pa_stream_drop_dylibloader_wrapper_pulse )(*(undefined8*)( (long)param_1 + 0x90 ));
               if (iVar10 != 0) {
                  _err_print_error("thread_func", "drivers/pulseaudio/audio_driver_pulseaudio.cpp", 0x229, "pa_stream_drop error");
               }

            }
 else {
               uVar19 = 0;
               _err_print_error("thread_func", "drivers/pulseaudio/audio_driver_pulseaudio.cpp", 0x219, "pa_stream_peek error");
            }

         }

         pSVar3 = (String*)( (long)param_1 + 0x1c0 );
         this(String * )((long)param_1 + 0x1b8);
         cVar6 = String::operator !=(this, pSVar3);
         if (cVar6 != '\0') {
            if (*(long*)( (long)param_1 + 0x1b8 ) != *(long*)( (long)param_1 + 0x1c0 )) {
               CowData<char32_t>::_ref((CowData<char32_t>*)this, (CowData*)pSVar3);
            }

            finish_input_device((AudioDriverPulseAudio*)param_1);
            iVar10 = init_input_device((AudioDriverPulseAudio*)param_1);
            if (iVar10 != 0) {
               _err_print_error("thread_func", "drivers/pulseaudio/audio_driver_pulseaudio.cpp", 0x235, "PulseAudio: init_input_device error");
               local_58 = "Default";
               local_50 = 7;
               String::parse_latin1((StrRange*)this);
               local_58 = "Default";
               local_50 = 7;
               String::parse_latin1((StrRange*)pSVar3);
               iVar10 = init_input_device((AudioDriverPulseAudio*)param_1);
               if (iVar10 != 0) goto LAB_00104a33;
               uVar26 = uVar26 | uVar19;
               goto LAB_00104524;
            }

         }

         uVar26 = uVar26 | uVar19;
      }

      LAB_00104524:plVar11 = (long*)OS::get_singleton();
      lVar15 = ( **(code**)( *plVar11 + 0x208 ) )(plVar11);
      LOCK();
      *(long*)( (long)param_1 + 0x20 ) = *(long*)( (long)param_1 + 0x20 ) + ( lVar15 - *(long*)( (long)param_1 + 0x18 ) );
      UNLOCK();
      /* WARNING: Load size is inaccurate */
      if (*(code**)( *param_1 + 0x40 ) == unlock) {
         pthread_mutex_unlock((pthread_mutex_t*)( (long)param_1 + 0x50 ));
      }
 else {
         ( **(code**)( *param_1 + 0x40 ) )(param_1);
      }

      if (uVar26 == 0) {
         plVar11 = (long*)OS::get_singleton();
         ( **(code**)( *plVar11 + 0x1f8 ) )(plVar11);
      }

   }
 while ( true );
}
/* AudioDriverPulseAudio::AudioDriverPulseAudio() */void AudioDriverPulseAudio::AudioDriverPulseAudio(AudioDriverPulseAudio *this) {
   long lVar1;
   long lVar2;
   ulong uVar3;
   AudioDriverPulseAudio *pAVar4;
   undefined8 *puVar5;
   long in_FS_OFFSET;
   byte bVar6;
   bVar6 = 0;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined1(*) [16])( this + 8 ) = (undefined1[16])0x0;
   *(code**)this = Memory::realloc_static;
   *(undefined8*)( this + 0x18 ) = 0;
   *(undefined8*)( this + 0x20 ) = 0;
   *(undefined***)this = &PTR_get_name_001069d0;
   *(undefined8*)( this + 0x30 ) = 0;
   *(undefined8*)( this + 0x38 ) = 0;
   Thread::Thread((Thread*)( this + 0x40 ));
   *(undefined1(*) [16])( this + 0x60 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x78 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x88 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x50 ) = (undefined1[16])0x0;
   *(undefined8*)( this + 0x70 ) = 0;
   *(undefined4*)( this + 0x60 ) = 1;
   pAVar4 = this + 0x98;
   for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
      *(undefined8*)pAVar4 = 0;
      pAVar4 = pAVar4 + (ulong)bVar6 * -0x10 + 8;
   }

   *(undefined4*)pAVar4 = 0;
   *(undefined8*)( this + 0x11c ) = 0;
   *(undefined8*)( this + 0x198 ) = 0;
   puVar5 = (undefined8*)( ( ulong )(this + 0x124) & 0xfffffffffffffff8 );
   for (uVar3 = ( ulong )(( (int)this - (int)(undefined8*)( ( ulong )(this + 0x124) & 0xfffffffffffffff8 ) ) + 0x1a0U >> 3); uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar5 = 0;
      puVar5 = puVar5 + (ulong)bVar6 * -2 + 1;
   }

   *(undefined8*)( this + 0x1a0 ) = 0;
   String::parse_latin1((StrRange*)( this + 0x1a0 ));
   *(undefined8*)( this + 0x1a8 ) = 0;
   String::parse_latin1((StrRange*)( this + 0x1a8 ));
   *(undefined8*)( this + 0x1d8 ) = 0;
   *(undefined8*)( this + 0x1e8 ) = 0;
   *(undefined8*)( this + 0x1f0 ) = 0;
   *(undefined8*)( this + 0x1f8 ) = 0;
   *(undefined8*)( this + 0x200 ) = 0;
   *(undefined8*)( this + 0x210 ) = 0;
   *(undefined8*)( this + 0x220 ) = 0;
   *(undefined1(*) [16])( this + 0x1b0 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x1c0 ) = (undefined1[16])0x0;
   this[0x228] = (AudioDriverPulseAudio)0x0;
   this[0x229] = (AudioDriverPulseAudio)0x0;
   *(undefined4*)( this + 0x22c ) = 0;
   CowData<int>::resize<false>((CowData<int>*)( this + 0x1d8 ), 0);
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      CowData<short>::resize<false>((CowData<short>*)( this + 0x1e8 ), 0);
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* AudioDriver::is_stream_registered_as_sample(Ref<AudioStream> const&) const */undefined8 AudioDriver::is_stream_registered_as_sample(Ref *param_1) {
   return 0;
}
/* AudioDriver::register_sample(Ref<AudioSample> const&) */void AudioDriver::register_sample(Ref *param_1) {
   return;
}
/* AudioDriver::unregister_sample(Ref<AudioSample> const&) */void AudioDriver::unregister_sample(Ref *param_1) {
   return;
}
/* AudioDriver::stop_sample_playback(Ref<AudioSamplePlayback> const&) */void AudioDriver::stop_sample_playback(Ref *param_1) {
   return;
}
/* AudioDriver::set_sample_playback_pause(Ref<AudioSamplePlayback> const&, bool) */void AudioDriver::set_sample_playback_pause(Ref *param_1, bool param_2) {
   return;
}
/* AudioDriver::is_sample_playback_active(Ref<AudioSamplePlayback> const&) */undefined8 AudioDriver::is_sample_playback_active(Ref *param_1) {
   return 0;
}
/* AudioDriver::get_sample_playback_position(Ref<AudioSamplePlayback> const&) */undefined8 AudioDriver::get_sample_playback_position(Ref *param_1) {
   return 0;
}
/* AudioDriver::update_sample_playback_pitch_scale(Ref<AudioSamplePlayback> const&, float) */void AudioDriver::update_sample_playback_pitch_scale(Ref *param_1, float param_2) {
   return;
}
/* AudioDriver::set_sample_playback_bus_volumes_linear(Ref<AudioSamplePlayback> const&,
   HashMap<StringName, Vector<AudioFrame>, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   Vector<AudioFrame> > > > const&) */void AudioDriver::set_sample_playback_bus_volumes_linear(Ref *param_1, HashMap *param_2) {
   return;
}
/* AudioDriver::set_sample_bus_count(int) */void AudioDriver::set_sample_bus_count(int param_1) {
   return;
}
/* AudioDriver::remove_sample_bus(int) */void AudioDriver::remove_sample_bus(int param_1) {
   return;
}
/* AudioDriver::add_sample_bus(int) */void AudioDriver::add_sample_bus(int param_1) {
   return;
}
/* AudioDriver::move_sample_bus(int, int) */void AudioDriver::move_sample_bus(int param_1, int param_2) {
   return;
}
/* AudioDriver::set_sample_bus_send(int, StringName const&) */void AudioDriver::set_sample_bus_send(int param_1, StringName *param_2) {
   return;
}
/* AudioDriver::set_sample_bus_volume_db(int, float) */void AudioDriver::set_sample_bus_volume_db(int param_1, float param_2) {
   return;
}
/* AudioDriver::set_sample_bus_solo(int, bool) */void AudioDriver::set_sample_bus_solo(int param_1, bool param_2) {
   return;
}
/* AudioDriver::set_sample_bus_mute(int, bool) */void AudioDriver::set_sample_bus_mute(int param_1, bool param_2) {
   return;
}
/* AudioDriverPulseAudio::get_name() const */char *AudioDriverPulseAudio::get_name(void) {
   return "PulseAudio";
}
/* CowData<short>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<short>::_copy_on_write(void) {
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
/* CowData<String>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<String>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<int>::resize<false>(long) [clone .isra.0] [clone .cold] */void CowData<int>::resize<false>(long param_1) {
   code *pcVar1;
   _DAT_00000000 = 0;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void FUN_0010555e(void) {
   code *pcVar1;
   _DAT_00000000 = 0;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<short>::resize<false>(long) [clone .isra.0] [clone .cold] */void CowData<short>::resize<false>(long param_1) {
   code *pcVar1;
   _DAT_00000000 = 0;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void FUN_00105576(void) {
   code *pcVar1;
   _DAT_00000000 = 0;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* AudioDriver::get_input_mix_rate() const */ulong AudioDriver::get_input_mix_rate(AudioDriver *this) {
   ulong uVar1;
   if (*(code**)( *(long*)this + 0x18 ) == AudioDriverPulseAudio::get_mix_rate) {
      return ( ulong ) * (uint*)( this + 0x1f0 );
   }

   /* WARNING: Could not recover jumptable at 0x001055b0. Too many branches */
   /* WARNING: Treating indirect jump as call */
   uVar1 = ( **(code**)( *(long*)this + 0x18 ) )();
   return uVar1;
}
/* WARNING: Removing unreachable block (ram,0x00105b68) *//* WARNING: Removing unreachable block (ram,0x00105c98) *//* WARNING: Removing unreachable block (ram,0x00105e60) *//* WARNING: Removing unreachable block (ram,0x00105ca4) *//* WARNING: Removing unreachable block (ram,0x00105cae) *//* WARNING: Removing unreachable block (ram,0x00105e40) *//* WARNING: Removing unreachable block (ram,0x00105cba) *//* WARNING: Removing unreachable block (ram,0x00105cc4) *//* WARNING: Removing unreachable block (ram,0x00105e20) *//* WARNING: Removing unreachable block (ram,0x00105cd0) *//* WARNING: Removing unreachable block (ram,0x00105cda) *//* WARNING: Removing unreachable block (ram,0x00105e00) *//* WARNING: Removing unreachable block (ram,0x00105ce6) *//* WARNING: Removing unreachable block (ram,0x00105cf0) *//* WARNING: Removing unreachable block (ram,0x00105de0) *//* WARNING: Removing unreachable block (ram,0x00105cfc) *//* WARNING: Removing unreachable block (ram,0x00105d06) *//* WARNING: Removing unreachable block (ram,0x00105dc0) *//* WARNING: Removing unreachable block (ram,0x00105d12) *//* WARNING: Removing unreachable block (ram,0x00105d1c) *//* WARNING: Removing unreachable block (ram,0x00105da0) *//* WARNING: Removing unreachable block (ram,0x00105d24) *//* WARNING: Removing unreachable block (ram,0x00105d3a) *//* WARNING: Removing unreachable block (ram,0x00105d46) *//* String vformat<String>(String const&, String const) */undefined8 *vformat<String>(undefined8 *param_1, bool *param_2, String *param_3) {
   char cVar1;
   Variant *this;
   int iVar2;
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
   iVar2 = (int)local_c8;
   Array::resize(iVar2);
   this(Variant * Array::operator [](iVar2));
   Variant::operator =(this, (Variant*)local_78);
   String::sprintf((Array*)local_c0, param_2);
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

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
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
/* AudioDriverPulseAudio::~AudioDriverPulseAudio() */void AudioDriverPulseAudio::~AudioDriverPulseAudio(AudioDriverPulseAudio *this) {
   long *plVar1;
   long lVar2;
   *(undefined***)this = &PTR_get_name_001069d0;
   CowData<String>::_unref((CowData<String>*)( this + 0x220 ));
   CowData<String>::_unref((CowData<String>*)( this + 0x210 ));
   if (*(long*)( this + 0x1e8 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x1e8 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x1e8 );
         *(undefined8*)( this + 0x1e8 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (*(long*)( this + 0x1d8 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x1d8 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x1d8 );
         *(undefined8*)( this + 0x1d8 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (*(long*)( this + 0x1c8 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x1c8 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x1c8 );
         *(undefined8*)( this + 0x1c8 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (*(long*)( this + 0x1c0 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x1c0 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x1c0 );
         *(undefined8*)( this + 0x1c0 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (*(long*)( this + 0x1b8 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x1b8 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x1b8 );
         *(undefined8*)( this + 0x1b8 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (*(long*)( this + 0x1b0 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x1b0 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x1b0 );
         *(undefined8*)( this + 0x1b0 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (*(long*)( this + 0x1a8 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x1a8 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x1a8 );
         *(undefined8*)( this + 0x1a8 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (*(long*)( this + 0x1a0 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x1a0 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x1a0 );
         *(undefined8*)( this + 0x1a0 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   Thread::~Thread((Thread*)( this + 0x40 ));
   *(code**)this = Memory::realloc_static;
   if (*(long*)( this + 0x30 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x30 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x30 );
         *(undefined8*)( this + 0x30 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
         return;
      }

   }

   return;
}
/* AudioDriverPulseAudio::~AudioDriverPulseAudio() */void AudioDriverPulseAudio::~AudioDriverPulseAudio(AudioDriverPulseAudio *this) {
   long *plVar1;
   long lVar2;
   *(undefined***)this = &PTR_get_name_001069d0;
   CowData<String>::_unref((CowData<String>*)( this + 0x220 ));
   CowData<String>::_unref((CowData<String>*)( this + 0x210 ));
   if (*(long*)( this + 0x1e8 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x1e8 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x1e8 );
         *(undefined8*)( this + 0x1e8 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (*(long*)( this + 0x1d8 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x1d8 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x1d8 );
         *(undefined8*)( this + 0x1d8 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (*(long*)( this + 0x1c8 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x1c8 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x1c8 );
         *(undefined8*)( this + 0x1c8 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (*(long*)( this + 0x1c0 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x1c0 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x1c0 );
         *(undefined8*)( this + 0x1c0 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (*(long*)( this + 0x1b8 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x1b8 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x1b8 );
         *(undefined8*)( this + 0x1b8 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (*(long*)( this + 0x1b0 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x1b0 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x1b0 );
         *(undefined8*)( this + 0x1b0 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (*(long*)( this + 0x1a8 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x1a8 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x1a8 );
         *(undefined8*)( this + 0x1a8 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (*(long*)( this + 0x1a0 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x1a0 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x1a0 );
         *(undefined8*)( this + 0x1a0 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   Thread::~Thread((Thread*)( this + 0x40 ));
   *(code**)this = Memory::realloc_static;
   if (*(long*)( this + 0x30 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x30 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x30 );
         *(undefined8*)( this + 0x30 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
         operator_delete(this, 0x230);
         return;
      }

   }

   operator_delete(this, 0x230);
   return;
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
      LAB_001067d0:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
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
   if (lVar10 == 0) goto LAB_001067d0;
   if (param_1 <= lVar6) {
      lVar6 = *(long*)this;
      uVar8 = param_1;
      while (lVar6 != 0) {
         if (*(ulong*)( lVar6 + -8 ) <= uVar8) {
            LAB_001066a9:if (lVar10 != lVar7) {
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
            if (*(ulong*)( lVar6 + -8 ) <= uVar8) goto LAB_001066a9;
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
      goto LAB_00106826;
   }

   if (lVar10 == lVar7) {
      LAB_0010674f:puVar9 = *(undefined8**)this;
      if (puVar9 == (undefined8*)0x0) {
         LAB_00106826:/* WARNING: Does not return */pcVar3 = (code*)invalidInstructionException();
         ( *pcVar3 )();
      }

      lVar6 = puVar9[-1];
      if (param_1 <= lVar6) goto LAB_0010673a;
   }
 else {
      if (lVar6 != 0) {
         uVar4 = _realloc(this, lVar10);
         if ((int)uVar4 != 0) {
            return uVar4;
         }

         goto LAB_0010674f;
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
   LAB_0010673a:puVar9[-1] = param_1;
   return 0;
}
/* CowData<String>::find(String const&, long) const */long CowData<String>::find(CowData<String> *this, String *param_1, long param_2) {
   char cVar1;
   long lVar2;
   long lVar3;
   if (param_2 < 0) {
      return -1;
   }

   lVar2 = *(long*)this;
   if (( lVar2 != 0 ) && ( lVar3 = lVar3 != 0 )) {
      while (param_2 < lVar3) {
         cVar1 = String::operator ==((String*)( lVar2 + param_2 * 8 ), param_1);
         if (cVar1 != '\0') {
            return param_2;
         }

         lVar2 = *(long*)this;
         param_2 = param_2 + 1;
         if (lVar2 == 0) {
            return -1;
         }

         lVar3 = *(long*)( lVar2 + -8 );
      }
;
   }

   return -1;
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
/* CowData<short>::_realloc(long) */undefined8 CowData<short>::_realloc(CowData<short> *this, long param_1) {
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
/* WARNING: Control flow encountered bad instruction data *//* AudioDriverPulseAudio::~AudioDriverPulseAudio() */void AudioDriverPulseAudio::~AudioDriverPulseAudio(AudioDriverPulseAudio *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}


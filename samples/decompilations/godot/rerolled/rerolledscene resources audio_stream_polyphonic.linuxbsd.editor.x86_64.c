/* AudioStreamPolyphonic::is_monophonic() const */undefined8 AudioStreamPolyphonic::is_monophonic(void) {
   return 1;
}
/* AudioStreamPolyphonic::get_polyphony() const */undefined4 AudioStreamPolyphonic::get_polyphony(AudioStreamPolyphonic *this) {
   return *(undefined4*)( this + 0x348 );
}
/* AudioStreamPlaybackPolyphonic::start(double) */double AudioStreamPlaybackPolyphonic::start(double param_1) {
   long *in_RDI;
   if ((char)in_RDI[0xd0] != '\0') {
      param_1 = (double)( **(code**)( *in_RDI + 0x158 ) )();
   }

   *(undefined1*)( in_RDI + 0xd0 ) = 1;
   return param_1;
}
/* AudioStreamPlaybackPolyphonic::is_playing() const */AudioStreamPlaybackPolyphonic AudioStreamPlaybackPolyphonic::is_playing(AudioStreamPlaybackPolyphonic *this) {
   return this[0x680];
}
/* AudioStreamPlaybackPolyphonic::get_loop_count() const */undefined8 AudioStreamPlaybackPolyphonic::get_loop_count(void) {
   return 0;
}
/* AudioStreamPlaybackPolyphonic::get_playback_position() const */undefined8 AudioStreamPlaybackPolyphonic::get_playback_position(void) {
   return 0;
}
/* AudioStreamPlaybackPolyphonic::seek(double) */void AudioStreamPlaybackPolyphonic::seek(double param_1) {
   return;
}
/* AudioStreamPlaybackPolyphonic::set_is_sample(bool) */void AudioStreamPlaybackPolyphonic::set_is_sample(AudioStreamPlaybackPolyphonic *this, bool param_1) {
   this[0x688] = (AudioStreamPlaybackPolyphonic)param_1;
   return;
}
/* AudioStreamPlaybackPolyphonic::get_is_sample() const */AudioStreamPlaybackPolyphonic AudioStreamPlaybackPolyphonic::get_is_sample(AudioStreamPlaybackPolyphonic *this) {
   return this[0x688];
}
/* AudioStreamPlaybackPolyphonic::set_stream_volume(long, float) */void AudioStreamPlaybackPolyphonic::set_stream_volume(AudioStreamPlaybackPolyphonic *this, long param_1, float param_2) {
   code *pcVar1;
   long lVar2;
   uint uVar3;
   uVar3 = ( uint )((ulong)param_1 >> 0x20);
   if (( uVar3 < *(uint*)( this + 0x270 ) ) && ( lVar2 = ( (ulong)param_1 >> 0x20 ) * 0x30 * (char*)( *(long*)( this + 0x278 ) + lVar2 ) != '\0' )) {
      if (*(uint*)( this + 0x270 ) <= uVar3) {
         _err_print_index_error("operator[]", "./core/templates/local_vector.h", 0xb2, (ulong)param_1 >> 0x20, ( ulong ) * (uint*)( this + 0x270 ), "p_index", "count", "", false, true);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar1 = (code*)invalidInstructionException();
         ( *pcVar1 )();
      }

      lVar2 = lVar2 + *(long*)( this + 0x278 );
      if (( param_1 & 0xffffffffU ) == ( ulong ) * (uint*)( lVar2 + 0x28 )) {
         *(float*)( lVar2 + 0x24 ) = param_2;
      }

   }

   return;
}
/* AudioStreamPlaybackPolyphonic::set_stream_pitch_scale(long, float) */void AudioStreamPlaybackPolyphonic::set_stream_pitch_scale(AudioStreamPlaybackPolyphonic *this, long param_1, float param_2) {
   code *pcVar1;
   long lVar2;
   uint uVar3;
   uVar3 = ( uint )((ulong)param_1 >> 0x20);
   if (( uVar3 < *(uint*)( this + 0x270 ) ) && ( lVar2 = ( (ulong)param_1 >> 0x20 ) * 0x30 * (char*)( *(long*)( this + 0x278 ) + lVar2 ) != '\0' )) {
      if (*(uint*)( this + 0x270 ) <= uVar3) {
         _err_print_index_error("operator[]", "./core/templates/local_vector.h", 0xb2, (ulong)param_1 >> 0x20, ( ulong ) * (uint*)( this + 0x270 ), "p_index", "count", "", false, true);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar1 = (code*)invalidInstructionException();
         ( *pcVar1 )();
      }

      lVar2 = lVar2 + *(long*)( this + 0x278 );
      if (( param_1 & 0xffffffffU ) == ( ulong ) * (uint*)( lVar2 + 0x28 )) {
         *(float*)( lVar2 + 8 ) = param_2;
      }

   }

   return;
}
/* AudioStreamPlaybackPolyphonic::is_stream_playing(long) const */undefined8 AudioStreamPlaybackPolyphonic::is_stream_playing(AudioStreamPlaybackPolyphonic *this, long param_1) {
   code *pcVar1;
   long lVar2;
   uint uVar3;
   uVar3 = ( uint )((ulong)param_1 >> 0x20);
   if (( uVar3 < *(uint*)( this + 0x270 ) ) && ( lVar2 = ( (ulong)param_1 >> 0x20 ) * 0x30 * (char*)( *(long*)( this + 0x278 ) + lVar2 ) != '\0' )) {
      if (*(uint*)( this + 0x270 ) <= uVar3) {
         _err_print_index_error("operator[]", "./core/templates/local_vector.h", 0xae, (ulong)param_1 >> 0x20, ( ulong ) * (uint*)( this + 0x270 ), "p_index", "count", "", false, true);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar1 = (code*)invalidInstructionException();
         ( *pcVar1 )();
      }

      if (( param_1 & 0xffffffffU ) == ( ulong ) * (uint*)( *(long*)( this + 0x278 ) + 0x28 + lVar2 )) {
         return 1;
      }

   }

   return 0;
}
/* AudioStreamPlaybackPolyphonic::stop_stream(long) */void AudioStreamPlaybackPolyphonic::stop_stream(AudioStreamPlaybackPolyphonic *this, long param_1) {
   code *pcVar1;
   long lVar2;
   uint uVar3;
   uVar3 = ( uint )((ulong)param_1 >> 0x20);
   if (( uVar3 < *(uint*)( this + 0x270 ) ) && ( lVar2 = ( (ulong)param_1 >> 0x20 ) * 0x30 * (char*)( *(long*)( this + 0x278 ) + lVar2 ) != '\0' )) {
      if (*(uint*)( this + 0x270 ) <= uVar3) {
         _err_print_index_error("operator[]", "./core/templates/local_vector.h", 0xb2, (ulong)param_1 >> 0x20, ( ulong ) * (uint*)( this + 0x270 ), "p_index", "count", "", false, true);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar1 = (code*)invalidInstructionException();
         ( *pcVar1 )();
      }

      lVar2 = lVar2 + *(long*)( this + 0x278 );
      if (( param_1 & 0xffffffffU ) == ( ulong ) * (uint*)( lVar2 + 0x28 )) {
         *(undefined1*)( lVar2 + 2 ) = 1;
      }

   }

   return;
}
/* AudioStreamPolyphonic::set_polyphony(int) */void AudioStreamPolyphonic::set_polyphony(AudioStreamPolyphonic *this, int param_1) {
   if ((uint)param_1 < 0x81) {
      *(int*)( this + 0x348 ) = param_1;
      return;
   }

   _err_print_error("set_polyphony", "scene/resources/audio_stream_polyphonic.cpp", 0x37, "Condition \"p_voices < 0 || p_voices > 128\" is true.", 0, 0);
   return;
}
/* CowData<AudioFrame>::_copy_on_write() [clone .isra.0] */void CowData<AudioFrame>::_copy_on_write(CowData<AudioFrame> *this) {
   long *plVar1;
   long lVar2;
   code *pcVar3;
   undefined8 *puVar4;
   long lVar5;
   long lVar6;
   ulong uVar7;
   if (( *(long*)this == 0 ) || ( *(ulong*)( *(long*)this + -0x10 ) < 2 )) {
      return;
   }

   if (*(long*)this == 0) {
      /* WARNING: Does not return */
      pcVar3 = (code*)invalidInstructionException();
      ( *pcVar3 )();
   }

   lVar5 = *(long*)( *(long*)this + -8 );
   uVar7 = 0x10;
   lVar6 = lVar5 * 8;
   if (lVar6 != 0) {
      uVar7 = lVar6 - 1U | lVar6 - 1U >> 1;
      uVar7 = uVar7 | uVar7 >> 2;
      uVar7 = uVar7 | uVar7 >> 4;
      uVar7 = uVar7 | uVar7 >> 8;
      uVar7 = uVar7 | uVar7 >> 0x10;
      uVar7 = ( uVar7 | uVar7 >> 0x20 ) + 0x11;
   }

   puVar4 = (undefined8*)Memory::alloc_static(uVar7, false);
   if (puVar4 == (undefined8*)0x0) {
      _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
      return;
   }

   *puVar4 = 1;
   puVar4[1] = lVar5;
   lVar2 = *(long*)this;
   if (lVar5 == 0) {
      if (lVar2 == 0) goto LAB_0010044f;
   }
 else {
      lVar5 = 0;
      do {
         *(undefined8*)( (long)puVar4 + lVar5 + 0x10 ) = *(undefined8*)( lVar2 + lVar5 );
         lVar5 = lVar5 + 8;
      }
 while ( lVar6 != lVar5 );
   }

   LOCK();
   plVar1 = (long*)( lVar2 + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   if (*plVar1 == 0) {
      lVar5 = *(long*)this;
      *(undefined8*)this = 0;
      Memory::free_static((void*)( lVar5 + -0x10 ), false);
   }

   LAB_0010044f:*(undefined8**)this = puVar4 + 2;
   return;
}
/* AudioStreamPlaybackPolyphonic::tag_used_streams() */void AudioStreamPlaybackPolyphonic::tag_used_streams(AudioStreamPlaybackPolyphonic *this) {
   char *pcVar1;
   char *pcVar2;
   pcVar1 = *(char**)( this + 0x278 );
   pcVar2 = pcVar1 + ( ulong ) * (uint*)( this + 0x270 ) * 0x30;
   for (; pcVar2 != pcVar1; pcVar1 = pcVar1 + 0x30) {
      if (*pcVar1 != '\0') {
         ( **(code**)( **(long**)( pcVar1 + 0x18 ) + 0x180 ) )();
      }

   }

   return;
}
/* AudioStreamPlaybackPolyphonic::get_sample_playback() const */void AudioStreamPlaybackPolyphonic::get_sample_playback(void) {
   char cVar1;
   long in_RSI;
   long *in_RDI;
   *in_RDI = 0;
   if (*(long*)( in_RSI + 0x690 ) != 0) {
      *in_RDI = *(long*)( in_RSI + 0x690 );
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
         *in_RDI = 0;
      }

   }

   return;
}
/* AudioStreamPlaybackPolyphonic::stop() */void AudioStreamPlaybackPolyphonic::stop(AudioStreamPlaybackPolyphonic *this) {
   AudioStreamPlaybackPolyphonic AVar1;
   Object *pOVar2;
   char cVar3;
   long *plVar4;
   char *pcVar5;
   char *pcVar6;
   AudioStreamPlaybackPolyphonic AVar7;
   AVar1 = this[0x680];
   if (AVar1 != (AudioStreamPlaybackPolyphonic)0x0) {
      pcVar5 = *(char**)( this + 0x278 );
      pcVar6 = pcVar5 + ( ulong ) * (uint*)( this + 0x270 ) * 0x30;
      if (pcVar5 != pcVar6) {
         AVar7 = (AudioStreamPlaybackPolyphonic)0x0;
         do {
            if (*pcVar5 != '\0') {
               plVar4 = (long*)AudioServer::get_singleton();
               ( **(code**)( *plVar4 + 0x170 ) )(plVar4);
               AVar7 = AVar1;
            }

            *pcVar5 = '\0';
            pcVar5[2] = '\0';
            if (( *(long*)( pcVar5 + 0x18 ) != 0 ) && ( cVar3 = cVar3 != '\0' )) {
               pOVar2 = *(Object**)( pcVar5 + 0x18 );
               cVar3 = predelete_handler(pOVar2);
               if (cVar3 != '\0') {
                  ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
                  Memory::free_static(pOVar2, false);
               }

            }

            for (int i = 0; i < 8; i++) {
               pcVar5[( i + 24 )] = '\0';
            }

            if (( *(long*)( pcVar5 + 0x10 ) != 0 ) && ( cVar3 = cVar3 != '\0' )) {
               pOVar2 = *(Object**)( pcVar5 + 0x10 );
               cVar3 = predelete_handler(pOVar2);
               if (cVar3 != '\0') {
                  ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
                  Memory::free_static(pOVar2, false);
               }

            }

            for (int i = 0; i < 8; i++) {
               pcVar5[( i + 16 )] = '\0';
            }

            pcVar5 = pcVar5 + 0x30;
         }
 while ( pcVar6 != pcVar5 );
         if (AVar7 != (AudioStreamPlaybackPolyphonic)0x0) {
            plVar4 = (long*)AudioServer::get_singleton();
            ( **(code**)( *plVar4 + 0x178 ) )(plVar4);
            this[0x680] = (AudioStreamPlaybackPolyphonic)0x0;
            return;
         }

      }

      this[0x680] = (AudioStreamPlaybackPolyphonic)0x0;
   }

   return;
}
/* AudioStreamPolyphonic::get_stream_name() const */AudioStreamPolyphonic * __thiscall
AudioStreamPolyphonic::get_stream_name(AudioStreamPolyphonic *this){
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
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* AudioStreamPlaybackPolyphonic::mix(AudioFrame*, float, int) */uint AudioStreamPlaybackPolyphonic::mix(AudioFrame *param_1, float param_2, int param_3) {
   char *pcVar1;
   long lVar2;
   Object *pOVar3;
   char cVar4;
   int iVar5;
   uint uVar6;
   undefined8 *puVar7;
   undefined8 *puVar8;
   long lVar9;
   Ref *pRVar10;
   uint in_EDX;
   uint uVar11;
   undefined4 in_register_00000034;
   undefined8 *puVar12;
   int iVar13;
   uint uVar14;
   char *pcVar15;
   char *pcVar16;
   long in_FS_OFFSET;
   float fVar17;
   float fVar18;
   float fVar19;
   Object *local_48;
   long local_40;
   puVar12 = (undefined8*)CONCAT44(in_register_00000034, param_3);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar6 = 0;
   if (param_1[0x680] == (AudioFrame)0x0) goto LAB_00100933;
   if (0 < (int)in_EDX) {
      puVar7 = puVar12;
      if (( in_EDX & 1 ) != 0) {
         *puVar12 = 0;
         puVar7 = puVar12 + 1;
         if (puVar12 + 1 == puVar12 + (int)in_EDX) goto LAB_00100768;
      }

      do {
         *puVar7 = 0;
         puVar8 = puVar7 + 2;
         puVar7[1] = 0;
         puVar7 = puVar8;
      }
 while ( puVar8 != puVar12 + (int)in_EDX );
   }

   LAB_00100768:pcVar15 = *(char**)( param_1 + 0x278 );
   pcVar1 = pcVar15 + ( ulong ) * (uint*)( param_1 + 0x270 ) * 0x30;
   for (; uVar6 = in_EDX,pcVar15 != pcVar1; pcVar15 = pcVar15 + 0x30) {
      while (*pcVar15 != '\0') {
         cVar4 = ( **(code**)( **(long**)( pcVar15 + 0x18 ) + 0x1a8 ) )();
         if (cVar4 != '\0') {
            if (pcVar15[2] != '\0') {
               *pcVar15 = '\0';
               pRVar10 = (Ref*)AudioServer::get_singleton();
               ( **(code**)( **(long**)( pcVar15 + 0x18 ) + 0x1b0 ) )(&local_48);
               AudioServer::stop_sample_playback(pRVar10);
               if (( ( local_48 != (Object*)0x0 ) && ( cVar4 = RefCounted::unreference() ),pOVar3 = local_48,cVar4 != '\0' )) &&( cVar4 = cVar4 != '\0' )(**(code**)( *(long*)pOVar3 + 0x140 ))(pOVar3);
               Memory::free_static(pOVar3, false);
            }

         }

         break;
      }
;
      fVar18 = *(float*)( pcVar15 + 0x24 );
      fVar17 = expf(fVar18 * __LC18);
      *(float*)( pcVar15 + 0x20 ) = fVar18;
      if (( pcVar15[2] == '\0' ) || ( fVar17 = 0.0 ),pcVar15[1] == '\0') {
         if (pcVar15[1] != '\0') {
            ( **(code**)( **(long**)( pcVar15 + 0x18 ) + 0x150 ) )((double)*(float*)( pcVar15 + 4 ));
            pcVar15[1] = '\0';
         }

         fVar18 = expf(*(float*)( pcVar15 + 0x20 ) * __LC18);
         fVar17 = fVar17 - fVar18;
         if (in_EDX != 0) {
            iVar13 = 0;
            uVar14 = in_EDX;
            do {
               uVar11 = 0x80;
               if ((int)uVar14 < 0x81) {
                  uVar11 = uVar14;
               }

               iVar5 = ( **(code**)( **(long**)( pcVar15 + 0x18 ) + 0x198 ) )(*(long**)( pcVar15 + 0x18 ), param_1 + 0x280);
               if (0 < (int)uVar14) {
                  lVar9 = 0;
                  puVar7 = puVar12 + iVar13;
                  fVar19 = fVar18;
                  do {
                     lVar2 = lVar9 * 8;
                     lVar9 = lVar9 + 1;
                     fVar18 = fVar19 + fVar17 / (float)(int)in_EDX;
                     *puVar7 = CONCAT44(fVar19 * (float)( ( ulong ) * (undefined8*)( param_1 + lVar2 + 0x280 ) >> 0x20 ) + (float)( ( ulong ) * puVar7 >> 0x20 ), fVar19 * (float)*(undefined8*)( param_1 + lVar2 + 0x280 ) + (float)*puVar7);
                     puVar7 = puVar7 + 1;
                     fVar19 = fVar18;
                  }
 while ( (int)lVar9 < (int)uVar11 );
               }

               if (iVar5 < (int)uVar11) goto LAB_00100960;
               iVar13 = iVar13 + uVar11;
               uVar14 = uVar14 - uVar11;
            }
 while ( uVar14 != 0 );
         }

         if (pcVar15[2] == '\0') break;
      }

      LAB_00100960:pcVar16 = pcVar15 + 0x30;
      *pcVar15 = '\0';
      pcVar15 = pcVar16;
      if (pcVar1 == pcVar16) goto LAB_00100933;
   }

}
LAB_00100933:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return uVar6;
}
/* WARNING: Subroutine does not return */__stack_chk_fail();}/* AudioStreamPlaybackPolyphonic::set_sample_playback(Ref<AudioSamplePlayback> const&) */void AudioStreamPlaybackPolyphonic::set_sample_playback(AudioStreamPlaybackPolyphonic *this, Ref *param_1) {
   long lVar1;
   char cVar2;
   Object *pOVar3;
   Object *pOVar4;
   pOVar4 = *(Object**)param_1;
   pOVar3 = *(Object**)( this + 0x690 );
   if (pOVar4 != pOVar3) {
      *(Object**)( this + 0x690 ) = pOVar4;
      if (pOVar4 == (Object*)0x0) {
         LAB_00100a4e:if (pOVar3 == (Object*)0x0) {
            return;
         }

         cVar2 = RefCounted::unreference();
         joined_r0x00100a5d:if (( cVar2 != '\0' ) && ( cVar2 = cVar2 != '\0' )) {
            ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
            Memory::free_static(pOVar3, false);
         }

      }
 else {
         cVar2 = RefCounted::reference();
         if (cVar2 == '\0') {
            *(undefined8*)( this + 0x690 ) = 0;
            goto LAB_00100a4e;
         }

         if (pOVar3 != (Object*)0x0) {
            cVar2 = RefCounted::unreference();
            goto joined_r0x00100a5d;
         }

      }

      pOVar3 = *(Object**)( this + 0x690 );
   }

   if (pOVar3 == (Object*)0x0) {
      return;
   }

   cVar2 = RefCounted::init_ref();
   if (cVar2 == '\0') {
      pOVar4 = *(Object**)( *(long*)( this + 0x690 ) + 0x188 );
      if (pOVar4 == (Object*)0x0) {
         return;
      }

      *(undefined8*)( *(long*)( this + 0x690 ) + 0x188 ) = 0;
      cVar2 = RefCounted::unreference();
      if (cVar2 == '\0') {
         return;
      }

      this(AudioStreamPlaybackPolyphonic * 0x0);
      cVar2 = predelete_handler(pOVar4);
      if (cVar2 == '\0') {
         return;
      }

   }
 else {
      lVar1 = *(long*)( this + 0x690 );
      pOVar4 = *(Object**)( lVar1 + 0x188 );
      if (pOVar4 == (Object*)this) goto LAB_00100af1;
      *(AudioStreamPlaybackPolyphonic**)( lVar1 + 0x188 ) = this;
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
         *(undefined8*)( lVar1 + 0x188 ) = 0;
      }

      if (( ( pOVar4 == (Object*)0x0 ) || ( cVar2 = RefCounted::unreference() ),cVar2 == '\0' )) goto LAB_00100af1;
   }

   ( **(code**)( *(long*)pOVar4 + 0x140 ) )(pOVar4);
   Memory::free_static(pOVar4, false);
   if (this == (AudioStreamPlaybackPolyphonic*)0x0) {
      return;
   }

   LAB_00100af1:cVar2 = RefCounted::unreference();
   if (( cVar2 != '\0' ) && ( cVar2 = predelete_handler((Object*)this) ),cVar2 != '\0') {
      ( **(code**)( *(long*)this + 0x140 ) )(this);
      Memory::free_static(this, false);
      return;
   }

   return;
}
/* AudioStreamPolyphonic::AudioStreamPolyphonic() */void AudioStreamPolyphonic::AudioStreamPolyphonic(AudioStreamPolyphonic *this) {
   Resource::Resource((Resource*)this);
   *(code**)this = strlen;
   *(undefined1(*) [16])( this + 0x240 ) = (undefined1[16])0x0;
   StringName::StringName((StringName*)( this + 0x270 ), "_instantiate_playback", false);
   this[0x278] = (AudioStreamPolyphonic)0x0;
   *(undefined8*)( this + 0x280 ) = 0;
   StringName::StringName((StringName*)( this + 0x288 ), "_get_stream_name", false);
   this[0x290] = (AudioStreamPolyphonic)0x0;
   *(undefined8*)( this + 0x298 ) = 0;
   StringName::StringName((StringName*)( this + 0x2a0 ), "_get_length", false);
   this[0x2a8] = (AudioStreamPolyphonic)0x0;
   *(undefined8*)( this + 0x2b0 ) = 0;
   StringName::StringName((StringName*)( this + 0x2b8 ), "_is_monophonic", false);
   this[0x2c0] = (AudioStreamPolyphonic)0x0;
   *(undefined8*)( this + 0x2c8 ) = 0;
   StringName::StringName((StringName*)( this + 0x2d0 ), "_get_bpm", false);
   this[0x2d8] = (AudioStreamPolyphonic)0x0;
   *(undefined8*)( this + 0x2e0 ) = 0;
   StringName::StringName((StringName*)( this + 0x2e8 ), "_has_loop", false);
   this[0x2f0] = (AudioStreamPolyphonic)0x0;
   *(undefined8*)( this + 0x2f8 ) = 0;
   StringName::StringName((StringName*)( this + 0x300 ), "_get_bar_beats", false);
   this[0x308] = (AudioStreamPolyphonic)0x0;
   *(undefined8*)( this + 0x310 ) = 0;
   StringName::StringName((StringName*)( this + 0x318 ), "_get_beat_count", false);
   this[800] = (AudioStreamPolyphonic)0x0;
   *(undefined8*)( this + 0x328 ) = 0;
   StringName::StringName((StringName*)( this + 0x330 ), "_get_parameter_list", false);
   this[0x338] = (AudioStreamPolyphonic)0x0;
   *(undefined8*)( this + 0x340 ) = 0;
   *(undefined***)this = &PTR__initialize_classv_0010dbd0;
   *(undefined4*)( this + 0x348 ) = 0x20;
   return;
}
/* AudioStreamPlaybackPolyphonic::AudioStreamPlaybackPolyphonic() */void AudioStreamPlaybackPolyphonic::AudioStreamPlaybackPolyphonic(AudioStreamPlaybackPolyphonic *this) {
   ulong uVar1;
   undefined8 *puVar2;
   byte bVar3;
   bVar3 = 0;
   AudioStreamPlayback::AudioStreamPlayback((AudioStreamPlayback*)this);
   *(undefined8*)( this + 0x270 ) = 0;
   *(undefined***)this = &PTR__initialize_classv_0010de08;
   *(undefined8*)( this + 0x278 ) = 0;
   *(undefined8*)( this + 0x280 ) = 0;
   *(undefined8*)( this + 0x678 ) = 0;
   puVar2 = (undefined8*)( ( ulong )(this + 0x288) & 0xfffffffffffffff8 );
   for (uVar1 = ( ulong )(( (int)this - (int)(undefined8*)( ( ulong )(this + 0x288) & 0xfffffffffffffff8 ) ) + 0x680U >> 3); uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar2 = 0;
      puVar2 = puVar2 + (ulong)bVar3 * -2 + 1;
   }

   this[0x680] = (AudioStreamPlaybackPolyphonic)0x0;
   *(undefined4*)( this + 0x684 ) = 1;
   this[0x688] = (AudioStreamPlaybackPolyphonic)0x0;
   *(undefined8*)( this + 0x690 ) = 0;
   return;
}
/* AudioStreamPolyphonic::instantiate_playback() */void AudioStreamPolyphonic::instantiate_playback(void) {
   char cVar1;
   AudioStreamPlayback *this;
   long lVar2;
   ulong uVar3;
   long in_RSI;
   long *in_RDI;
   undefined8 *puVar4;
   AudioStreamPlayback *pAVar5;
   byte bVar6;
   bVar6 = 0;
   this(AudioStreamPlayback * operator_new(0x698, ""));
   AudioStreamPlayback::AudioStreamPlayback(this);
   *(undefined8*)( this + 0x270 ) = 0;
   *(undefined***)this = &PTR__initialize_classv_0010de08;
   *(undefined8*)( this + 0x278 ) = 0;
   *(undefined8*)( this + 0x280 ) = 0;
   *(undefined8*)( this + 0x678 ) = 0;
   puVar4 = (undefined8*)( ( ulong )(this + 0x288) & 0xfffffffffffffff8 );
   for (uVar3 = ( ulong )(( (int)this - (int)(undefined8*)( ( ulong )(this + 0x288) & 0xfffffffffffffff8 ) ) + 0x680U >> 3); uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar4 = 0;
      puVar4 = puVar4 + (ulong)bVar6 * -2 + 1;
   }

   this[0x680] = (AudioStreamPlayback)0x0;
   *(undefined4*)( this + 0x684 ) = 1;
   this[0x688] = (AudioStreamPlayback)0x0;
   *(undefined8*)( this + 0x690 ) = 0;
   postinitialize_handler((Object*)this);
   cVar1 = RefCounted::init_ref();
   if (cVar1 == '\0') {
      LAB_00100eda:LocalVector<AudioStreamPlaybackPolyphonic::Stream,unsigned_int,false,false>::resize((LocalVector<AudioStreamPlaybackPolyphonic::Stream,unsigned_int,false,false>*)0x270, *(uint*)( in_RSI + 0x348 ));
      *in_RDI = 0;
   }
 else {
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
         cVar1 = RefCounted::unreference();
         if (( cVar1 == '\0' ) || ( cVar1 = predelete_handler((Object*)this) ),cVar1 == '\0') goto LAB_00100eda;
         pAVar5 = (AudioStreamPlayback*)0x0;
         LAB_00100fdb:( **(code**)( *(long*)this + 0x140 ) )(this);
         Memory::free_static(this, false);
         LocalVector<AudioStreamPlaybackPolyphonic::Stream,unsigned_int,false,false>::resize((LocalVector<AudioStreamPlaybackPolyphonic::Stream,unsigned_int,false,false>*)( pAVar5 + 0x270 ), *(uint*)( in_RSI + 0x348 ));
         *in_RDI = 0;
         if (pAVar5 == (AudioStreamPlayback*)0x0) {
            return;
         }

      }
 else {
         cVar1 = RefCounted::unreference();
         pAVar5 = this;
         if (( cVar1 != '\0' ) && ( cVar1 = predelete_handler((Object*)this) ),cVar1 != '\0') goto LAB_00100fdb;
         LocalVector<AudioStreamPlaybackPolyphonic::Stream,unsigned_int,false,false>::resize((LocalVector<AudioStreamPlaybackPolyphonic::Stream,unsigned_int,false,false>*)( this + 0x270 ), *(uint*)( in_RSI + 0x348 ));
         *in_RDI = 0;
      }

      lVar2 = __dynamic_cast(pAVar5, &Object::typeinfo, &AudioStreamPlayback::typeinfo, 0);
      if (lVar2 != 0) {
         *in_RDI = lVar2;
         cVar1 = RefCounted::reference();
         if (cVar1 == '\0') {
            *in_RDI = 0;
         }

      }

      cVar1 = RefCounted::unreference();
      if (( cVar1 != '\0' ) && ( cVar1 = predelete_handler((Object*)pAVar5) ),cVar1 != '\0') {
         ( **(code**)( *(long*)pAVar5 + 0x140 ) )(pAVar5);
         Memory::free_static(pAVar5, false);
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
/* AudioStreamPlaybackPolyphonic::_bind_compatibility_methods() */void AudioStreamPlaybackPolyphonic::_bind_compatibility_methods(void) {
   Variant *pVVar1;
   long lVar2;
   code *pcVar3;
   long *plVar4;
   MethodBind *pMVar5;
   Variant *pVVar6;
   long *plVar7;
   long lVar8;
   long in_FS_OFFSET;
   long local_118[2];
   long *local_108;
   char *local_f8;
   char *pcStack_f0;
   char *local_e8;
   char *pcStack_e0;
   undefined8 local_d8;
   Variant *local_c8;
   Variant *pVStack_c0;
   Variant *local_b8;
   char **ppcStack_b0;
   Variant local_98[24];
   Variant local_80[24];
   Variant local_68[24];
   undefined8 local_50;
   undefined1 local_48[16];
   Variant local_38[8];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_d8 = 0;
   local_c8 = (Variant*)&local_f8;
   local_f8 = "stream";
   pcStack_f0 = "from_offset";
   local_e8 = "volume_db";
   pcStack_e0 = "pitch_scale";
   pVStack_c0 = (Variant*)&pcStack_f0;
   local_b8 = (Variant*)&local_e8;
   ppcStack_b0 = &pcStack_e0;
   D_METHODP((char*)local_118, (char***)"play_stream", ( uint ) & local_c8);
   Variant::Variant(local_98, 0);
   Variant::Variant(local_80, 0);
   Variant::Variant(local_68, _LC47);
   pVVar6 = local_38;
   local_48 = (undefined1[16])0x0;
   local_50 = 0;
   local_c8 = local_98;
   pVStack_c0 = local_80;
   local_b8 = local_68;
   pMVar5 = create_method_bind<AudioStreamPlaybackPolyphonic,long,Ref<AudioStream>const&,float,float,float>(_play_stream_bind_compat_91382);
   ClassDB::bind_methodfi(1, pMVar5, true, (MethodDefinition*)local_118, &local_c8, 3);
   do {
      pVVar1 = pVVar6 + -0x18;
      pVVar6 = pVVar6 + -0x18;
      if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
         Variant::_clear_internal();
      }

      plVar4 = local_108;
   }
 while ( pVVar6 != local_98 );
   if (local_108 != (long*)0x0) {
      LOCK();
      plVar7 = local_108 + -2;
      *plVar7 = *plVar7 + -1;
      UNLOCK();
      if (*plVar7 == 0) {
         if (local_108 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = local_108[-1];
         local_108 = (long*)0x0;
         if (lVar2 != 0) {
            lVar8 = 0;
            plVar7 = plVar4;
            do {
               if (( StringName::configured != '\0' ) && ( *plVar7 != 0 )) {
                  StringName::unref();
               }

               lVar8 = lVar8 + 1;
               plVar7 = plVar7 + 1;
            }
 while ( lVar2 != lVar8 );
         }

         Memory::free_static(plVar4 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_118[0] != 0 )) {
      StringName::unref();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* AudioStreamPolyphonic::_bind_methods() */void AudioStreamPolyphonic::_bind_methods(void) {
   long lVar1;
   code *pcVar2;
   long *plVar3;
   MethodBind *pMVar4;
   long *plVar5;
   long lVar6;
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
   long *local_88;
   int local_80;
   undefined8 local_78;
   undefined4 local_70;
   char *local_68;
   undefined8 local_60;
   char **local_58;
   undefined1 local_50[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_60 = 0;
   local_68 = "voices";
   local_58 = &local_68;
   D_METHODP((char*)&local_98, (char***)"set_polyphony", ( uint ) & local_58);
   local_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar4 = create_method_bind<AudioStreamPolyphonic,int>(set_polyphony);
   ClassDB::bind_methodfi(1, pMVar4, false, (MethodDefinition*)&local_98, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   plVar3 = local_88;
   if (local_88 != (long*)0x0) {
      LOCK();
      plVar5 = local_88 + -2;
      *plVar5 = *plVar5 + -1;
      UNLOCK();
      if (*plVar5 == 0) {
         if (local_88 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar1 = local_88[-1];
         lVar6 = 0;
         local_88 = (long*)0x0;
         plVar5 = plVar3;
         if (lVar1 != 0) {
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

   if (( StringName::configured != '\0' ) && ( local_98 != (char*)0x0 )) {
      StringName::unref();
   }

   D_METHODP((char*)&local_98, (char***)"get_polyphony", 0);
   local_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar4 = create_method_bind<AudioStreamPolyphonic,int>(get_polyphony);
   ClassDB::bind_methodfi(1, pMVar4, false, (MethodDefinition*)&local_98, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   plVar3 = local_88;
   if (local_88 != (long*)0x0) {
      LOCK();
      plVar5 = local_88 + -2;
      *plVar5 = *plVar5 + -1;
      UNLOCK();
      if (*plVar5 == 0) {
         if (local_88 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar1 = local_88[-1];
         lVar6 = 0;
         local_88 = (long*)0x0;
         plVar5 = plVar3;
         if (lVar1 != 0) {
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

   if (( StringName::configured != '\0' ) && ( local_98 != (char*)0x0 )) {
      StringName::unref();
   }

   _scs_create((char*)&local_b0, true);
   _scs_create((char*)&local_b8, true);
   local_98 = "1,128,1";
   local_c0 = 0;
   local_c8 = 0;
   local_90 = 7;
   String::parse_latin1((StrRange*)&local_c8);
   local_98 = "polyphony";
   local_d0 = 0;
   local_90 = 9;
   String::parse_latin1((StrRange*)&local_d0);
   local_98 = (char*)CONCAT44(local_98._4_4_, 2);
   local_90 = 0;
   if (local_d0 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_90, (CowData*)&local_d0);
   }

   local_88 = (long*)0x0;
   local_80 = 1;
   local_78 = 0;
   if (local_c8 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_78, (CowData*)&local_c8);
      local_70 = 6;
      if (local_80 == 0x11) {
         StringName::StringName((StringName*)&local_a8, (String*)&local_78, false);
         if (local_88 == (long*)local_a8) {
            if (( StringName::configured != '\0' ) && ( local_a8 != (char*)0x0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            local_88 = (long*)local_a8;
         }

         goto LAB_001017c4;
      }

   }

   local_70 = 6;
   StringName::operator =((StringName*)&local_88, (StringName*)&local_c0);
   LAB_001017c4:local_e0 = (CowData<char32_t>*)&local_78;
   local_d8 = 0;
   local_a8 = "AudioStreamPolyphonic";
   local_a0 = 0x15;
   String::parse_latin1((StrRange*)&local_d8);
   StringName::StringName((StringName*)&local_a8, (String*)&local_d8, false);
   ClassDB::add_property((StringName*)&local_a8, (PropertyInfo*)&local_98, (StringName*)&local_b8, (StringName*)&local_b0, -1);
   if (( StringName::configured != '\0' ) && ( local_a8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   CowData<char32_t>::_unref(local_e0);
   if (( StringName::configured != '\0' ) && ( local_88 != (long*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_c0 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_b8 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_b0 != 0 )) {
      StringName::unref();
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* AudioStreamPlaybackPolyphonic::_bind_methods() */void AudioStreamPlaybackPolyphonic::_bind_methods(void) {
   Variant *pVVar1;
   long lVar2;
   code *pcVar3;
   undefined *puVar4;
   long *plVar5;
   MethodBind *pMVar6;
   long *plVar7;
   uint uVar8;
   long lVar9;
   Variant *pVVar10;
   long in_FS_OFFSET;
   undefined8 local_1d0;
   long local_1c8;
   long local_1c0;
   char *local_1b8;
   undefined8 local_1b0;
   long *local_1a8;
   undefined *local_198;
   char *pcStack_190;
   undefined8 local_188;
   undefined *local_178;
   char *pcStack_170;
   undefined8 local_168;
   undefined *local_158;
   char *pcStack_150;
   char *local_148;
   char *pcStack_140;
   char *local_138;
   undefined *puStack_130;
   undefined8 local_128;
   Variant *local_118;
   Variant *pVStack_110;
   Variant *local_108;
   Variant *pVStack_100;
   Variant *local_f8;
   undefined **ppuStack_f0;
   Variant **local_d8;
   undefined1 auStack_d0[16];
   Variant local_c0[24];
   Variant local_a8[24];
   Variant local_90[24];
   Variant local_78[24];
   undefined8 local_60;
   undefined1 local_58[16];
   Variant local_48[8];
   long local_40;
   puVar4 = PTR__LC42_0010e450;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   StringName::StringName((StringName*)&local_1c0, (StringName*)( SceneStringNames::singleton + 0x208 ));
   local_148 = "volume_db";
   pcStack_140 = "pitch_scale";
   local_158 = puVar4;
   pcStack_150 = "from_offset";
   local_138 = "playback_type";
   puStack_130 = &_LC56;
   local_128 = 0;
   local_118 = (Variant*)&local_158;
   pVStack_110 = (Variant*)&pcStack_150;
   local_108 = (Variant*)&local_148;
   pVStack_100 = (Variant*)&pcStack_140;
   local_f8 = (Variant*)&local_138;
   ppuStack_f0 = &puStack_130;
   D_METHODP((char*)&local_1b8, (char***)"play_stream", ( uint ) & local_118);
   Variant::Variant((Variant*)&local_d8, 0);
   pVVar10 = local_48;
   Variant::Variant(local_c0, 0);
   Variant::Variant(local_a8, _LC47);
   Variant::Variant(local_90, 0);
   Variant::Variant(local_78, (StringName*)&local_1c0);
   local_58 = (undefined1[16])0x0;
   local_60 = 0;
   local_118 = (Variant*)&local_d8;
   pVStack_110 = local_c0;
   local_108 = local_a8;
   pVStack_100 = local_90;
   local_f8 = local_78;
   pMVar6 = create_method_bind<AudioStreamPlaybackPolyphonic,long,Ref<AudioStream>const&,float,float,float,AudioServer::PlaybackType,StringName_const&>(play_stream);
   ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)&local_1b8, &local_118, 5);
   do {
      pVVar1 = pVVar10 + -0x18;
      pVVar10 = pVVar10 + -0x18;
      if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
         Variant::_clear_internal();
      }

      plVar5 = local_1a8;
   }
 while ( pVVar10 != (Variant*)&local_d8 );
   if (local_1a8 != (long*)0x0) {
      LOCK();
      plVar7 = local_1a8 + -2;
      *plVar7 = *plVar7 + -1;
      UNLOCK();
      if (*plVar7 == 0) {
         if (local_1a8 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = local_1a8[-1];
         lVar9 = 0;
         local_1a8 = (long*)0x0;
         plVar7 = plVar5;
         if (lVar2 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar7 != 0 )) {
                  StringName::unref();
               }

               lVar9 = lVar9 + 1;
               plVar7 = plVar7 + 1;
            }
 while ( lVar2 != lVar9 );
         }

         Memory::free_static(plVar5 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( ( ( local_1b8 == (char*)0x0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( local_1c0 != 0 ) ) )) {
      StringName::unref();
   }

   local_168 = 0;
   local_178 = puVar4;
   pcStack_170 = "volume_db";
   auStack_d0._0_8_ = &pcStack_170;
   uVar8 = (uint)(Variant*)&local_d8;
   local_d8 = (Variant**)&local_178;
   D_METHODP((char*)&local_1b8, (char***)"set_stream_volume", uVar8);
   auStack_d0 = (undefined1[16])0x0;
   local_d8 = (Variant**)0x0;
   pMVar6 = create_method_bind<AudioStreamPlaybackPolyphonic,long,float>(set_stream_volume);
   ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)&local_1b8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_d8] != '\0') {
      Variant::_clear_internal();
   }

   plVar5 = local_1a8;
   if (local_1a8 != (long*)0x0) {
      LOCK();
      plVar7 = local_1a8 + -2;
      *plVar7 = *plVar7 + -1;
      UNLOCK();
      if (*plVar7 == 0) {
         if (local_1a8 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = local_1a8[-1];
         lVar9 = 0;
         local_1a8 = (long*)0x0;
         plVar7 = plVar5;
         if (lVar2 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar7 != 0 )) {
                  StringName::unref();
               }

               lVar9 = lVar9 + 1;
               plVar7 = plVar7 + 1;
            }
 while ( lVar2 != lVar9 );
         }

         Memory::free_static(plVar5 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_1b8 != (char*)0x0 )) {
      StringName::unref();
   }

   local_188 = 0;
   local_198 = puVar4;
   pcStack_190 = "pitch_scale";
   auStack_d0._0_8_ = &pcStack_190;
   local_d8 = (Variant**)&local_198;
   D_METHODP((char*)&local_1b8, (char***)"set_stream_pitch_scale", uVar8);
   auStack_d0 = (undefined1[16])0x0;
   local_d8 = (Variant**)0x0;
   pMVar6 = create_method_bind<AudioStreamPlaybackPolyphonic,long,float>(set_stream_pitch_scale);
   ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)&local_1b8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_d8] != '\0') {
      Variant::_clear_internal();
   }

   plVar5 = local_1a8;
   if (local_1a8 != (long*)0x0) {
      LOCK();
      plVar7 = local_1a8 + -2;
      *plVar7 = *plVar7 + -1;
      UNLOCK();
      if (*plVar7 == 0) {
         if (local_1a8 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = local_1a8[-1];
         lVar9 = 0;
         local_1a8 = (long*)0x0;
         plVar7 = plVar5;
         if (lVar2 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar7 != 0 )) {
                  StringName::unref();
               }

               lVar9 = lVar9 + 1;
               plVar7 = plVar7 + 1;
            }
 while ( lVar2 != lVar9 );
         }

         Memory::free_static(plVar5 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_1b8 != (char*)0x0 )) {
      StringName::unref();
   }

   local_118 = (Variant*)0x1035b2;
   pVStack_110 = (Variant*)0x0;
   local_d8 = &local_118;
   D_METHODP((char*)&local_1b8, (char***)"is_stream_playing", uVar8);
   auStack_d0 = (undefined1[16])0x0;
   local_d8 = (Variant**)0x0;
   pMVar6 = create_method_bind<AudioStreamPlaybackPolyphonic,bool,long>(is_stream_playing);
   ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)&local_1b8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_d8] != '\0') {
      Variant::_clear_internal();
   }

   plVar5 = local_1a8;
   if (local_1a8 != (long*)0x0) {
      LOCK();
      plVar7 = local_1a8 + -2;
      *plVar7 = *plVar7 + -1;
      UNLOCK();
      if (*plVar7 == 0) {
         if (local_1a8 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = local_1a8[-1];
         lVar9 = 0;
         local_1a8 = (long*)0x0;
         plVar7 = plVar5;
         if (lVar2 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar7 != 0 )) {
                  StringName::unref();
               }

               lVar9 = lVar9 + 1;
               plVar7 = plVar7 + 1;
            }
 while ( lVar2 != lVar9 );
         }

         Memory::free_static(plVar5 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_1b8 != (char*)0x0 )) {
      StringName::unref();
   }

   local_118 = (Variant*)0x1035b2;
   pVStack_110 = (Variant*)0x0;
   local_d8 = &local_118;
   D_METHODP((char*)&local_1b8, (char***)"stop_stream", uVar8);
   auStack_d0 = (undefined1[16])0x0;
   local_d8 = (Variant**)0x0;
   pMVar6 = create_method_bind<AudioStreamPlaybackPolyphonic,long>(stop_stream);
   ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)&local_1b8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_d8] != '\0') {
      Variant::_clear_internal();
   }

   plVar5 = local_1a8;
   if (local_1a8 != (long*)0x0) {
      LOCK();
      plVar7 = local_1a8 + -2;
      *plVar7 = *plVar7 + -1;
      UNLOCK();
      if (*plVar7 == 0) {
         if (local_1a8 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = local_1a8[-1];
         lVar9 = 0;
         local_1a8 = (long*)0x0;
         plVar7 = plVar5;
         if (lVar2 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar7 != 0 )) {
                  StringName::unref();
               }

               lVar9 = lVar9 + 1;
               plVar7 = plVar7 + 1;
            }
 while ( lVar2 != lVar9 );
         }

         Memory::free_static(plVar5 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_1b8 != (char*)0x0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_1c0, "INVALID_ID", false);
   local_1b8 = "AudioStreamPlaybackPolyphonic";
   local_1c8 = 0;
   local_1d0 = 0;
   local_1b0 = 0x1d;
   String::parse_latin1((StrRange*)&local_1d0);
   StringName::StringName((StringName*)&local_1b8, (String*)&local_1d0, false);
   ClassDB::bind_integer_constant((StringName*)&local_1b8, (StringName*)&local_1c8, (StringName*)&local_1c0, -1, false);
   if (( StringName::configured != '\0' ) && ( local_1b8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1d0);
   if (( StringName::configured != '\0' ) && ( ( ( local_1c8 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( local_1c0 != 0 ) ) )) {
      StringName::unref();
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* AudioStreamPlaybackPolyphonic::play_stream(Ref<AudioStream> const&, float, float, float,
   AudioServer::PlaybackType, StringName const&) */ulong AudioStreamPlaybackPolyphonic::play_stream(undefined4 param_2, float param_3, undefined4 param_4, AudioStreamPlaybackPolyphonic *this, long *param_1, int param_6, StringName *param_7) {
   uint uVar1;
   long *plVar2;
   RefCounted *pRVar3;
   code *pcVar4;
   undefined8 uVar5;
   char cVar6;
   int iVar7;
   ulong uVar8;
   Ref *pRVar9;
   RefCounted *pRVar10;
   ulong uVar11;
   undefined8 uVar12;
   RefCounted *pRVar13;
   undefined8 *puVar14;
   undefined8 *puVar15;
   long lVar16;
   uint uVar17;
   char *pcVar18;
   CowData<AudioFrame> *this_00;
   long lVar19;
   long in_FS_OFFSET;
   byte bVar20;
   float fVar21;
   char *pcVar22;
   Ref<AudioSamplePlayback> *local_90;
   RefCounted *local_58;
   RefCounted *local_50;
   RefCounted *local_48;
   long local_40;
   bVar20 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*param_1 == 0) {
      _err_print_error("play_stream", "scene/resources/audio_stream_polyphonic.cpp", 0xd4, "Condition \"p_stream.is_null()\" is true. Returning: INVALID_ID", 0, 0);
   }
 else {
      if (param_6 == 0) {
         AudioServer::get_singleton();
         param_6 = AudioServer::get_default_playback_type();
      }

      uVar8 = 0;
      if (*(int*)( this + 0x270 ) != 0) {
         do {
            lVar19 = uVar8 * 0x30;
            if (*(char*)( *(long*)( this + 0x278 ) + lVar19 ) == '\0') {
               uVar11 = ( ulong ) * (uint*)( this + 0x270 );
               uVar17 = (uint)uVar8;
               if (*(uint*)( this + 0x270 ) <= uVar17) goto LAB_0010268d;
               pRVar13 = (RefCounted*)*param_1;
               lVar16 = *(long*)( this + 0x278 ) + lVar19;
               pRVar10 = *(RefCounted**)( lVar16 + 0x10 );
               if (pRVar13 != pRVar10) {
                  *(RefCounted**)( lVar16 + 0x10 ) = pRVar13;
                  local_48 = pRVar10;
                  if (( pRVar13 != (RefCounted*)0x0 ) && ( cVar6 = cVar6 == '\0' )) {
                     *(undefined8*)( lVar16 + 0x10 ) = 0;
                  }

                  Ref<AudioStream>::unref((Ref<AudioStream>*)&local_48);
                  uVar11 = ( ulong ) * (uint*)( this + 0x270 );
                  if (*(uint*)( this + 0x270 ) <= uVar17) goto LAB_0010268d;
                  pRVar10 = *(RefCounted**)( *(long*)( this + 0x278 ) + 0x10 + lVar19 );
               }

               ( **(code**)( *(long*)pRVar10 + 0x1c8 ) )((Ref<AudioSamplePlayback>*)&local_50);
               uVar11 = ( ulong ) * (uint*)( this + 0x270 );
               if (*(uint*)( this + 0x270 ) <= uVar17) goto LAB_0010268d;
               lVar16 = *(long*)( this + 0x278 ) + lVar19;
               pRVar13 = *(RefCounted**)( lVar16 + 0x18 );
               if (local_50 != pRVar13) {
                  *(RefCounted**)( lVar16 + 0x18 ) = local_50;
                  local_48 = pRVar13;
                  if (( local_50 != (RefCounted*)0x0 ) && ( cVar6 = cVar6 == '\0' )) {
                     *(undefined8*)( lVar16 + 0x18 ) = 0;
                  }

                  Ref<AudioStreamPlayback>::unref((Ref<AudioStreamPlayback>*)&local_48);
               }

               if (( ( local_50 != (RefCounted*)0x0 ) && ( cVar6 = RefCounted::unreference() ),pRVar13 = local_50,cVar6 != '\0' )) &&( cVar6 = cVar6 != '\0' )(**(code**)( *(long*)pRVar13 + 0x140 ))();
               Memory::free_static(pRVar13, false);
            }

            uVar11 = ( ulong ) * (uint*)( this + 0x270 );
            if (*(uint*)( this + 0x270 ) <= uVar17) goto LAB_0010268d;
            iVar7 = *(int*)( this + 0x684 );
            lVar16 = *(long*)( this + 0x278 ) + lVar19;
            *(ulong*)( lVar16 + 0x20 ) = CONCAT44(param_3, param_3);
            *(ulong*)( lVar16 + 4 ) = CONCAT44(param_4, param_2);
            *(int*)( this + 0x684 ) = iVar7 + 1;
            *(int*)( lVar16 + 0x28 ) = iVar7;
            *(undefined1*)( lVar16 + 2 ) = 0;
            uVar11 = ( ulong ) * (uint*)( this + 0x270 );
            if (*(uint*)( this + 0x270 ) <= uVar17) goto LAB_0010268d;
            *(undefined1*)( *(long*)( this + 0x278 ) + 1 + lVar19 ) = 1;
            uVar11 = ( ulong ) * (uint*)( this + 0x270 );
            if (*(uint*)( this + 0x270 ) <= uVar17) goto LAB_0010268d;
            *(undefined1*)( *(long*)( this + 0x278 ) + lVar19 ) = 1;
            if (( ( param_6 != 2 ) || ( *(code**)( *(long*)*param_1 + 0x210 ) == AudioStream::can_be_sampled ) ) || ( cVar6 = ( **(code**)( *(long*)*param_1 + 0x210 ) )() ),cVar6 == '\0') goto LAB_001025d7;
            uVar1 = *(uint*)( this + 0x270 );
            if (uVar1 <= uVar17) goto LAB_00102b8a;
            plVar2 = *(long**)( *(long*)( this + 0x278 ) + 0x18 + lVar19 );
            ( **(code**)( *plVar2 + 0x1a0 ) )(plVar2, 1);
            pRVar9 = (Ref*)AudioServer::get_singleton();
            cVar6 = AudioServer::is_stream_registered_as_sample(pRVar9);
            if (cVar6 == '\0') {
               pRVar9 = (Ref*)AudioServer::get_singleton();
               AudioServer::register_stream_as_sample(pRVar9);
            }

            fVar21 = expf(param_3 * __LC18);
            local_58 = (RefCounted*)0x0;
            uVar12 = CONCAT44(fVar21, fVar21);
            pRVar10 = (RefCounted*)operator_new(0x1b0, "");
            pRVar13 = pRVar10;
            for (lVar16 = 0x36; lVar16 != 0; lVar16 = lVar16 + -1) {
               *(undefined8*)pRVar13 = 0;
               pRVar13 = pRVar13 + (ulong)bVar20 * -0x10 + 8;
            }

            RefCounted::RefCounted(pRVar10);
            *(undefined***)pRVar10 = &PTR__initialize_classv_0010da70;
            uVar5 = _LC33;
            *(undefined1(*) [16])( pRVar10 + 0x180 ) = (undefined1[16])0x0;
            *(undefined8*)( pRVar10 + 400 ) = uVar5;
            *(undefined1(*) [16])( pRVar10 + 0x1a0 ) = (undefined1[16])0x0;
            postinitialize_handler((Object*)pRVar10);
            local_48 = (RefCounted*)0x0;
            local_50 = pRVar10;
            cVar6 = RefCounted::init_ref();
            if (cVar6 == '\0') {
               local_50 = (RefCounted*)0x0;
               Ref<AudioSamplePlayback>::unref((Ref<AudioSamplePlayback>*)&local_48);
               if (local_58 != (RefCounted*)0x0) {
                  local_48 = local_58;
                  local_58 = (RefCounted*)0x0;
                  LAB_001027fa:local_90 = (Ref<AudioSamplePlayback>*)&local_48;
                  Ref<AudioSamplePlayback>::unref(local_90);
               }

            }
 else {
               Ref<AudioSamplePlayback>::unref((Ref<AudioSamplePlayback>*)&local_48);
               if (local_58 != pRVar10) {
                  local_48 = local_58;
                  local_58 = pRVar10;
                  cVar6 = RefCounted::reference();
                  if (cVar6 == '\0') {
                     local_58 = (RefCounted*)0x0;
                  }

                  goto LAB_001027fa;
               }

            }

            local_90 = (Ref<AudioSamplePlayback>*)&local_48;
            Ref<AudioSamplePlayback>::unref((Ref<AudioSamplePlayback>*)&local_50);
            pRVar13 = local_58;
            uVar11 = ( ulong ) * (uint*)( this + 0x270 );
            if (uVar17 < *(uint*)( this + 0x270 )) {
               pRVar10 = *(RefCounted**)( *(long*)( this + 0x278 ) + 0x10 + lVar19 );
               pRVar3 = *(RefCounted**)( local_58 + 0x180 );
               if (pRVar10 != pRVar3) {
                  *(RefCounted**)( local_58 + 0x180 ) = pRVar10;
                  local_48 = pRVar3;
                  if (( pRVar10 != (RefCounted*)0x0 ) && ( cVar6 = cVar6 == '\0' )) {
                     *(long*)( pRVar13 + 0x180 ) = 0;
                  }

                  Ref<AudioStream>::unref((Ref<AudioStream>*)local_90);
               }

               pRVar13 = local_58;
               this_00 = (CowData<AudioFrame>*)( local_58 + 0x1a0 );
               *(undefined4*)( local_58 + 400 ) = param_2;
               if (*(long*)( local_58 + 0x1a0 ) == 0) {
                  CowData<AudioFrame>::_copy_on_write(this_00);
                  LAB_00102cad:puVar14 = (undefined8*)Memory::alloc_static(0x30, false);
                  if (puVar14 == (undefined8*)0x0) {
                     _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
                  }
 else {
                     puVar15 = puVar14 + 2;
                     *puVar14 = 1;
                     puVar14[1] = 0;
                     lVar16 = 0;
                     *(undefined8**)( pRVar13 + 0x1a0 ) = puVar15;
                     LAB_00102939:memset(puVar15 + lVar16, 0, ( 4 - lVar16 ) * 8);
                     LAB_0010295a:puVar15[-1] = 4;
                  }

                  goto LAB_00102962;
               }

               lVar16 = *(long*)( *(long*)( local_58 + 0x1a0 ) + -8 );
               if (lVar16 != 4) {
                  CowData<AudioFrame>::_copy_on_write(this_00);
                  if (lVar16 * 8 == 0) {
                     if (lVar16 < 4) {
                        LAB_00102c3a:if (lVar16 == 0) goto LAB_00102cad;
                        iVar7 = CowData<AudioFrame>::_realloc(this_00, 0x20);
                        if (iVar7 == 0) goto LAB_0010291f;
                     }
 else {
                        LAB_00102c27:iVar7 = CowData<AudioFrame>::_realloc(this_00, 0x20);
                        if (iVar7 == 0) goto LAB_00102c04;
                     }

                  }
 else {
                     uVar11 = lVar16 * 8 - 1;
                     uVar11 = uVar11 | uVar11 >> 1;
                     uVar11 = uVar11 | uVar11 >> 2;
                     uVar11 = uVar11 | uVar11 >> 4;
                     uVar11 = uVar11 | uVar11 >> 8;
                     uVar11 = uVar11 | uVar11 >> 0x10;
                     uVar11 = uVar11 | uVar11 >> 0x20;
                     if (lVar16 < 4) {
                        if (uVar11 != 0x1f) goto LAB_00102c3a;
                        LAB_0010291f:puVar15 = *(undefined8**)( pRVar13 + 0x1a0 );
                        if (puVar15 == (undefined8*)0x0) {
                           uVar8 = FUN_0010382c();
                           return uVar8;
                        }

                        lVar16 = puVar15[-1];
                        if (lVar16 < 4) goto LAB_00102939;
                        goto LAB_0010295a;
                     }

                     if (uVar11 != 0x1f) goto LAB_00102c27;
                     LAB_00102c04:if (*(long*)( pRVar13 + 0x1a0 ) == 0) {
                        uVar8 = play_stream();
                        return uVar8;
                     }

                     *(undefined8*)( *(long*)( pRVar13 + 0x1a0 ) + -8 ) = 4;
                  }

                  LAB_00102962:if (*(long*)( local_58 + 0x1a0 ) == 0) {
                     uVar11 = 0;
                  }
 else {
                     uVar11 = *(ulong*)( *(long*)( local_58 + 0x1a0 ) + -8 );
                     if (0 < (long)uVar11) {
                        this_00 = (CowData<AudioFrame>*)( local_58 + 0x1a0 );
                        goto LAB_0010298b;
                     }

                  }

                  uVar8 = 0;
                  iVar7 = 0x38;
                  pcVar18 = "./core/templates/vector.h";
                  pcVar22 = "((Vector<T> *)(this))->_cowdata.size()";
                  goto LAB_00102699;
               }

               LAB_0010298b:pRVar10 = local_58;
               CowData<AudioFrame>::_copy_on_write(this_00);
               pRVar13 = local_58;
               lVar16 = *(long*)( local_58 + 0x1a0 );
               **(undefined8**)( pRVar10 + 0x1a0 ) = uVar12;
               if (lVar16 == 0) {
                  uVar11 = 0;
               }
 else {
                  uVar11 = *(ulong*)( lVar16 + -8 );
                  if (1 < (long)uVar11) {
                     CowData<AudioFrame>::_copy_on_write((CowData<AudioFrame>*)( local_58 + 0x1a0 ));
                     pRVar10 = local_58;
                     lVar16 = *(long*)( pRVar13 + 0x1a0 );
                     *(undefined4*)( lVar16 + 0xc ) = 0x3f800000;
                     *(float*)( lVar16 + 8 ) = fVar21;
                     if (*(long*)( local_58 + 0x1a0 ) == 0) {
                        uVar11 = 0;
                     }
 else {
                        uVar11 = *(ulong*)( *(long*)( local_58 + 0x1a0 ) + -8 );
                        if (2 < (long)uVar11) {
                           CowData<AudioFrame>::_copy_on_write((CowData<AudioFrame>*)( local_58 + 0x1a0 ));
                           pRVar13 = local_58;
                           *(undefined8*)( *(long*)( pRVar10 + 0x1a0 ) + 0x10 ) = uVar12;
                           if (*(long*)( local_58 + 0x1a0 ) == 0) {
                              uVar11 = 0;
                           }
 else {
                              uVar11 = *(ulong*)( *(long*)( local_58 + 0x1a0 ) + -8 );
                              if (3 < (long)uVar11) {
                                 CowData<AudioFrame>::_copy_on_write((CowData<AudioFrame>*)( local_58 + 0x1a0 ));
                                 *(undefined8*)( *(long*)( pRVar13 + 0x1a0 ) + 0x18 ) = uVar12;
                                 StringName::operator =((StringName*)( local_58 + 0x1a8 ), param_7);
                                 uVar1 = *(uint*)( this + 0x270 );
                                 if (uVar17 < uVar1) {
                                    ( **(code**)( **(long**)( *(long*)( this + 0x278 ) + 0x18 + lVar19 ) + 0x1b0 ) )(local_90);
                                    pRVar13 = local_48;
                                    Ref<AudioSamplePlayback>::unref(local_90);
                                    if (pRVar13 != (RefCounted*)0x0) {
                                       uVar12 = AudioServer::get_singleton();
                                       local_50 = (RefCounted*)0x0;
                                       if (( local_58 != (RefCounted*)0x0 ) && ( pRVar13 = (RefCounted*)__dynamic_cast(local_58, &Object::typeinfo, &AudioStreamPlayback::typeinfo, 0) ),pRVar13 != (RefCounted*)0x0) {
                                          local_48 = (RefCounted*)0x0;
                                          local_50 = pRVar13;
                                          cVar6 = RefCounted::reference();
                                          if (cVar6 == '\0') {
                                             local_50 = (RefCounted*)0x0;
                                          }

                                          Ref<AudioStreamPlayback>::unref((Ref<AudioStreamPlayback>*)local_90);
                                       }

                                       AudioServer::stop_playback_stream(uVar12, (Ref<AudioSamplePlayback>*)&local_50);
                                       Ref<AudioStreamPlayback>::unref((Ref<AudioStreamPlayback>*)&local_50);
                                    }

                                    uVar1 = *(uint*)( this + 0x270 );
                                    if (uVar17 < uVar1) {
                                       plVar2 = *(long**)( *(long*)( this + 0x278 ) + 0x18 + lVar19 );
                                       ( **(code**)( *plVar2 + 0x1b8 ) )(plVar2, (Ref<AudioSamplePlayback>*)&local_58);
                                       pRVar9 = (Ref*)AudioServer::get_singleton();
                                       AudioServer::start_sample_playback(pRVar9);
                                       Ref<AudioSamplePlayback>::unref((Ref<AudioSamplePlayback>*)&local_58);
                                       LAB_001025d7:uVar1 = *(uint*)( this + 0x270 );
                                       if (uVar17 < uVar1) {
                                          uVar8 = ( ulong ) * (uint*)( *(long*)( this + 0x278 ) + 0x28 + lVar19 ) | uVar8 << 0x20;
                                          goto LAB_0010262f;
                                       }

                                    }

                                 }

                                 LAB_00102b8a:uVar11 = (ulong)uVar1;
                                 goto LAB_0010268d;
                              }

                           }

                           uVar8 = 3;
                           iVar7 = 0x38;
                           pcVar18 = "./core/templates/vector.h";
                           pcVar22 = "((Vector<T> *)(this))->_cowdata.size()";
                           goto LAB_00102699;
                        }

                     }

                     uVar8 = 2;
                     iVar7 = 0x38;
                     pcVar18 = "./core/templates/vector.h";
                     pcVar22 = "((Vector<T> *)(this))->_cowdata.size()";
                     goto LAB_00102699;
                  }

               }

               uVar8 = 1;
               iVar7 = 0x38;
               pcVar18 = "./core/templates/vector.h";
               pcVar22 = "((Vector<T> *)(this))->_cowdata.size()";
            }
 else {
               LAB_0010268d:pcVar22 = "count";
               uVar8 = uVar8 & 0xffffffff;
               iVar7 = 0xb2;
               pcVar18 = "./core/templates/local_vector.h";
            }

            LAB_00102699:_err_print_index_error("operator[]", pcVar18, iVar7, uVar8, uVar11, "p_index", pcVar22, "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar4 = (code*)invalidInstructionException();
            ( *pcVar4 )();
         }
 while ( (uint)uVar8 < *(uint*)( this + 0x270 ) );
      }

   }

   uVar8 = 0xffffffffffffffff;
   LAB_0010262f:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar8;
}
/* AudioStreamPlaybackPolyphonic::_play_stream_bind_compat_91382(Ref<AudioStream> const&, float,
   float, float) */void AudioStreamPlaybackPolyphonic::_play_stream_bind_compat_91382(Ref *param_1, float param_2, float param_3, float param_4) {
   undefined8 in_RSI;
   play_stream((AudioStreamPlaybackPolyphonic*)param_1, in_RSI, 0, SceneStringNames::singleton + 0x208);
   return;
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
/* RefCounted::is_class_ptr(void*) const */uint RefCounted::is_class_ptr(RefCounted *this, void *param_1) {
   return (uint)CONCAT71(0x10e3, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10e3, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr);
}
/* RefCounted::_getv(StringName const&, Variant&) const */undefined8 RefCounted::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* RefCounted::_setv(StringName const&, Variant const&) */undefined8 RefCounted::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* RefCounted::_validate_propertyv(PropertyInfo&) const */void RefCounted::_validate_propertyv(PropertyInfo *param_1) {
   return;
}
/* RefCounted::_property_can_revertv(StringName const&) const */undefined8 RefCounted::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* RefCounted::_property_get_revertv(StringName const&, Variant&) const */undefined8 RefCounted::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* RefCounted::_notificationv(int, bool) */void RefCounted::_notificationv(int param_1, bool param_2) {
   return;
}
/* Resource::set_last_modified_time(unsigned long) */void Resource::set_last_modified_time(Resource *this, ulong param_1) {
   *(ulong*)( this + 0x198 ) = param_1;
   return;
}
/* Resource::set_import_last_modified_time(unsigned long) */void Resource::set_import_last_modified_time(Resource *this, ulong param_1) {
   *(ulong*)( this + 0x1a0 ) = param_1;
   return;
}
/* AudioSamplePlayback::is_class_ptr(void*) const */uint AudioSamplePlayback::is_class_ptr(AudioSamplePlayback *this, void *param_1) {
   return (uint)CONCAT71(0x10e3, (undefined4*)param_1 == &RefCounted::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10e2, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10e3, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr);
}
/* AudioSamplePlayback::_getv(StringName const&, Variant&) const */undefined8 AudioSamplePlayback::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* AudioSamplePlayback::_setv(StringName const&, Variant const&) */undefined8 AudioSamplePlayback::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* AudioSamplePlayback::_validate_propertyv(PropertyInfo&) const */void AudioSamplePlayback::_validate_propertyv(PropertyInfo *param_1) {
   return;
}
/* AudioSamplePlayback::_property_can_revertv(StringName const&) const */undefined8 AudioSamplePlayback::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* AudioSamplePlayback::_property_get_revertv(StringName const&, Variant&) const */undefined8 AudioSamplePlayback::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* AudioSamplePlayback::_notificationv(int, bool) */void AudioSamplePlayback::_notificationv(int param_1, bool param_2) {
   return;
}
/* AudioStream::can_be_sampled() const */undefined8 AudioStream::can_be_sampled(void) {
   return 0;
}
/* AudioStreamPolyphonic::is_class_ptr(void*) const */uint AudioStreamPolyphonic::is_class_ptr(AudioStreamPolyphonic *this, void *param_1) {
   return (uint)CONCAT71(0x10e2, (undefined4*)param_1 == &AudioStream::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10e2, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10e3, (undefined4*)param_1 == &Resource::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10e3, (undefined4*)param_1 == &RefCounted::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10e3, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr);
}
/* AudioStreamPolyphonic::_getv(StringName const&, Variant&) const */undefined8 AudioStreamPolyphonic::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* AudioStreamPolyphonic::_setv(StringName const&, Variant const&) */undefined8 AudioStreamPolyphonic::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* AudioStreamPolyphonic::_validate_propertyv(PropertyInfo&) const */void AudioStreamPolyphonic::_validate_propertyv(PropertyInfo *param_1) {
   return;
}
/* AudioStreamPolyphonic::_property_can_revertv(StringName const&) const */undefined8 AudioStreamPolyphonic::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* AudioStreamPolyphonic::_property_get_revertv(StringName const&, Variant&) const */undefined8 AudioStreamPolyphonic::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* AudioStreamPolyphonic::_notificationv(int, bool) */void AudioStreamPolyphonic::_notificationv(int param_1, bool param_2) {
   return;
}
/* AudioStreamPolyphonic::is_meta_stream() const */undefined8 AudioStreamPolyphonic::is_meta_stream(void) {
   return 1;
}
/* AudioStreamPlaybackPolyphonic::is_class_ptr(void*) const */uint AudioStreamPlaybackPolyphonic::is_class_ptr(AudioStreamPlaybackPolyphonic *this, void *param_1) {
   return (uint)CONCAT71(0x10e2, (undefined4*)param_1 == &AudioStreamPlayback::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10e2, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10e3, (undefined4*)param_1 == &RefCounted::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10e3, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr);
}
/* AudioStreamPlaybackPolyphonic::_getv(StringName const&, Variant&) const */undefined8 AudioStreamPlaybackPolyphonic::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* AudioStreamPlaybackPolyphonic::_setv(StringName const&, Variant const&) */undefined8 AudioStreamPlaybackPolyphonic::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* AudioStreamPlaybackPolyphonic::_validate_propertyv(PropertyInfo&) const */void AudioStreamPlaybackPolyphonic::_validate_propertyv(PropertyInfo *param_1) {
   return;
}
/* AudioStreamPlaybackPolyphonic::_property_can_revertv(StringName const&) const */undefined8 AudioStreamPlaybackPolyphonic::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* AudioStreamPlaybackPolyphonic::_property_get_revertv(StringName const&, Variant&) const */undefined8 AudioStreamPlaybackPolyphonic::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* AudioStreamPlaybackPolyphonic::_notificationv(int, bool) */void AudioStreamPlaybackPolyphonic::_notificationv(int param_1, bool param_2) {
   return;
}
/* MethodBindT<long>::_gen_argument_type(int) const */char MethodBindT<long>::_gen_argument_type(MethodBindT<long> *this, int param_1) {
   return ( param_1 == 0 ) * '\x02';
}
/* MethodBindT<long>::get_argument_meta(int) const */long MethodBindT<long>::get_argument_meta(MethodBindT<long> *this, int param_1) {
   return ( ulong )(param_1 == 0) << 2;
}
/* MethodBindTRC<bool, long>::_gen_argument_type(int) const */char MethodBindTRC<bool,long>::_gen_argument_type(MethodBindTRC<bool,long> *this, int param_1) {
   return ( param_1 == 0 ) + '\x01';
}
/* MethodBindTRC<bool, long>::get_argument_meta(int) const */long MethodBindTRC<bool,long>::get_argument_meta(MethodBindTRC<bool,long> *this, int param_1) {
   return ( ulong )(param_1 == 0) << 2;
}
/* MethodBindT<long, float>::_gen_argument_type(int) const */int MethodBindT<long,float>::_gen_argument_type(MethodBindT<long,float> *this, int param_1) {
   int iVar1;
   iVar1 = 3 - ( uint )(param_1 == 0);
   if (1 < (uint)param_1) {
      iVar1 = 0;
   }

   return iVar1;
}
/* MethodBindT<long, float>::get_argument_meta(int) const */char MethodBindT<long,float>::get_argument_meta(MethodBindT<long,float> *this, int param_1) {
   char cVar1;
   cVar1 = '\x04';
   if (param_1 != 0) {
      cVar1 = ( param_1 == 1 ) * '\t';
   }

   return cVar1;
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
/* MethodBindTR<long, Ref<AudioStream> const&, float, float, float>::_gen_argument_type(int) const
    */char MethodBindTR<long,Ref<AudioStream>const&,float,float,float>::_gen_argument_type(MethodBindTR<long,Ref<AudioStream>const&,float,float,float> *this, int param_1) {
   char cVar1;
   cVar1 = '\x02';
   if ((uint)param_1 < 4) {
      cVar1 = ( -(param_1 == 0) & 0x15U ) + 3;
   }

   return cVar1;
}
/* MethodBindTR<long, Ref<AudioStream> const&, float, float, float>::get_argument_meta(int) const */byte MethodBindTR<long,Ref<AudioStream>const&,float,float,float>::get_argument_meta(MethodBindTR<long,Ref<AudioStream>const&,float,float,float> *this, int param_1) {
   if (-1 < param_1) {
      return -(param_1 - 1U < 3) & 9;
   }

   return 4;
}
/* MethodBindTR<long, Ref<AudioStream> const&, float, float, float, AudioServer::PlaybackType,
   StringName const&>::_gen_argument_type(int) const */undefined8 MethodBindTR<long,Ref<AudioStream>const&,float,float,float,AudioServer::PlaybackType,StringName_const&>::_gen_argument_type(MethodBindTR<long,Ref<AudioStream>const&,float,float,float,AudioServer::PlaybackType,StringName_const&> *this, int param_1) {
   undefined8 uVar1;
   uVar1 = 2;
   if (( ( (uint)param_1 < 6 ) && ( uVar1 = 0x18 ),param_1 != 0 )) {
      uVar1 = 2;
      if (param_1 != 4) {
         uVar1 = 0x15;
      }

      return uVar1;
   }

   return uVar1;
}
/* MethodBindTR<long, Ref<AudioStream> const&, float, float, float, AudioServer::PlaybackType,
   StringName const&>::get_argument_meta(int) const */byte MethodBindTR<long,Ref<AudioStream>const&,float,float,float,AudioServer::PlaybackType,StringName_const&>::get_argument_meta(MethodBindTR<long,Ref<AudioStream>const&,float,float,float,AudioServer::PlaybackType,StringName_const&> *this, int param_1) {
   if (-1 < param_1) {
      return -(param_1 - 1U < 3) & 9;
   }

   return 4;
}
/* MethodBindTR<long, Ref<AudioStream> const&, float, float, float>::~MethodBindTR() */void MethodBindTR<long,Ref<AudioStream>const&,float,float,float>::~MethodBindTR(MethodBindTR<long,Ref<AudioStream>const&,float,float,float> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010dfd8;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTR<long, Ref<AudioStream> const&, float, float, float>::~MethodBindTR() */void MethodBindTR<long,Ref<AudioStream>const&,float,float,float>::~MethodBindTR(MethodBindTR<long,Ref<AudioStream>const&,float,float,float> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010dfd8;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<int>::~MethodBindT() */void MethodBindT<int>::~MethodBindT(MethodBindT<int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010e038;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<int>::~MethodBindT() */void MethodBindT<int>::~MethodBindT(MethodBindT<int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010e038;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<int>::~MethodBindTRC() */void MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010e098;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<int>::~MethodBindTRC() */void MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010e098;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTR<long, Ref<AudioStream> const&, float, float, float, AudioServer::PlaybackType,
   StringName const&>::~MethodBindTR() */void MethodBindTR<long,Ref<AudioStream>const&,float,float,float,AudioServer::PlaybackType,StringName_const&>::~MethodBindTR(MethodBindTR<long,Ref<AudioStream>const&,float,float,float,AudioServer::PlaybackType,StringName_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010e0f8;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTR<long, Ref<AudioStream> const&, float, float, float, AudioServer::PlaybackType,
   StringName const&>::~MethodBindTR() */void MethodBindTR<long,Ref<AudioStream>const&,float,float,float,AudioServer::PlaybackType,StringName_const&>::~MethodBindTR(MethodBindTR<long,Ref<AudioStream>const&,float,float,float,AudioServer::PlaybackType,StringName_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010e0f8;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<long, float>::~MethodBindT() */void MethodBindT<long,float>::~MethodBindT(MethodBindT<long,float> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010e158;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<long, float>::~MethodBindT() */void MethodBindT<long,float>::~MethodBindT(MethodBindT<long,float> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010e158;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<bool, long>::~MethodBindTRC() */void MethodBindTRC<bool,long>::~MethodBindTRC(MethodBindTRC<bool,long> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010e1b8;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<bool, long>::~MethodBindTRC() */void MethodBindTRC<bool,long>::~MethodBindTRC(MethodBindTRC<bool,long> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010e1b8;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<long>::~MethodBindT() */void MethodBindT<long>::~MethodBindT(MethodBindT<long> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010e218;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<long>::~MethodBindT() */void MethodBindT<long>::~MethodBindT(MethodBindT<long> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010e218;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* RefCounted::~RefCounted() */void RefCounted::~RefCounted(RefCounted *this) {
   *(undefined***)this = &PTR__initialize_classv_0010d910;
   Object::~Object((Object*)this);
   return;
}
/* RefCounted::~RefCounted() */void RefCounted::~RefCounted(RefCounted *this) {
   *(undefined***)this = &PTR__initialize_classv_0010d910;
   Object::~Object((Object*)this);
   operator_delete(this, 0x180);
   return;
}
/* CowData<AudioFrame>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<AudioFrame>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* AudioStreamPlaybackPolyphonic::_bind_compatibility_methods() [clone .cold] */void AudioStreamPlaybackPolyphonic::_bind_compatibility_methods(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* AudioStreamPolyphonic::_bind_methods() [clone .cold] */void AudioStreamPolyphonic::_bind_methods(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* AudioStreamPlaybackPolyphonic::_bind_methods() [clone .cold] */void AudioStreamPlaybackPolyphonic::_bind_methods(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* AudioStreamPlaybackPolyphonic::play_stream(Ref<AudioStream> const&, float, float, float,
   AudioServer::PlaybackType, StringName const&) [clone .cold] */void AudioStreamPlaybackPolyphonic::play_stream(void) {
   code *pcVar1;
   _DAT_00000000 = 0;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
void FUN_0010382c(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* AudioStreamPlaybackPolyphonic::_get_class_namev() const */undefined8 *AudioStreamPlaybackPolyphonic::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_00103893:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00103893;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "AudioStreamPlaybackPolyphonic");
         goto LAB_001038fe;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "AudioStreamPlaybackPolyphonic");
   LAB_001038fe:return &_get_class_namev();
}
/* AudioStream::get_save_class() const */AudioStream * __thiscall AudioStream::get_save_class(AudioStream *this){
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
}
/* Resource::get_base_extension() const */Resource * __thiscall Resource::get_base_extension(Resource *this){
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
}
/* AudioSamplePlayback::~AudioSamplePlayback() */void AudioSamplePlayback::~AudioSamplePlayback(AudioSamplePlayback *this) {
   long *plVar1;
   long lVar2;
   Object *pOVar3;
   char cVar4;
   bool bVar5;
   bVar5 = StringName::configured != '\0';
   *(undefined***)this = &PTR__initialize_classv_0010da70;
   if (( bVar5 ) && ( *(long*)( this + 0x1a8 ) != 0 )) {
      StringName::unref();
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

   if (*(long*)( this + 0x188 ) != 0) {
      cVar4 = RefCounted::unreference();
      if (cVar4 != '\0') {
         pOVar3 = *(Object**)( this + 0x188 );
         cVar4 = predelete_handler(pOVar3);
         if (cVar4 != '\0') {
            ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
            Memory::free_static(pOVar3, false);
         }

      }

   }

   if (*(long*)( this + 0x180 ) != 0) {
      cVar4 = RefCounted::unreference();
      if (cVar4 != '\0') {
         pOVar3 = *(Object**)( this + 0x180 );
         cVar4 = predelete_handler(pOVar3);
         if (cVar4 != '\0') {
            ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
            Memory::free_static(pOVar3, false);
         }

      }

   }

   *(undefined***)this = &PTR__initialize_classv_0010d910;
   Object::~Object((Object*)this);
   return;
}
/* AudioSamplePlayback::~AudioSamplePlayback() */void AudioSamplePlayback::~AudioSamplePlayback(AudioSamplePlayback *this) {
   long *plVar1;
   long lVar2;
   Object *pOVar3;
   char cVar4;
   bool bVar5;
   bVar5 = StringName::configured != '\0';
   *(undefined***)this = &PTR__initialize_classv_0010da70;
   if (( bVar5 ) && ( *(long*)( this + 0x1a8 ) != 0 )) {
      StringName::unref();
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

   if (*(long*)( this + 0x188 ) != 0) {
      cVar4 = RefCounted::unreference();
      if (cVar4 != '\0') {
         pOVar3 = *(Object**)( this + 0x188 );
         cVar4 = predelete_handler(pOVar3);
         if (cVar4 != '\0') {
            ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
            Memory::free_static(pOVar3, false);
         }

      }

   }

   if (*(long*)( this + 0x180 ) != 0) {
      cVar4 = RefCounted::unreference();
      if (cVar4 != '\0') {
         pOVar3 = *(Object**)( this + 0x180 );
         cVar4 = predelete_handler(pOVar3);
         if (cVar4 != '\0') {
            ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
            Memory::free_static(pOVar3, false);
         }

      }

   }

   *(undefined***)this = &PTR__initialize_classv_0010d910;
   Object::~Object((Object*)this);
   operator_delete(this, 0x1b0);
   return;
}
/* AudioSamplePlayback::_get_class_namev() const */undefined8 *AudioSamplePlayback::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_00103ca3:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00103ca3;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "AudioSamplePlayback");
         goto LAB_00103d0e;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "AudioSamplePlayback");
   LAB_00103d0e:return &_get_class_namev();
}
/* RefCounted::_get_class_namev() const */undefined8 *RefCounted::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_00103d83:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00103d83;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "RefCounted");
         goto LAB_00103dee;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "RefCounted");
   LAB_00103dee:return &_get_class_namev();
}
/* AudioStreamPolyphonic::_get_class_namev() const */undefined8 *AudioStreamPolyphonic::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_00103e63:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00103e63;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "AudioStreamPolyphonic");
         goto LAB_00103ece;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "AudioStreamPolyphonic");
   LAB_00103ece:return &_get_class_namev();
}
/* AudioStreamPolyphonic::~AudioStreamPolyphonic() */void AudioStreamPolyphonic::~AudioStreamPolyphonic(AudioStreamPolyphonic *this) {
   bool bVar1;
   bVar1 = StringName::configured != '\0';
   *(code**)this = strlen;
   if (bVar1) {
      if (*(long*)( this + 0x330 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010404d;
      }

      if (*(long*)( this + 0x318 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010404d;
      }

      if (*(long*)( this + 0x300 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010404d;
      }

      if (*(long*)( this + 0x2e8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010404d;
      }

      if (*(long*)( this + 0x2d0 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010404d;
      }

      if (*(long*)( this + 0x2b8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010404d;
      }

      if (*(long*)( this + 0x2a0 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010404d;
      }

      if (*(long*)( this + 0x288 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010404d;
      }

      if (*(long*)( this + 0x270 ) != 0) {
         StringName::unref();
      }

   }

   LAB_0010404d:Resource::~Resource((Resource*)this);
   return;
}
/* AudioStreamPolyphonic::~AudioStreamPolyphonic() */void AudioStreamPolyphonic::~AudioStreamPolyphonic(AudioStreamPolyphonic *this) {
   bool bVar1;
   bVar1 = StringName::configured != '\0';
   *(code**)this = strlen;
   if (bVar1) {
      if (*(long*)( this + 0x330 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010419d;
      }

      if (*(long*)( this + 0x318 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010419d;
      }

      if (*(long*)( this + 0x300 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010419d;
      }

      if (*(long*)( this + 0x2e8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010419d;
      }

      if (*(long*)( this + 0x2d0 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010419d;
      }

      if (*(long*)( this + 0x2b8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010419d;
      }

      if (*(long*)( this + 0x2a0 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010419d;
      }

      if (*(long*)( this + 0x288 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010419d;
      }

      if (*(long*)( this + 0x270 ) != 0) {
         StringName::unref();
      }

   }

   LAB_0010419d:Resource::~Resource((Resource*)this);
   operator_delete(this, 0x350);
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
/* LocalVector<AudioStreamPlaybackPolyphonic::Stream, unsigned int, false, false>::resize(unsigned
   int) */void LocalVector<AudioStreamPlaybackPolyphonic::Stream,unsigned_int,false,false>::resize(LocalVector<AudioStreamPlaybackPolyphonic::Stream,unsigned_int,false,false> *this, uint param_1) {
   Object *pOVar1;
   code *pcVar2;
   undefined8 uVar3;
   char cVar4;
   undefined1 *puVar5;
   uint uVar6;
   long lVar7;
   long lVar8;
   uint uVar9;
   uVar9 = *(uint*)this;
   if (param_1 < uVar9) {
      lVar7 = (ulong)param_1 * 0x30;
      uVar9 = param_1;
      do {
         lVar8 = *(long*)( this + 8 ) + lVar7;
         if (( *(long*)( lVar8 + 0x18 ) != 0 ) && ( cVar4 = cVar4 != '\0' )) {
            pOVar1 = *(Object**)( lVar8 + 0x18 );
            cVar4 = predelete_handler(pOVar1);
            if (cVar4 != '\0') {
               ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
               Memory::free_static(pOVar1, false);
            }

         }

         if (( *(long*)( lVar8 + 0x10 ) != 0 ) && ( cVar4 = cVar4 != '\0' )) {
            pOVar1 = *(Object**)( lVar8 + 0x10 );
            cVar4 = predelete_handler(pOVar1);
            if (cVar4 != '\0') {
               ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
               Memory::free_static(pOVar1, false);
            }

         }

         uVar9 = uVar9 + 1;
         lVar7 = lVar7 + 0x30;
      }
 while ( uVar9 < *(uint*)this );
   }
 else {
      if (param_1 <= uVar9) {
         return;
      }

      uVar6 = param_1 - 1;
      if (*(uint*)( this + 4 ) < param_1) {
         uVar9 = uVar6 >> 1 | uVar6;
         uVar9 = uVar9 | uVar9 >> 2;
         uVar9 = uVar9 | uVar9 >> 4;
         uVar9 = uVar9 | uVar9 >> 8;
         uVar9 = ( uVar9 | uVar9 >> 0x10 ) + 1;
         *(uint*)( this + 4 ) = uVar9;
         lVar7 = Memory::realloc_static(*(void**)( this + 8 ), (ulong)uVar9 * 0x30, false);
         *(long*)( this + 8 ) = lVar7;
         if (lVar7 == 0) {
            _err_print_error("resize", "./core/templates/local_vector.h", 0xa3, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         uVar9 = *(uint*)this;
         if (param_1 <= uVar9) goto LAB_00104372;
      }

      uVar3 = _LC33;
      lVar7 = (ulong)uVar9 * 0x30;
      do {
         puVar5 = (undefined1*)( *(long*)( this + 8 ) + lVar7 );
         lVar7 = lVar7 + 0x30;
         *puVar5 = 0;
         puVar5[1] = 0;
         puVar5[2] = 0;
         *(undefined8*)( puVar5 + 4 ) = uVar3;
         *(undefined8*)( puVar5 + 0x20 ) = 0;
         *(undefined4*)( puVar5 + 0x28 ) = 0;
         *(undefined1(*) [16])( puVar5 + 0x10 ) = (undefined1[16])0x0;
      }
 while ( ( (ulong)uVar9 + 1 + ( ulong )(uVar6 - uVar9) ) * 0x30 != lVar7 );
   }

   LAB_00104372:*(uint*)this = param_1;
   return;
}
/* AudioStreamPlaybackPolyphonic::~AudioStreamPlaybackPolyphonic() */void AudioStreamPlaybackPolyphonic::~AudioStreamPlaybackPolyphonic(AudioStreamPlaybackPolyphonic *this) {
   Object *pOVar1;
   char cVar2;
   *(undefined***)this = &PTR__initialize_classv_0010de08;
   if (*(long*)( this + 0x690 ) != 0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
         pOVar1 = *(Object**)( this + 0x690 );
         cVar2 = predelete_handler(pOVar1);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
         }

      }

   }

   if (*(long*)( this + 0x278 ) != 0) {
      LocalVector<AudioStreamPlaybackPolyphonic::Stream,unsigned_int,false,false>::resize((LocalVector<AudioStreamPlaybackPolyphonic::Stream,unsigned_int,false,false>*)( this + 0x270 ), 0);
      if (*(void**)( this + 0x278 ) != (void*)0x0) {
         Memory::free_static(*(void**)( this + 0x278 ), false);
      }

   }

   AudioStreamPlayback::~AudioStreamPlayback((AudioStreamPlayback*)this);
   return;
}
/* AudioStreamPlaybackPolyphonic::~AudioStreamPlaybackPolyphonic() */void AudioStreamPlaybackPolyphonic::~AudioStreamPlaybackPolyphonic(AudioStreamPlaybackPolyphonic *this) {
   Object *pOVar1;
   char cVar2;
   *(undefined***)this = &PTR__initialize_classv_0010de08;
   if (*(long*)( this + 0x690 ) != 0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
         pOVar1 = *(Object**)( this + 0x690 );
         cVar2 = predelete_handler(pOVar1);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
         }

      }

   }

   if (*(long*)( this + 0x278 ) != 0) {
      LocalVector<AudioStreamPlaybackPolyphonic::Stream,unsigned_int,false,false>::resize((LocalVector<AudioStreamPlaybackPolyphonic::Stream,unsigned_int,false,false>*)( this + 0x270 ), 0);
      if (*(void**)( this + 0x278 ) != (void*)0x0) {
         Memory::free_static(*(void**)( this + 0x278 ), false);
      }

   }

   AudioStreamPlayback::~AudioStreamPlayback((AudioStreamPlayback*)this);
   operator_delete(this, 0x698);
   return;
}
/* Ref<AudioStreamPlayback>::unref() */void Ref<AudioStreamPlayback>::unref(Ref<AudioStreamPlayback> *this) {
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
/* Ref<AudioStream>::unref() */void Ref<AudioStream>::unref(Ref<AudioStream> *this) {
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
/* PropertyInfo::~PropertyInfo() */void PropertyInfo::~PropertyInfo(PropertyInfo *this) {
   CowData<char32_t>::_unref((CowData<char32_t>*)( this + 0x20 ));
   if (( StringName::configured != '\0' ) && ( *(long*)( this + 0x10 ) != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)( this + 8 ));
   return;
}
/* godot::details::enum_qualified_name_to_class_info_name(String const&) */details * __thiscall
godot::details::enum_qualified_name_to_class_info_name(details *this,String *param_1){
   code *pcVar1;
   CowData<char32_t> *pCVar2;
   long lVar3;
   CowData<char32_t> *pCVar4;
   long lVar5;
   long in_FS_OFFSET;
   undefined8 local_60;
   char local_58[8];
   CowData<char32_t> *local_50;
   undefined *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   String::split(local_58, SUB81(param_1, 0), 0x1046f4);
   if (( local_50 != (CowData<char32_t>*)0x0 ) && ( 2 < *(long*)( local_50 + -8 ) )) {
      local_60 = 0;
      local_48 = &_LC36;
      local_40 = 1;
      String::parse_latin1((StrRange*)&local_60);
      if (local_50 == (CowData<char32_t>*)0x0) {
         lVar5 = 0;
         lVar3 = -2;
      }
 else {
         lVar5 = *(long*)( local_50 + -8 );
         lVar3 = lVar5 + -2;
         if (-1 < lVar3) {
            String::operator +((String*)&local_48, (String*)( local_50 + lVar3 * 8 ));
            String::operator +((String*)this, (String*)&local_48);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
            goto LAB_001047aa;
         }

      }

      _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar3, lVar5, "p_index", "size()", "", false, true);
      _err_flush_stdout();
      /* WARNING: Does not return */
      pcVar1 = (code*)invalidInstructionException();
      ( *pcVar1 )();
   }

   local_60 = 0;
   local_48 = &_LC36;
   local_40 = 1;
   String::parse_latin1((StrRange*)&local_60);
   String::join((Vector*)this);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   LAB_001047aa:pCVar2 = local_50;
   if (local_50 != (CowData<char32_t>*)0x0) {
      LOCK();
      pCVar4 = local_50 + -0x10;
      *(long*)pCVar4 = *(long*)pCVar4 + -1;
      UNLOCK();
      if (*(long*)pCVar4 == 0) {
         if (local_50 == (CowData<char32_t>*)0x0) {
            /* WARNING: Does not return */
            pcVar1 = (code*)invalidInstructionException();
            ( *pcVar1 )();
         }

         lVar5 = *(long*)( local_50 + -8 );
         local_50 = (CowData<char32_t>*)0x0;
         if (lVar5 != 0) {
            lVar3 = 0;
            pCVar4 = pCVar2;
            do {
               lVar3 = lVar3 + 1;
               CowData<char32_t>::_unref(pCVar4);
               pCVar4 = pCVar4 + 8;
            }
 while ( lVar5 != lVar3 );
         }

         Memory::free_static(pCVar2 + -0x10, false);
      }

   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
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
/* GetTypeInfo<long, void>::get_class_info() */GetTypeInfo<long,void> * __thiscall
GetTypeInfo<long,void>::get_class_info(GetTypeInfo<long,void> *this){
   long in_FS_OFFSET;
   undefined8 local_60;
   long local_58;
   long local_50;
   undefined *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_58 = 0;
   local_48 = &_LC4;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   local_60 = 0;
   *(undefined4*)this = 2;
   *(undefined4*)( this + 0x18 ) = 0;
   *(undefined8*)( this + 0x20 ) = 0;
   *(undefined1(*) [16])( this + 8 ) = (undefined1[16])0x0;
   if (local_58 == 0) {
      *(undefined4*)( this + 0x28 ) = 6;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0x20 ), (CowData*)&local_58);
      *(undefined4*)( this + 0x28 ) = 6;
      if (*(int*)( this + 0x18 ) == 0x11) {
         StringName::StringName((StringName*)&local_48, (String*)( this + 0x20 ), false);
         if (*(undefined**)( this + 0x10 ) == local_48) {
            if (( StringName::configured != '\0' ) && ( local_48 != (undefined*)0x0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            *(undefined**)( this + 0x10 ) = local_48;
         }

         goto LAB_00104b35;
      }

   }

   StringName::operator =((StringName*)( this + 0x10 ), (StringName*)&local_50);
   LAB_00104b35:CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
      StringName::unref();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* AudioSamplePlayback::get_class() const */void AudioSamplePlayback::get_class(void) {
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
/* AudioStreamPlaybackPolyphonic::get_class() const */void AudioStreamPlaybackPolyphonic::get_class(void) {
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
/* AudioStreamPolyphonic::get_class() const */void AudioStreamPolyphonic::get_class(void) {
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
/* RefCounted::get_class() const */void RefCounted::get_class(void) {
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
/* RefCounted::is_class(String const&) const */undefined8 RefCounted::is_class(RefCounted *this, String *param_1) {
   long *plVar1;
   long lVar2;
   char *pcVar3;
   long lVar4;
   char cVar5;
   undefined8 uVar6;
   long in_FS_OFFSET;
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
            if (*(long*)( lVar4 + 0x10 ) != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar4 + 0x10 ));
            }

         }
 else {
            local_50 = strlen(pcVar3);
            local_58 = pcVar3;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      cVar5 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar5 != '\0') goto LAB_00104feb;
   }

   cVar5 = String::operator ==(param_1, "RefCounted");
   if (cVar5 == '\0') {
      for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
         lVar4 = *(long*)( lVar2 + 0x20 );
         if (lVar4 == 0) {
            local_60 = 0;
         }
 else {
            pcVar3 = *(char**)( lVar4 + 8 );
            local_60 = 0;
            if (pcVar3 == (char*)0x0) {
               if (*(long*)( lVar4 + 0x10 ) != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar4 + 0x10 ));
               }

            }
 else {
               local_50 = strlen(pcVar3);
               local_58 = pcVar3;
               String::parse_latin1((StrRange*)&local_60);
            }

         }

         cVar5 = String::operator ==(param_1, (String*)&local_60);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (cVar5 != '\0') goto LAB_00104feb;
      }

      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar6 = String::operator ==(param_1, "Object");
         return uVar6;
      }

   }
 else {
      LAB_00104feb:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* AudioSamplePlayback::is_class(String const&) const */undefined8 AudioSamplePlayback::is_class(AudioSamplePlayback *this, String *param_1) {
   long *plVar1;
   long lVar2;
   char *__s;
   long lVar3;
   char cVar4;
   undefined8 uVar5;
   long in_FS_OFFSET;
   long local_60;
   char *local_58;
   size_t local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
      lVar3 = *(long*)( lVar2 + 0x20 );
      if (lVar3 == 0) {
         local_60 = 0;
      }
 else {
         __s = *(char**)( lVar3 + 8 );
         local_60 = 0;
         if (__s == (char*)0x0) {
            if (*(long*)( lVar3 + 0x10 ) != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar3 + 0x10 ));
            }

         }
 else {
            local_50 = strlen(__s);
            local_58 = __s;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      cVar4 = String::operator ==(param_1, (String*)&local_60);
      lVar3 = local_60;
      if (local_60 != 0) {
         LOCK();
         plVar1 = (long*)( local_60 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_60 = 0;
            Memory::free_static((void*)( lVar3 + -0x10 ), false);
         }

      }

      if (cVar4 != '\0') goto LAB_001051eb;
   }

   cVar4 = String::operator ==(param_1, "AudioSamplePlayback");
   if (cVar4 == '\0') {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar5 = RefCounted::is_class((RefCounted*)this, param_1);
         return uVar5;
      }

   }
 else {
      LAB_001051eb:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* AudioStreamPlaybackPolyphonic::is_class(String const&) const */undefined8 AudioStreamPlaybackPolyphonic::is_class(AudioStreamPlaybackPolyphonic *this, String *param_1) {
   long *plVar1;
   long lVar2;
   char *pcVar3;
   long lVar4;
   char cVar5;
   undefined8 uVar6;
   long in_FS_OFFSET;
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
            if (*(long*)( lVar4 + 0x10 ) != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar4 + 0x10 ));
            }

         }
 else {
            local_50 = strlen(pcVar3);
            local_58 = pcVar3;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      cVar5 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar5 != '\0') goto LAB_0010535b;
   }

   cVar5 = String::operator ==(param_1, "AudioStreamPlaybackPolyphonic");
   if (cVar5 == '\0') {
      for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
         lVar4 = *(long*)( lVar2 + 0x20 );
         if (lVar4 == 0) {
            local_60 = 0;
         }
 else {
            pcVar3 = *(char**)( lVar4 + 8 );
            local_60 = 0;
            if (pcVar3 == (char*)0x0) {
               if (*(long*)( lVar4 + 0x10 ) != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar4 + 0x10 ));
               }

            }
 else {
               local_50 = strlen(pcVar3);
               local_58 = pcVar3;
               String::parse_latin1((StrRange*)&local_60);
            }

         }

         cVar5 = String::operator ==(param_1, (String*)&local_60);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (cVar5 != '\0') goto LAB_0010535b;
      }

      cVar5 = String::operator ==(param_1, "AudioStreamPlayback");
      if (cVar5 == '\0') {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar6 = RefCounted::is_class((RefCounted*)this, param_1);
            return uVar6;
         }

         goto LAB_00105465;
      }

   }

   LAB_0010535b:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_00105465:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* RefCounted::_initialize_classv() */void RefCounted::_initialize_classv(void) {
   long in_FS_OFFSET;
   undefined8 local_60;
   undefined8 local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (initialize_class() == '\0') {
      Object::initialize_class();
      local_58 = 0;
      local_40 = 6;
      local_48 = "Object";
      String::parse_latin1((StrRange*)&local_58);
      StringName::StringName((StringName*)&local_50, (String*)&local_58, false);
      local_48 = "RefCounted";
      local_60 = 0;
      local_40 = 10;
      String::parse_latin1((StrRange*)&local_60);
      StringName::StringName((StringName*)&local_48, (String*)&local_60, false);
      ClassDB::_add_class2((StringName*)&local_48, (StringName*)&local_50);
      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
      if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      if ((code*)_GLOBAL_OFFSET_TABLE_ != Object::_bind_methods) {
         RefCounted::_bind_methods();
      }

      initialize_class()::initialized =
      '\x01';
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* AudioSamplePlayback::_initialize_classv() */void AudioSamplePlayback::_initialize_classv(void) {
   long in_FS_OFFSET;
   undefined8 local_60;
   undefined8 local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (initialize_class() == '\0') {
      if (RefCounted::initialize_class() == '\0') {
         Object::initialize_class();
         local_58 = 0;
         local_40 = 6;
         local_48 = "Object";
         String::parse_latin1((StrRange*)&local_58);
         StringName::StringName((StringName*)&local_50, (String*)&local_58, false);
         local_48 = "RefCounted";
         local_60 = 0;
         local_40 = 10;
         String::parse_latin1((StrRange*)&local_60);
         StringName::StringName((StringName*)&local_48, (String*)&local_60, false);
         ClassDB::_add_class2((StringName*)&local_48, (StringName*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         if ((code*)_GLOBAL_OFFSET_TABLE_ != Object::_bind_methods) {
            RefCounted::_bind_methods();
         }

         RefCounted::initialize_class()::initialized =
         '\x01';
      }

      local_48 = "RefCounted";
      local_58 = 0;
      local_40 = 10;
      String::parse_latin1((StrRange*)&local_58);
      StringName::StringName((StringName*)&local_50, (String*)&local_58, false);
      local_48 = "AudioSamplePlayback";
      local_60 = 0;
      local_40 = 0x13;
      String::parse_latin1((StrRange*)&local_60);
      StringName::StringName((StringName*)&local_48, (String*)&local_60, false);
      ClassDB::_add_class2((StringName*)&local_48, (StringName*)&local_50);
      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
      if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      initialize_class()::initialized =
      '\x01';
   }

   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* MethodBindTRC<int>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<int>::_gen_argument_type_info(int param_1) {
   undefined4 in_register_0000003c;
   undefined4 *puVar1;
   long in_FS_OFFSET;
   undefined8 local_60;
   long local_58;
   long local_50;
   undefined *local_48;
   undefined8 local_40;
   long local_30;
   puVar1 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_58 = 0;
   local_48 = &_LC4;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   local_60 = 0;
   *puVar1 = 2;
   puVar1[6] = 0;
   *(undefined8*)( puVar1 + 8 ) = 0;
   *(undefined1(*) [16])( puVar1 + 2 ) = (undefined1[16])0x0;
   if (local_58 == 0) {
      puVar1[10] = 6;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar1 + 8 ), (CowData*)&local_58);
      puVar1[10] = 6;
      if (puVar1[6] == 0x11) {
         StringName::StringName((StringName*)&local_48, (String*)( puVar1 + 8 ), false);
         if (*(undefined**)( puVar1 + 4 ) == local_48) {
            if (( StringName::configured != '\0' ) && ( local_48 != (undefined*)0x0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            *(undefined**)( puVar1 + 4 ) = local_48;
         }

         goto LAB_001058e5;
      }

   }

   StringName::operator =((StringName*)( puVar1 + 4 ), (StringName*)&local_50);
   LAB_001058e5:CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
      StringName::unref();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* AudioStreamPolyphonic::is_class(String const&) const */undefined8 AudioStreamPolyphonic::is_class(AudioStreamPolyphonic *this, String *param_1) {
   long *plVar1;
   long lVar2;
   char *pcVar3;
   long lVar4;
   char cVar5;
   undefined8 uVar6;
   long in_FS_OFFSET;
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
            if (*(long*)( lVar4 + 0x10 ) != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar4 + 0x10 ));
            }

         }
 else {
            local_50 = strlen(pcVar3);
            local_58 = pcVar3;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      cVar5 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar5 != '\0') goto LAB_00105a5b;
   }

   cVar5 = String::operator ==(param_1, "AudioStreamPolyphonic");
   if (cVar5 == '\0') {
      for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
         lVar4 = *(long*)( lVar2 + 0x20 );
         if (lVar4 == 0) {
            local_60 = 0;
         }
 else {
            pcVar3 = *(char**)( lVar4 + 8 );
            local_60 = 0;
            if (pcVar3 == (char*)0x0) {
               if (*(long*)( lVar4 + 0x10 ) != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar4 + 0x10 ));
               }

            }
 else {
               local_50 = strlen(pcVar3);
               local_58 = pcVar3;
               String::parse_latin1((StrRange*)&local_60);
            }

         }

         cVar5 = String::operator ==(param_1, (String*)&local_60);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (cVar5 != '\0') goto LAB_00105a5b;
      }

      cVar5 = String::operator ==(param_1, "AudioStream");
      if (cVar5 == '\0') {
         for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
            lVar4 = *(long*)( lVar2 + 0x20 );
            if (lVar4 == 0) {
               local_58 = (char*)0x0;
            }
 else {
               local_58 = (char*)0x0;
               if (*(char**)( lVar4 + 8 ) == (char*)0x0) {
                  if (*(long*)( lVar4 + 0x10 ) != 0) {
                     CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)( lVar4 + 0x10 ));
                  }

               }
 else {
                  String::parse_latin1((String*)&local_58, *(char**)( lVar4 + 8 ));
               }

            }

            cVar5 = String::operator ==(param_1, (String*)&local_58);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
            if (cVar5 != '\0') goto LAB_00105a5b;
         }

         cVar5 = String::operator ==(param_1, "Resource");
         if (cVar5 == '\0') {
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               uVar6 = RefCounted::is_class((RefCounted*)this, param_1);
               return uVar6;
            }

            goto LAB_00105c0d;
         }

      }

   }

   LAB_00105a5b:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_00105c0d:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* PropertyListHelper::~PropertyListHelper() */void PropertyListHelper::~PropertyListHelper(PropertyListHelper *this) {
   uint uVar1;
   long lVar2;
   void *pvVar3;
   pvVar3 = *(void**)( this + 0x18 );
   if (pvVar3 != (void*)0x0) {
      if (*(int*)( this + 0x3c ) != 0) {
         uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x38 ) * 4 );
         if (uVar1 == 0) {
            *(undefined4*)( this + 0x3c ) = 0;
            *(undefined1(*) [16])( this + 0x28 ) = (undefined1[16])0x0;
         }
 else {
            lVar2 = 0;
            do {
               if (*(int*)( *(long*)( this + 0x20 ) + lVar2 ) != 0) {
                  pvVar3 = *(void**)( (long)pvVar3 + lVar2 * 2 );
                  *(int*)( *(long*)( this + 0x20 ) + lVar2 ) = 0;
                  if (Variant::needs_deinit[*(int*)( (long)pvVar3 + 0x48 )] != '\0') {
                     Variant::_clear_internal();
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar3 + 0x38 ));
                  if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar3 + 0x28 ) != 0 )) {
                     StringName::unref();
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar3 + 0x20 ));
                  CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar3 + 0x10 ));
                  Memory::free_static(pvVar3, false);
                  pvVar3 = *(void**)( this + 0x18 );
                  *(undefined8*)( (long)pvVar3 + lVar2 * 2 ) = 0;
               }

               lVar2 = lVar2 + 4;
            }
 while ( lVar2 != (ulong)uVar1 << 2 );
            *(undefined4*)( this + 0x3c ) = 0;
            *(undefined1(*) [16])( this + 0x28 ) = (undefined1[16])0x0;
            if (pvVar3 == (void*)0x0) goto LAB_00105d0f;
         }

      }

      Memory::free_static(pvVar3, false);
      Memory::free_static(*(void**)( this + 0x20 ), false);
   }

   LAB_00105d0f:CowData<char32_t>::_unref((CowData<char32_t>*)this);
   return;
}
/* RefCounted::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void RefCounted::_get_property_listv(List *param_1, bool param_2) {
   undefined7 in_register_00000031;
   long in_FS_OFFSET;
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
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_78 = "RefCounted";
   local_88 = 0;
   local_90 = 0;
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
   if (local_90 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 == 0x11) {
         StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
         if (local_68 == local_80) {
            if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            local_68 = local_80;
         }

         goto LAB_00105ecc;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_00105ecc:List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)CONCAT71(in_register_00000031, param_2), (PropertyInfo*)&local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_78, "RefCounted", false);
   ClassDB::get_property_list((StringName*)&local_78, (List*)CONCAT71(in_register_00000031, param_2), true, (Object*)param_1);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* AudioSamplePlayback::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void AudioSamplePlayback::_get_property_listv(AudioSamplePlayback *this, List *param_1, bool param_2) {
   long in_FS_OFFSET;
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
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_2) {
      RefCounted::_get_property_listv((List*)this, SUB81(param_1, 0));
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "AudioSamplePlayback";
   local_70 = 0x13;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "AudioSamplePlayback";
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
   if (local_90 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 == 0x11) {
         StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
         if (local_68 == local_80) {
            if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            local_68 = local_80;
         }

         goto LAB_00106131;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_00106131:local_b0 = (CowData<char32_t>*)&local_58;
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)param_1, (PropertyInfo*)&local_78);
   CowData<char32_t>::_unref(local_b0);
   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_78, "AudioSamplePlayback", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         RefCounted::_get_property_listv((List*)this, SUB81(param_1, 0));
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* AudioStreamPlayback::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void AudioStreamPlayback::_get_property_listv(AudioStreamPlayback *this, List *param_1, bool param_2) {
   long in_FS_OFFSET;
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
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_2) {
      RefCounted::_get_property_listv((List*)this, SUB81(param_1, 0));
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "AudioStreamPlayback";
   local_70 = 0x13;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "AudioStreamPlayback";
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
   if (local_90 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 == 0x11) {
         StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
         if (local_68 == local_80) {
            if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            local_68 = local_80;
         }

         goto LAB_001063e1;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_001063e1:local_b0 = (CowData<char32_t>*)&local_58;
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)param_1, (PropertyInfo*)&local_78);
   CowData<char32_t>::_unref(local_b0);
   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_78, "AudioStreamPlayback", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         RefCounted::_get_property_listv((List*)this, SUB81(param_1, 0));
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* AudioStreamPlaybackPolyphonic::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool)
   const */void AudioStreamPlaybackPolyphonic::_get_property_listv(AudioStreamPlaybackPolyphonic *this, List *param_1, bool param_2) {
   long in_FS_OFFSET;
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
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_2) {
      AudioStreamPlayback::_get_property_listv((AudioStreamPlayback*)this, param_1, false);
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "AudioStreamPlaybackPolyphonic";
   local_70 = 0x1d;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "AudioStreamPlaybackPolyphonic";
   local_98 = 0;
   local_70 = 0x1d;
   String::parse_latin1((StrRange*)&local_98);
   local_78 = (char*)( (ulong)local_78 & 0xffffffff00000000 );
   local_70 = 0;
   if (local_98 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_98);
   }

   local_68 = 0;
   local_60 = 0;
   local_58 = 0;
   if (local_90 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 == 0x11) {
         StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
         if (local_68 == local_80) {
            if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            local_68 = local_80;
         }

         goto LAB_00106691;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_00106691:local_b0 = (CowData<char32_t>*)&local_58;
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)param_1, (PropertyInfo*)&local_78);
   CowData<char32_t>::_unref(local_b0);
   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_78, "AudioStreamPlaybackPolyphonic", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         AudioStreamPlayback::_get_property_listv((AudioStreamPlayback*)this, param_1, true);
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Resource::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void Resource::_get_property_listv(Resource *this, List *param_1, bool param_2) {
   long in_FS_OFFSET;
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
   if (local_90 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 == 0x11) {
         StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
         if (local_68 == local_80) {
            if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            local_68 = local_80;
         }

         goto LAB_00106941;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_00106941:local_b0 = (CowData<char32_t>*)&local_58;
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)param_1, (PropertyInfo*)&local_78);
   CowData<char32_t>::_unref(local_b0);
   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
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

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* AudioStream::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void AudioStream::_get_property_listv(AudioStream *this, List *param_1, bool param_2) {
   long in_FS_OFFSET;
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
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_2) {
      Resource::_get_property_listv((Resource*)this, param_1, false);
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "AudioStream";
   local_70 = 0xb;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "AudioStream";
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
   if (local_90 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 == 0x11) {
         StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
         if (local_68 == local_80) {
            if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            local_68 = local_80;
         }

         goto LAB_00106bf1;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_00106bf1:local_b0 = (CowData<char32_t>*)&local_58;
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)param_1, (PropertyInfo*)&local_78);
   CowData<char32_t>::_unref(local_b0);
   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_78, "AudioStream", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         Resource::_get_property_listv((Resource*)this, param_1, true);
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* AudioStreamPolyphonic::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void AudioStreamPolyphonic::_get_property_listv(AudioStreamPolyphonic *this, List *param_1, bool param_2) {
   long in_FS_OFFSET;
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
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_2) {
      AudioStream::_get_property_listv((AudioStream*)this, param_1, false);
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "AudioStreamPolyphonic";
   local_70 = 0x15;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "AudioStreamPolyphonic";
   local_98 = 0;
   local_70 = 0x15;
   String::parse_latin1((StrRange*)&local_98);
   local_78 = (char*)( (ulong)local_78 & 0xffffffff00000000 );
   local_70 = 0;
   if (local_98 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_98);
   }

   local_68 = 0;
   local_60 = 0;
   local_58 = 0;
   if (local_90 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 == 0x11) {
         StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
         if (local_68 == local_80) {
            if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            local_68 = local_80;
         }

         goto LAB_00106ea1;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_00106ea1:local_b0 = (CowData<char32_t>*)&local_58;
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)param_1, (PropertyInfo*)&local_78);
   CowData<char32_t>::_unref(local_b0);
   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_78, "AudioStreamPolyphonic", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         AudioStream::_get_property_listv((AudioStream*)this, param_1, true);
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<bool, long>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<bool,long>::_gen_argument_type_info(int param_1) {
   undefined1 auVar1[16];
   undefined8 uVar2;
   undefined8 uVar3;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar4;
   long in_FS_OFFSET;
   undefined8 local_a8;
   long local_a0;
   long local_98;
   undefined1 local_90[16];
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
   puVar4 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_98 = 0;
   if (in_EDX == 0) {
      local_80 = 0;
      local_70 = 6;
      local_78 = 0;
      local_90._0_8_ = 0;
      local_90._8_8_ = 0;
      GetTypeInfo<long,void>::get_class_info((GetTypeInfo<long,void>*)&local_68);
      local_98 = CONCAT44(local_98._4_4_, local_68._0_4_);
      if (local_90._0_8_ != local_60) {
         CowData<char32_t>::_unref((CowData<char32_t>*)local_90);
         local_90._0_8_ = local_60;
         local_60 = 0;
      }

      if (local_90._8_8_ != local_58) {
         StringName::unref();
         local_90._8_8_ = local_58;
         local_58 = 0;
      }

      local_80 = CONCAT44(local_80._4_4_, local_50);
      if (local_78 != local_48) {
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
         local_78 = local_48;
         local_48 = 0;
      }

      local_70 = local_40;
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_68);
      uVar3 = local_90._8_8_;
      uVar2 = local_90._0_8_;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = local_90._8_8_;
      local_90 = auVar1 << 0x40;
      *puVar4 = (undefined4)local_98;
      *(undefined8*)( puVar4 + 2 ) = uVar2;
      *(undefined8*)( puVar4 + 4 ) = uVar3;
      puVar4[6] = (undefined4)local_80;
      *(long*)( puVar4 + 8 ) = local_78;
      puVar4[10] = local_70;
      CowData<char32_t>::_unref((CowData<char32_t>*)local_90);
      goto LAB_00107210;
   }

   local_a0 = 0;
   local_60 = 0;
   local_68 = &_LC4;
   String::parse_latin1((StrRange*)&local_a0);
   local_a8 = 0;
   *puVar4 = 1;
   puVar4[6] = 0;
   *(undefined8*)( puVar4 + 8 ) = 0;
   *(undefined1(*) [16])( puVar4 + 2 ) = (undefined1[16])0x0;
   if (local_a0 == 0) {
      puVar4[10] = 6;
      LAB_001071d7:StringName::operator =((StringName*)( puVar4 + 4 ), (StringName*)&local_98);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar4 + 8 ), (CowData*)&local_a0);
      puVar4[10] = 6;
      if (puVar4[6] != 0x11) goto LAB_001071d7;
      StringName::StringName((StringName*)&local_68, (String*)( puVar4 + 8 ), false);
      if (*(undefined**)( puVar4 + 4 ) == local_68) {
         if (( StringName::configured != '\0' ) && ( local_68 != (undefined*)0x0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         *(undefined**)( puVar4 + 4 ) = local_68;
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
   if (( StringName::configured != '\0' ) && ( local_98 != 0 )) {
      StringName::unref();
   }

   LAB_00107210:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
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
   if (in_EDX != 0) goto LAB_001072a9;
   local_78 = 0;
   local_68 = &_LC4;
   local_80 = 0;
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
      LAB_001073a5:local_40 = 6;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_001073a5;
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
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   if (( StringName::configured != '\0' ) && ( local_60._8_8_ != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)local_60);
   LAB_001072a9:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return puVar5;
}
/* MethodBindT<long>::_gen_argument_type_info(int) const */undefined4 *MethodBindT<long>::_gen_argument_type_info(int param_1) {
   undefined1 auVar1[16];
   undefined1 auVar2[16];
   undefined8 uVar3;
   long lVar4;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar5;
   long in_FS_OFFSET;
   long local_88;
   long local_80;
   undefined8 local_78;
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
   if (in_EDX != 0) goto LAB_00107519;
   local_88 = 0;
   local_68 = &_LC4;
   local_80 = 0;
   auVar1._8_8_ = 0;
   auVar1._0_8_ = local_60._8_8_;
   local_60 = auVar1 << 0x40;
   String::parse_latin1((StrRange*)&local_80);
   local_78 = 0;
   local_68 = (undefined*)CONCAT44(local_68._4_4_, 2);
   local_50 = 0;
   local_48 = 0;
   local_60 = (undefined1[16])0x0;
   if (local_80 == 0) {
      LAB_00107615:local_40 = 6;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_00107615;
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

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
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
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   if (( StringName::configured != '\0' ) && ( local_60._8_8_ != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)local_60);
   LAB_00107519:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return puVar5;
}
/* MethodBind* create_method_bind<AudioStreamPlaybackPolyphonic, long, Ref<AudioStream> const&,
   float, float, float>(long (AudioStreamPlaybackPolyphonic::*)(Ref<AudioStream> const&, float,
   float, float)) */MethodBind *create_method_bind<AudioStreamPlaybackPolyphonic,long,Ref<AudioStream>const&,float,float,float>(_func_long_Ref_ptr_float_float_float *param_1) {
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   undefined8 local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_long_Ref_ptr_float_float_float**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0010dfd8;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 4;
   local_40 = 0;
   local_38 = "AudioStreamPlaybackPolyphonic";
   local_30 = 0x1d;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_40);
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind* create_method_bind<AudioStreamPolyphonic, int>(void (AudioStreamPolyphonic::*)(int))
    */MethodBind *create_method_bind<AudioStreamPolyphonic,int>(_func_void_int *param_1) {
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   undefined8 local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_void_int**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0010e038;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "AudioStreamPolyphonic";
   local_30 = 0x15;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_40);
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind* create_method_bind<AudioStreamPolyphonic, int>(int (AudioStreamPolyphonic::*)()
   const) */MethodBind *create_method_bind<AudioStreamPolyphonic,int>(_func_int *param_1) {
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   undefined8 local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_int**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0010e098;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "AudioStreamPolyphonic";
   local_30 = 0x15;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_40);
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* AudioStreamPolyphonic::_initialize_classv() */void AudioStreamPolyphonic::_initialize_classv(void) {
   long in_FS_OFFSET;
   undefined8 local_70;
   long local_68;
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (initialize_class() == '\0') {
      if (AudioStream::initialize_class() == '\0') {
         if (Resource::initialize_class() == '\0') {
            if (RefCounted::initialize_class() == '\0') {
               Object::initialize_class();
               local_60 = 0;
               String::parse_latin1((String*)&local_60, "Object");
               StringName::StringName((StringName*)&local_58, (String*)&local_60, false);
               local_70 = 0;
               String::parse_latin1((String*)&local_70, "RefCounted");
               StringName::StringName((StringName*)&local_68, (String*)&local_70, false);
               ClassDB::_add_class2((StringName*)&local_68, (StringName*)&local_58);
               if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
                  StringName::unref();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
               if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
                  StringName::unref();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
               if ((code*)PTR__bind_methods_00112010 != RefCounted::_bind_methods) {
                  RefCounted::_bind_methods();
               }

               RefCounted::initialize_class()::initialized =
               '\x01';
            }

            local_68 = 0;
            local_58 = "RefCounted";
            local_50 = 10;
            String::parse_latin1((StrRange*)&local_68);
            StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
            local_58 = "Resource";
            local_70 = 0;
            local_50 = 8;
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
            Resource::_bind_methods();
            Resource::initialize_class()::initialized =
            '\x01';
         }

         local_58 = "Resource";
         local_68 = 0;
         local_50 = 8;
         String::parse_latin1((StrRange*)&local_68);
         StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
         local_58 = "AudioStream";
         local_70 = 0;
         local_50 = 0xb;
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
         if ((code*)PTR__bind_methods_00112008 != Resource::_bind_methods) {
            AudioStream::_bind_methods();
         }

         AudioStream::initialize_class()::initialized =
         '\x01';
      }

      local_58 = "AudioStream";
      local_68 = 0;
      local_50 = 0xb;
      String::parse_latin1((StrRange*)&local_68);
      StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
      local_58 = "AudioStreamPolyphonic";
      local_70 = 0;
      local_50 = 0x15;
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
      initialize_class()::initialized =
      '\x01';
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Ref<AudioSamplePlayback>::unref() */void Ref<AudioSamplePlayback>::unref(Ref<AudioSamplePlayback> *this) {
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
/* MethodBind* create_method_bind<AudioStreamPlaybackPolyphonic, long, Ref<AudioStream> const&,
   float, float, float, AudioServer::PlaybackType, StringName const&>(long
   (AudioStreamPlaybackPolyphonic::*)(Ref<AudioStream> const&, float, float, float,
   AudioServer::PlaybackType, StringName const&)) */MethodBind *create_method_bind<AudioStreamPlaybackPolyphonic,long,Ref<AudioStream>const&,float,float,float,AudioServer::PlaybackType,StringName_const&>(_func_long_Ref_ptr_float_float_float_PlaybackType_StringName_ptr *param_1) {
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   undefined8 local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_long_Ref_ptr_float_float_float_PlaybackType_StringName_ptr**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0010e0f8;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 6;
   local_40 = 0;
   local_38 = "AudioStreamPlaybackPolyphonic";
   local_30 = 0x1d;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_40);
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind* create_method_bind<AudioStreamPlaybackPolyphonic, long, float>(void
   (AudioStreamPlaybackPolyphonic::*)(long, float)) */MethodBind *create_method_bind<AudioStreamPlaybackPolyphonic,long,float>(_func_void_long_float *param_1) {
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   undefined8 local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_void_long_float**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0010e158;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 2;
   local_40 = 0;
   local_38 = "AudioStreamPlaybackPolyphonic";
   local_30 = 0x1d;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_40);
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind* create_method_bind<AudioStreamPlaybackPolyphonic, bool, long>(bool
   (AudioStreamPlaybackPolyphonic::*)(long) const) */MethodBind *create_method_bind<AudioStreamPlaybackPolyphonic,bool,long>(_func_bool_long *param_1) {
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   undefined8 local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_bool_long**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0010e1b8;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "AudioStreamPlaybackPolyphonic";
   local_30 = 0x1d;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_40);
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind* create_method_bind<AudioStreamPlaybackPolyphonic, long>(void
   (AudioStreamPlaybackPolyphonic::*)(long)) */MethodBind *create_method_bind<AudioStreamPlaybackPolyphonic,long>(_func_void_long *param_1) {
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   undefined8 local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_void_long**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0010e218;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "AudioStreamPlaybackPolyphonic";
   local_30 = 0x1d;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_40);
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* AudioStreamPlaybackPolyphonic::_initialize_classv() */void AudioStreamPlaybackPolyphonic::_initialize_classv(void) {
   long in_FS_OFFSET;
   undefined8 local_70;
   long local_68;
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (initialize_class() == '\0') {
      if (AudioStreamPlayback::initialize_class() == '\0') {
         if (RefCounted::initialize_class() == '\0') {
            Object::initialize_class();
            local_60 = 0;
            String::parse_latin1((String*)&local_60, "Object");
            StringName::StringName((StringName*)&local_58, (String*)&local_60, false);
            local_70 = 0;
            String::parse_latin1((String*)&local_70, "RefCounted");
            StringName::StringName((StringName*)&local_68, (String*)&local_70, false);
            ClassDB::_add_class2((StringName*)&local_68, (StringName*)&local_58);
            if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
               StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
            if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
               StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
            if ((code*)PTR__bind_methods_00112010 != RefCounted::_bind_methods) {
               RefCounted::_bind_methods();
            }

            RefCounted::initialize_class()::initialized =
            '\x01';
         }

         local_58 = "RefCounted";
         local_68 = 0;
         local_50 = 10;
         String::parse_latin1((StrRange*)&local_68);
         StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
         local_58 = "AudioStreamPlayback";
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
         if ((code*)PTR__bind_methods_00112018 != RefCounted::_bind_methods) {
            AudioStreamPlayback::_bind_methods();
         }

         AudioStreamPlayback::initialize_class()::initialized =
         '\x01';
      }

      local_58 = "AudioStreamPlayback";
      local_68 = 0;
      local_50 = 0x13;
      String::parse_latin1((StrRange*)&local_68);
      StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
      local_58 = "AudioStreamPlaybackPolyphonic";
      local_70 = 0;
      local_50 = 0x1d;
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
/* WARNING: Removing unreachable block (ram,0x00108828) *//* String vformat<StringName>(String const&, StringName const) */undefined8 *vformat<StringName>(undefined8 *param_1, bool *param_2, StringName *param_3) {
   char cVar1;
   Variant *this;
   int iVar2;
   long in_FS_OFFSET;
   Array local_c0[8];
   undefined8 local_b8[8];
   int local_78[6];
   undefined8 local_60;
   undefined1 local_58[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant((Variant*)local_78, param_3);
   local_60 = 0;
   local_58 = (undefined1[16])0x0;
   Array::Array(local_c0);
   iVar2 = (int)local_c0;
   Array::resize(iVar2);
   this(Variant * Array::operator [](iVar2));
   Variant::operator =(this, (Variant*)local_78);
   String::sprintf((Array*)local_b8, param_2);
   *param_1 = local_b8[0];
   local_b8[0] = 0;
   CowData<char32_t>::_unref((CowData<char32_t>*)local_b8);
   Array::~Array(local_c0);
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
/* MethodBindT<long>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindT<long>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
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

         goto LAB_00108c61;
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
      /* WARNING: Could not recover jumptable at 0x00108aed. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(undefined8*)( *(long*)param_3 + 8 ));
      return;
   }

   LAB_00108c61:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<long>::ptrcall(Object*, void const**, void*) const */void MethodBindT<long>::ptrcall(Object *param_1, void **param_2, void *param_3) {
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

         goto LAB_00108e41;
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
      /* WARNING: Could not recover jumptable at 0x00108ccc. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), **param_3);
      return;
   }

   LAB_00108e41:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindTRC<bool, long>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTRC<bool,long>::validated_call(MethodBindTRC<bool,long> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   Variant VVar1;
   code *pcVar2;
   long *plVar3;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
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
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x273, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00108e99;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar2 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar2 & 1 ) != 0) {
      pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   VVar1 = ( Variant )(*pcVar2)(param_1 + *(long*)( this + 0x60 ), *(undefined8*)( *param_2 + 8 ));
   param_3[8] = VVar1;
   LAB_00108e99:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<bool, long>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<bool,long>::ptrcall(MethodBindTRC<bool,long> *this, Object *param_1, void **param_2, void *param_3) {
   undefined1 uVar1;
   code *pcVar2;
   long *plVar3;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
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
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x27e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00109078;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar2 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar2 & 1 ) != 0) {
      pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   /* WARNING: Load size is inaccurate */
   uVar1 = ( *pcVar2 )(param_1 + *(long*)( this + 0x60 ), **param_2);
   *(undefined1*)param_3 = uVar1;
   LAB_00109078:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<long, float>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindT<long,float>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
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

         goto LAB_001093f1;
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
      auVar2._0_4_ = (float)*(double*)( *(long*)( param_3 + 8 ) + 8 );
      /* WARNING: Could not recover jumptable at 0x0010927a. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )(auVar2._0_8_, (long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(undefined8*)( *(long*)param_3 + 8 ));
      return;
   }

   LAB_001093f1:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<long, float>::ptrcall(Object*, void const**, void*) const */void MethodBindT<long,float>::ptrcall(Object *param_1, void **param_2, void *param_3) {
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

         goto LAB_001095e1;
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
      auVar2._4_12_ = SUB1612((undefined1[16])0x0, 4);
      auVar2._0_4_ = (float)**(double**)( (long)param_3 + 8 );
      /* WARNING: Could not recover jumptable at 0x00109468. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )(auVar2._0_8_, (long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), **param_3);
      return;
   }

   LAB_001095e1:/* WARNING: Subroutine does not return */__stack_chk_fail();
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
         _err_print_error(&_LC81, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_00109740;
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

   LAB_00109740:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
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

         goto LAB_00109954;
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
   LAB_00109954:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
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

         goto LAB_00109b03;
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
   LAB_00109b03:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
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

         goto LAB_00109e41;
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
      /* WARNING: Could not recover jumptable at 0x00109ccc. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(undefined4*)( *(long*)param_3 + 8 ));
      return;
   }

   LAB_00109e41:/* WARNING: Subroutine does not return */__stack_chk_fail();
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

         goto LAB_0010a021;
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
      /* WARNING: Could not recover jumptable at 0x00109eab. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), **param_3);
      return;
   }

   LAB_0010a021:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindTR<long, Ref<AudioStream> const&, float, float, float>::validated_call(Object*, Variant
   const**, Variant*) const */void MethodBindTR<long,Ref<AudioStream>const&,float,float,float>::validated_call(MethodBindTR<long,Ref<AudioStream>const&,float,float,float> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   double dVar1;
   long lVar2;
   Object *pOVar3;
   char cVar4;
   Object *pOVar5;
   undefined8 uVar6;
   long *plVar7;
   code *pcVar8;
   long in_FS_OFFSET;
   long local_78;
   undefined8 local_70;
   Object *local_68;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_68, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar7 = *(long**)( param_1 + 0x118 );
         if (plVar7 == (long*)0x0) {
            plVar7 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar7 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_68 == (Object*)*plVar7) {
         if (( StringName::configured != '\0' ) && ( local_68 != (Object*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_68 = (Object*)0x1089a8;
         local_70 = 0;
         local_60 = 0x35;
         String::parse_latin1((StrRange*)&local_70);
         vformat<StringName>((StringName*)&local_68, (StrRange*)&local_70, &local_78);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x213, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_68, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
            StringName::unref();
         }

         goto LAB_0010a1be;
      }

      if (( StringName::configured != '\0' ) && ( local_68 != (Object*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar8 = *(code**)( this + 0x58 );
   lVar2 = *(long*)( this + 0x60 );
   if (( (ulong)pcVar8 & 1 ) != 0) {
      pcVar8 = *(code**)( pcVar8 + *(long*)( param_1 + lVar2 ) + -1 );
   }

   dVar1 = *(double*)( param_2[1] + 8 );
   Variant::Variant((Variant*)local_58, *(Object**)( *param_2 + 0x10 ));
   local_68 = (Object*)0x0;
   pOVar5 = (Object*)Variant::get_validated_object();
   pOVar3 = local_68;
   if (pOVar5 != local_68) {
      if (pOVar5 == (Object*)0x0) {
         if (local_68 != (Object*)0x0) {
            local_68 = (Object*)0x0;
            LAB_0010a15b:cVar4 = RefCounted::unreference();
            if (cVar4 != '\0') {
               cVar4 = predelete_handler(pOVar3);
               if (cVar4 != '\0') {
                  ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
                  Memory::free_static(pOVar3, false);
               }

            }

         }

      }
 else {
         pOVar5 = (Object*)__dynamic_cast(pOVar5, &Object::typeinfo, &AudioStream::typeinfo, 0);
         if (pOVar3 != pOVar5) {
            local_68 = pOVar5;
            if (pOVar5 != (Object*)0x0) {
               cVar4 = RefCounted::reference();
               if (cVar4 == '\0') {
                  local_68 = (Object*)0x0;
               }

            }

            if (pOVar3 != (Object*)0x0) goto LAB_0010a15b;
         }

      }

   }

   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   uVar6 = ( *pcVar8 )((float)dVar1, param_1 + lVar2);
   *(undefined8*)( param_3 + 8 ) = uVar6;
   if (local_68 != (Object*)0x0) {
      cVar4 = RefCounted::unreference();
      pOVar3 = local_68;
      if (cVar4 != '\0') {
         cVar4 = predelete_handler(local_68);
         if (cVar4 != '\0') {
            ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
            Memory::free_static(pOVar3, false);
         }

      }

   }

   LAB_0010a1be:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTR<long, Ref<AudioStream> const&, float, float, float, AudioServer::PlaybackType,
   StringName const&>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTR<long,Ref<AudioStream>const&,float,float,float,AudioServer::PlaybackType,StringName_const&>::validated_call(MethodBindTR<long,Ref<AudioStream>const&,float,float,float,AudioServer::PlaybackType,StringName_const&> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   double dVar1;
   undefined4 uVar2;
   long lVar3;
   Variant *pVVar4;
   Object *pOVar5;
   char cVar6;
   Object *pOVar7;
   undefined8 uVar8;
   long *plVar9;
   code *pcVar10;
   long in_FS_OFFSET;
   long local_78;
   undefined8 local_70;
   Object *local_68;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_68, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar9 = *(long**)( param_1 + 0x118 );
         if (plVar9 == (long*)0x0) {
            plVar9 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar9 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_68 == (Object*)*plVar9) {
         if (( StringName::configured != '\0' ) && ( local_68 != (Object*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_68 = (Object*)0x1089a8;
         local_70 = 0;
         local_60 = 0x35;
         String::parse_latin1((StrRange*)&local_70);
         vformat<StringName>((StringName*)&local_68, (StrRange*)&local_70, &local_78);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x213, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_68, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
            StringName::unref();
         }

         goto LAB_0010a5e1;
      }

      if (( StringName::configured != '\0' ) && ( local_68 != (Object*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar10 = *(code**)( this + 0x58 );
   lVar3 = *(long*)( this + 0x60 );
   if (( (ulong)pcVar10 & 1 ) != 0) {
      pcVar10 = *(code**)( pcVar10 + *(long*)( param_1 + lVar3 ) + -1 );
   }

   pVVar4 = param_2[5];
   uVar2 = *(undefined4*)( param_2[4] + 8 );
   dVar1 = *(double*)( param_2[1] + 8 );
   Variant::Variant((Variant*)local_58, *(Object**)( *param_2 + 0x10 ));
   local_68 = (Object*)0x0;
   pOVar7 = (Object*)Variant::get_validated_object();
   pOVar5 = local_68;
   if (pOVar7 != local_68) {
      if (pOVar7 == (Object*)0x0) {
         if (local_68 != (Object*)0x0) {
            local_68 = (Object*)0x0;
            LAB_0010a574:cVar6 = RefCounted::unreference();
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
         pOVar7 = (Object*)__dynamic_cast(pOVar7, &Object::typeinfo, &AudioStream::typeinfo, 0);
         if (pOVar5 != pOVar7) {
            local_68 = pOVar7;
            if (pOVar7 != (Object*)0x0) {
               cVar6 = RefCounted::reference();
               if (cVar6 == '\0') {
                  local_68 = (Object*)0x0;
               }

            }

            if (pOVar5 != (Object*)0x0) goto LAB_0010a574;
         }

      }

   }

   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   uVar8 = ( *pcVar10 )((float)dVar1, param_1 + lVar3, (StringName*)&local_68, uVar2, pVVar4 + 8);
   *(undefined8*)( param_3 + 8 ) = uVar8;
   if (local_68 != (Object*)0x0) {
      cVar6 = RefCounted::unreference();
      pOVar5 = local_68;
      if (cVar6 != '\0') {
         cVar6 = predelete_handler(local_68);
         if (cVar6 != '\0') {
            ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
            Memory::free_static(pOVar5, false);
         }

      }

   }

   LAB_0010a5e1:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTR<long, Ref<AudioStream> const&, float, float, float>::ptrcall(Object*, void const**,
   void*) const */void MethodBindTR<long,Ref<AudioStream>const&,float,float,float>::ptrcall(MethodBindTR<long,Ref<AudioStream>const&,float,float,float> *this, Object *param_1, void **param_2, void *param_3) {
   long lVar1;
   Object *pOVar2;
   char cVar3;
   undefined8 uVar4;
   long *plVar5;
   code *pcVar6;
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
         plVar5 = *(long**)( param_1 + 0x118 );
         if (plVar5 == (long*)0x0) {
            plVar5 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar5 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_48 == (Object*)*plVar5) {
         if (( StringName::configured != '\0' ) && ( local_48 != (Object*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = (Object*)0x1089a8;
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x21e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_0010a92a;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (Object*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar6 = *(code**)( this + 0x58 );
   lVar1 = *(long*)( this + 0x60 );
   if (( (ulong)pcVar6 & 1 ) != 0) {
      pcVar6 = *(code**)( pcVar6 + *(long*)( param_1 + lVar1 ) + -1 );
   }

   /* WARNING: Load size is inaccurate */
   if (( (long*)*param_2 == (long*)0x0 ) || ( local_48 = **param_2 ),local_48 == (Object*)0x0) {
      LAB_0010a901:local_48 = (Object*)0x0;
   }
 else {
      cVar3 = RefCounted::init_ref();
      if (cVar3 == '\0') goto LAB_0010a901;
   }

   uVar4 = ( *pcVar6 )(param_1 + lVar1);
   *(undefined8*)param_3 = uVar4;
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

   LAB_0010a92a:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTR<long, Ref<AudioStream> const&, float, float, float, AudioServer::PlaybackType,
   StringName const&>::ptrcall(Object*, void const**, void*) const */void MethodBindTR<long,Ref<AudioStream>const&,float,float,float,AudioServer::PlaybackType,StringName_const&>::ptrcall(MethodBindTR<long,Ref<AudioStream>const&,float,float,float,AudioServer::PlaybackType,StringName_const&> *this, Object *param_1, void **param_2, void *param_3) {
   undefined4 uVar1;
   long lVar2;
   void *pvVar3;
   Object *pOVar4;
   char cVar5;
   undefined8 uVar6;
   long *plVar7;
   code *pcVar8;
   long in_FS_OFFSET;
   long local_68;
   undefined8 local_60;
   Object *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_58, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar7 = *(long**)( param_1 + 0x118 );
         if (plVar7 == (long*)0x0) {
            plVar7 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar7 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_58 == (Object*)*plVar7) {
         if (( StringName::configured != '\0' ) && ( local_58 != (Object*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_58 = (Object*)0x1089a8;
         local_60 = 0;
         local_50 = 0x35;
         String::parse_latin1((StrRange*)&local_60);
         vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x21e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_0010abd9;
      }

      if (( StringName::configured != '\0' ) && ( local_58 != (Object*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar8 = *(code**)( this + 0x58 );
   lVar2 = *(long*)( this + 0x60 );
   if (( (ulong)pcVar8 & 1 ) != 0) {
      pcVar8 = *(code**)( pcVar8 + *(long*)( param_1 + lVar2 ) + -1 );
   }

   pvVar3 = param_2[5];
   /* WARNING: Load size is inaccurate */
   uVar1 = *param_2[4];
   /* WARNING: Load size is inaccurate */
   if (( (long*)*param_2 == (long*)0x0 ) || ( local_58 = **param_2 ),local_58 == (Object*)0x0) {
      LAB_0010abad:local_58 = (Object*)0x0;
   }
 else {
      cVar5 = RefCounted::init_ref();
      if (cVar5 == '\0') goto LAB_0010abad;
   }

   uVar6 = ( *pcVar8 )(param_1 + lVar2, (StringName*)&local_58, uVar1, pvVar3);
   *(undefined8*)param_3 = uVar6;
   if (local_58 != (Object*)0x0) {
      cVar5 = RefCounted::unreference();
      pOVar4 = local_58;
      if (cVar5 != '\0') {
         cVar5 = predelete_handler(local_58);
         if (cVar5 != '\0') {
            ( **(code**)( *(long*)pOVar4 + 0x140 ) )(pOVar4);
            Memory::free_static(pOVar4, false);
         }

      }

   }

   LAB_0010abd9:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<bool, long>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindTRC<bool,long>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   code *pcVar2;
   undefined8 uVar3;
   char cVar4;
   bool bVar5;
   undefined4 uVar6;
   long lVar7;
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
   undefined8 local_60;
   char *local_58;
   undefined8 local_50;
   undefined4 local_48[2];
   undefined8 local_40;
   undefined8 uStack_38;
   long local_30;
   plVar10 = (long*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (( ( plVar10 != (long*)0x0 ) && ( plVar10[1] != 0 ) ) && ( *(char*)( plVar10[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_58, (StringName*)( param_2 + 3 ));
      if (plVar10[1] == 0) {
         plVar8 = (long*)plVar10[0x23];
         if (plVar8 == (long*)0x0) {
            plVar8 = (long*)( **(code**)( *plVar10 + 0x40 ) )(plVar10);
         }

      }
 else {
         plVar8 = (long*)( plVar10[1] + 0x20 );
      }

      if (local_58 == (char*)*plVar8) {
         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_60 = 0;
         local_50 = 0x35;
         String::parse_latin1((StrRange*)&local_60);
         vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
         _err_print_error(&_LC81, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_0010aec0;
      }

      if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar12 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D < 2) {
      pVVar11 = param_2[5];
      if (pVVar11 == (Variant*)0x0) {
         if (in_R8D != 1) goto LAB_0010af00;
         LAB_0010aef0:pVVar11 = *(Variant**)param_4;
      }
 else {
         lVar7 = *(long*)( pVVar11 + -8 );
         if ((int)lVar7 < (int)( in_R8D ^ 1 )) {
            LAB_0010af00:uVar6 = 4;
            goto LAB_0010aeb5;
         }

         if (in_R8D == 1) goto LAB_0010aef0;
         lVar9 = (long)( (int)lVar7 + -1 );
         if (lVar7 <= lVar9) {
            _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar9, lVar7, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         pVVar11 = pVVar11 + lVar9 * 0x18;
      }

      *in_R9 = 0;
      if (( (ulong)pVVar12 & 1 ) != 0) {
         pVVar12 = *(Variant**)( pVVar12 + *(long*)( (long)plVar10 + (long)pVVar1 ) + -1 );
      }

      cVar4 = Variant::can_convert_strict(*(undefined4*)pVVar11, 2);
      uVar3 = _LC82;
      if (cVar4 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = uVar3;
      }

      lVar7 = Variant::operator_cast_to_long(pVVar11);
      bVar5 = (bool)( *(code*)pVVar12 )((Variant*)( (long)plVar10 + (long)pVVar1 ), lVar7);
      Variant::Variant((Variant*)local_48, bVar5);
      if (Variant::needs_deinit[*(int*)param_1] != '\0') {
         Variant::_clear_internal();
      }

      *(undefined4*)param_1 = local_48[0];
      *(undefined8*)( param_1 + 8 ) = local_40;
      *(undefined8*)( param_1 + 0x10 ) = uStack_38;
   }
 else {
      uVar6 = 3;
      LAB_0010aeb5:*in_R9 = uVar6;
      in_R9[2] = 1;
   }

   LAB_0010aec0:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTR<long, Ref<AudioStream> const&, float, float, float>::call(Object*, Variant const**,
   int, Callable::CallError&) const */Object *MethodBindTR<long,Ref<AudioStream>const&,float,float,float>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   Variant *pVVar2;
   code *pcVar3;
   undefined8 uVar4;
   Object *pOVar5;
   char cVar6;
   undefined4 uVar7;
   long lVar8;
   Object *pOVar9;
   long lVar10;
   long *plVar11;
   uint uVar12;
   int iVar13;
   undefined4 in_register_00000014;
   long *plVar14;
   Variant *pVVar15;
   uint in_R8D;
   undefined4 *in_R9;
   Variant *pVVar16;
   long in_FS_OFFSET;
   long local_a8;
   undefined8 local_a0;
   Object *local_98;
   undefined8 local_90;
   undefined4 local_88[2];
   undefined8 local_80;
   undefined8 uStack_78;
   Variant *local_68[5];
   long local_40;
   plVar14 = (long*)CONCAT44(in_register_00000014, param_3);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (( ( plVar14 != (long*)0x0 ) && ( plVar14[1] != 0 ) ) && ( *(char*)( plVar14[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_98, (StringName*)( param_2 + 3 ));
      if (plVar14[1] == 0) {
         plVar11 = (long*)plVar14[0x23];
         if (plVar11 == (long*)0x0) {
            plVar11 = (long*)( **(code**)( *plVar14 + 0x40 ) )(plVar14);
         }

      }
 else {
         plVar11 = (long*)( plVar14[1] + 0x20 );
      }

      if (local_98 == (Object*)*plVar11) {
         if (( StringName::configured != '\0' ) && ( local_98 != (Object*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_98 = (Object*)0x1089a8;
         local_a0 = 0;
         local_90 = 0x35;
         String::parse_latin1((StrRange*)&local_a0);
         vformat<StringName>((StringName*)&local_98, (StrRange*)&local_a0, &local_a8);
         _err_print_error(&_LC81, "./core/object/method_bind.h", 0x207, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_98, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
         if (( StringName::configured != '\0' ) && ( local_a8 != 0 )) {
            StringName::unref();
         }

         goto LAB_0010b3d1;
      }

      if (( StringName::configured != '\0' ) && ( local_98 != (Object*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar16 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D < 5) {
      pVVar2 = param_2[5];
      if (pVVar2 == (Variant*)0x0) {
         iVar13 = 0;
         lVar10 = 0;
      }
 else {
         lVar10 = *(long*)( pVVar2 + -8 );
         iVar13 = (int)lVar10;
      }

      if ((int)( 4 - in_R8D ) <= iVar13) {
         lVar8 = 0;
         do {
            if ((int)lVar8 < (int)in_R8D) {
               pVVar15 = *(Variant**)( param_4 + lVar8 * 8 );
            }
 else {
               uVar12 = iVar13 + -4 + (int)lVar8;
               if (lVar10 <= (int)uVar12) {
                  _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, (long)(int)uVar12, lVar10, "p_index", "size()", "", false, true);
                  _err_flush_stdout();
                  /* WARNING: Does not return */
                  pcVar3 = (code*)invalidInstructionException();
                  ( *pcVar3 )();
               }

               pVVar15 = pVVar2 + (ulong)uVar12 * 0x18;
            }

            local_68[lVar8] = pVVar15;
            lVar8 = lVar8 + 1;
         }
 while ( lVar8 != 4 );
         *in_R9 = 0;
         if (( (ulong)pVVar16 & 1 ) != 0) {
            pVVar16 = *(Variant**)( pVVar16 + *(long*)( (long)plVar14 + (long)pVVar1 ) + -1 );
         }

         cVar6 = Variant::can_convert_strict(*(undefined4*)local_68[3], 3);
         uVar4 = _LC83;
         if (cVar6 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar4;
         }

         Variant::operator_cast_to_float(local_68[3]);
         cVar6 = Variant::can_convert_strict(*(undefined4*)local_68[2], 3);
         uVar4 = _LC84;
         if (cVar6 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar4;
         }

         Variant::operator_cast_to_float(local_68[2]);
         cVar6 = Variant::can_convert_strict(*(undefined4*)local_68[1], 3);
         uVar4 = _LC85;
         if (cVar6 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar4;
         }

         Variant::operator_cast_to_float(local_68[1]);
         cVar6 = Variant::can_convert_strict(*(undefined4*)local_68[0]);
         uVar4 = _LC86;
         if (cVar6 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar4;
         }

         local_98 = (Object*)0x0;
         pOVar9 = (Object*)Variant::get_validated_object();
         pOVar5 = local_98;
         if (pOVar9 != local_98) {
            if (pOVar9 == (Object*)0x0) {
               if (local_98 != (Object*)0x0) {
                  local_98 = (Object*)0x0;
                  LAB_0010b2fd:cVar6 = RefCounted::unreference();
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
               pOVar9 = (Object*)__dynamic_cast(pOVar9, &Object::typeinfo, &AudioStream::typeinfo, 0);
               if (pOVar5 != pOVar9) {
                  local_98 = pOVar9;
                  if (pOVar9 != (Object*)0x0) {
                     cVar6 = RefCounted::reference();
                     if (cVar6 == '\0') {
                        local_98 = (Object*)0x0;
                     }

                  }

                  if (pOVar5 != (Object*)0x0) goto LAB_0010b2fd;
               }

            }

         }

         lVar10 = ( *(code*)pVVar16 )((Variant*)( (long)plVar14 + (long)pVVar1 ), &local_98);
         Variant::Variant((Variant*)local_88, lVar10);
         if (Variant::needs_deinit[*(int*)param_1] != '\0') {
            Variant::_clear_internal();
         }

         *(undefined4*)param_1 = local_88[0];
         *(undefined8*)( param_1 + 8 ) = local_80;
         *(undefined8*)( param_1 + 0x10 ) = uStack_78;
         if (local_98 != (Object*)0x0) {
            cVar6 = RefCounted::unreference();
            pOVar5 = local_98;
            if (cVar6 != '\0') {
               cVar6 = predelete_handler(local_98);
               if (cVar6 != '\0') {
                  ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
                  Memory::free_static(pOVar5, false);
               }

            }

         }

         goto LAB_0010b3d1;
      }

      uVar7 = 4;
   }
 else {
      uVar7 = 3;
   }

   *in_R9 = uVar7;
   in_R9[2] = 4;
   LAB_0010b3d1:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTR<long, Ref<AudioStream> const&, float, float, float, AudioServer::PlaybackType,
   StringName const&>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindTR<long,Ref<AudioStream>const&,float,float,float,AudioServer::PlaybackType,StringName_const&>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   Variant *pVVar2;
   code *pcVar3;
   undefined8 uVar4;
   Object *pOVar5;
   char cVar6;
   undefined4 uVar7;
   long lVar8;
   long lVar9;
   Object *pOVar10;
   long *plVar11;
   int iVar12;
   uint uVar13;
   undefined4 in_register_00000014;
   long *plVar14;
   uint in_R8D;
   undefined4 *in_R9;
   Variant *pVVar15;
   long in_FS_OFFSET;
   long local_b8;
   long local_b0;
   Object *local_a8;
   undefined8 local_a0;
   undefined4 local_98[2];
   undefined8 local_90;
   undefined8 uStack_88;
   Variant *local_78[7];
   long local_40;
   plVar14 = (long*)CONCAT44(in_register_00000014, param_3);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (( ( plVar14 == (long*)0x0 ) || ( plVar14[1] == 0 ) ) || ( *(char*)( plVar14[1] + 0x2e ) == '\0' )) {
      LAB_0010b68e:pVVar15 = param_2[0xb];
      pVVar1 = param_2[0xc];
      if (in_R8D < 7) {
         pVVar2 = param_2[5];
         if (pVVar2 == (Variant*)0x0) {
            iVar12 = 0;
            lVar9 = 0;
         }
 else {
            lVar9 = *(long*)( pVVar2 + -8 );
            iVar12 = (int)lVar9;
         }

         if ((int)( 6 - in_R8D ) <= iVar12) {
            lVar8 = 0;
            do {
               while ((int)lVar8 < (int)in_R8D) {
                  local_78[lVar8] = *(Variant**)( param_4 + lVar8 * 8 );
                  lVar8 = lVar8 + 1;
                  if (lVar8 == 6) goto LAB_0010b710;
               }
;
               uVar13 = iVar12 + -6 + (int)lVar8;
               if (lVar9 <= (int)uVar13) {
                  _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, (long)(int)uVar13, lVar9, "p_index", "size()", "", false, true);
                  _err_flush_stdout();
                  /* WARNING: Does not return */
                  pcVar3 = (code*)invalidInstructionException();
                  ( *pcVar3 )();
               }

               local_78[lVar8] = pVVar2 + (ulong)uVar13 * 0x18;
               lVar8 = lVar8 + 1;
            }
 while ( lVar8 != 6 );
            LAB_0010b710:*in_R9 = 0;
            if (( (ulong)pVVar15 & 1 ) != 0) {
               pVVar15 = *(Variant**)( pVVar15 + *(long*)( (long)plVar14 + (long)pVVar1 ) + -1 );
            }

            cVar6 = Variant::can_convert_strict(*(undefined4*)local_78[5], 0x15);
            uVar4 = _LC87;
            if (cVar6 == '\0') {
               *in_R9 = 2;
               *(undefined8*)( in_R9 + 1 ) = uVar4;
            }

            Variant::operator_cast_to_StringName((Variant*)&local_b0);
            cVar6 = Variant::can_convert_strict(*(undefined4*)local_78[4], 2);
            uVar4 = _LC88;
            if (cVar6 == '\0') {
               *in_R9 = 2;
               *(undefined8*)( in_R9 + 1 ) = uVar4;
            }

            lVar9 = Variant::operator_cast_to_long(local_78[4]);
            cVar6 = Variant::can_convert_strict(*(undefined4*)local_78[3], 3);
            uVar4 = _LC83;
            if (cVar6 == '\0') {
               *in_R9 = 2;
               *(undefined8*)( in_R9 + 1 ) = uVar4;
            }

            Variant::operator_cast_to_float(local_78[3]);
            cVar6 = Variant::can_convert_strict(*(undefined4*)local_78[2], 3);
            uVar4 = _LC84;
            if (cVar6 == '\0') {
               *in_R9 = 2;
               *(undefined8*)( in_R9 + 1 ) = uVar4;
            }

            Variant::operator_cast_to_float(local_78[2]);
            cVar6 = Variant::can_convert_strict(*(undefined4*)local_78[1], 3);
            uVar4 = _LC85;
            if (cVar6 == '\0') {
               *in_R9 = 2;
               *(undefined8*)( in_R9 + 1 ) = uVar4;
            }

            Variant::operator_cast_to_float(local_78[1]);
            cVar6 = Variant::can_convert_strict(*(undefined4*)local_78[0]);
            uVar4 = _LC86;
            if (cVar6 == '\0') {
               *in_R9 = 2;
               *(undefined8*)( in_R9 + 1 ) = uVar4;
            }

            local_a8 = (Object*)0x0;
            pOVar10 = (Object*)Variant::get_validated_object();
            pOVar5 = local_a8;
            if (pOVar10 != local_a8) {
               if (pOVar10 == (Object*)0x0) {
                  if (local_a8 != (Object*)0x0) {
                     local_a8 = (Object*)0x0;
                     LAB_0010b8c4:cVar6 = RefCounted::unreference();
                     if (( cVar6 != '\0' ) && ( cVar6 = cVar6 != '\0' )) {
                        ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
                        Memory::free_static(pOVar5, false);
                     }

                  }

               }
 else {
                  pOVar10 = (Object*)__dynamic_cast(pOVar10, &Object::typeinfo, &AudioStream::typeinfo, 0);
                  if (pOVar5 != pOVar10) {
                     local_a8 = pOVar10;
                     if (( pOVar10 != (Object*)0x0 ) && ( cVar6 = cVar6 == '\0' )) {
                        local_a8 = (Object*)0x0;
                     }

                     if (pOVar5 != (Object*)0x0) goto LAB_0010b8c4;
                  }

               }

            }

            lVar9 = ( *(code*)pVVar15 )((Variant*)( (long)plVar14 + (long)pVVar1 ), &local_a8, (int)lVar9, (Variant*)&local_b0);
            Variant::Variant((Variant*)local_98, lVar9);
            if (Variant::needs_deinit[*(int*)param_1] != '\0') {
               Variant::_clear_internal();
            }

            *(undefined4*)param_1 = local_98[0];
            *(undefined8*)( param_1 + 8 ) = local_90;
            *(undefined8*)( param_1 + 0x10 ) = uStack_88;
            local_b8 = local_b0;
            if (( ( local_a8 != (Object*)0x0 ) && ( cVar6 = RefCounted::unreference() ),pOVar5 = local_a8,local_b8 = local_b0,cVar6 != '\0' )) {
               ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
               Memory::free_static(pOVar5, false);
               local_b8 = local_b0;
            }

            goto joined_r0x0010b946;
         }

         uVar7 = 4;
      }
 else {
         uVar7 = 3;
      }

      *in_R9 = uVar7;
      in_R9[2] = 6;
   }
 else {
      StringName::StringName((StringName*)&local_a8, (StringName*)( param_2 + 3 ));
      if (plVar14[1] == 0) {
         plVar11 = (long*)plVar14[0x23];
         if (plVar11 == (long*)0x0) {
            plVar11 = (long*)( **(code**)( *plVar14 + 0x40 ) )();
         }

      }
 else {
         plVar11 = (long*)( plVar14[1] + 0x20 );
      }

      if (local_a8 != (Object*)*plVar11) {
         if (( StringName::configured != '\0' ) && ( local_a8 != (Object*)0x0 )) {
            StringName::unref();
         }

         goto LAB_0010b68e;
      }

      if (( StringName::configured != '\0' ) && ( local_a8 != (Object*)0x0 )) {
         StringName::unref();
      }

      MethodBind::get_name();
      local_a8 = (Object*)0x1089a8;
      local_b0 = 0;
      local_a0 = 0x35;
      String::parse_latin1((StrRange*)&local_b0);
      vformat<StringName>((StringName*)&local_a8, (StrRange*)&local_b0, &local_b8);
      _err_print_error(&_LC81, "./core/object/method_bind.h", 0x207, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_a8, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_b0);
      joined_r0x0010b946:if (( StringName::configured != '\0' ) && ( local_b8 != 0 )) {
         StringName::unref();
      }

   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* void call_with_variant_args_dv<__UnexistingClass, long>(__UnexistingClass*, void
   (__UnexistingClass::*)(long), Variant const**, int, Callable::CallError&, Vector<Variant> const&)
    */void call_with_variant_args_dv<__UnexistingClass,long>(__UnexistingClass *param_1, _func_void_long *param_2, Variant **param_3, int param_4, CallError *param_5, Vector *param_6) {
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
      goto LAB_0010bd0d;
   }

   lVar1 = *(long*)( in_stack_00000008 + 8 );
   if (lVar1 == 0) {
      if (uVar8 != 1) goto LAB_0010bd70;
   }
 else {
      lVar2 = *(long*)( lVar1 + -8 );
      if ((int)lVar2 < (int)( uVar8 ^ 1 )) {
         LAB_0010bd70:uVar6 = 4;
         LAB_0010bd0d:*(undefined4*)param_6 = uVar6;
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
         goto LAB_0010bc8b;
      }

   }

   this * (Variant**)CONCAT44(in_register_0000000c, param_4);
   LAB_0010bc8b:*(undefined4*)param_6 = 0;
   if (( (ulong)param_2 & 1 ) != 0) {
      param_2 = *(_func_void_long**)( param_2 + *(long*)( param_1 + (long)param_3 ) + -1 );
   }

   cVar5 = Variant::can_convert_strict(*(undefined4*)this, 2);
   uVar4 = _LC82;
   if (cVar5 == '\0') {
      *(undefined4*)param_6 = 2;
      *(undefined8*)( param_6 + 4 ) = uVar4;
   }

   Variant::operator_cast_to_long(this);
   /* WARNING: Could not recover jumptable at 0x0010bce7. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( *param_2 )((long)( param_1 + (long)param_3 ));
   return;
}
/* MethodBindT<long>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindT<long>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
         _err_print_error(&_LC81, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         *(undefined4*)param_1 = 0;
         *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
         goto LAB_0010be66;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   call_with_variant_args_dv<__UnexistingClass,long>(p_Var2, (_func_void_long*)param_2[0xb], (Variant**)param_2[0xc], (int)param_4, in_R8, in_R9);
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   LAB_0010be66:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void call_with_variant_args_dv<__UnexistingClass, long, float>(__UnexistingClass*, void
   (__UnexistingClass::*)(long, float), Variant const**, int, Callable::CallError&, Vector<Variant>
   const&) */void call_with_variant_args_dv<__UnexistingClass,long,float>(__UnexistingClass *param_1, _func_void_long_float *param_2, Variant **param_3, int param_4, CallError *param_5, Vector *param_6) {
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
   plVar8 = (long*)CONCAT44(in_register_0000000c, param_4);
   uVar10 = (uint)param_5;
   if (2 < uVar10) {
      uVar7 = 3;
      goto LAB_0010c165;
   }

   lVar1 = *(long*)( in_stack_00000008 + 8 );
   iVar6 = 2 - uVar10;
   if (lVar1 == 0) {
      if (iVar6 == 0) {
         this(Variant * ) * plVar8;
         LAB_0010c19d:this_00 = (Variant*)plVar8[1];
         goto LAB_0010c0c5;
      }

   }
 else {
      lVar2 = *(long*)( lVar1 + -8 );
      iVar11 = (int)lVar2;
      if (iVar6 <= iVar11) {
         if (uVar10 == 0) {
            lVar9 = (long)( iVar11 + -2 );
            if (lVar2 <= lVar9) goto LAB_0010c1b8;
            this(Variant * )(lVar1 + lVar9 * 0x18);
         }
 else {
            this(Variant * ) * plVar8;
            if (uVar10 == 2) goto LAB_0010c19d;
         }

         lVar9 = (long)(int)( ( uVar10 ^ 1 ) + ( iVar11 - iVar6 ) );
         if (lVar2 <= lVar9) {
            LAB_0010c1b8:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar9, lVar2, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         this_00 = (Variant*)( lVar1 + lVar9 * 0x18 );
         LAB_0010c0c5:*(undefined4*)param_6 = 0;
         if (( (ulong)param_2 & 1 ) != 0) {
            param_2 = *(_func_void_long_float**)( param_2 + *(long*)( param_1 + (long)param_3 ) + -1 );
         }

         cVar5 = Variant::can_convert_strict(*(undefined4*)this_00, 3);
         uVar4 = _LC85;
         if (cVar5 == '\0') {
            *(undefined4*)param_6 = 2;
            *(undefined8*)( param_6 + 4 ) = uVar4;
         }

         fVar12 = Variant::operator_cast_to_float(this_00);
         cVar5 = Variant::can_convert_strict(*(undefined4*)this, 2);
         uVar4 = _LC82;
         if (cVar5 == '\0') {
            *(undefined4*)param_6 = 2;
            *(undefined8*)( param_6 + 4 ) = uVar4;
         }

         Variant::operator_cast_to_long(this);
         /* WARNING: Could not recover jumptable at 0x0010c150. Too many branches */
         /* WARNING: Treating indirect jump as call */
         ( *param_2 )((long)( param_1 + (long)param_3 ), fVar12);
         return;
      }

   }

   uVar7 = 4;
   LAB_0010c165:*(undefined4*)param_6 = uVar7;
   *(undefined4*)( param_6 + 8 ) = 2;
   return;
}
/* MethodBindT<long, float>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindT<long,float>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
         _err_print_error(&_LC81, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         *(undefined4*)param_1 = 0;
         *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
         goto LAB_0010c256;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   call_with_variant_args_dv<__UnexistingClass,long,float>(p_Var2, (_func_void_long_float*)param_2[0xb], (Variant**)param_2[0xc], (int)param_4, in_R8, in_R9);
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   LAB_0010c256:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
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
      goto LAB_0010c51d;
   }

   lVar1 = *(long*)( in_stack_00000008 + 8 );
   if (lVar1 == 0) {
      if (uVar8 != 1) goto LAB_0010c580;
   }
 else {
      lVar2 = *(long*)( lVar1 + -8 );
      if ((int)lVar2 < (int)( uVar8 ^ 1 )) {
         LAB_0010c580:uVar6 = 4;
         LAB_0010c51d:*(undefined4*)param_6 = uVar6;
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
         goto LAB_0010c49b;
      }

   }

   this * (Variant**)CONCAT44(in_register_0000000c, param_4);
   LAB_0010c49b:*(undefined4*)param_6 = 0;
   if (( (ulong)param_2 & 1 ) != 0) {
      param_2 = *(_func_void_int**)( param_2 + *(long*)( param_1 + (long)param_3 ) + -1 );
   }

   cVar5 = Variant::can_convert_strict(*(undefined4*)this, 2);
   uVar4 = _LC82;
   if (cVar5 == '\0') {
      *(undefined4*)param_6 = 2;
      *(undefined8*)( param_6 + 4 ) = uVar4;
   }

   Variant::operator_cast_to_int(this);
   /* WARNING: Could not recover jumptable at 0x0010c4f6. Too many branches */
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
         _err_print_error(&_LC81, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         *(undefined4*)param_1 = 0;
         *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
         goto LAB_0010c5e6;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   call_with_variant_args_dv<__UnexistingClass,int>(p_Var2, (_func_void_int*)param_2[0xb], (Variant**)param_2[0xc], (int)param_4, in_R8, in_R9);
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   LAB_0010c5e6:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void call_get_argument_type_info_helper<float>(int, int&, PropertyInfo&) */void call_get_argument_type_info_helper<float>(int param_1, int *param_2, PropertyInfo *param_3) {
   undefined1 auVar1[16];
   undefined1 auVar2[16];
   undefined8 uVar3;
   long lVar4;
   int iVar5;
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
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar5 = *param_2;
   if (iVar5 != param_1) goto LAB_0010c7e7;
   local_78 = 0;
   local_68 = &_LC4;
   local_80 = 0;
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
      LAB_0010c8e5:local_40 = 6;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_0010c8e5;
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

   *(undefined4*)param_3 = local_68._0_4_;
   if (*(long*)( param_3 + 8 ) != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( param_3 + 8 ));
      uVar3 = local_60._0_8_;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_60._8_8_;
      local_60 = auVar2 << 0x40;
      *(undefined8*)( param_3 + 8 ) = uVar3;
   }

   if (*(long*)( param_3 + 0x10 ) != local_60._8_8_) {
      StringName::unref();
      uVar3 = local_60._8_8_;
      local_60._8_8_ = 0;
      *(undefined8*)( param_3 + 0x10 ) = uVar3;
   }

   *(int*)( param_3 + 0x18 ) = local_50;
   if (*(long*)( param_3 + 0x20 ) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( param_3 + 0x20 ));
      lVar4 = local_48;
      local_48 = 0;
      *(long*)( param_3 + 0x20 ) = lVar4;
   }

   *(undefined4*)( param_3 + 0x28 ) = local_40;
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   if (( StringName::configured != '\0' ) && ( local_60._8_8_ != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)local_60);
   iVar5 = *param_2;
   LAB_0010c7e7:*param_2 = iVar5 + 1;
   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* MethodBindT<long, float>::_gen_argument_type_info(int) const */PropertyInfo *MethodBindT<long,float>::_gen_argument_type_info(int param_1) {
   undefined1 auVar1[16];
   undefined1 auVar2[16];
   undefined8 uVar3;
   long lVar4;
   int in_EDX;
   undefined4 in_register_0000003c;
   PropertyInfo *pPVar5;
   long in_FS_OFFSET;
   int local_8c;
   long local_88;
   long local_80;
   undefined8 local_78;
   long local_70;
   undefined *local_68;
   undefined1 local_60[16];
   int local_50;
   long local_48;
   undefined4 local_40;
   long local_30;
   pPVar5 = (PropertyInfo*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)pPVar5 = 0;
   *(undefined4*)( pPVar5 + 0x18 ) = 0;
   *(undefined8*)( pPVar5 + 0x20 ) = 0;
   *(undefined4*)( pPVar5 + 0x28 ) = 6;
   local_8c = 0;
   *(undefined1(*) [16])( pPVar5 + 8 ) = (undefined1[16])0x0;
   if (in_EDX != 0) goto LAB_0010ca65;
   local_88 = 0;
   local_68 = &_LC4;
   local_80 = 0;
   auVar1._8_8_ = 0;
   auVar1._0_8_ = local_60._8_8_;
   local_60 = auVar1 << 0x40;
   String::parse_latin1((StrRange*)&local_80);
   local_78 = 0;
   local_68 = (undefined*)CONCAT44(local_68._4_4_, 2);
   local_50 = 0;
   local_48 = 0;
   local_60 = (undefined1[16])0x0;
   if (local_80 == 0) {
      LAB_0010cb75:local_40 = 6;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_0010cb75;
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

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
      StringName::unref();
   }

   *(undefined4*)pPVar5 = local_68._0_4_;
   if (*(long*)( pPVar5 + 8 ) != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( pPVar5 + 8 ));
      uVar3 = local_60._0_8_;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_60._8_8_;
      local_60 = auVar2 << 0x40;
      *(undefined8*)( pPVar5 + 8 ) = uVar3;
   }

   if (*(long*)( pPVar5 + 0x10 ) != local_60._8_8_) {
      StringName::unref();
      uVar3 = local_60._8_8_;
      local_60._8_8_ = 0;
      *(undefined8*)( pPVar5 + 0x10 ) = uVar3;
   }

   *(int*)( pPVar5 + 0x18 ) = local_50;
   if (*(long*)( pPVar5 + 0x20 ) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( pPVar5 + 0x20 ));
      lVar4 = local_48;
      local_48 = 0;
      *(long*)( pPVar5 + 0x20 ) = lVar4;
   }

   *(undefined4*)( pPVar5 + 0x28 ) = local_40;
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   if (( StringName::configured != '\0' ) && ( local_60._8_8_ != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)local_60);
   LAB_0010ca65:local_8c = 1;
   call_get_argument_type_info_helper<float>(in_EDX, &local_8c, pPVar5);
   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return pPVar5;
}
/* void call_get_argument_type_info_helper<Ref<AudioStream> const&>(int, int&, PropertyInfo&) */void call_get_argument_type_info_helper<Ref<AudioStream>const&>(int param_1, int *param_2, PropertyInfo *param_3) {
   undefined1 auVar1[16];
   undefined8 uVar2;
   long lVar3;
   int iVar4;
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
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar4 = *param_2;
   if (iVar4 != param_1) goto LAB_0010ccc7;
   local_78 = 0;
   local_68 = "AudioStream";
   local_80 = 0;
   local_60._0_8_ = 0xb;
   String::parse_latin1((StrRange*)&local_80);
   local_88 = 0;
   local_68 = (char*)CONCAT44(local_68._4_4_, 0x18);
   local_50 = 0x11;
   local_48 = 0;
   local_60 = (undefined1[16])0x0;
   if (local_80 == 0) {
      LAB_0010ce8d:local_40 = 6;
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
      if (local_50 == 0x11) goto LAB_0010ce8d;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
      StringName::unref();
   }

   *(undefined4*)param_3 = local_68._0_4_;
   if (*(long*)( param_3 + 8 ) != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( param_3 + 8 ));
      uVar2 = local_60._0_8_;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = local_60._8_8_;
      local_60 = auVar1 << 0x40;
      *(undefined8*)( param_3 + 8 ) = uVar2;
   }

   if (*(long*)( param_3 + 0x10 ) != local_60._8_8_) {
      StringName::unref();
      uVar2 = local_60._8_8_;
      local_60._8_8_ = 0;
      *(undefined8*)( param_3 + 0x10 ) = uVar2;
   }

   *(int*)( param_3 + 0x18 ) = local_50;
   if (*(long*)( param_3 + 0x20 ) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( param_3 + 0x20 ));
      lVar3 = local_48;
      local_48 = 0;
      *(long*)( param_3 + 0x20 ) = lVar3;
   }

   *(undefined4*)( param_3 + 0x28 ) = local_40;
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   if (( StringName::configured != '\0' ) && ( local_60._8_8_ != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)local_60);
   iVar4 = *param_2;
   LAB_0010ccc7:*param_2 = iVar4 + 1;
   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* MethodBindTR<long, Ref<AudioStream> const&, float, float, float>::_gen_argument_type_info(int)
   const */undefined4 *MethodBindTR<long,Ref<AudioStream>const&,float,float,float>::_gen_argument_type_info(int param_1) {
   undefined1 auVar1[16];
   undefined1 auVar2[16];
   undefined8 uVar3;
   undefined8 uVar4;
   uint in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar5;
   long in_FS_OFFSET;
   long local_80;
   long local_78;
   ulong local_70;
   undefined *local_68;
   undefined1 local_60[16];
   undefined8 local_50;
   undefined8 local_48;
   undefined4 local_40;
   long local_30;
   puVar5 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (in_EDX < 4) {
      local_60 = (undefined1[16])0x0;
      local_68 = (undefined*)0x0;
      local_50 = 0;
      local_48 = 0;
      local_40 = 6;
      local_70 = local_70 & 0xffffffff00000000;
      call_get_argument_type_info_helper<Ref<AudioStream>const&>(in_EDX, (int*)&local_70, (PropertyInfo*)&local_68);
      for (int i = 0; i < 3; i++) {
         call_get_argument_type_info_helper<float>(in_EDX, (int*)&local_70, (PropertyInfo*)&local_68);
      }

      uVar3 = local_60._0_8_;
      uVar4 = local_60._8_8_;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = local_60._8_8_;
      local_60 = auVar1 << 0x40;
      *puVar5 = local_68._0_4_;
      *(undefined8*)( puVar5 + 2 ) = uVar3;
      *(undefined8*)( puVar5 + 4 ) = uVar4;
      puVar5[6] = (undefined4)local_50;
      *(undefined8*)( puVar5 + 8 ) = local_48;
      puVar5[10] = local_40;
      CowData<char32_t>::_unref((CowData<char32_t>*)local_60);
      goto LAB_0010cfc8;
   }

   local_80 = 0;
   local_78 = 0;
   local_68 = &_LC4;
   auVar2._8_8_ = 0;
   auVar2._0_8_ = local_60._0_8_;
   local_60 = auVar2 << 0x40;
   String::parse_latin1((StrRange*)&local_78);
   local_70 = 0;
   *puVar5 = 2;
   puVar5[6] = 0;
   *(undefined8*)( puVar5 + 8 ) = 0;
   *(undefined1(*) [16])( puVar5 + 2 ) = (undefined1[16])0x0;
   if (local_78 == 0) {
      puVar5[10] = 6;
      LAB_0010d0af:StringName::operator =((StringName*)( puVar5 + 4 ), (StringName*)&local_80);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar5 + 8 ), (CowData*)&local_78);
      puVar5[10] = 6;
      if (puVar5[6] != 0x11) goto LAB_0010d0af;
      StringName::StringName((StringName*)&local_68, (String*)( puVar5 + 8 ), false);
      if (*(undefined**)( puVar5 + 4 ) == local_68) {
         if (( StringName::configured != '\0' ) && ( local_68 != (undefined*)0x0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         *(undefined**)( puVar5 + 4 ) = local_68;
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
   if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
      StringName::unref();
   }

   LAB_0010cfc8:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar5;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void call_get_argument_type_info<Ref<AudioStream> const&, float, float, float,
   AudioServer::PlaybackType, StringName const&>(int, PropertyInfo&) */void call_get_argument_type_info<Ref<AudioStream>const&,float,float,float,AudioServer::PlaybackType,StringName_const&>(int param_1, PropertyInfo *param_2) {
   long lVar1;
   long in_FS_OFFSET;
   int local_a4;
   undefined8 local_a0;
   undefined8 local_98;
   undefined8 local_90;
   undefined8 local_88;
   long local_80;
   char *local_78;
   long local_70;
   long local_68;
   undefined4 local_60;
   long local_58;
   undefined4 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_a4 = 0;
   call_get_argument_type_info_helper<Ref<AudioStream>const&>(param_1, &local_a4, param_2);
   for (int i = 0; i < 3; i++) {
      call_get_argument_type_info_helper<float>(param_1, &local_a4, param_2);
   }

   if (param_1 == local_a4) {
      local_90 = 0;
      local_70 = 0x19;
      local_78 = "AudioServer::PlaybackType";
      String::parse_latin1((StrRange*)&local_90);
      godot::details::enum_qualified_name_to_class_info_name((details*)&local_88, (String*)&local_90);
      StringName::StringName((StringName*)&local_80, (String*)&local_88, false);
      local_98 = 0;
      local_a0 = 0;
      PropertyInfo::PropertyInfo((PropertyInfo*)&local_78, 2, (CowData<char32_t>*)&local_a0, 0, (CowData<char32_t>*)&local_98, 0x10006, (StringName*)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   }
 else {
      local_a4 = local_a4 + 1;
      if (param_1 != local_a4) goto LAB_0010d1c6;
      local_80 = 0;
      local_88 = 0;
      local_78 = "";
      local_70 = 0;
      String::parse_latin1((StrRange*)&local_88);
      local_90 = 0;
      PropertyInfo::PropertyInfo((PropertyInfo*)&local_78, 0x15, (CowData<char32_t>*)&local_90, 0, (StrRange*)&local_88, 6, &local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

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
   LAB_0010d1c6:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTR<long, Ref<AudioStream> const&, float, float, float, AudioServer::PlaybackType,
   StringName const&>::_gen_argument_type_info(int) const */undefined4 *MethodBindTR<long,Ref<AudioStream>const&,float,float,float,AudioServer::PlaybackType,StringName_const&>::_gen_argument_type_info(int param_1) {
   undefined1 auVar1[16];
   undefined1 auVar2[16];
   undefined8 uVar3;
   undefined8 uVar4;
   uint in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar5;
   long in_FS_OFFSET;
   long local_80;
   long local_78;
   undefined8 local_70;
   undefined *local_68;
   undefined1 local_60[16];
   undefined8 local_50;
   undefined8 local_48;
   undefined4 local_40;
   long local_30;
   puVar5 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (in_EDX < 6) {
      local_68 = (undefined*)0x0;
      local_50 = 0;
      local_48 = 0;
      local_40 = 6;
      local_60 = (undefined1[16])0x0;
      call_get_argument_type_info<Ref<AudioStream>const&,float,float,float,AudioServer::PlaybackType,StringName_const&>(in_EDX, (PropertyInfo*)&local_68);
      uVar3 = local_60._0_8_;
      uVar4 = local_60._8_8_;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = local_60._8_8_;
      local_60 = auVar1 << 0x40;
      *puVar5 = local_68._0_4_;
      *(undefined8*)( puVar5 + 2 ) = uVar3;
      *(undefined8*)( puVar5 + 4 ) = uVar4;
      puVar5[6] = (undefined4)local_50;
      *(undefined8*)( puVar5 + 8 ) = local_48;
      puVar5[10] = local_40;
      CowData<char32_t>::_unref((CowData<char32_t>*)local_60);
      goto LAB_0010d4ac;
   }

   local_80 = 0;
   local_78 = 0;
   local_68 = &_LC4;
   auVar2._8_8_ = 0;
   auVar2._0_8_ = local_60._0_8_;
   local_60 = auVar2 << 0x40;
   String::parse_latin1((StrRange*)&local_78);
   local_70 = 0;
   *puVar5 = 2;
   puVar5[6] = 0;
   *(undefined8*)( puVar5 + 8 ) = 0;
   *(undefined1(*) [16])( puVar5 + 2 ) = (undefined1[16])0x0;
   if (local_78 == 0) {
      puVar5[10] = 6;
      LAB_0010d58f:StringName::operator =((StringName*)( puVar5 + 4 ), (StringName*)&local_80);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar5 + 8 ), (CowData*)&local_78);
      puVar5[10] = 6;
      if (puVar5[6] != 0x11) goto LAB_0010d58f;
      StringName::StringName((StringName*)&local_68, (String*)( puVar5 + 8 ), false);
      if (*(undefined**)( puVar5 + 4 ) == local_68) {
         if (( StringName::configured != '\0' ) && ( local_68 != (undefined*)0x0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         *(undefined**)( puVar5 + 4 ) = local_68;
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
   if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
      StringName::unref();
   }

   LAB_0010d4ac:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar5;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* AudioStreamPlaybackPolyphonic::_play_stream_bind_compat_91382(Ref<AudioStream> const&, float,
   float, float) */void AudioStreamPlaybackPolyphonic::_GLOBAL__sub_I__play_stream_bind_compat_91382(void) {
   if (AudioStreamRandomizer::base_property_helper != '\0') {
      return;
   }

   AudioStreamRandomizer::base_property_helper = 1;
   AudioStreamRandomizer::base_property_helper._56_8_ = 2;
   AudioStreamRandomizer::base_property_helper._64_8_ = 0;
   AudioStreamRandomizer::base_property_helper._0_16_ = (undefined1[16])0x0;
   AudioStreamRandomizer::base_property_helper._24_16_ = (undefined1[16])0x0;
   AudioStreamRandomizer::base_property_helper._40_16_ = (undefined1[16])0x0;
   __cxa_atexit(PropertyListHelper::~PropertyListHelper, AudioStreamRandomizer::base_property_helper, &__dso_handle);
   return;
}
/* WARNING: Control flow encountered bad instruction data *//* PropertyListHelper::~PropertyListHelper() */void PropertyListHelper::~PropertyListHelper(PropertyListHelper *this) {
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
/* WARNING: Control flow encountered bad instruction data *//* AudioStreamPlaybackPolyphonic::~AudioStreamPlaybackPolyphonic() */void AudioStreamPlaybackPolyphonic::~AudioStreamPlaybackPolyphonic(AudioStreamPlaybackPolyphonic *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* AudioStreamPolyphonic::~AudioStreamPolyphonic() */void AudioStreamPolyphonic::~AudioStreamPolyphonic(AudioStreamPolyphonic *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* AudioSamplePlayback::~AudioSamplePlayback() */void AudioSamplePlayback::~AudioSamplePlayback(AudioSamplePlayback *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* RefCounted::~RefCounted() */void RefCounted::~RefCounted(RefCounted *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<long>::~MethodBindT() */void MethodBindT<long>::~MethodBindT(MethodBindT<long> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<bool, long>::~MethodBindTRC() */void MethodBindTRC<bool,long>::~MethodBindTRC(MethodBindTRC<bool,long> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<long, float>::~MethodBindT() */void MethodBindT<long,float>::~MethodBindT(MethodBindT<long,float> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTR<long, Ref<AudioStream> const&, float, float, float, AudioServer::PlaybackType,
   StringName const&>::~MethodBindTR() */void MethodBindTR<long,Ref<AudioStream>const&,float,float,float,AudioServer::PlaybackType,StringName_const&>::~MethodBindTR(MethodBindTR<long,Ref<AudioStream>const&,float,float,float,AudioServer::PlaybackType,StringName_const&> *this) {
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
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTR<long, Ref<AudioStream> const&, float, float, float>::~MethodBindTR() */void MethodBindTR<long,Ref<AudioStream>const&,float,float,float>::~MethodBindTR(MethodBindTR<long,Ref<AudioStream>const&,float,float,float> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* StringName::~StringName() */void StringName::~StringName(StringName *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}


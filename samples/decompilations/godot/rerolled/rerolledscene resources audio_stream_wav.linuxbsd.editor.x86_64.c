/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* AudioStreamPlaybackWAV::start(double) */void AudioStreamPlaybackWAV::start(double param_1) {
   long lVar1;
   long lVar2;
   long *in_RDI;
   lVar2 = _UNK_00117ae8;
   lVar1 = __LC0;
   if (*(int*)( in_RDI[0x7f] + 0x348 ) == 2) {
      *(undefined2*)( in_RDI + 0x4e ) = 0;
      *(undefined4*)( (long)in_RDI + 0x274 ) = 0;
      *(undefined2*)( in_RDI + 0x4f ) = 0;
      *(undefined2*)( (long)in_RDI + 0x28c ) = 0;
      *(undefined4*)( in_RDI + 0x52 ) = 0;
      *(undefined2*)( (long)in_RDI + 0x294 ) = 0;
      in_RDI[0x7d] = 0;
      *(long*)( (long)in_RDI + 0x27c ) = lVar1;
      *(long*)( (long)in_RDI + 0x284 ) = lVar2;
      in_RDI[0x53] = lVar1;
      in_RDI[0x54] = lVar2;
   }
 else {
      ( **(code**)( *in_RDI + 0x178 ) )(param_1);
   }

   *(undefined4*)( in_RDI + 0x7e ) = 1;
   *(undefined1*)( (long)in_RDI + 0x3f4 ) = 1;
   return;
}
/* AudioStreamPlaybackWAV::stop() */void AudioStreamPlaybackWAV::stop(AudioStreamPlaybackWAV *this) {
   this[0x3f4] = (AudioStreamPlaybackWAV)0x0;
   return;
}
/* AudioStreamPlaybackWAV::is_playing() const */AudioStreamPlaybackWAV AudioStreamPlaybackWAV::is_playing(AudioStreamPlaybackWAV *this) {
   return this[0x3f4];
}
/* AudioStreamPlaybackWAV::get_loop_count() const */undefined8 AudioStreamPlaybackWAV::get_loop_count(void) {
   return 0;
}
/* AudioStreamPlaybackWAV::get_playback_position() const */double AudioStreamPlaybackWAV::get_playback_position(AudioStreamPlaybackWAV *this) {
   return (double)( (float)( *(long*)( this + 1000 ) >> 0xd ) / (float)*(int*)( *(long*)( this + 0x3f8 ) + 0x35c ) );
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* AudioStreamPlaybackWAV::seek(double) */void AudioStreamPlaybackWAV::seek(AudioStreamPlaybackWAV *this, double param_1) {
   double dVar1;
   if ((int)( *(long**)( this + 0x3f8 ) )[0x69] != 2) {
      dVar1 = (double)( **(code**)( **(long**)( this + 0x3f8 ) + 0x1f8 ) )();
      if (param_1 < 0.0) {
         param_1 = 0.0;
      }
 else if (dVar1 <= param_1) {
         param_1 = dVar1 - __LC2;
      }

      dVar1 = (double)*(int*)( *(long*)( this + 0x3f8 ) + 0x35c ) * param_1;
      if (_LC3 <= dVar1) {
         dVar1 = dVar1 - _LC3;
      }

      *(long*)( this + 1000 ) = (long)dVar1 << 0xd;
   }

   return;
}
/* AudioStreamPlaybackWAV::set_is_sample(bool) */void AudioStreamPlaybackWAV::set_is_sample(AudioStreamPlaybackWAV *this, bool param_1) {
   this[0x400] = (AudioStreamPlaybackWAV)param_1;
   return;
}
/* AudioStreamPlaybackWAV::get_is_sample() const */AudioStreamPlaybackWAV AudioStreamPlaybackWAV::get_is_sample(AudioStreamPlaybackWAV *this) {
   return this[0x400];
}
/* AudioStreamWAV::set_format(AudioStreamWAV::Format) */void AudioStreamWAV::set_format(AudioStreamWAV *this, undefined4 param_2) {
   *(undefined4*)( this + 0x348 ) = param_2;
   return;
}
/* AudioStreamWAV::get_format() const */undefined4 AudioStreamWAV::get_format(AudioStreamWAV *this) {
   return *(undefined4*)( this + 0x348 );
}
/* AudioStreamWAV::set_loop_mode(AudioStreamWAV::LoopMode) */void AudioStreamWAV::set_loop_mode(AudioStreamWAV *this, undefined4 param_2) {
   *(undefined4*)( this + 0x34c ) = param_2;
   return;
}
/* AudioStreamWAV::get_loop_mode() const */undefined4 AudioStreamWAV::get_loop_mode(AudioStreamWAV *this) {
   return *(undefined4*)( this + 0x34c );
}
/* AudioStreamWAV::set_loop_begin(int) */void AudioStreamWAV::set_loop_begin(AudioStreamWAV *this, int param_1) {
   *(int*)( this + 0x354 ) = param_1;
   return;
}
/* AudioStreamWAV::get_loop_begin() const */undefined4 AudioStreamWAV::get_loop_begin(AudioStreamWAV *this) {
   return *(undefined4*)( this + 0x354 );
}
/* AudioStreamWAV::set_loop_end(int) */void AudioStreamWAV::set_loop_end(AudioStreamWAV *this, int param_1) {
   *(int*)( this + 0x358 ) = param_1;
   return;
}
/* AudioStreamWAV::get_loop_end() const */undefined4 AudioStreamWAV::get_loop_end(AudioStreamWAV *this) {
   return *(undefined4*)( this + 0x358 );
}
/* AudioStreamWAV::get_mix_rate() const */undefined4 AudioStreamWAV::get_mix_rate(AudioStreamWAV *this) {
   return *(undefined4*)( this + 0x35c );
}
/* AudioStreamWAV::set_stereo(bool) */void AudioStreamWAV::set_stereo(AudioStreamWAV *this, bool param_1) {
   this[0x350] = (AudioStreamWAV)param_1;
   return;
}
/* AudioStreamWAV::is_stereo() const */AudioStreamWAV AudioStreamWAV::is_stereo(AudioStreamWAV *this) {
   return this[0x350];
}
/* AudioStreamWAV::is_monophonic() const */undefined8 AudioStreamWAV::is_monophonic(void) {
   return 0;
}
/* AudioStreamWAV::get_length() const */double AudioStreamWAV::get_length(AudioStreamWAV *this) {
   uint uVar1;
   uint uVar2;
   long lVar3;
   int iVar4;
   ulong uVar5;
   int *piVar6;
   long in_FS_OFFSET;
   int local_128[70];
   long local_10;
   uVar1 = *(uint*)( this + 0x370 );
   uVar5 = (ulong)uVar1;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar2 = *(uint*)( this + 0x348 );
   if (uVar2 == 2) {
      uVar5 = ( ulong )(uVar1 * 2);
   }
 else if (uVar2 < 3) {
      if (uVar2 != 0) {
         uVar5 = ( ulong )(uint)((int)uVar1 / 2);
      }

   }
 else if (uVar2 == 3) {
      piVar6 = local_128;
      for (lVar3 = 0x21; lVar3 != 0; lVar3 = lVar3 + -1) {
         *(undefined8*)piVar6 = 0;
         piVar6 = (int*)( (long)piVar6 + 8 );
      }

      lVar3 = *(long*)( this + 0x368 );
      *piVar6 = 0;
      qoa_decode_header(lVar3 + 0x10, uVar5, local_128);
      uVar5 = ( ulong )(uint)(local_128[2] * local_128[0]);
   }

   iVar4 = (int)uVar5;
   if (this[0x350] != (AudioStreamWAV)0x0) {
      iVar4 = iVar4 + (int)( uVar5 >> 0x1f ) >> 1;
   }

   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return (double)iVar4 / (double)*(int*)( this + 0x35c );
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Type propagation algorithm not settling *//* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* AudioStreamPlaybackWAV::mix(AudioFrame*, float, int) */int AudioStreamPlaybackWAV::mix(AudioStreamPlaybackWAV *this, AudioFrame *param_1, float param_2, int param_3) {
   char cVar1;
   byte bVar2;
   short sVar3;
   uint uVar4;
   long lVar5;
   long lVar6;
   code *pcVar7;
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   double dVar10;
   short sVar11;
   int iVar12;
   undefined4 uVar13;
   uint uVar14;
   uint uVar15;
   long *plVar16;
   long lVar17;
   int iVar18;
   long lVar19;
   long lVar20;
   long lVar21;
   long lVar22;
   AudioFrame *pAVar23;
   int iVar24;
   AudioStreamPlaybackWAV *pAVar25;
   ulong uVar26;
   AudioFrame *pAVar27;
   int iVar28;
   ulong uVar29;
   short sVar30;
   long lVar31;
   ulong uVar32;
   uint uVar33;
   int iVar34;
   int iVar35;
   uint uVar36;
   AudioFrame *pAVar37;
   int iVar38;
   long lVar39;
   float fVar40;
   float fVar41;
   undefined1 auVar42[16];
   undefined1 auVar43[16];
   undefined1 auVar44[16];
   undefined1 auVar45[16];
   undefined4 uVar46;
   undefined4 uVar47;
   AudioFrame *local_d0;
   int local_c4;
   long local_b8;
   long local_98;
   int local_90;
   lVar5 = *(long*)( this + 0x3f8 );
   if (( *(int*)( lVar5 + 0x360 ) == 0 ) || ( this[0x3f4] == (AudioStreamPlaybackWAV)0x0 )) {
      if (0 < param_3) {
         pAVar27 = param_1;
         if (( param_3 & 1U ) != 0) {
            *(undefined8*)param_1 = 0;
            pAVar27 = param_1 + 8;
            if (param_1 + 8 == param_1 + (long)param_3 * 8) {
               return 0;
            }

         }

         do {
            *(undefined8*)pAVar27 = 0;
            pAVar23 = pAVar27 + 0x10;
            *(undefined8*)( pAVar27 + 8 ) = 0;
            pAVar27 = pAVar23;
         }
 while ( pAVar23 != param_1 + (long)param_3 * 8 );
      }

   }
 else {
      iVar18 = *(int*)( lVar5 + 0x348 );
      iVar12 = *(int*)( lVar5 + 0x370 );
      if (iVar18 == 2) {
         iVar12 = iVar12 * 2;
      }
 else if (iVar18 == 3) {
         iVar12 = *(int*)( this + 0x2b0 ) * *(int*)( this + 0x2a8 );
      }
 else if (iVar18 == 1) {
         iVar12 = iVar12 / 2;
      }

      cVar1 = *(char*)( lVar5 + 0x350 );
      if (cVar1 != '\0') {
         iVar12 = iVar12 / 2;
      }

      lVar19 = (long)*(int*)( lVar5 + 0x354 ) * 0x2000;
      lVar20 = (long)*(int*)( lVar5 + 0x358 );
      lVar21 = lVar20 * 0x2000;
      if (*(int*)( lVar5 + 0x34c ) == 0) {
         local_98 = 0;
         local_b8 = (long)iVar12 * 0x2000 + -0x2000;
      }
 else {
         local_b8 = lVar21;
         local_98 = lVar19;
         if (*(int*)( lVar5 + 0x34c ) == 3) {
            *(undefined4*)( this + 0x3f0 ) = 0xffffffff;
         }

      }

      plVar16 = (long*)AudioServer::get_singleton();
      fVar40 = (float)( **(code**)( *plVar16 + 0x188 ) )(plVar16);
      iVar18 = *(int*)( *(long*)( this + 0x3f8 ) + 0x35c );
      AudioServer::get_singleton();
      fVar41 = (float)AudioServer::get_playback_speed_scale();
      local_c4 = 1;
      fVar40 = ( ( fVar41 * (float)iVar18 * param_2 ) / fVar40 ) * __LC4;
      if (_LC5 < fVar40) {
         local_c4 = (int)fVar40;
      }

      local_c4 = local_c4 * *(int*)( this + 0x3f0 );
      lVar5 = *(long*)( this + 0x3f8 );
      local_90 = *(int*)( lVar5 + 0x34c );
      iVar18 = *(int*)( lVar5 + 0x348 );
      lVar6 = *(long*)( lVar5 + 0x368 );
      lVar5 = lVar6 + 0x10;
      uVar13 = ( undefined4 )(lVar19 >> 0xd);
      if (( iVar18 == 2 ) && ( local_90 != 0 )) {
         local_90 = 1;
         *(undefined4*)( this + 0x284 ) = uVar13;
         *(undefined4*)( this + 0x2a0 ) = uVar13;
      }

      if (0 < param_3) {
         uVar29 = (ulong)(uint)param_3;
         pAVar27 = param_1;
         do {
            lVar31 = *(long*)( this + 1000 );
            uVar33 = (uint)uVar29;
            lVar17 = local_b8;
            if (local_c4 < 0) {
               if (( local_90 != 0 ) && ( lVar31 < lVar19 )) {
                  if (local_90 == 2) {
                     local_c4 = -local_c4;
                     *(int*)( this + 0x3f0 ) = -*(int *)(this + 0x3f0);
                     lVar39 = (long)local_c4;
                     lVar31 = lVar19 + ( lVar19 - lVar31 );
                     *(long*)( this + 1000 ) = lVar31;
                  }
 else {
                     lVar39 = (long)local_c4;
                     lVar31 = lVar21 - ( lVar19 - lVar31 );
                     *(long*)( this + 1000 ) = lVar31;
                     lVar17 = local_98;
                  }

                  goto LAB_00100608;
               }

               if (-1 < lVar31) {
                  lVar39 = (long)local_c4;
                  lVar17 = local_98;
                  goto LAB_00100608;
               }

               LAB_001012e9:this[0x3f4] = (AudioStreamPlaybackWAV)0x0;
               goto LAB_001012fe;
            }

            if (( local_90 == 0 ) || ( lVar31 < lVar21 )) {
               if ((long)iVar12 * 0x2000 <= lVar31) goto LAB_001012e9;
               lVar39 = (long)local_c4;
            }
 else if (local_90 == 2) {
               *(int*)( this + 0x3f0 ) = -*(int *)(this + 0x3f0);
               lVar31 = lVar20 * 0x4000 - lVar31;
               *(long*)( this + 1000 ) = lVar31;
               if (local_c4 == 0) {
                  lVar39 = 0;
               }
 else {
                  local_c4 = -local_c4;
                  lVar39 = (long)local_c4;
                  lVar17 = local_98;
               }

            }
 else {
               lVar39 = (long)local_c4;
               if (iVar18 == 2) {
                  *(undefined2*)( this + 0x270 ) = *(undefined2*)( this + 0x278 );
                  *(undefined2*)( this + 0x28c ) = *(undefined2*)( this + 0x294 );
                  *(undefined4*)( this + 0x274 ) = *(undefined4*)( this + 0x27c );
                  *(undefined4*)( this + 0x290 ) = *(undefined4*)( this + 0x298 );
                  *(undefined4*)( this + 0x280 ) = uVar13;
                  *(undefined4*)( this + 0x29c ) = uVar13;
                  *(long*)( this + 1000 ) = lVar19;
                  lVar31 = lVar19;
               }
 else {
                  lVar31 = lVar31 + lVar20 * -0x2000 + lVar19;
                  *(long*)( this + 1000 ) = lVar31;
               }

            }

            LAB_00100608:dVar10 = _LC7;
            uVar14 = (int)( ( lVar17 - lVar31 ) / lVar39 ) + 1;
            if ((int)uVar33 < (int)uVar14) {
               uVar14 = uVar33;
            }

            uVar32 = (ulong)uVar14;
            if ((int)uVar14 < 1) goto LAB_001012e9;
            uVar33 = uVar33 - uVar14;
            uVar36 = *(uint*)( *(long*)( this + 0x3f8 ) + 0x348 );
            uVar46 = SUB84(_LC7, 0);
            uVar47 = ( undefined4 )((ulong)_LC7 >> 0x20);
            if (uVar36 == 2) {
               iVar28 = *(int*)( this + 0x288 );
               iVar24 = *(int*)( this + 0x274 );
               if (cVar1 == '\0') {
                  local_d0 = pAVar27;
                  do {
                     uVar29 = ( ulong ) * (int*)( this + 0x280 );
                     uVar26 = uVar29;
                     while ((long)uVar26 < ( lVar31 >> 0xd ) + (long)iVar28) {
                        uVar36 = (int)uVar29 + 1;
                        uVar29 = (ulong)uVar36;
                        *(uint*)( this + 0x280 ) = uVar36;
                        bVar2 = *(byte*)( lVar5 + ( (int)uVar36 >> 1 ) );
                        if (( uVar36 & 1 ) == 0) {
                           uVar15 = bVar2 & 0xf;
                        }
 else {
                           uVar15 = ( uint )(bVar2 >> 4);
                        }

                        sVar3 = *(short*)( do_resample<signed_char,false,true,false>(signed_const*,AudioFrame*,long&,int&,unsigned_int,AudioStreamPlaybackWAV::IMA_ADPCM_State*,AudioStreamPlaybackWAV::QOA_State*)
                                   :: );
                        sVar30 = (short)(char)do_resample<signed_char,false,true,false>(signed_const * AudioFrame * , long, &,int&, unsigned_int, AudioStreamPlaybackWAV::IMA_ADPCM_State, *, AudioStreamPlaybackWAV::QOA_State * ::_ima_adpcm_index_table[uVar15] + *(short*)( this + 0x270 ));
                        if (sVar30 < 0) {
                           sVar30 = 0;
                        }
 else if (0x58 < sVar30) {
                           sVar30 = 0x58;
                        }

                        sVar11 = sVar3 >> 3;
                        if (( uVar15 & 1 ) != 0) {
                           sVar11 = ( sVar3 >> 2 ) + ( sVar3 >> 3 );
                        }

                        if (( uVar15 & 2 ) != 0) {
                           sVar11 = ( sVar3 >> 1 ) + sVar11;
                        }

                        if (( uVar15 & 4 ) != 0) {
                           sVar11 = sVar3 + sVar11;
                        }

                        if (( uVar15 & 8 ) != 0) {
                           sVar11 = -sVar11;
                        }

                        iVar24 = iVar24 + sVar11;
                        if (iVar24 < -0x8000) {
                           iVar24 = -0x8000;
                        }
 else if (0x7fff < iVar24) {
                           iVar24 = 0x7fff;
                        }

                        *(short*)( this + 0x270 ) = sVar30;
                        *(int*)( this + 0x274 ) = iVar24;
                        if (uVar36 == *(uint*)( this + 0x284 )) {
                           *(short*)( this + 0x278 ) = sVar30;
                           *(int*)( this + 0x27c ) = iVar24;
                        }

                        uVar26 = (ulong)(int)uVar36;
                     }
;
                     lVar31 = lVar31 + lVar39;
                     pAVar23 = local_d0 + 8;
                     *(float*)local_d0 = (float)( (double)iVar24 / dVar10 );
                     *(float*)( local_d0 + 4 ) = (float)( (double)iVar24 / dVar10 );
                     *(long*)( this + 1000 ) = lVar31;
                     local_d0 = pAVar23;
                  }
 while ( pAVar23 != pAVar27 + uVar32 * 8 );
               }
 else {
                  uVar29 = ( ulong ) * (uint*)( this + 0x280 );
                  pAVar23 = pAVar27;
                  while (true) {
                     uVar26 = (long)(int)uVar29;
                     while ((long)uVar26 < ( lVar31 >> 0xd ) + (long)iVar28) {
                        iVar24 = 0;
                        pAVar25 = this + 0x270;
                        while (true) {
                           uVar36 = *(int*)( pAVar25 + 0x10 ) + 1;
                           *(uint*)( pAVar25 + 0x10 ) = uVar36;
                           bVar2 = *(byte*)( lVar5 + (int)( ( uVar36 & 0xfffffffe ) + iVar24 ) );
                           if (( uVar36 & 1 ) == 0) {
                              uVar15 = bVar2 & 0xf;
                           }
 else {
                              uVar15 = ( uint )(bVar2 >> 4);
                           }

                           sVar3 = *(short*)( do_resample<signed_char,true,true,false>(signed_const*,AudioFrame*,long&,int&,unsigned_int,AudioStreamPlaybackWAV::IMA_ADPCM_State*,AudioStreamPlaybackWAV::QOA_State*)
                                     :: );
                           sVar30 = (short)(char)do_resample<signed_char,true,true,false>(signed_const * AudioFrame * , long, &,int&, unsigned_int, AudioStreamPlaybackWAV::IMA_ADPCM_State, *, AudioStreamPlaybackWAV::QOA_State * ::_ima_adpcm_index_table[uVar15] + *(short*)pAVar25);
                           if (sVar30 < 0) {
                              sVar30 = 0;
                           }
 else if (0x58 < sVar30) {
                              sVar30 = 0x58;
                           }

                           *(short*)pAVar25 = sVar30;
                           sVar11 = sVar3 >> 3;
                           if (( uVar15 & 1 ) != 0) {
                              sVar11 = ( sVar3 >> 2 ) + ( sVar3 >> 3 );
                           }

                           if (( uVar15 & 2 ) != 0) {
                              sVar11 = ( sVar3 >> 1 ) + sVar11;
                           }

                           if (( uVar15 & 4 ) != 0) {
                              sVar11 = sVar3 + sVar11;
                           }

                           if (( uVar15 & 8 ) != 0) {
                              sVar11 = -sVar11;
                           }

                           *(int*)( pAVar25 + 4 ) = *(int*)( pAVar25 + 4 ) + (int)sVar11;
                           iVar34 = 0x7fff;
                           if (*(int*)( pAVar25 + 4 ) < 0x8000) {
                              iVar34 = *(int*)( pAVar25 + 4 );
                           }

                           if (iVar34 < -0x8000) {
                              iVar34 = -0x8000;
                           }

                           *(int*)( pAVar25 + 4 ) = iVar34;
                           if (*(uint*)( pAVar25 + 0x14 ) == uVar36) {
                              *(short*)( pAVar25 + 8 ) = sVar30;
                              *(int*)( pAVar25 + 0xc ) = iVar34;
                           }

                           pAVar25 = pAVar25 + 0x1c;
                           if (iVar24 != 0) break;
                           iVar24 = 1;
                        }
;
                        iVar24 = *(int*)( this + 0x274 );
                        uVar29 = ( ulong ) * (int*)( this + 0x280 );
                        uVar26 = uVar29;
                     }
;
                     lVar31 = lVar31 + lVar39;
                     auVar45._0_8_ = (double)iVar24;
                     auVar45._8_8_ = (double)*(int*)( this + 0x290 );
                     auVar9._8_4_ = uVar46;
                     auVar9._0_8_ = dVar10;
                     auVar9._12_4_ = uVar47;
                     auVar43 = divpd(auVar45, auVar9);
                     *(float*)pAVar23 = (float)auVar43._0_8_;
                     *(float*)( pAVar23 + 4 ) = (float)auVar43._8_8_;
                     *(long*)( this + 1000 ) = lVar31;
                     if (pAVar23 + 8 == pAVar27 + uVar32 * 8) break;
                     iVar28 = *(int*)( this + 0x288 );
                     pAVar23 = pAVar23 + 8;
                  }
;
               }

            }
 else if (uVar36 < 3) {
               if (uVar36 == 0) {
                  pAVar23 = pAVar27;
                  if (cVar1 == '\0') {
                     do {
                        iVar24 = (int)*(char*)( lVar5 + ( lVar31 >> 0xd ) );
                        fVar40 = (float)( (double)( iVar24 * 0x100 + ( (int)( ( *(char*)( lVar6 + 0x11 + ( lVar31 >> 0xd ) ) * 0x100 + iVar24 * -0x100 ) * ( (uint)lVar31 & 0x1fff ) ) >> 0xd ) ) / dVar10 );
                        *(float*)pAVar23 = fVar40;
                        *(float*)( pAVar23 + 4 ) = fVar40;
                        *(long*)( this + 1000 ) = lVar31 + lVar39;
                        uVar36 = (int)uVar32 - 1;
                        uVar32 = (ulong)uVar36;
                        pAVar23 = pAVar23 + 8;
                        lVar31 = lVar31 + lVar39;
                     }
 while ( uVar36 != 0 );
                  }
 else {
                     do {
                        lVar17 = lVar31 >> 0xd;
                        uVar36 = (uint)lVar31 & 0x1fff;
                        iVar28 = (int)*(char*)( lVar5 + lVar17 * 2 );
                        iVar24 = (int)*(char*)( lVar6 + 0x11 + lVar17 * 2 );
                        auVar44._0_8_ = (double)( ( (int)( ( *(char*)( lVar6 + 0x12 + lVar17 * 2 ) * 0x100 + iVar28 * -0x100 ) * uVar36 ) >> 0xd ) + iVar28 * 0x100 );
                        auVar44._8_8_ = (double)( iVar24 * 0x100 + ( (int)( ( *(char*)( lVar6 + 0x13 + lVar17 * 2 ) * 0x100 + iVar24 * -0x100 ) * uVar36 ) >> 0xd ) );
                        auVar8._8_4_ = uVar46;
                        auVar8._0_8_ = dVar10;
                        auVar8._12_4_ = uVar47;
                        auVar43 = divpd(auVar44, auVar8);
                        *(float*)pAVar23 = (float)auVar43._0_8_;
                        *(float*)( pAVar23 + 4 ) = (float)auVar43._8_8_;
                        *(long*)( this + 1000 ) = lVar31 + lVar39;
                        uVar36 = (int)uVar32 - 1;
                        uVar32 = (ulong)uVar36;
                        lVar31 = lVar31 + lVar39;
                        pAVar23 = pAVar23 + 8;
                     }
 while ( uVar36 != 0 );
                  }

               }
 else {
                  lVar17 = lVar31;
                  pAVar23 = pAVar27;
                  if (cVar1 == '\0') {
                     do {
                        iVar24 = (int)*(short*)( lVar5 + ( lVar17 >> 0xd ) * 2 );
                        fVar40 = (float)( (double)( iVar24 + ( (int)( ( *(short*)( lVar6 + 0x12 + ( lVar17 >> 0xd ) * 2 ) - iVar24 ) * ( (uint)lVar17 & 0x1fff ) ) >> 0xd ) ) / dVar10 );
                        *(float*)pAVar23 = fVar40;
                        *(float*)( pAVar23 + 4 ) = fVar40;
                        uVar36 = (int)uVar32 - 1;
                        uVar32 = (ulong)uVar36;
                        lVar17 = lVar17 + lVar39;
                        pAVar23 = pAVar23 + 8;
                     }
 while ( uVar36 != 0 );
                  }
 else {
                     do {
                        lVar22 = lVar17 >> 0xd;
                        uVar36 = (uint)lVar17 & 0x1fff;
                        iVar24 = (int)*(short*)( lVar5 + lVar22 * 4 );
                        iVar28 = (int)*(short*)( lVar6 + 0x12 + lVar22 * 4 );
                        auVar42._0_8_ = (double)( ( (int)( ( *(short*)( lVar6 + 0x14 + lVar22 * 4 ) - iVar24 ) * uVar36 ) >> 0xd ) + iVar24 );
                        auVar42._8_8_ = (double)( ( (int)( ( *(short*)( lVar6 + 0x16 + lVar22 * 4 ) - iVar28 ) * uVar36 ) >> 0xd ) + iVar28 );
                        auVar43._8_4_ = uVar46;
                        auVar43._0_8_ = dVar10;
                        auVar43._12_4_ = uVar47;
                        auVar43 = divpd(auVar42, auVar43);
                        *(float*)pAVar23 = (float)auVar43._0_8_;
                        *(float*)( pAVar23 + 4 ) = (float)auVar43._8_8_;
                        uVar36 = (int)uVar32 - 1;
                        uVar32 = (ulong)uVar36;
                        lVar17 = lVar17 + lVar39;
                        pAVar23 = pAVar23 + 8;
                     }
 while ( uVar36 != 0 );
                  }

                  *(ulong*)( this + 1000 ) = ( ulong )(uVar14 - 1) * lVar39 + lVar31 + lVar39;
               }

            }
 else if (uVar36 == 3) {
               if (cVar1 == '\0') {
                  iVar28 = 0;
                  pAVar23 = pAVar27;
                  iVar24 = iVar28;
                  LAB_00100e57:lVar17 = lVar31 >> 0xd;
                  if (lVar17 != *(long*)( this + 0x3d8 )) {
                     uVar36 = *(uint*)( this + 0x3f0 );
                     iVar34 = 0;
                     do {
                        uVar29 = ( (int)( -iVar34 & uVar36 ) + lVar17 ) - ( (long)(int)uVar36 >> 0x3f );
                        if ((long)( ulong )(*(int*)( this + 0x2b0 ) - 1) < (long)uVar29) {
                           uVar29 = ( ulong )(*(int*)( this + 0x2b0 ) - 1);
                        }

                        uVar15 = (int)( ( uVar29 & 0xffffffff ) / 0x1400 ) * *(int*)( this + 0x3b8 ) + 8;
                        if (uVar15 != *(uint*)( this + 0x3b4 )) {
                           *(uint*)( this + 0x3b4 ) = uVar15;
                           qoa_decode_frame(lVar5 + (ulong)uVar15, *(int*)( this + 0x3b8 ), this + 0x2a8, *(undefined8*)( this + 0x3c8 ), this + 0x3d0);
                           uVar36 = *(uint*)( this + 0x3f0 );
                           uVar46 = SUB84(_LC7, 0);
                           uVar47 = ( undefined4 )((ulong)_LC7 >> 0x20);
                        }

                        uVar15 = ( (int)uVar29 + (int)( ( uVar29 & 0xffffffff ) / 0x1400 ) * -0x1400 ) * *(int*)( this + 0x2a8 );
                        uVar29 = (ulong)uVar15;
                        if (( ( (int)uVar36 < 1 ) && ( uVar36 == 0 ) ) || ( iVar34 == 0 )) {
                           uVar26 = ( ulong ) * (uint*)( this + 0x3c0 );
                           if (*(uint*)( this + 0x3c0 ) <= uVar15) goto LAB_0010123d;
                           sVar3 = *(short*)( *(long*)( this + 0x3c8 ) + uVar29 * 2 );
                           iVar28 = (int)sVar3;
                           *(short*)( this + 0x3e2 ) = sVar3;
                        }
 else {
                           if (*(uint*)( this + 0x3c0 ) <= uVar15) {
                              uVar26 = ( ulong ) * (uint*)( this + 0x3c0 );
                              uVar29 = (ulong)uVar15;
                              LAB_0010123d:_err_print_index_error("operator[]", "./core/templates/local_vector.h", 0xb2, uVar29, uVar26, "p_index", "count", "", false, true);
                              _err_flush_stdout();
                              /* WARNING: Does not return */
                              pcVar7 = (code*)invalidInstructionException();
                              ( *pcVar7 )();
                           }

                           sVar3 = *(short*)( *(long*)( this + 0x3c8 ) + uVar29 * 2 );
                           iVar24 = (int)sVar3;
                           *(short*)( this + 0x3e0 ) = sVar3;
                        }

                        if (iVar34 != 0) goto LAB_00101160;
                        iVar34 = 1;
                     }
 while ( true );
                  }

                  iVar24 = (int)*(short*)( this + 0x3e0 );
                  iVar28 = (int)*(short*)( this + 0x3e2 );
                  goto LAB_00100e10;
               }

               iVar24 = 0;
               iVar34 = 0;
               iVar35 = 0;
               iVar28 = 0;
               pAVar23 = pAVar27;
               do {
                  lVar17 = lVar31 >> 0xd;
                  if (lVar17 == *(long*)( this + 0x3d8 )) {
                     iVar35 = (int)*(short*)( this + 0x3e0 );
                     iVar28 = (int)*(short*)( this + 0x3e4 );
                     iVar34 = (int)*(short*)( this + 0x3e2 );
                     iVar24 = (int)*(short*)( this + 0x3e6 );
                  }
 else {
                     uVar36 = *(uint*)( this + 0x3f0 );
                     iVar38 = 0;
                     while (true) {
                        uVar29 = ( (int)( -iVar38 & uVar36 ) + lVar17 ) - ( (long)(int)uVar36 >> 0x3f );
                        if ((long)( ulong )(*(int*)( this + 0x2b0 ) - 1) < (long)uVar29) {
                           uVar29 = ( ulong )(*(int*)( this + 0x2b0 ) - 1);
                        }

                        uVar15 = (int)( ( uVar29 & 0xffffffff ) / 0x1400 ) * *(int*)( this + 0x3b8 ) + 8;
                        if (uVar15 != *(uint*)( this + 0x3b4 )) {
                           *(uint*)( this + 0x3b4 ) = uVar15;
                           qoa_decode_frame(lVar5 + (ulong)uVar15, *(int*)( this + 0x3b8 ), this + 0x2a8, *(undefined8*)( this + 0x3c8 ), this + 0x3d0);
                           uVar36 = *(uint*)( this + 0x3f0 );
                           uVar46 = SUB84(_LC7, 0);
                           uVar47 = ( undefined4 )((ulong)_LC7 >> 0x20);
                        }

                        uVar15 = ( (int)uVar29 + (int)( ( uVar29 & 0xffffffff ) / 0x1400 ) * -0x1400 ) * *(int*)( this + 0x2a8 );
                        uVar29 = (ulong)uVar15;
                        if (( ( (int)uVar36 < 1 ) && ( uVar36 == 0 ) ) || ( iVar38 == 0 )) {
                           uVar4 = *(uint*)( this + 0x3c0 );
                           uVar26 = (ulong)uVar4;
                           if (uVar4 <= uVar15) goto LAB_0010123d;
                           sVar3 = *(short*)( *(long*)( this + 0x3c8 ) + (ulong)uVar15 * 2 );
                           iVar34 = (int)sVar3;
                           uVar29 = ( ulong )(uVar15 + 1);
                           *(short*)( this + 0x3e2 ) = sVar3;
                           if (uVar4 <= uVar15 + 1) goto LAB_0010123d;
                           sVar3 = *(short*)( *(long*)( this + 0x3c8 ) + uVar29 * 2 );
                           iVar24 = (int)sVar3;
                           *(short*)( this + 0x3e6 ) = sVar3;
                        }
 else {
                           uVar4 = *(uint*)( this + 0x3c0 );
                           uVar26 = (ulong)uVar4;
                           if (uVar4 <= uVar15) goto LAB_0010123d;
                           sVar3 = *(short*)( *(long*)( this + 0x3c8 ) + (ulong)uVar15 * 2 );
                           iVar35 = (int)sVar3;
                           uVar29 = ( ulong )(uVar15 + 1);
                           *(short*)( this + 0x3e0 ) = sVar3;
                           if (uVar4 <= uVar15 + 1) goto LAB_0010123d;
                           sVar3 = *(short*)( *(long*)( this + 0x3c8 ) + uVar29 * 2 );
                           iVar28 = (int)sVar3;
                           *(short*)( this + 0x3e4 ) = sVar3;
                        }

                        if (iVar38 != 0) break;
                        iVar38 = 1;
                     }
;
                     *(long*)( this + 0x3d8 ) = lVar17;
                     lVar31 = *(long*)( this + 1000 );
                  }

                  uVar36 = (uint)lVar31 & 0x1fff;
                  pAVar37 = pAVar23 + 8;
                  iVar35 = iVar35 + ( (int)( ( iVar34 - iVar35 ) * uVar36 ) >> 0xd );
                  iVar28 = iVar28 + ( (int)( ( iVar24 - iVar28 ) * uVar36 ) >> 0xd );
                  *(float*)pAVar23 = (float)( (double)iVar35 / (double)CONCAT44(uVar47, uVar46) );
                  *(float*)( pAVar23 + 4 ) = (float)( (double)iVar28 / (double)CONCAT44(uVar47, uVar46) );
                  *(long*)( this + 1000 ) = lVar31 + lVar39;
                  lVar31 = lVar31 + lVar39;
                  pAVar23 = pAVar37;
               }
 while ( pAVar37 != pAVar27 + uVar32 * 8 );
            }

            joined_r0x00100a68:uVar29 = (ulong)uVar33;
            pAVar27 = pAVar27 + (long)(int)uVar14 * 8;
         }
 while ( 0 < (int)uVar33 );
         uVar29 = (ulong)uVar33;
         if (uVar33 == 0) {
            return param_3;
         }

         LAB_001012fe:iVar18 = param_3 - (int)uVar29;
         if (param_3 <= iVar18) {
            return iVar18;
         }

         pAVar27 = param_1 + (long)iVar18 * 8;
         pAVar23 = param_1 + ( uVar29 + (long)iVar18 ) * 8;
         pAVar37 = pAVar27;
         if (( (int)pAVar23 - (int)pAVar27 & 8U ) != 0) {
            *(undefined8*)pAVar27 = 0;
            pAVar37 = pAVar27 + 8;
            if (pAVar23 == pAVar27 + 8) {
               return iVar18;
            }

         }

         do {
            *(undefined8*)pAVar37 = 0;
            pAVar27 = pAVar37 + 0x10;
            *(undefined8*)( pAVar37 + 8 ) = 0;
            pAVar37 = pAVar27;
         }
 while ( pAVar23 != pAVar27 );
         return iVar18;
      }

   }

   return 0;
   LAB_00101160:*(long*)( this + 0x3d8 ) = lVar17;
   lVar31 = *(long*)( this + 1000 );
   LAB_00100e10:pAVar37 = pAVar23 + 8;
   iVar24 = iVar24 + ( (int)( ( (uint)lVar31 & 0x1fff ) * ( iVar28 - iVar24 ) ) >> 0xd );
   fVar40 = (float)( (double)iVar24 / (double)CONCAT44(uVar47, uVar46) );
   *(float*)pAVar23 = fVar40;
   *(float*)( pAVar23 + 4 ) = fVar40;
   *(long*)( this + 1000 ) = lVar31 + lVar39;
   lVar31 = lVar31 + lVar39;
   pAVar23 = pAVar37;
   if (pAVar27 + uVar32 * 8 == pAVar37) goto joined_r0x00100a68;
   goto LAB_00100e57;
}
/* AudioStreamPlaybackWAV::tag_used_streams() */void AudioStreamPlaybackWAV::tag_used_streams(AudioStreamPlaybackWAV *this) {
   double dVar1;
   if (*(code**)( *(long*)this + 0x170 ) == get_playback_position) {
      AudioStream::tag_used((float)( *(long*)( this + 1000 ) >> 0xd ) / (float)*(int*)( *(long*)( this + 0x3f8 ) + 0x35c ));
      return;
   }

   dVar1 = (double)( **(code**)( *(long*)this + 0x170 ) )();
   AudioStream::tag_used((float)dVar1);
   return;
}
/* AudioStreamPlaybackWAV::get_sample_playback() const */void AudioStreamPlaybackWAV::get_sample_playback(void) {
   char cVar1;
   long in_RSI;
   long *in_RDI;
   *in_RDI = 0;
   if (*(long*)( in_RSI + 0x408 ) != 0) {
      *in_RDI = *(long*)( in_RSI + 0x408 );
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
         *in_RDI = 0;
      }

   }

   return;
}
/* AudioStreamWAV::set_mix_rate(int) */void AudioStreamWAV::set_mix_rate(AudioStreamWAV *this, int param_1) {
   if (param_1 != 0) {
      *(int*)( this + 0x35c ) = param_1;
      return;
   }

   _err_print_error("set_mix_rate", "scene/resources/audio_stream_wav.cpp", 0x20d, "Condition \"p_hz == 0\" is true.", 0, 0);
   return;
}
/* AudioStreamWAV::generate_sample() const */void AudioStreamWAV::generate_sample(void) {
   uint uVar1;
   undefined8 uVar2;
   char cVar3;
   RefCounted *this;
   Object *pOVar4;
   long lVar5;
   Object *in_RSI;
   long *in_RDI;
   RefCounted *pRVar6;
   Object *pOVar7;
   long in_FS_OFFSET;
   byte bVar8;
   int local_48[6];
   long local_30;
   bVar8 = 0;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *in_RDI = 0;
   this(RefCounted * operator_new(0x1b0, ""));
   pRVar6 = this;
   for (lVar5 = 0x36; lVar5 != 0; lVar5 = lVar5 + -1) {
      *(undefined8*)pRVar6 = 0;
      pRVar6 = pRVar6 + (ulong)bVar8 * -0x10 + 8;
   }

   RefCounted::RefCounted(this);
   *(undefined8*)( this + 0x180 ) = 0;
   *(undefined***)this = &PTR__initialize_classv_00116c90;
   uVar2 = _LC16;
   *(undefined8*)( this + 400 ) = 0;
   *(undefined8*)( this + 0x198 ) = uVar2;
   *(undefined4*)( this + 0x1a0 ) = 0;
   *(undefined8*)( this + 0x1a4 ) = 0;
   postinitialize_handler((Object*)this);
   cVar3 = RefCounted::init_ref();
   if (cVar3 == '\0') {
      pOVar7 = (Object*)*in_RDI;
      if (pOVar7 != (Object*)0x0) {
         *in_RDI = 0;
         cVar3 = RefCounted::unreference();
         if (cVar3 != '\0') {
            this(RefCounted * 0x0);
            cVar3 = predelete_handler(pOVar7);
            if (cVar3 != '\0') goto LAB_001017f3;
         }

      }

   }
 else {
      pOVar7 = (Object*)*in_RDI;
      pOVar4 = pOVar7;
      if (this != (RefCounted*)pOVar7) {
         *in_RDI = (long)this;
         cVar3 = RefCounted::reference();
         if (cVar3 == '\0') {
            *in_RDI = 0;
         }

         pOVar4 = (Object*)this;
         if (( ( pOVar7 != (Object*)0x0 ) && ( cVar3 = RefCounted::unreference() ),cVar3 != '\0' )) {
            LAB_001017f3:( **(code**)( *(long*)pOVar7 + 0x140 ) )(pOVar7);
            Memory::free_static(pOVar7, false);
            pOVar4 = (Object*)this;
            if (this == (RefCounted*)0x0) goto LAB_001015d2;
         }

      }

      cVar3 = RefCounted::unreference();
      if (( cVar3 != '\0' ) && ( cVar3 = cVar3 != '\0' )) {
         ( **(code**)( *(long*)pOVar4 + 0x140 ) )(pOVar4);
         Memory::free_static(pOVar4, false);
      }

   }

   LAB_001015d2:Variant::Variant((Variant*)local_48, in_RSI);
   lVar5 = *in_RDI;
   pOVar4 = (Object*)Variant::get_validated_object();
   pOVar7 = *(Object**)( lVar5 + 0x180 );
   if (pOVar4 == pOVar7) goto LAB_0010164a;
   if (pOVar4 == (Object*)0x0) {
      if (pOVar7 == (Object*)0x0) goto LAB_0010164a;
      *(undefined8*)( lVar5 + 0x180 ) = 0;
   }
 else {
      pOVar4 = (Object*)__dynamic_cast(pOVar4, &Object::typeinfo, &AudioStream::typeinfo, 0);
      if (pOVar7 == pOVar4) goto LAB_0010164a;
      *(Object**)( lVar5 + 0x180 ) = pOVar4;
      if (( pOVar4 != (Object*)0x0 ) && ( cVar3 = cVar3 == '\0' )) {
         *(undefined8*)( lVar5 + 0x180 ) = 0;
      }

      if (pOVar7 == (Object*)0x0) goto LAB_0010164a;
   }

   cVar3 = RefCounted::unreference();
   if (( cVar3 != '\0' ) && ( cVar3 = cVar3 != '\0' )) {
      ( **(code**)( *(long*)pOVar7 + 0x140 ) )(pOVar7);
      Memory::free_static(pOVar7, false);
   }

   LAB_0010164a:if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   uVar1 = *(uint*)( in_RSI + 0x34c );
   lVar5 = *in_RDI;
   if (uVar1 == 2) {
      *(undefined4*)( lVar5 + 0x1a0 ) = 2;
   }
 else if (uVar1 < 3) {
      *(uint*)( lVar5 + 0x1a0 ) = ( uint )(uVar1 != 0);
   }
 else if (uVar1 == 3) {
      *(undefined4*)( lVar5 + 0x1a0 ) = 3;
   }

   *(undefined4*)( lVar5 + 0x1a4 ) = *(undefined4*)( in_RSI + 0x354 );
   *(undefined4*)( lVar5 + 0x1a8 ) = *(undefined4*)( in_RSI + 0x358 );
   *(undefined4*)( lVar5 + 0x19c ) = *(undefined4*)( in_RSI + 0x35c );
   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* AudioStreamPlaybackWAV::set_sample_playback(Ref<AudioSamplePlayback> const&) */void AudioStreamPlaybackWAV::set_sample_playback(AudioStreamPlaybackWAV *this, Ref *param_1) {
   long lVar1;
   char cVar2;
   Object *pOVar3;
   Object *pOVar4;
   pOVar4 = *(Object**)param_1;
   pOVar3 = *(Object**)( this + 0x408 );
   if (pOVar4 != pOVar3) {
      *(Object**)( this + 0x408 ) = pOVar4;
      if (pOVar4 == (Object*)0x0) {
         LAB_0010188e:if (pOVar3 == (Object*)0x0) {
            return;
         }

         cVar2 = RefCounted::unreference();
         joined_r0x0010189d:if (( cVar2 != '\0' ) && ( cVar2 = cVar2 != '\0' )) {
            ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
            Memory::free_static(pOVar3, false);
         }

      }
 else {
         cVar2 = RefCounted::reference();
         if (cVar2 == '\0') {
            *(undefined8*)( this + 0x408 ) = 0;
            goto LAB_0010188e;
         }

         if (pOVar3 != (Object*)0x0) {
            cVar2 = RefCounted::unreference();
            goto joined_r0x0010189d;
         }

      }

      pOVar3 = *(Object**)( this + 0x408 );
   }

   if (pOVar3 == (Object*)0x0) {
      return;
   }

   cVar2 = RefCounted::init_ref();
   if (cVar2 == '\0') {
      pOVar4 = *(Object**)( *(long*)( this + 0x408 ) + 0x188 );
      if (pOVar4 == (Object*)0x0) {
         return;
      }

      *(undefined8*)( *(long*)( this + 0x408 ) + 0x188 ) = 0;
      cVar2 = RefCounted::unreference();
      if (cVar2 == '\0') {
         return;
      }

      this(AudioStreamPlaybackWAV * 0x0);
      cVar2 = predelete_handler(pOVar4);
      if (cVar2 == '\0') {
         return;
      }

   }
 else {
      lVar1 = *(long*)( this + 0x408 );
      pOVar4 = *(Object**)( lVar1 + 0x188 );
      if (pOVar4 == (Object*)this) goto LAB_00101931;
      *(AudioStreamPlaybackWAV**)( lVar1 + 0x188 ) = this;
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
         *(undefined8*)( lVar1 + 0x188 ) = 0;
      }

      if (( ( pOVar4 == (Object*)0x0 ) || ( cVar2 = RefCounted::unreference() ),cVar2 == '\0' )) goto LAB_00101931;
   }

   ( **(code**)( *(long*)pOVar4 + 0x140 ) )(pOVar4);
   Memory::free_static(pOVar4, false);
   if (this == (AudioStreamPlaybackWAV*)0x0) {
      return;
   }

   LAB_00101931:cVar2 = RefCounted::unreference();
   if (( cVar2 != '\0' ) && ( cVar2 = predelete_handler((Object*)this) ),cVar2 != '\0') {
      ( **(code**)( *(long*)this + 0x140 ) )(this);
      Memory::free_static(this, false);
      return;
   }

   return;
}
/* AudioStreamWAV::get_stream_name() const */AudioStreamWAV * __thiscall AudioStreamWAV::get_stream_name(AudioStreamWAV *this){
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
/* AudioStreamWAV::set_data(Vector<unsigned char> const&) */void AudioStreamWAV::set_data(AudioStreamWAV *this, Vector *param_1) {
   undefined8 uVar1;
   code *pcVar2;
   uint uVar3;
   long *plVar4;
   void *__s;
   uint uVar5;
   int iVar6;
   plVar4 = (long*)AudioServer::get_singleton();
   ( **(code**)( *plVar4 + 0x170 ) )(plVar4);
   if (*(long*)( param_1 + 8 ) == 0) {
      if (*(int*)( this + 0x360 ) == 0) {
         __s = *(void**)( this + 0x368 );
         uVar5 = 0x20;
         iVar6 = 0;
      }
 else {
         *(undefined4*)( this + 0x360 ) = 0;
         __s = *(void**)( this + 0x368 );
         iVar6 = 0;
         uVar5 = 0x20;
      }

   }
 else {
      uVar1 = *(undefined8*)( *(long*)( param_1 + 8 ) + -8 );
      if (*(int*)( this + 0x360 ) != 0) {
         *(undefined4*)( this + 0x360 ) = 0;
      }

      iVar6 = (int)uVar1;
      uVar5 = iVar6 + 0x20;
      __s = *(void**)( this + 0x368 );
      if (uVar5 == 0) goto LAB_00101af3;
   }

   if (*(uint*)( this + 0x364 ) < uVar5) {
      uVar3 = iVar6 + 0x1fU | iVar6 + 0x1fU >> 1;
      uVar3 = uVar3 | uVar3 >> 2;
      uVar3 = uVar3 >> 4 | uVar3;
      uVar3 = uVar3 | uVar3 >> 8;
      uVar3 = ( uVar3 | uVar3 >> 0x10 ) + 1;
      *(uint*)( this + 0x364 ) = uVar3;
      __s = (void*)Memory::realloc_static(__s, (ulong)uVar3, false);
      *(void**)( this + 0x368 ) = __s;
      if (__s == (void*)0x0) {
         _err_print_error("resize", "./core/templates/local_vector.h", 0xa3, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }

   }

   *(uint*)( this + 0x360 ) = uVar5;
   LAB_00101af3:memset(__s, 0, (long)(int)uVar5);
   memcpy((void*)( *(long*)( this + 0x368 ) + 0x10 ), *(void**)( param_1 + 8 ), (long)iVar6);
   *(int*)( this + 0x370 ) = iVar6;
   plVar4 = (long*)AudioServer::get_singleton();
   /* WARNING: Could not recover jumptable at 0x00101b3b. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( **(code**)( *plVar4 + 0x178 ) )(plVar4);
   return;
}
/* AudioStreamPlaybackWAV::~AudioStreamPlaybackWAV() */void AudioStreamPlaybackWAV::~AudioStreamPlaybackWAV(AudioStreamPlaybackWAV *this) {
   Object *pOVar1;
   char cVar2;
   *(undefined***)this = &PTR__initialize_classv_00116df0;
   if (*(long*)( this + 0x408 ) != 0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
         pOVar1 = *(Object**)( this + 0x408 );
         cVar2 = predelete_handler(pOVar1);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
         }

      }

   }

   if (*(long*)( this + 0x3f8 ) != 0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
         pOVar1 = *(Object**)( this + 0x3f8 );
         cVar2 = predelete_handler(pOVar1);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
         }

      }

   }

   if (*(void**)( this + 0x3c8 ) != (void*)0x0) {
      if (*(int*)( this + 0x3c0 ) != 0) {
         *(undefined4*)( this + 0x3c0 ) = 0;
      }

      Memory::free_static(*(void**)( this + 0x3c8 ), false);
   }

   AudioStreamPlayback::~AudioStreamPlayback((AudioStreamPlayback*)this);
   return;
}
/* AudioStreamPlaybackWAV::~AudioStreamPlaybackWAV() */void AudioStreamPlaybackWAV::~AudioStreamPlaybackWAV(AudioStreamPlaybackWAV *this) {
   ~AudioStreamPlaybackWAV(this)
   ;;
   operator_delete(this, 0x410);
   return;
}
/* CowData<float>::_ref(CowData<float> const&) [clone .part.0] */void CowData<float>::_ref(CowData<float> *this, CowData *param_1) {
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
/* AudioStreamWAV::~AudioStreamWAV() */void AudioStreamWAV::~AudioStreamWAV(AudioStreamWAV *this) {
   bool bVar1;
   *(undefined***)this = &PTR__initialize_classv_00116fc0;
   if (*(void**)( this + 0x368 ) != (void*)0x0) {
      if (*(int*)( this + 0x360 ) != 0) {
         *(undefined4*)( this + 0x360 ) = 0;
      }

      Memory::free_static(*(void**)( this + 0x368 ), false);
   }

   bVar1 = StringName::configured != '\0';
   *(code**)this = strlen;
   if (bVar1) {
      if (*(long*)( this + 0x330 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00101f28;
      }

      if (*(long*)( this + 0x318 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00101f28;
      }

      if (*(long*)( this + 0x300 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00101f28;
      }

      if (*(long*)( this + 0x2e8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00101f28;
      }

      if (*(long*)( this + 0x2d0 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00101f28;
      }

      if (*(long*)( this + 0x2b8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00101f28;
      }

      if (*(long*)( this + 0x2a0 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00101f28;
      }

      if (*(long*)( this + 0x288 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00101f28;
      }

      if (*(long*)( this + 0x270 ) != 0) {
         StringName::unref();
      }

   }

   LAB_00101f28:Resource::~Resource((Resource*)this);
   return;
}
/* AudioStreamWAV::~AudioStreamWAV() */void AudioStreamWAV::~AudioStreamWAV(AudioStreamWAV *this) {
   bool bVar1;
   *(undefined***)this = &PTR__initialize_classv_00116fc0;
   if (*(void**)( this + 0x368 ) != (void*)0x0) {
      if (*(int*)( this + 0x360 ) != 0) {
         *(undefined4*)( this + 0x360 ) = 0;
      }

      Memory::free_static(*(void**)( this + 0x368 ), false);
   }

   bVar1 = StringName::configured != '\0';
   *(code**)this = strlen;
   if (bVar1) {
      if (*(long*)( this + 0x330 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_001020b8;
      }

      if (*(long*)( this + 0x318 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_001020b8;
      }

      if (*(long*)( this + 0x300 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_001020b8;
      }

      if (*(long*)( this + 0x2e8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_001020b8;
      }

      if (*(long*)( this + 0x2d0 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_001020b8;
      }

      if (*(long*)( this + 0x2b8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_001020b8;
      }

      if (*(long*)( this + 0x2a0 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_001020b8;
      }

      if (*(long*)( this + 0x288 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_001020b8;
      }

      if (*(long*)( this + 0x270 ) != 0) {
         StringName::unref();
      }

   }

   LAB_001020b8:Resource::~Resource((Resource*)this);
   operator_delete(this, 0x378);
   return;
}
/* CowData<unsigned char>::_ref(CowData<unsigned char> const&) [clone .part.0] */void CowData<unsigned_char>::_ref(CowData<unsigned_char> *this, CowData *param_1) {
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
/* CowData<float>::_copy_on_write() [clone .isra.0] */void CowData<float>::_copy_on_write(CowData<float> *this) {
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
/* AudioStreamPlaybackWAV::AudioStreamPlaybackWAV() */void AudioStreamPlaybackWAV::AudioStreamPlaybackWAV(AudioStreamPlaybackWAV *this) {
   long lVar1;
   AudioStreamPlaybackWAV *pAVar2;
   byte bVar3;
   bVar3 = 0;
   AudioStreamPlayback::AudioStreamPlayback((AudioStreamPlayback*)this);
   *(undefined***)this = &PTR__initialize_classv_00116df0;
   *(undefined8*)( this + 0x2a0 ) = 0;
   for (int i = 0; i < 3; i++) {
      *(undefined1(*) [16])( this + ( 16*i + 624 ) ) = (undefined1[16])0;
   }

   pAVar2 = this + 0x2a8;
   for (lVar1 = 0x21; lVar1 != 0; lVar1 = lVar1 + -1) {
      *(undefined8*)pAVar2 = 0;
      pAVar2 = pAVar2 + (ulong)bVar3 * -0x10 + 8;
   }

   *(undefined4*)pAVar2 = 0;
   *(undefined8*)( this + 0x3b4 ) = 0;
   *(undefined8*)( this + 0x3c0 ) = 0;
   *(undefined8*)( this + 0x3c8 ) = 0;
   *(undefined4*)( this + 0x3d0 ) = 0;
   *(undefined8*)( this + 0x3d8 ) = 0xffffffffffffffff;
   *(undefined8*)( this + 0x3e0 ) = 0;
   *(undefined8*)( this + 1000 ) = 0;
   *(undefined4*)( this + 0x3f0 ) = 1;
   this[0x3f4] = (AudioStreamPlaybackWAV)0x0;
   *(undefined8*)( this + 0x3f8 ) = 0;
   this[0x400] = (AudioStreamPlaybackWAV)0x0;
   *(undefined8*)( this + 0x408 ) = 0;
   return;
}
/* AudioStreamWAV::instantiate_playback() */void AudioStreamWAV::instantiate_playback(void) {
   Object *pOVar1;
   code *pcVar2;
   char cVar3;
   int iVar4;
   undefined4 uVar5;
   AudioStreamPlaybackWAV *this;
   long lVar6;
   uint uVar7;
   uint uVar8;
   Object *pOVar9;
   AudioStreamPlaybackWAV *pAVar10;
   Object *in_RSI;
   long *in_RDI;
   pAVar10 = (AudioStreamPlaybackWAV*)0x0;
   this(AudioStreamPlaybackWAV * operator_new(0x410, ""));
   AudioStreamPlaybackWAV::AudioStreamPlaybackWAV(this);
   postinitialize_handler((Object*)this);
   cVar3 = RefCounted::init_ref();
   if (cVar3 != '\0') {
      cVar3 = RefCounted::reference();
      if (cVar3 != '\0') {
         pAVar10 = this;
      }

      cVar3 = RefCounted::unreference();
      if (( cVar3 != '\0' ) && ( cVar3 = predelete_handler((Object*)this) ),cVar3 != '\0') {
         ( **(code**)( *(long*)this + 0x140 ) )(this);
         Memory::free_static(this, false);
      }

   }

   cVar3 = RefCounted::init_ref();
   pOVar1 = *(Object**)( (Object*)pAVar10 + 0x3f8 );
   pOVar9 = pOVar1;
   if (cVar3 == '\0') {
      if (pOVar1 != (Object*)0x0) {
         *(undefined8*)( (Object*)pAVar10 + 0x3f8 ) = 0;
         cVar3 = RefCounted::unreference();
         if (cVar3 != '\0') goto LAB_00102523;
      }

      LAB_0010246b:if (*(int*)( in_RSI + 0x348 ) != 3) goto LAB_0010247a;
      LAB_00102560:iVar4 = qoa_decode_header(*(long*)( in_RSI + 0x368 ) + 0x10, *(undefined4*)( in_RSI + 0x370 ), (Object*)pAVar10 + 0x2a8);
      if (iVar4 != 8) {
         _err_print_error("instantiate_playback", "scene/resources/audio_stream_wav.cpp", 0x2ad, "Condition \"ffp != 8\" is true. Returning: Ref<AudioStreamPlaybackWAV>()", 0, 0);
         *in_RDI = 0;
         goto LAB_001024b7;
      }

      uVar5 = qoa_max_frame_size((Object*)pAVar10 + 0x2a8);
      uVar8 = *(uint*)( (Object*)pAVar10 + 0x2b0 );
      *(undefined4*)( (Object*)pAVar10 + 0x3b8 ) = uVar5;
      if (0x1400 < uVar8) {
         uVar8 = 0x1400;
      }

      uVar8 = uVar8 * *(int*)( (Object*)pAVar10 + 0x2a8 );
      if (*(uint*)( (Object*)pAVar10 + 0x3c0 ) <= uVar8) {
         if (uVar8 <= *(uint*)( (Object*)pAVar10 + 0x3c0 )) goto LAB_0010247a;
         if (*(uint*)( (Object*)pAVar10 + 0x3c4 ) < uVar8) {
            uVar7 = uVar8 - 1 >> 1 | uVar8 - 1;
            uVar7 = uVar7 >> 2 | uVar7;
            uVar7 = uVar7 | uVar7 >> 4;
            uVar7 = uVar7 | uVar7 >> 8;
            uVar7 = ( uVar7 | uVar7 >> 0x10 ) + 1;
            *(uint*)( (Object*)pAVar10 + 0x3c4 ) = uVar7;
            lVar6 = Memory::realloc_static(*(void**)( (Object*)pAVar10 + 0x3c8 ), (ulong)uVar7 * 2, false);
            *(long*)( (Object*)pAVar10 + 0x3c8 ) = lVar6;
            if (lVar6 == 0) {
               _err_print_error("resize", "./core/templates/local_vector.h", 0xa3, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0, 0);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar2 = (code*)invalidInstructionException();
               ( *pcVar2 )();
            }

         }

      }

      *(uint*)( (Object*)pAVar10 + 0x3c0 ) = uVar8;
      *in_RDI = 0;
   }
 else {
      if (in_RSI != pOVar1) {
         *(Object**)( (Object*)pAVar10 + 0x3f8 ) = in_RSI;
         cVar3 = RefCounted::reference();
         if (cVar3 == '\0') {
            *(undefined8*)( (Object*)pAVar10 + 0x3f8 ) = 0;
         }

         pOVar9 = in_RSI;
         if (( ( pOVar1 != (Object*)0x0 ) && ( cVar3 = RefCounted::unreference() ),cVar3 != '\0' )) &&( cVar3 = cVar3 != '\0' )(**(code**)( *(long*)pOVar1 + 0x140 ))(pOVar1);
         Memory::free_static(pOVar1, false);
      }

   }

   cVar3 = RefCounted::unreference();
   if (cVar3 == '\0') goto LAB_0010246b;
   LAB_00102523:cVar3 = predelete_handler(pOVar9);
   if (cVar3 == '\0') goto LAB_0010246b;
   ( **(code**)( *(long*)pOVar9 + 0x140 ) )(pOVar9);
   Memory::free_static(pOVar9, false);
   if (*(int*)( in_RSI + 0x348 ) == 3) goto LAB_00102560;
   LAB_0010247a:*in_RDI = 0;
}
lVar6 = __dynamic_cast(pAVar10, &Object::typeinfo, &AudioStreamPlayback::typeinfo, 0);if (lVar6 != 0) {
   *in_RDI = lVar6;
   cVar3 = RefCounted::reference();
   if (cVar3 == '\0') {
      *in_RDI = 0;
   }

}
LAB_001024b7:cVar3 = RefCounted::unreference();if (( cVar3 != '\0' ) && ( cVar3 = predelete_handler((Object*)pAVar10) ),cVar3 != '\0') {
   ( **(code**)( *(long*)pAVar10 + 0x140 ) )(pAVar10);
   Memory::free_static(pAVar10, false);
   return;
}
return;}/* AudioStreamWAV::AudioStreamWAV() */void AudioStreamWAV::AudioStreamWAV(AudioStreamWAV *this) {
   Resource::Resource((Resource*)this);
   *(code**)this = strlen;
   *(undefined1(*) [16])( this + 0x240 ) = (undefined1[16])0x0;
   StringName::StringName((StringName*)( this + 0x270 ), "_instantiate_playback", false);
   this[0x278] = (AudioStreamWAV)0x0;
   *(undefined8*)( this + 0x280 ) = 0;
   StringName::StringName((StringName*)( this + 0x288 ), "_get_stream_name", false);
   this[0x290] = (AudioStreamWAV)0x0;
   *(undefined8*)( this + 0x298 ) = 0;
   StringName::StringName((StringName*)( this + 0x2a0 ), "_get_length", false);
   this[0x2a8] = (AudioStreamWAV)0x0;
   *(undefined8*)( this + 0x2b0 ) = 0;
   StringName::StringName((StringName*)( this + 0x2b8 ), "_is_monophonic", false);
   this[0x2c0] = (AudioStreamWAV)0x0;
   *(undefined8*)( this + 0x2c8 ) = 0;
   StringName::StringName((StringName*)( this + 0x2d0 ), "_get_bpm", false);
   this[0x2d8] = (AudioStreamWAV)0x0;
   *(undefined8*)( this + 0x2e0 ) = 0;
   StringName::StringName((StringName*)( this + 0x2e8 ), "_has_loop", false);
   this[0x2f0] = (AudioStreamWAV)0x0;
   *(undefined8*)( this + 0x2f8 ) = 0;
   StringName::StringName((StringName*)( this + 0x300 ), "_get_bar_beats", false);
   this[0x308] = (AudioStreamWAV)0x0;
   *(undefined8*)( this + 0x310 ) = 0;
   StringName::StringName((StringName*)( this + 0x318 ), "_get_beat_count", false);
   this[800] = (AudioStreamWAV)0x0;
   *(undefined8*)( this + 0x328 ) = 0;
   StringName::StringName((StringName*)( this + 0x330 ), "_get_parameter_list", false);
   this[0x338] = (AudioStreamWAV)0x0;
   *(undefined8*)( this + 0x340 ) = 0;
   *(undefined***)this = &PTR__initialize_classv_00116fc0;
   *(undefined8*)( this + 0x348 ) = 0;
   this[0x350] = (AudioStreamWAV)0x0;
   *(undefined8*)( this + 0x354 ) = 0;
   *(undefined8*)( this + 0x35c ) = 0xac44;
   *(undefined8*)( this + 0x364 ) = 0;
   *(undefined8*)( this + 0x36c ) = 0;
   return;
}
/* AudioStreamWAV::_bind_methods() */void AudioStreamWAV::_bind_methods(void) {
   char cVar1;
   long lVar2;
   code *pcVar3;
   undefined *puVar4;
   long *plVar5;
   MethodBind *pMVar6;
   uint uVar7;
   long *plVar8;
   long lVar9;
   long in_FS_OFFSET;
   undefined8 local_128;
   undefined8 local_120;
   undefined8 local_118;
   long local_110;
   long local_108;
   long *local_100;
   char *local_f8;
   undefined8 local_f0;
   char *local_e8;
   undefined8 local_e0;
   long *local_d8;
   Variant *local_b8;
   char *pcStack_b0;
   undefined8 local_a8;
   Variant *local_98;
   char *pcStack_90;
   undefined8 local_88;
   Variant **local_78;
   undefined1 auStack_70[16];
   undefined8 local_60;
   undefined1 local_58[16];
   long local_40;
   puVar4 = PTR__LC60_00117b88;
   auStack_70._8_8_ = auStack_70._0_8_;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Dictionary::Dictionary((Dictionary*)&local_100);
   local_a8 = 0;
   auStack_70._0_8_ = &pcStack_b0;
   local_b8 = (Variant*)0x1084d7;
   pcStack_b0 = "options";
   uVar7 = (uint)(Variant*)&local_78;
   local_78 = &local_b8;
   D_METHODP((char*)&local_e8, (char***)"load_from_buffer", uVar7);
   StringName::StringName((StringName*)&local_f8, "AudioStreamWAV", false);
   Variant::Variant((Variant*)&local_78, (Dictionary*)&local_100);
   local_58 = (undefined1[16])0x0;
   local_60 = 0;
   local_b8 = (Variant*)&local_78;
   pMVar6 = (MethodBind*)operator_new(0x60, "");
   MethodBind::MethodBind(pMVar6);
   *(undefined***)pMVar6 = &PTR__gen_argument_type_001171f8;
   *(code**)( pMVar6 + 0x58 ) = load_from_buffer;
   MethodBind::_generate_argument_types((int)pMVar6);
   *(undefined4*)( pMVar6 + 0x34 ) = 2;
   MethodBind::_set_static(SUB81(pMVar6, 0));
   MethodBind::_set_returns(SUB81(pMVar6, 0));
   StringName::operator =((StringName*)( pMVar6 + 0x18 ), (StringName*)&local_f8);
   ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)&local_e8, &local_b8, 1);
   if (Variant::needs_deinit[(int)local_60] != '\0') {
      Variant::_clear_internal();
   }

   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   if (( StringName::configured != '\0' ) && ( local_f8 != (char*)0x0 )) {
      StringName::unref();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_e8);
   Dictionary::~Dictionary((Dictionary*)&local_100);
   Dictionary::Dictionary((Dictionary*)&local_100);
   local_88 = 0;
   local_98 = (Variant*)puVar4;
   pcStack_90 = "options";
   auStack_70._0_8_ = &pcStack_90;
   local_78 = &local_98;
   D_METHODP((char*)&local_e8, (char***)"load_from_file", uVar7);
   StringName::StringName((StringName*)&local_f8, "AudioStreamWAV", false);
   Variant::Variant((Variant*)&local_78, (Dictionary*)&local_100);
   local_58 = (undefined1[16])0x0;
   local_60 = 0;
   local_98 = (Variant*)&local_78;
   pMVar6 = (MethodBind*)operator_new(0x60, "");
   MethodBind::MethodBind(pMVar6);
   *(undefined***)pMVar6 = &PTR__gen_argument_type_00117258;
   *(code**)( pMVar6 + 0x58 ) = load_from_file;
   MethodBind::_generate_argument_types((int)pMVar6);
   *(undefined4*)( pMVar6 + 0x34 ) = 2;
   MethodBind::_set_static(SUB81(pMVar6, 0));
   MethodBind::_set_returns(SUB81(pMVar6, 0));
   StringName::operator =((StringName*)( pMVar6 + 0x18 ), (StringName*)&local_f8);
   ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)&local_e8, &local_98, 1);
   if (Variant::needs_deinit[(int)local_60] == '\0') {
      cVar1 = Variant::needs_deinit[(int)local_78];
   }
 else {
      Variant::_clear_internal();
      cVar1 = Variant::needs_deinit[(int)local_78];
   }

   if (cVar1 != '\0') {
      Variant::_clear_internal();
   }

   if (( StringName::configured != '\0' ) && ( local_f8 != (char*)0x0 )) {
      StringName::unref();
   }

   plVar5 = local_d8;
   if (local_d8 != (long*)0x0) {
      LOCK();
      plVar8 = local_d8 + -2;
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (*plVar8 == 0) {
         if (local_d8 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = local_d8[-1];
         lVar9 = 0;
         local_d8 = (long*)0x0;
         plVar8 = plVar5;
         if (lVar2 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar8 != 0 )) {
                  StringName::unref();
               }

               lVar9 = lVar9 + 1;
               plVar8 = plVar8 + 1;
            }
 while ( lVar2 != lVar9 );
         }

         Memory::free_static(plVar5 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_e8 != (char*)0x0 )) {
      StringName::unref();
   }

   Dictionary::~Dictionary((Dictionary*)&local_100);
   pcStack_90 = (char*)0x0;
   local_98 = (Variant*)&_LC64;
   local_78 = &local_98;
   D_METHODP((char*)&local_e8, (char***)"set_data", uVar7);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar6 = create_method_bind<AudioStreamWAV,Vector<unsigned_char>const&>(set_data);
   ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)&local_e8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   plVar5 = local_d8;
   if (local_d8 != (long*)0x0) {
      LOCK();
      plVar8 = local_d8 + -2;
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (*plVar8 == 0) {
         if (local_d8 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = local_d8[-1];
         lVar9 = 0;
         local_d8 = (long*)0x0;
         plVar8 = plVar5;
         if (lVar2 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar8 != 0 )) {
                  StringName::unref();
               }

               lVar9 = lVar9 + 1;
               plVar8 = plVar8 + 1;
            }
 while ( lVar2 != lVar9 );
         }

         Memory::free_static(plVar5 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_e8 != (char*)0x0 )) {
      StringName::unref();
   }

   D_METHODP((char*)&local_e8, (char***)"get_data", 0);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar6 = create_method_bind<AudioStreamWAV,Vector<unsigned_char>>(get_data);
   ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)&local_e8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_e8);
   pcStack_90 = (char*)0x0;
   local_98 = (Variant*)0x10851a;
   local_78 = &local_98;
   D_METHODP((char*)&local_e8, (char***)"set_format", uVar7);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar6 = create_method_bind<AudioStreamWAV,AudioStreamWAV::Format>(set_format);
   ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)&local_e8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_e8);
   D_METHODP((char*)&local_e8, (char***)"get_format", 0);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar6 = create_method_bind<AudioStreamWAV,AudioStreamWAV::Format>(get_format);
   ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)&local_e8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   plVar5 = local_d8;
   if (local_d8 != (long*)0x0) {
      LOCK();
      plVar8 = local_d8 + -2;
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (*plVar8 == 0) {
         if (local_d8 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = local_d8[-1];
         lVar9 = 0;
         local_d8 = (long*)0x0;
         plVar8 = plVar5;
         if (lVar2 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar8 != 0 )) {
                  StringName::unref();
               }

               lVar9 = lVar9 + 1;
               plVar8 = plVar8 + 1;
            }
 while ( lVar2 != lVar9 );
         }

         Memory::free_static(plVar5 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_e8 != (char*)0x0 )) {
      StringName::unref();
   }

   local_98 = (Variant*)0x108537;
   pcStack_90 = (char*)0x0;
   local_78 = &local_98;
   D_METHODP((char*)&local_e8, (char***)"set_loop_mode", uVar7);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar6 = create_method_bind<AudioStreamWAV,AudioStreamWAV::LoopMode>(set_loop_mode);
   ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)&local_e8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_e8);
   D_METHODP((char*)&local_e8, (char***)"get_loop_mode", 0);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar6 = create_method_bind<AudioStreamWAV,AudioStreamWAV::LoopMode>(get_loop_mode);
   ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)&local_e8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_e8);
   pcStack_90 = (char*)0x0;
   local_98 = (Variant*)0x10855d;
   local_78 = &local_98;
   D_METHODP((char*)&local_e8, (char***)"set_loop_begin", uVar7);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar6 = create_method_bind<AudioStreamWAV,int>(set_loop_begin);
   ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)&local_e8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_e8);
   D_METHODP((char*)&local_e8, (char***)"get_loop_begin", 0);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar6 = create_method_bind<AudioStreamWAV,int>(get_loop_begin);
   ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)&local_e8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   plVar5 = local_d8;
   if (local_d8 != (long*)0x0) {
      LOCK();
      plVar8 = local_d8 + -2;
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (*plVar8 == 0) {
         if (local_d8 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = local_d8[-1];
         lVar9 = 0;
         local_d8 = (long*)0x0;
         plVar8 = plVar5;
         if (lVar2 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar8 != 0 )) {
                  StringName::unref();
               }

               lVar9 = lVar9 + 1;
               plVar8 = plVar8 + 1;
            }
 while ( lVar2 != lVar9 );
         }

         Memory::free_static(plVar5 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_e8 != (char*)0x0 )) {
      StringName::unref();
   }

   local_98 = (Variant*)0x108586;
   pcStack_90 = (char*)0x0;
   local_78 = &local_98;
   D_METHODP((char*)&local_e8, (char***)"set_loop_end", uVar7);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar6 = create_method_bind<AudioStreamWAV,int>(set_loop_end);
   ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)&local_e8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_e8);
   D_METHODP((char*)&local_e8, (char***)"get_loop_end", 0);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar6 = create_method_bind<AudioStreamWAV,int>(get_loop_end);
   ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)&local_e8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   plVar5 = local_d8;
   if (local_d8 != (long*)0x0) {
      LOCK();
      plVar8 = local_d8 + -2;
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (*plVar8 == 0) {
         if (local_d8 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = local_d8[-1];
         lVar9 = 0;
         local_d8 = (long*)0x0;
         plVar8 = plVar5;
         if (lVar2 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar8 != 0 )) {
                  StringName::unref();
               }

               lVar9 = lVar9 + 1;
               plVar8 = plVar8 + 1;
            }
 while ( lVar2 != lVar9 );
         }

         Memory::free_static(plVar5 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_e8 != (char*)0x0 )) {
      StringName::unref();
   }

   local_98 = (Variant*)0x1085a9;
   pcStack_90 = (char*)0x0;
   local_78 = &local_98;
   D_METHODP((char*)&local_e8, (char***)"set_mix_rate", uVar7);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar6 = create_method_bind<AudioStreamWAV,int>(set_mix_rate);
   ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)&local_e8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   plVar5 = local_d8;
   if (local_d8 != (long*)0x0) {
      LOCK();
      plVar8 = local_d8 + -2;
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (*plVar8 == 0) {
         if (local_d8 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = local_d8[-1];
         lVar9 = 0;
         local_d8 = (long*)0x0;
         plVar8 = plVar5;
         if (lVar2 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar8 != 0 )) {
                  StringName::unref();
               }

               lVar9 = lVar9 + 1;
               plVar8 = plVar8 + 1;
            }
 while ( lVar2 != lVar9 );
         }

         Memory::free_static(plVar5 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_e8 != (char*)0x0 )) {
      StringName::unref();
   }

   D_METHODP((char*)&local_e8, (char***)"get_mix_rate", 0);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar6 = create_method_bind<AudioStreamWAV,int>(get_mix_rate);
   ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)&local_e8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   plVar5 = local_d8;
   if (local_d8 != (long*)0x0) {
      LOCK();
      plVar8 = local_d8 + -2;
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (*plVar8 == 0) {
         if (local_d8 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = local_d8[-1];
         lVar9 = 0;
         local_d8 = (long*)0x0;
         plVar8 = plVar5;
         if (lVar2 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar8 != 0 )) {
                  StringName::unref();
               }

               lVar9 = lVar9 + 1;
               plVar8 = plVar8 + 1;
            }
 while ( lVar2 != lVar9 );
         }

         Memory::free_static(plVar5 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_e8 != (char*)0x0 )) {
      StringName::unref();
   }

   local_98 = (Variant*)0x1085bf;
   pcStack_90 = (char*)0x0;
   local_78 = &local_98;
   D_METHODP((char*)&local_e8, (char***)"set_stereo", uVar7);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar6 = create_method_bind<AudioStreamWAV,bool>(set_stereo);
   ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)&local_e8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_e8);
   D_METHODP((char*)&local_e8, (char***)"is_stereo", 0);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar6 = create_method_bind<AudioStreamWAV,bool>(is_stereo);
   ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)&local_e8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_e8);
   pcStack_90 = (char*)0x0;
   local_98 = (Variant*)&_LC60;
   local_78 = &local_98;
   D_METHODP((char*)&local_e8, (char***)"save_to_wav", uVar7);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar6 = create_method_bind<AudioStreamWAV,Error,String_const&>(save_to_wav);
   ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)&local_e8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   plVar5 = local_d8;
   if (local_d8 != (long*)0x0) {
      LOCK();
      plVar8 = local_d8 + -2;
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (*plVar8 == 0) {
         if (local_d8 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = local_d8[-1];
         lVar9 = 0;
         local_d8 = (long*)0x0;
         plVar8 = plVar5;
         if (lVar2 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar8 != 0 )) {
                  StringName::unref();
               }

               lVar9 = lVar9 + 1;
               plVar8 = plVar8 + 1;
            }
 while ( lVar2 != lVar9 );
         }

         Memory::free_static(plVar5 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_e8 != (char*)0x0 )) {
      StringName::unref();
   }

   _scs_create((char*)&local_100, true);
   _scs_create((char*)&local_108, true);
   local_e8 = "";
   local_110 = 0;
   local_118 = 0;
   local_e0 = 0;
   String::parse_latin1((StrRange*)&local_118);
   local_e8 = "data";
   local_120 = 0;
   local_e0 = 4;
   String::parse_latin1((StrRange*)&local_120);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_e8, 0x1d, (StrRange*)&local_120, 0, (StrRange*)&local_118, 2, (StrRange*)&local_110);
   local_128 = 0;
   local_f8 = "AudioStreamWAV";
   local_f0 = 0xe;
   String::parse_latin1((StrRange*)&local_128);
   StringName::StringName((StringName*)&local_f8, (String*)&local_128, false);
   ClassDB::add_property((StringName*)&local_f8, (PropertyInfo*)&local_e8, (StringName*)&local_108, (StringName*)&local_100, -1);
   if (( StringName::configured != '\0' ) && ( local_f8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_e8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_120);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_110 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_108 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_100 != (long*)0x0 )) {
      StringName::unref();
   }

   _scs_create((char*)&local_100, true);
   _scs_create((char*)&local_108, true);
   local_e8 = "8-Bit,16-Bit,IMA ADPCM,Quite OK Audio";
   local_110 = 0;
   local_118 = 0;
   local_e0 = 0x25;
   String::parse_latin1((StrRange*)&local_118);
   local_e8 = "format";
   local_120 = 0;
   local_e0 = 6;
   String::parse_latin1((StrRange*)&local_120);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_e8, 2, (StrRange*)&local_120, 2, (StrRange*)&local_118, 6, (StrRange*)&local_110);
   local_f8 = "AudioStreamWAV";
   local_128 = 0;
   local_f0 = 0xe;
   String::parse_latin1((StrRange*)&local_128);
   StringName::StringName((StringName*)&local_f8, (String*)&local_128, false);
   ClassDB::add_property((StringName*)&local_f8, (PropertyInfo*)&local_e8, (StringName*)&local_108, (StringName*)&local_100, -1);
   if (( StringName::configured != '\0' ) && ( local_f8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_e8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_120);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_110 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_108 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_100 != (long*)0x0 )) {
      StringName::unref();
   }

   _scs_create((char*)&local_100, true);
   _scs_create((char*)&local_108, true);
   local_e8 = "Disabled,Forward,Ping-Pong,Backward";
   local_110 = 0;
   local_118 = 0;
   local_e0 = 0x23;
   String::parse_latin1((StrRange*)&local_118);
   local_e8 = "loop_mode";
   local_120 = 0;
   local_e0 = 9;
   String::parse_latin1((StrRange*)&local_120);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_e8, 2, (StrRange*)&local_120, 2, (StrRange*)&local_118, 6, (StrRange*)&local_110);
   local_f8 = "AudioStreamWAV";
   local_128 = 0;
   local_f0 = 0xe;
   String::parse_latin1((StrRange*)&local_128);
   StringName::StringName((StringName*)&local_f8, (String*)&local_128, false);
   ClassDB::add_property((StringName*)&local_f8, (PropertyInfo*)&local_e8, (StringName*)&local_108, (StringName*)&local_100, -1);
   if (( StringName::configured != '\0' ) && ( local_f8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_e8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_120);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_110 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_108 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_100 != (long*)0x0 )) {
      StringName::unref();
   }

   _scs_create((char*)&local_100, true);
   _scs_create((char*)&local_108, true);
   local_e8 = "";
   local_110 = 0;
   local_118 = 0;
   local_e0 = 0;
   String::parse_latin1((StrRange*)&local_118);
   local_e8 = "loop_begin";
   local_120 = 0;
   local_e0 = 10;
   String::parse_latin1((StrRange*)&local_120);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_e8, 2, (StrRange*)&local_120, 0, (StrRange*)&local_118, 6, (StrRange*)&local_110);
   local_f8 = "AudioStreamWAV";
   local_128 = 0;
   local_f0 = 0xe;
   String::parse_latin1((StrRange*)&local_128);
   StringName::StringName((StringName*)&local_f8, (String*)&local_128, false);
   ClassDB::add_property((StringName*)&local_f8, (PropertyInfo*)&local_e8, (StringName*)&local_108, (StringName*)&local_100, -1);
   if (( StringName::configured != '\0' ) && ( local_f8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_e8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_120);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
   if (( ( StringName::configured != '\0' ) && ( ( local_110 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( ( local_108 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( local_100 != (long*)0x0 ) ) )) {
      StringName::unref();
   }

   _scs_create((char*)&local_100, true);
   _scs_create((char*)&local_108, true);
   local_e8 = "";
   local_110 = 0;
   local_118 = 0;
   local_e0 = 0;
   String::parse_latin1((StrRange*)&local_118);
   local_e8 = "loop_end";
   local_120 = 0;
   local_e0 = 8;
   String::parse_latin1((StrRange*)&local_120);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_e8, 2, (StrRange*)&local_120, 0, (StrRange*)&local_118, 6, (StrRange*)&local_110);
   local_f8 = "AudioStreamWAV";
   local_128 = 0;
   local_f0 = 0xe;
   String::parse_latin1((StrRange*)&local_128);
   StringName::StringName((StringName*)&local_f8, (String*)&local_128, false);
   ClassDB::add_property((StringName*)&local_f8, (PropertyInfo*)&local_e8, (StringName*)&local_108, (StringName*)&local_100, -1);
   if (( StringName::configured != '\0' ) && ( local_f8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_e8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_120);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_110 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_108 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_100 != (long*)0x0 )) {
      StringName::unref();
   }

   _scs_create((char*)&local_100, true);
   _scs_create((char*)&local_108, true);
   local_e8 = "";
   local_110 = 0;
   local_118 = 0;
   local_e0 = 0;
   String::parse_latin1((StrRange*)&local_118);
   local_e8 = "mix_rate";
   local_120 = 0;
   local_e0 = 8;
   String::parse_latin1((StrRange*)&local_120);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_e8, 2, (StrRange*)&local_120, 0, (StrRange*)&local_118, 6, (StrRange*)&local_110);
   local_f8 = "AudioStreamWAV";
   local_128 = 0;
   local_f0 = 0xe;
   String::parse_latin1((StrRange*)&local_128);
   StringName::StringName((StringName*)&local_f8, (String*)&local_128, false);
   ClassDB::add_property((StringName*)&local_f8, (PropertyInfo*)&local_e8, (StringName*)&local_108, (StringName*)&local_100, -1);
   if (( StringName::configured != '\0' ) && ( local_f8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_e8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_120);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_110 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_108 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_100 != (long*)0x0 )) {
      StringName::unref();
   }

   _scs_create((char*)&local_100, true);
   _scs_create((char*)&local_108, true);
   local_e8 = "";
   local_110 = 0;
   local_118 = 0;
   local_e0 = 0;
   String::parse_latin1((StrRange*)&local_118);
   local_e8 = "stereo";
   local_120 = 0;
   local_e0 = 6;
   String::parse_latin1((StrRange*)&local_120);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_e8, 1, (StrRange*)&local_120, 0, (StrRange*)&local_118, 6, (StrRange*)&local_110);
   local_f8 = "AudioStreamWAV";
   local_128 = 0;
   local_f0 = 0xe;
   String::parse_latin1((StrRange*)&local_128);
   StringName::StringName((StringName*)&local_f8, (String*)&local_128, false);
   ClassDB::add_property((StringName*)&local_f8, (PropertyInfo*)&local_e8, (StringName*)&local_108, (StringName*)&local_100, -1);
   if (( StringName::configured != '\0' ) && ( local_f8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_e8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_120);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_110 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_108 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_100 != (long*)0x0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_f8, "FORMAT_8_BITS", false);
   local_108 = 0;
   local_e8 = "FORMAT_8_BITS";
   local_e0 = 0xd;
   String::parse_latin1((StrRange*)&local_108);
   GetTypeInfo<AudioStreamWAV::Format,void>::get_class_info((GetTypeInfo<AudioStreamWAV::Format,void>*)&local_e8);
   local_100 = local_d8;
   local_d8 = (long*)0x0;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_e8);
   local_e8 = "AudioStreamWAV";
   local_110 = 0;
   local_e0 = 0xe;
   String::parse_latin1((StrRange*)&local_110);
   StringName::StringName((StringName*)&local_e8, (String*)&local_110, false);
   ClassDB::bind_integer_constant((StringName*)&local_e8, (StringName*)&local_100, (StringName*)&local_f8, 0, false);
   if (( StringName::configured != '\0' ) && ( local_e8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_110);
   if (( StringName::configured != '\0' ) && ( local_100 != (long*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
   if (( StringName::configured != '\0' ) && ( local_f8 != (char*)0x0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_f8, "FORMAT_16_BITS", false);
   local_108 = 0;
   local_e8 = "FORMAT_16_BITS";
   local_e0 = 0xe;
   String::parse_latin1((StrRange*)&local_108);
   GetTypeInfo<AudioStreamWAV::Format,void>::get_class_info((GetTypeInfo<AudioStreamWAV::Format,void>*)&local_e8);
   local_100 = local_d8;
   local_d8 = (long*)0x0;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_e8);
   local_e8 = "AudioStreamWAV";
   local_110 = 0;
   local_e0 = 0xe;
   String::parse_latin1((StrRange*)&local_110);
   StringName::StringName((StringName*)&local_e8, (String*)&local_110, false);
   ClassDB::bind_integer_constant((StringName*)&local_e8, (StringName*)&local_100, (StringName*)&local_f8, 1, false);
   if (( StringName::configured != '\0' ) && ( local_e8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_110);
   if (( StringName::configured != '\0' ) && ( local_100 != (long*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
   if (( StringName::configured != '\0' ) && ( local_f8 != (char*)0x0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_f8, "FORMAT_IMA_ADPCM", false);
   local_108 = 0;
   local_e8 = "FORMAT_IMA_ADPCM";
   local_e0 = 0x10;
   String::parse_latin1((StrRange*)&local_108);
   GetTypeInfo<AudioStreamWAV::Format,void>::get_class_info((GetTypeInfo<AudioStreamWAV::Format,void>*)&local_e8);
   local_100 = local_d8;
   local_d8 = (long*)0x0;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_e8);
   local_e8 = "AudioStreamWAV";
   local_110 = 0;
   local_e0 = 0xe;
   String::parse_latin1((StrRange*)&local_110);
   StringName::StringName((StringName*)&local_e8, (String*)&local_110, false);
   ClassDB::bind_integer_constant((StringName*)&local_e8, (StringName*)&local_100, (StringName*)&local_f8, 2, false);
   if (( StringName::configured != '\0' ) && ( local_e8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_110);
   if (( StringName::configured != '\0' ) && ( local_100 != (long*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
   if (( StringName::configured != '\0' ) && ( local_f8 != (char*)0x0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_f8, "FORMAT_QOA", false);
   local_108 = 0;
   local_e8 = "FORMAT_QOA";
   local_e0 = 10;
   String::parse_latin1((StrRange*)&local_108);
   GetTypeInfo<AudioStreamWAV::Format,void>::get_class_info((GetTypeInfo<AudioStreamWAV::Format,void>*)&local_e8);
   local_100 = local_d8;
   local_d8 = (long*)0x0;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_e8);
   local_e8 = "AudioStreamWAV";
   local_110 = 0;
   local_e0 = 0xe;
   String::parse_latin1((StrRange*)&local_110);
   StringName::StringName((StringName*)&local_e8, (String*)&local_110, false);
   ClassDB::bind_integer_constant((StringName*)&local_e8, (StringName*)&local_100, (StringName*)&local_f8, 3, false);
   if (( StringName::configured != '\0' ) && ( local_e8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_110);
   if (( StringName::configured != '\0' ) && ( local_100 != (long*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
   if (( StringName::configured != '\0' ) && ( local_f8 != (char*)0x0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_f8, "LOOP_DISABLED", false);
   local_108 = 0;
   local_e8 = "LOOP_DISABLED";
   local_e0 = 0xd;
   String::parse_latin1((StrRange*)&local_108);
   GetTypeInfo<AudioStreamWAV::LoopMode,void>::get_class_info((GetTypeInfo<AudioStreamWAV::LoopMode,void>*)&local_e8);
   local_100 = local_d8;
   local_d8 = (long*)0x0;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_e8);
   local_e8 = "AudioStreamWAV";
   local_110 = 0;
   local_e0 = 0xe;
   String::parse_latin1((StrRange*)&local_110);
   StringName::StringName((StringName*)&local_e8, (String*)&local_110, false);
   ClassDB::bind_integer_constant((StringName*)&local_e8, (StringName*)&local_100, (StringName*)&local_f8, 0, false);
   if (( StringName::configured != '\0' ) && ( local_e8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_110);
   if (( StringName::configured != '\0' ) && ( local_100 != (long*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
   if (( StringName::configured != '\0' ) && ( local_f8 != (char*)0x0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_f8, "LOOP_FORWARD", false);
   local_108 = 0;
   local_e8 = "LOOP_FORWARD";
   local_e0 = 0xc;
   String::parse_latin1((StrRange*)&local_108);
   GetTypeInfo<AudioStreamWAV::LoopMode,void>::get_class_info((GetTypeInfo<AudioStreamWAV::LoopMode,void>*)&local_e8);
   local_100 = local_d8;
   local_d8 = (long*)0x0;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_e8);
   local_e8 = "AudioStreamWAV";
   local_110 = 0;
   local_e0 = 0xe;
   String::parse_latin1((StrRange*)&local_110);
   StringName::StringName((StringName*)&local_e8, (String*)&local_110, false);
   ClassDB::bind_integer_constant((StringName*)&local_e8, (StringName*)&local_100, (StringName*)&local_f8, 1, false);
   if (( StringName::configured != '\0' ) && ( local_e8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_110);
   if (( StringName::configured != '\0' ) && ( local_100 != (long*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
   if (( StringName::configured != '\0' ) && ( local_f8 != (char*)0x0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_f8, "LOOP_PINGPONG", false);
   local_108 = 0;
   local_e8 = "LOOP_PINGPONG";
   local_e0 = 0xd;
   String::parse_latin1((StrRange*)&local_108);
   GetTypeInfo<AudioStreamWAV::LoopMode,void>::get_class_info((GetTypeInfo<AudioStreamWAV::LoopMode,void>*)&local_e8);
   local_100 = local_d8;
   local_d8 = (long*)0x0;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_e8);
   local_e8 = "AudioStreamWAV";
   local_110 = 0;
   local_e0 = 0xe;
   String::parse_latin1((StrRange*)&local_110);
   StringName::StringName((StringName*)&local_e8, (String*)&local_110, false);
   ClassDB::bind_integer_constant((StringName*)&local_e8, (StringName*)&local_100, (StringName*)&local_f8, 2, false);
   if (( StringName::configured != '\0' ) && ( local_e8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_110);
   if (( StringName::configured != '\0' ) && ( local_100 != (long*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
   if (( StringName::configured != '\0' ) && ( local_f8 != (char*)0x0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_f8, "LOOP_BACKWARD", false);
   local_108 = 0;
   local_e8 = "LOOP_BACKWARD";
   local_e0 = 0xd;
   String::parse_latin1((StrRange*)&local_108);
   GetTypeInfo<AudioStreamWAV::LoopMode,void>::get_class_info((GetTypeInfo<AudioStreamWAV::LoopMode,void>*)&local_e8);
   local_100 = local_d8;
   local_d8 = (long*)0x0;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_e8);
   local_e8 = "AudioStreamWAV";
   local_110 = 0;
   local_e0 = 0xe;
   String::parse_latin1((StrRange*)&local_110);
   StringName::StringName((StringName*)&local_e8, (String*)&local_110, false);
   ClassDB::bind_integer_constant((StringName*)&local_e8, (StringName*)&local_100, (StringName*)&local_f8, 3, false);
   if (( StringName::configured != '\0' ) && ( local_e8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_110);
   if (( StringName::configured != '\0' ) && ( local_100 != (long*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
   if (( StringName::configured != '\0' ) && ( local_f8 != (char*)0x0 )) {
      StringName::unref();
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* CowData<unsigned char>::_copy_on_write() [clone .isra.0] */void CowData<unsigned_char>::_copy_on_write(CowData<unsigned_char> *this) {
   size_t __n;
   code *pcVar1;
   undefined8 *puVar2;
   ulong uVar3;
   if (( *(long*)this == 0 ) || ( *(ulong*)( *(long*)this + -0x10 ) < 2 )) {
      return;
   }

   if (*(long*)this == 0) {
      /* WARNING: Does not return */
      pcVar1 = (code*)invalidInstructionException();
      ( *pcVar1 )();
   }

   __n = *(size_t*)( *(long*)this + -8 );
   uVar3 = 0x10;
   if (__n != 0) {
      uVar3 = __n - 1 | __n - 1 >> 1;
      uVar3 = uVar3 | uVar3 >> 2;
      uVar3 = uVar3 | uVar3 >> 4;
      uVar3 = uVar3 | uVar3 >> 8;
      uVar3 = uVar3 | uVar3 >> 0x10;
      uVar3 = ( uVar3 | uVar3 >> 0x20 ) + 0x11;
   }

   puVar2 = (undefined8*)Memory::alloc_static(uVar3, false);
   if (puVar2 != (undefined8*)0x0) {
      *puVar2 = 1;
      puVar2[1] = __n;
      memcpy(puVar2 + 2, *(void**)this, __n);
      _unref(this);
      *(undefined8**)this = puVar2 + 2;
      return;
   }

   _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
   return;
}
/* Error CowData<unsigned char>::resize<false>(long) [clone .isra.0] */void CowData<unsigned_char>::resize<false>(CowData<unsigned_char> *this, long param_1) {
   CowData<unsigned_char> *pCVar1;
   long *plVar2;
   long lVar3;
   int iVar4;
   ulong uVar5;
   CowData<unsigned_char> *pCVar6;
   undefined8 *puVar7;
   undefined8 *puVar8;
   CowData<unsigned_char> *pCVar9;
   long lVar10;
   if (param_1 < 0) {
      _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      return;
   }

   lVar3 = *(long*)this;
   if (lVar3 == 0) {
      if (param_1 == 0) {
         return;
      }

      _copy_on_write(this);
      LAB_00105196:lVar10 = 0;
      pCVar6 = (CowData<unsigned_char>*)0x0;
   }
 else {
      lVar10 = *(long*)( lVar3 + -8 );
      if (param_1 == lVar10) {
         return;
      }

      if (param_1 == 0) {
         LOCK();
         plVar2 = (long*)( lVar3 + -0x10 );
         *plVar2 = *plVar2 + -1;
         UNLOCK();
         if (*plVar2 != 0) {
            *(undefined8*)this = 0;
            return;
         }

         lVar3 = *(long*)this;
         *(undefined8*)this = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
         return;
      }

      _copy_on_write(this);
      if (lVar10 == 0) goto LAB_00105196;
      uVar5 = lVar10 - 1U | lVar10 - 1U >> 1;
      uVar5 = uVar5 | uVar5 >> 2;
      uVar5 = uVar5 | uVar5 >> 4;
      uVar5 = uVar5 | uVar5 >> 8;
      uVar5 = uVar5 | uVar5 >> 0x10;
      pCVar6 = (CowData<unsigned_char>*)( ( uVar5 | uVar5 >> 0x20 ) + 1 );
   }

   uVar5 = param_1 - 1U | param_1 - 1U >> 1;
   uVar5 = uVar5 | uVar5 >> 2;
   uVar5 = uVar5 | uVar5 >> 4;
   uVar5 = uVar5 | uVar5 >> 8;
   uVar5 = uVar5 | uVar5 >> 0x10;
   pCVar9 = (CowData<unsigned_char>*)( uVar5 | uVar5 >> 0x20 );
   pCVar1 = pCVar9 + 1;
   if (param_1 <= lVar10) {
      if (( pCVar1 != pCVar6 ) && ( iVar4 = iVar4 != 0 )) {
         return;
      }

      if (*(long*)this != 0) {
         *(long*)( *(long*)this + -8 ) = param_1;
         return;
      }

      FUN_0010abae();
      return;
   }

   if (pCVar1 != pCVar6) {
      if (lVar10 == 0) {
         puVar7 = (undefined8*)Memory::alloc_static(( ulong )(pCVar9 + 0x11), false);
         if (puVar7 == (undefined8*)0x0) {
            _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
            return;
         }

         puVar8 = puVar7 + 2;
         *puVar7 = 1;
         puVar7[1] = 0;
         *(undefined8**)this = puVar8;
         goto LAB_001050ec;
      }

      pCVar9 = this;
      iVar4 = _realloc(this, (long)pCVar1);
      if (iVar4 != 0) {
         return;
      }

   }

   puVar8 = *(undefined8**)this;
   if (puVar8 == (undefined8*)0x0) {
      resize<false>((long)pCVar9);
      return;
   }

   LAB_001050ec:puVar8[-1] = param_1;
   return;
}
/* AudioStreamWAV::get_data() const */void AudioStreamWAV::get_data(void) {
   uint uVar1;
   long lVar2;
   long in_RSI;
   long in_RDI;
   uVar1 = *(uint*)( in_RSI + 0x370 );
   *(undefined8*)( in_RDI + 8 ) = 0;
   if (uVar1 == 0) {
      return;
   }

   CowData<unsigned_char>::resize<false>((CowData<unsigned_char>*)( in_RDI + 8 ), (ulong)uVar1);
   uVar1 = *(uint*)( in_RSI + 0x370 );
   lVar2 = *(long*)( in_RSI + 0x368 );
   CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char>*)( in_RDI + 8 ));
   memcpy(*(void**)( in_RDI + 8 ), (void*)( lVar2 + 0x10 ), (ulong)uVar1);
   return;
}
/* AudioStreamWAV::save_to_wav(String const&) */undefined8 AudioStreamWAV::save_to_wav(AudioStreamWAV *this, String *param_1) {
   long *plVar1;
   int iVar2;
   int iVar3;
   long lVar4;
   code *pcVar5;
   Object *pOVar6;
   char cVar7;
   long lVar8;
   uint uVar9;
   undefined8 uVar10;
   int iVar11;
   int iVar12;
   int iVar13;
   long in_FS_OFFSET;
   bool bVar14;
   undefined8 local_70;
   Object *local_68;
   undefined8 local_60;
   undefined *local_58;
   long local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar11 = *(int*)( this + 0x348 );
   if (iVar11 - 2U < 2) {
      uVar10 = 2;
      _err_print_error("save_to_wav", "scene/resources/audio_stream_wav.cpp", 600, "Saving IMA_ADPCM and QOA samples is not supported yet", 0, 1);
      goto LAB_00105660;
   }

   iVar2 = *(int*)( this + 0x370 );
   iVar13 = 1;
   iVar3 = *(int*)( this + 0x35c );
   iVar12 = (byte)this[0x350] + 1;
   if (iVar11 != 0) {
      iVar13 = ( uint )(iVar11 == 1) * 2;
   }

   local_70 = 0;
   plVar1 = (long*)( *(long*)param_1 + -0x10 );
   if (*(long*)param_1 != 0) {
      do {
         lVar4 = *plVar1;
         if (lVar4 == 0) goto LAB_00105335;
         LOCK();
         lVar8 = *plVar1;
         bVar14 = lVar4 == lVar8;
         if (bVar14) {
            *plVar1 = lVar4 + 1;
            lVar8 = lVar4;
         }

         UNLOCK();
      }
 while ( !bVar14 );
      if (lVar8 != -1) {
         local_70 = *(undefined8*)param_1;
      }

   }

   LAB_00105335:iVar11 = (int)(CowData<char32_t>*)&local_70;
   String::substr((int)(CowData<char32_t>*)&local_60, iVar11);
   String::to_lower();
   cVar7 = String::operator !=((String*)&local_58, ".wav");
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   if (cVar7 != '\0') {
      String::operator +=((String*)&local_70, ".wav");
   }

   FileAccess::open((String*)&local_68, iVar11, (Error*)0x2);
   pOVar6 = local_68;
   if (local_68 == (Object*)0x0) {
      uVar10 = 0xd;
      _err_print_error("save_to_wav", "scene/resources/audio_stream_wav.cpp", 0x27c, "Condition \"file.is_null()\" is true. Returning: ERR_FILE_CANT_WRITE", 0, 0);
   }
 else {
      pcVar5 = *(code**)( *(long*)local_68 + 0x2a8 );
      local_58 = &_LC108;
      local_60 = 0;
      local_50 = 4;
      String::parse_latin1((StrRange*)&local_60);
      ( *pcVar5 )(pOVar6, (CowData<char32_t>*)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
      ( **(code**)( *(long*)local_68 + 0x278 ) )(local_68, iVar2 + 0x24);
      pOVar6 = local_68;
      pcVar5 = *(code**)( *(long*)local_68 + 0x2a8 );
      local_58 = &_LC109;
      local_60 = 0;
      local_50 = 4;
      String::parse_latin1((StrRange*)&local_60);
      ( *pcVar5 )(pOVar6, (CowData<char32_t>*)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
      pOVar6 = local_68;
      pcVar5 = *(code**)( *(long*)local_68 + 0x2a8 );
      local_58 = &_LC110;
      local_60 = 0;
      local_50 = 4;
      String::parse_latin1((StrRange*)&local_60);
      ( *pcVar5 )(pOVar6, (CowData<char32_t>*)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
      ( **(code**)( *(long*)local_68 + 0x278 ) )(local_68, 0x10);
      ( **(code**)( *(long*)local_68 + 0x270 ) )(local_68, 1);
      ( **(code**)( *(long*)local_68 + 0x270 ) )(local_68, iVar12);
      ( **(code**)( *(long*)local_68 + 0x278 ) )(local_68, iVar3);
      ( **(code**)( *(long*)local_68 + 0x278 ) )(local_68, iVar3 * iVar12 * iVar13);
      ( **(code**)( *(long*)local_68 + 0x270 ) )(local_68, iVar12 * iVar13);
      ( **(code**)( *(long*)local_68 + 0x270 ) )(local_68, iVar13 * 8);
      pOVar6 = local_68;
      pcVar5 = *(code**)( *(long*)local_68 + 0x2a8 );
      local_58 = &_LC64;
      local_60 = 0;
      local_50 = 4;
      String::parse_latin1((StrRange*)&local_60);
      ( *pcVar5 )(pOVar6, (CowData<char32_t>*)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
      ( **(code**)( *(long*)local_68 + 0x278 ) )(local_68, iVar2);
      get_data();
      lVar4 = local_50;
      if (( *(uint*)( this + 0x348 ) & 0xfffffffd ) == 1) {
         uVar9 = 0;
         if (*(uint*)( this + 0x370 ) >> 1 == 0) goto LAB_00105688;
         do {
            uVar9 = uVar9 + 1;
            ( **(code**)( *(long*)local_68 + 0x270 ) )();
         }
 while ( uVar9<*(uint*)( this + 0x370 )> > 1 );
         LAB_00105626:LOCK();
         plVar1 = (long*)( lVar4 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            Memory::free_static((void*)( local_50 + -0x10 ), false);
         }

      }
 else {
         if (( *(uint*)( this + 0x348 ) == 0 ) && ( *(int*)( this + 0x370 ) != 0 )) {
            uVar9 = 0;
            do {
               uVar9 = uVar9 + 1;
               ( **(code**)( *(long*)local_68 + 0x268 ) )();
            }
 while ( uVar9 < *(uint*)( this + 0x370 ) );
            goto LAB_00105626;
         }

         LAB_00105688:if (local_50 != 0) goto LAB_00105626;
      }

      uVar10 = 0;
   }

   if (( ( local_68 != (Object*)0x0 ) && ( cVar7 = RefCounted::unreference() ),cVar7 != '\0' )) &&( cVar7 = cVar7 != '\0' )(**(code**)( *(long*)local_68 + 0x140 ))(local_68);
   Memory::free_static(local_68, false);
}
CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);LAB_00105660:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return uVar10;}/* Error CowData<float>::resize<false>(long) [clone .isra.0] */void CowData<float>::resize<false>(CowData<float> *this, long param_1) {
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

            FUN_0010abc6();
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
                  goto LAB_001058c1;
               }

               uVar9 = 0x171;
               pcVar7 = "Parameter \"mem_new\" is null.";
               goto LAB_001059b2;
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

         LAB_001058c1:puVar8[-1] = param_1;
         return;
      }

   }

   uVar9 = 0x16a;
   pcVar7 = "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY";
   LAB_001059b2:_err_print_error("resize", "./core/templates/cowdata.h", uVar9, pcVar7, 0, 0);
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* AudioStreamWAV::load_from_buffer(Vector<unsigned char> const&, Dictionary const&) */AudioStreamWAV * __thiscall
AudioStreamWAV::load_from_buffer(AudioStreamWAV *this,Vector *param_1,Dictionary *param_2){
   float *pfVar1;
   float fVar2;
   code *pcVar3;
   ushort uVar4;
   bool bVar5;
   long lVar6;
   AudioStreamWAV *pAVar7;
   char cVar8;
   char cVar9;
   char cVar10;
   bool bVar11;
   byte bVar12;
   ushort uVar13;
   ushort uVar14;
   short sVar15;
   int iVar16;
   uint uVar17;
   uint uVar18;
   uint uVar19;
   uint uVar20;
   int iVar21;
   RefCounted *this_00;
   char *pcVar22;
   Variant *pVVar23;
   ulong uVar24;
   int iVar25;
   int iVar26;
   undefined1 *puVar27;
   long lVar28;
   undefined8 uVar29;
   int iVar30;
   Object *pOVar31;
   long lVar32;
   int iVar33;
   long lVar34;
   long lVar35;
   char cVar36;
   long lVar37;
   int iVar38;
   long in_FS_OFFSET;
   byte bVar39;
   float fVar40;
   float fVar41;
   float fVar42;
   undefined4 uVar43;
   float fVar44;
   double dVar45;
   float fVar46;
   int local_230;
   int local_228;
   int local_224;
   uint local_218;
   int local_214;
   int local_200;
   byte local_1e0;
   Vector local_1c8[8];
   long local_1c0;
   Vector local_1b8[8];
   long local_1b0;
   Vector local_1a8[8];
   long local_1a0;
   Vector local_198[8];
   long local_190;
   undefined8 local_188;
   long local_180;
   AudioStreamWAV *local_178;
   long local_170;
   uint local_168;
   int local_164;
   int local_160;
   char local_4e;
   char local_4d;
   char local_4c;
   char local_4b;
   char local_4a;
   char local_49;
   char local_48;
   char local_47;
   undefined1 local_46;
   char local_45;
   char local_44;
   char local_43;
   char local_42;
   undefined1 local_41;
   long local_40;
   bVar39 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   this_00 = (RefCounted*)operator_new(0x1a8, "");
   RefCounted::RefCounted(this_00);
   lVar28 = 0;
   *(undefined2*)( this_00 + 0x17c ) = 0;
   *(undefined4*)( this_00 + 0x180 ) = 2;
   *(undefined2*)( this_00 + 0x184 ) = 0;
   *(code**)this_00 = Dictionary::operator [];
   *(undefined1(*) [16])( this_00 + 0x188 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x198 ) = (undefined1[16])0x0;
   postinitialize_handler((Object*)this_00);
   cVar8 = RefCounted::init_ref();
   if (cVar8 == '\0') {
      /* WARNING: Does not return */
      pcVar3 = (code*)invalidInstructionException();
      ( *pcVar3 )();
   }

   cVar9 = RefCounted::reference();
   pOVar31 = (Object*)0x0;
   if (cVar9 != '\0') {
      pOVar31 = (Object*)this_00;
   }

   cVar9 = RefCounted::unreference();
   if (( cVar9 != '\0' ) && ( cVar9 = predelete_handler((Object*)this_00) ),cVar9 != '\0') {
      ( **(code**)( *(long*)this_00 + 0x140 ) )(this_00);
      Memory::free_static(this_00, false);
   }

   lVar37 = *(long*)( param_1 + 8 );
   if (lVar37 == 0) {
      uVar29 = 0;
   }
 else {
      uVar29 = *(undefined8*)( lVar37 + -8 );
   }

   iVar16 = ( **(code**)( *(long*)pOVar31 + 0x2f0 ) )(pOVar31, lVar37, uVar29);
   if (iVar16 != 0) {
      _err_print_error("load_from_buffer", "scene/resources/audio_stream_wav.cpp", 0x2dc, "Condition \"err != OK\" is true. Returning: Ref<AudioStreamWAV>()", "Cannot create memfile for WAV file buffer.", 0, 0);
      *(undefined8*)this = 0;
      goto LAB_00105bbc;
   }

   local_46 = 0;
   ( **(code**)( *(long*)pOVar31 + 0x220 ) )(pOVar31, &local_4a, 4);
   if (( ( ( local_4a == 'R' ) && ( local_49 == 'I' ) ) && ( local_48 == 'F' ) ) && ( local_47 == 'F' )) {
      iVar16 = ( **(code**)( *(long*)pOVar31 + 0x1f0 ) )(pOVar31);
      pcVar22 = (char*)( **(code**)( *(long*)pOVar31 + 0x1d0 ) )(pOVar31);
      if ((char*)( ulong )(iVar16 + 8) != pcVar22) {
         uVar19 = 0x108672;
         local_188 = 0;
         if ((char*)( ulong )(iVar16 + 8) < pcVar22) {
            uVar19 = 0x10866b;
         }

         local_170 = 0x2d;
         local_178 = (AudioStreamWAV*)0x108a90;
         String::parse_latin1((StrRange*)&local_188);
         vformat<unsigned_long,char_const*,unsigned_int>((String*)&local_178, ( ulong ) & local_188, pcVar22, uVar19);
         lVar28 = 0;
         _err_print_error("load_from_buffer", "scene/resources/audio_stream_wav.cpp", 0x2ef, (String*)&local_178);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_178);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_188);
      }

      local_41 = 0;
      ( **(code**)( *(long*)pOVar31 + 0x220 ) )(pOVar31, &local_45, 4);
      if (( ( local_45 == 'W' ) && ( local_44 == 'A' ) ) && ( ( local_43 == 'V' && ( local_42 == 'E' ) ) )) {
         Variant::Variant((Variant*)&local_168, "edit/loop_mode");
         pVVar23 = (Variant*)Dictionary::operator []((Variant*)param_2);
         iVar16 = Variant::operator_cast_to_int(pVVar23);
         puVar27 = Variant::needs_deinit;
         if (Variant::needs_deinit[(int)local_168] != '\0') {
            Variant::_clear_internal();
         }

         uVar19 = 0;
         cVar9 = '\0';
         local_218 = 0;
         local_214 = 0;
         iVar21 = 0;
         local_224 = 0;
         local_228 = 0;
         local_200 = 0;
         cVar36 = '\0';
         local_1c0 = 0;
         uVar4 = 1;
         while (cVar10 = ( **(code**)( *(long*)pOVar31 + 0x1d8 ) )(pOVar31),cVar10 == '\0') {
            ( **(code**)( *(long*)pOVar31 + 0x220 ) )(pOVar31, &local_4e, 4);
            uVar17 = ( **(code**)( *(long*)pOVar31 + 0x1f0 ) )(pOVar31);
            uVar18 = ( **(code**)( *(long*)pOVar31 + 0x1c8 ) )(pOVar31);
            cVar10 = ( **(code**)( *(long*)pOVar31 + 0x1d8 ) )(pOVar31);
            if (cVar10 != '\0') break;
            if (local_4e != 'f') goto LAB_00105f40;
            if (( ( local_4d == 'm' ) && ( local_4c == 't' ) ) && ( ( local_4b == ' ' && ( cVar9 == '\0' ) ) )) {
               uVar13 = ( **(code**)( *(long*)pOVar31 + 0x1e8 ) )(pOVar31);
               uVar4 = uVar13 & 0xfffd;
               if (( uVar13 & 0xfffd ) == 1) {
                  uVar14 = ( **(code**)( *(long*)pOVar31 + 0x1e8 ) )(pOVar31);
                  uVar19 = (uint)uVar14;
                  if (uVar19 - 1 < 2) {
                     local_200 = ( **(code**)( *(long*)pOVar31 + 0x1f0 ) )(pOVar31);
                     ( **(code**)( *(long*)pOVar31 + 0x1f0 ) )(pOVar31);
                     ( **(code**)( *(long*)pOVar31 + 0x1e8 ) )(pOVar31);
                     uVar24 = ( **(code**)( *(long*)pOVar31 + 0x1e8 ) )(pOVar31);
                     local_218 = (uint)uVar24 & 0xffff;
                     if (( ( uVar24 & 7 ) == 0 ) && ( ( uVar24 & 0xffff ) != 0 )) {
                        cVar9 = cVar8;
                        if (uVar13 == 3) {
                           if (( uVar24 & 0x1f ) != 0) {
                              _err_print_error("load_from_buffer", "scene/resources/audio_stream_wav.cpp", 0x336, "Method/function failed. Returning: Ref<AudioStreamWAV>()", "Invalid amount of bits in the IEEE float sample (should be 32 or 64).", 0, 0, cVar36);
                              goto LAB_00107162;
                           }

                           uVar4 = 3;
                        }

                        LAB_00105f40:if (local_4e == 'd') {
                           if (( ( ( local_4d != 'a' ) || ( local_4c != 't' ) ) || ( local_4b != 'a' ) ) || ( cVar36 != '\0' )) goto LAB_00105f56;
                           if (cVar9 == '\0') {
                              _err_print_error("load_from_buffer", "scene/resources/audio_stream_wav.cpp", 0x342, "\'data\' chunk before \'format\' chunk found.");
                              break;
                           }

                           uVar20 = uVar17;
                           if ((long)pcVar22 - (ulong)uVar18 < (ulong)uVar17) {
                              lVar28 = 0;
                              _err_print_error("load_from_buffer", "scene/resources/audio_stream_wav.cpp", 0x349, "Data chunk size is smaller than expected. Proceeding with actual data size.");
                              uVar20 = ( uint )((long)pcVar22 - (ulong)uVar18);
                           }

                           if (uVar19 == 0) {
                              _err_print_error("load_from_buffer", "scene/resources/audio_stream_wav.cpp", 0x34d, "Condition \"format_channels == 0\" is true. Returning: Ref<AudioStreamWAV>()", 0, 0);
                              goto LAB_00107162;
                           }

                           iVar21 = ( (int)uVar20 / (int)uVar19 ) / ( (int)local_218 >> 3 );
                           iVar25 = uVar19 * iVar21;
                           CowData<float>::resize<false>((CowData<float>*)&local_1c0, (long)iVar25);
                           cVar36 = cVar9;
                           if (uVar4 == 1) {
                              if (local_218 == 8) {
                                 for (lVar37 = 0; (int)lVar37 < iVar25; lVar37 = lVar37 + 1) {
                                    cVar10 = ( **(code**)( *(long*)pOVar31 + 0x1e0 ) )(pOVar31);
                                    fVar44 = (float)(int)(char)( cVar10 + -0x80 ) * __LC134;
                                    if (local_1c0 == 0) goto LAB_00106289;
                                    lVar28 = *(long*)( local_1c0 + -8 );
                                    if (lVar28 <= lVar37) goto LAB_0010696e;
                                    CowData<float>::_copy_on_write((CowData<float>*)&local_1c0);
                                    *(float*)( local_1c0 + lVar37 * 4 ) = fVar44;
                                 }

                              }
 else {
                                 lVar37 = 0;
                                 if (local_218 == 0x10) {
                                    for (; (int)lVar37 < iVar25; lVar37 = lVar37 + 1) {
                                       sVar15 = ( **(code**)( *(long*)pOVar31 + 0x1e8 ) )(pOVar31);
                                       fVar44 = (float)(int)sVar15 * __LC137;
                                       if (local_1c0 == 0) goto LAB_00106289;
                                       lVar28 = *(long*)( local_1c0 + -8 );
                                       if (lVar28 <= lVar37) goto LAB_0010696e;
                                       CowData<float>::_copy_on_write((CowData<float>*)&local_1c0);
                                       *(float*)( local_1c0 + lVar37 * 4 ) = fVar44;
                                    }

                                 }
 else {
                                    local_1e0 = 0x20 - (char)local_218;
                                    for (; (int)lVar37 < iVar25; lVar37 = lVar37 + 1) {
                                       uVar20 = 0;
                                       for (iVar30 = 0; iVar30<(int)local_218> > 3; iVar30 = iVar30 + 1) {
                                          bVar12 = ( **(code**)( *(long*)pOVar31 + 0x1e0 ) )(pOVar31);
                                          uVar20 = uVar20 | (uint)bVar12 << ( (char)iVar30 * '\b' & 0x1fU );
                                       }

                                       fVar44 = (float)( (int)( uVar20 << ( local_1e0 & 0x1f ) ) >> 0x10 ) * __LC137;
                                       if (local_1c0 == 0) {
                                          lVar28 = 0;
                                          goto LAB_0010696e;
                                       }

                                       lVar28 = *(long*)( local_1c0 + -8 );
                                       if (lVar28 <= lVar37) goto LAB_0010696e;
                                       CowData<float>::_copy_on_write((CowData<float>*)&local_1c0);
                                       *(float*)( local_1c0 + lVar37 * 4 ) = fVar44;
                                    }

                                 }

                              }

                           }
 else if (uVar4 == 3) {
                              if (local_218 == 0x20) {
                                 for (lVar37 = 0; (int)lVar37 < iVar25; lVar37 = lVar37 + 1) {
                                    uVar43 = ( **(code**)( *(long*)pOVar31 + 0x208 ) )(pOVar31);
                                    if (local_1c0 == 0) goto LAB_00106289;
                                    lVar28 = *(long*)( local_1c0 + -8 );
                                    if (lVar28 <= lVar37) goto LAB_0010696e;
                                    CowData<float>::_copy_on_write((CowData<float>*)&local_1c0);
                                    *(undefined4*)( local_1c0 + lVar37 * 4 ) = uVar43;
                                 }

                              }
 else if (local_218 == 0x40) {
                                 for (lVar37 = 0; (int)lVar37 < iVar25; lVar37 = lVar37 + 1) {
                                    dVar45 = (double)( **(code**)( *(long*)pOVar31 + 0x210 ) )(pOVar31);
                                    if (local_1c0 == 0) goto LAB_00106289;
                                    lVar28 = *(long*)( local_1c0 + -8 );
                                    if (lVar28 <= lVar37) goto LAB_0010696e;
                                    CowData<float>::_copy_on_write((CowData<float>*)&local_1c0);
                                    *(float*)( local_1c0 + lVar37 * 4 ) = (float)dVar45;
                                 }

                              }

                           }

                        }

                        if (( ( iVar16 == 0 ) && ( local_4e == 's' ) ) && ( ( local_4d == 'm' && ( ( local_4c == 'p' && ( local_4b == 'l' ) ) ) ) )) {
                           iVar25 = 10;
                           do {
                              ( **(code**)( *(long*)pOVar31 + 0x1f0 ) )(pOVar31);
                              iVar25 = iVar25 + -1;
                           }
 while ( iVar25 != 0 );
                           uVar20 = ( **(code**)( *(long*)pOVar31 + 0x1f0 ) )(pOVar31);
                           if (uVar20 < 3) {
                              local_214 = 1;
                              if (uVar20 != 0) {
                                 local_214 = ( uVar20 != 1 ) + 2;
                              }

                              local_228 = ( **(code**)( *(long*)pOVar31 + 0x1f0 ) )(pOVar31);
                              local_224 = ( **(code**)( *(long*)pOVar31 + 0x1f0 ) )(pOVar31);
                           }

                        }

                        goto LAB_00105f56;
                     }

                     _err_print_error("load_from_buffer", "scene/resources/audio_stream_wav.cpp", 0x332, "Method/function failed. Returning: Ref<AudioStreamWAV>()", "Invalid amount of bits in the sample (should be one of 8, 16, 24 or 32).", 0, 0, uVar24);
                  }
 else {
                     _err_print_error("load_from_buffer", "scene/resources/audio_stream_wav.cpp", 0x328, "Method/function failed. Returning: Ref<AudioStreamWAV>()", "Format not supported for WAVE file (not stereo or mono).", 0, 0, puVar27);
                  }

               }
 else {
                  _err_print_error("load_from_buffer", "scene/resources/audio_stream_wav.cpp", 0x323, "Method/function failed. Returning: Ref<AudioStreamWAV>()", "Format not supported for WAVE file (not PCM). Save WAVE files as uncompressed PCM or IEEE float instead.", 0, 0, lVar28);
               }

               LAB_00107162:*(undefined8*)this = 0;
               goto LAB_00106c56;
            }

            LAB_00105f56:puVar27 = (undefined1*)(ulong)uVar18;
            ( **(code**)( *(long*)pOVar31 + 0x1b8 ) )(pOVar31, ( uVar17 & 1 ) + uVar18 + uVar17);
         }
;
         Variant::Variant((Variant*)&local_168, "force/max_rate");
         pVVar23 = (Variant*)Dictionary::operator []((Variant*)param_2);
         bVar11 = Variant::operator_cast_to_bool(pVVar23);
         if (Variant::needs_deinit[(int)local_168] != '\0') {
            Variant::_clear_internal();
         }

         Variant::Variant((Variant*)&local_168, "force/max_rate_hz");
         pVVar23 = (Variant*)Dictionary::operator []((Variant*)param_2);
         iVar25 = Variant::operator_cast_to_int(pVVar23);
         if (Variant::needs_deinit[(int)local_168] != '\0') {
            Variant::_clear_internal();
         }

         local_230 = iVar21;
         if (( ( ( iVar25 < local_200 ) && ( bVar11 ) ) && ( 0 < local_200 ) ) && ( 0 < iVar21 )) {
            fVar44 = (float)iVar21;
            local_170 = 0;
            local_230 = (int)( ( fVar44 * (float)iVar25 ) / (float)local_200 );
            CowData<float>::resize<false>((CowData<float>*)&local_170, (long)(int)( uVar19 * local_230 ));
            iVar21 = iVar21 + -1;
            lVar28 = local_1c0;
            for (iVar30 = 0; iVar30 < (int)uVar19; iVar30 = iVar30 + 1) {
               iVar33 = 0;
               fVar46 = 0.0;
               for (iVar38 = 0; iVar38 < local_230; iVar38 = iVar38 + 1) {
                  iVar26 = iVar33 + -1;
                  if (iVar26 < 0) {
                     iVar26 = 0;
                  }

                  lVar34 = (long)(int)( iVar26 * uVar19 + iVar30 );
                  if (lVar28 == 0) {
                     lVar35 = 0;
                     goto LAB_001069a9;
                  }

                  lVar35 = *(long*)( lVar28 + -8 );
                  if (lVar35 <= lVar34) goto LAB_001069a9;
                  fVar40 = *(float*)( lVar28 + lVar34 * 4 );
                  lVar34 = (long)(int)( uVar19 * iVar33 + iVar30 );
                  if (( lVar35 <= lVar34 ) || ( lVar34 < 0 )) goto LAB_001069a9;
                  fVar2 = *(float*)( lVar28 + lVar34 * 4 );
                  iVar26 = iVar33 + 1;
                  if (iVar21 < iVar33 + 1) {
                     iVar26 = iVar21;
                  }

                  lVar34 = (long)(int)( iVar26 * uVar19 + iVar30 );
                  if (( lVar35 <= lVar34 ) || ( lVar34 < 0 )) goto LAB_001069a9;
                  fVar42 = *(float*)( lVar28 + lVar34 * 4 );
                  iVar26 = iVar33 + 2;
                  if (iVar21 < iVar33 + 2) {
                     iVar26 = iVar21;
                  }

                  lVar34 = (long)(int)( iVar26 * uVar19 + iVar30 );
                  if (( lVar35 <= lVar34 ) || ( lVar34 < 0 )) goto LAB_001069a9;
                  fVar41 = *(float*)( lVar28 + lVar34 * 4 );
                  lVar37 = (long)(int)( uVar19 * iVar38 + iVar30 );
                  fVar40 = ( ( ( ( ( fVar40 + fVar40 ) - _LC140 * fVar2 ) + _LC141 * fVar42 ) - fVar41 ) * fVar46 * fVar46 + ( fVar42 - fVar40 ) * fVar46 + fVar2 + fVar2 + ( ( ( fVar2 * _LC142 - fVar40 ) - fVar42 * _LC142 ) + fVar41 ) * fVar46 * fVar46 * fVar46 ) * __LC143;
                  if (local_170 == 0) goto LAB_001072eb;
                  lVar28 = *(long*)( local_170 + -8 );
                  if (lVar28 <= lVar37) goto LAB_0010696e;
                  CowData<float>::_copy_on_write((CowData<float>*)&local_170);
                  *(float*)( local_170 + lVar37 * 4 ) = fVar40;
                  fVar46 = fVar46 + (float)local_200 / (float)iVar25;
                  fVar40 = floorf(fVar46);
                  iVar33 = iVar33 + (int)fVar40;
                  fVar46 = fVar46 - (float)(int)fVar40;
                  lVar28 = local_1c0;
               }

            }

            if (local_214 != 0) {
               local_228 = (int)( ( (float)local_228 * (float)local_230 ) / fVar44 );
               local_224 = (int)( ( (float)local_224 * (float)local_230 ) / fVar44 );
            }

            if (lVar28 != local_170) {
               CowData<float>::_ref((CowData<float>*)&local_1c0, (CowData*)&local_170);
            }

            CowData<float>::_unref((CowData<float>*)&local_170);
            local_200 = iVar25;
         }

         Variant::Variant((Variant*)&local_168, "edit/normalize");
         pVVar23 = (Variant*)Dictionary::operator []((Variant*)param_2);
         bVar11 = Variant::operator_cast_to_bool(pVVar23);
         if (Variant::needs_deinit[(int)local_168] != '\0') {
            Variant::_clear_internal();
         }

         if (bVar11) {
            lVar28 = 0;
            fVar44 = 0.0;
            while (( fVar46 = fVar44 ),local_1c0 != 0 && ( lVar28 < *(long*)( local_1c0 + -8 ) )) {
               lVar37 = lVar28 * 4;
               lVar28 = lVar28 + 1;
               fVar44 = ABS(*(float*)( local_1c0 + lVar37 ));
               if (fVar44 <= fVar46) {
                  fVar44 = fVar46;
               }

            }
;
            if (0.0 < fVar46) {
               fVar46 = _LC5 / fVar46;
               for (lVar28 = 0; ( local_1c0 != 0 && ( lVar28 < *(long*)( local_1c0 + -8 ) ) ); lVar28 = lVar28 + 1) {
                  CowData<float>::_copy_on_write((CowData<float>*)&local_1c0);
                  pfVar1 = (float*)( local_1c0 + lVar28 * 4 );
                  *pfVar1 = fVar46 * *pfVar1;
               }

            }

         }

         Variant::Variant((Variant*)&local_168, "edit/trim");
         pVVar23 = (Variant*)Dictionary::operator []((Variant*)param_2);
         bVar11 = Variant::operator_cast_to_bool(pVVar23);
         if (Variant::needs_deinit[(int)local_168] != '\0') {
            Variant::_clear_internal();
         }

         lVar28 = local_1c0;
         bVar11 = ( local_214 == 0 && uVar19 != 0 ) && bVar11;
         if (bVar11) {
            bVar5 = false;
            iVar25 = 0;
            iVar21 = local_230 / (int)uVar19 + -1;
            for (iVar30 = 0; ( local_1c0 != 0 && ( lVar35 = *(long*)( local_1c0 + -8 ) ),(long)iVar30 < lVar35 / (long)(int)uVar19 ); iVar30 = iVar30 + 1) {
               lVar37 = (long)(int)( uVar19 * iVar30 );
               lVar34 = lVar37;
               if (lVar35 <= lVar37) goto LAB_001069a9;
               fVar44 = 0.0;
               while (fVar44 = fVar44 + ABS(*(float*)( local_1c0 + lVar37 * 4 )),(int)( ( 1 - uVar19 * iVar30 ) + (int)lVar37 ) < (int)uVar19) {
                  lVar37 = lVar37 + 1;
                  lVar34 = lVar35;
                  if (lVar35 == lVar37) goto LAB_001069a9;
               }
;
               if (bVar5) {
                  if (__LC146 < ABS(fVar44 / (float)uVar19)) {
                     iVar21 = iVar30;
                  }

               }
 else if (__LC146 < ABS(fVar44 / (float)uVar19)) {
                  iVar21 = iVar30;
                  iVar25 = iVar30;
                  bVar5 = bVar11;
               }

            }

            if (iVar25 < iVar21) {
               local_170 = 0;
               CowData<float>::resize<false>((CowData<float>*)&local_170, (long)(int)( ( iVar21 - iVar25 ) * uVar19 ));
               iVar30 = iVar25;
               LAB_001076c7:fVar44 = _LC5;
               if (iVar21 - iVar30 < 500) {
                  fVar44 = (float)( ( iVar21 - iVar30 ) + -1 ) / __LC147;
               }

               lVar34 = (long)(int)( uVar19 * iVar30 );
               if (-1 < lVar34) {
                  lVar37 = (long)(int)( ( iVar30 - iVar25 ) * uVar19 );
                  do {
                     if (lVar28 == 0) {
                        lVar35 = 0;
                        goto LAB_001069a9;
                     }

                     if (*(long*)( lVar28 + -8 ) <= lVar34) goto LAB_0010787c;
                     fVar46 = *(float*)( lVar28 + lVar34 * 4 );
                     if (lVar37 < 0) {
                        if (local_170 == 0) {
                           LAB_001072eb:lVar28 = 0;
                        }
 else {
                           LAB_0010789c:lVar28 = *(long*)( local_170 + -8 );
                        }

                        goto LAB_0010696e;
                     }

                     if (local_170 == 0) {
                        lVar28 = 0;
                        goto LAB_0010696e;
                     }

                     if (*(long*)( local_170 + -8 ) <= lVar37) goto LAB_0010789c;
                     CowData<float>::_copy_on_write((CowData<float>*)&local_170);
                     *(float*)( local_170 + lVar37 * 4 ) = fVar46 * fVar44;
                     if ((int)uVar19 <= (int)( ( 1 - uVar19 * iVar30 ) + (int)lVar34 )) goto LAB_00107809;
                     lVar34 = lVar34 + 1;
                     lVar37 = lVar37 + 1;
                  }
 while ( true );
               }

               if (lVar28 == 0) goto LAB_001069d8;
               LAB_0010787c:lVar35 = *(long*)( lVar28 + -8 );
               goto LAB_001069a9;
            }

         }

         goto LAB_001067b1;
      }

      ( **(code**)( *(long*)pOVar31 + 0x1d0 ) )(pOVar31);
      local_188 = 0;
      local_170 = 0x56;
      local_178 = (AudioStreamWAV*)0x108ac0;
      String::parse_latin1((StrRange*)&local_188);
      vformat<char*,unsigned_long>((String*)&local_178, (char*)&local_188, ( ulong ) & local_45);
      uVar29 = 0x2f9;
   }
 else {
      ( **(code**)( *(long*)pOVar31 + 0x1d0 ) )(pOVar31);
      local_188 = 0;
      local_170 = 0x57;
      local_178 = (AudioStreamWAV*)0x1089f8;
      String::parse_latin1((StrRange*)&local_188);
      vformat<char*,unsigned_long>((String*)&local_178, (char*)&local_188, ( ulong ) & local_4a);
      uVar29 = 0x2e4;
   }

   _err_print_error("load_from_buffer", "scene/resources/audio_stream_wav.cpp", uVar29, "Method/function failed. Returning: Ref<AudioStreamWAV>()", (CowData<char32_t>*)&local_178, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_178);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_188);
   *(undefined8*)this = 0;
   LAB_00105bbc:cVar8 = RefCounted::unreference();
   if (( cVar8 != '\0' ) && ( cVar8 = cVar8 != '\0' )) {
      ( **(code**)( *(long*)pOVar31 + 0x140 ) )(pOVar31);
      Memory::free_static(pOVar31, false);
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return this;
   LAB_00106289:lVar28 = 0;
   goto LAB_0010696e;
   LAB_00107809:iVar30 = iVar30 + 1;
   if (iVar21 <= iVar30) goto code_r0x00107826;
   goto LAB_001076c7;
   code_r0x00107826:if (lVar28 != local_170) {
      CowData<float>::_ref((CowData<float>*)&local_1c0, (CowData*)&local_170);
   }

   if (local_1c0 == 0) {
      lVar28 = 0;
   }
 else {
      lVar28 = *(long*)( local_1c0 + -8 );
   }

   local_230 = (int)( lVar28 / (long)(int)uVar19 );
   CowData<float>::_unref((CowData<float>*)&local_170);
   LAB_001067b1:if (1 < iVar16) {
      local_214 = iVar16 + -1;
      Variant::Variant((Variant*)&local_168, "edit/loop_begin");
      pVVar23 = (Variant*)Dictionary::operator []((Variant*)param_2);
      iVar16 = Variant::operator_cast_to_int(pVVar23);
      if (Variant::needs_deinit[(int)local_168] != '\0') {
         Variant::_clear_internal();
      }

      Variant::Variant((Variant*)&local_168, "edit/loop_end");
      pVVar23 = (Variant*)Dictionary::operator []((Variant*)param_2);
      iVar21 = Variant::operator_cast_to_int(pVVar23);
      if (Variant::needs_deinit[(int)local_168] != '\0') {
         Variant::_clear_internal();
      }

      local_228 = iVar16;
      if (iVar16 < 0) {
         local_228 = 0;
         iVar16 = iVar16 + local_230;
         if (( -1 < iVar16 ) && ( local_228 = local_230 + -1 <= iVar16 )) {
            local_228 = local_230 + -1;
         }

      }

      local_224 = iVar21;
      if (iVar21 < 0) {
         local_224 = 0;
         iVar21 = iVar21 + local_230;
         if (( -1 < iVar21 ) && ( local_224 = local_230 + -1 <= iVar21 )) {
            local_224 = local_230 + -1;
         }

      }

   }

   Variant::Variant((Variant*)&local_168, "compress/mode");
   pVVar23 = (Variant*)Dictionary::operator []((Variant*)param_2);
   iVar16 = Variant::operator_cast_to_int(pVVar23);
   if (Variant::needs_deinit[(int)local_168] != '\0') {
      Variant::_clear_internal();
   }

   Variant::Variant((Variant*)&local_168, "force/mono");
   pVVar23 = (Variant*)Dictionary::operator []((Variant*)param_2);
   bVar11 = Variant::operator_cast_to_bool(pVVar23);
   if (Variant::needs_deinit[(int)local_168] != '\0') {
      Variant::_clear_internal();
   }

   lVar6 = local_1c0;
   if (( uVar19 == 2 ) && ( bVar11 )) {
      local_170 = 0;
      if (local_1c0 == 0) {
         lVar28 = 0;
      }
 else {
         lVar28 = *(long*)( local_1c0 + -8 );
      }

      CowData<float>::resize<false>((CowData<float>*)&local_170, lVar28 / 2);
      lVar32 = 1;
      for (lVar37 = 0; (int)lVar37 < local_230; lVar37 = lVar37 + 1) {
         lVar34 = lVar37 * 2;
         if (lVar6 == 0) goto LAB_001069d8;
         lVar35 = *(long*)( lVar6 + -8 );
         if (( lVar35 <= lVar34 ) || ( lVar34 = lVar35 <= lVar32 )) goto LAB_001069a9;
         fVar44 = ( *(float*)( lVar6 + lVar37 * 8 ) + *(float*)( lVar6 + lVar32 * 4 ) ) * __LC143;
         if (local_170 == 0) goto LAB_00106953;
         lVar28 = *(long*)( local_170 + -8 );
         lVar32 = lVar32 + 2;
         if (lVar28 <= lVar37) goto LAB_0010696e;
         CowData<float>::_copy_on_write((CowData<float>*)&local_170);
         *(float*)( local_170 + lVar37 * 4 ) = fVar44;
      }

      if (lVar6 != local_170) {
         CowData<float>::_ref((CowData<float>*)&local_1c0, (CowData*)&local_170);
      }

      CowData<float>::_unref((CowData<float>*)&local_170);
      uVar19 = 1;
   }

   Variant::Variant((Variant*)&local_168, "force/8_bit");
   pVVar23 = (Variant*)Dictionary::operator []((Variant*)param_2);
   bVar11 = Variant::operator_cast_to_bool(pVVar23);
   if (Variant::needs_deinit[(int)local_168] != '\0') {
      Variant::_clear_internal();
   }

   lVar6 = local_1c0;
   bVar11 = !bVar11 && local_218 != 8;
   local_1b0 = 0;
   if (iVar16 == 1) {
      if (uVar19 == 1) {
         _compress_ima_adpcm(local_1c8, local_1b8);
      }
 else {
         local_1a0 = 0;
         local_190 = 0;
         if (local_1c0 == 0) {
            lVar28 = 0;
         }
 else {
            lVar28 = *(long*)( local_1c0 + -8 );
         }

         lVar32 = 1;
         iVar16 = (int)( lVar28 / 2 );
         CowData<float>::resize<false>((CowData<float>*)&local_1a0, (long)iVar16);
         CowData<float>::resize<false>((CowData<float>*)&local_190, (long)iVar16);
         for (lVar37 = 0; (int)lVar37 < iVar16; lVar37 = lVar37 + 1) {
            lVar34 = lVar37 * 2;
            if (lVar6 == 0) goto LAB_001069d8;
            lVar35 = *(long*)( lVar6 + -8 );
            if (lVar35 <= lVar34) goto LAB_001069a9;
            uVar43 = *(undefined4*)( lVar6 + lVar37 * 8 );
            if (local_1a0 == 0) {
               LAB_00106953:lVar28 = 0;
               LAB_0010696e:_err_print_index_error("operator[]", "./core/templates/vector.h", 0x38, lVar37, lVar28, "p_index", "((Vector<T> *)(this))->_cowdata.size()", "", false, true);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar3 = (code*)invalidInstructionException();
               ( *pcVar3 )();
            }

            lVar28 = *(long*)( local_1a0 + -8 );
            if (lVar28 <= lVar37) goto LAB_0010696e;
            CowData<float>::_copy_on_write((CowData<float>*)&local_1a0);
            lVar35 = *(long*)( lVar6 + -8 );
            *(undefined4*)( local_1a0 + lVar37 * 4 ) = uVar43;
            lVar34 = lVar32;
            if (lVar35 <= lVar32) goto LAB_001069a9;
            uVar43 = *(undefined4*)( lVar6 + lVar32 * 4 );
            if (local_190 == 0) goto LAB_00106953;
            lVar28 = *(long*)( local_190 + -8 );
            lVar32 = lVar32 + 2;
            if (lVar28 <= lVar37) goto LAB_0010696e;
            CowData<float>::_copy_on_write((CowData<float>*)&local_190);
            *(undefined4*)( local_190 + lVar37 * 4 ) = uVar43;
         }

         local_180 = 0;
         local_170 = 0;
         _compress_ima_adpcm(local_1a8, (Vector*)&local_188);
         _compress_ima_adpcm(local_198, (Vector*)&local_178);
         lVar28 = local_180;
         if (local_180 == 0) {
            iVar16 = 0;
         }
 else {
            iVar16 = (int)*(undefined8*)( local_180 + -8 );
         }

         CowData<unsigned_char>::resize<false>((CowData<unsigned_char>*)&local_1b0, (long)( iVar16 * 2 ));
         CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char>*)&local_1b0);
         for (lVar37 = 0; (int)lVar37 < iVar16; lVar37 = lVar37 + 1) {
            *(undefined1*)( local_1b0 + lVar37 * 2 ) = *(undefined1*)( lVar28 + lVar37 );
            *(undefined1*)( local_1b0 + 1 + lVar37 * 2 ) = *(undefined1*)( local_170 + lVar37 );
         }

         CowData<unsigned_char>::_unref((CowData<unsigned_char>*)&local_170);
         CowData<unsigned_char>::_unref((CowData<unsigned_char>*)&local_180);
         CowData<float>::_unref((CowData<float>*)&local_190);
         CowData<float>::_unref((CowData<float>*)&local_1a0);
      }

      uVar17 = 2;
   }
 else if (iVar16 == 2) {
      pVVar23 = (Variant*)&local_168;
      for (lVar28 = 0x21; lVar28 != 0; lVar28 = lVar28 + -1) {
         *(undefined8*)pVVar23 = 0;
         pVVar23 = pVVar23 + (ulong)bVar39 * -0x10 + 8;
      }

      *(undefined4*)pVVar23 = 0;
      local_164 = local_200;
      local_160 = local_230;
      local_168 = uVar19;
      _compress_qoa(local_1c8, local_1b8, (qoa_desc*)&local_168);
      uVar17 = 3;
   }
 else {
      if (local_1c0 == 0) {
         CowData<unsigned_char>::resize<false>((CowData<unsigned_char>*)&local_1b0, 0);
         CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char>*)&local_1b0);
         iVar16 = 0;
      }
 else {
         CowData<unsigned_char>::resize<false>((CowData<unsigned_char>*)&local_1b0, ( (ulong)bVar11 + 1 ) * *(long*)( local_1c0 + -8 ));
         CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char>*)&local_1b0);
         iVar16 = (int)*(undefined8*)( lVar6 + -8 );
      }

      fVar2 = _LC154;
      fVar40 = _LC153;
      fVar46 = _LC118;
      fVar44 = _LC116;
      for (lVar34 = 0; (int)lVar34 < iVar16; lVar34 = lVar34 + 1) {
         if (bVar11) {
            if (lVar6 == 0) goto LAB_00106b50;
            lVar35 = *(long*)( lVar6 + -8 );
            if (lVar35 <= lVar34) goto LAB_001069a9;
            fVar41 = *(float*)( lVar6 + lVar34 * 4 ) * fVar40;
            fVar42 = fVar44;
            if (( fVar44 <= fVar41 ) && ( fVar42 = _LC117 < fVar41 )) {
               fVar42 = _LC117;
            }

            *(short*)( local_1b0 + (int)lVar34 * 2 ) = (short)(int)fVar42;
         }
 else {
            if (lVar6 == 0) {
               LAB_00106b50:lVar35 = 0;
               goto LAB_001069a9;
            }

            lVar35 = *(long*)( lVar6 + -8 );
            if (lVar35 <= lVar34) goto LAB_001069a9;
            fVar41 = *(float*)( lVar6 + lVar34 * 4 ) * fVar2;
            fVar42 = fVar46;
            if (( fVar46 <= fVar41 ) && ( fVar42 = _LC119 < fVar41 )) {
               fVar42 = _LC119;
            }

            *(char*)( local_1b0 + lVar34 ) = (char)(int)fVar42;
         }

      }

      uVar17 = (uint)bVar11;
   }

   local_178 = (AudioStreamWAV*)0x0;
   Ref<AudioStreamWAV>::instantiate<>((Ref<AudioStreamWAV>*)&local_178);
   pAVar7 = local_178;
   set_data(local_178, local_1b8);
   *(uint*)( pAVar7 + 0x348 ) = uVar17;
   if (local_200 == 0) {
      _err_print_error("set_mix_rate", "scene/resources/audio_stream_wav.cpp", 0x20d, "Condition \"p_hz == 0\" is true.", 0, 0);
   }
 else {
      *(int*)( pAVar7 + 0x35c ) = local_200;
   }

   pAVar7[0x350] = ( AudioStreamWAV )(uVar19 == 2);
   *(int*)( pAVar7 + 0x34c ) = local_214;
   *(int*)( pAVar7 + 0x354 ) = local_228;
   *(int*)( pAVar7 + 0x358 ) = local_224;
   *(AudioStreamWAV**)this = pAVar7;
   cVar8 = RefCounted::reference();
   if (cVar8 == '\0') {
      *(undefined8*)this = 0;
   }

   cVar8 = RefCounted::unreference();
   if (( cVar8 != '\0' ) && ( cVar8 = predelete_handler((Object*)pAVar7) ),cVar8 != '\0') {
      ( **(code**)( *(long*)pAVar7 + 0x140 ) )(pAVar7);
      Memory::free_static(pAVar7, false);
   }

   CowData<unsigned_char>::_unref((CowData<unsigned_char>*)&local_1b0);
   LAB_00106c56:CowData<float>::_unref((CowData<float>*)&local_1c0);
   goto LAB_00105bbc;
   LAB_001069d8:lVar35 = 0;
   LAB_001069a9:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar34, lVar35, "p_index", "size()", "", false, true);
   _err_flush_stdout();
   /* WARNING: Does not return */
   pcVar3 = (code*)invalidInstructionException();
   ( *pcVar3 )();
}
/* AudioStreamWAV::load_from_file(String const&, Dictionary const&) */AudioStreamWAV * __thiscall
AudioStreamWAV::load_from_file(AudioStreamWAV *this,String *param_1,Dictionary *param_2){
   long *plVar1;
   long lVar2;
   long lVar3;
   long in_FS_OFFSET;
   bool bVar4;
   undefined8 local_68;
   undefined8 local_60;
   String local_58[8];
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   FileAccess::get_file_as_bytes(local_58, param_1);
   if (local_50 == 0) {
      local_60 = 0;
      plVar1 = (long*)( *(long*)param_1 + -0x10 );
      if (*(long*)param_1 != 0) {
         do {
            lVar2 = *plVar1;
            if (lVar2 == 0) goto LAB_001079b8;
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
            local_60 = *(undefined8*)param_1;
         }

      }

      LAB_001079b8:local_40 = 0x16;
      local_48 = "Cannot open file \'%s\'.";
      local_68 = 0;
      String::parse_latin1((StrRange*)&local_68);
      vformat<String>((CowData<char32_t>*)&local_48, &local_68, (CowData<char32_t>*)&local_60);
      _err_print_error("load_from_file", "scene/resources/audio_stream_wav.cpp", 0x49d, "Condition \"stream_data.is_empty()\" is true. Returning: Ref<AudioStreamWAV>()", (CowData<char32_t>*)&local_48, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
      *(undefined8*)this = 0;
   }
 else {
      load_from_buffer(this, (Vector*)local_58, param_2);
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

   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return this;
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
   return (uint)CONCAT71(0x117a, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1179, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr);
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
/* AudioSample::is_class_ptr(void*) const */uint AudioSample::is_class_ptr(AudioSample *this, void *param_1) {
   return (uint)CONCAT71(0x1179, (undefined4*)param_1 == &RefCounted::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1179, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x117a, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr);
}
/* AudioSample::_getv(StringName const&, Variant&) const */undefined8 AudioSample::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* AudioSample::_setv(StringName const&, Variant const&) */undefined8 AudioSample::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* AudioSample::_validate_propertyv(PropertyInfo&) const */void AudioSample::_validate_propertyv(PropertyInfo *param_1) {
   return;
}
/* AudioSample::_property_can_revertv(StringName const&) const */undefined8 AudioSample::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* AudioSample::_property_get_revertv(StringName const&, Variant&) const */undefined8 AudioSample::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* AudioSample::_notificationv(int, bool) */void AudioSample::_notificationv(int param_1, bool param_2) {
   return;
}
/* AudioStream::is_meta_stream() const */undefined8 AudioStream::is_meta_stream(void) {
   return 0;
}
/* AudioStreamPlaybackWAV::is_class_ptr(void*) const */uint AudioStreamPlaybackWAV::is_class_ptr(AudioStreamPlaybackWAV *this, void *param_1) {
   return (uint)CONCAT71(0x1179, (undefined4*)param_1 == &AudioStreamPlayback::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1179, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1179, (undefined4*)param_1 == &RefCounted::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x117a, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr);
}
/* AudioStreamPlaybackWAV::_getv(StringName const&, Variant&) const */undefined8 AudioStreamPlaybackWAV::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* AudioStreamPlaybackWAV::_setv(StringName const&, Variant const&) */undefined8 AudioStreamPlaybackWAV::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* AudioStreamPlaybackWAV::_validate_propertyv(PropertyInfo&) const */void AudioStreamPlaybackWAV::_validate_propertyv(PropertyInfo *param_1) {
   return;
}
/* AudioStreamPlaybackWAV::_property_can_revertv(StringName const&) const */undefined8 AudioStreamPlaybackWAV::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* AudioStreamPlaybackWAV::_property_get_revertv(StringName const&, Variant&) const */undefined8 AudioStreamPlaybackWAV::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* AudioStreamPlaybackWAV::_notificationv(int, bool) */void AudioStreamPlaybackWAV::_notificationv(int param_1, bool param_2) {
   return;
}
/* AudioStreamWAV::is_class_ptr(void*) const */uint AudioStreamWAV::is_class_ptr(AudioStreamWAV *this, void *param_1) {
   return (uint)CONCAT71(0x1179, (undefined4*)param_1 == &AudioStream::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1179, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1179, (undefined4*)param_1 == &Resource::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1179, (undefined4*)param_1 == &RefCounted::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x117a, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr);
}
/* AudioStreamWAV::_getv(StringName const&, Variant&) const */undefined8 AudioStreamWAV::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* AudioStreamWAV::_setv(StringName const&, Variant const&) */undefined8 AudioStreamWAV::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* AudioStreamWAV::_validate_propertyv(PropertyInfo&) const */void AudioStreamWAV::_validate_propertyv(PropertyInfo *param_1) {
   return;
}
/* AudioStreamWAV::_property_can_revertv(StringName const&) const */undefined8 AudioStreamWAV::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* AudioStreamWAV::_property_get_revertv(StringName const&, Variant&) const */undefined8 AudioStreamWAV::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* AudioStreamWAV::_notificationv(int, bool) */void AudioStreamWAV::_notificationv(int param_1, bool param_2) {
   return;
}
/* AudioStreamWAV::can_be_sampled() const */undefined8 AudioStreamWAV::can_be_sampled(void) {
   return 1;
}
/* MethodBindTR<Error, String const&>::_gen_argument_type(int) const */char MethodBindTR<Error,String_const&>::_gen_argument_type(MethodBindTR<Error,String_const&> *this, int param_1) {
   return ( -(param_1 == 0) & 2U ) + 2;
}
/* MethodBindTR<Error, String const&>::get_argument_meta(int) const */undefined8 MethodBindTR<Error,String_const&>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTRC<bool>::_gen_argument_type(int) const */undefined8 MethodBindTRC<bool>::_gen_argument_type(int param_1) {
   return 1;
}
/* MethodBindTRC<bool>::get_argument_meta(int) const */undefined8 MethodBindTRC<bool>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindT<bool>::_gen_argument_type(int) const */bool MethodBindT<bool>::_gen_argument_type(MethodBindT<bool> *this, int param_1) {
   return param_1 == 0;
}
/* MethodBindT<bool>::get_argument_meta(int) const */undefined8 MethodBindT<bool>::get_argument_meta(int param_1) {
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
/* MethodBindTRC<AudioStreamWAV::LoopMode>::_gen_argument_type(int) const */undefined8 MethodBindTRC<AudioStreamWAV::LoopMode>::_gen_argument_type(int param_1) {
   return 2;
}
/* MethodBindTRC<AudioStreamWAV::LoopMode>::get_argument_meta(int) const */undefined8 MethodBindTRC<AudioStreamWAV::LoopMode>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindT<AudioStreamWAV::LoopMode>::_gen_argument_type(int) const */char MethodBindT<AudioStreamWAV::LoopMode>::_gen_argument_type(MethodBindT<AudioStreamWAV::LoopMode> *this, int param_1) {
   return ( param_1 == 0 ) * '\x02';
}
/* MethodBindT<AudioStreamWAV::LoopMode>::get_argument_meta(int) const */undefined8 MethodBindT<AudioStreamWAV::LoopMode>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTRC<AudioStreamWAV::Format>::_gen_argument_type(int) const */undefined8 MethodBindTRC<AudioStreamWAV::Format>::_gen_argument_type(int param_1) {
   return 2;
}
/* MethodBindTRC<AudioStreamWAV::Format>::get_argument_meta(int) const */undefined8 MethodBindTRC<AudioStreamWAV::Format>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindT<AudioStreamWAV::Format>::_gen_argument_type(int) const */char MethodBindT<AudioStreamWAV::Format>::_gen_argument_type(MethodBindT<AudioStreamWAV::Format> *this, int param_1) {
   return ( param_1 == 0 ) * '\x02';
}
/* MethodBindT<AudioStreamWAV::Format>::get_argument_meta(int) const */undefined8 MethodBindT<AudioStreamWAV::Format>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTRC<Vector<unsigned char>>::_gen_argument_type(int) const */undefined8 MethodBindTRC<Vector<unsigned_char>>::_gen_argument_type(int param_1) {
   return 0x1d;
}
/* MethodBindTRC<Vector<unsigned char>>::get_argument_meta(int) const */undefined8 MethodBindTRC<Vector<unsigned_char>>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindT<Vector<unsigned char> const&>::_gen_argument_type(int) const */byte MethodBindT<Vector<unsigned_char>const&>::_gen_argument_type(MethodBindT<Vector<unsigned_char>const&> *this, int param_1) {
   return -(param_1 == 0) & 0x1d;
}
/* MethodBindT<Vector<unsigned char> const&>::get_argument_meta(int) const */undefined8 MethodBindT<Vector<unsigned_char>const&>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTRS<Ref<AudioStreamWAV>, String const&, Dictionary const&>::_gen_argument_type(int)
   const */int MethodBindTRS<Ref<AudioStreamWAV>,String_const&,Dictionary_const&>::_gen_argument_type(MethodBindTRS<Ref<AudioStreamWAV>,String_const&,Dictionary_const&> *this, int param_1) {
   int iVar1;
   iVar1 = 0x18;
   if ((uint)param_1 < 2) {
      iVar1 = ( -(uint)(param_1 == 0) & 0xffffffe9 ) + 0x1b;
   }

   return iVar1;
}
/* MethodBindTRS<Ref<AudioStreamWAV>, String const&, Dictionary const&>::get_argument_meta(int)
   const */undefined8 MethodBindTRS<Ref<AudioStreamWAV>,String_const&,Dictionary_const&>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTRS<Ref<AudioStreamWAV>, Vector<unsigned char> const&, Dictionary
   const&>::_gen_argument_type(int) const */char MethodBindTRS<Ref<AudioStreamWAV>,Vector<unsigned_char>const&,Dictionary_const&>::_gen_argument_type(MethodBindTRS<Ref<AudioStreamWAV>,Vector<unsigned_char>const&,Dictionary_const&> *this, int param_1) {
   char cVar1;
   cVar1 = '\x18';
   if ((uint)param_1 < 2) {
      cVar1 = ( -(param_1 == 0) & 2U ) + 0x1b;
   }

   return cVar1;
}
/* MethodBindTRS<Ref<AudioStreamWAV>, Vector<unsigned char> const&, Dictionary
   const&>::get_argument_meta(int) const */undefined8 MethodBindTRS<Ref<AudioStreamWAV>,Vector<unsigned_char>const&,Dictionary_const&>::get_argument_meta(int param_1) {
   return 0;
}
/* RefCounted::~RefCounted() */void RefCounted::~RefCounted(RefCounted *this) {
   *(undefined***)this = &PTR__initialize_classv_00116b30;
   Object::~Object((Object*)this);
   return;
}
/* RefCounted::~RefCounted() */void RefCounted::~RefCounted(RefCounted *this) {
   *(undefined***)this = &PTR__initialize_classv_00116b30;
   Object::~Object((Object*)this);
   operator_delete(this, 0x180);
   return;
}
/* MethodBindTRS<Ref<AudioStreamWAV>, Vector<unsigned char> const&, Dictionary
   const&>::~MethodBindTRS() */void MethodBindTRS<Ref<AudioStreamWAV>,Vector<unsigned_char>const&,Dictionary_const&>::~MethodBindTRS(MethodBindTRS<Ref<AudioStreamWAV>,Vector<unsigned_char>const&,Dictionary_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001171f8;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRS<Ref<AudioStreamWAV>, Vector<unsigned char> const&, Dictionary
   const&>::~MethodBindTRS() */void MethodBindTRS<Ref<AudioStreamWAV>,Vector<unsigned_char>const&,Dictionary_const&>::~MethodBindTRS(MethodBindTRS<Ref<AudioStreamWAV>,Vector<unsigned_char>const&,Dictionary_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001171f8;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x60);
   return;
}
/* MethodBindTRS<Ref<AudioStreamWAV>, String const&, Dictionary const&>::~MethodBindTRS() */void MethodBindTRS<Ref<AudioStreamWAV>,String_const&,Dictionary_const&>::~MethodBindTRS(MethodBindTRS<Ref<AudioStreamWAV>,String_const&,Dictionary_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00117258;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRS<Ref<AudioStreamWAV>, String const&, Dictionary const&>::~MethodBindTRS() */void MethodBindTRS<Ref<AudioStreamWAV>,String_const&,Dictionary_const&>::~MethodBindTRS(MethodBindTRS<Ref<AudioStreamWAV>,String_const&,Dictionary_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00117258;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x60);
   return;
}
/* MethodBindT<Vector<unsigned char> const&>::~MethodBindT() */void MethodBindT<Vector<unsigned_char>const&>::~MethodBindT(MethodBindT<Vector<unsigned_char>const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001172b8;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<Vector<unsigned char> const&>::~MethodBindT() */void MethodBindT<Vector<unsigned_char>const&>::~MethodBindT(MethodBindT<Vector<unsigned_char>const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001172b8;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<Vector<unsigned char>>::~MethodBindTRC() */void MethodBindTRC<Vector<unsigned_char>>::~MethodBindTRC(MethodBindTRC<Vector<unsigned_char>> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00117318;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<Vector<unsigned char>>::~MethodBindTRC() */void MethodBindTRC<Vector<unsigned_char>>::~MethodBindTRC(MethodBindTRC<Vector<unsigned_char>> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00117318;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<AudioStreamWAV::Format>::~MethodBindT() */void MethodBindT<AudioStreamWAV::Format>::~MethodBindT(MethodBindT<AudioStreamWAV::Format> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00117378;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<AudioStreamWAV::Format>::~MethodBindT() */void MethodBindT<AudioStreamWAV::Format>::~MethodBindT(MethodBindT<AudioStreamWAV::Format> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00117378;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<AudioStreamWAV::Format>::~MethodBindTRC() */void MethodBindTRC<AudioStreamWAV::Format>::~MethodBindTRC(MethodBindTRC<AudioStreamWAV::Format> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001173d8;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<AudioStreamWAV::Format>::~MethodBindTRC() */void MethodBindTRC<AudioStreamWAV::Format>::~MethodBindTRC(MethodBindTRC<AudioStreamWAV::Format> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001173d8;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<AudioStreamWAV::LoopMode>::~MethodBindT() */void MethodBindT<AudioStreamWAV::LoopMode>::~MethodBindT(MethodBindT<AudioStreamWAV::LoopMode> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00117438;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<AudioStreamWAV::LoopMode>::~MethodBindT() */void MethodBindT<AudioStreamWAV::LoopMode>::~MethodBindT(MethodBindT<AudioStreamWAV::LoopMode> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00117438;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<AudioStreamWAV::LoopMode>::~MethodBindTRC() */void MethodBindTRC<AudioStreamWAV::LoopMode>::~MethodBindTRC(MethodBindTRC<AudioStreamWAV::LoopMode> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00117498;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<AudioStreamWAV::LoopMode>::~MethodBindTRC() */void MethodBindTRC<AudioStreamWAV::LoopMode>::~MethodBindTRC(MethodBindTRC<AudioStreamWAV::LoopMode> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00117498;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<int>::~MethodBindT() */void MethodBindT<int>::~MethodBindT(MethodBindT<int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001174f8;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<int>::~MethodBindT() */void MethodBindT<int>::~MethodBindT(MethodBindT<int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001174f8;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<int>::~MethodBindTRC() */void MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00117558;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<int>::~MethodBindTRC() */void MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00117558;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<bool>::~MethodBindT() */void MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001175b8;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<bool>::~MethodBindT() */void MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001175b8;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<bool>::~MethodBindTRC() */void MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00117618;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<bool>::~MethodBindTRC() */void MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00117618;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTR<Error, String const&>::~MethodBindTR() */void MethodBindTR<Error,String_const&>::~MethodBindTR(MethodBindTR<Error,String_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00117678;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTR<Error, String const&>::~MethodBindTR() */void MethodBindTR<Error,String_const&>::~MethodBindTR(MethodBindTR<Error,String_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00117678;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* AudioSample::~AudioSample() */void AudioSample::~AudioSample(AudioSample *this) {
   long *plVar1;
   long lVar2;
   Object *pOVar3;
   char cVar4;
   *(undefined***)this = &PTR__initialize_classv_00116c90;
   if (*(long*)( this + 400 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 400 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 400 );
         *(undefined8*)( this + 400 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
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

   *(undefined***)this = &PTR__initialize_classv_00116b30;
   Object::~Object((Object*)this);
   return;
}
/* AudioSample::~AudioSample() */void AudioSample::~AudioSample(AudioSample *this) {
   long *plVar1;
   long lVar2;
   Object *pOVar3;
   char cVar4;
   *(undefined***)this = &PTR__initialize_classv_00116c90;
   if (*(long*)( this + 400 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 400 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 400 );
         *(undefined8*)( this + 400 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
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

   *(undefined***)this = &PTR__initialize_classv_00116b30;
   Object::~Object((Object*)this);
   operator_delete(this, 0x1b0);
   return;
}
/* MethodBindTRS<Ref<AudioStreamWAV>, String const&, Dictionary const&>::validated_call(Object*,
   Variant const**, Variant*) const */void MethodBindTRS<Ref<AudioStreamWAV>,String_const&,Dictionary_const&>::validated_call(MethodBindTRS<Ref<AudioStreamWAV>,String_const&,Dictionary_const&> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   char cVar1;
   long in_FS_OFFSET;
   Object *local_30;
   undefined8 local_28;
   Object *local_20;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   ( **(code**)( this + 0x58 ) )(&local_30, *param_2 + 8, param_2[1] + 8);
   if (local_30 == (Object*)0x0) {
      Variant::ObjData::unref();
   }
 else {
      local_28 = *(undefined8*)( local_30 + 0x60 );
      local_20 = local_30;
      Variant::ObjData::ref((ObjData*)( param_3 + 8 ));
   }

   if (local_30 != (Object*)0x0) {
      cVar1 = RefCounted::unreference();
      if (cVar1 != '\0') {
         cVar1 = predelete_handler(local_30);
         if (cVar1 != '\0') {
            ( **(code**)( *(long*)local_30 + 0x140 ) )(local_30);
            Memory::free_static(local_30, false);
         }

      }

   }

   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRS<Ref<AudioStreamWAV>, Vector<unsigned char> const&, Dictionary
   const&>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTRS<Ref<AudioStreamWAV>,Vector<unsigned_char>const&,Dictionary_const&>::validated_call(MethodBindTRS<Ref<AudioStreamWAV>,Vector<unsigned_char>const&,Dictionary_const&> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   char cVar1;
   long in_FS_OFFSET;
   Object *local_30;
   undefined8 local_28;
   Object *local_20;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   ( **(code**)( this + 0x58 ) )(&local_30, *(long*)( *param_2 + 8 ) + 0x10, param_2[1] + 8);
   if (local_30 == (Object*)0x0) {
      Variant::ObjData::unref();
   }
 else {
      local_28 = *(undefined8*)( local_30 + 0x60 );
      local_20 = local_30;
      Variant::ObjData::ref((ObjData*)( param_3 + 8 ));
   }

   if (local_30 != (Object*)0x0) {
      cVar1 = RefCounted::unreference();
      if (cVar1 != '\0') {
         cVar1 = predelete_handler(local_30);
         if (cVar1 != '\0') {
            ( **(code**)( *(long*)local_30 + 0x140 ) )(local_30);
            Memory::free_static(local_30, false);
         }

      }

   }

   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* AudioStreamWAV::get_base_extension() const */AudioStreamWAV * __thiscall AudioStreamWAV::get_base_extension(AudioStreamWAV *this){
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
/* MethodBindTRS<Ref<AudioStreamWAV>, Vector<unsigned char> const&, Dictionary
   const&>::ptrcall(Object*, void const**, void*) const */void MethodBindTRS<Ref<AudioStreamWAV>,Vector<unsigned_char>const&,Dictionary_const&>::ptrcall(MethodBindTRS<Ref<AudioStreamWAV>,Vector<unsigned_char>const&,Dictionary_const&> *this, Object *param_1, void **param_2, void *param_3) {
   char cVar1;
   Object *pOVar2;
   Object *pOVar3;
   long in_FS_OFFSET;
   Object *local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   ( **(code**)( this + 0x58 ) )(&local_28, *param_2, param_2[1]);
   if (local_28 == (Object*)0x0) {
      /* WARNING: Load size is inaccurate */
      pOVar3 = *param_3;
      if (pOVar3 == (Object*)0x0) goto LAB_00109228;
      *(undefined8*)param_3 = 0;
      goto LAB_00109297;
   }

   pOVar2 = (Object*)__dynamic_cast(local_28, &Object::typeinfo, &RefCounted::typeinfo, 0);
   /* WARNING: Load size is inaccurate */
   pOVar3 = *param_3;
   if (pOVar3 != pOVar2) {
      *(Object**)param_3 = pOVar2;
      if (pOVar2 == (Object*)0x0) {
         if (pOVar3 != (Object*)0x0) goto LAB_00109297;
      }
 else {
         cVar1 = RefCounted::reference();
         if (cVar1 == '\0') {
            *(undefined8*)param_3 = 0;
         }

         if (pOVar3 != (Object*)0x0) {
            LAB_00109297:cVar1 = RefCounted::unreference();
            if (cVar1 != '\0') {
               cVar1 = predelete_handler(pOVar3);
               if (cVar1 != '\0') {
                  ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
                  Memory::free_static(pOVar3, false);
               }

            }

         }

         if (local_28 == (Object*)0x0) goto LAB_00109228;
      }

   }

   cVar1 = RefCounted::unreference();
   if (cVar1 != '\0') {
      cVar1 = predelete_handler(local_28);
      if (cVar1 != '\0') {
         ( **(code**)( *(long*)local_28 + 0x140 ) )(local_28);
         Memory::free_static(local_28, false);
      }

   }

   LAB_00109228:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRS<Ref<AudioStreamWAV>, String const&, Dictionary const&>::ptrcall(Object*, void
   const**, void*) const */void MethodBindTRS<Ref<AudioStreamWAV>,String_const&,Dictionary_const&>::ptrcall(MethodBindTRS<Ref<AudioStreamWAV>,String_const&,Dictionary_const&> *this, Object *param_1, void **param_2, void *param_3) {
   char cVar1;
   Object *pOVar2;
   Object *pOVar3;
   long in_FS_OFFSET;
   Object *local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   ( **(code**)( this + 0x58 ) )(&local_28, *param_2, param_2[1]);
   if (local_28 == (Object*)0x0) {
      /* WARNING: Load size is inaccurate */
      pOVar3 = *param_3;
      if (pOVar3 == (Object*)0x0) goto LAB_00109368;
      *(undefined8*)param_3 = 0;
      goto LAB_001093d7;
   }

   pOVar2 = (Object*)__dynamic_cast(local_28, &Object::typeinfo, &RefCounted::typeinfo, 0);
   /* WARNING: Load size is inaccurate */
   pOVar3 = *param_3;
   if (pOVar3 != pOVar2) {
      *(Object**)param_3 = pOVar2;
      if (pOVar2 == (Object*)0x0) {
         if (pOVar3 != (Object*)0x0) goto LAB_001093d7;
      }
 else {
         cVar1 = RefCounted::reference();
         if (cVar1 == '\0') {
            *(undefined8*)param_3 = 0;
         }

         if (pOVar3 != (Object*)0x0) {
            LAB_001093d7:cVar1 = RefCounted::unreference();
            if (cVar1 != '\0') {
               cVar1 = predelete_handler(pOVar3);
               if (cVar1 != '\0') {
                  ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
                  Memory::free_static(pOVar3, false);
               }

            }

         }

         if (local_28 == (Object*)0x0) goto LAB_00109368;
      }

   }

   cVar1 = RefCounted::unreference();
   if (cVar1 != '\0') {
      cVar1 = predelete_handler(local_28);
      if (cVar1 != '\0') {
         ( **(code**)( *(long*)local_28 + 0x140 ) )(local_28);
         Memory::free_static(local_28, false);
      }

   }

   LAB_00109368:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* AudioSample::_get_class_namev() const */undefined8 *AudioSample::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_00109463:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00109463;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "AudioSample");
         goto LAB_001094ce;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "AudioSample");
   LAB_001094ce:return &_get_class_namev();
}
/* AudioStreamWAV::_get_class_namev() const */undefined8 *AudioStreamWAV::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_00109553:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00109553;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "AudioStreamWAV");
         goto LAB_001095be;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "AudioStreamWAV");
   LAB_001095be:return &_get_class_namev();
}
/* AudioStreamPlaybackWAV::_get_class_namev() const */undefined8 *AudioStreamPlaybackWAV::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_00109643:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00109643;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "AudioStreamPlaybackWAV");
         goto LAB_001096ae;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "AudioStreamPlaybackWAV");
   LAB_001096ae:return &_get_class_namev();
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
         LAB_00109723:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00109723;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "RefCounted");
         goto LAB_0010978e;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "RefCounted");
   LAB_0010978e:return &_get_class_namev();
}
/* AudioStreamPlaybackWAV::get_class() const */void AudioStreamPlaybackWAV::get_class(void) {
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
/* AudioSample::get_class() const */void AudioSample::get_class(void) {
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
/* AudioStreamWAV::get_class() const */void AudioStreamWAV::get_class(void) {
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
                  if (lVar5 == 0) goto LAB_00109b8f;
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

      LAB_00109b8f:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar6 != '\0') goto LAB_00109c43;
   }

   cVar6 = String::operator ==(param_1, "RefCounted");
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
                     if (lVar5 == 0) goto LAB_00109cf3;
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

         LAB_00109cf3:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

         if (cVar6 != '\0') goto LAB_00109c43;
      }

      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar7 = String::operator ==(param_1, "Object");
         return uVar7;
      }

   }
 else {
      LAB_00109c43:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* AudioSample::is_class(String const&) const */undefined8 AudioSample::is_class(AudioSample *this, String *param_1) {
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
            plVar1 = (long*)( *(long*)( lVar3 + 0x10 ) + -0x10 );
            if (*(long*)( lVar3 + 0x10 ) != 0) {
               do {
                  lVar4 = *plVar1;
                  if (lVar4 == 0) goto LAB_00109e1f;
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
                  local_60 = *(long*)( lVar3 + 0x10 );
               }

            }

         }
 else {
            local_50 = strlen(__s);
            local_58 = __s;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      LAB_00109e1f:cVar5 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar5 != '\0') goto LAB_00109ed3;
   }

   cVar5 = String::operator ==(param_1, "AudioSample");
   if (cVar5 == '\0') {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar7 = RefCounted::is_class((RefCounted*)this, param_1);
         return uVar7;
      }

   }
 else {
      LAB_00109ed3:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* AudioStreamPlaybackWAV::is_class(String const&) const */undefined8 AudioStreamPlaybackWAV::is_class(AudioStreamPlaybackWAV *this, String *param_1) {
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
                  if (lVar5 == 0) goto LAB_00109fbf;
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

      LAB_00109fbf:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar6 != '\0') goto LAB_0010a073;
   }

   cVar6 = String::operator ==(param_1, "AudioStreamPlaybackWAV");
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
                     if (lVar5 == 0) goto LAB_0010a133;
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

         LAB_0010a133:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

         if (cVar6 != '\0') goto LAB_0010a073;
      }

      cVar6 = String::operator ==(param_1, "AudioStreamPlayback");
      if (cVar6 == '\0') {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar7 = RefCounted::is_class((RefCounted*)this, param_1);
            return uVar7;
         }

         goto LAB_0010a1dc;
      }

   }

   LAB_0010a073:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_0010a1dc:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindTRS<Ref<AudioStreamWAV>, Vector<unsigned char> const&, Dictionary
   const&>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindTRS<Ref<AudioStreamWAV>,Vector<unsigned_char>const&,Dictionary_const&>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   long *plVar1;
   Variant *pVVar2;
   long lVar3;
   code *pcVar4;
   undefined8 uVar5;
   char cVar6;
   undefined4 uVar7;
   long lVar8;
   int iVar9;
   uint in_R8D;
   undefined4 *in_R9;
   int iVar10;
   Variant *pVVar11;
   Variant *pVVar12;
   long in_FS_OFFSET;
   Object *local_78;
   Variant local_70[8];
   Variant local_68[8];
   long local_60;
   undefined4 local_58[2];
   undefined8 local_50;
   undefined8 uStack_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   pVVar2 = param_2[0xb];
   *(undefined4*)param_1 = 0;
   if (in_R8D < 3) {
      pVVar12 = param_2[5];
      iVar9 = 2 - in_R8D;
      if (pVVar12 == (Variant*)0x0) {
         if (iVar9 != 0) goto LAB_0010a3d0;
         pVVar11 = *(Variant**)param_4;
         LAB_0010a42d:pVVar12 = *(Variant**)( param_4 + 8 );
      }
 else {
         lVar3 = *(long*)( pVVar12 + -8 );
         iVar10 = (int)lVar3;
         if (iVar10 < iVar9) {
            LAB_0010a3d0:uVar7 = 4;
            goto LAB_0010a3d5;
         }

         if (in_R8D == 0) {
            lVar8 = (long)( iVar10 + -2 );
            if (lVar3 <= lVar8) goto LAB_0010a478;
            pVVar11 = pVVar12 + lVar8 * 0x18;
         }
 else {
            pVVar11 = *(Variant**)param_4;
            if (in_R8D == 2) goto LAB_0010a42d;
         }

         lVar8 = (long)(int)( ( iVar10 - iVar9 ) + ( in_R8D ^ 1 ) );
         if (lVar3 <= lVar8) {
            LAB_0010a478:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar8, lVar3, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar4 = (code*)invalidInstructionException();
            ( *pcVar4 )();
         }

         pVVar12 = pVVar12 + lVar8 * 0x18;
      }

      *in_R9 = 0;
      cVar6 = Variant::can_convert_strict(*(undefined4*)pVVar12, 0x1b);
      uVar5 = _LC31;
      if (cVar6 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = uVar5;
      }

      Variant::operator_cast_to_Dictionary(local_70);
      cVar6 = Variant::can_convert_strict(*(undefined4*)pVVar11, 0x1d);
      uVar5 = _LC32;
      if (cVar6 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = uVar5;
      }

      Variant::operator_cast_to_Vector(local_68);
      ( *(code*)pVVar2 )(&local_78, local_68, local_70);
      Variant::Variant((Variant*)local_58, local_78);
      if (Variant::needs_deinit[*(int*)param_1] != '\0') {
         Variant::_clear_internal();
      }

      *(undefined4*)param_1 = local_58[0];
      *(undefined8*)( param_1 + 8 ) = local_50;
      *(undefined8*)( param_1 + 0x10 ) = uStack_48;
      if (( ( local_78 != (Object*)0x0 ) && ( cVar6 = RefCounted::unreference() ),cVar6 != '\0' )) &&( cVar6 = cVar6 != '\0' )(**(code**)( *(long*)local_78 + 0x140 ))(local_78);
      Memory::free_static(local_78, false);
   }

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

   Dictionary::~Dictionary((Dictionary*)local_70);
}
else{uVar7 = 3;LAB_0010a3d5:*in_R9 = uVar7;in_R9[2] = 2;}if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return param_1;}/* MethodBindTRC<int>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<int>::_gen_argument_type_info(int param_1) {
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
   local_48 = &_LC11;
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

         goto joined_r0x0010a61c;
      }

   }

   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x0010a61c:local_58 = lVar2;
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
   local_48 = &_LC11;
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

         goto joined_r0x0010a79c;
      }

   }

   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x0010a79c:local_58 = lVar2;
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
/* MethodBindTRC<Vector<unsigned char>>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<Vector<unsigned_char>>::_gen_argument_type_info(int param_1) {
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
   local_48 = &_LC11;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   *puVar3 = 0x1d;
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

         goto joined_r0x0010a91c;
      }

   }

   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x0010a91c:local_58 = lVar2;
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
            if (pvVar5 == (void*)0x0) goto LAB_0010aab4;
         }

      }

      Memory::free_static(pvVar5, false);
      Memory::free_static(*(void**)( this + 0x20 ), false);
   }

   LAB_0010aab4:if (*(long*)this != 0) {
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
/* CowData<float>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<float>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* AudioStreamWAV::_bind_methods() [clone .cold] */void AudioStreamWAV::_bind_methods(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<unsigned char>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<unsigned_char>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<unsigned char>::resize<false>(long) [clone .isra.0] [clone .cold] */void CowData<unsigned_char>::resize<false>(long param_1) {
   code *pcVar1;
   _DAT_00000000 = 0;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void FUN_0010abae(void) {
   code *pcVar1;
   _DAT_00000000 = 0;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<float>::resize<false>(long) [clone .isra.0] [clone .cold] */void CowData<float>::resize<false>(long param_1) {
   code *pcVar1;
   _DAT_00000000 = 0;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void FUN_0010abc6(void) {
   code *pcVar1;
   _DAT_00000000 = 0;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* AudioStreamWAV::load_from_buffer(Vector<unsigned char> const&, Dictionary const&) [clone .cold]
    */void AudioStreamWAV::load_from_buffer(Vector *param_1, Dictionary *param_2) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* RefCounted::_initialize_classv() */void RefCounted::_initialize_classv(void) {
   long *plVar1;
   long lVar2;
   long in_FS_OFFSET;
   long local_50;
   long local_48;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (initialize_class() == '\0') {
      Object::initialize_class();
      local_48 = 0;
      local_38 = "Object";
      local_30 = 6;
      String::parse_latin1((StrRange*)&local_48);
      StringName::StringName((StringName*)&local_40, (String*)&local_48, false);
      local_38 = "RefCounted";
      local_50 = 0;
      local_30 = 10;
      String::parse_latin1((StrRange*)&local_50);
      StringName::StringName((StringName*)&local_38, (String*)&local_50, false);
      ClassDB::_add_class2((StringName*)&local_38, (StringName*)&local_40);
      if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
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

      if (( StringName::configured != '\0' ) && ( local_40 != 0 )) {
         StringName::unref();
      }

      lVar2 = local_48;
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

      if ((code*)_GLOBAL_OFFSET_TABLE_ != Object::_bind_methods) {
         RefCounted::_bind_methods();
      }

      initialize_class()::initialized =
      '\x01';
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
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
/* AudioStream::is_class(String const&) const */undefined8 AudioStream::is_class(AudioStream *this, String *param_1) {
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
                  if (lVar5 == 0) goto LAB_0010af9f;
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

      LAB_0010af9f:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar6 != '\0') goto LAB_0010b053;
   }

   cVar6 = String::operator ==(param_1, "AudioStream");
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
                     if (lVar5 == 0) goto LAB_0010b113;
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

         LAB_0010b113:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

         if (cVar6 != '\0') goto LAB_0010b053;
      }

      cVar6 = String::operator ==(param_1, "Resource");
      if (cVar6 == '\0') {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar7 = RefCounted::is_class((RefCounted*)this, param_1);
            return uVar7;
         }

         goto LAB_0010b1bc;
      }

   }

   LAB_0010b053:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_0010b1bc:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* AudioStreamWAV::is_class(String const&) const */undefined8 AudioStreamWAV::is_class(AudioStreamWAV *this, String *param_1) {
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
            plVar1 = (long*)( *(long*)( lVar3 + 0x10 ) + -0x10 );
            if (*(long*)( lVar3 + 0x10 ) != 0) {
               do {
                  lVar4 = *plVar1;
                  if (lVar4 == 0) goto LAB_0010b23f;
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
                  local_60 = *(long*)( lVar3 + 0x10 );
               }

            }

         }
 else {
            local_50 = strlen(__s);
            local_58 = __s;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      LAB_0010b23f:cVar5 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar5 != '\0') goto LAB_0010b2f3;
   }

   cVar5 = String::operator ==(param_1, "AudioStreamWAV");
   if (cVar5 == '\0') {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar7 = AudioStream::is_class((AudioStream*)this, param_1);
         return uVar7;
      }

   }
 else {
      LAB_0010b2f3:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
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
/* void Ref<AudioStreamWAV>::instantiate<>() */void Ref<AudioStreamWAV>::instantiate<>(Ref<AudioStreamWAV> *this) {
   char cVar1;
   AudioStreamWAV *this_00;
   Object *pOVar2;
   Object *pOVar3;
   this_00 = (AudioStreamWAV*)operator_new(0x378, "");
   AudioStreamWAV::AudioStreamWAV(this_00);
   postinitialize_handler((Object*)this_00);
   cVar1 = RefCounted::init_ref();
   if (cVar1 == '\0') {
      pOVar3 = *(Object**)this;
      if (pOVar3 == (Object*)0x0) {
         return;
      }

      *(undefined8*)this = 0;
      cVar1 = RefCounted::unreference();
      if (cVar1 == '\0') {
         return;
      }

      this_00 = (AudioStreamWAV*)0x0;
      cVar1 = predelete_handler(pOVar3);
      if (cVar1 == '\0') {
         return;
      }

   }
 else {
      pOVar3 = *(Object**)this;
      pOVar2 = pOVar3;
      if (this_00 == (AudioStreamWAV*)pOVar3) goto LAB_0010b4a5;
      *(AudioStreamWAV**)this = this_00;
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
         *(undefined8*)this = 0;
      }

      pOVar2 = (Object*)this_00;
      if (( ( pOVar3 == (Object*)0x0 ) || ( cVar1 = RefCounted::unreference() ),cVar1 == '\0' )) goto LAB_0010b4a5;
   }

   ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
   Memory::free_static(pOVar3, false);
   pOVar2 = (Object*)this_00;
   if (this_00 == (AudioStreamWAV*)0x0) {
      return;
   }

   LAB_0010b4a5:cVar1 = RefCounted::unreference();
   if (( cVar1 != '\0' ) && ( cVar1 = cVar1 != '\0' )) {
      ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
      Memory::free_static(pOVar2, false);
      return;
   }

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
/* AudioStreamPlaybackWAV::_initialize_classv() */void AudioStreamPlaybackWAV::_initialize_classv(void) {
   long in_FS_OFFSET;
   undefined8 local_70;
   undefined8 local_68;
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (initialize_class() == '\0') {
      if (AudioStreamPlayback::initialize_class() == '\0') {
         if (RefCounted::initialize_class() == '\0') {
            Object::initialize_class();
            local_68 = 0;
            local_50 = 6;
            local_58 = "Object";
            String::parse_latin1((StrRange*)&local_68);
            StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
            local_58 = "RefCounted";
            local_70 = 0;
            local_50 = 10;
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
            if ((code*)PTR__bind_methods_0011c010 != RefCounted::_bind_methods) {
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
         if ((code*)PTR__bind_methods_0011c008 != RefCounted::_bind_methods) {
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
      local_58 = "AudioStreamPlaybackWAV";
      local_70 = 0;
      local_50 = 0x16;
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
      initialize_class()::initialized =
      '\x01';
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* WARNING: Removing unreachable block (ram,0x0010ba50) *//* WARNING: Removing unreachable block (ram,0x0010bbe5) *//* WARNING: Removing unreachable block (ram,0x0010bbf1) *//* String vformat<char*, unsigned long>(String const&, char* const, unsigned long const) */String *vformat<char*,unsigned_long>(String *param_1, char *param_2, ulong param_3) {
   Variant *pVVar1;
   Variant *pVVar2;
   ulong in_RCX;
   int iVar3;
   long in_FS_OFFSET;
   Array local_d8[8];
   undefined8 local_d0[9];
   Variant local_88[24];
   Variant local_70[24];
   undefined8 local_58;
   undefined1 local_50[16];
   long local_40[2];
   local_40[0] = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant(local_88, (char*)param_3);
   Variant::Variant(local_70, in_RCX);
   local_58 = 0;
   local_50 = (undefined1[16])0x0;
   Array::Array(local_d8);
   iVar3 = (int)local_d8;
   Array::resize(iVar3);
   pVVar2 = (Variant*)Array::operator [](iVar3);
   Variant::operator =(pVVar2, local_88);
   pVVar2 = (Variant*)Array::operator [](iVar3);
   Variant::operator =(pVVar2, local_70);
   String::sprintf((Array*)local_d0, (bool*)param_2);
   *(undefined8*)param_1 = local_d0[0];
   pVVar2 = (Variant*)local_40;
   Array::~Array(local_d8);
   do {
      pVVar1 = pVVar2 + -0x18;
      pVVar2 = pVVar2 + -0x18;
      if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
         Variant::_clear_internal();
      }

   }
 while ( pVVar2 != local_88 );
   if (local_40[0] != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* WARNING: Removing unreachable block (ram,0x0010bd80) *//* WARNING: Removing unreachable block (ram,0x0010bf15) *//* WARNING: Removing unreachable block (ram,0x0010bf21) *//* String vformat<unsigned long, char const*, unsigned int>(String const&, unsigned long const, char
   const* const, unsigned int const) */String *vformat<unsigned_long,char_const*,unsigned_int>(String *param_1, ulong param_2, char *param_3, uint param_4) {
   Variant *pVVar1;
   undefined4 in_register_0000000c;
   Variant *pVVar2;
   int iVar3;
   uint in_R8D;
   int iVar4;
   long in_FS_OFFSET;
   Array local_f8[8];
   undefined8 local_f0[9];
   Variant local_a8[24];
   Variant local_90[24];
   Variant local_78[24];
   undefined8 local_60;
   undefined1 local_58[16];
   Variant local_48[8];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant(local_a8, (ulong)param_3);
   iVar4 = 0;
   Variant::Variant(local_90, (char*)CONCAT44(in_register_0000000c, param_4));
   Variant::Variant(local_78, in_R8D);
   local_60 = 0;
   local_58 = (undefined1[16])0x0;
   Array::Array(local_f8);
   iVar3 = (int)local_f8;
   Array::resize(iVar3);
   pVVar2 = local_a8;
   do {
      iVar4 = iVar4 + 1;
      pVVar1 = (Variant*)Array::operator [](iVar3);
      Variant::operator =(pVVar1, pVVar2);
      pVVar2 = pVVar2 + 0x18;
   }
 while ( iVar4 != 3 );
   String::sprintf((Array*)local_f0, (bool*)param_2);
   *(undefined8*)param_1 = local_f0[0];
   pVVar2 = local_48;
   Array::~Array(local_f8);
   do {
      pVVar1 = pVVar2 + -0x18;
      pVVar2 = pVVar2 + -0x18;
      if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
         Variant::_clear_internal();
      }

   }
 while ( pVVar2 != local_a8 );
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* WARNING: Removing unreachable block (ram,0x0010c078) *//* WARNING: Removing unreachable block (ram,0x0010c20d) *//* WARNING: Removing unreachable block (ram,0x0010c219) *//* String vformat<String>(String const&, String const) */undefined8 *vformat<String>(undefined8 *param_1, bool *param_2, String *param_3) {
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
/* godot::details::enum_qualified_name_to_class_info_name(String const&) */details * __thiscall
godot::details::enum_qualified_name_to_class_info_name(details *this,String *param_1){
   long *plVar1;
   long *plVar2;
   long lVar3;
   code *pcVar4;
   long *plVar5;
   long lVar6;
   long lVar7;
   long in_FS_OFFSET;
   long local_60;
   char local_58[8];
   long *local_50;
   undefined *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   String::split(local_58, SUB81(param_1, 0), 0x10c267);
   if (( local_50 != (long*)0x0 ) && ( 2 < local_50[-1] )) {
      local_60 = 0;
      local_48 = &_LC49;
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
            goto LAB_0010c32d;
         }

      }

      _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar6, lVar7, "p_index", "size()", "", false, true);
      _err_flush_stdout();
      /* WARNING: Does not return */
      pcVar4 = (code*)invalidInstructionException();
      ( *pcVar4 )();
   }

   local_60 = 0;
   local_48 = &_LC49;
   local_40 = 1;
   String::parse_latin1((StrRange*)&local_60);
   String::join((Vector*)this);
   lVar7 = local_60;
   if (local_60 != 0) {
      LOCK();
      plVar1 = (long*)( local_60 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_60 = 0;
         Memory::free_static((void*)( lVar7 + -0x10 ), false);
      }

   }

   LAB_0010c32d:plVar1 = local_50;
   if (local_50 != (long*)0x0) {
      LOCK();
      plVar5 = local_50 + -2;
      *plVar5 = *plVar5 + -1;
      UNLOCK();
      if (*plVar5 == 0) {
         if (local_50 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar4 = (code*)invalidInstructionException();
            ( *pcVar4 )();
         }

         lVar7 = local_50[-1];
         local_50 = (long*)0x0;
         if (lVar7 != 0) {
            lVar6 = 0;
            plVar5 = plVar1;
            do {
               if (*plVar5 != 0) {
                  LOCK();
                  plVar2 = (long*)( *plVar5 + -0x10 );
                  *plVar2 = *plVar2 + -1;
                  UNLOCK();
                  if (*plVar2 == 0) {
                     lVar3 = *plVar5;
                     *plVar5 = 0;
                     Memory::free_static((void*)( lVar3 + -0x10 ), false);
                  }

               }

               lVar6 = lVar6 + 1;
               plVar5 = plVar5 + 1;
            }
 while ( lVar7 != lVar6 );
         }

         Memory::free_static(plVar1 + -2, false);
      }

   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GetTypeInfo<AudioStreamWAV::Format, void>::get_class_info() */GetTypeInfo<AudioStreamWAV::Format,void> * __thiscall
GetTypeInfo<AudioStreamWAV::Format,void>::get_class_info
          (GetTypeInfo<AudioStreamWAV::Format,void> *this){
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
   local_48 = "AudioStreamWAV::Format";
   local_40 = 0x16;
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
/* GetTypeInfo<AudioStreamWAV::LoopMode, void>::get_class_info() */GetTypeInfo<AudioStreamWAV::LoopMode,void> * __thiscall
GetTypeInfo<AudioStreamWAV::LoopMode,void>::get_class_info
          (GetTypeInfo<AudioStreamWAV::LoopMode,void> *this){
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
   local_48 = "AudioStreamWAV::LoopMode";
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
}
/* MethodBindTRC<AudioStreamWAV::Format>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<AudioStreamWAV::Format>::_gen_argument_type_info(int param_1) {
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
   local_30 = 0x16;
   local_38 = "AudioStreamWAV::Format";
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
/* MethodBindTRC<AudioStreamWAV::LoopMode>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<AudioStreamWAV::LoopMode>::_gen_argument_type_info(int param_1) {
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
   local_30 = 0x18;
   local_38 = "AudioStreamWAV::LoopMode";
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
/* MethodBindTRS<Ref<AudioStreamWAV>, String const&, Dictionary const&>::call(Object*, Variant
   const**, int, Callable::CallError&) const */Object *MethodBindTRS<Ref<AudioStreamWAV>,String_const&,Dictionary_const&>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   long lVar2;
   code *pcVar3;
   undefined8 uVar4;
   char cVar5;
   undefined4 uVar6;
   long lVar7;
   int iVar8;
   uint in_R8D;
   undefined4 *in_R9;
   int iVar9;
   Variant *pVVar10;
   Variant *pVVar11;
   long in_FS_OFFSET;
   Object *local_70;
   Variant local_68[8];
   Variant local_60[8];
   undefined4 local_58[2];
   undefined8 local_50;
   undefined8 uStack_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   pVVar1 = param_2[0xb];
   *(undefined4*)param_1 = 0;
   if (in_R8D < 3) {
      pVVar11 = param_2[5];
      iVar8 = 2 - in_R8D;
      if (pVVar11 == (Variant*)0x0) {
         if (iVar8 != 0) goto LAB_0010cb80;
         pVVar10 = *(Variant**)param_4;
         LAB_0010cbdd:pVVar11 = *(Variant**)( param_4 + 8 );
      }
 else {
         lVar2 = *(long*)( pVVar11 + -8 );
         iVar9 = (int)lVar2;
         if (iVar9 < iVar8) {
            LAB_0010cb80:uVar6 = 4;
            goto LAB_0010cb85;
         }

         if (in_R8D == 0) {
            lVar7 = (long)( iVar9 + -2 );
            if (lVar2 <= lVar7) goto LAB_0010cc30;
            pVVar10 = pVVar11 + lVar7 * 0x18;
         }
 else {
            pVVar10 = *(Variant**)param_4;
            if (in_R8D == 2) goto LAB_0010cbdd;
         }

         lVar7 = (long)(int)( ( iVar9 - iVar8 ) + ( in_R8D ^ 1 ) );
         if (lVar2 <= lVar7) {
            LAB_0010cc30:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar7, lVar2, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         pVVar11 = pVVar11 + lVar7 * 0x18;
      }

      *in_R9 = 0;
      cVar5 = Variant::can_convert_strict(*(undefined4*)pVVar11, 0x1b);
      uVar4 = _LC31;
      if (cVar5 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = uVar4;
      }

      Variant::operator_cast_to_Dictionary(local_68);
      cVar5 = Variant::can_convert_strict(*(undefined4*)pVVar10, 4);
      uVar4 = _LC58;
      if (cVar5 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = uVar4;
      }

      Variant::operator_cast_to_String(local_60);
      ( *(code*)pVVar1 )(&local_70, local_60, local_68);
      Variant::Variant((Variant*)local_58, local_70);
      if (Variant::needs_deinit[*(int*)param_1] != '\0') {
         Variant::_clear_internal();
      }

      *(undefined4*)param_1 = local_58[0];
      *(undefined8*)( param_1 + 8 ) = local_50;
      *(undefined8*)( param_1 + 0x10 ) = uStack_48;
      if (( ( local_70 != (Object*)0x0 ) && ( cVar5 = RefCounted::unreference() ),cVar5 != '\0' )) &&( cVar5 = cVar5 != '\0' )(**(code**)( *(long*)local_70 + 0x140 ))(local_70);
      Memory::free_static(local_70, false);
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)local_60);
   Dictionary::~Dictionary((Dictionary*)local_68);
}
else{uVar6 = 3;LAB_0010cb85:*in_R9 = uVar6;in_R9[2] = 2;}if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return param_1;}/* MethodBindT<int>::_gen_argument_type_info(int) const */undefined4 *MethodBindT<int>::_gen_argument_type_info(int param_1) {
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
   if (in_EDX != 0) goto LAB_0010ccdb;
   local_78 = 0;
   local_80 = 0;
   local_68 = &_LC11;
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
      LAB_0010cdd0:local_40 = 6;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_0010cdd0;
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
   LAB_0010ccdb:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return puVar5;
}
/* AudioSample::_initialize_classv() */void AudioSample::_initialize_classv(void) {
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
      local_48 = "AudioSample";
      local_60 = 0;
      local_40 = 0xb;
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
   if (in_EDX != 0) goto LAB_0010d14b;
   local_78 = 0;
   local_80 = 0;
   local_68 = &_LC11;
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
      LAB_0010d240:local_40 = 6;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_0010d240;
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
   LAB_0010d14b:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return puVar5;
}
/* RefCounted::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void RefCounted::_get_property_listv(List *param_1, bool param_2) {
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
   if (local_90 == 0) {
      LAB_0010d4b8:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_0010d4b8;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)pLVar6;
         local_68 = local_80;
         goto joined_r0x0010d4d5;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)pLVar6;
   joined_r0x0010d4d5:if (lVar2 == 0) {
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

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
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
}
/* AudioSample::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void AudioSample::_get_property_listv(AudioSample *this, List *param_1, bool param_2) {
   long *plVar1;
   long lVar2;
   undefined1(*pauVar3)[16];
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
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_2) {
      RefCounted::_get_property_listv((List*)this, SUB81(param_1, 0));
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "AudioSample";
   local_70 = 0xb;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "AudioSample";
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
      LAB_0010d885:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_0010d885;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x0010d8a7;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)param_1;
   joined_r0x0010d8a7:if (lVar2 == 0) {
      pauVar3 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])param_1 = pauVar3;
      *(undefined4*)pauVar3[1] = 0;
      *pauVar3 = (undefined1[16])0x0;
   }

   local_a8 = (StringName*)&local_68;
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

   StringName::StringName((StringName*)&local_78, "AudioSample", false);
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
/* Resource::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void Resource::_get_property_listv(Resource *this, List *param_1, bool param_2) {
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
      LAB_0010dc7d:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_0010dc7d;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x0010dc9f;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)param_1;
   joined_r0x0010dc9f:if (lVar2 == 0) {
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
   if (local_90 == 0) {
      LAB_0010e06d:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_0010e06d;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x0010e08f;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)param_1;
   joined_r0x0010e08f:if (lVar2 == 0) {
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
/* AudioStreamWAV::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void AudioStreamWAV::_get_property_listv(AudioStreamWAV *this, List *param_1, bool param_2) {
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
      AudioStream::_get_property_listv((AudioStream*)this, param_1, false);
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "AudioStreamWAV";
   local_70 = 0xe;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "AudioStreamWAV";
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
      LAB_0010e458:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_0010e458;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x0010e47a;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)param_1;
   joined_r0x0010e47a:if (lVar2 == 0) {
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
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_78, "AudioStreamWAV", false);
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
/* AudioStreamPlayback::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void AudioStreamPlayback::_get_property_listv(AudioStreamPlayback *this, List *param_1, bool param_2) {
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
   if (local_90 == 0) {
      LAB_0010e848:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_0010e848;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x0010e86a;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)param_1;
   joined_r0x0010e86a:if (lVar2 == 0) {
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
/* AudioStreamPlaybackWAV::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void AudioStreamPlaybackWAV::_get_property_listv(AudioStreamPlaybackWAV *this, List *param_1, bool param_2) {
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
      AudioStreamPlayback::_get_property_listv((AudioStreamPlayback*)this, param_1, false);
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "AudioStreamPlaybackWAV";
   local_70 = 0x16;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "AudioStreamPlaybackWAV";
   local_98 = 0;
   local_70 = 0x16;
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
      LAB_0010ec3d:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_0010ec3d;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x0010ec5f;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)param_1;
   joined_r0x0010ec5f:if (lVar2 == 0) {
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

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_78, "AudioStreamPlaybackWAV", false);
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
/* MethodBindT<AudioStreamWAV::Format>::_gen_argument_type_info(int) const */undefined4 *MethodBindT<AudioStreamWAV::Format>::_gen_argument_type_info(int param_1) {
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
      local_60._0_8_ = 0x16;
      local_68 = "AudioStreamWAV::Format";
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
/* MethodBindT<AudioStreamWAV::LoopMode>::_gen_argument_type_info(int) const */undefined4 *MethodBindT<AudioStreamWAV::LoopMode>::_gen_argument_type_info(int param_1) {
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
      local_60._0_8_ = 0x18;
      local_68 = "AudioStreamWAV::LoopMode";
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
/* MethodBind* create_method_bind<AudioStreamWAV, Vector<unsigned char> const&>(void
   (AudioStreamWAV::*)(Vector<unsigned char> const&)) */MethodBind *create_method_bind<AudioStreamWAV,Vector<unsigned_char>const&>(_func_void_Vector_ptr *param_1) {
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
   *(_func_void_Vector_ptr**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_001172b8;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "AudioStreamWAV";
   local_30 = 0xe;
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
/* MethodBind* create_method_bind<AudioStreamWAV, Vector<unsigned char>>(Vector<unsigned char>
   (AudioStreamWAV::*)() const) */MethodBind *create_method_bind<AudioStreamWAV,Vector<unsigned_char>>(_func_Vector *param_1) {
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
   *(_func_Vector**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00117318;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "AudioStreamWAV";
   local_30 = 0xe;
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
/* MethodBind* create_method_bind<AudioStreamWAV, AudioStreamWAV::Format>(void
   (AudioStreamWAV::*)(AudioStreamWAV::Format)) */MethodBind *create_method_bind<AudioStreamWAV,AudioStreamWAV::Format>(_func_void_Format *param_1) {
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
   *(_func_void_Format**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00117378;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "AudioStreamWAV";
   local_30 = 0xe;
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
/* MethodBind* create_method_bind<AudioStreamWAV, AudioStreamWAV::Format>(AudioStreamWAV::Format
   (AudioStreamWAV::*)() const) */MethodBind *create_method_bind<AudioStreamWAV,AudioStreamWAV::Format>(_func_Format *param_1) {
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
   *(_func_Format**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_001173d8;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "AudioStreamWAV";
   local_30 = 0xe;
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
/* MethodBind* create_method_bind<AudioStreamWAV, AudioStreamWAV::LoopMode>(void
   (AudioStreamWAV::*)(AudioStreamWAV::LoopMode)) */MethodBind *create_method_bind<AudioStreamWAV,AudioStreamWAV::LoopMode>(_func_void_LoopMode *param_1) {
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
   *(_func_void_LoopMode**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00117438;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "AudioStreamWAV";
   local_30 = 0xe;
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
/* MethodBind* create_method_bind<AudioStreamWAV, AudioStreamWAV::LoopMode>(AudioStreamWAV::LoopMode
   (AudioStreamWAV::*)() const) */MethodBind *create_method_bind<AudioStreamWAV,AudioStreamWAV::LoopMode>(_func_LoopMode *param_1) {
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
   *(_func_LoopMode**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00117498;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "AudioStreamWAV";
   local_30 = 0xe;
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
/* MethodBind* create_method_bind<AudioStreamWAV, int>(void (AudioStreamWAV::*)(int)) */MethodBind *create_method_bind<AudioStreamWAV,int>(_func_void_int *param_1) {
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
   *(undefined***)this = &PTR__gen_argument_type_001174f8;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "AudioStreamWAV";
   local_30 = 0xe;
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
/* MethodBind* create_method_bind<AudioStreamWAV, int>(int (AudioStreamWAV::*)() const) */MethodBind *create_method_bind<AudioStreamWAV,int>(_func_int *param_1) {
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
   *(undefined***)this = &PTR__gen_argument_type_00117558;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "AudioStreamWAV";
   local_30 = 0xe;
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
/* MethodBind* create_method_bind<AudioStreamWAV, bool>(void (AudioStreamWAV::*)(bool)) */MethodBind *create_method_bind<AudioStreamWAV,bool>(_func_void_bool *param_1) {
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
   *(undefined***)this = &PTR__gen_argument_type_001175b8;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "AudioStreamWAV";
   local_30 = 0xe;
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
/* MethodBind* create_method_bind<AudioStreamWAV, bool>(bool (AudioStreamWAV::*)() const) */MethodBind *create_method_bind<AudioStreamWAV,bool>(_func_bool *param_1) {
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
   *(undefined***)this = &PTR__gen_argument_type_00117618;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "AudioStreamWAV";
   local_30 = 0xe;
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
/* MethodBind* create_method_bind<AudioStreamWAV, Error, String const&>(Error
   (AudioStreamWAV::*)(String const&)) */MethodBind *create_method_bind<AudioStreamWAV,Error,String_const&>(_func_Error_String_ptr *param_1) {
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
   *(_func_Error_String_ptr**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00117678;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "AudioStreamWAV";
   local_30 = 0xe;
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
/* AudioStreamWAV::_initialize_classv() */void AudioStreamWAV::_initialize_classv(void) {
   long in_FS_OFFSET;
   undefined8 local_70;
   undefined8 local_68;
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
               local_68 = 0;
               local_50 = 6;
               local_58 = "Object";
               String::parse_latin1((StrRange*)&local_68);
               StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
               local_58 = "RefCounted";
               local_70 = 0;
               local_50 = 10;
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
               if ((code*)PTR__bind_methods_0011c010 != RefCounted::_bind_methods) {
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
         if ((code*)PTR__bind_methods_0011c018 != Resource::_bind_methods) {
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
      local_58 = "AudioStreamWAV";
      local_70 = 0;
      local_50 = 0xe;
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
/* CowData<unsigned char>::_unref() */void CowData<unsigned_char>::_unref(CowData<unsigned_char> *this) {
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
/* CowData<float>::_unref() */void CowData<float>::_unref(CowData<float> *this) {
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
/* CowData<unsigned char>::_realloc(long) */undefined8 CowData<unsigned_char>::_realloc(CowData<unsigned_char> *this, long param_1) {
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
/* AudioStreamWAV::_compress_qoa(Vector<float> const&, Vector<unsigned char>&, qoa_desc*) */void AudioStreamWAV::_compress_qoa(Vector *param_1, Vector *param_2, qoa_desc *param_3) {
   CowData<unsigned_char> *this;
   long lVar1;
   code *pcVar2;
   double dVar3;
   undefined8 uVar4;
   double dVar5;
   qoa_desc *pqVar6;
   void *pvVar7;
   ulong uVar8;
   ulong uVar9;
   undefined2 uVar10;
   uint uVar11;
   uint uVar12;
   uint uVar13;
   long lVar14;
   ulong uVar15;
   uint uVar16;
   uint uVar17;
   long lVar18;
   double dVar19;
   uint local_3c;
   this(CowData<unsigned_char> * )(param_2 + 8);
   CowData<unsigned_char>::resize<false>(this, ( ulong )(( ( *(int*)( param_3 + 8 ) + 0x13ffU ) / 0x1400 ) * ( *(int*)param_3 * 0x10 + 8 ) + 8 + ( ( *(int*)( param_3 + 8 ) + 0x13U ) / 0x14 ) * *(int*)param_3 * 8));
   uVar4 = _LC101;
   if (*(int*)param_3 != 0) {
      uVar11 = 0;
      pqVar6 = param_3 + 0xc;
      do {
         *(undefined1(*) [16])( pqVar6 + 0x10 ) = (undefined1[16])0x0;
         uVar11 = uVar11 + 1;
         *(undefined1(*) [16])pqVar6 = (undefined1[16])0x0;
         *(undefined8*)( pqVar6 + 0x18 ) = uVar4;
         pqVar6 = pqVar6 + 0x20;
      }
 while ( uVar11 < *(uint*)param_3 );
      local_3c = *(uint*)param_3 * 0x1400;
      if (local_3c != 0) {
         uVar11 = local_3c - 1 | local_3c - 1 >> 1;
         uVar11 = uVar11 | uVar11 >> 2;
         uVar11 = uVar11 >> 4 | uVar11;
         uVar11 = uVar11 >> 8 | uVar11;
         pvVar7 = (void*)Memory::realloc_static((void*)0x0, ( ulong )(( uVar11 | uVar11 >> 0x10 ) + 1) * 2, false);
         if (pvVar7 == (void*)0x0) {
            _err_print_error("resize", "./core/templates/local_vector.h", 0xa3, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         goto LAB_00110560;
      }

   }

   local_3c = 0;
   pvVar7 = (void*)0x0;
   LAB_00110560:CowData<unsigned_char>::_copy_on_write(this);
   lVar18 = *(long*)( param_2 + 8 );
   uVar17 = 0x1400;
   CowData<unsigned_char>::_copy_on_write(this);
   uVar16 = 0;
   uVar11 = qoa_encode_header(param_3);
   lVar18 = lVar18 + (ulong)uVar11;
   uVar11 = *(uint*)( param_3 + 8 );
   if (uVar11 != 0) {
      do {
         dVar5 = _LC102;
         dVar3 = _LC7;
         if (uVar11 - uVar16 < uVar17) {
            uVar17 = uVar11 - uVar16;
         }

         uVar11 = uVar17 * *(int*)param_3;
         if (uVar11 != 0) {
            uVar13 = *(int*)param_3 * uVar16;
            uVar9 = (ulong)uVar13;
            lVar1 = *(long*)( param_1 + 8 );
            if (lVar1 == 0) {
               lVar14 = 0;
               LAB_00110683:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, uVar9, lVar14, "p_index", "size()", "", false, true);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar2 = (code*)invalidInstructionException();
               ( *pcVar2 )();
            }

            lVar14 = *(long*)( lVar1 + -8 );
            uVar15 = (ulong)local_3c;
            uVar8 = 0;
            uVar12 = uVar13;
            while (true) {
               uVar9 = (ulong)uVar12;
               if (lVar14 <= (long)uVar9) goto LAB_00110683;
               dVar19 = (double)*(float*)( lVar1 + uVar9 * 4 ) * dVar3;
               uVar10 = 0x8000;
               if (( dVar5 <= dVar19 ) && ( uVar10 = dVar19 <= dVar3 )) {
                  uVar10 = (undefined2)(int)dVar19;
               }

               if (uVar15 == uVar8) {
                  _err_print_index_error("operator[]", "./core/templates/local_vector.h", 0xb2, uVar15, uVar15, "p_index", "count", "", false, true);
                  _err_flush_stdout();
                  /* WARNING: Does not return */
                  pcVar2 = (code*)invalidInstructionException();
                  ( *pcVar2 )();
               }

               *(undefined2*)( (long)pvVar7 + uVar8 * 2 ) = uVar10;
               uVar8 = uVar8 + 1;
               if (uVar8 == uVar11) break;
               uVar12 = uVar13 + (int)uVar8;
            }
;
         }

         uVar11 = qoa_encode_frame(pvVar7, param_3, uVar17, lVar18);
         uVar16 = uVar16 + uVar17;
         lVar18 = lVar18 + (ulong)uVar11;
         uVar11 = *(uint*)( param_3 + 8 );
      }
 while ( uVar16 < uVar11 );
   }

   if (pvVar7 != (void*)0x0) {
      Memory::free_static(pvVar7, false);
      return;
   }

   return;
}
/* AudioStreamWAV::_compress_ima_adpcm(Vector<float> const&, Vector<unsigned char>&) */void AudioStreamWAV::_compress_ima_adpcm(Vector *param_1, Vector *param_2) {
   undefined4 *puVar1;
   long lVar2;
   double dVar3;
   double dVar4;
   int iVar5;
   uint uVar6;
   int iVar7;
   byte *pbVar8;
   byte *pbVar9;
   int iVar10;
   int iVar11;
   int iVar12;
   int iVar13;
   int iVar14;
   byte bVar15;
   ulong uVar16;
   int iVar17;
   ulong uVar18;
   ulong uVar19;
   double dVar20;
   if (*(long*)( param_1 + 8 ) == 0) {
      CowData<unsigned_char>::resize<false>((CowData<unsigned_char>*)( param_2 + 8 ), 4);
      CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char>*)( param_2 + 8 ));
      **(undefined4**)( param_2 + 8 ) = 0;
   }
 else {
      uVar19 = *(ulong*)( *(long*)( param_1 + 8 ) + -8 );
      iVar10 = (int)uVar19;
      iVar11 = ( iVar10 + 1 ) - ( uint )(( uVar19 & 1 ) == 0);
      CowData<unsigned_char>::resize<false>((CowData<unsigned_char>*)( param_2 + 8 ), (long)( iVar11 / 2 + 4 ));
      CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char>*)( param_2 + 8 ));
      puVar1 = *(undefined4**)( param_2 + 8 );
      lVar2 = *(long*)( param_1 + 8 );
      *puVar1 = 0;
      dVar4 = _LC102;
      dVar3 = _LC7;
      pbVar8 = (byte*)( puVar1 + 1 );
      if (0 < iVar11) {
         uVar18 = 0;
         iVar12 = 0;
         iVar5 = 7;
         iVar17 = 0;
         uVar19 = uVar18;
         if (iVar10 < 1) goto LAB_00110907;
         while (true) {
            dVar20 = (double)*(float*)( lVar2 + uVar18 * 4 ) * dVar3;
            if (dVar20 < dVar4) {
               iVar7 = -0x8000;
               goto LAB_00110909;
            }

            if (dVar20 <= dVar3) break;
            uVar16 = 0;
            iVar13 = 0x7fff - iVar12;
            iVar14 = iVar5 >> 3;
            pbVar9 = pbVar8;
            while (true) {
               iVar7 = 3;
               uVar6 = 4;
               do {
                  if (iVar5 <= iVar13) {
                     uVar16 = ( ulong )((uint)uVar16 | uVar6);
                     iVar13 = iVar13 - iVar5;
                     iVar14 = iVar14 + iVar5;
                  }

                  bVar15 = (byte)uVar16;
                  iVar5 = iVar5 >> 1;
                  uVar6 = (int)uVar6 >> 1;
                  iVar7 = iVar7 + -1;
               }
 while ( iVar7 != 0 );
               if (( uVar16 & 8 ) != 0) {
                  iVar14 = -iVar14;
               }

               iVar5 = 0x7fff;
               if (iVar14 + iVar12 < 0x8000) {
                  iVar5 = iVar14 + iVar12;
               }

               iVar12 = iVar5;
               if (iVar5 < -0x8000) {
                  iVar12 = -0x8000;
               }

               iVar17 = iVar17 + (char)_compress_ima_adpcm(Vector<float> & Vector<unsigned_char> & ::_ima_adpcm_index_table[uVar16]);
               if (0x58 < iVar17) {
                  iVar17 = 0x58;
               }

               if (iVar17 < 0) {
                  iVar17 = 0;
               }

               pbVar8 = pbVar9;
               if (( uVar19 & 1 ) != 0) {
                  pbVar8 = pbVar9 + 1;
                  bVar15 = ( byte )((int)uVar16 << 4) | *pbVar9;
               }

               uVar18 = uVar18 + 1;
               *pbVar9 = bVar15;
               if (uVar18 == (long)iVar11) {
                  return;
               }

               uVar19 = uVar18 & 0xffffffff;
               iVar5 = (int)(short)( &_compress_ima_adpcm(Vector<float> & Vector<unsigned_char> & ::_ima_adpcm_step_table)[iVar17] );
               if ((int)uVar18 < iVar10) break;
               LAB_00110907:iVar7 = 0;
               LAB_00110909:uVar16 = 0;
               iVar14 = iVar5 >> 3;
               iVar13 = iVar7 - iVar12;
               pbVar9 = pbVar8;
               if (iVar13 < 0) {
                  uVar16 = 8;
                  iVar13 = iVar12 - iVar7;
               }

            }
;
         }
;
         iVar7 = (int)(short)(int)dVar20;
         goto LAB_00110909;
      }

   }

   return;
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
/* WARNING: Removing unreachable block (ram,0x00110b08) *//* WARNING: Removing unreachable block (ram,0x00110c9d) *//* WARNING: Removing unreachable block (ram,0x00110ca9) *//* String vformat<StringName>(String const&, StringName const) */undefined8 *vformat<StringName>(undefined8 *param_1, bool *param_2, StringName *param_3) {
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
/* MethodBindTR<Error, String const&>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTR<Error,String_const&>::validated_call(MethodBindTR<Error,String_const&> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   uint uVar1;
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
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x213, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00110e2c;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar2 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar2 & 1 ) != 0) {
      pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   uVar1 = ( *pcVar2 )(param_1 + *(long*)( this + 0x60 ), *param_2 + 8);
   *(ulong*)( param_3 + 8 ) = (ulong)uVar1;
   LAB_00110e2c:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTR<Error, String const&>::ptrcall(Object*, void const**, void*) const */void MethodBindTR<Error,String_const&>::ptrcall(MethodBindTR<Error,String_const&> *this, Object *param_1, void **param_2, void *param_3) {
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

         goto LAB_00111008;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar2 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar2 & 1 ) != 0) {
      pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   uVar1 = ( *pcVar2 )(param_1 + *(long*)( this + 0x60 ), *param_2);
   *(ulong*)param_3 = (ulong)uVar1;
   LAB_00111008:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
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
         _err_print_error(&_LC165, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_001112f0;
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

   LAB_001112f0:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
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

         goto LAB_00111502;
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
   LAB_00111502:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
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

         goto LAB_001116b1;
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
   LAB_001116b1:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
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

         goto LAB_001119f1;
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
      /* WARNING: Could not recover jumptable at 0x0011187d. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(undefined1*)( *(long*)param_3 + 8 ));
      return;
   }

   LAB_001119f1:/* WARNING: Subroutine does not return */__stack_chk_fail();
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

         goto LAB_00111bd9;
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
      /* WARNING: Could not recover jumptable at 0x00111a62. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), **param_3 != '\0');
      return;
   }

   LAB_00111bd9:/* WARNING: Subroutine does not return */__stack_chk_fail();
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
         _err_print_error(&_LC165, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_00111ca0;
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

   LAB_00111ca0:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
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

         goto LAB_00111eb4;
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
   LAB_00111eb4:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
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

         goto LAB_00112063;
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
   LAB_00112063:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
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

         goto LAB_001123a1;
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
      /* WARNING: Could not recover jumptable at 0x0011222c. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(undefined4*)( *(long*)param_3 + 8 ));
      return;
   }

   LAB_001123a1:/* WARNING: Subroutine does not return */__stack_chk_fail();
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

         goto LAB_00112581;
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
      /* WARNING: Could not recover jumptable at 0x0011240b. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), **param_3);
      return;
   }

   LAB_00112581:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindTRC<AudioStreamWAV::LoopMode>::call(Object*, Variant const**, int,
   Callable::CallError&) const */Object *MethodBindTRC<AudioStreamWAV::LoopMode>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
         _err_print_error(&_LC165, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_00112650;
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

   LAB_00112650:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<AudioStreamWAV::LoopMode>::validated_call(Object*, Variant const**, Variant*) const
    */void MethodBindTRC<AudioStreamWAV::LoopMode>::validated_call(MethodBindTRC<AudioStreamWAV::LoopMode> *this, Object *param_1, Variant **param_2, Variant *param_3) {
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

         goto LAB_00112864;
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
   LAB_00112864:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<AudioStreamWAV::LoopMode>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<AudioStreamWAV::LoopMode>::ptrcall(MethodBindTRC<AudioStreamWAV::LoopMode> *this, Object *param_1, void **param_2, void *param_3) {
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

         goto LAB_00112a13;
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
   LAB_00112a13:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<AudioStreamWAV::LoopMode>::validated_call(Object*, Variant const**, Variant*) const
    */void MethodBindT<AudioStreamWAV::LoopMode>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
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

         goto LAB_00112d51;
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
      /* WARNING: Could not recover jumptable at 0x00112bdc. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(undefined4*)( *(long*)param_3 + 8 ));
      return;
   }

   LAB_00112d51:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<AudioStreamWAV::LoopMode>::ptrcall(Object*, void const**, void*) const */void MethodBindT<AudioStreamWAV::LoopMode>::ptrcall(Object *param_1, void **param_2, void *param_3) {
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

         goto LAB_00112f31;
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
      /* WARNING: Could not recover jumptable at 0x00112dbb. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), **param_3);
      return;
   }

   LAB_00112f31:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindTRC<AudioStreamWAV::Format>::call(Object*, Variant const**, int, Callable::CallError&)
   const */Object *MethodBindTRC<AudioStreamWAV::Format>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
         _err_print_error(&_LC165, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_00113000;
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

   LAB_00113000:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<AudioStreamWAV::Format>::validated_call(Object*, Variant const**, Variant*) const
    */void MethodBindTRC<AudioStreamWAV::Format>::validated_call(MethodBindTRC<AudioStreamWAV::Format> *this, Object *param_1, Variant **param_2, Variant *param_3) {
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

         goto LAB_00113214;
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
   LAB_00113214:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<AudioStreamWAV::Format>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<AudioStreamWAV::Format>::ptrcall(MethodBindTRC<AudioStreamWAV::Format> *this, Object *param_1, void **param_2, void *param_3) {
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

         goto LAB_001133c3;
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
   LAB_001133c3:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<AudioStreamWAV::Format>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindT<AudioStreamWAV::Format>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
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

         goto LAB_00113701;
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
      /* WARNING: Could not recover jumptable at 0x0011358c. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(undefined4*)( *(long*)param_3 + 8 ));
      return;
   }

   LAB_00113701:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<AudioStreamWAV::Format>::ptrcall(Object*, void const**, void*) const */void MethodBindT<AudioStreamWAV::Format>::ptrcall(Object *param_1, void **param_2, void *param_3) {
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

         goto LAB_001138e1;
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
      /* WARNING: Could not recover jumptable at 0x0011376b. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), **param_3);
      return;
   }

   LAB_001138e1:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindTRC<Vector<unsigned char>>::call(Object*, Variant const**, int, Callable::CallError&)
   const */Object *MethodBindTRC<Vector<unsigned_char>>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   long lVar2;
   Variant *pVVar3;
   long *plVar4;
   undefined4 in_register_00000014;
   long *plVar5;
   int in_R8D;
   undefined4 *in_R9;
   long in_FS_OFFSET;
   long local_68;
   undefined8 local_60;
   char *local_58;
   long local_50;
   undefined4 local_48[2];
   undefined8 local_40;
   undefined8 uStack_38;
   long local_30;
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
         _err_print_error(&_LC165, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_001139f0;
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

         ( *(code*)pVVar3 )((Vector*)&local_58);
         Variant::Variant((Variant*)local_48, (Vector*)&local_58);
         if (Variant::needs_deinit[*(int*)param_1] != '\0') {
            Variant::_clear_internal();
         }

         lVar2 = local_50;
         *(undefined4*)param_1 = local_48[0];
         *(undefined8*)( param_1 + 8 ) = local_40;
         *(undefined8*)( param_1 + 0x10 ) = uStack_38;
         if (local_50 != 0) {
            LOCK();
            plVar5 = (long*)( local_50 + -0x10 );
            *plVar5 = *plVar5 + -1;
            UNLOCK();
            if (*plVar5 == 0) {
               local_50 = 0;
               Memory::free_static((void*)( lVar2 + -0x10 ), false);
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

   LAB_001139f0:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Vector<unsigned char>>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTRC<Vector<unsigned_char>>::validated_call(MethodBindTRC<Vector<unsigned_char>> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   long lVar1;
   code *pcVar2;
   long *plVar3;
   Variant **extraout_RDX;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   Variant **local_48;
   long local_40[2];
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

      if (local_48 == (Variant**)*plVar3) {
         if (( StringName::configured != '\0' ) && ( local_48 != (Variant**)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = (Variant**)0x110cf8;
         local_40[0] = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x273, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00113c5b;
      }

      param_2 = local_48;
      if (( StringName::configured != '\0' ) && ( local_48 != (Variant**)0x0 )) {
         StringName::unref();
         param_2 = extraout_RDX;
      }

   }

   pcVar2 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar2 & 1 ) != 0) {
      param_2 = *(Variant***)( param_1 + *(long*)( this + 0x60 ) );
      pcVar2 = *(code**)( pcVar2 + (long)param_2 + -1 );
   }

   ( *pcVar2 )((StringName*)&local_48, param_1 + *(long*)( this + 0x60 ), param_2);
   if (*(long*)( *(long*)( param_3 + 8 ) + 0x18 ) != local_40[0]) {
      CowData<unsigned_char>::_ref((CowData<unsigned_char>*)( *(long*)( param_3 + 8 ) + 0x18 ), (CowData*)local_40);
   }

   lVar1 = local_40[0];
   if (local_40[0] != 0) {
      LOCK();
      plVar3 = (long*)( local_40[0] + -0x10 );
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (*plVar3 == 0) {
         local_40[0] = 0;
         Memory::free_static((void*)( lVar1 + -0x10 ), false);
      }

   }

   LAB_00113c5b:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Vector<unsigned char>>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<Vector<unsigned_char>>::ptrcall(MethodBindTRC<Vector<unsigned_char>> *this, Object *param_1, void **param_2, void *param_3) {
   long lVar1;
   code *pcVar2;
   long *plVar3;
   void **extraout_RDX;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   void **local_48;
   long local_40[2];
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

      if (local_48 == (void**)*plVar3) {
         if (( StringName::configured != '\0' ) && ( local_48 != (void**)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = (void**)0x110cf8;
         local_40[0] = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x27e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00113e57;
      }

      param_2 = local_48;
      if (( StringName::configured != '\0' ) && ( local_48 != (void**)0x0 )) {
         StringName::unref();
         param_2 = extraout_RDX;
      }

   }

   pcVar2 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar2 & 1 ) != 0) {
      param_2 = *(void***)( param_1 + *(long*)( this + 0x60 ) );
      pcVar2 = *(code**)( pcVar2 + (long)param_2 + -1 );
   }

   ( *pcVar2 )((StringName*)&local_48, param_1 + *(long*)( this + 0x60 ), param_2);
   if (*(long*)( (long)param_3 + 8 ) != local_40[0]) {
      CowData<unsigned_char>::_ref((CowData<unsigned_char>*)( (long)param_3 + 8 ), (CowData*)local_40);
   }

   lVar1 = local_40[0];
   if (local_40[0] != 0) {
      LOCK();
      plVar3 = (long*)( local_40[0] + -0x10 );
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (*plVar3 == 0) {
         local_40[0] = 0;
         Memory::free_static((void*)( lVar1 + -0x10 ), false);
      }

   }

   LAB_00113e57:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<Vector<unsigned char> const&>::validated_call(Object*, Variant const**, Variant*)
   const */void MethodBindT<Vector<unsigned_char>const&>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
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

         goto LAB_00114199;
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
      /* WARNING: Could not recover jumptable at 0x00114021. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(long*)( *(long*)param_3 + 8 ) + 0x10);
      return;
   }

   LAB_00114199:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<Vector<unsigned char> const&>::ptrcall(Object*, void const**, void*) const */void MethodBindT<Vector<unsigned_char>const&>::ptrcall(Object *param_1, void **param_2, void *param_3) {
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

         goto LAB_00114371;
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
      /* WARNING: Could not recover jumptable at 0x001141f9. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *param_3);
      return;
   }

   LAB_00114371:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindTR<Error, String const&>::call(Object*, Variant const**, int, Callable::CallError&)
   const */Object *MethodBindTR<Error,String_const&>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   long lVar2;
   code *pcVar3;
   undefined8 uVar4;
   char cVar5;
   int iVar6;
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
   long local_78;
   undefined8 local_70;
   char *local_68;
   undefined8 local_60;
   undefined4 local_58[2];
   undefined8 local_50;
   undefined8 uStack_48;
   long local_40;
   plVar10 = (long*)CONCAT44(in_register_00000014, param_3);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (( ( plVar10 != (long*)0x0 ) && ( plVar10[1] != 0 ) ) && ( *(char*)( plVar10[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_68, (StringName*)( param_2 + 3 ));
      if (plVar10[1] == 0) {
         plVar8 = (long*)plVar10[0x23];
         if (plVar8 == (long*)0x0) {
            plVar8 = (long*)( **(code**)( *plVar10 + 0x40 ) )(plVar10);
         }

      }
 else {
         plVar8 = (long*)( plVar10[1] + 0x20 );
      }

      if (local_68 == (char*)*plVar8) {
         if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_70 = 0;
         local_60 = 0x35;
         String::parse_latin1((StrRange*)&local_70);
         vformat<StringName>((StringName*)&local_68, (StrRange*)&local_70, &local_78);
         _err_print_error(&_LC165, "./core/object/method_bind.h", 0x207, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_68, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
            StringName::unref();
         }

         goto LAB_001144c0;
      }

      if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar12 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D < 2) {
      pVVar11 = param_2[5];
      if (pVVar11 == (Variant*)0x0) {
         if (in_R8D != 1) goto LAB_00114510;
         LAB_00114500:pVVar11 = *(Variant**)param_4;
      }
 else {
         lVar2 = *(long*)( pVVar11 + -8 );
         if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
            LAB_00114510:uVar7 = 4;
            goto LAB_001144b5;
         }

         if (in_R8D == 1) goto LAB_00114500;
         lVar9 = (long)( (int)lVar2 + -1 );
         if (lVar2 <= lVar9) {
            _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar9, lVar2, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         pVVar11 = pVVar11 + lVar9 * 0x18;
      }

      *in_R9 = 0;
      if (( (ulong)pVVar12 & 1 ) != 0) {
         pVVar12 = *(Variant**)( pVVar12 + *(long*)( (long)plVar10 + (long)pVVar1 ) + -1 );
      }

      cVar5 = Variant::can_convert_strict(*(undefined4*)pVVar11, 4);
      uVar4 = _LC58;
      if (cVar5 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = uVar4;
      }

      Variant::operator_cast_to_String((Variant*)&local_68);
      iVar6 = ( *(code*)pVVar12 )((Variant*)( (long)plVar10 + (long)pVVar1 ), (Variant*)&local_68);
      Variant::Variant((Variant*)local_58, iVar6);
      if (Variant::needs_deinit[*(int*)param_1] != '\0') {
         Variant::_clear_internal();
      }

      *(undefined4*)param_1 = local_58[0];
      *(undefined8*)( param_1 + 8 ) = local_50;
      *(undefined8*)( param_1 + 0x10 ) = uStack_48;
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
   }
 else {
      uVar7 = 3;
      LAB_001144b5:*in_R9 = uVar7;
      in_R9[2] = 1;
   }

   LAB_001144c0:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* MethodBindT<Vector<unsigned char> const&>::call(Object*, Variant const**, int,
   Callable::CallError&) const */Object *MethodBindT<Vector<unsigned_char>const&>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
   undefined8 local_40[2];
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
         local_40[0] = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error(&_LC165, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_001148c0;
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
         if (in_R8D != 1) goto LAB_00114910;
         LAB_00114900:pVVar10 = *(Variant**)param_4;
      }
 else {
         lVar2 = *(long*)( pVVar10 + -8 );
         if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
            LAB_00114910:uVar6 = 4;
            goto LAB_001148b5;
         }

         if (in_R8D == 1) goto LAB_00114900;
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

      cVar5 = Variant::can_convert_strict(*(undefined4*)pVVar10, 0x1d);
      uVar4 = _LC32;
      if (cVar5 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = uVar4;
      }

      Variant::operator_cast_to_Vector((Variant*)&local_48);
      ( *(code*)pVVar11 )((Variant*)( (long)plVar9 + (long)pVVar1 ), (Variant*)&local_48);
      CowData<unsigned_char>::_unref((CowData<unsigned_char>*)local_40);
   }
 else {
      uVar6 = 3;
      LAB_001148b5:*in_R9 = uVar6;
      in_R9[2] = 1;
   }

   LAB_001148c0:*(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
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
      goto LAB_00114bcd;
   }

   lVar1 = *(long*)( in_stack_00000008 + 8 );
   if (lVar1 == 0) {
      if (uVar8 != 1) goto LAB_00114c30;
   }
 else {
      lVar2 = *(long*)( lVar1 + -8 );
      if ((int)lVar2 < (int)( uVar8 ^ 1 )) {
         LAB_00114c30:uVar6 = 4;
         LAB_00114bcd:*(undefined4*)param_6 = uVar6;
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
         goto LAB_00114b4b;
      }

   }

   this * (Variant**)CONCAT44(in_register_0000000c, param_4);
   LAB_00114b4b:*(undefined4*)param_6 = 0;
   if (( (ulong)param_2 & 1 ) != 0) {
      param_2 = *(_func_void_bool**)( param_2 + *(long*)( param_1 + (long)param_3 ) + -1 );
   }

   cVar5 = Variant::can_convert_strict(*(undefined4*)this, 1);
   uVar4 = _LC167;
   if (cVar5 == '\0') {
      *(undefined4*)param_6 = 2;
      *(undefined8*)( param_6 + 4 ) = uVar4;
   }

   Variant::operator_cast_to_bool(this);
   /* WARNING: Could not recover jumptable at 0x00114ba7. Too many branches */
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
         _err_print_error(&_LC165, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         *(undefined4*)param_1 = 0;
         *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
         goto LAB_00114c96;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   call_with_variant_args_dv<__UnexistingClass,bool>(p_Var2, (_func_void_bool*)param_2[0xb], (Variant**)param_2[0xc], (int)param_4, in_R8, in_R9);
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   LAB_00114c96:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
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
      goto LAB_00114f5d;
   }

   lVar1 = *(long*)( in_stack_00000008 + 8 );
   if (lVar1 == 0) {
      if (uVar8 != 1) goto LAB_00114fc0;
   }
 else {
      lVar2 = *(long*)( lVar1 + -8 );
      if ((int)lVar2 < (int)( uVar8 ^ 1 )) {
         LAB_00114fc0:uVar6 = 4;
         LAB_00114f5d:*(undefined4*)param_6 = uVar6;
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
         goto LAB_00114edb;
      }

   }

   this * (Variant**)CONCAT44(in_register_0000000c, param_4);
   LAB_00114edb:*(undefined4*)param_6 = 0;
   if (( (ulong)param_2 & 1 ) != 0) {
      param_2 = *(_func_void_int**)( param_2 + *(long*)( param_1 + (long)param_3 ) + -1 );
   }

   cVar5 = Variant::can_convert_strict(*(undefined4*)this, 2);
   uVar4 = _LC168;
   if (cVar5 == '\0') {
      *(undefined4*)param_6 = 2;
      *(undefined8*)( param_6 + 4 ) = uVar4;
   }

   Variant::operator_cast_to_int(this);
   /* WARNING: Could not recover jumptable at 0x00114f36. Too many branches */
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
         _err_print_error(&_LC165, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         *(undefined4*)param_1 = 0;
         *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
         goto LAB_00115026;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   call_with_variant_args_dv<__UnexistingClass,int>(p_Var2, (_func_void_int*)param_2[0xb], (Variant**)param_2[0xc], (int)param_4, in_R8, in_R9);
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   LAB_00115026:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void call_with_variant_args_dv<__UnexistingClass, AudioStreamWAV::LoopMode>(__UnexistingClass*,
   void (__UnexistingClass::*)(AudioStreamWAV::LoopMode), Variant const**, int,
   Callable::CallError&, Vector<Variant> const&) */void call_with_variant_args_dv<__UnexistingClass,AudioStreamWAV::LoopMode>(__UnexistingClass *param_1, _func_void_LoopMode *param_2, Variant **param_3, int param_4, CallError *param_5, Vector *param_6) {
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
      goto LAB_001152ed;
   }

   lVar1 = *(long*)( in_stack_00000008 + 8 );
   if (lVar1 == 0) {
      if (uVar8 != 1) goto LAB_00115350;
   }
 else {
      lVar2 = *(long*)( lVar1 + -8 );
      if ((int)lVar2 < (int)( uVar8 ^ 1 )) {
         LAB_00115350:uVar6 = 4;
         LAB_001152ed:*(undefined4*)param_6 = uVar6;
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
         goto LAB_0011526b;
      }

   }

   this * (Variant**)CONCAT44(in_register_0000000c, param_4);
   LAB_0011526b:*(undefined4*)param_6 = 0;
   if (( (ulong)param_2 & 1 ) != 0) {
      param_2 = *(_func_void_LoopMode**)( param_2 + *(long*)( param_1 + (long)param_3 ) + -1 );
   }

   cVar5 = Variant::can_convert_strict(*(undefined4*)this, 2);
   uVar4 = _LC168;
   if (cVar5 == '\0') {
      *(undefined4*)param_6 = 2;
      *(undefined8*)( param_6 + 4 ) = uVar4;
   }

   Variant::operator_cast_to_long(this);
   /* WARNING: Could not recover jumptable at 0x001152c6. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( *param_2 )((char)( param_1 + (long)param_3 ));
   return;
}
/* MethodBindT<AudioStreamWAV::LoopMode>::call(Object*, Variant const**, int, Callable::CallError&)
   const */Object *MethodBindT<AudioStreamWAV::LoopMode>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
         _err_print_error(&_LC165, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         *(undefined4*)param_1 = 0;
         *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
         goto LAB_001153b6;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   call_with_variant_args_dv<__UnexistingClass,AudioStreamWAV::LoopMode>(p_Var2, (_func_void_LoopMode*)param_2[0xb], (Variant**)param_2[0xc], (int)param_4, in_R8, in_R9);
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   LAB_001153b6:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void call_with_variant_args_dv<__UnexistingClass, AudioStreamWAV::Format>(__UnexistingClass*,
   void (__UnexistingClass::*)(AudioStreamWAV::Format), Variant const**, int, Callable::CallError&,
   Vector<Variant> const&) */void call_with_variant_args_dv<__UnexistingClass,AudioStreamWAV::Format>(__UnexistingClass *param_1, _func_void_Format *param_2, Variant **param_3, int param_4, CallError *param_5, Vector *param_6) {
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
      goto LAB_0011567d;
   }

   lVar1 = *(long*)( in_stack_00000008 + 8 );
   if (lVar1 == 0) {
      if (uVar8 != 1) goto LAB_001156e0;
   }
 else {
      lVar2 = *(long*)( lVar1 + -8 );
      if ((int)lVar2 < (int)( uVar8 ^ 1 )) {
         LAB_001156e0:uVar6 = 4;
         LAB_0011567d:*(undefined4*)param_6 = uVar6;
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
         goto LAB_001155fb;
      }

   }

   this * (Variant**)CONCAT44(in_register_0000000c, param_4);
   LAB_001155fb:*(undefined4*)param_6 = 0;
   if (( (ulong)param_2 & 1 ) != 0) {
      param_2 = *(_func_void_Format**)( param_2 + *(long*)( param_1 + (long)param_3 ) + -1 );
   }

   cVar5 = Variant::can_convert_strict(*(undefined4*)this, 2);
   uVar4 = _LC168;
   if (cVar5 == '\0') {
      *(undefined4*)param_6 = 2;
      *(undefined8*)( param_6 + 4 ) = uVar4;
   }

   Variant::operator_cast_to_long(this);
   /* WARNING: Could not recover jumptable at 0x00115656. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( *param_2 )((char)( param_1 + (long)param_3 ));
   return;
}
/* MethodBindT<AudioStreamWAV::Format>::call(Object*, Variant const**, int, Callable::CallError&)
   const */Object *MethodBindT<AudioStreamWAV::Format>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
         _err_print_error(&_LC165, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         *(undefined4*)param_1 = 0;
         *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
         goto LAB_00115746;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   call_with_variant_args_dv<__UnexistingClass,AudioStreamWAV::Format>(p_Var2, (_func_void_Format*)param_2[0xb], (Variant**)param_2[0xc], (int)param_4, in_R8, in_R9);
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   LAB_00115746:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void call_get_argument_type_info_helper<String const&>(int, int&, PropertyInfo&) */void call_get_argument_type_info_helper<String_const&>(int param_1, int *param_2, PropertyInfo *param_3) {
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
   if (iVar5 != param_1) goto LAB_00115949;
   local_88 = 0;
   local_90 = 0;
   local_78 = &_LC11;
   auVar1._8_8_ = 0;
   auVar1._0_8_ = local_70._8_8_;
   local_70 = auVar1 << 0x40;
   String::parse_latin1((StrRange*)&local_90);
   local_98 = 0;
   local_78 = (undefined*)CONCAT44(local_78._4_4_, 4);
   local_60 = 0;
   local_58 = 0;
   local_70 = (undefined1[16])0x0;
   if (local_90 == 0) {
      LAB_00115a48:local_50 = 6;
      StringName::operator =((StringName*)( local_70 + 8 ), (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 6;
      if (local_60 != 0x11) goto LAB_00115a48;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
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
   LAB_00115949:*param_2 = iVar5 + 1;
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* MethodBindTR<Error, String const&>::_gen_argument_type_info(int) const */undefined4 *MethodBindTR<Error,String_const&>::_gen_argument_type_info(int param_1) {
   undefined1 auVar1[16];
   undefined8 uVar2;
   undefined8 uVar3;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar4;
   long in_FS_OFFSET;
   undefined8 local_88;
   undefined8 local_80;
   undefined8 local_78;
   int local_70[2];
   char *local_68;
   undefined1 local_60[16];
   undefined8 local_50;
   undefined8 local_48;
   undefined4 local_40;
   long local_30;
   puVar4 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (in_EDX == 0) {
      local_68 = (char*)0x0;
      local_50 = 0;
      local_48 = 0;
      local_40 = 6;
      local_70[0] = 0;
      local_60 = (undefined1[16])0x0;
      call_get_argument_type_info_helper<String_const&>(0, local_70, (PropertyInfo*)&local_68);
      uVar2 = local_60._0_8_;
      uVar3 = local_60._8_8_;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = local_60._8_8_;
      local_60 = auVar1 << 0x40;
      *puVar4 = local_68._0_4_;
      *(undefined8*)( puVar4 + 2 ) = uVar2;
      *(undefined8*)( puVar4 + 4 ) = uVar3;
      puVar4[6] = (undefined4)local_50;
      *(undefined8*)( puVar4 + 8 ) = local_48;
      puVar4[10] = local_40;
      CowData<char32_t>::_unref((CowData<char32_t>*)local_60);
   }
 else {
      local_78 = 0;
      local_68 = "Error";
      local_60._8_8_ = local_60._0_8_;
      local_60._0_8_ = 5;
      String::parse_latin1((StrRange*)&local_78);
      godot::details::enum_qualified_name_to_class_info_name((details*)local_70, (String*)&local_78);
      StringName::StringName((StringName*)&local_68, (String*)local_70, false);
      *puVar4 = 2;
      puVar4[6] = 0;
      *(undefined8*)( puVar4 + 8 ) = 0;
      puVar4[10] = 0x10006;
      *(undefined1(*) [16])( puVar4 + 2 ) = (undefined1[16])0x0;
      local_80 = 0;
      local_88 = 0;
      StringName::operator =((StringName*)( puVar4 + 4 ), (StringName*)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)local_70);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void call_get_argument_type_info_helper<Vector<unsigned char> const&>(int, int&, PropertyInfo&)
    */void call_get_argument_type_info_helper<Vector<unsigned_char>const&>(int param_1, int *param_2, PropertyInfo *param_3) {
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
   if (iVar5 != param_1) goto LAB_00115d29;
   local_88 = 0;
   local_90 = 0;
   local_78 = &_LC11;
   auVar1._8_8_ = 0;
   auVar1._0_8_ = local_70._8_8_;
   local_70 = auVar1 << 0x40;
   String::parse_latin1((StrRange*)&local_90);
   local_98 = 0;
   local_78 = (undefined*)CONCAT44(local_78._4_4_, 0x1d);
   local_60 = 0;
   local_58 = 0;
   local_70 = (undefined1[16])0x0;
   if (local_90 == 0) {
      LAB_00115e28:local_50 = 6;
      StringName::operator =((StringName*)( local_70 + 8 ), (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 6;
      if (local_60 != 0x11) goto LAB_00115e28;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
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
   LAB_00115d29:*param_2 = iVar5 + 1;
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* MethodBindT<Vector<unsigned char> const&>::_gen_argument_type_info(int) const */PropertyInfo *MethodBindT<Vector<unsigned_char>const&>::_gen_argument_type_info(int param_1) {
   int in_EDX;
   undefined4 in_register_0000003c;
   PropertyInfo *pPVar1;
   long in_FS_OFFSET;
   int local_14;
   long local_10;
   pPVar1 = (PropertyInfo*)CONCAT44(in_register_0000003c, param_1);
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)pPVar1 = 0;
   *(undefined4*)( pPVar1 + 0x18 ) = 0;
   *(undefined8*)( pPVar1 + 0x20 ) = 0;
   *(undefined4*)( pPVar1 + 0x28 ) = 6;
   *(undefined1(*) [16])( pPVar1 + 8 ) = (undefined1[16])0x0;
   local_14 = 0;
   call_get_argument_type_info_helper<Vector<unsigned_char>const&>(in_EDX, &local_14, pPVar1);
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return pPVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void call_get_argument_type_info_helper<Dictionary const&>(int, int&, PropertyInfo&) */void call_get_argument_type_info_helper<Dictionary_const&>(int param_1, int *param_2, PropertyInfo *param_3) {
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
   if (iVar5 != param_1) goto LAB_00115fd9;
   local_88 = 0;
   local_90 = 0;
   local_78 = &_LC11;
   auVar1._8_8_ = 0;
   auVar1._0_8_ = local_70._8_8_;
   local_70 = auVar1 << 0x40;
   String::parse_latin1((StrRange*)&local_90);
   local_98 = 0;
   local_78 = (undefined*)CONCAT44(local_78._4_4_, 0x1b);
   local_60 = 0;
   local_58 = 0;
   local_70 = (undefined1[16])0x0;
   if (local_90 == 0) {
      LAB_001160d8:local_50 = 6;
      StringName::operator =((StringName*)( local_70 + 8 ), (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 6;
      if (local_60 != 0x11) goto LAB_001160d8;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
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
   LAB_00115fd9:*param_2 = iVar5 + 1;
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* MethodBindTRS<Ref<AudioStreamWAV>, Vector<unsigned char> const&, Dictionary
   const&>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRS<Ref<AudioStreamWAV>,Vector<unsigned_char>const&,Dictionary_const&>::_gen_argument_type_info(int param_1) {
   undefined1 auVar1[16];
   undefined8 uVar2;
   undefined8 uVar3;
   uint in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar4;
   long in_FS_OFFSET;
   undefined8 local_80;
   long local_78;
   ulong local_70;
   char *local_68;
   undefined1 local_60[16];
   undefined8 local_50;
   undefined8 local_48;
   undefined4 local_40;
   long local_30;
   puVar4 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (in_EDX < 2) {
      local_60 = (undefined1[16])0x0;
      local_68 = (char*)0x0;
      local_50 = 0;
      local_48 = 0;
      local_40 = 6;
      local_70 = local_70 & 0xffffffff00000000;
      call_get_argument_type_info_helper<Vector<unsigned_char>const&>(in_EDX, (int*)&local_70, (PropertyInfo*)&local_68);
      call_get_argument_type_info_helper<Dictionary_const&>(in_EDX, (int*)&local_70, (PropertyInfo*)&local_68);
      uVar2 = local_60._0_8_;
      uVar3 = local_60._8_8_;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = local_60._8_8_;
      local_60 = auVar1 << 0x40;
      *puVar4 = local_68._0_4_;
      *(undefined8*)( puVar4 + 2 ) = uVar2;
      *(undefined8*)( puVar4 + 4 ) = uVar3;
      puVar4[6] = (undefined4)local_50;
      *(undefined8*)( puVar4 + 8 ) = local_48;
      puVar4[10] = local_40;
      CowData<char32_t>::_unref((CowData<char32_t>*)local_60);
      goto LAB_001162d3;
   }

   local_70 = 0;
   local_78 = 0;
   local_68 = "AudioStreamWAV";
   local_60._8_8_ = local_60._0_8_;
   local_60._0_8_ = 0xe;
   String::parse_latin1((StrRange*)&local_78);
   local_80 = 0;
   *puVar4 = 0x18;
   puVar4[6] = 0x11;
   *(undefined8*)( puVar4 + 8 ) = 0;
   *(undefined1(*) [16])( puVar4 + 2 ) = (undefined1[16])0x0;
   if (local_78 == 0) {
      puVar4[10] = 6;
      LAB_0011639f:StringName::StringName((StringName*)&local_68, (String*)( puVar4 + 8 ), false);
      if (*(char**)( puVar4 + 4 ) == local_68) {
         if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         *(char**)( puVar4 + 4 ) = local_68;
      }

   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar4 + 8 ), (CowData*)&local_78);
      puVar4[10] = 6;
      if (puVar4[6] == 0x11) goto LAB_0011639f;
      StringName::operator =((StringName*)( puVar4 + 4 ), (StringName*)&local_70);
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
   if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
      StringName::unref();
   }

   LAB_001162d3:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRS<Ref<AudioStreamWAV>, String const&, Dictionary
   const&>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRS<Ref<AudioStreamWAV>,String_const&,Dictionary_const&>::_gen_argument_type_info(int param_1) {
   undefined1 auVar1[16];
   undefined8 uVar2;
   undefined8 uVar3;
   uint in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar4;
   long in_FS_OFFSET;
   undefined8 local_80;
   long local_78;
   ulong local_70;
   char *local_68;
   undefined1 local_60[16];
   undefined8 local_50;
   undefined8 local_48;
   undefined4 local_40;
   long local_30;
   puVar4 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (in_EDX < 2) {
      local_60 = (undefined1[16])0x0;
      local_68 = (char*)0x0;
      local_50 = 0;
      local_48 = 0;
      local_40 = 6;
      local_70 = local_70 & 0xffffffff00000000;
      call_get_argument_type_info_helper<String_const&>(in_EDX, (int*)&local_70, (PropertyInfo*)&local_68);
      call_get_argument_type_info_helper<Dictionary_const&>(in_EDX, (int*)&local_70, (PropertyInfo*)&local_68);
      uVar2 = local_60._0_8_;
      uVar3 = local_60._8_8_;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = local_60._8_8_;
      local_60 = auVar1 << 0x40;
      *puVar4 = local_68._0_4_;
      *(undefined8*)( puVar4 + 2 ) = uVar2;
      *(undefined8*)( puVar4 + 4 ) = uVar3;
      puVar4[6] = (undefined4)local_50;
      *(undefined8*)( puVar4 + 8 ) = local_48;
      puVar4[10] = local_40;
      CowData<char32_t>::_unref((CowData<char32_t>*)local_60);
      goto LAB_001164f3;
   }

   local_70 = 0;
   local_78 = 0;
   local_68 = "AudioStreamWAV";
   local_60._8_8_ = local_60._0_8_;
   local_60._0_8_ = 0xe;
   String::parse_latin1((StrRange*)&local_78);
   local_80 = 0;
   *puVar4 = 0x18;
   puVar4[6] = 0x11;
   *(undefined8*)( puVar4 + 8 ) = 0;
   *(undefined1(*) [16])( puVar4 + 2 ) = (undefined1[16])0x0;
   if (local_78 == 0) {
      puVar4[10] = 6;
      LAB_001165bf:StringName::StringName((StringName*)&local_68, (String*)( puVar4 + 8 ), false);
      if (*(char**)( puVar4 + 4 ) == local_68) {
         if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         *(char**)( puVar4 + 4 ) = local_68;
      }

   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar4 + 8 ), (CowData*)&local_78);
      puVar4[10] = 6;
      if (puVar4[6] == 0x11) goto LAB_001165bf;
      StringName::operator =((StringName*)( puVar4 + 4 ), (StringName*)&local_70);
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
   if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
      StringName::unref();
   }

   LAB_001164f3:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* AudioStreamPlaybackWAV::start(double) */void AudioStreamPlaybackWAV::_GLOBAL__sub_I_start(void) {
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
/* WARNING: Control flow encountered bad instruction data *//* AudioSample::~AudioSample() */void AudioSample::~AudioSample(AudioSample *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTR<Error, String const&>::~MethodBindTR() */void MethodBindTR<Error,String_const&>::~MethodBindTR(MethodBindTR<Error,String_const&> *this) {
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
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<int>::~MethodBindTRC() */void MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<int>::~MethodBindT() */void MethodBindT<int>::~MethodBindT(MethodBindT<int> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<AudioStreamWAV::LoopMode>::~MethodBindTRC() */void MethodBindTRC<AudioStreamWAV::LoopMode>::~MethodBindTRC(MethodBindTRC<AudioStreamWAV::LoopMode> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<AudioStreamWAV::LoopMode>::~MethodBindT() */void MethodBindT<AudioStreamWAV::LoopMode>::~MethodBindT(MethodBindT<AudioStreamWAV::LoopMode> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<AudioStreamWAV::Format>::~MethodBindTRC() */void MethodBindTRC<AudioStreamWAV::Format>::~MethodBindTRC(MethodBindTRC<AudioStreamWAV::Format> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<AudioStreamWAV::Format>::~MethodBindT() */void MethodBindT<AudioStreamWAV::Format>::~MethodBindT(MethodBindT<AudioStreamWAV::Format> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<Vector<unsigned char>>::~MethodBindTRC() */void MethodBindTRC<Vector<unsigned_char>>::~MethodBindTRC(MethodBindTRC<Vector<unsigned_char>> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<Vector<unsigned char> const&>::~MethodBindT() */void MethodBindT<Vector<unsigned_char>const&>::~MethodBindT(MethodBindT<Vector<unsigned_char>const&> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRS<Ref<AudioStreamWAV>, String const&, Dictionary const&>::~MethodBindTRS() */void MethodBindTRS<Ref<AudioStreamWAV>,String_const&,Dictionary_const&>::~MethodBindTRS(MethodBindTRS<Ref<AudioStreamWAV>,String_const&,Dictionary_const&> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRS<Ref<AudioStreamWAV>, Vector<unsigned char> const&, Dictionary
   const&>::~MethodBindTRS() */void MethodBindTRS<Ref<AudioStreamWAV>,Vector<unsigned_char>const&,Dictionary_const&>::~MethodBindTRS(MethodBindTRS<Ref<AudioStreamWAV>,Vector<unsigned_char>const&,Dictionary_const&> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* RefCounted::~RefCounted() */void RefCounted::~RefCounted(RefCounted *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* StringName::~StringName() */void StringName::~StringName(StringName *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}


/* AudioRBResampler::get_num_of_ready_frames() [clone .part.0] */long AudioRBResampler::get_num_of_ready_frames(AudioRBResampler *this) {
   int iVar1;
   long lVar2;
   int iVar3;
   lVar2 = 0;
   iVar1 = *(int*)( this + 0x1c );
   iVar3 = *(int*)( this + 0x20 );
   if (iVar1 != iVar3) {
      if (iVar3 < iVar1) {
         iVar3 = iVar3 + *(int*)( this + 4 );
      }

      lVar2 = ( (long)( iVar3 - iVar1 ) << 0xd ) / (long)(int)( ( uint )(*(int*)( this + 0x14 ) << 0xd) / *(uint*)( this + 0x18 ) );
   }

   return lVar2;
}
/* AudioRBResampler::get_channel_count() const */undefined4 AudioRBResampler::get_channel_count(AudioRBResampler *this) {
   if (*(long*)( this + 0x30 ) != 0) {
      return *(undefined4*)( this + 0x10 );
   }

   return 0;
}
/* AudioRBResampler::mix(AudioFrame*, int) */undefined8 AudioRBResampler::mix(AudioRBResampler *this, AudioFrame *param_1, int param_2) {
   undefined8 uVar1;
   int iVar2;
   undefined4 uVar3;
   uint uVar4;
   float fVar5;
   int iVar6;
   int iVar7;
   uint uVar8;
   AudioFrame *pAVar9;
   AudioFrame *pAVar10;
   AudioFrame *pAVar11;
   uint uVar12;
   uint uVar13;
   uint uVar14;
   uint uVar15;
   float fVar16;
   undefined8 uVar17;
   undefined1 auVar18[16];
   int iVar19;
   int iVar20;
   int iVar21;
   int iVar22;
   float fVar23;
   float fVar25;
   undefined1 auVar24[16];
   if (*(long*)( this + 0x30 ) == 0) {
      return 0;
   }

   uVar15 = 0;
   uVar14 = ( uint )(*(int*)( this + 0x14 ) << 0xd) / *(uint*)( this + 0x18 );
   iVar7 = *(int*)( this + 0x1c );
   iVar2 = *(int*)( this + 0x20 );
   if (( iVar7 != iVar2 ) && ( uVar15 = iVar2 < iVar7 )) {
      uVar15 = ( iVar2 + *(int*)( this + 4 ) ) - iVar7;
   }

   if (*(long*)( this + 0x30 ) == 0) {
      uVar13 = *(uint*)( this + 0x10 );
      iVar7 = 0;
      if (param_2 < 1) {
         iVar7 = param_2;
      }

      if (uVar13 != 4) {
         if (uVar13 < 5) {
            if (uVar13 != 1) goto LAB_001000e8;
         }
 else {
            uVar12 = 0;
            if (uVar13 != 6) goto LAB_001001c5;
         }

      }

      uVar12 = 0;
   }
 else {
      iVar7 = get_num_of_ready_frames(this);
      fVar5 = _LC0;
      uVar13 = *(uint*)( this + 0x10 );
      if (param_2 <= iVar7) {
         iVar7 = param_2;
      }

      if (uVar13 == 4) {
         uVar13 = *(uint*)( this + 0x24 );
         uVar12 = uVar13 & 0x1fff;
         if (0 < iVar7) {
            uVar3 = *(undefined4*)this;
            uVar4 = *(uint*)( this + 4 );
            pAVar10 = param_1;
            do {
               pAVar9 = pAVar10;
               uVar12 = uVar12 + uVar14;
               uVar13 = uVar13 + uVar14 & ( 1 << ( (char)uVar3 + 0xdU & 0x1f ) ) - 1U;
               uVar8 = (int)uVar13 >> 0xd;
               fVar16 = (float)( uVar13 & 0x1fff ) * fVar5;
               if (uVar4 <= uVar8) goto LAB_0010019b;
               uVar17 = *(undefined8*)( *(long*)( this + 0x30 ) + ( ulong )(uVar8 * 4) * 4 );
               uVar1 = *(undefined8*)( *(long*)( this + 0x30 ) + ( ulong )(( uVar8 + 1 & *(uint*)( this + 8 ) ) * 4) * 4 );
               fVar23 = (float)uVar17;
               fVar25 = (float)( (ulong)uVar17 >> 0x20 );
               uVar17 = CONCAT44(( (float)( (ulong)uVar1 >> 0x20 ) - fVar25 ) * fVar16 + fVar25, ( (float)uVar1 - fVar23 ) * fVar16 + fVar23);
               *(undefined8*)pAVar9 = uVar17;
               pAVar10 = pAVar9 + 8;
            }
 while ( pAVar9 + 8 != param_1 + (long)iVar7 * 8 );
            goto LAB_00100390;
         }

      }
 else if (uVar13 < 5) {
         if (uVar13 == 1) {
            uVar13 = *(uint*)( this + 0x24 );
            uVar12 = uVar13 & 0x1fff;
            if (0 < iVar7) {
               uVar3 = *(undefined4*)this;
               uVar4 = *(uint*)( this + 4 );
               pAVar10 = param_1;
               do {
                  pAVar9 = pAVar10;
                  uVar12 = uVar12 + uVar14;
                  uVar13 = uVar13 + uVar14 & ( 1 << ( (char)uVar3 + 0xdU & 0x1f ) ) - 1U;
                  uVar8 = (int)uVar13 >> 0xd;
                  if (uVar4 <= uVar8) goto LAB_0010019b;
                  fVar16 = *(float*)( *(long*)( this + 0x30 ) + (ulong)uVar8 * 4 );
                  fVar16 = fVar16 + ( *(float*)( *(long*)( this + 0x30 ) + ( ulong )(uVar8 + 1 & *(uint*)( this + 8 )) * 4 ) - fVar16 ) * (float)( uVar13 & 0x1fff ) * fVar5;
                  uVar17 = CONCAT44(fVar16, fVar16);
                  *(undefined8*)pAVar9 = uVar17;
                  pAVar10 = pAVar9 + 8;
               }
 while ( param_1 + (long)iVar7 * 8 != pAVar9 + 8 );
               LAB_00100390:*(uint*)( this + 0x24 ) = uVar13;
               *(undefined8*)pAVar9 = uVar17;
            }

         }
 else {
            LAB_001000e8:fVar5 = _LC0;
            if (uVar13 != 2) goto LAB_001001c3;
            uVar13 = *(uint*)( this + 0x24 );
            uVar12 = uVar13 & 0x1fff;
            if (0 < iVar7) {
               uVar3 = *(undefined4*)this;
               uVar4 = *(uint*)( this + 4 );
               pAVar10 = param_1;
               do {
                  pAVar9 = pAVar10;
                  uVar12 = uVar12 + uVar14;
                  uVar13 = uVar13 + uVar14 & ( 1 << ( (char)uVar3 + 0xdU & 0x1f ) ) - 1U;
                  uVar8 = (int)uVar13 >> 0xd;
                  fVar16 = (float)( uVar13 & 0x1fff ) * fVar5;
                  if (uVar4 <= uVar8) goto LAB_0010019b;
                  uVar17 = *(undefined8*)( *(long*)( this + 0x30 ) + ( ulong )(uVar8 * 2) * 4 );
                  uVar1 = *(undefined8*)( *(long*)( this + 0x30 ) + ( ulong )(( uVar8 + 1 & *(uint*)( this + 8 ) ) * 2) * 4 );
                  fVar23 = (float)uVar17;
                  fVar25 = (float)( (ulong)uVar17 >> 0x20 );
                  uVar17 = CONCAT44(( (float)( (ulong)uVar1 >> 0x20 ) - fVar25 ) * fVar16 + fVar25, ( (float)uVar1 - fVar23 ) * fVar16 + fVar23);
                  *(undefined8*)pAVar9 = uVar17;
                  pAVar10 = pAVar9 + 8;
               }
 while ( param_1 + (long)iVar7 * 8 != pAVar9 + 8 );
               goto LAB_00100390;
            }

         }

      }
 else {
         if (uVar13 != 6) {
            LAB_001001c3:uVar12 = 0;
            goto LAB_001001c5;
         }

         uVar13 = *(uint*)( this + 0x24 );
         uVar12 = uVar13 & 0x1fff;
         if (0 < iVar7) {
            uVar3 = *(undefined4*)this;
            uVar4 = *(uint*)( this + 4 );
            pAVar10 = param_1;
            do {
               pAVar9 = pAVar10;
               uVar12 = uVar12 + uVar14;
               uVar13 = uVar13 + uVar14 & ( 1 << ( (char)uVar3 + 0xdU & 0x1f ) ) - 1U;
               uVar8 = (int)uVar13 >> 0xd;
               fVar16 = (float)( uVar13 & 0x1fff ) * fVar5;
               if (uVar4 <= uVar8) goto LAB_0010019b;
               uVar17 = *(undefined8*)( *(long*)( this + 0x30 ) + ( ulong )(uVar8 * 6) * 4 );
               uVar1 = *(undefined8*)( *(long*)( this + 0x30 ) + ( ulong )(( uVar8 + 1 & *(uint*)( this + 8 ) ) * 6) * 4 );
               fVar23 = (float)uVar17;
               fVar25 = (float)( (ulong)uVar17 >> 0x20 );
               uVar17 = CONCAT44(( (float)( (ulong)uVar1 >> 0x20 ) - fVar25 ) * fVar16 + fVar25, ( (float)uVar1 - fVar23 ) * fVar16 + fVar23);
               *(undefined8*)pAVar9 = uVar17;
               pAVar10 = pAVar9 + 8;
            }
 while ( param_1 + (long)iVar7 * 8 != pAVar9 + 8 );
            goto LAB_00100390;
         }

      }

   }

   uVar12 = uVar12 >> 0xd;
   LAB_001001c5:if ((int)uVar15 < (int)uVar12) {
      uVar12 = uVar15;
   }

   *(uint*)( this + 0x1c ) = uVar12 + *(int*)( this + 0x1c ) & *(uint*)( this + 8 );
   iVar6 = _LC4._4_4_;
   iVar2 = (int)_LC4;
   if (iVar7 < param_2) {
      if (0 < iVar7) {
         auVar24._0_4_ = (float)iVar7;
         iVar21 = 0;
         iVar22 = 0;
         auVar24._4_4_ = auVar24._0_4_;
         auVar24._8_8_ = _LC5;
         pAVar10 = param_1;
         do {
            pAVar9 = pAVar10 + 8;
            iVar19 = iVar7 - iVar21;
            iVar20 = iVar7 - iVar22;
            iVar21 = iVar21 + iVar2;
            iVar22 = iVar22 + iVar6;
            auVar18._0_4_ = (float)*(undefined8*)pAVar10 * (float)iVar19;
            auVar18._4_4_ = (float)( ( ulong ) * (undefined8*)pAVar10 >> 0x20 ) * (float)iVar20;
            auVar18._8_8_ = 0;
            auVar18 = divps(auVar18, auVar24);
            *(long*)pAVar10 = auVar18._0_8_;
            pAVar10 = pAVar9;
         }
 while ( pAVar9 != param_1 + ( ulong )(iVar7 - 1) * 8 + 8 );
      }

      if (iVar7 < param_2) {
         pAVar10 = param_1 + (long)iVar7 * 8;
         pAVar9 = param_1 + ( ( ulong )(uint)(param_2 - iVar7) + (long)iVar7 ) * 8;
         if (( (int)pAVar9 - (int)pAVar10 & 8U ) != 0) {
            *(undefined8*)pAVar10 = 0;
            pAVar10 = pAVar10 + 8;
            if (pAVar9 == pAVar10) {
               return 1;
            }

         }

         do {
            *(undefined8*)pAVar10 = 0;
            pAVar11 = pAVar10 + 0x10;
            *(undefined8*)( pAVar10 + 8 ) = 0;
            pAVar10 = pAVar11;
         }
 while ( pAVar9 != pAVar11 );
      }

   }

   return 1;
   LAB_0010019b:*(uint*)( this + 0x24 ) = uVar13;
   _err_print_error("_resample", "servers/audio/audio_rb_resampler.cpp", 0x38, "Condition \"pos >= rb_len\" is true. Returning: 0", 0, 0);
   goto LAB_001001c3;
}
/* AudioRBResampler::get_num_of_ready_frames() */undefined8 AudioRBResampler::get_num_of_ready_frames(AudioRBResampler *this) {
   undefined8 uVar1;
   if (*(long*)( this + 0x30 ) != 0) {
      uVar1 = get_num_of_ready_frames(this);
      return uVar1;
   }

   return 0;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* AudioRBResampler::setup(int, int, int, int, int) */undefined8 AudioRBResampler::setup(AudioRBResampler *this, int param_1, int param_2, int param_3, int param_4, int param_5) {
   size_t __n;
   void *__s;
   byte bVar1;
   uint uVar2;
   uint uVar3;
   long lVar4;
   ulong uVar5;
   uint uVar6;
   uint uVar7;
   void *pvVar8;
   long lVar9;
   uint uVar10;
   double dVar11;
   lVar9 = (long)param_1;
   if (( 1 < param_1 - 1U ) && ( ( param_1 & 0xfffffffdU ) != 4 )) {
      _err_print_error("setup", "servers/audio/audio_rb_resampler.cpp", 0xa2, "Condition \"p_channels != 1 && p_channels != 2 && p_channels != 4 && p_channels != 6\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      return 0x1f;
   }

   dVar11 = ( (double)param_4 / __LC8 ) * (double)param_2;
   if (dVar11 <= (double)param_5) {
      dVar11 = (double)param_5;
   }

   uVar3 = (uint)(long)dVar11;
   uVar10 = uVar3 & 0x40000000;
   if (( (long)dVar11 & 0x40000000U ) == 0) {
      uVar6 = 0x1e;
      do {
         uVar7 = uVar6 - 1;
         if (uVar6 == 0) {
            pvVar8 = *(void**)( this + 0x30 );
            if (pvVar8 != (void*)0x0) goto LAB_001005ef;
            *(int*)( this + 0x10 ) = param_1;
            *(undefined8*)this = 0x100000000;
            *(undefined4*)( this + 8 ) = 0;
            goto LAB_0010063d;
         }

         uVar2 = uVar6;
         uVar6 = uVar7;
      }
 while ( ( 1 << ( (byte)uVar7 & 0x1f ) & uVar3 ) == 0 );
   }
 else {
      uVar2 = 0x1f;
   }

   uVar10 = uVar2;
   pvVar8 = *(void**)( this + 0x30 );
   if (pvVar8 != (void*)0x0) {
      LAB_001005ef:if (( *(uint*)this == uVar10 ) && ( param_1 == *(int*)( this + 0x10 ) )) goto LAB_00100681;
      Memory::free_static(pvVar8, true);
      Memory::free_static(*(void**)( this + 0x28 ), true);
   }

   *(int*)( this + 0x10 ) = param_1;
   bVar1 = (byte)uVar10 & 0x1f;
   uVar3 = 1 << bVar1;
   *(uint*)this = uVar10;
   lVar9 = lVar9 * (ulong)uVar3;
   *(uint*)( this + 4 ) = uVar3;
   *(uint*)( this + 8 ) = uVar3 - 1;
   if (lVar9 == 0) {
      *(undefined8*)( this + 0x30 ) = 0;
      uVar5 = ( ulong )(uint)(0 << bVar1);
   }
 else {
      LAB_0010063d:lVar4 = Memory::alloc_static(lVar9 * 4, true);
      if (lVar4 == 0) {
         _err_print_error("memnew_arr_template", "./core/os/memory.h", 0xb6, "Parameter \"mem\" is null.", 0, 0);
      }
 else {
         *(long*)( lVar4 + -8 ) = lVar9;
      }

      *(long*)( this + 0x30 ) = lVar4;
      uVar5 = Memory::alloc_static(lVar9 * 4, true);
      if (uVar5 == 0) {
         _err_print_error("memnew_arr_template", "./core/os/memory.h", 0xb6, "Parameter \"mem\" is null.", 0, 0);
         uVar5 = 0;
      }
 else {
         *(long*)( uVar5 - 8 ) = lVar9;
      }

   }

   *(ulong*)( this + 0x28 ) = uVar5;
   LAB_00100681:*(int*)( this + 0x14 ) = param_2;
   *(int*)( this + 0x18 ) = param_3;
   *(undefined4*)( this + 0x24 ) = 0;
   *(undefined4*)( this + 0x1c ) = 0;
   *(undefined4*)( this + 0x20 ) = 0;
   if (*(int*)( this + 4 ) * *(int*)( this + 0x10 ) != 0) {
      pvVar8 = *(void**)( this + 0x28 );
      __s = *(void**)( this + 0x30 );
      __n = ( ulong )(uint)(*(int*)( this + 4 ) * *(int*)( this + 0x10 )) * 4;
      if (( __s < (void*)( (long)pvVar8 + __n ) ) && ( pvVar8 < (void*)( (long)__s + __n ) )) {
         lVar9 = 0;
         do {
            *(undefined4*)( (long)__s + lVar9 ) = 0;
            *(undefined4*)( (long)pvVar8 + lVar9 ) = 0;
            lVar9 = lVar9 + 4;
         }
 while ( __n - lVar9 != 0 );
      }
 else {
         memset(__s, 0, __n);
         memset(pvVar8, 0, __n);
      }

   }

   return 0;
}
/* AudioRBResampler::clear() */void AudioRBResampler::clear(AudioRBResampler *this) {
   if (*(void**)( this + 0x30 ) != (void*)0x0) {
      Memory::free_static(*(void**)( this + 0x30 ), true);
      Memory::free_static(*(void**)( this + 0x28 ), true);
      *(undefined8*)( this + 0x30 ) = 0;
      *(undefined4*)( this + 0x24 ) = 0;
      *(undefined4*)( this + 0x1c ) = 0;
      *(undefined4*)( this + 0x20 ) = 0;
      *(undefined8*)( this + 0x28 ) = 0;
   }

   return;
}
/* AudioRBResampler::AudioRBResampler() */void AudioRBResampler::AudioRBResampler(AudioRBResampler *this) {
   for (int i = 0; i < 3; i++) {
      *(undefined4*)( this + ( 4*i + 28 ) ) = 0;
   }

   *(undefined1(*) [16])( this + 0x28 ) = (undefined1[16])0x0;
   *(undefined4*)( this + 0x1c ) = 0;
   *(undefined4*)( this + 0x20 ) = 0;
   *(undefined8*)( this + 0x10 ) = 0;
   *(undefined4*)( this + 0x18 ) = 0;
   *(undefined1(*) [16])this = (undefined1[16])0x0;
   return;
}
/* AudioRBResampler::~AudioRBResampler() */void AudioRBResampler::~AudioRBResampler(AudioRBResampler *this) {
   if (*(void**)( this + 0x30 ) != (void*)0x0) {
      Memory::free_static(*(void**)( this + 0x30 ), true);
      Memory::free_static(*(void**)( this + 0x28 ), true);
      return;
   }

   return;
}


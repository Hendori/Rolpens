
/* AudioStreamSynchronized::get_bpm() const */

double __thiscall AudioStreamSynchronized::get_bpm(AudioStreamSynchronized *this)

{
  long lVar1;
  double dVar2;
  
  if (*(int *)(this + 0x348) < 1) {
    return 0.0;
  }
  lVar1 = 0;
  while ((*(long **)(this + lVar1 * 8 + 0x350) == (long *)0x0 ||
         (dVar2 = (double)(**(code **)(**(long **)(this + lVar1 * 8 + 0x350) + 0x1d8))(),
         dVar2 == 0.0))) {
    lVar1 = lVar1 + 1;
    if (*(int *)(this + 0x348) <= (int)lVar1) {
      return 0.0;
    }
  }
  return dVar2;
}



/* AudioStreamSynchronized::get_beat_count() const */

int __thiscall AudioStreamSynchronized::get_beat_count(AudioStreamSynchronized *this)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
  if (0 < *(int *)(this + 0x348)) {
    lVar2 = 0;
    iVar3 = 0;
    do {
      if (*(long **)(this + lVar2 * 8 + 0x350) != (long *)0x0) {
        iVar1 = (**(code **)(**(long **)(this + lVar2 * 8 + 0x350) + 0x1f0))();
        if (iVar3 < iVar1) {
          iVar3 = iVar1;
        }
      }
      lVar2 = lVar2 + 1;
    } while ((int)lVar2 < *(int *)(this + 0x348));
    return iVar3;
  }
  return 0;
}



/* AudioStreamSynchronized::get_bar_beats() const */

undefined8 __thiscall AudioStreamSynchronized::get_bar_beats(AudioStreamSynchronized *this)

{
  undefined8 uVar1;
  long lVar2;
  
  if (*(int *)(this + 0x348) < 1) {
    return 0;
  }
  lVar2 = 0;
  while ((*(long **)(this + lVar2 * 8 + 0x350) == (long *)0x0 ||
         (uVar1 = (**(code **)(**(long **)(this + lVar2 * 8 + 0x350) + 0x1e8))(), (int)uVar1 == 0)))
  {
    lVar2 = lVar2 + 1;
    if (*(int *)(this + 0x348) <= (int)lVar2) {
      return 0;
    }
  }
  return uVar1;
}



/* AudioStreamSynchronized::has_loop() const */

undefined8 __thiscall AudioStreamSynchronized::has_loop(AudioStreamSynchronized *this)

{
  undefined8 uVar1;
  long lVar2;
  
  if (*(int *)(this + 0x348) < 1) {
    return 0;
  }
  lVar2 = 0;
  while ((*(long **)(this + lVar2 * 8 + 0x350) == (long *)0x0 ||
         (uVar1 = (**(code **)(**(long **)(this + lVar2 * 8 + 0x350) + 0x1e0))(),
         (char)uVar1 == '\0'))) {
    lVar2 = lVar2 + 1;
    if (*(int *)(this + 0x348) <= (int)lVar2) {
      return 0;
    }
  }
  return uVar1;
}



/* AudioStreamSynchronized::get_length() const */

double __thiscall AudioStreamSynchronized::get_length(AudioStreamSynchronized *this)

{
  long lVar1;
  double dVar2;
  double dVar3;
  
  if (0 < *(int *)(this + 0x348)) {
    dVar3 = 0.0;
    lVar1 = 0;
    do {
      if (*(long **)(this + lVar1 * 8 + 0x350) != (long *)0x0) {
        dVar2 = (double)(**(code **)(**(long **)(this + lVar1 * 8 + 0x350) + 0x1f8))();
        if (dVar3 <= dVar2) {
          dVar3 = dVar2;
        }
      }
      lVar1 = lVar1 + 1;
    } while ((int)lVar1 < *(int *)(this + 0x348));
    return dVar3;
  }
  return 0.0;
}



/* AudioStreamSynchronized::get_stream_count() const */

undefined4 __thiscall AudioStreamSynchronized::get_stream_count(AudioStreamSynchronized *this)

{
  return *(undefined4 *)(this + 0x348);
}



/* AudioStreamPlaybackSynchronized::stop() */

void __thiscall AudioStreamPlaybackSynchronized::stop(AudioStreamPlaybackSynchronized *this)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(this + 0x670);
  this[0x824] = (AudioStreamPlaybackSynchronized)0x0;
  if (0 < *(int *)(lVar1 + 0x348)) {
    lVar2 = 0;
    do {
      if (*(long **)(this + lVar2 * 8 + 0x678) != (long *)0x0) {
        (**(code **)(**(long **)(this + lVar2 * 8 + 0x678) + 0x158))();
        lVar1 = *(long *)(this + 0x670);
      }
      lVar2 = lVar2 + 1;
    } while ((int)lVar2 < *(int *)(lVar1 + 0x348));
    return;
  }
  return;
}



/* AudioStreamPlaybackSynchronized::seek(double) */

void __thiscall
AudioStreamPlaybackSynchronized::seek(AudioStreamPlaybackSynchronized *this,double param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(this + 0x670);
  if (0 < *(int *)(lVar1 + 0x348)) {
    lVar2 = 0;
    do {
      if (*(long **)(this + lVar2 * 8 + 0x678) != (long *)0x0) {
        (**(code **)(**(long **)(this + lVar2 * 8 + 0x678) + 0x178))(param_1);
        lVar1 = *(long *)(this + 0x670);
      }
      lVar2 = lVar2 + 1;
    } while ((int)lVar2 < *(int *)(lVar1 + 0x348));
    return;
  }
  return;
}



/* AudioStreamPlaybackSynchronized::get_loop_count() const */

int __thiscall
AudioStreamPlaybackSynchronized::get_loop_count(AudioStreamPlaybackSynchronized *this)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  byte bVar5;
  int iVar6;
  
  lVar3 = *(long *)(this + 0x670);
  if (*(int *)(lVar3 + 0x348) < 1) {
    return 0;
  }
  lVar4 = 0;
  bVar5 = 0;
  iVar6 = 0;
  do {
    while (*(long **)(this + lVar4 * 8 + 0x678) == (long *)0x0) {
LAB_0010034a:
      lVar4 = lVar4 + 1;
      if (*(int *)(lVar3 + 0x348) <= (int)lVar4) {
        return iVar6;
      }
    }
    bVar1 = (**(code **)(**(long **)(this + lVar4 * 8 + 0x678) + 0x160))();
    if (bVar1 == 0) {
      lVar3 = *(long *)(this + 0x670);
    }
    else {
      iVar2 = (**(code **)(**(long **)(this + lVar4 * 8 + 0x678) + 0x168))();
      bVar5 = bVar5 ^ 1 | iVar2 < iVar6;
      if (bVar5 == 0) {
        lVar3 = *(long *)(this + 0x670);
        bVar5 = bVar1;
        goto LAB_0010034a;
      }
      lVar3 = *(long *)(this + 0x670);
      iVar6 = iVar2;
    }
    lVar4 = lVar4 + 1;
    if (*(int *)(lVar3 + 0x348) <= (int)lVar4) {
      return iVar6;
    }
  } while( true );
}



/* AudioStreamPlaybackSynchronized::get_playback_position() const */

double __thiscall
AudioStreamPlaybackSynchronized::get_playback_position(AudioStreamPlaybackSynchronized *this)

{
  char cVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  double dVar5;
  float local_2c;
  
  lVar2 = *(long *)(this + 0x670);
  if (0 < *(int *)(lVar2 + 0x348)) {
    cVar4 = '\0';
    lVar3 = 0;
    local_2c = 0.0;
    do {
      if (*(long **)(this + lVar3 * 8 + 0x678) != (long *)0x0) {
        cVar1 = (**(code **)(**(long **)(this + lVar3 * 8 + 0x678) + 0x160))();
        if (cVar1 != '\0') {
          dVar5 = (double)(**(code **)(**(long **)(this + lVar3 * 8 + 0x678) + 0x170))();
          if ((cVar4 == '\0') || (local_2c < (float)dVar5)) {
            local_2c = (float)dVar5;
            cVar4 = cVar1;
          }
        }
        lVar2 = *(long *)(this + 0x670);
      }
      lVar3 = lVar3 + 1;
    } while ((int)lVar3 < *(int *)(lVar2 + 0x348));
    return (double)local_2c;
  }
  return 0.0;
}



/* AudioStreamPlaybackSynchronized::is_playing() const */

AudioStreamPlaybackSynchronized __thiscall
AudioStreamPlaybackSynchronized::is_playing(AudioStreamPlaybackSynchronized *this)

{
  return this[0x824];
}



/* AudioStreamSynchronized::set_sync_stream_volume(int, float) */

void __thiscall
AudioStreamSynchronized::set_sync_stream_volume
          (AudioStreamSynchronized *this,int param_1,float param_2)

{
  if ((uint)param_1 < 0x20) {
    *(float *)(this + (long)param_1 * 4 + 0x450) = param_2;
    return;
  }
  _err_print_index_error
            ("set_sync_stream_volume","modules/interactive_music/audio_stream_synchronized.cpp",0x46
             ,(long)param_1,0x20,"p_stream_index","MAX_STREAMS","",false,false);
  return;
}



/* AudioStreamSynchronized::get_sync_stream_volume(int) const */

undefined4 __thiscall
AudioStreamSynchronized::get_sync_stream_volume(AudioStreamSynchronized *this,int param_1)

{
  if ((uint)param_1 < 0x20) {
    return *(undefined4 *)(this + (long)param_1 * 4 + 0x450);
  }
  _err_print_index_error
            ("get_sync_stream_volume","modules/interactive_music/audio_stream_synchronized.cpp",0x4b
             ,(long)param_1,0x20,"p_stream_index","MAX_STREAMS","",false,false);
  return 0;
}



/* AudioStreamSynchronized::set_stream_count(int) */

void __thiscall AudioStreamSynchronized::set_stream_count(AudioStreamSynchronized *this,int param_1)

{
  long *plVar1;
  
  if ((uint)param_1 < 0x21) {
    plVar1 = (long *)AudioServer::get_singleton();
    (**(code **)(*plVar1 + 0x170))(plVar1);
    *(int *)(this + 0x348) = param_1;
    plVar1 = (long *)AudioServer::get_singleton();
    (**(code **)(*plVar1 + 0x178))(plVar1);
    Object::notify_property_list_changed();
    return;
  }
  _err_print_error("set_stream_count","modules/interactive_music/audio_stream_synchronized.cpp",0x87
                   ,"Condition \"p_count < 0 || p_count > MAX_STREAMS\" is true.",0,0);
  return;
}



/* AudioStreamPlaybackSynchronized::mix(AudioFrame*, float, int) */

int __thiscall
AudioStreamPlaybackSynchronized::mix
          (AudioStreamPlaybackSynchronized *this,AudioFrame *param_1,float param_2,int param_3)

{
  AudioStreamPlaybackSynchronized AVar1;
  long *plVar2;
  char cVar3;
  AudioFrame *pAVar4;
  AudioFrame *pAVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  int iVar9;
  AudioStreamPlaybackSynchronized AVar10;
  AudioStreamPlaybackSynchronized AVar11;
  float fVar12;
  AudioStreamPlaybackSynchronized local_3e;
  
  AVar1 = this[0x824];
  if (AVar1 == (AudioStreamPlaybackSynchronized)0x0) {
    return 0;
  }
  if (param_3 != 0) {
    local_3e = (AudioStreamPlaybackSynchronized)0x0;
    lVar6 = *(long *)(this + 0x670);
    iVar9 = param_3;
    do {
      iVar7 = 0x80;
      if (iVar9 < 0x81) {
        iVar7 = iVar9;
      }
      if (*(int *)(lVar6 + 0x348) < 1) {
LAB_00100803:
        if (0 < iVar9) {
          *(undefined8 *)param_1 = 0;
          lVar8 = 1;
          if (1 < iVar7) {
            if ((iVar7 - 1U & 1) != 0) {
              *(undefined8 *)(param_1 + 8) = 0;
              lVar8 = 2;
              if (iVar7 < 3) goto LAB_00100764;
            }
            do {
              *(undefined8 *)(param_1 + lVar8 * 8) = 0;
              *(undefined8 *)(param_1 + lVar8 * 8 + 8) = 0;
              lVar8 = lVar8 + 2;
            } while ((int)lVar8 < iVar7);
          }
        }
      }
      else {
        lVar8 = 0;
        AVar11 = AVar1;
LAB_00100698:
        do {
          AVar10 = AVar11;
          if (*(long **)(this + lVar8 * 8 + 0x678) != (long *)0x0) {
            cVar3 = (**(code **)(**(long **)(this + lVar8 * 8 + 0x678) + 0x160))();
            lVar6 = *(long *)(this + 0x670);
            if (cVar3 != '\0') {
              fVar12 = expf(_LC10 * *(float *)(lVar6 + 0x450 + (long)(int)lVar8 * 4));
              plVar2 = *(long **)(this + lVar8 * 8 + 0x678);
              if (AVar10 != (AudioStreamPlaybackSynchronized)0x0) {
                (**(code **)(*plVar2 + 0x198))(param_2,plVar2,param_1,iVar7);
                if (0 < iVar9) {
                  pAVar4 = param_1;
                  do {
                    pAVar5 = pAVar4 + 8;
                    *(ulong *)pAVar4 =
                         CONCAT44((float)((ulong)*(undefined8 *)pAVar4 >> 0x20) * fVar12,
                                  (float)*(undefined8 *)pAVar4 * fVar12);
                    pAVar4 = pAVar5;
                  } while (param_1 + (long)iVar7 * 8 != pAVar5);
                }
                lVar6 = *(long *)(this + 0x670);
                lVar8 = lVar8 + 1;
                AVar11 = (AudioStreamPlaybackSynchronized)0x0;
                local_3e = AVar10;
                if (*(int *)(lVar6 + 0x348) <= (int)lVar8) break;
                goto LAB_00100698;
              }
              (**(code **)(*plVar2 + 0x198))(param_2,plVar2,this + 0x270,iVar7);
              lVar6 = 0;
              if (0 < iVar9) {
                do {
                  *(ulong *)(param_1 + lVar6) =
                       CONCAT44((float)((ulong)*(undefined8 *)(this + lVar6 + 0x270) >> 0x20) *
                                fVar12 + (float)((ulong)*(undefined8 *)(param_1 + lVar6) >> 0x20),
                                (float)*(undefined8 *)(this + lVar6 + 0x270) * fVar12 +
                                (float)*(undefined8 *)(param_1 + lVar6));
                  lVar6 = lVar6 + 8;
                } while (lVar6 != (long)iVar7 * 8);
              }
              lVar6 = *(long *)(this + 0x670);
            }
          }
          lVar8 = lVar8 + 1;
          AVar11 = AVar10;
        } while ((int)lVar8 < *(int *)(lVar6 + 0x348));
        if (AVar11 != (AudioStreamPlaybackSynchronized)0x0) goto LAB_00100803;
      }
LAB_00100764:
      param_1 = param_1 + (long)iVar7 * 8;
      iVar9 = iVar9 - iVar7;
    } while (iVar9 != 0);
    if (local_3e != (AudioStreamPlaybackSynchronized)0x0) {
      return param_3;
    }
  }
  this[0x824] = (AudioStreamPlaybackSynchronized)0x0;
  return param_3;
}



/* AudioStreamPlaybackSynchronized::tag_used_streams() */

void __thiscall
AudioStreamPlaybackSynchronized::tag_used_streams(AudioStreamPlaybackSynchronized *this)

{
  char cVar1;
  long lVar2;
  long lVar3;
  double dVar4;
  
  if (this[0x824] != (AudioStreamPlaybackSynchronized)0x0) {
    lVar2 = *(long *)(this + 0x670);
    if (0 < *(int *)(lVar2 + 0x348)) {
      lVar3 = 0;
      do {
        if (*(long **)(this + lVar3 * 8 + 0x678) != (long *)0x0) {
          cVar1 = (**(code **)(**(long **)(this + lVar3 * 8 + 0x678) + 0x160))();
          lVar2 = *(long *)(this + 0x670);
          if (cVar1 != '\0') {
            dVar4 = (double)(**(code **)(**(long **)(this + lVar3 * 8 + 0x678) + 0x170))();
            AudioStream::tag_used((float)dVar4);
            lVar2 = *(long *)(this + 0x670);
          }
        }
        lVar3 = lVar3 + 1;
      } while ((int)lVar3 < *(int *)(lVar2 + 0x348));
    }
    AudioStream::tag_used(0.0);
    return;
  }
  return;
}



/* AudioStreamSynchronized::get_sync_stream(int) const */

long * AudioStreamSynchronized::get_sync_stream(int param_1)

{
  long lVar1;
  char cVar2;
  uint in_EDX;
  long in_RSI;
  undefined4 in_register_0000003c;
  long *plVar3;
  
  plVar3 = (long *)CONCAT44(in_register_0000003c,param_1);
  if (in_EDX < 0x20) {
    *plVar3 = 0;
    lVar1 = *(long *)(in_RSI + 0x350 + (long)(int)in_EDX * 8);
    if (lVar1 != 0) {
      *plVar3 = lVar1;
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
        *plVar3 = 0;
      }
    }
    return plVar3;
  }
  _err_print_index_error
            ("get_sync_stream","modules/interactive_music/audio_stream_synchronized.cpp",0x40,
             (long)(int)in_EDX,0x20,"p_stream_index","MAX_STREAMS","",false,false);
  *plVar3 = 0;
  return plVar3;
}



/* AudioStreamSynchronized::get_stream_name() const */

AudioStreamSynchronized * __thiscall
AudioStreamSynchronized::get_stream_name(AudioStreamSynchronized *this)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)this = 0;
  String::parse_latin1((StrRange *)this);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AudioStreamPlaybackSynchronized::start(double) */

void __thiscall
AudioStreamPlaybackSynchronized::start(AudioStreamPlaybackSynchronized *this,double param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  if (this[0x824] != (AudioStreamPlaybackSynchronized)0x0) {
    if (*(code **)(*(long *)this + 0x158) == stop) {
      lVar1 = *(long *)(this + 0x670);
      this[0x824] = (AudioStreamPlaybackSynchronized)0x0;
      lVar3 = 0;
      if (*(int *)(lVar1 + 0x348) < 1) {
        return;
      }
      do {
        if (*(long **)(this + lVar3 * 8 + 0x678) != (long *)0x0) {
          (**(code **)(**(long **)(this + lVar3 * 8 + 0x678) + 0x158))();
          lVar1 = *(long *)(this + 0x670);
        }
        iVar2 = *(int *)(lVar1 + 0x348);
        lVar3 = lVar3 + 1;
      } while ((int)lVar3 < iVar2);
      goto LAB_00100ab5;
    }
    (**(code **)(*(long *)this + 0x158))();
  }
  lVar1 = *(long *)(this + 0x670);
  iVar2 = *(int *)(lVar1 + 0x348);
LAB_00100ab5:
  if (0 < iVar2) {
    lVar3 = 0;
    do {
      if (*(long **)(this + lVar3 * 8 + 0x678) != (long *)0x0) {
        (**(code **)(**(long **)(this + lVar3 * 8 + 0x678) + 0x150))(param_1);
        this[0x824] = (AudioStreamPlaybackSynchronized)0x1;
        lVar1 = *(long *)(this + 0x670);
      }
      lVar3 = lVar3 + 1;
    } while ((int)lVar3 < *(int *)(lVar1 + 0x348));
  }
  return;
}



/* AudioStreamPlaybackSynchronized::~AudioStreamPlaybackSynchronized() */

void __thiscall
AudioStreamPlaybackSynchronized::~AudioStreamPlaybackSynchronized
          (AudioStreamPlaybackSynchronized *this)

{
  uint *puVar1;
  uint *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  Object *pOVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  char cVar33;
  uint uVar34;
  ulong uVar35;
  uint uVar36;
  uint *puVar37;
  int iVar38;
  uint uVar39;
  long lVar40;
  ulong uVar41;
  uint *puVar42;
  AudioStreamPlaybackSynchronized *pAVar43;
  uint *puVar44;
  ulong uVar45;
  ulong uVar46;
  uint uVar47;
  ulong uVar48;
  
  lVar6 = *(long *)(this + 0x670);
  *(undefined ***)this = &PTR__initialize_classv_0010c6a8;
  if (((lVar6 != 0) && (lVar7 = *(long *)(lVar6 + 0x4d0), lVar7 != 0)) &&
     (*(int *)(lVar6 + 0x4f4) != 0)) {
    lVar8 = *(long *)(lVar6 + 0x4e8);
    uVar34 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar6 + 0x4f0) * 4);
    lVar9 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(lVar6 + 0x4f0) * 8);
    uVar46 = CONCAT44(0,uVar34);
    uVar35 = (long)this * 0x3ffff - 1;
    uVar35 = (uVar35 ^ uVar35 >> 0x1f) * 0x15;
    uVar35 = (uVar35 ^ uVar35 >> 0xb) * 0x41;
    uVar35 = uVar35 >> 0x16 ^ uVar35;
    uVar45 = uVar35 & 0xffffffff;
    if ((int)uVar35 == 0) {
      uVar45 = 1;
    }
    auVar13._8_8_ = 0;
    auVar13._0_8_ = uVar45 * lVar9;
    auVar23._8_8_ = 0;
    auVar23._0_8_ = uVar46;
    lVar40 = SUB168(auVar13 * auVar23,8);
    uVar47 = *(uint *)(lVar8 + lVar40 * 4);
    iVar38 = SUB164(auVar13 * auVar23,8);
    if (uVar47 != 0) {
      uVar36 = 0;
      do {
        if ((uint)uVar45 == uVar47) {
          lVar10 = *(long *)(lVar6 + 0x4d8);
          uVar47 = *(uint *)(lVar10 + lVar40 * 4);
          uVar35 = (ulong)uVar47;
          if (this == *(AudioStreamPlaybackSynchronized **)(lVar7 + uVar35 * 8)) {
            lVar11 = *(long *)(lVar6 + 0x4e0);
            puVar1 = (uint *)(lVar11 + uVar35 * 4);
            uVar36 = *puVar1;
            uVar45 = (ulong)uVar36;
            auVar17._8_8_ = 0;
            auVar17._0_8_ = (ulong)(uVar36 + 1) * lVar9;
            auVar27._8_8_ = 0;
            auVar27._0_8_ = uVar46;
            lVar40 = SUB168(auVar17 * auVar27,8) * 4;
            uVar39 = SUB164(auVar17 * auVar27,8);
            uVar48 = (ulong)uVar39;
            puVar42 = (uint *)(lVar8 + lVar40);
            if ((*puVar42 == 0) ||
               (auVar18._8_8_ = 0, auVar18._0_8_ = (ulong)*puVar42 * lVar9, auVar28._8_8_ = 0,
               auVar28._0_8_ = uVar46, auVar19._8_8_ = 0,
               auVar19._0_8_ = (ulong)((uVar39 + uVar34) - SUB164(auVar18 * auVar28,8)) * lVar9,
               auVar29._8_8_ = 0, auVar29._0_8_ = uVar46, SUB164(auVar19 * auVar29,8) == 0)) {
              uVar48 = (ulong)uVar36;
            }
            else {
              while( true ) {
                puVar37 = (uint *)(lVar40 + lVar10);
                puVar2 = (uint *)(lVar10 + uVar45 * 4);
                puVar44 = (uint *)(uVar45 * 4 + lVar8);
                puVar3 = (undefined4 *)(lVar11 + (ulong)*puVar37 * 4);
                puVar4 = (undefined4 *)(lVar11 + (ulong)*puVar2 * 4);
                uVar5 = *puVar4;
                *puVar4 = *puVar3;
                *puVar3 = uVar5;
                uVar36 = *puVar42;
                *puVar42 = *puVar44;
                *puVar44 = uVar36;
                uVar36 = *puVar37;
                *puVar37 = *puVar2;
                *puVar2 = uVar36;
                auVar22._8_8_ = 0;
                auVar22._0_8_ = (ulong)((int)uVar48 + 1) * lVar9;
                auVar32._8_8_ = 0;
                auVar32._0_8_ = uVar46;
                uVar41 = SUB168(auVar22 * auVar32,8);
                lVar40 = uVar41 * 4;
                puVar42 = (uint *)(lVar8 + lVar40);
                if ((*puVar42 == 0) ||
                   (auVar20._8_8_ = 0, auVar20._0_8_ = (ulong)*puVar42 * lVar9, auVar30._8_8_ = 0,
                   auVar30._0_8_ = uVar46, auVar21._8_8_ = 0,
                   auVar21._0_8_ =
                        (ulong)((SUB164(auVar22 * auVar32,8) + uVar34) - SUB164(auVar20 * auVar30,8)
                               ) * lVar9, auVar31._8_8_ = 0, auVar31._0_8_ = uVar46,
                   SUB164(auVar21 * auVar31,8) == 0)) break;
                uVar45 = uVar48;
                uVar48 = uVar41 & 0xffffffff;
              }
            }
            *(undefined4 *)(lVar8 + uVar48 * 4) = 0;
            uVar34 = *(int *)(lVar6 + 0x4f4) - 1;
            *(uint *)(lVar6 + 0x4f4) = uVar34;
            if (uVar47 < uVar34) {
              uVar36 = *(uint *)(lVar11 + (ulong)uVar34 * 4);
              *(undefined8 *)(lVar7 + uVar35 * 8) = *(undefined8 *)(lVar7 + (ulong)uVar34 * 8);
              *puVar1 = uVar36;
              *(uint *)(lVar10 + (ulong)*(uint *)(lVar11 + (ulong)*(uint *)(lVar6 + 0x4f4) * 4) * 4)
                   = uVar47;
            }
            break;
          }
        }
        uVar36 = uVar36 + 1;
        auVar14._8_8_ = 0;
        auVar14._0_8_ = (ulong)(iVar38 + 1) * lVar9;
        auVar24._8_8_ = 0;
        auVar24._0_8_ = uVar46;
        lVar40 = SUB168(auVar14 * auVar24,8);
        uVar47 = *(uint *)(lVar8 + lVar40 * 4);
        iVar38 = SUB164(auVar14 * auVar24,8);
      } while ((uVar47 != 0) &&
              (auVar15._8_8_ = 0, auVar15._0_8_ = (ulong)uVar47 * lVar9, auVar25._8_8_ = 0,
              auVar25._0_8_ = uVar46, auVar16._8_8_ = 0,
              auVar16._0_8_ = (ulong)((uVar34 + iVar38) - SUB164(auVar15 * auVar25,8)) * lVar9,
              auVar26._8_8_ = 0, auVar26._0_8_ = uVar46, uVar36 <= SUB164(auVar16 * auVar26,8)));
    }
  }
  pAVar43 = this + 0x770;
  do {
    if ((*(long *)pAVar43 != 0) && (cVar33 = RefCounted::unreference(), cVar33 != '\0')) {
      pOVar12 = *(Object **)pAVar43;
      cVar33 = predelete_handler(pOVar12);
      if (cVar33 != '\0') {
        (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
        Memory::free_static(pOVar12,false);
      }
    }
    pAVar43 = pAVar43 + -8;
  } while (pAVar43 != this + 0x670);
  if ((*(long *)(this + 0x670) != 0) && (cVar33 = RefCounted::unreference(), cVar33 != '\0')) {
    pOVar12 = *(Object **)(this + 0x670);
    cVar33 = predelete_handler(pOVar12);
    if (cVar33 != '\0') {
      (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
      Memory::free_static(pOVar12,false);
    }
  }
  AudioStreamPlayback::~AudioStreamPlayback((AudioStreamPlayback *)this);
  return;
}



/* AudioStreamPlaybackSynchronized::~AudioStreamPlaybackSynchronized() */

void __thiscall
AudioStreamPlaybackSynchronized::~AudioStreamPlaybackSynchronized
          (AudioStreamPlaybackSynchronized *this)

{
  ~AudioStreamPlaybackSynchronized(this);
  operator_delete(this,0x828);
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



/* AudioStreamSynchronized::AudioStreamSynchronized() */

void __thiscall AudioStreamSynchronized::AudioStreamSynchronized(AudioStreamSynchronized *this)

{
  long lVar1;
  AudioStreamSynchronized *pAVar2;
  byte bVar3;
  
  bVar3 = 0;
  Resource::Resource((Resource *)this);
  *(code **)this = strlen;
  *(undefined1 (*) [16])(this + 0x240) = (undefined1  [16])0x0;
  StringName::StringName((StringName *)(this + 0x270),"_instantiate_playback",false);
  this[0x278] = (AudioStreamSynchronized)0x0;
  *(undefined8 *)(this + 0x280) = 0;
  StringName::StringName((StringName *)(this + 0x288),"_get_stream_name",false);
  this[0x290] = (AudioStreamSynchronized)0x0;
  *(undefined8 *)(this + 0x298) = 0;
  StringName::StringName((StringName *)(this + 0x2a0),"_get_length",false);
  this[0x2a8] = (AudioStreamSynchronized)0x0;
  *(undefined8 *)(this + 0x2b0) = 0;
  StringName::StringName((StringName *)(this + 0x2b8),"_is_monophonic",false);
  this[0x2c0] = (AudioStreamSynchronized)0x0;
  *(undefined8 *)(this + 0x2c8) = 0;
  StringName::StringName((StringName *)(this + 0x2d0),"_get_bpm",false);
  this[0x2d8] = (AudioStreamSynchronized)0x0;
  *(undefined8 *)(this + 0x2e0) = 0;
  StringName::StringName((StringName *)(this + 0x2e8),"_has_loop",false);
  this[0x2f0] = (AudioStreamSynchronized)0x0;
  *(undefined8 *)(this + 0x2f8) = 0;
  StringName::StringName((StringName *)(this + 0x300),"_get_bar_beats",false);
  this[0x308] = (AudioStreamSynchronized)0x0;
  *(undefined8 *)(this + 0x310) = 0;
  StringName::StringName((StringName *)(this + 0x318),"_get_beat_count",false);
  this[800] = (AudioStreamSynchronized)0x0;
  *(undefined8 *)(this + 0x328) = 0;
  StringName::StringName((StringName *)(this + 0x330),"_get_parameter_list",false);
  *(undefined ***)this = &PTR__initialize_classv_0010c470;
  this[0x338] = (AudioStreamSynchronized)0x0;
  *(undefined8 *)(this + 0x340) = 0;
  *(undefined4 *)(this + 0x348) = 0;
  pAVar2 = this + 0x350;
  for (lVar1 = 0x20; lVar1 != 0; lVar1 = lVar1 + -1) {
    *(undefined8 *)pAVar2 = 0;
    pAVar2 = pAVar2 + (ulong)bVar3 * -0x10 + 8;
  }
  pAVar2 = this + 0x450;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *(undefined8 *)pAVar2 = 0;
    pAVar2 = pAVar2 + (ulong)bVar3 * -0x10 + 8;
  }
  *(undefined1 (*) [16])(this + 0x4d0) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x4f0) = 2;
  *(undefined1 (*) [16])(this + 0x4e0) = (undefined1  [16])0x0;
  return;
}



/* AudioStreamPlaybackSynchronized::AudioStreamPlaybackSynchronized() */

void __thiscall
AudioStreamPlaybackSynchronized::AudioStreamPlaybackSynchronized
          (AudioStreamPlaybackSynchronized *this)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  AudioStreamPlaybackSynchronized *pAVar5;
  byte bVar6;
  
  bVar6 = 0;
  AudioStreamPlayback::AudioStreamPlayback((AudioStreamPlayback *)this);
  *(undefined ***)this = &PTR__initialize_classv_0010c6a8;
  *(undefined8 *)(this + 0x270) = 0;
  *(undefined8 *)(this + 0x668) = 0;
  puVar4 = (undefined8 *)((ulong)(this + 0x278) & 0xfffffffffffffff8);
  for (uVar2 = (ulong)(((int)this - (int)(undefined8 *)((ulong)(this + 0x278) & 0xfffffffffffffff8))
                       + 0x670U >> 3); uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar4 = 0;
    puVar4 = puVar4 + (ulong)bVar6 * -2 + 1;
  }
  *(undefined8 *)(this + 0x670) = 0;
  pAVar5 = this + 0x678;
  for (lVar3 = 0x20; uVar1 = _LC32, lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined8 *)pAVar5 = 0;
    pAVar5 = pAVar5 + (ulong)bVar6 * -0x10 + 8;
  }
  *(undefined8 *)(this + 0x7f8) = 0;
  *(undefined4 *)(this + 0x800) = 0xffffffff;
  *(undefined8 *)(this + 0x808) = uVar1;
  *(undefined4 *)(this + 0x810) = 0;
  *(undefined8 *)(this + 0x818) = 0;
  *(undefined4 *)(this + 0x820) = 0;
  this[0x824] = (AudioStreamPlaybackSynchronized)0x0;
  return;
}



/* AudioStreamPlaybackSynchronized::_update_playback_instances() */

void __thiscall
AudioStreamPlaybackSynchronized::_update_playback_instances(AudioStreamPlaybackSynchronized *this)

{
  long *plVar1;
  Object *pOVar2;
  char cVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  Object *pOVar7;
  long in_FS_OFFSET;
  Object *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(code **)(*(long *)this + 0x158) == stop) {
    lVar4 = *(long *)(this + 0x670);
    this[0x824] = (AudioStreamPlaybackSynchronized)0x0;
    lVar6 = 0;
    if (*(int *)(lVar4 + 0x348) < 1) goto LAB_00101378;
    do {
      if (*(long **)(this + lVar6 * 8 + 0x678) != (long *)0x0) {
        (**(code **)(**(long **)(this + lVar6 * 8 + 0x678) + 0x158))();
        lVar4 = *(long *)(this + 0x670);
      }
      iVar5 = *(int *)(lVar4 + 0x348);
      lVar6 = lVar6 + 1;
    } while ((int)lVar6 < iVar5);
  }
  else {
    (**(code **)(*(long *)this + 0x158))();
    lVar4 = *(long *)(this + 0x670);
    iVar5 = *(int *)(lVar4 + 0x348);
  }
  if (0 < iVar5) {
    lVar6 = 0;
    do {
      while (plVar1 = *(long **)(lVar4 + 0x350 + (long)(int)lVar6 * 8), plVar1 == (long *)0x0) {
        if (*(long *)(this + lVar6 * 8 + 0x678) != 0) {
          cVar3 = RefCounted::unreference();
          if (cVar3 != '\0') {
            pOVar2 = *(Object **)(this + lVar6 * 8 + 0x678);
            cVar3 = predelete_handler(pOVar2);
            if (cVar3 != '\0') {
              (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
              Memory::free_static(pOVar2,false);
            }
          }
          lVar4 = *(long *)(this + 0x670);
        }
        *(undefined8 *)(this + lVar6 * 8 + 0x678) = 0;
        lVar6 = lVar6 + 1;
        if (*(int *)(lVar4 + 0x348) <= (int)lVar6) goto LAB_00101378;
      }
      (**(code **)(*plVar1 + 0x1c8))(&local_38);
      pOVar2 = *(Object **)(this + lVar6 * 8 + 0x678);
      pOVar7 = pOVar2;
      if (local_38 == pOVar2) {
LAB_0010128a:
        if (((pOVar7 != (Object *)0x0) &&
            (cVar3 = RefCounted::unreference(), pOVar2 = local_38, cVar3 != '\0')) &&
           (cVar3 = predelete_handler(local_38), cVar3 != '\0')) {
          (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
          Memory::free_static(pOVar2,false);
        }
      }
      else {
        *(Object **)(this + lVar6 * 8 + 0x678) = local_38;
        if (local_38 != (Object *)0x0) {
          cVar3 = RefCounted::reference();
          if (cVar3 == '\0') {
            *(undefined8 *)(this + lVar6 * 8 + 0x678) = 0;
          }
          pOVar7 = local_38;
          if (pOVar2 != (Object *)0x0) {
            cVar3 = RefCounted::unreference();
            goto joined_r0x00101284;
          }
          goto LAB_0010128a;
        }
        if (pOVar2 != (Object *)0x0) {
          cVar3 = RefCounted::unreference();
joined_r0x00101284:
          pOVar7 = local_38;
          if ((cVar3 != '\0') &&
             (cVar3 = predelete_handler(pOVar2), pOVar7 = local_38, cVar3 != '\0')) {
            (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
            Memory::free_static(pOVar2,false);
            pOVar7 = local_38;
          }
          goto LAB_0010128a;
        }
      }
      lVar4 = *(long *)(this + 0x670);
      lVar6 = lVar6 + 1;
    } while ((int)lVar6 < *(int *)(lVar4 + 0x348));
  }
LAB_00101378:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AudioStreamSynchronized::set_sync_stream(int, Ref<AudioStream>) */

void __thiscall
AudioStreamSynchronized::set_sync_stream(AudioStreamSynchronized *this,uint param_1,long *param_3)

{
  int iVar1;
  Object *pOVar2;
  Object *pOVar3;
  undefined8 *puVar4;
  int iVar5;
  char cVar6;
  long *plVar7;
  long lVar8;
  
  if (this == (AudioStreamSynchronized *)*param_3) {
    _err_print_error("set_sync_stream","modules/interactive_music/audio_stream_synchronized.cpp",
                     0x34,"Condition \"p_stream == this\" is true.",0,0);
    return;
  }
  if (param_1 < 0x20) {
    plVar7 = (long *)AudioServer::get_singleton();
    (**(code **)(*plVar7 + 0x170))(plVar7);
    pOVar2 = (Object *)*param_3;
    pOVar3 = *(Object **)(this + (long)(int)param_1 * 8 + 0x350);
    if (pOVar2 != pOVar3) {
      *(Object **)(this + (long)(int)param_1 * 8 + 0x350) = pOVar2;
      if (pOVar2 != (Object *)0x0) {
        cVar6 = RefCounted::reference();
        if (cVar6 == '\0') {
          *(undefined8 *)(this + (long)(int)param_1 * 8 + 0x350) = 0;
        }
      }
      if (pOVar3 != (Object *)0x0) {
        cVar6 = RefCounted::unreference();
        if (cVar6 != '\0') {
          cVar6 = predelete_handler(pOVar3);
          if (cVar6 != '\0') {
            (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
            Memory::free_static(pOVar3,false);
          }
        }
      }
    }
    iVar1 = *(int *)(this + 0x4f4);
    if (iVar1 != 0) {
      puVar4 = *(undefined8 **)(this + 0x4d0);
      AudioStreamPlaybackSynchronized::_update_playback_instances
                ((AudioStreamPlaybackSynchronized *)*puVar4);
      lVar8 = 0;
      if (1 < iVar1) {
        do {
          AudioStreamPlaybackSynchronized::_update_playback_instances
                    ((AudioStreamPlaybackSynchronized *)puVar4[lVar8 + 1]);
          iVar5 = (int)lVar8;
          lVar8 = lVar8 + 1;
        } while (iVar5 + 2 < iVar1);
      }
    }
    plVar7 = (long *)AudioServer::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x001014fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar7 + 0x178))(plVar7);
    return;
  }
  _err_print_index_error
            ("set_sync_stream","modules/interactive_music/audio_stream_synchronized.cpp",0x35,
             (long)(int)param_1,0x20,"p_stream_index","MAX_STREAMS","",false,false);
  return;
}



/* AudioStreamSynchronized::instantiate_playback() */

void AudioStreamSynchronized::instantiate_playback(void)

{
  Object *pOVar1;
  undefined8 uVar2;
  char cVar3;
  AudioStreamPlayback *this;
  ulong uVar4;
  long lVar5;
  Object *pOVar6;
  AudioStreamPlayback *this_00;
  Object *in_RSI;
  long *in_RDI;
  undefined8 *puVar7;
  AudioStreamPlayback *pAVar8;
  long in_FS_OFFSET;
  byte bVar9;
  AudioStreamPlaybackSynchronized *local_48 [3];
  long local_30;
  
  bVar9 = 0;
  this_00 = (AudioStreamPlayback *)0x0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  this = (AudioStreamPlayback *)operator_new(0x828,"");
  AudioStreamPlayback::AudioStreamPlayback(this);
  *(undefined ***)this = &PTR__initialize_classv_0010c6a8;
  *(undefined8 *)(this + 0x270) = 0;
  *(undefined8 *)(this + 0x668) = 0;
  puVar7 = (undefined8 *)((ulong)(this + 0x278) & 0xfffffffffffffff8);
  for (uVar4 = (ulong)(((int)this - (int)(undefined8 *)((ulong)(this + 0x278) & 0xfffffffffffffff8))
                       + 0x670U >> 3); uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar7 = 0;
    puVar7 = puVar7 + (ulong)bVar9 * -2 + 1;
  }
  *(undefined8 *)(this + 0x670) = 0;
  pAVar8 = this + 0x678;
  for (lVar5 = 0x20; uVar2 = _LC32, lVar5 != 0; lVar5 = lVar5 + -1) {
    *(undefined8 *)pAVar8 = 0;
    pAVar8 = pAVar8 + (ulong)bVar9 * -0x10 + 8;
  }
  this[0x824] = (AudioStreamPlayback)0x0;
  *(undefined8 *)(this + 0x7f8) = 0;
  *(undefined8 *)(this + 0x808) = uVar2;
  *(undefined4 *)(this + 0x800) = 0xffffffff;
  *(undefined4 *)(this + 0x810) = 0;
  *(undefined8 *)(this + 0x818) = 0;
  *(undefined4 *)(this + 0x820) = 0;
  postinitialize_handler((Object *)this);
  cVar3 = RefCounted::init_ref();
  if (cVar3 != '\0') {
    cVar3 = RefCounted::reference();
    if (cVar3 != '\0') {
      this_00 = this;
    }
    cVar3 = RefCounted::unreference();
    if ((cVar3 != '\0') && (cVar3 = predelete_handler((Object *)this), cVar3 != '\0')) {
      (**(code **)(*(long *)this + 0x140))(this);
      Memory::free_static(this,false);
    }
  }
  cVar3 = RefCounted::init_ref();
  pOVar1 = *(Object **)((AudioStreamPlaybackSynchronized *)this_00 + 0x670);
  if (cVar3 == '\0') {
    if (pOVar1 == (Object *)0x0) goto LAB_001016ee;
    *(undefined8 *)((AudioStreamPlaybackSynchronized *)this_00 + 0x670) = 0;
    cVar3 = RefCounted::unreference();
  }
  else {
    pOVar6 = pOVar1;
    if (in_RSI != pOVar1) {
      *(Object **)((AudioStreamPlaybackSynchronized *)this_00 + 0x670) = in_RSI;
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
        *(undefined8 *)((AudioStreamPlaybackSynchronized *)this_00 + 0x670) = 0;
      }
      pOVar6 = in_RSI;
      if (((pOVar1 != (Object *)0x0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0')) &&
         (cVar3 = predelete_handler(pOVar1), cVar3 != '\0')) {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
    cVar3 = RefCounted::unreference();
    pOVar1 = pOVar6;
  }
  if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar1), cVar3 != '\0')) {
    (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
    Memory::free_static(pOVar1,false);
  }
LAB_001016ee:
  AudioStreamPlaybackSynchronized::_update_playback_instances
            ((AudioStreamPlaybackSynchronized *)this_00);
  HashSet<AudioStreamPlaybackSynchronized*,HashMapHasherDefault,HashMapComparatorDefault<AudioStreamPlaybackSynchronized*>>
  ::insert(local_48);
  *in_RDI = 0;
  lVar5 = __dynamic_cast(this_00,&Object::typeinfo,&AudioStreamPlayback::typeinfo,0);
  if (lVar5 != 0) {
    *in_RDI = lVar5;
    cVar3 = RefCounted::reference();
    if (cVar3 == '\0') {
      *in_RDI = 0;
    }
  }
  cVar3 = RefCounted::unreference();
  if ((cVar3 != '\0') && (cVar3 = predelete_handler((Object *)this_00), cVar3 != '\0')) {
    (**(code **)(*(long *)this_00 + 0x140))(this_00);
    Memory::free_static(this_00,false);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AudioStreamSynchronized::_validate_property(PropertyInfo&) const */

void __thiscall
AudioStreamSynchronized::_validate_property(AudioStreamSynchronized *this,PropertyInfo *param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  wchar32 wVar6;
  long in_FS_OFFSET;
  bool bVar7;
  long local_48;
  CowData<char32_t> local_40 [8];
  CowData<char32_t> local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  if (*(long *)(param_1 + 8) != 0) {
    plVar1 = (long *)(*(long *)(param_1 + 8) + -0x10);
    do {
      lVar2 = *plVar1;
      if (lVar2 == 0) goto LAB_001018dc;
      LOCK();
      lVar5 = *plVar1;
      bVar7 = lVar2 == lVar5;
      if (bVar7) {
        *plVar1 = lVar2 + 1;
        lVar5 = lVar2;
      }
      UNLOCK();
    } while (!bVar7);
    if (lVar5 != -1) {
      local_48 = *(long *)(param_1 + 8);
    }
  }
LAB_001018dc:
  cVar3 = String::operator!=((String *)&local_48,"stream_count");
  if ((cVar3 != '\0') && (cVar3 = String::begins_with((char *)&local_48), cVar3 != '\0')) {
    wVar6 = (wchar32)local_40;
    String::get_slicec(wVar6,(int)&local_48);
    String::get_slicec((wchar32)local_38,wVar6);
    iVar4 = String::to_int();
    CowData<char32_t>::_unref(local_38);
    CowData<char32_t>::_unref(local_40);
    if (*(int *)(this + 0x348) <= iVar4) {
      *(undefined4 *)(param_1 + 0x28) = 8;
    }
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
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* AudioStreamSynchronized::_bind_methods() */

void AudioStreamSynchronized::_bind_methods(void)

{
  long *plVar1;
  code *pcVar2;
  undefined *puVar3;
  MethodBind *pMVar4;
  uint uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long in_FS_OFFSET;
  CowData<char32_t> *local_160;
  undefined8 local_140;
  CowData<char32_t> local_138 [8];
  long local_130;
  long local_128;
  long local_120;
  long local_118;
  long local_110;
  long local_108;
  long local_100;
  long local_f8;
  long local_f0;
  char *local_e8;
  undefined8 local_e0;
  char *local_d8;
  long local_d0;
  long *local_c8;
  int local_c0;
  long local_b8;
  undefined4 local_b0;
  char *local_a8;
  undefined8 local_a0;
  char *local_98;
  char *pcStack_90;
  undefined8 local_88;
  char *local_78;
  char *pcStack_70;
  undefined8 local_68;
  char **local_58;
  undefined1 auStack_50 [16];
  long local_40;
  
  puVar3 = PTR__LC42_0010cd40;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_a0 = 0;
  local_a8 = "stream_count";
  local_58 = &local_a8;
  uVar5 = (uint)&local_58;
  D_METHODP((char *)&local_d8,(char ***)"set_stream_count",uVar5);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar4 = create_method_bind<AudioStreamSynchronized,int>(set_stream_count);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar1 = local_c8;
  if (local_c8 != (long *)0x0) {
    LOCK();
    plVar7 = local_c8 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_c8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar8 = local_c8[-1];
      lVar6 = 0;
      local_c8 = (long *)0x0;
      plVar7 = plVar1;
      if (lVar8 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar6 = lVar6 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar8 != lVar6);
      }
      Memory::free_static(plVar1 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_d8,(char ***)"get_stream_count",0);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar4 = create_method_bind<AudioStreamSynchronized,int>(get_stream_count);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar1 = local_c8;
  if (local_c8 != (long *)0x0) {
    LOCK();
    plVar7 = local_c8 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_c8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar8 = local_c8[-1];
      lVar6 = 0;
      local_c8 = (long *)0x0;
      plVar7 = plVar1;
      if (lVar8 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar6 = lVar6 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar8 != lVar6);
      }
      Memory::free_static(plVar1 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  local_68 = 0;
  local_78 = puVar3;
  pcStack_70 = "audio_stream";
  auStack_50._0_8_ = &pcStack_70;
  local_58 = &local_78;
  D_METHODP((char *)&local_d8,(char ***)"set_sync_stream",uVar5);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar4 = create_method_bind<AudioStreamSynchronized,int,Ref<AudioStream>>(set_sync_stream);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar1 = local_c8;
  if (local_c8 != (long *)0x0) {
    LOCK();
    plVar7 = local_c8 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_c8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar8 = local_c8[-1];
      lVar6 = 0;
      local_c8 = (long *)0x0;
      plVar7 = plVar1;
      if (lVar8 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar6 = lVar6 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar8 != lVar6);
      }
      Memory::free_static(plVar1 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  local_78 = "stream_index";
  pcStack_70 = (char *)0x0;
  local_58 = &local_78;
  D_METHODP((char *)&local_d8,(char ***)"get_sync_stream",uVar5);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar4 = create_method_bind<AudioStreamSynchronized,Ref<AudioStream>,int>(get_sync_stream);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar1 = local_c8;
  if (local_c8 != (long *)0x0) {
    LOCK();
    plVar7 = local_c8 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_c8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar8 = local_c8[-1];
      lVar6 = 0;
      local_c8 = (long *)0x0;
      plVar7 = plVar1;
      if (lVar8 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar6 = lVar6 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar8 != lVar6);
      }
      Memory::free_static(plVar1 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  local_88 = 0;
  local_98 = puVar3;
  pcStack_90 = "volume_db";
  auStack_50._0_8_ = &pcStack_90;
  local_58 = &local_98;
  D_METHODP((char *)&local_d8,(char ***)"set_sync_stream_volume",uVar5);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar4 = create_method_bind<AudioStreamSynchronized,int,float>(set_sync_stream_volume);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar1 = local_c8;
  if (local_c8 != (long *)0x0) {
    LOCK();
    plVar7 = local_c8 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_c8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar8 = local_c8[-1];
      lVar6 = 0;
      local_c8 = (long *)0x0;
      plVar7 = plVar1;
      if (lVar8 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar6 = lVar6 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar8 != lVar6);
      }
      Memory::free_static(plVar1 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  local_78 = "stream_index";
  pcStack_70 = (char *)0x0;
  local_58 = &local_78;
  D_METHODP((char *)&local_d8,(char ***)"get_sync_stream_volume",uVar5);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar4 = create_method_bind<AudioStreamSynchronized,float,int>(get_sync_stream_volume);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar1 = local_c8;
  if (local_c8 != (long *)0x0) {
    LOCK();
    plVar7 = local_c8 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_c8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar8 = local_c8[-1];
      lVar6 = 0;
      local_c8 = (long *)0x0;
      plVar7 = plVar1;
      if (lVar8 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar6 = lVar6 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar8 != lVar6);
      }
      Memory::free_static(plVar1 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_f0,true);
  _scs_create((char *)&local_f8,true);
  local_120 = 0;
  local_d8 = "";
  local_d0 = 0;
  String::parse_latin1((StrRange *)&local_120);
  local_d8 = "Add Stream";
  local_128 = 0;
  local_d0 = 10;
  String::parse_latin1((StrRange *)&local_128);
  RTR((String *)&local_118,(String *)&local_128);
  operator+((char *)&local_110,(String *)"Streams,stream_,unfoldable,page_size=999,add_button_text="
           );
  StringName::StringName((StringName *)&local_100,(String *)&local_110,false);
  itos((long)local_138);
  operator+((char *)&local_130,(String *)&_LC48);
  local_108 = 0;
  local_d8 = "stream_count";
  local_d0 = 0xc;
  String::parse_latin1((StrRange *)&local_108);
  local_d8 = (char *)CONCAT44(local_d8._4_4_,2);
  local_d0 = 0;
  if (local_108 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_d0,(CowData *)&local_108);
  }
  local_c8 = (long *)0x0;
  local_c0 = 1;
  local_b8 = 0;
  if (local_130 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_130);
    local_b0 = 0x40006;
    if (local_c0 == 0x11) {
      StringName::StringName((StringName *)&local_e8,(String *)&local_b8,false);
      if (local_c8 == (long *)local_e8) {
        if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_c8 = (long *)local_e8;
      }
      goto LAB_0010242a;
    }
  }
  local_b0 = 0x40006;
  StringName::operator=((StringName *)&local_c8,(StringName *)&local_100);
LAB_0010242a:
  local_160 = (CowData<char32_t> *)&local_b8;
  local_140 = 0;
  local_e8 = "AudioStreamSynchronized";
  local_e0 = 0x17;
  String::parse_latin1((StrRange *)&local_140);
  StringName::StringName((StringName *)&local_e8,(String *)&local_140,false);
  ClassDB::add_property
            ((StringName *)&local_e8,(PropertyInfo *)&local_d8,(StringName *)&local_f8,
             (StringName *)&local_f0,-1);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_140);
  lVar8 = local_b8;
  if (local_b8 != 0) {
    LOCK();
    plVar1 = (long *)(local_b8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_b8 = 0;
      Memory::free_static((void *)(lVar8 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_c8 != (long *)0x0)) {
    StringName::unref();
  }
  lVar8 = local_d0;
  if (local_d0 != 0) {
    LOCK();
    plVar1 = (long *)(local_d0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_d0 = 0;
      Memory::free_static((void *)(lVar8 + -0x10),false);
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_130);
  CowData<char32_t>::_unref(local_138);
  if ((StringName::configured != '\0') && (local_100 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
  if ((StringName::configured != '\0') &&
     (((local_f8 == 0 || (StringName::unref(), StringName::configured != '\0')) && (local_f0 != 0)))
     ) {
    StringName::unref();
  }
  lVar8 = 0;
  do {
    _scs_create((char *)&local_f0,true);
    _scs_create((char *)&local_f8,true);
    local_d8 = "AudioStream";
    local_100 = 0;
    local_108 = 0;
    local_d0 = 0xb;
    String::parse_latin1((StrRange *)&local_108);
    local_d8 = "/stream";
    local_118 = 0;
    local_d0 = 7;
    String::parse_latin1((StrRange *)&local_118);
    itos((long)&local_128);
    operator+((char *)&local_120,(String *)"stream_");
    String::operator+((String *)&local_110,(String *)&local_120);
    local_d8 = (char *)CONCAT44(local_d8._4_4_,0x18);
    local_d0 = 0;
    if (local_110 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_d0,(CowData *)&local_110);
    }
    local_c8 = (long *)0x0;
    local_c0 = 0x11;
    local_b8 = 0;
    if (local_108 == 0) {
LAB_00102e03:
      local_b0 = 0xe;
      StringName::StringName((StringName *)&local_e8,(String *)local_160,false);
      if (local_c8 == (long *)local_e8) {
        if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_c8 = (long *)local_e8;
      }
    }
    else {
      CowData<char32_t>::_ref(local_160,(CowData *)&local_108);
      local_b0 = 0xe;
      if (local_c0 == 0x11) goto LAB_00102e03;
      StringName::operator=((StringName *)&local_c8,(StringName *)&local_100);
    }
    local_130 = 0;
    local_e8 = "AudioStreamSynchronized";
    local_e0 = 0x17;
    String::parse_latin1((StrRange *)&local_130);
    StringName::StringName((StringName *)&local_e8,(String *)&local_130,false);
    ClassDB::add_property
              ((StringName *)&local_e8,(PropertyInfo *)&local_d8,(StringName *)&local_f8,
               (StringName *)&local_f0,(int)lVar8);
    if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
      StringName::unref();
    }
    lVar6 = local_130;
    if (local_130 != 0) {
      LOCK();
      plVar1 = (long *)(local_130 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_130 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
    lVar6 = local_b8;
    if (local_b8 != 0) {
      LOCK();
      plVar1 = (long *)(local_b8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_b8 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
    if ((StringName::configured != '\0') && (local_c8 != (long *)0x0)) {
      StringName::unref();
    }
    lVar6 = local_d0;
    if (local_d0 != 0) {
      LOCK();
      plVar1 = (long *)(local_d0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_d0 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
    lVar6 = local_110;
    if (local_110 != 0) {
      LOCK();
      plVar1 = (long *)(local_110 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_110 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
    lVar6 = local_120;
    if (local_120 != 0) {
      LOCK();
      plVar1 = (long *)(local_120 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_120 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
    lVar6 = local_128;
    if (local_128 != 0) {
      LOCK();
      plVar1 = (long *)(local_128 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_128 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
    lVar6 = local_118;
    if (local_118 != 0) {
      LOCK();
      plVar1 = (long *)(local_118 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_118 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
    lVar6 = local_108;
    if (local_108 != 0) {
      LOCK();
      plVar1 = (long *)(local_108 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_108 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
    if ((((StringName::configured != '\0') &&
         ((local_100 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
        ((local_f8 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
       (local_f0 != 0)) {
      StringName::unref();
    }
    _scs_create((char *)&local_f0,true);
    _scs_create((char *)&local_f8,true);
    local_d8 = "-60,12,0.01,suffix:db";
    local_100 = 0;
    local_108 = 0;
    local_d0 = 0x15;
    String::parse_latin1((StrRange *)&local_108);
    local_d8 = "/volume";
    local_118 = 0;
    local_d0 = 7;
    String::parse_latin1((StrRange *)&local_118);
    itos((long)&local_128);
    operator+((char *)&local_120,(String *)"stream_");
    String::operator+((String *)&local_110,(String *)&local_120);
    local_d8 = (char *)CONCAT44(local_d8._4_4_,3);
    local_d0 = 0;
    if (local_110 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_d0,(CowData *)&local_110);
    }
    local_c8 = (long *)0x0;
    local_c0 = 1;
    local_b8 = 0;
    if (local_108 == 0) {
LAB_00102dde:
      local_b0 = 0xe;
      StringName::operator=((StringName *)&local_c8,(StringName *)&local_100);
    }
    else {
      CowData<char32_t>::_ref(local_160,(CowData *)&local_108);
      local_b0 = 0xe;
      if (local_c0 != 0x11) goto LAB_00102dde;
      StringName::StringName((StringName *)&local_e8,(String *)local_160,false);
      if (local_c8 == (long *)local_e8) {
        if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_c8 = (long *)local_e8;
      }
    }
    local_130 = 0;
    local_e8 = "AudioStreamSynchronized";
    local_e0 = 0x17;
    String::parse_latin1((StrRange *)&local_130);
    StringName::StringName((StringName *)&local_e8,(String *)&local_130,false);
    ClassDB::add_property
              ((StringName *)&local_e8,(PropertyInfo *)&local_d8,(StringName *)&local_f8,
               (StringName *)&local_f0,(int)lVar8);
    if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
      StringName::unref();
    }
    lVar6 = local_130;
    if (local_130 != 0) {
      LOCK();
      plVar1 = (long *)(local_130 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_130 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
    lVar6 = local_b8;
    if (local_b8 != 0) {
      LOCK();
      plVar1 = (long *)(local_b8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_b8 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
    if ((StringName::configured != '\0') && (local_c8 != (long *)0x0)) {
      StringName::unref();
    }
    lVar6 = local_d0;
    if (local_d0 != 0) {
      LOCK();
      plVar1 = (long *)(local_d0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_d0 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
    lVar6 = local_110;
    if (local_110 != 0) {
      LOCK();
      plVar1 = (long *)(local_110 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_110 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
    lVar6 = local_120;
    if (local_120 != 0) {
      LOCK();
      plVar1 = (long *)(local_120 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_120 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
    lVar6 = local_128;
    if (local_128 != 0) {
      LOCK();
      plVar1 = (long *)(local_128 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_128 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
    lVar6 = local_118;
    if (local_118 != 0) {
      LOCK();
      plVar1 = (long *)(local_118 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_118 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
    lVar6 = local_108;
    if (local_108 != 0) {
      LOCK();
      plVar1 = (long *)(local_108 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_108 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
    if (((StringName::configured != '\0') &&
        ((local_100 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
       (((local_f8 == 0 || (StringName::unref(), StringName::configured != '\0')) && (local_f0 != 0)
        ))) {
      StringName::unref();
    }
    lVar8 = lVar8 + 1;
    if (lVar8 == 0x20) {
      StringName::StringName((StringName *)&local_e8,"MAX_STREAMS",false);
      local_d8 = "AudioStreamSynchronized";
      local_f0 = 0;
      local_f8 = 0;
      local_d0 = 0x17;
      String::parse_latin1((StrRange *)&local_f8);
      StringName::StringName((StringName *)&local_d8,(String *)&local_f8,false);
      ClassDB::bind_integer_constant
                ((StringName *)&local_d8,(StringName *)&local_f0,(StringName *)&local_e8,0x20,false)
      ;
      if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
      if ((StringName::configured != '\0') &&
         (((local_f0 == 0 || (StringName::unref(), StringName::configured != '\0')) &&
          (local_e8 != (char *)0x0)))) {
        StringName::unref();
      }
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
  } while( true );
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



/* Resource::set_last_modified_time(unsigned long) */

void __thiscall Resource::set_last_modified_time(Resource *this,ulong param_1)

{
  *(ulong *)(this + 0x198) = param_1;
  return;
}



/* Resource::set_import_last_modified_time(unsigned long) */

void __thiscall Resource::set_import_last_modified_time(Resource *this,ulong param_1)

{
  *(ulong *)(this + 0x1a0) = param_1;
  return;
}



/* AudioStreamPlayback::set_is_sample(bool) */

void AudioStreamPlayback::set_is_sample(bool param_1)

{
  return;
}



/* AudioStreamPlayback::get_is_sample() const */

undefined8 AudioStreamPlayback::get_is_sample(void)

{
  return 0;
}



/* AudioStreamPlayback::set_sample_playback(Ref<AudioSamplePlayback> const&) */

void AudioStreamPlayback::set_sample_playback(Ref *param_1)

{
  return;
}



/* AudioStream::can_be_sampled() const */

undefined8 AudioStream::can_be_sampled(void)

{
  return 0;
}



/* AudioStreamSynchronized::is_class_ptr(void*) const */

uint __thiscall AudioStreamSynchronized::is_class_ptr(AudioStreamSynchronized *this,void *param_1)

{
  return (uint)CONCAT71(0x10cb,(undefined4 *)param_1 == &AudioStream::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10ca,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10cb,(undefined4 *)param_1 == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10cb,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10cb,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* AudioStreamSynchronized::_getv(StringName const&, Variant&) const */

undefined8 AudioStreamSynchronized::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* AudioStreamSynchronized::_setv(StringName const&, Variant const&) */

undefined8 AudioStreamSynchronized::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* AudioStreamSynchronized::_property_can_revertv(StringName const&) const */

undefined8 AudioStreamSynchronized::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* AudioStreamSynchronized::_property_get_revertv(StringName const&, Variant&) const */

undefined8 AudioStreamSynchronized::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* AudioStreamSynchronized::_notificationv(int, bool) */

void AudioStreamSynchronized::_notificationv(int param_1,bool param_2)

{
  return;
}



/* AudioStreamSynchronized::is_meta_stream() const */

undefined8 AudioStreamSynchronized::is_meta_stream(void)

{
  return 1;
}



/* AudioStreamPlaybackSynchronized::is_class_ptr(void*) const */

uint __thiscall
AudioStreamPlaybackSynchronized::is_class_ptr(AudioStreamPlaybackSynchronized *this,void *param_1)

{
  return (uint)CONCAT71(0x10cb,(undefined4 *)param_1 ==
                               &AudioStreamPlayback::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10ca,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10cb,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10cb,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* AudioStreamPlaybackSynchronized::_getv(StringName const&, Variant&) const */

undefined8 AudioStreamPlaybackSynchronized::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* AudioStreamPlaybackSynchronized::_setv(StringName const&, Variant const&) */

undefined8 AudioStreamPlaybackSynchronized::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* AudioStreamPlaybackSynchronized::_validate_propertyv(PropertyInfo&) const */

void AudioStreamPlaybackSynchronized::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* AudioStreamPlaybackSynchronized::_property_can_revertv(StringName const&) const */

undefined8 AudioStreamPlaybackSynchronized::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* AudioStreamPlaybackSynchronized::_property_get_revertv(StringName const&, Variant&) const */

undefined8
AudioStreamPlaybackSynchronized::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* AudioStreamPlaybackSynchronized::_notificationv(int, bool) */

void AudioStreamPlaybackSynchronized::_notificationv(int param_1,bool param_2)

{
  return;
}



/* MethodBindTRC<float, int>::_gen_argument_type(int) const */

int __thiscall
MethodBindTRC<float,int>::_gen_argument_type(MethodBindTRC<float,int> *this,int param_1)

{
  return 3 - (uint)(param_1 == 0);
}



/* MethodBindTRC<float, int>::get_argument_meta(int) const */

byte __thiscall
MethodBindTRC<float,int>::get_argument_meta(MethodBindTRC<float,int> *this,int param_1)

{
  if (-1 < param_1) {
    return -(param_1 == 0) & 3;
  }
  return 9;
}



/* MethodBindT<int, float>::_gen_argument_type(int) const */

int __thiscall MethodBindT<int,float>::_gen_argument_type(MethodBindT<int,float> *this,int param_1)

{
  int iVar1;
  
  iVar1 = 3 - (uint)(param_1 == 0);
  if (1 < (uint)param_1) {
    iVar1 = 0;
  }
  return iVar1;
}



/* MethodBindT<int, float>::get_argument_meta(int) const */

char __thiscall MethodBindT<int,float>::get_argument_meta(MethodBindT<int,float> *this,int param_1)

{
  char cVar1;
  
  cVar1 = '\x03';
  if (param_1 != 0) {
    cVar1 = (param_1 == 1) * '\t';
  }
  return cVar1;
}



/* MethodBindTRC<Ref<AudioStream>, int>::_gen_argument_type(int) const */

int __thiscall
MethodBindTRC<Ref<AudioStream>,int>::_gen_argument_type
          (MethodBindTRC<Ref<AudioStream>,int> *this,int param_1)

{
  return (-(uint)(param_1 == 0) & 0xffffffea) + 0x18;
}



/* MethodBindTRC<Ref<AudioStream>, int>::get_argument_meta(int) const */

byte __thiscall
MethodBindTRC<Ref<AudioStream>,int>::get_argument_meta
          (MethodBindTRC<Ref<AudioStream>,int> *this,int param_1)

{
  return -(param_1 == 0) & 3;
}



/* MethodBindT<int, Ref<AudioStream> >::_gen_argument_type(int) const */

int __thiscall
MethodBindT<int,Ref<AudioStream>>::_gen_argument_type
          (MethodBindT<int,Ref<AudioStream>> *this,int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if ((uint)param_1 < 2) {
    iVar1 = (-(uint)(param_1 == 0) & 0xffffffea) + 0x18;
  }
  return iVar1;
}



/* MethodBindT<int, Ref<AudioStream> >::get_argument_meta(int) const */

byte __thiscall
MethodBindT<int,Ref<AudioStream>>::get_argument_meta
          (MethodBindT<int,Ref<AudioStream>> *this,int param_1)

{
  return -(param_1 == 0) & 3;
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



/* MethodBindT<int>::~MethodBindT() */

void __thiscall MethodBindT<int>::~MethodBindT(MethodBindT<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010c878;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<int>::~MethodBindT() */

void __thiscall MethodBindT<int>::~MethodBindT(MethodBindT<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010c878;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010c8d8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010c8d8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<int, Ref<AudioStream> >::~MethodBindT() */

void __thiscall
MethodBindT<int,Ref<AudioStream>>::~MethodBindT(MethodBindT<int,Ref<AudioStream>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010c938;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<int, Ref<AudioStream> >::~MethodBindT() */

void __thiscall
MethodBindT<int,Ref<AudioStream>>::~MethodBindT(MethodBindT<int,Ref<AudioStream>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010c938;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Ref<AudioStream>, int>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Ref<AudioStream>,int>::~MethodBindTRC(MethodBindTRC<Ref<AudioStream>,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010c998;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Ref<AudioStream>, int>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Ref<AudioStream>,int>::~MethodBindTRC(MethodBindTRC<Ref<AudioStream>,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010c998;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<int, float>::~MethodBindT() */

void __thiscall MethodBindT<int,float>::~MethodBindT(MethodBindT<int,float> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010c9f8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<int, float>::~MethodBindT() */

void __thiscall MethodBindT<int,float>::~MethodBindT(MethodBindT<int,float> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010c9f8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<float, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<float,int>::~MethodBindTRC(MethodBindTRC<float,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010ca58;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<float, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<float,int>::~MethodBindTRC(MethodBindTRC<float,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010ca58;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* Resource::get_base_extension() const */

Resource * __thiscall Resource::get_base_extension(Resource *this)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)this = 0;
  String::parse_latin1((StrRange *)this);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AudioStreamSynchronized::get_save_class() const */

AudioStreamSynchronized * __thiscall
AudioStreamSynchronized::get_save_class(AudioStreamSynchronized *this)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)this = 0;
  String::parse_latin1((StrRange *)this);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AudioStreamPlaybackSynchronized::_get_class_namev() const */

undefined8 * AudioStreamPlaybackSynchronized::_get_class_namev(void)

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
LAB_00103933:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00103933;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,
                 "AudioStreamPlaybackSynchronized");
      goto LAB_0010399e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"AudioStreamPlaybackSynchronized"
            );
LAB_0010399e:
  return &_get_class_namev()::_class_name_static;
}



/* AudioStreamSynchronized::_get_class_namev() const */

undefined8 * AudioStreamSynchronized::_get_class_namev(void)

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
LAB_00103a23:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00103a23;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"AudioStreamSynchronized");
      goto LAB_00103a8e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"AudioStreamSynchronized");
LAB_00103a8e:
  return &_get_class_namev()::_class_name_static;
}



/* AudioStreamSynchronized::~AudioStreamSynchronized() */

void __thiscall AudioStreamSynchronized::~AudioStreamSynchronized(AudioStreamSynchronized *this)

{
  AudioStreamSynchronized *pAVar1;
  void *pvVar2;
  Object *pOVar3;
  char cVar4;
  AudioStreamSynchronized *pAVar5;
  bool bVar6;
  
  pvVar2 = *(void **)(this + 0x4d0);
  *(undefined ***)this = &PTR__initialize_classv_0010c470;
  if (pvVar2 != (void *)0x0) {
    if (*(int *)(this + 0x4f4) != 0) {
      if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x4f0) * 4) != 0) {
        memset(*(void **)(this + 0x4e8),0,
               (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x4f0) * 4) * 4);
      }
      *(undefined4 *)(this + 0x4f4) = 0;
    }
    Memory::free_static(pvVar2,false);
    Memory::free_static(*(void **)(this + 0x4e0),false);
    Memory::free_static(*(void **)(this + 0x4d8),false);
    Memory::free_static(*(void **)(this + 0x4e8),false);
  }
  pAVar5 = this + 0x450;
  do {
    while ((pAVar1 = pAVar5 + -8, pAVar5 = pAVar5 + -8, *(long *)pAVar1 == 0 ||
           (cVar4 = RefCounted::unreference(), cVar4 == '\0'))) {
LAB_00103b80:
      if (this + 0x350 == pAVar5) goto LAB_00103bd0;
    }
    pOVar3 = *(Object **)pAVar5;
    cVar4 = predelete_handler(pOVar3);
    if (cVar4 == '\0') goto LAB_00103b80;
    (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
    Memory::free_static(pOVar3,false);
  } while (this + 0x350 != pAVar5);
LAB_00103bd0:
  bVar6 = StringName::configured != '\0';
  *(code **)this = strlen;
  if ((((((bVar6) &&
         ((*(long *)(this + 0x330) == 0 || (StringName::unref(), StringName::configured != '\0'))))
        && ((*(long *)(this + 0x318) == 0 || (StringName::unref(), StringName::configured != '\0')))
        ) && ((((*(long *)(this + 0x300) == 0 ||
                (StringName::unref(), StringName::configured != '\0')) &&
               ((*(long *)(this + 0x2e8) == 0 ||
                (StringName::unref(), StringName::configured != '\0')))) &&
              ((*(long *)(this + 0x2d0) == 0 ||
               (StringName::unref(), StringName::configured != '\0')))))) &&
      ((*(long *)(this + 0x2b8) == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     ((((*(long *)(this + 0x2a0) == 0 || (StringName::unref(), StringName::configured != '\0')) &&
       ((*(long *)(this + 0x288) == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      (*(long *)(this + 0x270) != 0)))) {
    StringName::unref();
  }
  Resource::~Resource((Resource *)this);
  return;
}



/* AudioStreamSynchronized::~AudioStreamSynchronized() */

void __thiscall AudioStreamSynchronized::~AudioStreamSynchronized(AudioStreamSynchronized *this)

{
  AudioStreamSynchronized *pAVar1;
  void *pvVar2;
  Object *pOVar3;
  char cVar4;
  AudioStreamSynchronized *pAVar5;
  bool bVar6;
  
  pvVar2 = *(void **)(this + 0x4d0);
  *(undefined ***)this = &PTR__initialize_classv_0010c470;
  if (pvVar2 != (void *)0x0) {
    if (*(int *)(this + 0x4f4) != 0) {
      if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x4f0) * 4) != 0) {
        memset(*(void **)(this + 0x4e8),0,
               (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x4f0) * 4) * 4);
      }
      *(undefined4 *)(this + 0x4f4) = 0;
    }
    Memory::free_static(pvVar2,false);
    Memory::free_static(*(void **)(this + 0x4e0),false);
    Memory::free_static(*(void **)(this + 0x4d8),false);
    Memory::free_static(*(void **)(this + 0x4e8),false);
  }
  pAVar5 = this + 0x450;
  do {
    while ((pAVar1 = pAVar5 + -8, pAVar5 = pAVar5 + -8, *(long *)pAVar1 == 0 ||
           (cVar4 = RefCounted::unreference(), cVar4 == '\0'))) {
LAB_00103de0:
      if (this + 0x350 == pAVar5) goto LAB_00103e30;
    }
    pOVar3 = *(Object **)pAVar5;
    cVar4 = predelete_handler(pOVar3);
    if (cVar4 == '\0') goto LAB_00103de0;
    (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
    Memory::free_static(pOVar3,false);
  } while (this + 0x350 != pAVar5);
LAB_00103e30:
  bVar6 = StringName::configured != '\0';
  *(code **)this = strlen;
  if ((((((bVar6) &&
         ((*(long *)(this + 0x330) == 0 || (StringName::unref(), StringName::configured != '\0'))))
        && ((*(long *)(this + 0x318) == 0 || (StringName::unref(), StringName::configured != '\0')))
        ) && ((((*(long *)(this + 0x300) == 0 ||
                (StringName::unref(), StringName::configured != '\0')) &&
               ((*(long *)(this + 0x2e8) == 0 ||
                (StringName::unref(), StringName::configured != '\0')))) &&
              ((*(long *)(this + 0x2d0) == 0 ||
               (StringName::unref(), StringName::configured != '\0')))))) &&
      ((*(long *)(this + 0x2b8) == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     ((((*(long *)(this + 0x2a0) == 0 || (StringName::unref(), StringName::configured != '\0')) &&
       ((*(long *)(this + 0x288) == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      (*(long *)(this + 0x270) != 0)))) {
    StringName::unref();
  }
  Resource::~Resource((Resource *)this);
  operator_delete(this,0x4f8);
  return;
}



/* AudioStreamSynchronized::get_class() const */

void AudioStreamSynchronized::get_class(void)

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



/* AudioStreamPlaybackSynchronized::get_class() const */

void AudioStreamPlaybackSynchronized::get_class(void)

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
      StringName::StringName((StringName *)&local_48,(String *)(puVar3 + 8),false);
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
      goto joined_r0x0010427c;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010427c:
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



/* PropertyListHelper::~PropertyListHelper() */

void __thiscall PropertyListHelper::~PropertyListHelper(PropertyListHelper *this)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  void *pvVar5;
  
  pvVar5 = *(void **)(this + 0x18);
  if (pvVar5 != (void *)0x0) {
    if (*(int *)(this + 0x3c) != 0) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x38) * 4);
      if (uVar2 == 0) {
        *(undefined4 *)(this + 0x3c) = 0;
        *(undefined1 (*) [16])(this + 0x28) = (undefined1  [16])0x0;
      }
      else {
        lVar4 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x20) + lVar4) != 0) {
            pvVar5 = *(void **)((long)pvVar5 + lVar4 * 2);
            *(int *)(*(long *)(this + 0x20) + lVar4) = 0;
            if (Variant::needs_deinit[*(int *)((long)pvVar5 + 0x48)] != '\0') {
              Variant::_clear_internal();
            }
            if (*(long *)((long)pvVar5 + 0x38) != 0) {
              LOCK();
              plVar1 = (long *)(*(long *)((long)pvVar5 + 0x38) + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                lVar3 = *(long *)((long)pvVar5 + 0x38);
                *(undefined8 *)((long)pvVar5 + 0x38) = 0;
                Memory::free_static((void *)(lVar3 + -0x10),false);
              }
            }
            if ((StringName::configured != '\0') && (*(long *)((long)pvVar5 + 0x28) != 0)) {
              StringName::unref();
            }
            if (*(long *)((long)pvVar5 + 0x20) != 0) {
              LOCK();
              plVar1 = (long *)(*(long *)((long)pvVar5 + 0x20) + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                lVar3 = *(long *)((long)pvVar5 + 0x20);
                *(undefined8 *)((long)pvVar5 + 0x20) = 0;
                Memory::free_static((void *)(lVar3 + -0x10),false);
              }
            }
            if (*(long *)((long)pvVar5 + 0x10) != 0) {
              LOCK();
              plVar1 = (long *)(*(long *)((long)pvVar5 + 0x10) + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                lVar3 = *(long *)((long)pvVar5 + 0x10);
                *(undefined8 *)((long)pvVar5 + 0x10) = 0;
                Memory::free_static((void *)(lVar3 + -0x10),false);
              }
            }
            Memory::free_static(pvVar5,false);
            pvVar5 = *(void **)(this + 0x18);
            *(undefined8 *)((long)pvVar5 + lVar4 * 2) = 0;
          }
          lVar4 = lVar4 + 4;
        } while (lVar4 != (ulong)uVar2 << 2);
        *(undefined4 *)(this + 0x3c) = 0;
        *(undefined1 (*) [16])(this + 0x28) = (undefined1  [16])0x0;
        if (pvVar5 == (void *)0x0) goto LAB_00104414;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_00104414:
  if (*(long *)this != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)this + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar4 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
      return;
    }
  }
  return;
}



/* RefCounted::is_class(String const&) const */

undefined8 __thiscall RefCounted::is_class(RefCounted *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_0010451f;
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
LAB_0010451f:
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
    if (cVar6 != '\0') goto LAB_001045d3;
  }
  cVar6 = String::operator==(param_1,"RefCounted");
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
              if (lVar5 == 0) goto LAB_00104683;
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
LAB_00104683:
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
      if (cVar6 != '\0') goto LAB_001045d3;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = String::operator==(param_1,"Object");
      return uVar7;
    }
  }
  else {
LAB_001045d3:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AudioStreamPlaybackSynchronized::is_class(String const&) const */

undefined8 __thiscall
AudioStreamPlaybackSynchronized::is_class(AudioStreamPlaybackSynchronized *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_001047bf;
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
LAB_001047bf:
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
    if (cVar6 != '\0') goto LAB_00104873;
  }
  cVar6 = String::operator==(param_1,"AudioStreamPlaybackSynchronized");
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
              if (lVar5 == 0) goto LAB_00104933;
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
LAB_00104933:
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
      if (cVar6 != '\0') goto LAB_00104873;
    }
    cVar6 = String::operator==(param_1,"AudioStreamPlayback");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
        return uVar7;
      }
      goto LAB_001049dc;
    }
  }
LAB_00104873:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_001049dc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RefCounted::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void RefCounted::_get_property_listv(List *param_1,bool param_2)

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
  local_78 = "RefCounted";
  local_70 = 10;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "RefCounted";
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
LAB_00104b58:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00104b58;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x00104b76;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x00104b76:
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
  StringName::StringName((StringName *)&local_78,"RefCounted",false);
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



/* Resource::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Resource::_get_property_listv(Resource *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
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
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    RefCounted::_get_property_listv((List *)this,SUB81(param_1,0));
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "Resource";
  local_70 = 8;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Resource";
  local_98 = 0;
  local_70 = 8;
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
LAB_00104f58:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00104f58;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00104f75;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00104f75:
  if (lVar2 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar4;
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
  plVar1 = *(long **)param_1;
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
  StringName::StringName((StringName *)&local_78,"Resource",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      RefCounted::_get_property_listv((List *)this,SUB81(param_1,0));
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AudioStreamPlayback::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
AudioStreamPlayback::_get_property_listv(AudioStreamPlayback *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
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
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    RefCounted::_get_property_listv((List *)this,SUB81(param_1,0));
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "AudioStreamPlayback";
  local_70 = 0x13;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "AudioStreamPlayback";
  local_98 = 0;
  local_70 = 0x13;
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
LAB_001053a8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_001053a8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x001053c5;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x001053c5:
  if (lVar2 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar4;
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
  plVar1 = *(long **)param_1;
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
  StringName::StringName((StringName *)&local_78,"AudioStreamPlayback",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      RefCounted::_get_property_listv((List *)this,SUB81(param_1,0));
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AudioStreamPlaybackSynchronized::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool)
   const */

void __thiscall
AudioStreamPlaybackSynchronized::_get_property_listv
          (AudioStreamPlaybackSynchronized *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
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
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    AudioStreamPlayback::_get_property_listv((AudioStreamPlayback *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "AudioStreamPlaybackSynchronized";
  local_70 = 0x1f;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "AudioStreamPlaybackSynchronized";
  local_98 = 0;
  local_70 = 0x1f;
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
LAB_001057f8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_001057f8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00105815;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00105815:
  if (lVar2 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar4;
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
  plVar1 = *(long **)param_1;
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
  StringName::StringName((StringName *)&local_78,"AudioStreamPlaybackSynchronized",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      AudioStreamPlayback::_get_property_listv((AudioStreamPlayback *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AudioStream::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall AudioStream::_get_property_listv(AudioStream *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
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
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    Resource::_get_property_listv((Resource *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "AudioStream";
  local_70 = 0xb;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "AudioStream";
  local_98 = 0;
  local_70 = 0xb;
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
LAB_00105c48:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00105c48;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00105c65;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00105c65:
  if (lVar2 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar4;
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
  plVar1 = *(long **)param_1;
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
  StringName::StringName((StringName *)&local_78,"AudioStream",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Resource::_get_property_listv((Resource *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AudioStreamSynchronized::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const
    */

void __thiscall
AudioStreamSynchronized::_get_property_listv
          (AudioStreamSynchronized *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
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
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    AudioStream::_get_property_listv((AudioStream *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "AudioStreamSynchronized";
  local_70 = 0x17;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "AudioStreamSynchronized";
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
LAB_00106098:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00106098;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x001060b5;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x001060b5:
  if (lVar2 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar4;
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
  plVar1 = *(long **)param_1;
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
  StringName::StringName((StringName *)&local_78,"AudioStreamSynchronized",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      AudioStream::_get_property_listv((AudioStream *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashSet<AudioStreamPlaybackSynchronized*, HashMapHasherDefault,
   HashMapComparatorDefault<AudioStreamPlaybackSynchronized*>
   >::insert(AudioStreamPlaybackSynchronized* const&) */

undefined1  [16]
HashSet<AudioStreamPlaybackSynchronized*,HashMapHasherDefault,HashMapComparatorDefault<AudioStreamPlaybackSynchronized*>>
::insert(AudioStreamPlaybackSynchronized **param_1)

{
  uint *puVar1;
  long lVar2;
  long lVar3;
  void *pvVar4;
  void *pvVar5;
  long lVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
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
  undefined1 auVar45 [16];
  ulong uStack_98;
  AudioStreamPlaybackSynchronized *local_88;
  ulong local_70;
  
  uVar32 = *(uint *)(in_RSI + 4);
  uVar31 = *(uint *)(hash_table_size_primes + (ulong)uVar32 * 4);
  local_88 = (AudioStreamPlaybackSynchronized *)*in_RSI;
  if (local_88 == (AudioStreamPlaybackSynchronized *)0x0) {
    uVar33 = (ulong)uVar31 * 4;
    lVar34 = Memory::alloc_static(uVar33,false);
    in_RSI[3] = lVar34;
    lVar34 = Memory::alloc_static((ulong)uVar31 * 8,false);
    *in_RSI = lVar34;
    lVar34 = Memory::alloc_static(uVar33,false);
    in_RSI[2] = lVar34;
    lVar34 = Memory::alloc_static(uVar33,false);
    in_RSI[1] = lVar34;
    if (uVar31 != 0) {
      memset((void *)in_RSI[3],0,uVar33);
    }
    uVar44 = *(uint *)((long)in_RSI + 0x24);
    uVar32 = *(uint *)(in_RSI + 4);
    lVar34 = *in_RDX;
    local_88 = (AudioStreamPlaybackSynchronized *)*in_RSI;
    if (local_88 != (AudioStreamPlaybackSynchronized *)0x0) goto LAB_0010646f;
  }
  else {
    uVar44 = *(uint *)((long)in_RSI + 0x24);
    lVar34 = *in_RDX;
LAB_0010646f:
    if (uVar44 != 0) {
      uVar43 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)uVar32 * 4));
      lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)uVar32 * 8);
      uVar33 = lVar34 * 0x3ffff - 1;
      uVar33 = (uVar33 ^ uVar33 >> 0x1f) * 0x15;
      uVar33 = (uVar33 ^ uVar33 >> 0xb) * 0x41;
      uVar33 = uVar33 >> 0x16 ^ uVar33;
      uVar42 = uVar33 & 0xffffffff;
      if ((int)uVar33 == 0) {
        uVar42 = 1;
      }
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar42 * lVar3;
      auVar19._8_8_ = 0;
      auVar19._0_8_ = uVar43;
      lVar36 = SUB168(auVar7 * auVar19,8);
      uVar39 = *(uint *)(in_RSI[3] + lVar36 * 4);
      uVar33 = (ulong)uVar39;
      iVar35 = SUB164(auVar7 * auVar19,8);
      if (uVar39 != 0) {
        uVar39 = 0;
        do {
          if ((int)uVar42 == (int)uVar33) {
            uVar37 = *(uint *)(in_RSI[1] + lVar36 * 4);
            uStack_98 = (ulong)uVar37;
            if (*(long *)(local_88 + uStack_98 * 8) == lVar34) goto LAB_00106911;
          }
          uVar39 = uVar39 + 1;
          auVar8._8_8_ = 0;
          auVar8._0_8_ = (ulong)(iVar35 + 1) * lVar3;
          auVar20._8_8_ = 0;
          auVar20._0_8_ = uVar43;
          lVar36 = SUB168(auVar8 * auVar20,8);
          uVar37 = *(uint *)(in_RSI[3] + lVar36 * 4);
          uVar33 = (ulong)uVar37;
          iVar35 = SUB164(auVar8 * auVar20,8);
        } while ((uVar37 != 0) &&
                (auVar9._8_8_ = 0, auVar9._0_8_ = uVar33 * lVar3, auVar21._8_8_ = 0,
                auVar21._0_8_ = uVar43, auVar10._8_8_ = 0,
                auVar10._0_8_ =
                     (ulong)((*(uint *)(hash_table_size_primes + (ulong)uVar32 * 4) + iVar35) -
                            SUB164(auVar9 * auVar21,8)) * lVar3, auVar22._8_8_ = 0,
                auVar22._0_8_ = uVar43, uVar39 <= SUB164(auVar10 * auVar22,8)));
      }
    }
  }
  if ((float)uVar31 * __LC35 < (float)(uVar44 + 1)) {
    if (uVar32 == 0x1c) {
      uStack_98 = 0;
      _err_print_error("_insert","./core/templates/hash_set.h",0xbf,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: -1"
                       ,"Hash table maximum capacity reached, aborting insertion.",0);
      uVar44 = *(uint *)((long)in_RSI + 0x24);
      uVar37 = 0xffffffff;
      local_88 = (AudioStreamPlaybackSynchronized *)*in_RSI;
      goto LAB_00106911;
    }
    uVar33 = (ulong)(uVar32 + 1);
    if (uVar32 + 1 < 2) {
      uVar33 = 2;
    }
    uVar31 = *(uint *)(hash_table_size_primes + uVar33 * 4);
    *(int *)(in_RSI + 4) = (int)uVar33;
    pvVar4 = (void *)in_RSI[3];
    uVar33 = (ulong)uVar31 * 4;
    pvVar5 = (void *)in_RSI[2];
    lVar34 = Memory::alloc_static(uVar33,false);
    in_RSI[3] = lVar34;
    lVar34 = Memory::realloc_static((void *)*in_RSI,(ulong)uVar31 * 8,false);
    *in_RSI = lVar34;
    lVar34 = Memory::alloc_static(uVar33,false);
    in_RSI[2] = lVar34;
    lVar34 = Memory::realloc_static((void *)in_RSI[1],uVar33,false);
    in_RSI[1] = lVar34;
    if (uVar31 != 0) {
      memset((void *)in_RSI[3],0,uVar33);
    }
    if (*(int *)((long)in_RSI + 0x24) != 0) {
      lVar3 = in_RSI[2];
      lVar36 = in_RSI[3];
      local_70 = 0;
      do {
        uVar39 = 0;
        uVar43 = local_70 & 0xffffffff;
        uVar41 = (undefined4)local_70;
        uVar31 = *(uint *)((long)pvVar4 + (ulong)*(uint *)((long)pvVar5 + local_70 * 4) * 4);
        uVar33 = (ulong)uVar31;
        uVar32 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
        uVar38 = CONCAT44(0,uVar32);
        lVar6 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 4) * 8);
        auVar11._8_8_ = 0;
        auVar11._0_8_ = uVar33 * lVar6;
        auVar23._8_8_ = 0;
        auVar23._0_8_ = uVar38;
        lVar2 = SUB168(auVar11 * auVar23,8) * 4;
        iVar35 = SUB164(auVar11 * auVar23,8);
        puVar1 = (uint *)(lVar36 + lVar2);
        uVar44 = *puVar1;
        uVar42 = local_70;
        while (uVar44 != 0) {
          auVar12._8_8_ = 0;
          auVar12._0_8_ = (ulong)uVar44 * lVar6;
          auVar24._8_8_ = 0;
          auVar24._0_8_ = uVar38;
          auVar13._8_8_ = 0;
          auVar13._0_8_ = (ulong)((uVar32 + iVar35) - SUB164(auVar12 * auVar24,8)) * lVar6;
          auVar25._8_8_ = 0;
          auVar25._0_8_ = uVar38;
          uVar31 = SUB164(auVar13 * auVar25,8);
          if (uVar31 < uVar39) {
            *(int *)(lVar3 + uVar43 * 4) = iVar35;
            uVar44 = *puVar1;
            *puVar1 = (uint)uVar33;
            uVar39 = *(uint *)(lVar2 + lVar34);
            uVar33 = (ulong)uVar44;
            *(uint *)(lVar2 + lVar34) = (uint)uVar43;
            uVar43 = (ulong)uVar39;
            uVar39 = uVar31;
          }
          uVar41 = (undefined4)uVar43;
          uVar31 = (uint)uVar33;
          uVar39 = uVar39 + 1;
          auVar14._8_8_ = 0;
          auVar14._0_8_ = (ulong)(iVar35 + 1) * lVar6;
          auVar26._8_8_ = 0;
          auVar26._0_8_ = uVar38;
          lVar2 = SUB168(auVar14 * auVar26,8) * 4;
          iVar35 = SUB164(auVar14 * auVar26,8);
          puVar1 = (uint *)(lVar36 + lVar2);
          uVar42 = uVar43;
          uVar44 = *puVar1;
        }
        *puVar1 = uVar31;
        *(int *)(lVar3 + uVar42 * 4) = iVar35;
        local_70 = local_70 + 1;
        *(undefined4 *)(lVar34 + lVar2) = uVar41;
      } while ((uint)local_70 < *(uint *)((long)in_RSI + 0x24));
    }
    Memory::free_static(pvVar4,false);
    Memory::free_static(pvVar5,false);
    uVar32 = *(uint *)(in_RSI + 4);
    uVar44 = *(uint *)((long)in_RSI + 0x24);
    local_88 = (AudioStreamPlaybackSynchronized *)*in_RSI;
    lVar34 = *in_RDX;
  }
  uVar42 = (ulong)uVar44;
  lVar3 = in_RSI[3];
  *(long *)(local_88 + uVar42 * 8) = lVar34;
  uVar33 = lVar34 * 0x3ffff - 1;
  uVar33 = (uVar33 ^ uVar33 >> 0x1f) * 0x15;
  uVar33 = (uVar33 ^ uVar33 >> 0xb) * 0x41;
  uVar33 = uVar33 >> 0x16 ^ uVar33;
  uVar43 = uVar33 & 0xffffffff;
  if ((int)uVar33 == 0) {
    uVar43 = 1;
  }
  uVar37 = 0;
  uVar31 = *(uint *)(hash_table_size_primes + (ulong)uVar32 * 4);
  uVar40 = CONCAT44(0,uVar31);
  uVar39 = (uint)uVar43;
  lVar36 = *(long *)(hash_table_size_primes_inv + (ulong)uVar32 * 8);
  auVar15._8_8_ = 0;
  auVar15._0_8_ = uVar43 * lVar36;
  auVar27._8_8_ = 0;
  auVar27._0_8_ = uVar40;
  lVar34 = SUB168(auVar15 * auVar27,8) * 4;
  iVar35 = SUB164(auVar15 * auVar27,8);
  lVar2 = in_RSI[2];
  puVar1 = (uint *)(lVar3 + lVar34);
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
    auVar17._0_8_ = (ulong)((uVar31 + iVar35) - SUB164(auVar16 * auVar28,8)) * lVar36;
    auVar29._8_8_ = 0;
    auVar29._0_8_ = uVar40;
    uVar32 = SUB164(auVar17 * auVar29,8);
    if (uVar32 < uVar37) {
      *(int *)(lVar2 + uVar42 * 4) = iVar35;
      uVar44 = *puVar1;
      *puVar1 = (uint)uVar43;
      uVar39 = *(uint *)(lVar34 + uVar33);
      uVar43 = (ulong)uVar44;
      *(uint *)(lVar34 + uVar33) = (uint)uVar38;
      uVar42 = (ulong)uVar39;
      uVar38 = uVar42;
      uVar37 = uVar32;
    }
    uVar44 = (uint)uVar38;
    uVar39 = (uint)uVar43;
    uVar37 = uVar37 + 1;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = (ulong)(iVar35 + 1) * lVar36;
    auVar30._8_8_ = 0;
    auVar30._0_8_ = uVar40;
    uStack_98 = SUB168(auVar18 * auVar30,8);
    lVar34 = uStack_98 * 4;
    iVar35 = SUB164(auVar18 * auVar30,8);
    puVar1 = (uint *)(lVar3 + lVar34);
    uVar32 = *puVar1;
  }
  *puVar1 = uVar39;
  *(int *)(lVar2 + uVar42 * 4) = iVar35;
  *(uint *)(uVar33 + lVar34) = uVar44;
  uVar37 = *(uint *)((long)in_RSI + 0x24);
  uVar44 = uVar37 + 1;
  *(uint *)((long)in_RSI + 0x24) = uVar44;
LAB_00106911:
  *(uint *)((long)param_1 + 0xc) = uVar37;
  *param_1 = local_88;
  *(uint *)(param_1 + 1) = uVar44;
  auVar45._8_8_ = uStack_98;
  auVar45._0_8_ = param_1;
  return auVar45;
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



/* AudioStreamSynchronized::_validate_propertyv(PropertyInfo&) const */

void __thiscall
AudioStreamSynchronized::_validate_propertyv(AudioStreamSynchronized *this,PropertyInfo *param_1)

{
  _validate_property(this,param_1);
  return;
}



/* AudioStreamSynchronized::is_class(String const&) const */

undefined8 __thiscall
AudioStreamSynchronized::is_class(AudioStreamSynchronized *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_00106aff;
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
LAB_00106aff:
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
    if (cVar6 != '\0') goto LAB_00106bb3;
  }
  cVar6 = String::operator==(param_1,"AudioStreamSynchronized");
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
              if (lVar5 == 0) goto LAB_00106c9b;
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
LAB_00106c9b:
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
      if (cVar6 != '\0') goto LAB_00106bb3;
    }
    cVar6 = String::operator==(param_1,"AudioStream");
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
                if (lVar5 == 0) goto LAB_00106d77;
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
LAB_00106d77:
        cVar6 = String::operator==(param_1,(String *)&local_60);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        if (cVar6 != '\0') goto LAB_00106bb3;
      }
      cVar6 = String::operator==(param_1,"Resource");
      if (cVar6 == '\0') {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
          return uVar7;
        }
        goto LAB_00106df1;
      }
    }
  }
LAB_00106bb3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00106df1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AudioStreamPlaybackSynchronized::_initialize_classv() */

void AudioStreamPlaybackSynchronized::_initialize_classv(void)

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
    if (AudioStreamPlayback::initialize_class()::initialized == '\0') {
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
        if ((code *)PTR__bind_methods_00110008 != RefCounted::_bind_methods) {
          RefCounted::_bind_methods();
        }
        RefCounted::initialize_class()::initialized = '\x01';
      }
      local_58 = "RefCounted";
      local_68 = 0;
      local_50 = 10;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "AudioStreamPlayback";
      local_70 = 0;
      local_50 = 0x13;
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
      if ((code *)_GLOBAL_OFFSET_TABLE_ != RefCounted::_bind_methods) {
        AudioStreamPlayback::_bind_methods();
      }
      AudioStreamPlayback::initialize_class()::initialized = '\x01';
    }
    local_58 = "AudioStreamPlayback";
    local_68 = 0;
    local_50 = 0x13;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "AudioStreamPlaybackSynchronized";
    local_70 = 0;
    local_50 = 0x1f;
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
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBind* create_method_bind<AudioStreamSynchronized, int>(void
   (AudioStreamSynchronized::*)(int)) */

MethodBind * create_method_bind<AudioStreamSynchronized,int>(_func_void_int *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_0010c878;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "AudioStreamSynchronized";
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



/* MethodBind* create_method_bind<AudioStreamSynchronized, int>(int (AudioStreamSynchronized::*)()
   const) */

MethodBind * create_method_bind<AudioStreamSynchronized,int>(_func_int *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_0010c8d8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "AudioStreamSynchronized";
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



/* MethodBind* create_method_bind<AudioStreamSynchronized, int, Ref<AudioStream> >(void
   (AudioStreamSynchronized::*)(int, Ref<AudioStream>)) */

MethodBind *
create_method_bind<AudioStreamSynchronized,int,Ref<AudioStream>>(_func_void_int_Ref *param_1)

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
  *(_func_void_int_Ref **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010c938;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "AudioStreamSynchronized";
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



/* MethodBind* create_method_bind<AudioStreamSynchronized, Ref<AudioStream>, int>(Ref<AudioStream>
   (AudioStreamSynchronized::*)(int) const) */

MethodBind *
create_method_bind<AudioStreamSynchronized,Ref<AudioStream>,int>(_func_Ref_int *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_0010c998;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "AudioStreamSynchronized";
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



/* MethodBind* create_method_bind<AudioStreamSynchronized, int, float>(void
   (AudioStreamSynchronized::*)(int, float)) */

MethodBind * create_method_bind<AudioStreamSynchronized,int,float>(_func_void_int_float *param_1)

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
  *(_func_void_int_float **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010c9f8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "AudioStreamSynchronized";
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



/* MethodBind* create_method_bind<AudioStreamSynchronized, float, int>(float
   (AudioStreamSynchronized::*)(int) const) */

MethodBind * create_method_bind<AudioStreamSynchronized,float,int>(_func_float_int *param_1)

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
  *(_func_float_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010ca58;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "AudioStreamSynchronized";
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



/* AudioStreamSynchronized::_bind_methods() [clone .cold] */

void AudioStreamSynchronized::_bind_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* AudioStreamSynchronized::_initialize_classv() */

void AudioStreamSynchronized::_initialize_classv(void)

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
    if (AudioStream::initialize_class()::initialized == '\0') {
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
          if ((code *)PTR__bind_methods_00110008 != RefCounted::_bind_methods) {
            RefCounted::_bind_methods();
          }
          RefCounted::initialize_class()::initialized = '\x01';
        }
        local_68 = 0;
        local_58 = "RefCounted";
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
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        if ((StringName::configured != '\0') && (local_60 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        Resource::_bind_methods();
        Resource::initialize_class()::initialized = '\x01';
      }
      local_58 = "Resource";
      local_68 = 0;
      local_50 = 8;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "AudioStream";
      local_70 = 0;
      local_50 = 0xb;
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
      if ((code *)PTR__bind_methods_00110010 != Resource::_bind_methods) {
        AudioStream::_bind_methods();
      }
      AudioStream::initialize_class()::initialized = '\x01';
    }
    local_58 = "AudioStream";
    local_68 = 0;
    local_50 = 0xb;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "AudioStreamSynchronized";
    local_70 = 0;
    local_50 = 0x17;
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
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x00107ee8) */
/* WARNING: Removing unreachable block (ram,0x0010807d) */
/* WARNING: Removing unreachable block (ram,0x00108089) */
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
      goto LAB_0010820e;
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
LAB_0010820e:
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
      goto LAB_0010843c;
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
LAB_0010843c:
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
      goto LAB_00108835;
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
                    /* WARNING: Could not recover jumptable at 0x00108675. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              (auVar5._0_8_,(long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8));
    return;
  }
LAB_00108835:
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
      goto LAB_00108a5d;
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
                    /* WARNING: Could not recover jumptable at 0x001088a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              (auVar4._0_8_,(long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_00108a5d:
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
      _err_print_error(&_LC66,"./core/object/method_bind.h",0x267,
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
      goto LAB_00108bc0;
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
LAB_00108bc0:
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
      goto LAB_00108e24;
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
LAB_00108e24:
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
      goto LAB_00109023;
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
LAB_00109023:
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
      goto LAB_001093f5;
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
                    /* WARNING: Could not recover jumptable at 0x00109238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8));
    return;
  }
LAB_001093f5:
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
      goto LAB_00109615;
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
                    /* WARNING: Could not recover jumptable at 0x00109457. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_00109615:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<AudioStream>, int>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Ref<AudioStream>,int>::ptrcall
          (MethodBindTRC<Ref<AudioStream>,int> *this,Object *param_1,void **param_2,void *param_3)

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
      local_48 = (Object *)0x1080d8;
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
      goto LAB_001096d9;
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
    if (pOVar5 == (Object *)0x0) goto LAB_001096d9;
    *(undefined8 *)param_3 = 0;
    goto LAB_00109721;
  }
  pOVar3 = (Object *)__dynamic_cast(local_48,&Object::typeinfo,&RefCounted::typeinfo,0);
                    /* WARNING: Load size is inaccurate */
  pOVar5 = *param_3;
  if (pOVar5 != pOVar3) {
    *(Object **)param_3 = pOVar3;
    if (pOVar3 == (Object *)0x0) {
      if (pOVar5 != (Object *)0x0) goto LAB_00109721;
    }
    else {
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        *(undefined8 *)param_3 = 0;
      }
      if (pOVar5 != (Object *)0x0) {
LAB_00109721:
        cVar1 = RefCounted::unreference();
        if (cVar1 != '\0') {
          cVar1 = predelete_handler(pOVar5);
          if (cVar1 != '\0') {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
        }
      }
      if (local_48 == (Object *)0x0) goto LAB_001096d9;
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
LAB_001096d9:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, Ref<AudioStream> >::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<int,Ref<AudioStream>>::validated_call
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
      local_68 = (Object *)0x1080d8;
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
      goto LAB_00109a09;
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
LAB_001099c0:
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
      pOVar4 = (Object *)__dynamic_cast(pOVar4,&Object::typeinfo,&AudioStream::typeinfo,0);
      if (pOVar2 != pOVar4) {
        local_68 = pOVar4;
        if (pOVar4 != (Object *)0x0) {
          cVar3 = RefCounted::reference();
          if (cVar3 == '\0') {
            local_68 = (Object *)0x0;
          }
        }
        if (pOVar2 != (Object *)0x0) goto LAB_001099c0;
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
LAB_00109a09:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, Ref<AudioStream> >::ptrcall(Object*, void const**, void*) const */

void MethodBindT<int,Ref<AudioStream>>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      local_48 = (Object *)0x1080d8;
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
      goto LAB_00109cb8;
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
LAB_00109c8d:
    local_48 = (Object *)0x0;
  }
  else {
    cVar3 = RefCounted::init_ref();
    if (cVar3 == '\0') goto LAB_00109c8d;
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
LAB_00109cb8:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<AudioStream>, int>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindTRC<Ref<AudioStream>,int>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Object *pOVar1;
  Variant *pVVar2;
  long lVar3;
  code *pcVar4;
  undefined8 uVar5;
  Object *pOVar6;
  char cVar7;
  int iVar8;
  undefined4 uVar9;
  long *plVar10;
  long lVar11;
  undefined4 in_register_00000014;
  long *plVar12;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar13;
  Variant *pVVar14;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  Object *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar12 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
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
      local_58 = (Object *)0x1080d8;
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC66,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0);
      pOVar6 = local_58;
      if (local_58 != (Object *)0x0) {
        LOCK();
        pOVar1 = local_58 + -0x10;
        *(long *)pOVar1 = *(long *)pOVar1 + -1;
        UNLOCK();
        if (*(long *)pOVar1 == 0) {
          local_58 = (Object *)0x0;
          Memory::free_static(pOVar6 + -0x10,false);
        }
      }
      lVar3 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar12 = (long *)(local_60 + -0x10);
        *plVar12 = *plVar12 + -1;
        UNLOCK();
        if (*plVar12 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar3 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00109ff0;
    }
    if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pVVar14 = param_2[0xb];
  pVVar2 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar13 = param_2[5];
    if (pVVar13 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_0010a030;
LAB_0010a020:
      pVVar13 = *(Variant **)param_4;
    }
    else {
      lVar3 = *(long *)(pVVar13 + -8);
      if ((int)lVar3 < (int)(in_R8D ^ 1)) {
LAB_0010a030:
        uVar9 = 4;
        goto LAB_00109fe5;
      }
      if (in_R8D == 1) goto LAB_0010a020;
      lVar11 = (long)((int)lVar3 + -1);
      if (lVar3 <= lVar11) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar11,lVar3,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      pVVar13 = pVVar13 + lVar11 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar14 & 1) != 0) {
      pVVar14 = *(Variant **)(pVVar14 + *(long *)((long)plVar12 + (long)pVVar2) + -1);
    }
    cVar7 = Variant::can_convert_strict(*(undefined4 *)pVVar13,2);
    uVar5 = _LC71;
    if (cVar7 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar5;
    }
    iVar8 = Variant::operator_cast_to_int(pVVar13);
    (*(code *)pVVar14)(&local_58,(Variant *)((long)plVar12 + (long)pVVar2),iVar8);
    Variant::Variant((Variant *)local_48,local_58);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_48[0];
    *(undefined8 *)(param_1 + 8) = local_40;
    *(undefined8 *)(param_1 + 0x10) = uStack_38;
    if (local_58 != (Object *)0x0) {
      cVar7 = RefCounted::unreference();
      pOVar6 = local_58;
      if (cVar7 != '\0') {
        cVar7 = predelete_handler(local_58);
        if (cVar7 != '\0') {
          (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
          Memory::free_static(pOVar6,false);
        }
      }
    }
  }
  else {
    uVar9 = 3;
LAB_00109fe5:
    *in_R9 = uVar9;
    in_R9[2] = 1;
  }
LAB_00109ff0:
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
      _err_print_error(&_LC66,"./core/object/method_bind.h",0x267,
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
      goto LAB_0010a3a8;
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
      if (in_R8D != 1) goto LAB_0010a3f0;
LAB_0010a3e0:
      pVVar12 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar12 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0010a3f0:
        uVar8 = 4;
        goto LAB_0010a39d;
      }
      if (in_R8D == 1) goto LAB_0010a3e0;
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
    uVar4 = _LC71;
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
LAB_0010a39d:
    *in_R9 = uVar8;
    in_R9[2] = 1;
  }
LAB_0010a3a8:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindT<int, Ref<AudioStream> >::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindT<int,Ref<AudioStream>>::call
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
      local_58 = (Object *)0x1080d8;
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC66,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010a8b0;
    }
    if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pVVar14 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (2 < in_R8D) {
    uVar8 = 3;
LAB_0010a8a5:
    *in_R9 = uVar8;
    in_R9[2] = 2;
    goto LAB_0010a8b0;
  }
  pVVar15 = param_2[5];
  iVar7 = 2 - in_R8D;
  if (pVVar15 == (Variant *)0x0) {
    if (iVar7 != 0) goto LAB_0010a8e8;
    this = *(Variant **)param_4;
LAB_0010a8fd:
    pVVar15 = *(Variant **)(param_4 + 8);
  }
  else {
    lVar2 = *(long *)(pVVar15 + -8);
    iVar13 = (int)lVar2;
    if (iVar13 < iVar7) {
LAB_0010a8e8:
      uVar8 = 4;
      goto LAB_0010a8a5;
    }
    if (in_R8D == 0) {
      lVar11 = (long)(iVar13 + -2);
      if (lVar2 <= lVar11) goto LAB_0010aa20;
      this = pVVar15 + lVar11 * 0x18;
    }
    else {
      this = *(Variant **)param_4;
      if (in_R8D == 2) goto LAB_0010a8fd;
    }
    lVar11 = (long)(int)((in_R8D ^ 1) + (iVar13 - iVar7));
    if (lVar2 <= lVar11) {
LAB_0010aa20:
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
  uVar4 = _LC74;
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
LAB_0010a819:
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
      pOVar9 = (Object *)__dynamic_cast(pOVar9,&Object::typeinfo,&AudioStream::typeinfo,0);
      if (pOVar5 != pOVar9) {
        local_58 = pOVar9;
        if (pOVar9 != (Object *)0x0) {
          cVar6 = RefCounted::reference();
          if (cVar6 == '\0') {
            local_58 = (Object *)0x0;
          }
        }
        if (pOVar5 != (Object *)0x0) goto LAB_0010a819;
      }
    }
  }
  cVar6 = Variant::can_convert_strict(*(undefined4 *)this,2);
  uVar4 = _LC71;
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
LAB_0010a8b0:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<AudioStream>, int>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<Ref<AudioStream>,int>::validated_call
          (MethodBindTRC<Ref<AudioStream>,int> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  Object *pOVar1;
  Object *pOVar2;
  char *pcVar3;
  char cVar4;
  code *pcVar5;
  long *plVar6;
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
      plVar6 = *(long **)(param_1 + 0x118);
      if (plVar6 == (long *)0x0) {
        plVar6 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar6 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar6) {
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
                       ,(StringName *)&local_48,0);
      pcVar3 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar6 = (long *)(local_48 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
      pOVar2 = local_50;
      if (local_50 != (Object *)0x0) {
        LOCK();
        pOVar1 = local_50 + -0x10;
        *(long *)pOVar1 = *(long *)pOVar1 + -1;
        UNLOCK();
        if (*(long *)pOVar1 == 0) {
          local_50 = (Object *)0x0;
          Memory::free_static(pOVar2 + -0x10,false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010abdc;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar5 = *(code **)(this + 0x58);
  if (((ulong)pcVar5 & 1) != 0) {
    pcVar5 = *(code **)(pcVar5 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar5)(&local_50,param_1 + *(long *)(this + 0x60),*(undefined4 *)(*param_2 + 8));
  if (local_50 == (Object *)0x0) {
    Variant::ObjData::unref();
  }
  else {
    local_48 = *(char **)(local_50 + 0x60);
    local_40 = local_50;
    Variant::ObjData::ref((ObjData *)(param_3 + 8));
  }
  if (local_50 != (Object *)0x0) {
    cVar4 = RefCounted::unreference();
    pOVar2 = local_50;
    if (cVar4 != '\0') {
      cVar4 = predelete_handler(local_50);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
  }
LAB_0010abdc:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
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
    goto LAB_0010af25;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  iVar6 = 2 - uVar10;
  if (lVar1 == 0) {
    if (iVar6 == 0) {
      this = (Variant *)*plVar8;
LAB_0010af5d:
      this_00 = (Variant *)plVar8[1];
      goto LAB_0010ae85;
    }
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    iVar11 = (int)lVar2;
    if (iVar6 <= iVar11) {
      if (uVar10 == 0) {
        lVar9 = (long)(iVar11 + -2);
        if (lVar2 <= lVar9) goto LAB_0010af78;
        this = (Variant *)(lVar1 + lVar9 * 0x18);
      }
      else {
        this = (Variant *)*plVar8;
        if (uVar10 == 2) goto LAB_0010af5d;
      }
      lVar9 = (long)(int)((uVar10 ^ 1) + (iVar11 - iVar6));
      if (lVar2 <= lVar9) {
LAB_0010af78:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      this_00 = (Variant *)(lVar1 + lVar9 * 0x18);
LAB_0010ae85:
      *(undefined4 *)param_6 = 0;
      if (((ulong)param_2 & 1) != 0) {
        param_2 = *(_func_void_int_float **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
      }
      cVar5 = Variant::can_convert_strict(*(undefined4 *)this_00,3);
      uVar4 = _LC75;
      if (cVar5 == '\0') {
        *(undefined4 *)param_6 = 2;
        *(undefined8 *)(param_6 + 4) = uVar4;
      }
      fVar12 = Variant::operator_cast_to_float(this_00);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
      uVar4 = _LC71;
      if (cVar5 == '\0') {
        *(undefined4 *)param_6 = 2;
        *(undefined8 *)(param_6 + 4) = uVar4;
      }
      Variant::operator_cast_to_int(this);
                    /* WARNING: Could not recover jumptable at 0x0010af0f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*param_2)((int)(param_1 + (long)param_3),fVar12);
      return;
    }
  }
  uVar7 = 4;
LAB_0010af25:
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
      _err_print_error(&_LC66,"./core/object/method_bind.h",0x154,
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
      goto LAB_0010b016;
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
LAB_0010b016:
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
    goto LAB_0010b31d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_0010b380;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_0010b380:
      uVar6 = 4;
LAB_0010b31d:
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
      goto LAB_0010b29b;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0010b29b:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_int **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
  uVar4 = _LC71;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_int(this);
                    /* WARNING: Could not recover jumptable at 0x0010b2f6. Too many branches */
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
      _err_print_error(&_LC66,"./core/object/method_bind.h",0x154,
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
      goto LAB_0010b3e6;
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
LAB_0010b3e6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info_helper<int>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<int>(int param_1,int *param_2,PropertyInfo *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long lVar4;
  int iVar5;
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
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar5 = *param_2;
  if (iVar5 != param_1) goto LAB_0010b627;
  local_78 = 0;
  local_68 = &_LC5;
  local_80 = 0;
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
LAB_0010b725:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_0010b725;
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  *(undefined4 *)param_3 = local_68._0_4_;
  if (*(long *)(param_3 + 8) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 8));
    uVar3 = local_60._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    *(undefined8 *)(param_3 + 8) = uVar3;
  }
  if (*(long *)(param_3 + 0x10) != local_60._8_8_) {
    StringName::unref();
    uVar3 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(param_3 + 0x10) = uVar3;
  }
  *(int *)(param_3 + 0x18) = local_50;
  if (*(long *)(param_3 + 0x20) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 0x20));
    lVar4 = local_48;
    local_48 = 0;
    *(long *)(param_3 + 0x20) = lVar4;
  }
  *(undefined4 *)(param_3 + 0x28) = local_40;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
  iVar5 = *param_2;
LAB_0010b627:
  *param_2 = iVar5 + 1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindT<int>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindT<int>::_gen_argument_type_info(int param_1)

{
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar1;
  long in_FS_OFFSET;
  int local_14;
  long local_10;
  
  pPVar1 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)pPVar1 = 0;
  *(undefined4 *)(pPVar1 + 0x18) = 0;
  *(undefined8 *)(pPVar1 + 0x20) = 0;
  *(undefined4 *)(pPVar1 + 0x28) = 6;
  *(undefined1 (*) [16])(pPVar1 + 8) = (undefined1  [16])0x0;
  local_14 = 0;
  call_get_argument_type_info_helper<int>(in_EDX,&local_14,pPVar1);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pPVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<AudioStream>, int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Ref<AudioStream>,int>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  long local_78;
  ulong local_70;
  char *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX == 0) {
    local_68 = (char *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_70 = local_70 & 0xffffffff00000000;
    local_60 = (undefined1  [16])0x0;
    call_get_argument_type_info_helper<int>(0,(int *)&local_70,(PropertyInfo *)&local_68);
    *puVar3 = local_68._0_4_;
    *(undefined8 *)(puVar3 + 2) = local_60._0_8_;
    *(undefined8 *)(puVar3 + 4) = local_60._8_8_;
    puVar3[6] = (undefined4)local_50;
    *(undefined8 *)(puVar3 + 8) = local_48;
    puVar3[10] = local_40;
    goto LAB_0010b965;
  }
  local_70 = 0;
  local_68 = "AudioStream";
  local_78 = 0;
  local_60._8_8_ = local_60._0_8_;
  local_60._0_8_ = 0xb;
  String::parse_latin1((StrRange *)&local_78);
  *puVar3 = 0x18;
  puVar3[6] = 0x11;
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar3[10] = 6;
LAB_0010ba77:
    StringName::StringName((StringName *)&local_68,(String *)(puVar3 + 8),false);
    if (*(char **)(puVar3 + 4) == local_68) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      *(char **)(puVar3 + 4) = local_68;
    }
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)&local_78);
    puVar3[10] = 6;
    if (puVar3[6] == 0x11) goto LAB_0010ba77;
    StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_70);
  }
  lVar2 = local_78;
  if (local_78 != 0) {
    LOCK();
    plVar1 = (long *)(local_78 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_78 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_0010b965:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<float, int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<float,int>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  long lVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  long local_78;
  ulong local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX == 0) {
    local_68 = (undefined *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_70 = local_70 & 0xffffffff00000000;
    local_60 = (undefined1  [16])0x0;
    call_get_argument_type_info_helper<int>(0,(int *)&local_70,(PropertyInfo *)&local_68);
    *puVar4 = local_68._0_4_;
    *(undefined8 *)(puVar4 + 2) = local_60._0_8_;
    *(undefined8 *)(puVar4 + 4) = local_60._8_8_;
    puVar4[6] = (undefined4)local_50;
    *(undefined8 *)(puVar4 + 8) = local_48;
    puVar4[10] = local_40;
    goto LAB_0010bb75;
  }
  local_70 = 0;
  local_68 = &_LC5;
  local_78 = 0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._0_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_78);
  *puVar4 = 3;
  puVar4[6] = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar4[10] = 6;
LAB_0010bc87:
    StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_70);
    lVar3 = local_78;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_78);
    puVar4[10] = 6;
    if (puVar4[6] != 0x11) goto LAB_0010bc87;
    StringName::StringName((StringName *)&local_68,(String *)(puVar4 + 8),false);
    if (*(undefined **)(puVar4 + 4) == local_68) {
      lVar3 = local_78;
      if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
        StringName::unref();
        lVar3 = local_78;
      }
    }
    else {
      StringName::unref();
      *(undefined **)(puVar4 + 4) = local_68;
      lVar3 = local_78;
    }
  }
  local_78 = lVar3;
  if (lVar3 != 0) {
    LOCK();
    plVar1 = (long *)(lVar3 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_78 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_0010bb75:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, float>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindT<int,float>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long lVar4;
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar5;
  long in_FS_OFFSET;
  int local_8c;
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
  
  pPVar5 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)pPVar5 = 0;
  *(undefined4 *)(pPVar5 + 0x18) = 0;
  *(undefined8 *)(pPVar5 + 0x20) = 0;
  *(undefined4 *)(pPVar5 + 0x28) = 6;
  *(undefined1 (*) [16])(pPVar5 + 8) = (undefined1  [16])0x0;
  local_8c = 0;
  call_get_argument_type_info_helper<int>(in_EDX,&local_8c,pPVar5);
  if (in_EDX != local_8c) goto LAB_0010bd44;
  local_78 = 0;
  local_68 = &_LC5;
  local_80 = 0;
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
LAB_0010be45:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_0010be45;
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  *(undefined4 *)pPVar5 = local_68._0_4_;
  if (*(long *)(pPVar5 + 8) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(pPVar5 + 8));
    uVar3 = local_60._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    *(undefined8 *)(pPVar5 + 8) = uVar3;
  }
  if (*(long *)(pPVar5 + 0x10) != local_60._8_8_) {
    StringName::unref();
    uVar3 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(pPVar5 + 0x10) = uVar3;
  }
  *(int *)(pPVar5 + 0x18) = local_50;
  if (*(long *)(pPVar5 + 0x20) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(pPVar5 + 0x20));
    lVar4 = local_48;
    local_48 = 0;
    *(long *)(pPVar5 + 0x20) = lVar4;
  }
  *(undefined4 *)(pPVar5 + 0x28) = local_40;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
LAB_0010bd44:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pPVar5;
}



/* MethodBindT<int, Ref<AudioStream> >::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindT<int,Ref<AudioStream>>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  long lVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar4;
  long in_FS_OFFSET;
  int local_8c;
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
  
  pPVar4 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)pPVar4 = 0;
  *(undefined4 *)(pPVar4 + 0x18) = 0;
  *(undefined8 *)(pPVar4 + 0x20) = 0;
  *(undefined4 *)(pPVar4 + 0x28) = 6;
  *(undefined1 (*) [16])(pPVar4 + 8) = (undefined1  [16])0x0;
  local_8c = 0;
  call_get_argument_type_info_helper<int>(in_EDX,&local_8c,pPVar4);
  if (in_EDX != local_8c) goto LAB_0010bfd4;
  local_78 = 0;
  local_68 = "AudioStream";
  local_80 = 0;
  local_60._0_8_ = 0xb;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (char *)CONCAT44(local_68._4_4_,0x18);
  local_50 = 0x11;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_0010c19d:
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
    if (local_50 == 0x11) goto LAB_0010c19d;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  *(undefined4 *)pPVar4 = local_68._0_4_;
  if (*(long *)(pPVar4 + 8) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(pPVar4 + 8));
    uVar2 = local_60._0_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_60._8_8_;
    local_60 = auVar1 << 0x40;
    *(undefined8 *)(pPVar4 + 8) = uVar2;
  }
  if (*(long *)(pPVar4 + 0x10) != local_60._8_8_) {
    StringName::unref();
    uVar2 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(pPVar4 + 0x10) = uVar2;
  }
  *(int *)(pPVar4 + 0x18) = local_50;
  if (*(long *)(pPVar4 + 0x20) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(pPVar4 + 0x20));
    lVar3 = local_48;
    local_48 = 0;
    *(long *)(pPVar4 + 0x20) = lVar3;
  }
  *(undefined4 *)(pPVar4 + 0x28) = local_40;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
LAB_0010bfd4:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pPVar4;
}



/* AudioStreamSynchronized::AudioStreamSynchronized() */

void AudioStreamSynchronized::_GLOBAL__sub_I_AudioStreamSynchronized(void)

{
  if (AudioStreamRandomizer::base_property_helper != '\0') {
    return;
  }
  AudioStreamRandomizer::base_property_helper = 1;
  AudioStreamRandomizer::base_property_helper._56_8_ = 2;
  AudioStreamRandomizer::base_property_helper._64_8_ = 0;
  AudioStreamRandomizer::base_property_helper._0_16_ = (undefined1  [16])0x0;
  AudioStreamRandomizer::base_property_helper._24_16_ = (undefined1  [16])0x0;
  AudioStreamRandomizer::base_property_helper._40_16_ = (undefined1  [16])0x0;
  __cxa_atexit(PropertyListHelper::~PropertyListHelper,AudioStreamRandomizer::base_property_helper,
               &__dso_handle);
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* AudioStreamSynchronized::~AudioStreamSynchronized() */

void __thiscall AudioStreamSynchronized::~AudioStreamSynchronized(AudioStreamSynchronized *this)

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
/* MethodBindTRC<Ref<AudioStream>, int>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Ref<AudioStream>,int>::~MethodBindTRC(MethodBindTRC<Ref<AudioStream>,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<int, Ref<AudioStream> >::~MethodBindT() */

void __thiscall
MethodBindT<int,Ref<AudioStream>>::~MethodBindT(MethodBindT<int,Ref<AudioStream>> *this)

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
/* StringName::~StringName() */

void __thiscall StringName::~StringName(StringName *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* PropertyListHelper::~PropertyListHelper() */

void __thiscall PropertyListHelper::~PropertyListHelper(PropertyListHelper *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


